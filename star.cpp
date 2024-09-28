#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        int a = 1;
        while (a <= i) {
            cout << (i + a - 1); // Directly compute the value to be printed
            a++;
        }
        cout << endl;
    }

    return 0;
}
