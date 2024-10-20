#include<iostream>
#include<vector>

using namespace std;

int findUnique(const vector<int>& array){
    int unique = 0;

    // XORing each number, so they cancel each other (x ^ x = 0)
    // by the end of loop unique number will remain
    for (int number : array){
        unique ^= number;
    }

    return unique;
}

int main()
{
    // vector of integers where every element except one appears twice
    vector<int> list = {99, 104, 5, 99, 5};

    int unique = findUnique(list);

    cout << "the unique number is " << unique << endl;

    return 0;
}