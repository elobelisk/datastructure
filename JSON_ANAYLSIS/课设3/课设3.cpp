// 课设3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "find.h"

int main()
{
	FILE *fptr;
	fptr = fopen("test.txt", "r");
	BiTree T;
	InitBiTree(T);
	Read_File(fptr, T);
	fgetc(fptr);
	FindingKey(T, fptr);
	fclose(fptr);
}

