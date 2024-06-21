#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

//将信息保存到文件中
void keep_medicine(Linklist* head) {
	//传入链表的头指针
	Linklist* p;
	p = head->next;
	//链表为空
	if (p == NULL) {
		printf("当前没有任何药品信息！\n");
		return;
	}
	//循环将链表中的信息保存在文件中
	while (p != NULL) {
		//打开文件
		FILE* medicine = fopen("C:\\Users\\13961\\Desktop\\medicine.txt", "a");
		fprintf(medicine, "药品编号:%s  名称:%s  剩余量:%d  价格:%d  生产日期:%s  保质期:%s\n",p->id
		,p->name,p->sum,p->price,p->production,p->time);
		//保存一个药品信息，打开文件关闭文件一次
		// 保存比较稳定
		//关闭文件
		fclose(medicine);

		p = p->next;
	}
	//反馈  保存成功
	printf("保存成功！\n");
}