#include<iostream>
using namespace std;
int main(){
    int firstValue = 5, secondValue = 15;
    char thirdValue = 'a';
    int *p1, *p2;
    char *p3;

    // assign address of variables to the respective pointers
    p1 = &firstValue; // assign address of firstValue
    p2 = &secondValue; // assign address of secondValue
    p3 = &thirdValue; // assign address of thirdValue

    // pointer manipulation
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;
    *p3 = 'b';

    // print the manipulated values
    cout<<"FirstValue: "<<firstValue<<endl;
    cout<<"SecondValue: "<<secondValue<<endl;
    cout<<"ThirdValue: "<<thirdValue<<endl;

    return 0;
}