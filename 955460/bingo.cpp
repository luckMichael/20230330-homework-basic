#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int bingo[5][5];
    int number[25] = {0};
    srand(time(0));
    int wheel;
    for (int i = 0; i < 25; i++) {
        int pick;
        do {
            pick = rand() % 25 + 1;
        } while (number[pick-1] > 0);

        number[pick-1]++;

        cout << pick << "\n";
    }
        }
