#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
//遍历找即可
void findprice_medicine(Linklist* head){
	Linklist* p, * q;
	q = head;
	printf("请输入要查询的药品信息:\n");
	printf("请输入药品名: ");
	scanf("%s", &na[0]);
	while (q->next != NULL) {
		if (strcmp(q->next->name, na) == 0) {
			p = q->next;
			printf("价格：%d\n", p->price);
			return;
		}
		q = q->next;
	}
	if (q->next == NULL) {
		printf("\n没有当前的药品信息！\n");
	}
}