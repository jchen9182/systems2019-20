#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct food {char *name; double price;};

struct food randomFood() {
    struct food f;

    char name[6]; // Create name
    for (int i = 0; i < 5; i++) {
        name[i] = rand() % 26 + 97;
    }
    name[5] = '\0';

    double p = rand() % 1000 / 100.0; // random price less than $10

    f.name = name;
    f.price = p;
    return f;
}

void printFood(struct food f) {
  printf("Name: %s\nPrice: $%.2f\n", f.name, f.price);
}

void editFood(struct food *p,char *newName, double newPrice) {
    p->name = newName;
    p->price = newPrice;
}

int main() {
    srand(time(NULL));
    printf("randomFood Test:\n");
    for (int i = 0; i < 5; i++) {
        printFood(randomFood());
    }

     printf("\nprintFood Test:\n");
    struct food f1;
    f1.name = "pizza";
    f1.price = 1.75;
    printFood(f1);

    printf("\neditFood Test:\n");
    printf("Old:\n");
    printFood(f1);
    printf("New:\n");
    editFood(&f1, "pineapple pizza", 2.75);
    printFood(f1); 
}
