#include<iostream>
using namespace std;
class second
{ public:
    void largest()
    {
         int n;
         cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    int y;
    
    int k=2;int d;
    int maxi;
    for(int i=0;i<n;i++)
    {  cin>>y;
        arr[i]=y;
    }
   
    while(k>0)
    {
         maxi=-9999999;
    for(int i=0;i<n;i++)
    {
      if(arr[i]>maxi)
        {
          maxi=arr[i];
          d=i;
        }
        
    }
    k--;
    arr[d]=-99999;

}
cout<<maxi;
    }
};
int main()
{
 second q;
 q.largest();
 return 0;
}
