/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include <stdio.h>
char * get_last_word(char * str){

	if (str == NULL)
	{
		return NULL;
	}
	int len = 0, begin = 0, i = 0, j = 0, flag = 0;
	while (str[len] != '\0')
	{
		if (((str[len] == 32)||(len==0)) && ((str[len+1]!=32)&&(str[len+1]!='\0')))
		{
			begin = len;
		}
		len++;
	}
	char *last_word = (char *)malloc((len-- - begin)*sizeof(char));
	if (begin != 0)
	{
		begin += 1;
	}
	while (str[len] == 32)
	{
		len -= 1;
	}
	for (i = begin, j = 0; ((i < len)); i++)
	{
		last_word[j] = str[i];
		j += 1;
	}
	last_word[j] = '\0';
	return last_word;
}
