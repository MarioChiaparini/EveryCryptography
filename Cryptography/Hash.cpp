#include <iostream>  // For standard C++ Console Input and it output
#include <string> // For standard C++ String manipulation
#include <sstream>

using namespace std;

// The hashing algorythm 
unsigned int SHF(string input)
{
    unsigned int Init = 124564352; // constant
    unsigned int Magic = 5674356; // constant
    unsigned int Hash; //Variable
    //ForLoop
    // When i[] is higher than the input variable lenght, the loop break for the solution
    for (int i = 0; i < input.length(); i++)
    {
        Hash = Hash ^ (input[i]); //Xor each byte of input - The boolean logic are True only when it states are different
        Hash = Hash * Magic; //Multiplying by the magic number
    }
    return Hash;

}
 // put as Hex format:
string ToHex(unsigned int input) //function to hexadecimal changing
{
    string HexaHash;
    stringstream hexastream;
    hexastream << hex << input;
    HexaHash = hexastream.str();
    std::transform(HexaHash.begin(), HexaHash.end(), HexaHash.begin(),::toupper); //std::transform() modify each element from vectors and arrays in C++
}

int main(){
    cout << "Tested hashed is: " << SHF("testiing");
    getchar();
}