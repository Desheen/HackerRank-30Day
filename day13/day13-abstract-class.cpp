#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook : Book {
protected:
	int price;
public:
	MyBook(string title, string author, int price ) : Book(title,author) , price(price) {}

	void display()
	{ 
		/* 
		Title: $title
		Author: $author
		Price: $price 
		S*/
		std::cout << "Title: " << this->title << std::endl;
		std::cout << "Author: " << this->author << std::endl;
		std::cout << "Price: " << this->price << std::endl;
	}
};


int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
