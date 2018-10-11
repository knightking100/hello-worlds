#include<stdio.h>

void helloworld(char *string)
{
	if(*string)
	{
		printf("%c",*string);
		helloworld(string+1);
	}
}

int main()
{
	char string[] = "Hello World";
	helloworld(string);
	return 0;
}