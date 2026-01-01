#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

bool isSorted(int a[], int size) {
    if (size == 0 || size == 1)
        return true;
    if (a[0] > a[1])
        return false;
    return isSorted(a + 1, size - 1);
}


int main() {
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, n))
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}
