#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);
int main(void)
{
    printf("\nReal is: %d", strcmp("jj", "jj"));
    printf("\nMine is: %d\n\n", ft_strcmp("aaaa5", "aaaa5"));
    printf("\nReal is: %d", strcmp("jj", "jjjj"));
    printf("\nMine is: %d\n\n", ft_strcmp("jj", "jjjj"));
    printf("\nReal is: %d", strcmp("jjjj", "jj"));
    printf("\nMine is: %d\n\n", ft_strcmp("jjjj", "jj"));
    return (0);
}
