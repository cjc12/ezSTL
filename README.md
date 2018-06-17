# [ezSTL](https://github.com/cjc12/ezSTL)
EzSTL (easy STL) is a tiny STL writen by generic programming and C++11, providing six basic components: containers,  iterators, adapters, algorithms, allocators and functions. It also contains three smart pointers(shared_ptr, unique_ptr, weak_ptr) and test codes.
## Instructions
 1. git clone https://github.com/cjc12/ezSTL.git
 2. cd ezSTL
 3. make test
 4. ./test
## Test environment
 - Visual Studio 2015/2017 and g++ 6.3.0 under win10 enterprise edition
 - g++ 5.2.1 under ubuntu 15.10
## Compotents
 ### 1. containters
 **vector**: dynamic array
 
**list**: bidirectional list

**set**: red-black tree

**map**: red-black tree

**unordered_map**: hash table
> begin(), end(), empty(), size(), push_back(), pop_back(), find(), insert(), erase(), clear(), copy constructor, move constructor, copy assignment operator, move assignment operator, destructor, etc
### 2. iterators
Using type_traits tricks
### 3. adapters
**stack**: using list as base container

**queue**: using list as base container

**priority_queue**: using vector as base container
> empty(), size(), push(), pop(), top(), front(), back()
 ### 4. algorithms
**sort**: using insertion sort/quick sort/heap sort

**stable_sort**: stable version, using insertion sort/merge sort
 ### 5. allocators
Providing a simple allocator. Users can customize their own allocators.
 ### 6. functions
Providing functions including less, greater, etc.

Providing a universal hash function for unordered_map.
 ### 7. smart pointers
Providing shared_ptr, unique_ptr and weak_ptr.
 ### 8. test class
**correctness**:
random data sets are generate to test the correctness of all the components above repeatedly.

**efficiency**:
EzSTL shows some progress in efficiency compared to PJ STL and SGI STL in some aspects. For example, ezSTL is slightly better than PJ STL in set/map inserting, finding, erasing and in sort function. It also excels SGI STL in  set/map inserting, finding, erasing.

![rbtree compared with SGI STL](https://github.com/cjc12/ezSTL/blob/master/png/rbtree.png)
![sort compared with SGI STL](https://github.com/cjc12/ezSTL/blob/master/png/sort.png)
![rbtree compared with PJ STL](https://github.com/cjc12/ezSTL/blob/master/png/rbtree_pj.png)
![sort compared with PJ STL](https://github.com/cjc12/ezSTL/blob/master/png/sort_pj.png)
## Code lines
![statistic](https://github.com/cjc12/ezSTL/blob/master/png/statistic.png)
