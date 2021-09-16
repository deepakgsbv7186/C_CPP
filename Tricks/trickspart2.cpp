
// Using Range based for loop
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec = {93, 454, 56, 66, 34};

    for(const auto &value : vec)
        cout << value << ' ';
    cout << endl;

    return 0;
}


// Initializer list
// #include<iostream> 
// template<typename T> 
// void printList(std::initializer_list<T> text) 
// { 
// 	for (const auto & value: text) 
// 		std::cout << value << " "; 
// } 

// // Driver program 
// int main() 
// { 
// 	// Initialization list 
// 	printList( {"One", "Two", "Three"} ); 
// 	return 0; 
// } 


// Assigning Maximum or Minimum value
// #include<iostream> 
// // Call by reference is used in x 
// template<typename T, typename U> 
// static inline void amin(T &x, U y) 
// { 
// 	if (y < x) 
// 		x = y; 
// } 

// // call by reference is used in x 
// template<typename T, typename U> 
// static inline void amax(T &x, U y) 
// { 
// 	if (x < y) 
// 		x = y; 
// } 

// // Driver program to find the Maximum and Minimum value 
// int main() 
// { 
// 	int max_val = 0, min_val = 1e5; 
// 	int array[]= {4, -5, 6, -9, 2, 11}; 

// 	for (auto const &val: array) 

// 		// Same as max_val = max (max_val, val) 
// 		// Same as min_val = min (min_val,val) 
// 		amax(max_val, val), amin (min_val, val); 


// 	std::cout << "Max value = " << max_val << "\n"
// 			<< "Min value = " << min_val; 
// 	return 0; 
// } 


// Fast Input/Output in C/C++
// #include <bits/stdc++.h> 
// template<typename T> void scan(T &x) 
// { 
// 	x = 0; 
// 	bool neg = 0; 
// 	register T c = getchar(); 

// 	if (c == '-') 
// 		neg = 1, c = getchar(); 

// 	while ((c < 48) || (c > 57)) 
// 		c = getchar(); 

// 	for ( ; c < 48||c > 57 ; c = getchar()); 

// 	for ( ; c > 47 && c < 58; c = getchar() ) 
// 		x= (x << 3) + ( x << 1 ) + ( c & 15 ); 

// 	if (neg) x *= -1; 
// } 

// template<typename T> void print(T n) 
// { 
// 	bool neg = 0; 

// 	if (n < 0) 
// 		n *= -1, neg = 1; 

// 	char snum[65]; 
// 	int i = 0; 
// 	do
// 	{ 
// 		snum[i++] = n % 10 + '0'; 
// 		n /= 10; 
// 	} 

// 	while (n); 
// 	--i; 

// 	if (neg) 
// 		putchar('-'); 

// 	while (i >= 0) 
// 		putchar(snum[i--]); 

// 	putchar('\n'); 
// } 

// // Driver Program 
// int main() 
// { 
// 	int value; 

// 	// Taking input 
// 	scan(value); 

// 	// Printing output 
// 	print(value); 
// 	return 0; 
// } 

//Using Macros as for loop
// #include <bits/stdc++.h> 
// using namespace std; 

// #define rep(i,n) for (i = 0; i < n; ++i) 
// #define REP(i,k,n) for (i = k; i <= n; ++i) 
// #define REPR(i,k,n) for (i = k; i >= n; --i) 


// // Driver program to test above Macros 
// int main() 
// { 
// 	int i; 
// 	int array[] = {4, 5, 6, 9, 22, 11}; 
// 	int size= sizeof(array)/sizeof(array[0]); 
	
// 	// Default 0 index based loop 
// 	rep(i, size)	 
// 		cout << array[i] << " "; 
// 	cout<<"\n"; 
	
// 	// Starting index based loop 
// 	REP(i, 1, size-1)	 
// 		cout << array[i] << " "; 
// 	cout<<"\n"; 
	
// 	// Reverse for loop 
// 	REPR(i, size-1,0)	 
// 		cout << array[i] << " "; 
// 	return 0; 
// } 
