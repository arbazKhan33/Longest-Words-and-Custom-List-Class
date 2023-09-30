// Arbaz Khan (1940280)

// Q1.cpp file with the main function and longestWords function


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string longestWords(string text)
{
    string word = "";
    string longest = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            if (word.length() > longest.length())
            {
                longest = word;
            }
            word = "";
        }
        else
        {
            word += text[i];
        }
    }
    if (word.length() > longest.length())
    {
        longest = word;
    }
    return longest;
}

int main()
{

    ifstream inFile("input.txt", ios::in);
    ofstream outFile("output.txt", ios::out);
    int i = 0;

    string line = "";
    string word = "";

    while (inFile >> word)
    {
        char str1 = word[word.length() - 1];
        char str2 = '.';
        if (str1 == str2)
        {
            line += word;
            outFile << longestWords(line) << endl;
            line = "";
        }
        else
        {
            line += word;
            line += " ";
        }
    }
    inFile.close();
    outFile.close();
}