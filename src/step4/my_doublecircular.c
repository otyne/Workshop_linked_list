/*
** EPITECH PROJECT, 2018
** my double circular
** File description:
** make a double linked list circular
*/

#include <unistd.h>
#include "my.h"

void my_doublecircular(week_t **days)
{
    week_t *tmp = *days;

    while (tmp->next != NULL)
        tmp = tmp->next;
    (*days)->prev = tmp;
    tmp->next = *days;
}
