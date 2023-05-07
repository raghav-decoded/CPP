/* Stream = sequence of bytes
Input Stream = Input Device -> Main Memory 
Output Stream = Output Device <- Main Memory 

<< insertion op
>> extraction op

Compile: g++ -std=c++17 filename.cpp -o filename
*/


#include<iostream>

using std::cin;     
using std::cout;    
// main
int main(){
    int a, b;
    cin >> a >> b;
    cout << a + b <<'\n';
    return 0;
}