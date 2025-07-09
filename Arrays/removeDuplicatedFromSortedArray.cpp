#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>myArray={1,1,2,2,3,3};
    int i=0;
    for(int j=1;j<myArray.size();j++)
    {
        if(myArray[j]!=myArray[i])
        {
            myArray[i+1]=myArray[j];
            i++;
        }
    }
    for(int x=0;x<=i;x++)
    {
        cout<<myArray[x]<<" ";
    }
}