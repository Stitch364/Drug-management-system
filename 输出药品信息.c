#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

void print_medicine(Linklist* head) {
	Linklist* p;
		printf("----------------------------------------\n");
	for (p = head->next; p != NULL; p = p->next) {

		printf("药品编号:%s  名称:%s  剩余量:%d  价格:%d  生产日期:%s  保质期:%s\n", p->id
			, p->name, p->sum, p->price, p->production, p->time);
		printf("----------------------------------------\n");
	}
}