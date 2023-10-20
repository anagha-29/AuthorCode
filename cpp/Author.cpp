
#include <iostream>
using namespace std;
	
	
class Author {
private:
	int Bookid,no_published_book,soldBooks;
	string bookname;
	
	public:
		Author(){
			this->Bookid=1;
			this->no_published_book=5;
			this->soldBooks=2;
			this->bookname="ABC";
		}
		
		Author(int Bookid,int no_published_book,int soldBooks,
	string bookname){
			this->Bookid=Bookid;
			this->no_published_book=no_published_book;
			this->soldBooks=soldBooks;
			this->bookname=bookname;
		}
	void availableCopies(){
			int available = no_published_book- soldBooks;
			cout<<"available books:";
			cout<<available;
		}
};
