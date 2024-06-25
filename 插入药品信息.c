#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
//首先找到插入位置
void insert_medicine(Linklist* head) {
	Linklist* p, * q;
	q = head;
	//创建新节点
	p = (Linklist*)malloc(sizeof(Linklist));
	scanf("%s", n);
	while (q->next != NULL)
	{
		if (strcmp(q->id, n) == 0)
		{
			printf("请输入药品信息:\n");
			printf("药品编号：");
			scanf("%s", p->id);
			printf("药品名：");
			scanf("%s", p->name);
			printf("剩余量：");
			scanf("%d", &num);
			p->sum = num;
			printf("药品价格：");
			scanf("%d", &pc);
			p->price = pc;
			p->next = q->next;
			q->next = p;
			q = p;
			printf("插入药品信息成功\n");
			break;
		}
		q = q->next;
	}
}