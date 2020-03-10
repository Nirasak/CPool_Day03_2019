/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** print digits
*/

void my_putchar(char c);

int my_print_digits(void)
{
    for (char nb = '0'; nb <= '9'; nb++)
        my_putchar(nb);
    return (0);
}
