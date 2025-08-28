//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
class Car{
    int Car_ID;
    string Model;
    string  Manufacturer;
    double Price;
public:
    Car(int id,string mod,string manu,double pri){
        Car_ID = id;
        Model = mod;
        Manufacturer = manu;
        Price =pri;
    }
    Car(const Car &c){
        Car_ID = c.Car_ID;
        Model = c.Model;
        Manufacturer = c.Manufacturer;
        Price = c.Price;
        cout << "\nCopy Constructor Caalling.";
    }
    void display(){
        cout << "Car_ID: " << Car_ID<< endl << "Model: " << Model<< endl << "Manufacturer: " << Manufacturer << endl << "Price: " << Price << endl;
    }
};
int main(){
    Car c1(121,"A3","Audi",83000);
    cout << "Details of Car 1 (original)\n ";
    c1.display();
    Car c2 = c1;
    cout << "\nDetails of Car 2 (copied) ";
    c2.display();
    return 0;
}
/*
Output:
Details of Car 1 (original)
Car_ID: 121
Model: A3
Manufacturer: Audi
Price: 83000

Copy Constructor Caalling.
Details of Car 2 (copied) Car_ID: 121
Model: A3
Manufacturer: Audi
Price: 83000
*/