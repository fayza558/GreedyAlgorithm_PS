#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1, v2;
    long long sum = 1LL * n * (n + 1) / 2;

    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
        long long target = sum / 2;
        for (int i = n; i > 0; i--)
        {
            if (target >= i)
            {
                v1.push_back(i);
                target -= i;
            }
            else
            {
                v2.push_back(i);
            }
        }

        cout << v1.size() << endl;
        for (int x : v1)
        {
            cout << x << " ";
        }
        cout << endl;

        cout << v2.size() << endl;
        for (int x : v2)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
