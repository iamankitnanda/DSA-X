#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout <<"Enter a number: ";
    cin >> n;
    char cha='A';
    for(int i=0; i<n; i++){ //outer loop
        for(int j=1; j<=n; j++){     //inner loop
            cout << cha;
            cha =cha + 1; // 65 + 1 => 66(B), ch is converted to int
        }
           cout << endl;
    }
    return 0;
} 