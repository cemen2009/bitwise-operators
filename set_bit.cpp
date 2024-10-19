#include<iostream>

using namespace std;

int setBit(int number, int bitIndex, int value){
    if (value == 1){
        return number | (1 << bitIndex);
    }
    else if (value == 0){
        return number ^ (1 << bitIndex);
    }

    cout << "WRONG VALUE!!!\n";
    return 0;
}

int main(){
    
    cout << "5 (101)\nchaning bit with index [1] to 1: " << setBit(5, 3, 1) << " (1101)\n";

    return 0;
}