#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>&arr,int start,int end)
{
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int>myArray={1,2,3,4,5};
    int d=1;
    reverse(myArray,0,d-1);
    
    reverse(myArray,d,myArray.size()-1);
    reverse(myArray,0,myArray.size()-1);

    for(int x=0;x<myArray.size();x++)
    {
        cout<<myArray[x]<<" ";
    }

}