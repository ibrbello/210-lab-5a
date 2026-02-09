// COMSC-210 | Lab 4A | Ibrahim Bello
// This program will create and store a vector of structs, each
// representing a color. The program will then display the colors.
#include <iostream>
#include <iomanip>
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
    // Display the colors in a formatted table
    cout << left << setw(10) << "Color#" << setw(10) << "R Value" << setw(10) 
    << "G Value" << setw(10) << "B Value" << endl;
    // print separator dashes only under the headers, with spaces between
    cout << left << setw(10) << "--------" << setw(10) << "--------" 
    << setw(10) << "--------" << setw(10) << "--------" << endl;

    for (size_t i = 0; i < colors.size(); i++) {
        cout << left << setw(10) << (i + 1) << setw(10) << colors[i].red 
        << setw(10) << colors[i].green << setw(10) << colors[i].blue << endl;
    }
    
    return 0;

}
