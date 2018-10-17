/*
** EPITECH PROJECT, 2018
** unit test 
** File description:
** strcmp
*/

#include "my.h"
#include <criterion/criterion.h>

Test(test_my_strcmp, test_all_compares)
{
    cr_assert_eq(my_strcmp("tamere", "tamere"), 0);
    cr_assert_eq(my_strcmp("tamere", "tonpere"), 14);
    cr_assert_eq(my_strcmp("tonpere", "tasoeur"), -14);
}
