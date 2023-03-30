#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
     int bingo[5][5];
     int number[25] = {0};
     int add = 0;
     int pick[24] = {0};
     srand(time(0));



    for (int i = 0; i < 25; i++) {
        int y = i / 5;
        int x = i % 5;
        do {
    cout << "請輸入1~25之間的數字: ";
    cin >> add;
} while(add < 1 || add > 25);

        bingo[y][x] = add;
    }
        for (int i = 0; i < 25; i++) {
            pick[i] = rand() % 25 + 1;
    }
        for (int i = 0; i < 25; i++) {
        int y = i / 5;
        int x = i % 5;
        if(bingo[y][x] == pick[i]){
            bingo[y][x] = 0;
        }}

            
        for (int j = 0; j < 5; j++){
            if(bingo[j][0] == 0 && bingo[j][1] == 0 && bingo[j][2] == 0 && bingo[j][3] == 0 && bingo[j][4] == 0){
            cout << "bingo";
                break;
        }
        else if(bingo[0][j] == 0 && bingo[1][j] == 0 && bingo[2][j] == 0 && bingo[3][j] == 0 && bingo[4][j] == 0){
            cout << "bingo";
                break;
        }
        else if(bingo[0][0] == 0 && bingo[1][1] == 0 && bingo[2][2] == 0 && bingo[3][3] == 0 && bingo[4][4] == 0){
            cout << "bingo";
                break;
        }
        else if(bingo[0][4] == 0 && bingo[1][3] == 0 && bingo[2][2] == 0 && bingo[3][1] == 0 && bingo[4][0] == 0){
            cout << "bingo";
                break;
        
        }
        
}
}



    
