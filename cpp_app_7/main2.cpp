#include <iostream>

#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    const int sides = 5;
    int side_lengths[sides]; 

    for (size_t i = 0; i < sides; i++) {
        cout << "Enter the " << i+1 << " side length: ";
        cin >> side_lengths[i];
    }

    
    int perimeter = 0;
    for (size_t i = 0; i < sides; i++) {
        perimeter += side_lengths[i];
    }

    cout << "Perimeter: " << perimeter;

    return 0;
}