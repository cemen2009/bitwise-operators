#include<iostream>
#include<vector>

using namespace std;

int find_missing(vector<int>& list){
    int xorList = 0, xorFull = 0;

    vector<int> full_range;

    for (int i = 1; i <= list.size() - 1; i++)
    {
        xorFull ^= i;
    }

    for (int number : list){
        xorList ^= number;
    }

    return xorList ^ xorFull;
}

int main(){
    // missing number is 3
    vector<int> list = {1, 2, 4, 5, 6};

    cout << "array: { ";

    for (int number : list){
        cout << number << ", ";
    }

    cout << "\b\b }\n\nmissing number: " << find_missing(list) << endl;

    return 0;
}