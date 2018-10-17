/*
** EPITECH PROJECT, 2018
** third step
** File description:
** make it double
*/

#include <unistd.h>
#include "my.h"

void my_show_doublelist(week_t *days)
{
    int i = 0;

    while (days->next != NULL)
        days = days->next;
    while (i != 7) {
        my_put_nbr(days->index);
	my_putchar(':');
        my_putstr(days->data);
        my_putchar('\n');
        days = days->prev;
        i += 1;
    }
}

week_t *complete_doubleweek(week_t *days, char **week)
{
    int i = days->index;
    int bef = i - 1;
    int aft = i + 1;

    while (bef >= 0) {
        my_put_in_doublelist_head(&days, week[bef], bef);
        bef = bef - 1;
    }
    while (aft < 7) {
	my_put_in_doublelist_queue(&days, week[aft], aft);
	aft = aft + 1;
    }
    return (days);
}

week_t *third_step(char *f_day, week_t *days)
{
    int i = 0;
    char *week[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    while (i != 7) {
	if (my_strcmp(week[i], f_day) == 0)
            my_put_in_doublelist_head(&days, f_day, i);
        i = i + 1;
    }
    if (days != NULL)
        days = complete_doubleweek(days, week);
    return (days);
}
