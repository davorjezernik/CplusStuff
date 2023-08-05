#include <iostream>

using namespace std;
int main()
{
    cout << "Counting down" << endl;
    int num{};
    cout << "Enter a positive integer - start the countdow: ";
    cin >> num;
    
    while (num > 0){
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;
    
    cout << "\nCounting up" << endl;
    int num1{};
    cout << "Enter a positive integer to count up: ";
    cin >> num1;
    
    int i {1};
    while (num1 >= i){
        cout << i << endl;
        i++;
    }
    
    cout << "\nNumber check" << endl;
    int number{};
    
    cout << "Enter a integer less then 100: ";
    cin >> number;
    while (number >= 100){
        cout << "Enter a integer less then 100: ";
        cin >> number;
    }
    
    cout << "\nBoolean flag" << endl;
    bool done {false};//always set it to false
    int numbr {0};
    
    while(!done){
        cout << "Enter an integer between 1 and 5: ";
        cin >> numbr;
        if (numbr <= 1 || numbr >= 5)
            cout << "Out of range, try again" << endl;
        else{
            cout << "Thanks!" << endl;
            done = true;
        }
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}

