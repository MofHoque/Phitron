#include <bits/stdc++.h> // Includes all standard C++ libraries

using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T; // Input the number of test cases

    for(int i = 0; i < T; i++){ // Loop through each test case
        int N; // Size of the grid for this test case
        cin >> N; // Input the size of the grid

        for(int row = 0; row < N; row++){ // Loop through each row
            for(int col = 0; col < N; col++){ // Loop through each column
                cout << "*"; // Print a '*' character for each cell
            }
            cout << endl; // Move to the next line after printing each row
        }
    }

    return 0;
}
