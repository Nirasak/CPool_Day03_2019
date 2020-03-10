/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** print comb2
*/

void my_putchar(char c);

void my_print_number(int a, int b)
{
    int diz_a = '0';
    int diz_b = '0';

    for (; a >= 10; a = a - 10)
        diz_a = diz_a + 1;
    my_putchar(diz_a);
    a = a + 48;
    my_putchar(a);
    my_putchar(' ');
    for (; b >= 10; b = b - 10)
        diz_b = diz_b + 1;
    my_putchar(diz_b);
    b = b + 48;
    my_putchar(b);
    return (0);
}

int my_print_comb2(void)
{
    int a = 0;
    int b = 2;

    my_print_number(0, 1);
    for (; a < 98 || b < 99; b++) {
        if (b == 100) {
            a = a + 1;
            b = a + 1;
        }
        my_putchar(',');
        my_putchar(' ');
        my_print_number(a, b);
    }
    return (0);
}
