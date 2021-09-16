#include<iostream>

using namespace std;

int search(int arr[],int n, int x){
    for (int i = 0; i < x;i++)
        if(arr[i]==x)
            return i;
    return -1;
}

int main(){
    int arr[] = {34, 23, 5, 56, 33, 67, 89};
    int x = 56;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Null"
        : cout << result;
    return 0;
}