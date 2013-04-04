#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int get_random_number();
int get_user_number();

int main () {
    int random_number;
    int user_number;

    random_number = get_random_number();
    user_number = get_user_number();

    while (user_number != random_number) {
        if (user_number < random_number) {
            cout << "Too low!\n";
        } else {
            cout << "Too high!\n";
        }
        user_number = get_user_number();
    }

    cout << "You guessed right!" << endl;
    return 0;
}

int get_random_number() {
    int random_number;

    // Initialize random seed.
    srand (time(NULL));

    // Generate random number between 1 and 100
    random_number = rand() % 100 + 1;

    return random_number;
}

int get_user_number() {
    int user_number;

    cout << "What is your guess? ";

    if (!(cin >> user_number)) {
        cout << "Dude, that's not a number." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return get_user_number();
    }

    return user_number;
}
