#include "minishell.h"

void ft_print_tab(char **tab)
{
	int i;

	i = 0;
	while (tab && tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

void	ft_print_split_elem(t_split_elem *list)
{

	while (list != NULL)
	{
		printf(" %s |", list-> arg);
		list = list -> next;
	}
	printf("\n");
}


void	ft_print_input_output(t_input_output *list)
{

	while (list != NULL)
	{
		// printf("file = %s operator = %s ||", list->file_name, list->operator);
		printf("lst->name = %s  lst->operator = %s   \n", list->file_name, list->operator);
		list = list -> next;
	}
	printf("\n");
}

void ft_print_maillons(t_maillons	*maillons)
{
	printf("maillons\n{\n");
	printf("  maillons -> commande = %s\n", maillons -> command);
	printf("  maillons ->args\n  {\n");
	ft_print_split_elem(maillons -> args);
	printf("  }\n");
	printf("  maillons -> outputs\n  {\n");
	ft_print_input_output(maillons ->output);
	printf("  }\n}\n\n");
}

/*
* 	inutile actuellement a supp
*   renvoie 1 si c apparais un nombre paire de fois
*   0 sinon
*
*/

int check_pair(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str && str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	} 
	if (count == 0 || (count % 2) == 0)
		return (1);
	return (0);
}
