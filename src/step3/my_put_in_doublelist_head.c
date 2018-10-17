/*
** EPITECH PROJECT, 2018
** put in list
** File description:
** put in list
*/

#include <stdlib.h>
#include "my.h"

void my_put_in_doublelist_head(week_t **list, char *data, int index)
{
    week_t *tmp = *list;
    week_t *elem;

    elem = malloc(sizeof(*elem));
    elem->data = data;
    elem->index = index;
    elem->next = NULL;
    elem->prev = NULL;
    if (tmp != NULL) {
        elem->next = *list;
        (*list)->prev = elem;
    }
    *list = elem;
}
