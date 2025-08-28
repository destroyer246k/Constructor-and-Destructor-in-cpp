//Patel Vishwas
//24070123072
//A3
#include<iostream>
using namespace std;
class Product{
    int P_ID;
    string Name;
    string  Category;
    double Price;
public:
Product(int id,string Nam,string cat,double pri){
        P_ID = id;
        Name = Nam;
        Category = cat;
        Price =pri;
    }
void display(){
    cout << endl <<"Details: "<<endl<< "P_ID: " << P_ID<< endl << "Name: " << Name<< endl << "Category: " << Category << endl << "Price: " << Price;
}
};
int main(){
    Product p(121,"Samsung 23FE","Electronics",83000);
    p.display();
    return 0;
}
/*
Output:
Details:
P_ID: 121
Name: Samsung 23FE
Category: Electronics
Price: 83000
*/
