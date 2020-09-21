#pragma once
#include <exception>
#include <iostream>

template <typename T>
class ArrayList {
protected:
    int entry_count;       // current size
    int array_capacity;    // maximum allowed size
    T* elements; // storage for the objects
public:
    ArrayList(int size = 10) : entry_count{0}, array_capacity{size} {
        elements = new T[array_capacity];
    }
    virtual ~ArrayList() {
        delete[] elements;
    }
    // Capacity
    bool empty() const {return entry_count == 0;}
    int size() const {return entry_count;}
    int max_size() const {return array_capacity;}
    // Element access
    T& at(int i) const;
    void set(int i, const T& o);
    // Modifiers
    void insert(int i, const T& o);
    void erase(int i);
    // Miscellaneous
    void print() const {
        if ( empty() )
            return;
        std::cout << at(0);
        for ( int i = 1; i < size(); ++i ) {
            std::cout << "-" << at(i);
        }
    }
};

// Element access

template <typename T>
T& ArrayList<T>::at(int i) const {
    if (0 < i && i > entry_count)
        throw std::out_of_range("Index is out of bounds");
    return elements[i];
}

template <typename T>
void ArrayList<T>::set(int i, const T& o) {
    if (0 < i && i > entry_count)
        throw std::out_of_range("Index is out of bounds");
    elements[i] = o;
}

// Modifiers

template <typename T>
void ArrayList<T>::insert(int i, const T& o) {
    // write your solution here
}

template <typename T>
void ArrayList<T>::erase(int i) {
    // write your solution here
}
