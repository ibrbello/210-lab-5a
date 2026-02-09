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
    vector<Color> colors; // Vector to store Color structs
    // Initial test
    Color tempStruct = {100,150,200};
    colors.push_back(tempStruct); 
    cout << "Red: " << colors[0].red << ", Green: " << colors[0].green << 
    ", Blue: " << colors[0].blue << endl;
 
    return 0;
}