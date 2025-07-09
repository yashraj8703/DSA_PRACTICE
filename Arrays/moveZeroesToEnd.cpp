#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>myArray={1,0,2,3,0,4,0,1};
    int j=-1;
    for(int i=0;i<myArray.size();i++)
    {
        if(myArray[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j==-1)
    {
        return 0;
    }

    for(int i=j+1;i<myArray.size();i++)
    {
        if(myArray[i]!=0){
            swap(myArray[i],myArray[j]);
            j++;
        }
    }
    for(int x:myArray)
    {
        cout<<x<<" ";
    }
}