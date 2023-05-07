/*

g++ -std=c++17 71_vector.cpp
./a.out
    Vectors in C++

    Different ways to declare vectors
        vector<TYPE> VAR_NAME;
        vector<TYPE> VARNAME(SIZE);
        vector<TYPE> VARNAME(VECTORNAME)
        vector<TYPE> VARNAME(SIZE,DEFAULT_ELEMENT)

    Functions
        VECTOR.push_back(ELEMENT)
        VECTOR.pop_back()
        VECTOR.insert(ITERATOR+ELEMENTS_FROM_FIRST, REPETITIONS, ELEMENT)

    ITERATOR
        helps in iteration
        declaration
            VECTOR<TYPE> :: iterator ITERATOR_NAME ;
        VECTOR.begin()
        VECTOR.end()
*/

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;   //zero length integer vector
    vector<char> vec2(4);   //4-element character vector
    vector<char> vec3(vec2);    //4-element character vector from vec2
    vector<int> vec4(6,3);  //6-element vector of 3s
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);    
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,2,566);
    display(vec1);
    vec1.pop_back();
    display(vec1);
    return 0;
}
