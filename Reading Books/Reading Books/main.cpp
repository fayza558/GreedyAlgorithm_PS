#include <iostream>

using namespace std;

int main()
{
    long long  n;
    cin>>n;
    long long  arr[n];
    long long  maxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
         if(maxx<arr[i])
        {
            maxx=arr[i];
        }
    }
    long long  sum=0;

    for(int i=0;i<n;i++)
    {
       sum+=arr[i];
    }
    if(sum-maxx>=maxx)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<maxx*2<<endl;
    }
    return 0;
}
