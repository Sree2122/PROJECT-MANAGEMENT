#include "task.h"
#include "project.h"
#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100

Task tasks[MAX_TASKS];
int num_tasks = 0;

void add_task(int id, int project_id, const char *description);
void list_tasks(int project_id); // List tasks for a specific project
void update_task_status(int id, const char *status);
Task* find_task(int id); // Helper function