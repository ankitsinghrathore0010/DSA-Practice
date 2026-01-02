#include <iostream>
using namespace std;

void Reverse(int a[], int size) {
    if (size == 0 || size == 1)
        return;

    int temp = a[0];
    a[0] = a[size - 1];
    a[size - 1] = temp;

    Reverse(a + 1, size - 2);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    Reverse(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
