#include <iostream>
#include "Hashmap.h";
using namespace std;


int main(){

    Hashmap<int> h1(5);

    h1.insert(32);
    h1.insert(25);
    h1.insert(21);
    h1.insert(7);
    h1.insert(4);
   
   h1.traversel();
   cout<<endl;

   h1.search(21);
  

    



    return 0;
}