#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // writing in file
    string inputData;
    cout << "Enter data : ";
    getline(cin, inputData);  // capturing multi-word input

    ofstream fileWrite;                // creating fileWrite object to write to the file
    fileWrite.open("sampleFile.txt");  // opening file
    fileWrite << inputData;            // write down the content of inputData into file
    fileWrite.close();                 // closing the file

    // reading file
    ifstream fileRead1, fileRead2, fileRead3, fileRead4, fileRead5;

    // reading file - firstWord
    fileRead1.open("sampleFile.txt");

    string readFirstWord;
    fileRead1 >> readFirstWord;  // using >> for reading the first word
    cout << "fileSays : " << readFirstWord << endl;
    fileRead1.close();

    // reading file - firstCharacter
    fileRead2.open("sampleFile.txt");

    char readFirstChar;
    fileRead2.get(readFirstChar);  // using .get() to read the first character
    cout << "fileSays : " << readFirstChar << endl;
    fileRead2.close();

    // reading file - character by character (ignoring whiteSpaces)
    fileRead3.open("sampleFile.txt");

    char readCharByChar1;
    while (fileRead3 >> readCharByChar1)  // reading character by character
    {
        cout << readCharByChar1;
    }
    cout << endl;
    fileRead3.close();

    // reading file - character by character (including whiteSpaces)
    fileRead4.open("sampleFile.txt");

    char readCharByChar2;
    while (fileRead4.get(readCharByChar2))  // using get() to read each character including whitespaces
    {
        cout << readCharByChar2;
    }
    cout << endl;
    fileRead4.close();

    // reading file - line by line
    fileRead5.open("sampleFile.txt");

    string readLine;
    while (getline(fileRead5, readLine))  // using getline() to read the file line by line
    {
        cout << readLine;
    }
    cout << endl;
    fileRead5.close();

    return 0;
}
