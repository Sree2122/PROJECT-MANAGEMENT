#include <stdio.h>
#include "project.h"
#include "task.h"

int main() {
    int choice;

    // Load data (if implemented)

    do {
        printf("\nProject Management System\n");
        printf("1. Add Project\n");
        printf("2. List Projects\n");
        printf("3. Add Task\n");
        printf("4. List Tasks (by Project)\n");
        printf("5. Update Task Status\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id;
                char name[100], description[200];
                printf("Enter project ID: ");
                scanf("%d", &id);
                printf("Enter project name: ");
                scanf(" %[^\n]s", name);
                printf("Enter project description: ");
                scanf(" %[^\n]s", description);
                add_project(id, name, description);
                break;
            }
            case 2:
                list_projects();
                break;
            case 3: {
                int id, project_id;
                char description[100];
                printf("Enter task ID: ");
                scanf("%d", &id);
                printf("Enter project ID: ");
                scanf("%d", &project_id);
                printf("Enter task description: ");
                scanf(" %[^\n]s", description);
                add_task(id, project_id, description);
                break;
            }
            case 4: {
                int project_id;
                printf("Enter project ID to list tasks: ");
                scanf("%d", &project_id);
                list_tasks(project_id);
                break;
            }
            case 5: {
                int id;
                char status[20];
                printf("Enter task ID to update status: ");
                scanf("%d", &id);
                printf("Enter new status (pending, in progress, completed): ");
                scanf(" %[^\n]s", status);
                update_task_status(id, status);
                break;
            }
            case 0:
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice!= 0);

    // Save data (if implemented)
    return 0;
}