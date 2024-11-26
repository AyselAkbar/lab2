#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Piramida ucun hündürlüyü daxil edin: ";
    cin >> n;

    printPyramid(n);

    return 0;
}

