#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));

int bytwo(int a)
{
	return (2 * a);
}
int main(void)
{
	int tab[10];
	int i = 0;
	while (i < 10)
	{
		tab[i] = i;
		i++;
	}
	int * res = ft_map(tab, 10, &bytwo);
	i = 0;
	while (i < 10)
	{
		printf("%i ", res[i]);
		i++;
	}
	return (0);
}