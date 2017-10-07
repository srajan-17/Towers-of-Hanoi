/*
 Siddharth Rajan
 Towers of Hanoi
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdlib>

void tow_of_han(int nod, int p1, int p2, int p3) {
    if (nod == 1) {
        cout << p1 << "\t" << p3 << endl;
    }
    else {
        tow_of_han(nod - 1, p1, p3, p2);
        tow_of_han(1, p1, p2, p3);
        tow_of_han(nod - 1, p2, p1, p3);
    }
}

int main() {
    
    cout << "Enter the number of disks: ";
    
    int x;
    cin >> x;
    
    cout << endl;
    
    tow_of_han(x, 1, 2, 3);
    
    cout << endl;
    
    return 0;
}
