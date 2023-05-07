/*
    Function Call in C++
    
    Call by value
        Pass value as actual args
    Call by pointer/address
        Pass address of the variable as actual args
    Call by reference C++
        Pass the variables
        The function accepts aliases(References) which points to the actual address
*/
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using C++ reference Variables
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

int & swapReferenceRet(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    return a;
}

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    // swapReferenceVar(x, y); //This will swap a and b using reference variables

    // The function returns a reference to a 
    // LHS(ref a) = 766
    // x = 766
    swapReferenceRet(x, y) = 766; 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
