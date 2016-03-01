/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	
	if ((str == NULL) || (word==NULL))
	{
		return NULL;
	}
	int i, j = 0, count = 0, temp;
	//printf("\nsentence-%s word-%s\n", str, word);
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		//printf("\nstr[%d]-%c word[%d]-%c\n", i, str[i], j, word[j]);
		if (str[i] == word[j])
		{
			temp = i;
			while (word[j] != '\0')
			{
				if (str[temp] == word[j])
				{
					j += 1;
					temp += 1;
				}
				else
				{
					break;
				}
			}
			if (word[j] == '\0')
			{
				count += 1;
				j = 0;
			}
		}
		/*else
		{
		j = 0;
		}
		if (word[j] == '\0')
		{
		count += 1;
		j = 0;
		}*/
	}
	return count;
}


int count_word_int_str_way_2_recursion(char *str, char *word){

	if ((str == NULL) || (word == NULL))
	{
		return NULL;
	}
	static int i = 0, j = 0;
	if (str[i++] == word[j++]);
}

