#include <stdlib.h>
#include "utils.h"

void sort_students_by_name(STUD *students, int count) {
    qsort(students, count, sizeof(STUD), compare_by_name);
}

int count_high_average(STUD *students, int count, float min) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].average > min) {
            result++;
        }
    }
    return result;
}
