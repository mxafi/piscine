void    ft_foreach(int *tab, int length, void(*f)(int));
void    ft_putnbr(int nb);
int main(void)
{
    int tab[1337];
    int i = 0;
    while (i < 1337)
    {
        tab[i] = i;
        i++;
    }
    ft_foreach(tab, 1337, &ft_putnbr);
    return (0);
}