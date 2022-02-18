// An overview of all core data structures and their methods in C++.
// Examples of usage and time complexity.
// Created by Jacob Greenberg-Bell.

#include <iostream>

// vector
// dynamic array data type
// O(n) insertion, removal, lookup
#include <vector>

// doubly linked list:
// O(1) insertion and deletion
// O(n) indexing
#include <list>

// a singly linked list:
// when only performing forwrad traversale this saves memory
// O(1) insertion and deletion
// O(n) indexing
#include <forward_list>

// a doubly ended queue
// operations can be performed on the front and the back
#include <deque>

// an array
// O(n) insertion, searching and deletion
// O(1) indexing
#include <array>

// a collection of key value pairs, aka dictionary
// implemented using a hash-map
// O(1) lookup
#include <map>

// a collection of unique elements
// implemented using a BST
// (nlog(n)) lookup, insertion, deletion
#include <set>

// an unordered collection of elements
// implemented with a hash map
#include <unordered_set>

// an unordered collection of key vlaue pairs
// implemented via a hash map
#include <unordered_map>


void vector(){
    // INITIALIZING vectors:
    
    // initialize with each element uniquely
    std::vector<int> vect {1, 2, 3, 4};
    // intialize with size n and all values x
    // std::vector<int> vect(n, x);
    std::vector<int> vect2(3, 10);
    
    // ITERATING over vectors:
    
    // basic for loop appraoch, notice .size() not .length() like some other languages
    for(int i = 0; i < vect.size(); i++){
        int element = vect[i];
    }
    // C++11 "range based for loop" like Python looping
    // we are assigning i to vect[j] for j in {0, vect.size}
    // auto detects the type in vect, very portable way
    for(auto i : vect){
        int element = i;
    }
    // iterator approach, which is standard across all containers
    for(std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++){
        int element = *it;
    }
     
    // METHODS for vectors:
    // there's a wide range of methods for vectors
    // below i give examples of using the most important
    
    // overview info
    // return size of vector: O(1)
    int vector_length = vect.size();
    // return boolean of whether vector is empty: O(1)
    bool vector_empty = vect.empty();
    
    // accessors:
    // access first element: O(1)
    int first_element = vect.front();
    // access last elemetn: O(1)
    int last_element = vect.back();
    
    // modifiers
    // add element to end of vector, no return value
    vect.push_back(1);
    
    
    
    
    
    
    
}


int main() {
    vector();
}
