#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i;
    float max_salary = 0.0;
    struct Employee *emp;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    emp = (struct Employee *) malloc(n * sizeof(struct Employee));

    for(i=0; i<n; i++) {
        printf("\nEnter details of Employee %d:\n", i+1);
        printf("Employee No.: ");
        scanf("%d", &emp[i].eno);
        printf("Employee Name: ");
        scanf("%s", emp[i].ename);
        printf("Employee Salary: ");
        scanf("%f", &emp[i].salary);
        if(emp[i].salary > max_salary) {
            max_salary = emp[i].salary;
        }
    }

    printf("\nDetails of Employee with highest salary:\n");
    for(i=0; i<n; i++) {
        if(emp[i].salary == max_salary) {
            printf("Employee No.: %d\n", emp[i].eno);
            printf("Employee Name: %s\n", emp[i].ename);
            printf("Employee Salary: %.2f\n", emp[i].salary);
            break;
        }
    }

    
    free(emp);

    return 0;
}
