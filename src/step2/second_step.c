/*
** EPITECH PROJECT, 2018
** second step
** File description:
** making it circular
*/

#include <unistd.h>
#include "my.h"

void show_month(week_t *days)
{
    int end = 1;

    while (end != 31) {
        if (end < 10)
            my_putchar('0');
        my_put_nbr(end);
        my_putstr(": ");
        my_putstr(days->data);
        my_putchar('\n');
        end += 1;
        days = days->next;
    }
}

week_t *second_step(char *f_day, week_t *days)
{
    int i = 0;
    char *week[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    days = first_step(f_day, days);
    my_circular(&days);
    while (my_strcmp(week[i], f_day) != 0) {
        days = days->next;
        i = i + 1;
    }
    return (days);
}
