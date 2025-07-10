#include<iostream>
#include<vector>
using namespace std;

int maxOnes( vector<int>&a,int n)
{
   int cnt=0;
   int maxCnt=0;
   for(int i=0;i<n;i++)
   {
        cnt++;
        if(a[i]==0)
        {
            cnt=0;
        }
        maxCnt=max(maxCnt,cnt);
   }
   return maxCnt;

}

int main()
{
    vector<int>a={1,1,0,1,1,1,1,1,0,0,1,1,1,1};
    int n=a.size();
    int ans=maxOnes(a,n);
    cout<<ans<<endl;
    return 0;
}