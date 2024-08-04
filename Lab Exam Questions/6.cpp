#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = new int[n];
    int sum = 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    delete[] arr;
    return 0;
}