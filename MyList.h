
#include <iostream>

template <class T>
class MyList
{
private:
    T* MyArray;
    int mySize;
    int myCapacity;

public:
    MyList();
    MyList(int capacity);
    ~MyList();
    int getSize();
    int getCapacity();
    void add(T item);
    void display();
    T getMax();
    T at(int index);
    T remove();
    int firstIndexOf(T item);
    void clear();
};

template <class T>
MyList<T>::MyList()
{
    mySize = 0;
    myCapacity = 10;
    MyArray = new T[myCapacity]{};
}

template <class T>
MyList<T>::MyList(int capacity)
{
    mySize = 0;
    myCapacity = capacity;
    if (myCapacity < 0)
    {
        myCapacity = 10;
    }
    MyArray = new T[myCapacity]{ 0 };
}

template <class T>
MyList<T>::~MyList()
{
    delete[] MyArray;
}

template <class T>
int MyList<T>::getSize()
{
    return mySize;
}

template <class T>
int MyList<T>::getCapacity()
{
    return myCapacity;
}

template <class T>
void MyList<T>::add(T item)
{
    if (mySize == myCapacity)
    {
        myCapacity *= 2;
        T* temp = new T[myCapacity]{ 0 };
        for (int i = 0; i < mySize; i++)
        {
            temp[i] = MyArray[i];
        }
        delete[] MyArray;
        MyArray = temp;
    }
    if (item > MyArray[0])
    {
        for (int i = mySize - 1; i >= 0; i--)
        {
            MyArray[i + 1] = MyArray[i];
        }
        MyArray[0] = item;
        mySize++;
    }
    else if (item <= MyArray[0])
    {
        MyArray[mySize] = item;
        mySize++;
    }
}

template <class T>
void MyList<T>::display()
{
    std::cout << "[";
    for (int i = 0; i < mySize; i++)
    {
        if (i == mySize - 1)
        {
            std::cout << MyArray[i];
        }
        else
        {
            std::cout << MyArray[i] << ",";
        }
    }
    std::cout << "]" << std::endl;
}

template <class T>
T MyList<T>::getMax()
{
    return MyArray[0];
}

template <class T>
T MyList<T>::at(int index)
{
    if (index < 0 || index >= mySize)
    {
        return -1;
    }
    return MyArray[index + 1];
}

template <class T>
T MyList<T>::remove()
{
    if (mySize == 0)
    {
        return -1;
    }
    T temp = MyArray[0];
    MyArray[0] = 0;

    T max = MyArray[0];
    int maxIndex = 0;
    for (int i = 1; i < mySize; i++)
    {
        if (MyArray[i] > max)
        {
            max = MyArray[i];
            maxIndex = i;
        }
    }
    MyArray[0] = max;
    for (int i = maxIndex; i < mySize - 1; i++)
    {
        MyArray[i] = MyArray[i + 1];
    }
    mySize--;
    return temp;
}

template <class T>
int MyList<T>::firstIndexOf(T item)
{
    for (int i = 0; i < mySize; i++)
    {
        if (MyArray[i] == item)
        {
            return i;
        }
    }
    return -1;
}

template <class T>
void MyList<T>::clear()
{
    mySize = 0;
}

