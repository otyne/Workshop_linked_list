/*
** EPITECH PROJECT, 2018
** my manage list
** File description:
** my manage list
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void my_display_list(week_t *days)
{
    while (days->next != NULL) {
        my_putstr(days->data);
        my_putchar('\n');
        days = days->next;
    }
}

void my_free_list(week_t *days)
{
    week_t *prev = NULL;

    if(days == NULL)
        return;
    while (days != NULL && days->index != 6) {
        prev = days;
        days = days->next;
        free(prev);
    }
    free(days);
}
