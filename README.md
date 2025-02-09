# Project Management System (C Project - Simplified Example)

This is a *highly simplified* Project Management System application written in C. It provides a basic framework for managing projects and tasks. **This example is for educational purposes only and is not a production-ready system.** It lacks many essential features, error handling, security considerations, and scalability required for real-world use.

**Disclaimer:** This code is *not* intended for actual deployment. It is a highly simplified example for educational purposes only. Using this code in a real-world scenario without significant modifications and addressing scalability, security, and error handling is strongly discouraged.

## Features (Highly Simplified)

*   **Project Management:** Add new projects, list all projects.
*   **Task Management:** Add new tasks to a project, list tasks for a project, update task status.
*   **(Basic Menu-Driven Interface):** Simple command-line interface for interaction.

## Build Instructions (using GCC)

1.  Save all `.c` and `.h` files in the same directory.
2.  Open a terminal or command prompt in that directory.
3.  Compile:
    ```bash
    gcc main.c project_management.c task_management.c -o project_manager
    ```
4.  Run:
    ```bash
  ./project_manager
    ```

## Usage

1.  Run the executable (`./project_manager`).
2.  Follow the menu prompts to interact with the system.

## File Format (Not Implemented in Basic Example)

Data persistence (saving and loading data to a file or database) is *not* implemented in this basic example. You would need to add this functionality. Possible formats include:

*   Plain text files (CSV, JSON)
*   Binary files
*   Database (SQLite, PostgreSQL, etc.)

## Code Structure

*   `project.h`: Defines the `Project` struct.
*   `task.h`: Defines the `Task` struct.
*   `project_management.c`: Implements the core logic for managing projects.
*   `task_management.c`: Implements the core logic for managing tasks.
*   `main.c`: Contains the `main` function and handles user interaction (basic menu).

## Data Structures (Example)

```c
// project.h
typedef struct {
    int id;
    char name[MAX_PROJECT_NAME_LENGTH];
    char description[200];
} Project;

// task.h
typedef struct {
    int id;
    int project_id; // Link to project
    char description[MAX_TASK_DESCRIPTION_LENGTH];
    char status[20]; // "pending", "in progress", "completed"
} Task;
