#ifndef model
#define model

#include <stdio.h>
#include <curses.h>

typedef enum
{
    HOME,
    LOGIN,
    ADMINSTUDENT
} WINDOWS;

typedef struct
{
    WINDOWS currWindow;
    int shouldClose;
    int curPos;
} windowModel;

windowModel initWindow(void);

#endif