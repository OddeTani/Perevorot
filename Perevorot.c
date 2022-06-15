
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int WordReverse()
{
	char str[30];
	printf("Stroka: ");
	scanf("%s", str, 30);
	int L;
	L = strlen(str);
	printf("ObrStroka: ");
	for (int i = L - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	for (int i = 0; i < 30; i++)
	{
		if (str[i] == NULL)
		{
			printf("DlinaStroki: %d", i);
			break;
		}
	}
}

int main(void)
{
	WordReverse();
}