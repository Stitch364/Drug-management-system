#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

Linklist* delet_medicine(Linklist* head) {
	Linklist* q, * p;
	q = head;
	printf("请输入要删除的药品信息：\n");
	printf("药品编号：");
	scanf("%s", &n);
	while (q->next != NULL) {
		if (strcmp(q->next->id, n) == 0) {
			p = q->next;
			q->next = p->next;
			free(p);
			printf("药品信息删除成功！\n");
			break;
		}
		q = q->next;
	} 

	if (q->next == NULL) {
		printf("没有当前药品信息！\n");
	}
	return head;
}