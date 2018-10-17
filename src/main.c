/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <unistd.h>
#include "my.h"

week_t *two_last_steps(int ac, char **av, week_t *days)
{
    if (my_strcmp(av[1], "3") == 0) {
        days = third_step(av[2], days);
        if (my_strcmp(av[3], "--end") == 0)
            my_show_doublelist(days);
        if (my_strcmp(av[3], "--start") == 0)
            my_show_list(days);
    }
    else if (my_strcmp(av[1], "4") == 0) {
        days = my_calendar(av[2], days);
        if (my_strcmp(av[3], "--end") == 0)
            show_doublemonth(days);
        if (my_strcmp(av[3], "--start") == 0)
            show_month(days);
    }
    return (days);
}

week_t *two_first_steps(int ac, char **av, week_t *days)
{
    if (my_strcmp(av[1], "1") == 0) {
        days = first_step(av[2], days);
        my_show_list(days);
    }
    else if (my_strcmp(av[1], "2") == 0) {
        days = second_step(av[2], days);
        show_month(days);
    }
    return (days);
}

week_t *which_step(int ac, char **av, week_t *days)
{
    if (ac == 3)
        days = two_first_steps(ac, av, days);
    if (ac == 4)
        days = two_last_steps(ac, av, days);
    return (days);
}

int main(int ac, char **av)
{
    week_t *days = NULL;
    
    if (ac < 3 || ac > 4)
        return (usage());
    else
        days = which_step(ac, av, days);
    my_free_list(days);
    return (0);
}
