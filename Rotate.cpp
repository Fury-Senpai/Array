//BRUTE FORCE WAY
#include<iostream>
#include<vector>
using namespace std;


void rotateArrayToLeft(vector<int> &arr , int k)
{
    k = k%arr.size();
    int i = 0;
    vector <int> temp;
    cout<<i<<endl;
    for(int i = 0; i<k; i++)  //using a temp to store value
    {
        
        temp.push_back(arr[i]);
    }


    for(int i = k; i<arr.size(); i++) //shifting elements
    {
        arr[i-k] = arr[i];
        
    }

    for(int i  = arr.size()-k; i<arr.size(); i++) //inserting elements
    {
        
        arr[i] = temp[i-(arr.size()-k)];
        
    }

    

    
    
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