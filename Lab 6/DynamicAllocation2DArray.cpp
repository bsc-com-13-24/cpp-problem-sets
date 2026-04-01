#include <iostream>
using namespace std;

int main(){
    int numberOfRows = 0;
    int numberOfColumns = 0;
    int** dynamic2DArray = nullptr;
    cout << "How many rows would you like to have? ";
    cin >> numberOfRows;
    cout << "How many columns would you like to have? ";
    cin >> numberOfColumns;
    
    if(numberOfColumns <= 0 || numberOfRows <= 0 || (numberOfColumns > 3 || numberOfRows > 3)){
        cout << "Error: Number of rows and columns must be positive and less than 3" << endl;
        return 1; // Exit with an error code
    }
    else{
        dynamic2DArray = new int*[numberOfRows];
        for(int i = 0; i < numberOfRows; ++i){
            dynamic2DArray[i] = new int[numberOfColumns];
        }
        if(dynamic2DArray == nullptr){
            cout << "Error: Memory could not be allocated" << endl;
            return 1; // Exit with an error code
        }
        else{
            for(int j = 0; j < numberOfRows; ++j){
                for(int k = 0; k < numberOfColumns; ++k){
                    cout << "Enter a number: ";
                    cin >> dynamic2DArray[j][k];
                }
            }
            cout << "You have entered: " << endl;
            for(int m = 0; m < numberOfRows; ++m){
                for(int n = 0; n < numberOfColumns; ++n){
                    cout << dynamic2DArray[m][n] << " , ";
                }
                cout << endl;
            }
        }
    }
    for(int p = 0; p < numberOfRows; ++p){
        delete[] dynamic2DArray[p];
    }
    delete[] dynamic2DArray;
    dynamic2DArray = nullptr;
    return 0;
}