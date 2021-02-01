#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

#include <stdio.h>
#include <malloc.h>
typedef struct Linklist
{
	int a;
	//struct Linklist* pre;
	struct Linklist* next;
}Linklist,*Link;