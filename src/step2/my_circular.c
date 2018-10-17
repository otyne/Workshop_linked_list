/*
** EPITECH PROJECT, 2018
** circular linked list
** File description:
** circular
*/

#include <unistd.h>
#include "my.h"

void my_circular(week_t **days)
{
    week_t *tmp = *days;

    while (tmp->next != NULL)
	tmp = tmp->next;
    tmp->next = *days;
}
