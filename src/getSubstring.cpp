/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){

	//char *sub_string = (char *)malloc((j - i + 1)* sizeof(char));
	//int m = 0, n, n = 0, flag = 0;
	if (str == NULL)
	{
		return NULL;
	}
	if (i > j)
	{
		return NULL;
	}
	char *sub_string = (char *)malloc((j - i + 1)* sizeof(char));
	int m = 0, n = 0; 
	for (m = i, n = 0; m <= j; m++, n++)
	{
		sub_string[n] = str[m];
	}
	sub_string[n] = '\0';
	return sub_string;
}
