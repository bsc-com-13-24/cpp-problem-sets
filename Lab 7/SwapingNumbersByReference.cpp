#include <iostream>
using namespace std;

int SwapNumbers(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    return 0;
}
int main(){
    int var1 = 25;
    int var2 = 100;

    cout << "var1 before swap: " << var1 << endl;
    cout << "var2 before swap: " << var2 << endl;

    SwapNumbers(var1,var2);

    cout << "var1 after swap: " << var1 << endl;
    cout << "var2 after swap: " << var2 << endl;
    return 0;
}