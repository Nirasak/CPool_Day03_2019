/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** print comb
*/

void my_putchar(char c);

void my_print_nb(int a, int b, int c)
{
    a = a + 48;
    b = b + 48;
    c = c + 48;
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
}

int my_print_comb(void)
{
    int a = 0;
    int b = 1;

    my_print_nb(a, b, 2);
    for (int c = 3; a < 7 || b < 8 || c < 9; c++) {
        if (c == 10) {
            b = b + 1;
            c = b + 1;
        }
        if (b == 9) {
            a = a + 1;
            b = a + 1;
            c = b + 1;
        }
        my_putchar(',');
        my_putchar(' ');
        my_print_nb(a, b, c);
    }
    return (0);
}
