#ifndef _HEADER_H
#define _HEADER_H

#include <bits/stdc++.h>
using namespace std;

template <class T>

class MAVector
{
    private:
        T* arr;
        int sze;
        int cap;
    public:
// ----> Marwan
        MAVector(int cap = 2);
        MAVector(const MAVector& other);
        MAVector &operator= (const MAVector& other);
        T& operator[] (int index);
        T pop_back();
        void erase(/*iterator1, iterator2*/);
        void insert(/*iterator, T*/);
//        iterator end();
        bool operator< (const MAVector<T>& other);
        const int capacity();
        bool empty();

/////////////////////////////////////////////////////////////////////////
// ----> Abo bakr
        MAVector(T* other, int n);
        ~MAVector();
        MAVector &operator= (const MAVector&& other);
        int push_back(T);
//        void erase();
        void clear();
//        iterator begin();
        bool operator== (const MAVector<T>& other);
        const int size();
        int resize();
        friend ostream& operator<< (ostream& out, MAVector<T> other);






};

#endif