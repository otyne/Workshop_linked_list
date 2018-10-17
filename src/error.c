/*
** EPITECH PROJECT, 2018
** error
** File description:
** error handling
*/

#include "my.h"
#include <unistd.h>

int usage(void)
{
    write(2, "USAGE:\n\n./my_calendar\tSTEP\tDAY\t[OPTIONS]\n",41);
    write(2, "STEP: Select the step you want to display (1-4)\n", 48);
    write(2, "DAY: Enter the day of the week which the month ", 48); 
    write(2, "of 30 days will start or end with.\n", 35);
    write(2, "[OPTIONS]: --start or --end\n", 28);
    return (84);
}
