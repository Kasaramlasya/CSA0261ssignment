#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Student {
    char name[50];
    int rollNumber;
    int birthYear;
    int birthMonth;
    int birthDay;
    int admissionYear;
    int admissionMonth;
    int admissionDay;
};

int calculateAge(int birthYear, int birthMonth, int birthDay, int referenceYear, int referenceMonth, int referenceDay) {
    int age = referenceYear - birthYear;
    if (referenceMonth < birthMonth || (referenceMonth == birthMonth && referenceDay < birthDay)) {
        age--;
    }
    return age;
}

int main() {
    
    struct Student student;
    printf("Enter student name: ");
    fgets(student.name, 50, stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; 
    printf("Enter student roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter student birthdate (YYYY MM DD): ");
    scanf("%d %d %d", &student.birthYear, &student.birthMonth, &student.birthDay);
    printf("Enter admission date (YYYY MM DD): ");
    scanf("%d %d %d", &student.admissionYear, &student.admissionMonth, &student.admissionDay);

    
    int age = calculateAge(student.birthYear, student.birthMonth, student.birthDay,
        student.admissionYear, student.admissionMonth, student.admissionDay);

    
    printf("\nStudent Information\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Birthdate: %d-%02d-%02d\n", student.birthYear, student.birthMonth, student.birthDay);
    printf("Admission Date: %d-%02d-%02d\n", student.admissionYear, student.admissionMonth, student.admissionDay);
    printf("Age at time of admission: %d\n", age);

    return 0;
}
