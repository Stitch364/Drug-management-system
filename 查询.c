#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
void find(Linklist* head) {
	int f;
	int flag = 1;

	do{
			printf("请输入要查找的方式:  (1) 编号    （2）名字\n其他： （0）退出\n");
			scanf("%d", &f);
			while (f < 0 || f>2) {
				printf("请输入有效的数字！\n");
				scanf("%d", &f);
			}
			switch (f) {
			case 0:
				printf("即将退出！");
				Sleep(2000);
				system("cls");
				return;
			case 1:
				findnum_medicine(head);
				break;
			case 2:
				findname_medicine(head);
				break;
			}
			printf("\n继续查询请输入  1  \n退出请输入  0\n");
			scanf("%d", &flag);
			Sleep(2000);
			system("cls");
	} while (flag);
	return;
}

void findnum_medicine(Linklist* head) {
	Linklist* p,*q;
	printf("请输入要查找的药品编号: ");
	scanf("%s", n);
	q = head;
	while (q->next != NULL) {
		if (strcmp(q->next->id, n) == 0) {
			p = q->next;
			printf("编号为%s的药品信息如下：\n",n);
			printf("药品编号:%s  名称:%s  剩余量:%d  价格:%d  生产日期:%s  保质期:%s\n", p->id
				, p->name, p->sum, p->price, p->production, p->time);
			return;
		}
		q = q->next;
	}

	if (q->next == NULL) {
		printf("未找到该药品信息。\n");
	}
	return;
}


void findname_medicine(Linklist* head) {
	Linklist* p,*q;
	printf("请输入要查找的药品名字: ");
	scanf("%s", na);
	q = head;
	while (q->next != NULL) {
		if (strcmp(q->next->name, n) == 0) {
			p = q->next;
			printf("编号为%s的药品信息如下：\n",na);
			printf("药品编号:%s  名称:%s  剩余量:%d  价格:%d  生产日期:%s  保质期:%s\n", p->id
				, p->name, p->sum, p->price, p->production, p->time);
			return;
		}
		q = q->next;
	}

	if (q->next == NULL) {
		printf("未找到该药品信息。\n");
	}
	return;
}