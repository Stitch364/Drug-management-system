#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

//基本思路同注册
void denglu() {
	FILE* Fname;
	int i = 0;
	char ch;
	struct user a;
	char password[20];
	char name[20];
	int	flag = 0;

	printf("     用户登录    \n");
	do {
		Fname= fopen("C:\\Users\\13961\\Desktop\\Name.txt", "r");
		printf("\n请输入用户名：\n");

		scanf("%s", &name[0]);
		//判断用户输入的用户名是否符合要求
		while (strlen(name) > 20) {
			printf("输入的用户名过长，请重新输入！\n");
			//不符合则重新输入
			scanf("%s", &name[0]);
		}
		printf("\n请输入密码：\n");
		//隐式输入密码
		i = 0;
		while ((password[i] = _getch()) != '\r') {
			if (password[i] == '\b' && i > 0) {
				printf("\b \b");
				i--;
			}
			else {
				printf("*");
				i++;
			}
		}
		password[i] = '\0';
		while (!feof(Fname)) {
			fscanf(Fname, "%s %s\n", a.username, a.usermima);
			if (strcmp(name, a.username) == 0 && strcmp(password, a.username) == 0) {
				//用户名和密码都正确
				flag = 1;
				break;
			}
		}
		fclose(Fname);
		if (flag) {
			system("cls");
			printf("登录成功！\n");
			Sleep(3000);
			system("cls");
			//跳转操作页面

			break;
		}
		else {
			printf("密码错误！\n\n");
			printf("请重新进行选择\n");
			Sleep(2000);
			system("cls");
			first();
		}
	} while (0);

}