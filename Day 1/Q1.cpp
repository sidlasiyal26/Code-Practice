#include<bits/stdc++.h>
using namespace std;
int count(vector<int> a,int n)
{
   if(n==0)
        return 0 ;
   else
   {
       int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1]){
            a[j]=a[i];
            j++;
        }
    }
    return j;
   }
}
int main()
{
    int n;
    cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)
        cin>>a[i];
cout<<count(a,n);

}
