#pragma once
#include <exception>
#include <iostream>

template <typename T>
class CircularArrayList {
protected:
    int entry_count;       // current size
    int array_capacity;    // maximum allowed size
    T* elements;           // storage for the objects
public:
    CircularArrayList(int size = 10);
    ~CircularArrayList();
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
        if ( empty() ) {
            return;
        }
        std::cout << at(0);
        for ( int i = 1; i < size(); ++i ) {
            std::cout << "-" << at(i);
        }
    }
};

template <typename T>
CircularArrayList<T>::CircularArrayList(int size): entry_count{0}, array_capacity{size} {
    // write your solution here
}

template <typename T>
CircularArrayList<T>::~CircularArrayList() {
    // write your solution here
}

// Element access

template <typename T>
T& CircularArrayList<T>::at(int i) const {
    // write your solution here
}

template <typename T>
void CircularArrayList<T>::set(int i, const T& o) {
    // write your solution here
}

// Modifiers

template <typename T>
void CircularArrayList<T>::insert(int i, const T& o) {
    // write your solution here
}

template <typename T>
void CircularArrayList<T>::erase(int i) {
    // write your solution here
}
