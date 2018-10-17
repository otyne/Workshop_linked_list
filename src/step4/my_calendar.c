/*
** EPITECH PROJECT, 2018
** my final calendar
** File description:
** final result
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void show_doublemonth(week_t *days)
{
    int end = 30;

    while (end != 0) {
        if (end < 10)
            my_putchar('0');
        my_put_nbr(end);
        my_putstr(": ");
        my_putstr(days->data);
        my_putchar('\n');
        end -= 1;
        days = days->prev;
    }
}

week_t *my_calendar(char *f_day, week_t *days)
{
    int i = 0;
    char *week[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    days = third_step(f_day, days);
    my_doublecircular(&days);
    while (my_strcmp(week[i], f_day) != 0) {
        days = days->next;
        i = i + 1;
    }
    return (days);
}
