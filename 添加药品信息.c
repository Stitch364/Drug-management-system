#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

Linklist* add_medicine(Linklist* head) {
	//传入链表的头指针
	printf("请输入药品信息:  \n");
	printf("药品编号: ");
	scanf("%s", n);
	Linklist* q;
	q = head;
	//查找药品编号是否已经存在
	while (q->next != NULL) {
		//链表中查找
		//找的是该节点的下一个
		if (strcmp(q->next->id, n) == 0) {
			printf("此药品已存在，无需再添加。\n");
			break;
		}
		q = q->next;
	}

	//没找到，且链表指针q指向最后一个结点
	if (q->next == NULL) {
		Linklist *p = (Linklist*)malloc(sizeof(Linklist));
		if (p == NULL) {
			printf("error\n");
			return NULL;
		}
		strcpy(p->id, n);

		printf("药品名：");
		scanf("%s", p->name);

		printf("剩余量：");
		scanf("%d", &num);
		p->sum = num;

		printf("药品价格：");
		scanf("%d", &pc);
		p->price = pc;

		printf("生产日期：");
		scanf("%s",p->production);

		printf("保质期（天）：");
		scanf("%s", p->time);

		p->next = NULL;
		q->next = p;
		q = p;
	}
	return head;
}