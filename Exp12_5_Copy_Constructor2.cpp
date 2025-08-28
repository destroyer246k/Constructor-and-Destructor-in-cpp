//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
class Book{
    int Book_ID;
    string Title;
    string  Author;
    double Price;
public:
    Book(int id,string title,string Auth, double pri){
        Book_ID = id;
        Title = title;
        Author = Auth;
        Price =pri;
    }
    Book(const Book &b){
        Book_ID = b.Book_ID;
        Title = b.Title;
        Author = b.Author;
        Price = b.Price;
        cout << "\nCopy Constructor Caalling.";
    }
    void display(){
        cout << "Book_ID: " << Book_ID<< endl << "Title: " <<Title << endl<< "Author: " << Author<< endl << "Price: " << Price << endl;
    }
};
int main(){
    cout << "Enter details of Book 1 (original)\n ";
    int id; string Auth; string Title;double pri;
    cout << "Enter Book_ID: "; cin >> id;
    cout << "Enter Title: "; cin >> Title;
    cout << "Enter Author: "; cin >> Auth;
    cout << "Enter Price: "; cin >> pri;
    Book b1(id,Title,Auth,pri);
    cout << "\nDetails of Book 1 (original)\n ";  
    b1.display();
    Book b2 = b1;
    cout << "\nDetails of Book 2 (copied)\n ";
    b2.display();
    return 0;
}
/*
Output:
Enter details of Book 1 (original)
Enter Book_ID: 101
Enter Title: Cpp
Enter Author: Vishwas
Enter Price: 500

Details of Book 1 (original)
Book_ID: 101
Title: Cpp
Author: Vishwas
Price: 500

Copy Constructor Caalling.
Details of Book 2 (copied)
Book_ID: 101
Title: Cpp
Author: Vishwas
Price: 500
*/
