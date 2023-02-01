#include <stdio.h>

using namespace std;

int strlen(char* str)
{
	int i;
	for (i = 0; str[i]; i++);
	return i;
}

int strcmp(char* A, char* B)
{
	int i = 0;
	while (A[i] != '\0')
	{
		if (A[i] != B[i])
			break;
		i++;
	}
	return (A[i] - B[i]);
}

void strcpy(char* A, char* B)
{
	while (*B != '\0')
	{
		*A = *B;
		A++, B++;
	}
	*A = '\0';
}

int main()
{
	char A[100] = { "Hello World!" }; //12
	char B[100] = { "Hello Siyun" };
	char des[100];

	printf("%s\n", A);

	int len = strlen(A);
	if (strcmp(A, B) == 0)
		puts("O");
	else
		puts("X");

	strcpy(des, A);
	printf("%s\n", des);
}
