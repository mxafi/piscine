#include <stdio.h>
int ft_any(char **tab, int (*f)(char*));
int ft_str_is_numeric(char *str)
{
    while (*str >= '0' && *str <= '9')
        str++;
    if (*str == '\0')
        return (1);
    else
        return (0);
}
int main(int argc, char **argv)
{
    argv[argc - 1] = 0;
    int i = 1;
    while (i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }
    printf("%i\n", ft_any(argv+1, &ft_str_is_numeric));
    
    return (0);
}