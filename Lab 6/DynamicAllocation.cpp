#include <iostream>
#include <string>
using namespace std;

int main(){
    string* pString = nullptr;
    int* pInt = nullptr;

    pString = new string;
    pInt = new int;
    if(pString == nullptr || pInt == nullptr){
        cout << "Error: Memory could not be allocated" << endl;
        return 1; // Exit with an error code
    }
    else{
        cout << "Enter a string: ";
        getline(cin, *pString);
        cout << "Enter an integer: ";
        cin >> *pInt;

        cout << "You entered the string: " << *pString << endl;
        cout << "You entered the integer: " << *pInt << endl;
    }
    
    delete pString;
    delete pInt;
    pString = nullptr;
    pInt = nullptr;

    return 0;
}