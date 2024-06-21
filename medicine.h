#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<windows.h> 
#include<conio.h> 
char n[5];   		//编号 
char na[20]; 	//名字 
int num;    	//剩余量 
int pc;     	//价格 
typedef struct Medicine {
	char id[5];					//药品编号
	char name[20];			//药品名字
	int sum;				//剩余量 
	int  price;				//价格
	struct Medicine* next;	//指针域 

}Linklist;

struct user
{
	char username[20];
	char usermima[20];
};


//功能 
void first();								   //登录界面 
void zhuce();								   //注册 
void denglu();								   //登录 
void control();								   //操作面板
Linklist* add_medicine(Linklist* head);        //添加药品信息 
Linklist* delet_medicine(Linklist* head);      //删除药品信息 
void change_medicine(Linklist* head);          //修改药品信息 
void find(Linklist* head);                     //查询 
void findnum_medicine(Linklist* head);         //查找药品信息(编号) 
void findname_medicine(Linklist* head);        //查找药品信息(名称)
void sort(Linklist* head);                     //排序
void price_medicine(Linklist* head);           //按照药品价格排序（升序） 
void number_medicine(Linklist* head);          //按照药品剩余量排序（降序） 
void sum_medicine(Linklist* head);             //统计总药品剩余量 
void keep_medicine(Linklist* head);            //将信息保存至文件中 
void findprice_medicine(Linklist* head);       //查询药品价格 
void insert_medicine(Linklist* head);          //插入药品信息 
Linklist* open_medicine();                     //打开文件 
void print_medicine(Linklist* head);           //输出药品信息
