#include <iostream>

#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    const int size = 4;
    int arr[size] = { 1, 2, 3, 4 };
    for (int i = size-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}