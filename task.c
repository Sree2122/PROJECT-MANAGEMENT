#ifndef TASK_H
#define TASK_H

#define MAX_TASK_DESCRIPTION_LENGTH 100

typedef struct {
    int id;
    int project_id; // Link to project
    char description[MAX_TASK_DESCRIPTION_LENGTH];
    char status[20]; // "pending", "in progress", "completed"
} Task;

#endif