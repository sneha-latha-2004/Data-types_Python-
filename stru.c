#include <stdio.h>

// defining structure
struct Student {
    int age;
    float marks;
};

int main() {
    // declaring structure variable
    struct Student s1;

    // assigning values
    s1.age = 18;
    s1.marks = 95.5;

    // printing values
    printf("Age = %d\n", s1.age);
    printf("Marks = %.2f", s1.marks);

    return 0;
}