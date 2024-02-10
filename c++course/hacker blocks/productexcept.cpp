#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    // upper half of the pattern
    for (int i = 1; i <= (N + 1) / 2; i++) {
        // print spaces
        for (int j = 1; j <= (N + 1) / 2 - i; j++) {
            cout << "    ";
        }
        // print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        // print spaces
        for (int j = 1; j < i; j++) {
            cout << "    ";
        }
        // print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    // lower half of the pattern
    for (int i = (N - 1) / 2; i >= 1; i--) {
        // print spaces
        for (int j = 1; j <= (N + 1) / 2 - i; j++) {
            cout << "    ";
        }
        // print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        // print spaces
        for (int j = 1; j < i; j++) {
            cout << "    ";
        }
        // print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
