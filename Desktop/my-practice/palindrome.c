

// WAP to check whether a string is palindrome or not
// 1. using main()

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    
    printf("enter a string\n");
    scanf("%s",str);
    
	int i = 0;
	int j = strlen(str) - 1;
	
	while (j > i)
	{
		if (str[i++] != str[j--])
		{
			printf("%s is not a palindrome\n", str);
			return;
		}
	}
	printf("the string %s is a palindrome\n", str);
	
	
	return 0;
}

// 2. using function

#include <stdio.h>
#include <string.h>

void palindrome(char str[])
{
	int i = 0;
	int j = strlen(str) - 1;

	while (j > i)
	{
		if (str[i++] != str[j--])
		{
			printf("%s is not a palindrome\n", str);
			return;
		}
	}
	printf("the string %s is a palindrome\n", str);
}

int main()
{
    char str[100];
    
    printf("enter a string\n");
    scanf("%s",str);
    
	palindrome(str);
	
	return 0;
}
