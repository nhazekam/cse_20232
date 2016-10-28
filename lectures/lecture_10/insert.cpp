#include <iostream> 
#include <vector>
using namespace std;
int main () {
   vector<int> myvector (3,100);
   vector<int>::iterator it; 
   it = myvector.begin();

   it = myvector.insert ( it , 200 ); //insert 200 before beginning

	myvector.insert (it,2,300); 

   it = myvector.begin(); 
   vector<int> anothervector (2,400);

   myvector.insert (it+2,anothervector.begin(),anothervector.end()); 
   int myarray [] = { 501,502,503 };

   myvector.insert (myvector.begin(), myarray, myarray+3); 

   cout << "myvector contains:";
   for (it=myvector.begin(); it<myvector.end(); it++) 
    std::cout << ' ' << *it;   std::cout << '\n'; 
   return 0; 
}
