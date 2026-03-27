#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LEN 50
#define MAX_GROUP_LEN 30
#define NUM_GRADES 4
#define MAX_STUDENTS 10

typedef struct {
    char Name[MAX_NAME_LEN];
    char GROUP[MAX_GROUP_LEN];
    int SES[NUM_GRADES];
    float average;
    int original_index;
} STUD;

void calculate_average(STUD *student);
int compare_by_name(const void *a, const void *b);
int compare_by_average(const void *a, const void *b);
void print_student(const STUD *student);

#endif
