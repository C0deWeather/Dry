#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

int is_palindrome_helper(char *s, int len)
{
	
	
	if (len == 0 || len == 1)
		return (1);
	else if (s[0] == s[len - 1])
	{
		return (is_palindrome_helper(s + 1, len - 2));
	}
	else
		return (0);
}

int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, _strlen_recursion(s)));
}

int main()
{
	char *s = "racecar";
	
	printf("%d\n", is_palindrome(s));
	return (0);
}