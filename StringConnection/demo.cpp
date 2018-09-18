#include<stdio.h>
#include<string.h>
#include "stdafx.h"
#pragma warning(disable:4996)

char *join(char char1[], char char2[]);
int main(void) {
	char a[10], b[10];
	scanf("%s", a);
	scanf("%s", b);
	printf("%s\n", join(a, b));
	scanf("");
	return 0;
}