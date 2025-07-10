#include<iostream>
#include<vector>
#include<map>
using namespace std;

int longestSubarray( vector<int>&a,int n,int k)
{
   int maxLen=0;
   int sum=0;
   int i=0,j=0;
   while(i<n)
   {
        sum+=a[i];
        if(sum==k)
        {
            maxLen=max(maxLen,i-j+1);
        }
        while(j<=i && sum>k)
        {
            sum-=a[j];
            j++;
        }
        i++;

   }
   return maxLen;

}

int main()
{
    vector<int>a={1,2,3,1,1,1,1,3,3};
    int n=a.size();
    int k=6;
    int ans=longestSubarray(a,n,k);
    cout<<ans<<endl;
    return 0;
}