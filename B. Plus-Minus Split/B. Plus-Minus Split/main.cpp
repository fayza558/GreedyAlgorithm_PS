#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=count (s.begin(),s.end(),'+');
        int b=count(s.begin(),s.end(),'-');
        cout<<abs(a-b)<<endl;
    }
    return 0;
}
