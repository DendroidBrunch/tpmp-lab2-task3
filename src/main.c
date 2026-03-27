#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "input.h"
#include "output.h"
#include "utils.h"

int main() {
    STUD students[MAX_STUDENTS];
    STUD sorted_students[MAX_STUDENTS];
    input_students(students, MAX_STUDENTS);
    print_all_students(students, MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        sorted_students[i] = students[i];
    }
    sort_students_by_name(sorted_students, MAX_STUDENTS);
    printf("Students sorted alphabetically\n");
    print_all_students(sorted_students, MAX_STUDENTS);
    print_high_average(students, MAX_STUDENTS, 4.2);
    return 0;
}
