#include <iostream>
using namespace std;
int main() {
    int matrix[4][4] = {{3, 2, 4, 5}, {10, 12, 3, 4}, {5, 1, 3, 7}, {7, 3, 9, 0} };

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
