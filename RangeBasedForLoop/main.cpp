#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int scores[] {10,20,30};
    //auto finds himeself the type in this case int
    for (auto score:scores)
        cout << score << endl;
    
    cout << "\nAvarage temperature" << endl;
    vector<double> temperatures{87.9,77.9,80.0,72.5};
    double avarage_temp{};
    double total{};
    for (auto temp:temperatures)
        total += temp;
    
    if (temperatures.size() != 0)
        avarage_temp = total / temperatures.size();
     
    cout << fixed << setprecision(1);//this will round up to one decimal
    cout << "Avarage temperature is: " << avarage_temp << endl;
    
    cout << "\nInitalization list in loop" << endl;
    for (auto val:{1,2,3,4,5})
        cout << val << endl;
        
    cout << "\nString" << endl;
    //c stile string
    for (auto c:"This is a test")
        if (c != ' ')//taking out spaces
        cout << c;
    
    
    
    return 0;
}

