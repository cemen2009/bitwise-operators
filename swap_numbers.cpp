#include<iostream>

using namespace std;

void swapNumbers(int &number0, int &number1){ // we pass arguments as reference to directly affect original values

    number0 = number0 ^ number1;    // 0 =  0_original ^ 1_original
    
    // using property of XOR:
    // x ^ 0 = x
    // x ^ x = 0
    number1 = number0 ^ number1;    // 1 = (0_original ^ 1_original) ^ 1_original = 0_original ^ 1_original ^ 1_original = 0_original ^ 0 = 0_original 
    number0 = number0 ^ number1;    // 0 = (0_original ^ 1_original) ^ 0_original = 0_original ^ 1_original ^ 0_original = 1_original ^ 0 = 1_original
}

int main(){
    int a = 3, b = 5;

    cout << "number a: " << a << "\nnumber b: " << b;

    swapNumbers(a, b);

    cout << "\n\nnumber a: " << a << "\nnumber b: " << b;

    return 0;
}