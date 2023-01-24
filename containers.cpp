#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

void show(const vector<int>& p) {
    cout << "Vector: ";
    for (int i : p)
        cout << i << " ";
    cout << "\n" << endl;
}

int main() {
    vector<int> a = { 13, 92, 4, 546, 54, 7, 666, 123, 45, 1, 69 };
    int k = 9;
    int count_k = 0;
    show(a);

    for (int i = 0; i < size(a); i++) {
        if (a[i] % k == 0) count_k = count_k + 1;
    }
    cout << count_k;
    return 0;
}

