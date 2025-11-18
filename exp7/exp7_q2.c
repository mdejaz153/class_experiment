#include <stdio.h>

struct employee {
    char name[50];
    float basic;
};

int main() {
    struct employee e[100];
    float da, gross;
    int i;

    for (i = 0; i < 100; i++) {
        printf("Enter employee %d name: ", i+1);
        scanf("%s", e[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &e[i].basic);

        da = 0.52 * e[i].basic;
        gross = e[i].basic + da;

        printf("Employee: %s  Gross Salary: %.2f\n\n", e[i].name, gross);
    }

    return 0;
}
