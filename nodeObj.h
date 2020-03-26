#pragma once
#pragma once
#include<iostream>

using std::cin;
using std::cout;
#ifndef NODE
#define NODE

template<class T>
struct node
{
public:
    T data;
    node<T>* right;
    node<T>* left;

    node() 
    { 
        right = nullptr; 
        left = nullptr;
    }

    node(T item)
    {
        data = item;
        right = nullptr;
        left = nullptr;
    }
    ~node()
    {
        if (right != nullptr) delete right;
        if (left != nullptr) delete left;
    }
};
#endif // !node
