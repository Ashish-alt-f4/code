#include <iostream>
#include <bitset>

using namespace std;

string toBinary(int n) {
    // Create a bitset of 32 bits
    bitset<32> binary(n);
    return binary.to_string();
}

int main() {
    int num;
    cout << "Enter a negative number: ";
    cin >> num;

    if (num >= 0) {
        cout << "Please enter a negative number." << endl;
    } else {
        string binaryRepresentation = toBinary(num);
        cout << "Binary representation of " << num << " is: " << binaryRepresentation << endl;
    }

    return 0;
}
 