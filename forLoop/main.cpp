#include <iostream>
#include <vector>
 
using namespace std;

int main()
{
    cout << "Incrementing by 1" << endl;
    //for (int i{1};i<=10;++i)
        //cout << i << endl;
        
    cout << "\nIncrementing by 2" << endl;    
    //for (int i{1};i<=10;i+=2)
        //cout << i << endl;
    
    cout << "\nCounting down" << endl;
    //for (int i{10};i>0;--i)
        //cout << i << endl;
    //cout << "Test" << endl; //This will be displayed after the for loop
    
    cout << "\nFor loop with if" << endl;
    //for (int i{10};i<=100;i+=10){
        //if (i % 15 == 0)
        //cout << i << endl;
  //  }
    
    cout << "\nAdding two variables in a loop" << endl;
    //for (int i{1},j{5};i<=5;++i,++j)
        //cout << i << "+" << j << "=" << (i+j) << endl;
    
    cout << "\n10 numbers in a row" << endl;
    //for (int i{1};i<=100;++i){
        //cout << i;
        //+ cout << ((i % 10 == 0)?"\n":" ")
        //+ or we use this command above instead the if else
        //if (i % 10 == 0)
            //cout << endl;
        //else
            //cout << " ";
   // }
    
    cout << "\nFor loop with vector" << endl;
    vector <int> nums {10,20,30,40,50};
    for (unsigned i{0};i<nums.size();++i)
        cout << nums[i] << endl;
    
    
    return 0;
}

