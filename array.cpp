#include <iostream>
#include <string>
using namespace std;

int main(){
    string arr[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    char c;
    for(int i = 0;i < sizeof(arr)/sizeof(arr[0]); i++){
        c = arr[i][0];
        if(c == 'B'){
            cout << arr[i] << endl;
        }
    }
    return 0;
}