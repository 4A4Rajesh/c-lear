#include <stdio.h>
int main() {
    int rollNo;
    char name[50];
    float physics_marks, maths_marks, chemistry_marks;
    float totalMarks, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physics_marks);

    printf("Enter Marks of Math: ");
    scanf("%f", &maths_marks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistry_marks);

    totalMarks = physics_marks + maths_marks + chemistry_marks;
    percentage = (totalMarks / 300) * 100;

    printf("-------- Student Information --------\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics_marks);
    printf("Math Marks: %.2f\n", maths_marks);
    printf("Chemistry Marks: %.2f\n", chemistry_marks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

