#include <stdio.h>
int ft_is_sort(int *tab, int length, int (*f)(int, int));
int ft_substract(int a, int b)
{
    return (a - b);
}
int main()
{
    int a[] = {};
    printf("%i\n", ft_is_sort(a, 0, &ft_substract)); 
    //printf("%i\n", ft_count_if(argv+1, &ft_str_is_numeric));
    
    return (0);
}
