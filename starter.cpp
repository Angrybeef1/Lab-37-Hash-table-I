// COMSC 210 | Lab 37 Hash Tables I | Robert Stonemetz

#include <iostream>
#include <string>

using namespace std;

int sum_ascii(string str){
    int sum = 0;
    for(char c : str){
        sum += (int)c;
    }
    return sum;
}


int main() {
    //test function
    string test = "Hello";
    int result = sum_ascii(test);

    // Print result and show calculation
    cout << "Testing sum_ascii() with string: " << test << endl;
    cout << "Calculation breakdown:" << endl;
    for(char c : test) {
        cout << "ASCII value of '" << c << "' is " << (int)c << endl;
    }
    cout << "Total sum: " << result << endl;


    char a = 'A';
    cout << a << endl;
    cout << (int) a << endl;
    int b = 66;
    cout << b << endl;
    cout << (char) b << endl;
    

    return 0;
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
