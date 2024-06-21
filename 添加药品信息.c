#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

Linklist* add_medicine(Linklist* head) {
	printf("请输入药品信息:  \n");
	printf("药品编号: ");
	scanf("%s", n);
	Linklist* q;
	q = head;
	while (q->next != NULL) {
		if (strcmp(q->next->id, n) == 0) {
			printf("此药品已存在，无需再添加。\n");
			break;
		}
		q = q->next;
	}
	if (q->next == NULL) {
		Linklist *q = (Linklist*)malloc(sizeof(Linklist));
		if (q == NULL) {
			printf("error\n");
			return;
		}
	}
}