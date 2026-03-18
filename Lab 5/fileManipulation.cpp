#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <fstream>
using namespace std;

int numberOfVowels(const string& str){
    int count = 0;
    for (char c : str) {
        char lower = tolower(static_cast<unsigned char>(c));
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            count++;
        }
    }
    return count;
}

string reversedString(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

int numberOfWords(const string& str){
    int count = 0;
    bool isWord = false;
    for(char c : str){
        if(!isalpha(c)){
            count++;
            isWord = true;
        }
        else{
            isWord = false;
        }
    }
    return count + 1;
}

string capitalizeSecondCharacter(const string& str) {
    string result = str;
    bool inWord = false;
    int letterIndex = 0;

    for (int i = 0; i < (int)result.size(); ++i) {
        char c = result[i];
        if (isalpha(static_cast<unsigned char>(c))) {
            if (!inWord) {
                // start of a word
                inWord = true;
                letterIndex = 1;
            } else {
                ++letterIndex;
            }
            if (letterIndex == 2) {
                result[i] = toupper(static_cast<unsigned char>(result[i]));
            }
        } else {
            inWord = false;
            letterIndex = 0;
        }
    }

    return result;
}

int main(){
    string fileData;
    ifstream inFile("output.txt");
    if (inFile.is_open()) {
        getline(inFile, fileData);
        inFile.close();
    }

    string reversedOutput = reversedString(fileData);
    cout << "Reversed: " << reversedOutput << endl;

    string capitalizedSecond = capitalizeSecondCharacter(fileData);
    cout << "Second char capitalized each word: " << capitalizedSecond << endl;

    int numberOfVowelsInFile = numberOfVowels(fileData);
    cout << "Number of vowels in the file: " << numberOfVowelsInFile << endl;

    int numberOfWordsInFile = numberOfWords(fileData);
    cout << "Number of words in the file: " << numberOfWordsInFile << endl;

    return 0;
}
