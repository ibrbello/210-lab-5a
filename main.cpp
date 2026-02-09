// COMSC-210 | Lab 4A | Ibrahim Bello
// This program will create and store a vector of structs, each
// representing a color. The program will then display the colors.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main(){
    // Initial test
    Color tempStruct;
    tempStruct.red = 100;
    tempStruct.green = 100;
    tempStruct.blue = 100;
    cout << "Test struct's data: " << endl;
    cout << "Red: " << tempStruct.red << endl;
    cout << "Green: " << tempStruct.green << endl;
    cout << "Blue: " << tempStruct.blue << endl;
    return 0;
}