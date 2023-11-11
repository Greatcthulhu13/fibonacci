#include <stdio.h>
/* D.1 Level 1 number 1 (charinput.c) - char arithmetic and ASCII */
int main()
{
	char myChar , otherChar;
	printf("Enter a character: ");
	scanf("%c" , &myChar);
	printf("Enter another character: ");
	scanf(" %c", &otherChar);
	printf("myChar is %c \n", myChar);
	printf("But as an int is %d \n", myChar);
	printf("Adding one equals %c \n", myChar + 1);
	printf("But as an int equals %d \n", myChar + 1);
	printf("I can add it to otherChar and get %c \n", myChar + otherChar);
	printf("But as an int that equals %d \n", myChar + otherChar);
	return 0;
}
