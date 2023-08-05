#include <iostream>

using namespace std;

int main()
{
    char selection {};
    do{
        cout << "\n---------------------" << endl;
        cout << "1.Do this" << endl;
        cout << "2.Do this" << endl;
        cout << "3.Do somthing else" << endl;
        cout << "Q.Exit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        if (selection == '1')
            cout << "U chose 1. - doing this" << endl;
        else if (selection == '2')
            cout << "U chose 2. - doing that" << endl;
        else if (selection == '3')
            cout << "U chose 3. - doing somthing else" << endl;
        else if (selection == 'q' && selection == 'Q')
            cout << "Goodbye..." << endl;
        else 
            cout << "Unknown option -- try again" << endl;
            
    }while (selection != 'q' && selection != 'Q');
    
    return 0;
}

