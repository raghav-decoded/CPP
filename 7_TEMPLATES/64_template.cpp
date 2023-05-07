/*
 A template is believed to escalate the potential of C++ several fold by giving it the ability to define data types as parameters making it useful to reduce repetitions of the same declaration of classes for different data types. Declaring classes for every other data type(which if counted is way too much) in the very first place violates the DRY( Don’t Repeat Yourself) rule of programming and on the other doesn't completely utilise the potential of C++.
*/
#include <iostream>
using std::cout;
using std::endl;
 
template <class T>
class vector
{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); //vector 2 with a float data type
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}
