#include<iostream>

using namespace std;

bool isEven(int number){
    // if number is even it has 0 in least significant bit (LSB) and otherwise it has 1 in LSB
    // AND operation returns true in position of each bit if both numbers has 1 in that position
    // 1 & 1 => 1
    // 1 & 0 => 0
    // 0 & 1 => 0
    // 0 & 0 => 0
    // in that case all positions of result number wil definetly be 0 except LSB
    // LSB could be 1 if it's odd (1 & 1 => 1)
    // LSB could be 0 if it's even (0 & 1 => 0)
    // using property of boolean values: false = 0, true = any other value (-0.1, -124343, 1, 12834928347.84 etc.)
    // we say number is even if LSB is 0 and number is odd if LSB is 1
    return number & 0x01 ? false : true;
};

int main(){

    int input_number, iterator = 0;

    while (iterator < 5){
        cout << "\n\nenter the number\n>>> ";
        cin >> input_number;

        if (isEven(input_number)) cout << input_number << " is even" << endl;
        else cout << input_number << " is odd" << endl;

        iterator++;
    }

    return 0;
}