#include <iostream>
using namespace std;

float sum(int horse, int pig, int rabbit);
void print_answer(int horse, int pig, int rabbit);

int main() {
    int horse = 100;

    while (horse > 0) {
        for (int i = 0; i < (100 - horse); i++) {
            int pig = i;
            int rabbit = 100 - horse - pig;

            if (sum(horse, pig, rabbit) == 100) {
                print_answer(horse, pig, rabbit);
                return 0;
            }
        }
        horse --;
    }


    cout << "can't find answer" << endl;
    return -1;
}

float sum(int horse, int pig, int rabbit) {
    return 10 * horse + 3 * pig + 0.5 * rabbit;
}

void print_answer(int horse, int pig, int rabbit) {
    cout << "horses: " << horse << endl;
    cout << "pigs: " << pig << endl;
    cout << "rabbits: " << rabbit << endl;
}
