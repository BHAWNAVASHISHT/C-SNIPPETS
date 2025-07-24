#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    int age;
    char address[100];
    char department[50];
    float salary;
};

void printEmployeeDetails(struct Employee *emp) {
    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp->id);
    printf("Employee Name: %s\n", emp->name);
    printf("Age: %d\n", emp->age);
    printf("Address: %s\n", emp->address);
    printf("Department: %s\n", emp->department);
    printf("Salary: %.2f\n", emp->salary);
}

int main() {
    struct Employee employees[10];
    int i, searchId, found = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        getchar(); // To consume the newline character left in the buffer
        printf("Employee Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0; // Remove newline
        printf("Age: ");
        scanf("%d", &employees[i].age);
        getchar();
        printf("Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = 0; // Remove newline
        printf("Department: ");
        fgets(employees[i].department, sizeof(employees[i].department), stdin);
        employees[i].department[strcspn(employees[i].department, "\n")] = 0; // Remove newline
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        getchar(); // To consume the newline character left in the buffer
        printf("\n");
    }

    printf("Enter Employee ID to search: ");
    scanf("%d", &searchId);

    for (i = 0; i < 10; i++) {
        if (employees[i].id == searchId) {
            found = 1;
            printEmployeeDetails(&employees[i]); // Use pointer to print details
            break;
        }
    }

    if (!found) {
        printf("Employee with ID %d not found.\n", searchId);
    }

    return 0;
}
