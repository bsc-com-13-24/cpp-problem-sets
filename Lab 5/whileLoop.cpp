#include <iostream>
using namespace std;

int main(){
    int count = 0;
    int input;
    bool isBetween = true;

    while(isBetween){
        cout << "Enter an integer value between 5 and 10: ";
        cin >> input;

        if(input >= 5 && input <= 10){
            cout << "Your input value("<< input << ") has been accepted" << endl;
            isBetween = false;
            count++;
        }
        else{
            cout << "Sorry, you entered an invalid number, please try again" << endl;
            count++;
            cout << count << endl;
        }

    }
    return 0;
}