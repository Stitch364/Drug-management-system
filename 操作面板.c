#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

void control() {
	printf("           控制面板\n");
	printf("-----------------------------\n");
	printf("1.增加药品信息\n");
	printf("2.查询药品信息\n");
	printf("3.修改药品信息\n");
	printf("4.删除药品信息\n");
	printf("5.插入药品信息\n");
	printf("6.显示所有药品信息\n");
	printf("7.统计药品总数\n");
	printf("8.排序查询\n");
	printf("9.查询药品价格\n");
	printf("0.退出\n");
	printf("-----------------------------\n");
	printf("\n请输入数字0-9。\n");

	int i;
	scanf("%d", &i);

	while (i > 9 ||i < 0) {
		printf("输入的数字有误！\n请重新输入：");
		scanf("%d", &i);
		printf("\n");
	}
	Linklist* head;
	//head = NULL;
	head = open_medicine();	//打开文件,将信息存入链表
		switch (i)
		{
		case 1:
			//增加药品信息
			head = add_medicine(head);
			write_medicine(head);   //重新将信息写入文件
			my_continue();
			break;
		case 2:
			//查询药品信息
			find(head);
			my_continue();
			break;
		case 3:
			//修改药品信息
			change_medicine(head);  //修改指定内容
			write_medicine(head);   //重新将信息写入文件
			my_continue();
			break;
		case 4:
			//删除药品信息
			head = delet_medicine(head);//删除指定内容
			write_medicine(head);   //重新将信息写入文件
			my_continue();
			break;
		case 5:
			//插入药品信息
			insert_medicine(head);
			write_medicine(head);   //重新将信息写入文件
			my_continue();
			break;
		case 6:
			//显示所有药品信息
			print_medicine(head);
			my_continue();
			break;
		case 7:
			//统计药品总数
			sum_medicine(head);
			my_continue();
			break;
		case 8:
			//排序查询
			sort(head);
			my_continue();
			break;
		case 9:
			//查询药品价格
			findprice_medicine(head);
			my_continue();
			break;
		case 0:
			//退出
			printf("即将退出！");
			Sleep(2000);
			break;
		default:
			break;
		}

}