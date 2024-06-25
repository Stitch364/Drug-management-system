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
	printf("5.显示所有药品信息\n");
	printf("6.统计药品总数\n");
	printf("7.药店进货\n");
	printf("8.药品售出\n");
	printf("9.退出\n");
	printf("-----------------------------\n");
	printf("\n请输入数字1-9。\n");

	int i;
	scanf("%d", &i);
	while (i > 9 ||i < 1) {
		printf("输入的数字有误！\n请重新输入：");
		scanf("%d", &i);
		printf("\n");
	}

		switch (i)
		{
		case 1:


			break;
		case 2:


			break;
		case 3:


			break;
		case 4:


			break;
		case 5:


			break;
		case 6:


			break;
		case 7:

			break;
		case 8:


			break;
		case 9:
			printf("即将退出！");
			Sleep(2000);
			break;
		default:
			break;
		}

}