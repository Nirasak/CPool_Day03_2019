/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** print alpha
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    for (char let = 'a'; let <= 'z'; let++)
        my_putchar(let);
    return (0);
}
