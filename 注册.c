#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"


//注册
void zhuce() {

	char Name[25];//用户名
	char password1[25];//密码
	char password2[25];
	FILE* Fname;	//储存的文件
	struct user a;
	int i = 0, flag;
	char ch;
	while (1) {
		printf("     用户注册    \n");
		printf("请输入要注册的用户名：\n");
		scanf("%s", &Name[0]);

		//判断用户输入的用户名是否符合要求
		while (strlen(Name) > 20) {
			printf("输入的用户名过长，请重新输入！\n");
			//不符合则重新输入
			scanf("%s", &Name[0]);
		}

		//打开储存用户信息的文件
		Fname = fopen("C:\\Users\\13961\\Desktop\\Name.txt", "r");

		//如果文件不存在，则创建
		if (Fname == NULL) {
			//写模式，如果文件不存在则创建文件
			Fname = fopen("C:\\Users\\13961\\Desktop\\Name.txt", "w");
			fclose(Fname);
			//读模式打开文件
			Fname = fopen("C:\\Users\\13961\\Desktop\\Name.txt", "r");
		}
		flag = 0;
		while (!feof(Fname)) {
			//格式化读入函数
			fscanf(Fname, "%s %s\n", a.username, a.usermima);
			//将正在注册的用户名与已经注册用户名比较
			//查找用户名是否重复
			if (strcmp(a.username, Name) == 0) {
				flag = 1;
				break;
			}

		}
		fclose(Fname);
		if (flag) {
			printf("该用户名已存在！\n");
			//睡眠1秒
			Sleep(2000);
			//清屏
			system("cls");
			//重新回到初始界面
			first();
		}
		else {
			while (1) {
				//隐式读取字符
				i = 0;
				printf("请输入要设置的密码：\n");
				while ((password1[i] = _getch()) != '\r') {
					if (password1[i] == '\b' && i > 0) {
						printf("\b \b");
						i--;
					}
					else {
						printf("*");
						i++;
					}
				}
				password1[i] = '\0';
				i = 0;
				printf("\n请再次输入密码:\n");
				while ((password2[i] = _getch()) != '\r') {
					if (password2[i] == '\b' && i > 0) {
						printf("\b \b");
						i--;
					}
					else {
						printf("*");
						i++;
					}
				}
				password2[i] = '\0';
				i = 0;
				//两次密码输入结束，判断两次是否输入一致
				if (strcmp(password1, password2) == 0) {
					Fname = fopen("C:\\Users\\13961\\Desktop\\Name.txt", "a");
					fprintf(Fname, "%s %s\n", Name, password1);
					fclose(Fname);
					break;
				}
				else {
					printf("\n两次输入不一致，请重新输入密码。\n");
				}
			}

		}
		printf("\n注册成功!\n");
		printf("即将返回主页面\n");
		Sleep(3000);
		break;
	}
	system("cls");
	//返回主界面
	first();
}
