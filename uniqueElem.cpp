#include<iostream>
using namespace std;

void uniqueElem(int arr[], int size ){
    
    for(int i=0; i<size; i++)
    {
        int count = 0;
        for(int j=0; j<size; j++) //{ 1 , 2 , 2, 1 , 3}
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==0){
            cout<<arr[i];
            return;
        }
    }
    cout<<"No unique element found";

}
int main()
{

    int arr[] = { 1 , 2 , 1 , 1  , 72 , 3 , 3 , 4 , 4 , 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    uniqueElem(arr,size);

    return 0;


    
}