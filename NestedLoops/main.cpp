#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int num_items {};
    
    cout << "how many data items do u have?: ";
    cin >> num_items;
    
    vector <int> data {};
    
    for (int i{1};i<=num_items;++i){
        int data_item{};
        cout << "Enter data item: " << i << endl;
        cin >> data_item;
        data.push_back(data_item);
    }
    cout << "\nDisplaying Histogram" << endl;
    for (auto val: data){
        for (int i{1};i<=val;++i){
            cout << "-";
        }
        cout << endl;
    }
    return 0;
}
