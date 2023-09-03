// Sample test cases :
// Input 1 :

// 3
// John
// Alice
// Bob
// 1
// 0
// 1

// Output 1 :

// Attendance Report:
// John: Present
// Alice: Absent
// Bob: Present


#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string names[100];
    int attendance[100];

    // Read number of students
    cin >> n;

    // Read student names
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Read attendance
    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
    }

    // Print attendance report
    cout << "Attendance Report:" << endl;
    for (int i = 0; i < n; i++) {
        if (attendance[i] == 1) {
            cout << names[i] << ": Present" << endl;
        } else {
            cout << names[i] << ": Absent" << endl;
        }
    }

    return 0;
}
