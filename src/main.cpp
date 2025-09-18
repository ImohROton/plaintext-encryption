#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string plaintext;

    ifstream MyReadFile("input/plaintext.txt");

    while (getline(MyReadFile, plaintext))
    {
        cout << plaintext << endl;
    }

    MyReadFile.close();

    for (int i = 0; i < plaintext.length(); i++)
    {
        plaintext[i] += 1;
    }

    cout << plaintext << endl;
}
