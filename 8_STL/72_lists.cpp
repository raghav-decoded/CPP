/*
    Lists in C++

    Declare
        list<TYPE> LIST_NAME;
        list<TYPE> LIST_NAME(SIZE);
    ITERATOR
        list<int> :: iterator ITERATOR_NAME;
        LIST.begin()
            points to the first element
        LIST.end()
            points to the last element
    Functions
        LIST.push_back()
            push at the back
        LIST.pop_back()
            pop from the end
        LIST.pop_front()
            pop from the beginning
        LIST.remove(ELEMENT)
            remove all occurences of the ELEMENT
        LIST.sort()
            sorts the LIST
        LIST.merge(LIST2)
            merges LIST2 with LIST

*/
#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{

    list<int> list1; // empty list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.sort();
    list1.remove(9);
    list1.pop_front();
    list1.pop_back();
    display(list1);

    list<int> list2(4); // empty list of length 4
    list<int>::iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
    *it = 7;
    it++;

    display(list2);
    list1.merge(list2);
    display(list1);

    return 0;
}
