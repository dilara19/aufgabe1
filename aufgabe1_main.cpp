/// compile with 
///    g++ -std=c++17 -Wall -pedantic aufgabe1.cpp aufgabe1_main.cpp -o aufgabe1
/// Run using
///    ./aufgabe1

#include <iostream>
#include <string>
#include "aufgabe1.hpp"


int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cerr << "Exactly two arguments expected: (1) input file, (2) output file" << std::endl;
        return 1;
    }

    // Store the file names in std::string.
    std::string input_file(argv[1]);
    std::string output_file(argv[2]);
    
    // do the hard work (implemented in aufgabe1.cpp)
    bool success = reverseComplementFASTA(input_file, output_file);
    
    // handle return code
    if (!success) return 1;
    else return 0; // 0 indicates success (by convention)!
}
