#include <stdio.h>
#include <string.h>
#include "input.h"

void input_students(STUD *students, int count) {
    printf("Enter data for %d students:\n", count);
    for (int i = 0; i < count; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: ");
        fgets(students[i].Name, MAX_NAME_LEN, stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = '\0';
        printf("Group name: ");
        fgets(students[i].GROUP, MAX_GROUP_LEN, stdin);
        students[i].GROUP[strcspn(students[i].GROUP, "\n")] = '\0';
        printf("Enter %d grades separated by spaces: ", NUM_GRADES);
        for (int j = 0; j < NUM_GRADES; j++) {
            scanf("%d", &students[i].SES[j]);
        }
        calculate_average(&students[i]);
        students[i].original_index = i;
    }
}
