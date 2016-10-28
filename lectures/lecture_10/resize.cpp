#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> myvector;
    for (int i=0;i<10;i++) myvector.push_back(i);
    
    myvector.resize(5);
    myvector.resize(8,100);
    myvector.resize(10);
    
    cout << "myvector contains:";
    for (int i=0;i<myvector.size();i++)
        std::cout << ' ' << myvector[i];
    cout << endl;
    
    return 0;
}
