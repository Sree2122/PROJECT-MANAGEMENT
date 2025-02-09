#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROJECTS 100

Project projects[MAX_PROJECTS];
int num_projects = 0;

void add_project(int id, const char *name, const char *description);
void list_projects();
Project* find_project(int id); // Helper function