#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout <<"Enter a number: ";
    cin >> n;
    int num =1;
    for(int i=1; i<=n; i++){  //outer loop
        for(int j=1; j<=n; j++){     //inner loop
            cout << num<< " ";
            num = num +1;
        }
           cout << endl;
    }
    return 0;
} 