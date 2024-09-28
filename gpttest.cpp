#include <iostream>
#include <algorithm>  // for std::sort

bool descending(int a, int b) {
    return a > b;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Sort the array in descending order
    std::sort(arr, arr + n);

    // Print the sorted array
    std::cout << "Sorted array (descending): ";
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
