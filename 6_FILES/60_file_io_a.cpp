/*
    fstreambase
    ifstream    -> derived from fstreambase
    ofstream    -> derived from fstreambase

    Primarily, there are 2 ways to open a file:
        Using the constructor
        Using the member function open() of the class
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Raghav bhai";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out<<st;

    return 0;
}
