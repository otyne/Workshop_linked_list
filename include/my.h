/*
** EPITECH PROJECT, 2018
** lib.h
** File description:
** lib.h
*/

#ifndef MY_H_
#define MY_H_

/* STRUCTS */

typedef struct s_week
{
    int index;
    char *data;
    struct s_week *next;
    struct s_week *prev;
} week_t;

/* PROG FUNCS */

void my_free_list(week_t *);
week_t *second_step(char *, week_t *);
week_t *first_step(char *, week_t *);
week_t *third_step(char *, week_t *);
week_t *my_calendar(char *, week_t *);
void my_circular(week_t **);
void my_doublecircular(week_t **);
void show_month(week_t *);
void show_doublemonth(week_t *);
int usage(void);
void my_show_list(week_t *);
void my_show_doublelist(week_t *);
void my_put_in_list_head(week_t **, char *, int);
void my_put_in_list_queue(week_t **, char *, int);
void my_put_in_doublelist_head(week_t **, char *, int);
void my_put_in_doublelist_queue(week_t **, char *, int);

/* LIB FUNCS */

void my_putchar(char);
int my_putstr(char *);
int my_put_nbr(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char *);
int my_str_isnum(char *);
int my_str_islower(char *);
int my_str_isupper(char *);
int my_str_isprintable(char *);
int my_putnbr_base(int, char const *);
int my_getnbr_base(char const *, char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
void my_print_params(int, char **);
void my_rev_params(int, char **);
void my_sort_params(int, char **);
int my_strlen(char *);

#endif
