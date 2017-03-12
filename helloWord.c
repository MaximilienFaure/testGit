#include <stdio.h>

int main(int argc, char *argv[])
{
	char name[20];
	printf("What's your name ?\n");
	scanf("%s", name);
	
	printf("Hello Word, %s !\n", name);
	return 0;
}
