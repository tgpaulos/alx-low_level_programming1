#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: input
 * @av: double pointer array
 * Return: 0
 */


char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	int current_index;
	char *result;
	int arg_length;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	current_index = 0;
	for (i = 0; i < ac; i++)
	{
		arg_length = strlen(av[i]);
		strcpy(result + current_index, av[i]);
		current_index += arg_length;
		result[current_index] = '\n';
		current_index++;
	}

	result[total_length] = '\0';

	return (result);
}
