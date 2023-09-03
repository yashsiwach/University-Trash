#include <iostream>
using namespace std;

int checkPointer(int* ptr, int defaultValue) {
    if (ptr == NULL)
        return defaultValue;
    else
        return *ptr;
}

int main() {
    int num, defaultValue = 0;
    cin >> num;
    cout << "Result: " << checkPointer(NULL, defaultValue) << endl;
    cout << "Result: " << checkPointer(&num, defaultValue) << endl;
    return 0;
}
