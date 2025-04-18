#include<iostream>
using namespace std;

void duplicateElem(int arr[],int size,int key){
    int count = 0;
    for(int i = 0; i<size; i++){
        if(key==arr[i]){
            count++;
        }
    }
    if(count>1){
        cout<<"Duplicate Value Exist ";
    }
    else if(count==0){
        cout<<"Element Not Found ";
    }
    else{
        cout<<"Unique Element ";
    }

    return;
    
}
int main(){
    int arr[8] = {2,2,1,1,3,4,2,5};
    cout<<"Enter Value to find duplicate value \n";
    int key;
    cin>>key;
    duplicateElem(arr,8,key);
    return 0;

}