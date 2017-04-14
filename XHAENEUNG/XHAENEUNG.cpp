#include <cstring>
#include <string.h>
#include <stdio.h>
#pragma warning(disable:4996)

void sort(char input[]);
int charToInt(char input[]);
int calcul(int a, int b, char oper);

int main()
{
	int Case = 0;
	scanf("%d", &Case);
	for(int num = 0 ; num < Case ; num++)
	{
		char A[6] = { 0 };
		char oper[3] = { 0 };
		char B[6] = { 0 };
		char C[11] = { 0 };
		int i = 0;
		int k = 0;
		scanf("%s %c %s %c %s", &A, &oper[0], &B, &oper[1], &C);

		sort(A);
		sort(B);
		sort(C);

		if ((calcul(charToInt(A), charToInt(B), oper[0]) <= 10) && (calcul(charToInt(A), charToInt(B), oper[0]) >= 0) && (calcul(charToInt(A), charToInt(B), oper[0]) == charToInt(C)))
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}

void sort(char input[])
{
	int i, j;
	char temp;
	for (i = 0; input[i] != 0; i++)
	{
		for (j = i + 1; input[j] != 0; j++)
		{
			if (input[i] > input[j])
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}
int charToInt(char input[])
{
	if (strcmp(input, "eorz") == 0)
		return 0;
	else if (strcmp(input, "eno") == 0)
		return 1;
	else if (strcmp(input, "otw") == 0)
		return 2;
	else if (strcmp(input, "eehrt") == 0)
		return 3;
	else if (strcmp(input, "foru") == 0)
		return 4;
	else if (strcmp(input, "efiv") == 0)
		return 5;
	else if (strcmp(input, "isx") == 0)
		return 6;
	else if (strcmp(input, "eensv") == 0)
		return 7;
	else if (strcmp(input, "eghit") == 0)
		return 8;
	else if (strcmp(input, "einn") == 0)
		return 9;
	else if (strcmp(input, "ent") == 0)
		return 10;

	return -1;
}

int calcul(int a, int b, char oper)
{
	if (oper == '+')
	{
		return a + b;
	}
	else if (oper == '*')
	{
		return a*b;
	}
	else if (oper == '-')
	{
		return a - b;
	}
	return -1;
}