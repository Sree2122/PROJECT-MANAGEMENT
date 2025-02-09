#ifndef PROJECT_H
#define PROJECT_H

#define MAX_PROJECT_NAME_LENGTH 100

typedef struct {
    int id;
    char name[MAX_PROJECT_NAME_LENGTH];
    char description[200];
} Project;

#endif