#include<iostream>
using namespace std;

bool prime_check(int num){
    // int i = 2;
    // while(i<num){
    //     if(num%i==0)
    //         return false;
    //     else
    //         i++;
    // }
    for (int i = 2; i < num;i++){
        if(num%i==0)
            return false;
    }
        return true;
}
int main(){
    int x = 0,i = 2;
    cout << "Enter (+ve) integer: ";
    cin >> x;
    if(x<0)
        x = -x;
    cout << x;
    if(prime_check(x)){}
    else 
        cout <<" Not";
    cout << " Prime" << endl;
    return 0;
}