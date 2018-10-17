/*
** EPITECH PROJECT, 2018
** my_put_in_list_queue
** File description:
** queued
*/

#include <stdlib.h>
#include "my.h"

void my_put_in_doublelist_queue(week_t **list, char *data, int index)
{
    week_t *tmp = *list;
    week_t *elem = malloc(sizeof(*elem));

    elem->data = data;
    elem->index = index;
    elem->next = NULL;
    elem->prev = NULL;
    if (tmp == NULL)
	*list = elem;
    else {
        while (tmp->next != NULL)
	    tmp = tmp->next;
        elem->prev = tmp;
        tmp->next = elem;
    }
}
