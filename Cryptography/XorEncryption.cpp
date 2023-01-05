#include <iostream>
#include <string>

using namespace std;

//this is our XOR encryption/decryption function
string XOR(string data, char key[]){
    //initialize new variable for our xordata
    string xorstring = data;
    // ForLoop for scrambling bits for our xor data
    for (int i = 0; i < xorstring.size(); i++){
        // create the array with string elements (XOR aray)
        xorstring[i] = data[i] ^ key[i % (sizeof(key)/sizeof(char))]; //scrambling the string 
    }
    return xorstring;
}

int main(){
    char key[3] = {'K', 'E', 'Y'};
    std::cout << XOR("virtual coder", key);
    getchar();
    return 0;
}