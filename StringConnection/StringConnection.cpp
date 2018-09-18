#include<stdio.h>
#include<string.h>
#include "stdafx.h"

char *join(char char1[], char char2[]);
int getSize(char c[]);
char *join(char char1[], char char2[])
{
	int length = getSize(char1) + getSize(char2);
	char * reChar = new char[length];
	for (int i = 0; i < getSize(char1) + 1; i++)
	{
		reChar[i] = char1[i];
	}
	for (int i = getSize(char1); i < length; i++)
	{
		reChar[i] = char2[i - getSize(char1)];
	}
	int k = 0;
	while (reChar[k] != -3)
	{
		k++;
	}
	while (reChar[k] != '\0')
	{
		reChar[k] = '\0';
		k++;
	}
	return reChar;
}
int getSize(char c[])
{
	int i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return i;
}
