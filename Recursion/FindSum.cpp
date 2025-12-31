#include <iostream>
using namespace std;

int FindSum(int a[], int size) {
    if (size == 0)
        return 0;
    return a[0] + FindSum(a + 1, size - 1);
}

int main() {
    int a[] = {10, 20, 5, 14, 96, 35, 14};
    cout << "The sum of all the elements in array is " << FindSum(a, 7);
    return 0;
}
