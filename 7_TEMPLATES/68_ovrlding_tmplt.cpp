#include <iostream>
using namespace std;


template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data;
}


void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    Harry<int> h(5);
    cout << h.data << endl;
    h.display();
    cout << endl;
    func(4); // Exact match takes the highest priority
    func(1.3);

    return 0;
}
