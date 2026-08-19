#include <iostream>
using namespace std;
 
void change(int arr[], int size){
    cout << "In function" << endl;
    for(int  i=0; i<size; i++)
{
    arr[i] = 2* arr[i];
}
}
int main(){
    int arr[] = {1,2,3};
    change(arr,3);
    cout << "in main\n";
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}