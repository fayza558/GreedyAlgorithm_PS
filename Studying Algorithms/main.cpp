#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    int cntr=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>x)
        {
            break;
        }
        else
        {
            cntr++;
        }

    }
    cout<<cntr<<endl;
    return 0;
}
