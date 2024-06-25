#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
void change_medicine(Linklist* head) {
	Linklist* p, * q;
	q = head;
	int m;
	printf("请输入要修改的药品信息：\n");
	printf("药品编号：");
	scanf("%s", &n);
	while (q->next != NULL) {
		if (strcmp(q->next->id, n) == 0) {
			p = q->next;
			printf("已查找到该药品信息。\n");
			printf( "药品编号:%s  名称:%s  剩余量:%d  价格:%d  生产日期:%s  保质期:%s\n", p->id
				, p->name, p->sum, p->price, p->production, p->time);
			printf("----------------------------------");
			printf("请选择需要更改的选项：\n");
			printf("(1) 药品编号\n");
			printf("(2) 药品名字\n");
			printf("(3) 剩余量\n");
			printf("(4) 价格\n");
			printf("(5) 生产日期\n");
			printf("(6) 保质期\n");
			printf("(7) 全部\n");
			printf("(0) 返回\n");
			scanf("%d", &m);
			while (m > 7 || m < 0) {
				printf("输入的数字有误！\n请重新输入：");
				scanf("%d", &m);
			}

			switch (m)
			{
			case 1:
				printf("\n请输入更改后的药品编号：");
				scanf("%s", p->id);
				printf("信息修改成功！\n");
				break;
			case 2:
				printf("请输入更改后的药品名字：");
				scanf("%s", p->name);
				printf("\n");
				printf("信息修改成功！\n");
				break;
			case 3:
				printf("请输入更改后的药品剩余量：");
				scanf("%d", &p->sum);
				printf("\n");
				printf("信息修改成功！\n");
				break;
			case 4:
				printf("请输入更改后的药品价格：");
				scanf("%d", &p->price);
				printf("\n");
				printf("信息修改成功！\n");
				break;
			case 5:
				printf("请输入更改后的药品生产日期：");
				scanf("%s", p->production);
				printf("\n");
				printf("信息修改成功！\n");
				break;
			case 6:
				printf("请输入更改后的药品保质期：");
				scanf("%s", p->time);
				printf("\n");
				printf("信息修改成功！\n");
				break;
			case 7:
				printf("请输入更改后的药品全部信息：\n");
				printf("药品编号：");
				scanf("%s", p->id);
				printf("\n");
				printf("药品名字：");
				scanf("%s", p->name);
				printf("\n");
				printf("药品余量：");
				scanf("%d", &p->sum);
				printf("\n");
				printf("药品价格：");
				scanf("%d", &p->price);
				printf("\n");
				printf("药品生产日期：");
				scanf("%s", p->production);
				printf("\n");
				printf("药品保质期：");
				scanf("%s", p->time);
				printf("\n");
				printf("药品的全部信息已修改！\n");
				break;
			case 0:
				printf("即将退出！");
				Sleep(2000);
				system("cls");
				return;
			default:
				break;
			}
			return;
		}
		//指针后移
		q = q->next;
	}

	//没找到药品信息；
	if (q->next == NULL) {
		printf("没有此药品的信息!\n");
	}
	return;
}