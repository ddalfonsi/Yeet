#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "bio.h"

int main() {
    string input_dna = "AAATTCG GGG";
    //cin >> input_dna;
    bool x = IsValidDNASequence(input_dna);
    cout <<std::boolalpha << x << endl;
    return 44;
    
    
}