#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    Person Jane(60.0f, "Jane", 50);
    Person John(75.0f, "John", 40);

    float totalWeight = Jane + John;

    if(Jane == John){
        cout << "This is the same person" << endl;
    }
    if(Jane != John)
    {
        cout << "This is NOT the same person" << endl;
    }

    if(Jane < John){
        cout << "Jane is younger than John" << endl;
    }

    if(Jane > John){
        cout << "Jane is order than John" << endl;
    }
    cout << "Total Weight: " << totalWeight << endl;

    int johnAge = John;
    cout << "John's Age is: " << johnAge << endl;

    string janeFirstname = Jane;
    cout << "Jane's First name is: " << janeFirstname << endl;

    float janeWeight = Jane;
    cout << "Jane's weight is: " << janeFirstname << endl;



    return 0;
}