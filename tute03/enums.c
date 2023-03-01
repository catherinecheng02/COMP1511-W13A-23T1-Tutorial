// Enum demo
// Written by Catherine Cheng 01-03-2023
#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

int main(void) {

    enum opal_card_type catherines_card;
    catherines_card = STUDENT;
    printf("%d", catherines_card);
    return 0;
}
