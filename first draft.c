#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

//初始化界面
void first()
{
	printf(" ___________________________________________________________\n");
	printf("|                 欢迎使用药店管理系统                      |\n");
	printf("|                        1-登录                             |\n");
	printf("|                        2-注册                             |\n");
	printf("|                        0-退出                             |\n");
	printf("|___________________________________________________________|\n");
	printf("请选择操作： ");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		system("cls");
		//登录，在登录函数里跳转操作面板
		denglu();
		system("cls");
		break;
	case 2:
		system("cls");
		//注册后回到主界面
		zhuce();
		break;
	case 0:
		//退出
		exit(1);
	default:
		system("cls");
		printf("请输入有效的数字！");
		Sleep(3000);
		system("cls");
		first();
	}
}


int main() 
{
	//初始化
	first();
	return 0;
}