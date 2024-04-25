#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>


using namespace std;

string capitalizeSecondLetter(const string& word) {
    string modifiedWord = word;
    if (word.length() >= 2 && isalpha(word[1])) {
        modifiedWord[1] = toupper(word[1]);
    }
    return modifiedWord;
}

string Reverse(const string& str){
    string reversed = str;
    reverse(reversed.begin(),reversed.end());

    return reversed;
}
int countdata (const string& str){

    stringstream stream(str);
    

    int datacount = 0;

    const string data = "aeiouAEIOU";

    while (stream >> datacount){

        ++datacount;
    
    }
    return datacount;
}

int main (){
    ifstream inputfile("number 6.txt");
    if (!inputfile.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    
    string filedata;

    getline(inputfile, filedata);

    
    inputfile.close();

    cout << "Statement from the file: " << filedata << endl;
    string reversedStatement = Reverse(filedata);
    cout << "Reversed statement: " << reversedStatement << endl;

    return 0;
}
