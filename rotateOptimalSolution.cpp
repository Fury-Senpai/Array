//BRUTE FORCE WAY
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void rotateArrayToLeft(vector<int> &arr , int k)
{
    k = k%arr.size();
    reverse(arr.begin() ,arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin() , arr.end());
    
}

void printArr(vector<int> &arr)
{
    for(int i = 0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }    

}

int main()
{
    vector<int>arr = {-1,-2,0,1,2,3,4,5};
    int k;
    cout<<"Enter K"<<endl;
    cin>>k;
    rotateArrayToLeft(arr,k);
    printArr(arr);
   

    return 0; 
}