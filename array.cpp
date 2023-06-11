#include <iostream>
#include <array>
using namespace std;

int main() {
    // create array
    array<int, 5> arr = {10,12,120,124,212};

    //arr.at()  Returns a reference to the element at position n in the array.
    cout << "At "<< 4 <<" :" << arr.at(4) << endl;

    //arr[]     Returns a reference to the element at position n in the array container.
    cout << "Operator [] :" << arr[4] << endl;

    //get<_Index>(_Name)     Returns a reference to the element at position n in the array container.
    get<3> (arr) = 3434;    //set value
    cout << "get<_Index>(_Name) :" << get<3> (arr) << endl;     //get value

    //arr.back()    Returns a reference to the last element in the array container.
    cout << "Back:" << arr.back() << endl;
    arr.back() = 542;       //set value

    //arr.front()   Returns a reference to the first element in the array container.
    cout << "Front:" << arr.front() << endl;
    arr.front() = 1000;     //set value

    cout << "Iterator :";

    // arr.begin()  Returns an iterator pointing to the first element in the array container
    // arr.end()    Returns an iterator pointing to the past-the-end element in the array container.
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";

    cout << "\nReverse Iterator :";
    // arr.rbegin() Returns a reverse iterator pointing to the last element in the array container.
    // arr.rend()   Returns a reverse iterator pointing to the theoretical element preceding the first element in the array (which is considered its reverse end).
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
        cout << *it << " ";

    cout << "\nConst Iterator :";
    // arr.cbegin() Returns a const_iterator pointing to the first element in the array container.
    // arr.cend()   Returns a const_iterator pointing to the past-the-end element in the array container.
    for ( auto it = arr.cbegin(); it != arr.cend(); it++ )
        cout << ' ' << *it;   // cannot modify *it

    cout << "\nConst Reverse Iterator :";
    // arr.crbegin()    Returns a const_reverse_iterator pointing to the last element in the array container.
    // arr.end()        Returns a const_reverse_iterator pointing to the theoretical element preceding the first element in the vector, which is considered its reverse end.
    for ( auto rit=arr.crbegin() ; rit < arr.crend(); rit++ )
        cout << ' ' << *rit;   // cannot modify *rit


    //arr.data() Returns a pointer to the first element in the array object.
    cout << "\nDATA :"<< arr.data()<<endl;

    //arr.empty() Returns a bool value indicating whether the array container is empty.
    cout << "\nEmpty :"<< arr.empty()<<endl;

    //arr.max_size() Returns the maximum number of elements that the array container can hold.
    cout << "\nMax Size: "<<  arr.max_size()<<endl;

    //arr.size() Returns the number of elements in the array container.
    cout <<"Array Size: " << arr.size() << endl;

    //arr.fill() Sets val as the value for all the elements in the array object.
    arr.fill(123);

    //auto iterator array element
    cout << "Auto Iterator: ";
    for (auto it : arr){
        cout << it << ' ';
    }

    //Swap content      Exchanges the content of the array by the content of x, which is another array object of the same type (including the same size).

    array<int, 5> first = {1,2,3,4,5};
    array<int, 5> second = {40,50,60,70,80};

    first.swap(second);
    cout << endl;
    for (auto f:first) {
        cout << f <<' ';
    }

    return 0;
}
