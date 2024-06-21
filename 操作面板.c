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
	int flag = 1;
	if(flag)
	{
		switch (i)
		{
		case 1:

			flag = 0;
			break;
		case 2:

			flag = 0;
			break;
		case 3:

			flag = 0;
			break;
		case 4:

			flag = 0;
			break;
		case 5:

			flag = 0;
			break;
		case 6:

			flag = 0;
			break;
		case 7:
			flag 
				= 0;
			break;
		case 8:

			flag = 0;
			break;
		case 9:

			flag = 0;
			break;
		default:
			printf("请输入有效的数字！\n");
			break;
		}
	}

}