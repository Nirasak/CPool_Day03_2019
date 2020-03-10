/*
** EPITECH PROJECT, 2019
** tests_my_put_nbr
** File description:
** test put nbr
*/

int main(void)
{
    my_put_nbr(0);
    my_put_nbr(-1);
    my_put_nbr(1000000);
    my_put_nbr(-123456789);
    my_put_nbr(-2147483648);
    my_put_nbr(2147483647);
}
