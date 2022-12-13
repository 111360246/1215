#include<stdio.h>
#include<stdlib.h>

void main()
{
	typedef struct _sPerson
	{
		char name[8];
		int gender;
		int age;
	}Person;
	Person P;
	printf("Please input your name¡G");
	scanf("%s", &P.name);
	printf("Please input your gender (0 for woman, 1 for man)¡G");
	scanf("%d", &P.gender);
	printf("Please input your age¡G");
	scanf("%d", &P.age);
	printf("\nHi!% s.", P.name);
	if (P.gender == 0)
	{
		printf("You are a %d-your-old woman.\n", P.age);
	}
	else
	{
		printf("You are a %d-your-old man.\n", P.age);
	}
	return 0;
}