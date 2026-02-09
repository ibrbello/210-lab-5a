// COMSC-210 | Lab 4A | Ibrahim Bello
// This program will create and store a vector of structs, each
// representing a color. The program will then display the colors.
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

    // Generate a random number between 25 and 50 for the number of colors to create
    srand(time(0)); // Seed the random number generator
    int numColors = rand() % 26 + 25;
    // Create loop to generate random colors and store them in the vector
    for (int i = 0; i < numColors; i++) {
        Color randomColor;
        randomColor.red = rand() % 256; 
        randomColor.green = rand() % 256; 
        randomColor.blue = rand() % 256; 
        colors.push_back(randomColor); 
    }
    // Display the colors in the vector using range-based for loop
    for (const Color& color : colors) {
        cout << "Red: " << color.red << ", Green: " << color.green << 
        ", Blue: " << color.blue << endl;
    }
 
    return 0;
}