#include <stdio.h>
#include <stdlib.h>
#include "output.h"
#include "utils.h"

void print_all_students(STUD *students, int count) {
    printf("All students\n");
    for (int i = 0; i < count; i++) {
        print_student(&students[i]);
    }
}

void print_high_average(STUD *students, int count, float min) {
    int high_count = count_high_average(students, count, min);
    if (high_count == 0) {
        printf("\nNo students found with average grade above %.1f.\n", min);
        return;
    }
    STUD **high_average = malloc(high_count * sizeof(STUD*));
    int j = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].average > min) {
            high_average[j++] = &students[i];
        }
    }
    qsort(high_average, high_count, sizeof(STUD*), compare_by_average);
    printf("\nStudents with average grade above %.1f \n", min); 
    for (int i = 0; i < high_count; i++) {
        print_student(high_average[i]);
    }
    free(high_average);
}
