/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** print rev alpha
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    for (char let = 'z'; let >= 'a'; let--)
        my_putchar(let);
    return (0);
}
