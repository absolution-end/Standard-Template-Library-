#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={19,4,8,27,83};
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}