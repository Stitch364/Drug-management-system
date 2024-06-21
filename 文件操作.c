//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:6031)
//
//#include<stdio.h>
//int main() {
//	//打开，写入，读取，关闭，定位
//
//	//打开文件
//	// 返回文件指针
//	//参数：文件地址，打开模式
//	//r 读，w 写（清空再写），a+ 追加
//	FILE* fp;
//
//	fp = fopen("C:\\Users\\13961\\Desktop\\test.txt","a+");
//	if (fp == NULL) {
//		printf("打开文件失败\n");
//		return 0;
//	}
//
//	////操作
//	////fgetc()  读取一个字符
//	////没关闭之前光标位置不变
//	//char ch = fgetc(fp);
//	//printf("%c\n", ch);
//	//ch = fgetc(fp);
//	//printf("%c\n", ch);
//	//ch = fgetc(fp);
//	//printf("%c\n", ch);
//
//	////fgets()读一行
//	////文件指针移动到下一行，会读取行末换行符
//	char p[200] ;	//清零
//	////fgets(p, 200, fp);
//	////printf("%s", p);
//	////fgets(p, 200, fp);
//	////printf("%s\n", p);
//
//	//while (fgets(p, 200, fp)) {
//	//	printf("%s", p);
//	//}
//
//
//
//	////fread()函数
//	//int n = fread(p, 1, 20, fp);//返回读取的字符数
//	//p[n] = '\0';	//加入结束符
//	//printf("%s", p);
//
//
//
//	////写入一个字符
//	//fputc('A', fp);
//
//	////写入字符串
//	//char* str = "hello world!\n";
//	////fputs(str, fp);
//
//
//	////fwrite函数
//	//int num = 12345;
//	//fwrite(&num, sizeof(num), 1, fp);
//	////fwrite(str, 1, strlen(str), fp);
//
//
//	
//
//
//	//文件光标定位
//	rewind(fp);//文件指针重置到文件开头
//
//	fseek(fp, 10, SEEK_SET);
//	//开头第10个字节位置开始
//	//汉字占2个字节
//	// 负数往前，正数往后
//	//SEEK_CUR当前位置
//	//SEEK_END末尾
//	
//
//	//读取文件最后一行
//	fseek(fp, 0, SEEK_END);
//
//	
//
//
//	//关闭文件
//	fclose(fp);
//
//	return 0;
//}