//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int count = 0;
class House{
public:
    House(){
        count++;
        cout << "Total objects created count: " << count << endl;
    }
    ~House(){
        count--;
        cout << "Total objects destroyed count: " << count << endl;
    }
};
int main(){
    House h1, h2, h3;
    {
        House h4;
       
    }
    return 0;
}/*
Output:
Total objects created count: 1
Total objects created count: 2
Total objects created count: 3
Total objects created count: 4
Total objects destroyed count: 3
Total objects destroyed count: 2
Total objects destroyed count: 1
Total objects destroyed count: 0
*/    
    