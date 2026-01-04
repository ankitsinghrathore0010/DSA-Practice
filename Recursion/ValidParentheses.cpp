#include <iostream>
using namespace std;

void Generate(string abbtak, int open, int close) {
    if (open == 0 && close == 0) {
        cout << abbtak << endl;
        return;
    }
    if (open > 0)
        Generate(abbtak + "(", open - 1, close);
    if (close > open)
        Generate(abbtak + ")", open, close - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Generate("", n, n);
    return 0;
}
