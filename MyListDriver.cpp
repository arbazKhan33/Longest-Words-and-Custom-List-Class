// Arbaz Khan (1940280)

// driver class


#include <iostream>
#include "MyList.h"
using namespace std;


int main()
{
    MyList<int> a(3);
    MyList<double> b(-10);
    cout << "Size of a: " << a.getSize() << endl;
    cout << "Capacity of a: " << a.getCapacity() << endl;
    cout << "Size of b: " << b.getSize() << endl;
    cout << "Capacity of b: " << b.getCapacity() << endl;
    a.add(4);
    a.display();
    a.add(2);
    a.display();
    a.add(9);
    a.display();
    a.add(4);
    a.display();
    a.add(9);
    a.display();
    a.add(10);
    a.display();
    a.add(8);
    a.display();
    cout << "a.getMax(): " << a.getMax() << endl;
    cout << "a.at(3): " << a.at(3) << endl;
    cout << "a.remove(): " << a.remove() << endl;
    a.display();
    a.remove();
    a.display();
    a.remove();
    a.display();
    for (int i = 1; i <= 5; i++)
    {
        cout << i << ": " << a.firstIndexOf(i) << endl;
    }
    a.clear();
    a.display();
    cout << "Size of a: " << a.getSize() << endl;
    cout << "Capacity of a: " << a.getCapacity() << endl;
}