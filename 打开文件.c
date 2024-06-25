#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
//打开文件并保存到链表中
Linklist* open_medicine() {
	//创建头指针和辅助指针
	Linklist* p, * q, * head;
	head = (Linklist*)malloc(sizeof(Linklist));
	if (head == NULL ) {
		printf("保存出错了！");
		return NULL;
	}

	//创建文件指针
	FILE* fp;
	//读模式打开文件
	fp = fopen("C:\\Users\\13961\\Desktop\\medicine.txt", "r");
	//判断文件是否成功打开
	//打开失败则退出
	if (fp == NULL) {
		printf("读取文件出错，按任意键退出！");
		exit(1);
	}
	//打开成功
	if (fp != NULL) {

		//创建链表，将文件中的药品信息写到链表中
		head->next = NULL;
		q = head;
		while (!feof(fp))
		{
			p = (Linklist*)malloc(sizeof(Linklist));
			if (p == NULL) {
				printf("保存出错了！");
				return NULL;
			}


			fscanf(fp, "药品编号:%s  名称:%s  剩余量:%d  价格:%d  生产日期:%s  保质期:%s\n", p->id
				, p->name, &p->sum, &p->price, p->production, p->time);
			q->next = p;
			q = p;
		}
		q->next = NULL;
		//关闭文件
		fclose(fp);
		printf("\n文件信息已读出\n");
	}
	//返回链表的头指针
	return head;
}