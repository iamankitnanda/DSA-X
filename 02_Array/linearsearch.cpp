#include <iostream>
using namespace std;
int linearsearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){ //FOUND
        return i; //return the index
        }
    }
    return -1; //NOT FOUND
}
int main(){
    int arr[] ={1,2,3,4,5,6,7,8};
    int sz= 7;
    int target = 5;

    cout << linearsearch(arr,sz,target) << endl;
    return 0;
}
// Linear search Algorithm