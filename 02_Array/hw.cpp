#include <iostream>
using namespace std;
int main(){
    int smallest =INT16_MAX; // +infinity
    int largest = INT16_MIN; // -infinity
    int smallestindex =0; int largestindex =0;
    int size =6;
    int num[size];
    for(int i=0; i<size; i++){
        cin >> num[i];
    }
    for(int i=0; i<size; i++){
        cout << num[i] << endl;
    }
    for(int i=0; i<size; i++){
      if(num[i] < smallest){
        smallest = num[i];
        smallestindex =i;
    }
}
 for(int i=0; i<size; i++){
    if(num[i] > largest){
        largest = num[i];
        largestindex =i;
    }
    }
    cout << "Smallest number is:  "<< smallest << endl;
    cout << "index of small number: "<< smallestindex << endl;
    cout << "Largest number is:  "<< largest << endl;
    cout << "index of largest number: "<< largestindex << endl;
}