#include <stdio.h>

union stud {
    char name[25];
    float marks[2];
};

void show(union stud *m);

int main() {
    union stud s1;
    int i;
    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter 2 marks: ");
    for (i = 0; i < 2; i++) {
        scanf("%f", &s1.marks[i]);
    }
    show(&s1);
    return 0;
}

void show(union stud *m) {
    int i;
    printf("Name: %s\n", m->name);
    printf("Marks:\n ");
    for (i = 0; i < 2; i++) {
        printf("%.2f \n ", m->marks[i]);
    }
}
    