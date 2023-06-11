#include <iostream>
#include <vector>

using namespace std;


void printVector(const vector<int>& vi, int method=1) {
   for (auto item:vi)
       cout << item << ' ';
   cout << endl;
}


int main() {
    vector<int> first;      // empty vector of ints
    vector<int> second (4,100);     // four ints with value 100
    vector<int> third (second.begin(),second.end());    // iterating through second
    vector<int> fourth (third);     // a copy of third


    cout << "Fourth Vector Content: ";
    printVector(fourth);


    //Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
    first.assign (7,10);
    cout << "First Vector Content: ";
    printVector(first);


    //Returns a reference to the element at position n in the vector.
    first.at(4) = 50;
    cout << "At: " << first.at(4) << endl;


    //Returns a reference to the last element in the vector.
    first.back() = 150;
    cout << "Back: " << first.back() << endl;


    //Returns an iterator pointing to the first element in the vector.
    *first.begin() = 120;
    cout << "Begin: " << *first.begin() << endl;


    //Returns an iterator pointing to the first element in the vector.
    cout << "cbegin & cend: ";
    for (auto it = first.cbegin(); it != first.cend(); it++) {
        cout << *it << ' ';
    }
    cout << endl;


    //Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
    cout << "Capacity: " << first.capacity() << endl;
    cout << "Size: " << first.size() << endl;


    //Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    cout << "Data: " << first.data() << endl;
    cout << "Data Dereference: " << *first.data() << endl;


    //The container is extended by inserting a new element at position. This new element is constructed in place using args as the arguments for its construction.
    auto it = first.emplace ( first.begin()+1, 100 );
    first.emplace ( it, 200 );
    first.emplace ( first.end(), 300 );
    //Inserts a new element at the end of the vector, right after its current last element. This new element is constructed in place using args as the arguments for its constructor.
    first.emplace_back(321);    // similar to push_back();
    cout << "Emplace: ";
    printVector(first);

    //Removes from the vector either a single element (position) or a range of elements ([first,last)).
    first.erase (first.begin()+5);    // erase the 6th element
    printVector(first);

    //Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.
    first.clear();


    cout << "\n\nAfter clear vector" << endl;
    cout << "Capacity: " << first.capacity() << endl;
    cout << "Size: " << first.size() << endl;

    return 0;
}
