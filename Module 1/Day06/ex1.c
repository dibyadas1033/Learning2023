#include <stdio.h>
#include <string.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};
 
void parseString(const char *input, struct Student *students, int size) {
    char temp[20];
    sscanf(input, "%d %s %f", &students[size].rollno, temp, &students[size].marks);
    strncpy(students[size].name, temp, sizeof(students[size].name) - 1);
    students[size].name[sizeof(students[size].name) - 1] = '\0';
}

void initializeStructArray(struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        students[i].name[0] = '\0';
        students[i].marks = 0.0;
    }
}

void displayStructArray(const struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %0.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

// void sortStructArray(struct Student *students, int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (students[j].marks < students[j + 1].marks) {
//                 struct Student temp = students[j];
//                 students[j] = students[j + 1];
//                 students[j + 1] = temp;
//             }
//         }
//     }
// }

// void searchStructArray(const struct Student *students, int size, const char *name) {
//     int found = 0;
//     for (int i = 0; i < size; i++) {
//         if (strcmp(students[i].name, name) == 0) {
//             printf("Student Found: Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
//             found = 1;
//             break;
//         }
//     }
//     if (!found) {
//         printf("Student not found.\n");
//     }
// }

int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student students[size];

    // // Initialize the array of structures
    // initializeStructArray(students, size);

    // Parse and initialize the structures using user input
    for (int i = 0; i < size; i++) {
        char input[50];
        printf("Enter details for student %d (Roll No, Name, Marks): ", i + 1);
        scanf(" %[^\n]", input);
        parseString(input, students, i);
    }

    // Display the array of structures
    printf("\nStudent Details:\n");
    displayStructArray(students, size);

    // // Sort the array of structures based on marks
    // sortStructArray(students, size);

    // // Display the sorted array of structures
    // printf("\nStudent Details (Sorted by Marks in Descending Order):\n");
    // displayStructArray(students, size);

    // // Perform a search operation based on name
    // char searchName[20];
    // printf("\nEnter the name of the student to search: ");
    // scanf(" %[^\n]", searchName);
    // searchStructArray(students, size, searchName);

    return 0;
}
