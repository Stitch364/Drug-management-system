#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

void sum_medicine(Linklist* head) {
	//遍历即可
	int s = 0;
	Linklist* p;
	p = head->next;
	if (p == NULL) {
		printf("当前没有任何药品信息！\n");
	}

	while (p != NULL) {
		s += p->sum;
		p = p->next;
	}
	printf("总药品剩余量为: %d\n", s);
}