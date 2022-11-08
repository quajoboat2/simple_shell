#ifdef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <stdbool.h>
#include <sys/stat.h>

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* dependent function*/
int **tokener(char *line);
int handle_builtin(char **command, char *line);
void execution(char *cp, char **cmd);

