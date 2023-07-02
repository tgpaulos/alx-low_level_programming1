#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate 
 * Return: number of words
 */


char **strtow(char *str)
{
	int word_count;
        int in_word;
        int word_index;
        int str_index;
	int i;
	char **words;
	int word_length;
	int word_start;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}

	word_count = 0;
	in_word = 0;
	word_index = 0;
	str_index = 0;

	while (str[str_index] != '\0')
	{
		if (str[str_index] != ' ')
		{
			if (!in_word)
			{
				word_count++;
				in_word = 1;
			}
			str_index++;
		} else {
			in_word = 0;
			str_index++;
		}
	}

	if (word_count == 0)
	{
		return NULL;
	}

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return NULL;
	}

	word_index = 0;
	str_index = 0;

	while (str[str_index] != '\0')
	{
		if (str[str_index] != ' ')
		{
			word_start = str_index;
			while (str[str_index] != ' ' && str[str_index] != '\0')
			{
				str_index++;
			}
			word_length = str_index - word_start;

			words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{

				for (i= 0; i < word_index; i++)
				{
					free(words[i]);
				}
				free(words);
				return (NULL);
			}

			
			for (i = 0; i < word_length; i++)
			{
				words[word_index][i] = str[word_start + i];
			}
			words[word_index][i] = '\0';

			word_index++;
		} else {
			str_index++;
		}
	}

	words[word_count] = NULL;

	return (words);
}
