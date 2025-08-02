#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "Move disk 1 from " << A << " to " << C << endl;
        return;
    }

    // Step 1: Move n-1 disks from A to B using C
    towerOfHanoi(n - 1, A, C, B);
  
    // Step 2: Move nth disk from A to C
    cout << "Move disk " << n << " from " << A << " to " << C << endl;

    // Step 3: Move n-1 disks from B to C using A
    towerOfHanoi(n - 1, B, A, C);
}

int main() {
    int n;
    cin >> n;

    // A = Source (left), B = Intermediate (middle), C = Destination (right)
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
