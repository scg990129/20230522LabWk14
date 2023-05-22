//CS116Week14H01
//20230516
//Shun Hoi Yeung
//900494756

// This program shows an array name being dereferenced with the 
// operator.

#include <iostream>
// #include <iomanip>
// #include <vector>

using namespace std;

int main01() {
    short numbers[] = { 10, 20, 30, 40, 50 };
    cout << "The first element of the array is ";

    cout << *numbers << endl;
    return 0;
}
