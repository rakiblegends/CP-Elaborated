#include<iostream>
using namespace std;
class Author{
    public:
    string name = "name";
    string email = "name123@gmail.com";
    char gender = 'M';
};
class Book{
    public:
    string name;
    Author author;
    double price;
    int qtyInStock=0;
    Book(string n,Author a, double p, int stock){
        name = n;
        author = a;
        price = p;
        qtyInStock = stock;
    }
    string getName(){ 
        return name;
        }
    Author getAuthor(){
         return author;
         }
    double getPrice() { 
        return price;
        }
    void setPrice(double p) {
        price = p;
    }
    int getQtyInStock(){return qtyInStock;}
    void setQtyInStock(int stock){
        qtyInStock = stock;
    }
    void print(){
        cout << "Book Name: " << getName() << "\n";
        cout << "Author Name: " << getAuthorName() << "\n";
        cout << "Author email: " << author.email << "\n";
        cout << "Author gender: " << author.gender << "\n";
        cout << "Price: " << getPrice() << "\n";
        cout << "stock: " << getQtyInStock() << "\n";
    }
    string getAuthorName(){
        return author.name;
    }
};
int main(){
    Author author;
    Book book("book name",author,100.90,200);
    book.print();
    return 0; 
}