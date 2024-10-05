#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long cntr = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            cntr += abs(arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }

    cout << cntr << endl;
    return 0;
}

