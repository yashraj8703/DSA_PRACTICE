#include<iostream>
#include<vector>
using namespace std;

void arrayUnion( vector<int>&a, vector<int>&b,int n,int m)
{
    vector<int>unionArray;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(i > 0 && a[i] == a[i-1]) {
            i++;
            continue;
        }

        if(j > 0 && b[j] == b[j-1]) {
            j++;
            continue;
        }
        if(a[i]==b[j])
        {
            unionArray.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j])
        {
            unionArray.push_back(a[i]);
            i++;

        }
        else if(a[i]>b[j])
        {
            unionArray.push_back(b[j]);
            j++;

        }
    }

    for(int x:unionArray)
    {
        cout<<x<<" ";
    }

}


int main()
{
    vector<int>a={1,2,3,4,5};
    vector<int>b={2,3,4,4,5};
    int n=a.size();
    int m=b.size();
    arrayUnion(a,b,n,m);
    return 0;
}