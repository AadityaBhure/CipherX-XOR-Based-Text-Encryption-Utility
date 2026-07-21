#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string encryptDecrypt(string text, char key)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = text[i] ^ key;
    }
    return text;
}

int main()
{
    string input;
    char key = 'K';   // Secret key

    cout << "Enter text: ";
    getline(cin, input);

    string encrypted = encryptDecrypt(input, key);

    cout << "\nEncrypted (Hex): ";
    for (unsigned char c : encrypted)
    {
        cout << hex << setw(2) << setfill('0') << (int)c << " ";
    }

    cout << dec << endl;

    string decrypted = encryptDecrypt(encrypted, key);

    cout << "Decrypted: " << decrypted << endl;

    return 0;
}