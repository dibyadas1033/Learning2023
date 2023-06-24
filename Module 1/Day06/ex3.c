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

int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student students[size];

    // Initialize the array of structures
    initializeStructArray(students, size);

    // Parse and initialize the structures using user input
    for (int i = 0; i < size; i++) {
        char input[50];
        printf("Enter details for student %d (RollNo Name Marks): ", i + 1);
        scanf(" %[^\n]", input);
        parseString(input, students, i);
    }

    // Display the array of structures
    printf("\nStudent Details:\n");
    displayStructArray(students, size);

   

    return 0;
}
