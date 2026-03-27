#include <stdio.h>
#include <string.h>
#include "student.h"

void calculate_average(STUD *student) {
    float sum = 0;
    for (int i = 0; i < NUM_GRADES; i++) {
        sum += student->SES[i];
    }
    student->average = sum / NUM_GRADES;
}

int compare_by_name(const void *a, const void *b) {
    const STUD *student_a = (const STUD *)a;
    const STUD *student_b = (const STUD *)b;
    return strcmp(student_a->Name, student_b->Name);
}

int compare_by_average(const void *a, const void *b) {
    const STUD *student_a = (const STUD *)a;
    const STUD *student_b = (const STUD *)b;
    if (student_a->average < student_b->average) return -1;
    if (student_a->average > student_b->average) return 1;
    return 0;
}

void print_student(const STUD *student) {
    printf("No.%d: %s, Group: %s, Grades: [%d %d %d %d], Average: %.2f\n",
           student->original_index + 1,
           student->Name, 
           student->GROUP,
           student->SES[0], student->SES[1], 
           student->SES[2], student->SES[3],
           student->average);
}
