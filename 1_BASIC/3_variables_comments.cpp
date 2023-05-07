/* Variables and comments in C++
    Low Level: Close to hardware
    High Level: Far from hardware

    Data-Types
        Built-in: int, float, double
        User defined: struct, union, enum
        Derived: array, function, pointers
    
    Rules
        1-255 chars
        Start with letter or _
        After first char letter/number
        Case sensitive
        Spaces/Special Chars not allowed
        Reserved Keywords not allowed
*/

// Single line Comment
/* Multi-Line Comment */

#include<iostream>

// using namespace std;
using std::cout;

// Global variable
int a = 2;

void f(){
    cout <<"a = "<< a <<'\n';
}

int main(){
    // Local variable
    int a = 1;
    float b = 2.13;
    double c = 3.145162;
    char d = 'A';
    bool e = true;
    cout << "a = "<< a << '\n'
         << b << '\n'
         << c << '\n'
         << d << '\n'
         << e << '\n';
    // Calling f
    f();
    return 0;
}
