#include<iostream>
using namespace std;

class cal{
public:
    int add(int x, int y){
        return(x+y);
    }
    int sub(int x, int y){
        return(x-y);
    }
    int mul(int x, int y){
        return(x*y);
    }
    int div(int x, int y){
        return(x/y);
    }
};
int main(){
    int a,b;
    cal re;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    //while (1)
    // {
    //     cout<<"Choose the Operation\n 1 = add\n 2 = sub\n 3 = mul\n 4 = div";

    // }
    cout<<"Choose the Operation\n 1 = add\n 2 = sub\n 3 = mul\n 4 = div"<<endl;
    cout<<"Result of add: "<<re.add(a,b);
    return 0;
}