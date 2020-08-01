#include<bits/stdc++.h>  // works like magic, but at extra load
using namespace std;

#define deb(x) cout<< #x << " " << x << endl;
#define fo(i,n) for(i=0;i<n;i++)
#define FO(i,k,n) for(i=k;i<n;i++)

template<typename... T>
void read(T&... args){
    ((cin>>args),...);
}

template<typename... T>
void write(T&&... args){
    ((cout<<args<<" "),...);
}

int main(){
    // 1. C++ productivity tipes
    // 2. To be used while coding interview prep
    // 3. Solving problems can take time
    // 4. Writing for loops, reading multiple variables is boring.
    // 5. Debugging tools are not present in coding interviews

    int x(100),y(200),z,zz;

    // cin >> x >> y >> z >> zz;
    read(x,y,z,zz);

    // shortcut to duplicate a line
    deb(x);
    deb(y);
    deb(z);
    deb(zz);

    // print method
    write(x,y,z,zz, "This is aweome right?",45.77);
    cout<<endl;

    int i,n;
    cin>>n;
    vector<int> arr(n,0);
    fo(i,n)
        cin>>arr[i];
    FO(i,1,n+1)
        cout<<arr[i-1]<<" ";
    cout<<endl;
    return 0;
}