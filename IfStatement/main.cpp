#include <iostream>

using namespace std;
int main()
{
    int num{};
    const int min{10};
    const int max{100};
    
    cout << "Enter a number betweeb " << min << " and " << max << ":";
    cin >> num;
    
    if (num >= min)
    { //This is a block
        cout << "\n=== If statement 1. ===" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        
        int diff(num - min); //diff is only assaceble in this block
        cout << num << " is " << diff << " greater than " << min << endl;
    }    
    if (num <= max)
    { //This is a block
        cout << "\n=== If statement 2. ===" << endl;
        cout << num << " is less or equal then " << max << endl;
        
        int diff(max - num); //diff is only assaceble in this block
        cout << num << " is " << diff << " less than " << max << endl;
    } 
    if (num >= min && num <= max)
    { //This is a block
        cout << "\n=== If statement 3. ===" << endl;
        cout << num << " is range " << endl;
        cout << "This means statement 1 and 2 must also display!!" << endl;
    } 
    if (num == min || num == max)
    { //This is a block
        cout << "\n=== If statement 4. ===" << endl;
        cout << num << " is right on a boundary " << endl;
        cout << "This means statement 1, 2 and 3 must also display!!" << endl;
    } 
    
    
    return 0;
}

