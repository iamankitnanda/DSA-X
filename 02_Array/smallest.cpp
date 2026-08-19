#include <iostream>
using namespace std;
int main(){
    int smallest =INT16_MAX; 
    int largest = INT16_MIN;
    int size =6;
    int num[size];
    for(int i=0; i<size; i++){
        cin >> num[i];
    }
    for(int i=0; i<size; i++){
        cout << num[i] << endl;
    }
    for(int i=0; i<size; i++){
        smallest = min(num[i],smallest);
        largest= max(num[i], largest);
    }
    cout << "Smallest number is:  "<< smallest << endl;
    cout << "Largest number is:  "<< largest << endl;
}