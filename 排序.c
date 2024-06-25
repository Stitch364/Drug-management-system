#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
void sort(Linklist* head)//排序 
{
	int f;
	int flag = 1;

	do {
		printf("请选择排序的方式:  (1) 按价格升序排序    （2）按药品剩余量降序排序\n其他： （0）退出\n");
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
			price_medicine(head);
			break;
		case 2:
			number_medicine(head);
			break;
		}
		printf("\n继续排序请输入  1  \n退出请输入  0\n");
		scanf("%d", &flag);
		Sleep(2000);
		system("cls");
	} while (flag);
}


void price_medicine(Linklist* head)//按价格升序（选择） 
{
	Linklist* h, * p, * q, * c;
	h = head->next;
	if (h == NULL)
	{
		printf("没有任何药品信息");
	}
	while (h != NULL)
	{
		p = h;
		q = h->next;
		Linklist* t;  //暂存节点 
		t = (Linklist*)malloc(sizeof(Linklist));
		if (t == NULL) {
			return;
		}
		while (q != NULL)
		{
			if (q->price < p->price)
			{
				strcpy(t->id, q->id);  //先复制q结点信息到t 
				strcpy(t->name, q->name);
				t->sum = q->sum;
				t->price = q->price;

				strcpy(q->id, p->id);  //复制p结点信息到q
				strcpy(q->name, p->name);
				q->sum = p->sum;
				q->price = p->price;

				strcpy(p->id, t->id);  //复制暂存结点信息到p
				strcpy(p->name, t->name);
				p->sum = t->sum;
				p->price = t->price;
			}
			q = q->next;
		}
		h = h->next;
	}
	printf("排序后的药品信息为：\n");
	c = head->next;
	while (c != NULL)
	{
		printf("药品序号:%s 名称:%s 剩余量:%d 价格：%d\n",
			c->id, c->name, c->sum, c->price);
		c = c->next;
	}
}


void number_medicine(Linklist* head)//按药品剩余量排序（选择） 
{
	Linklist* h, * p, * q, * c;
	h = head->next;
	if (h == NULL)
	{
		printf("没有任何药品信息");
	}
	while (h != NULL)
	{
		p = h;
		q = h->next;
		Linklist* t;  //暂存节点 
		t = (Linklist*)malloc(sizeof(Linklist));
		if (t == NULL) {
			return;
		}
		while (q != NULL)
		{
			if (q->sum > p->sum)
			{
				strcpy(t->id, q->id);  //先复制q结点信息到t 
				strcpy(t->name, q->name);
				t->sum = q->sum;
				t->price = q->price;

				strcpy(q->id, p->id);  //复制p结点信息到q
				strcpy(q->name, p->name);
				q->sum = p->sum;
				q->price = p->price;

				strcpy(p->id, t->id);  //复制暂存结点信息到p
				strcpy(p->name, t->name);
				p->sum = t->sum;
				p->price = t->price;
			}
			q = q->next;
		}
		h = h->next;
	}
	printf("排序后的药品信息为：\n");
	c = head->next;
	while (c != NULL)
	{
		printf("药品序号:%s 名称:%s 剩余量:%d 价格：%d\n",
			c->id, c->name, c->sum, c->price);
		c = c->next;
	}
}
