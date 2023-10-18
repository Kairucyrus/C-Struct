#include <iostream>
#include <string>

using namespace std;

struct Book
    {
        int pages;
        float price;
        std::string title;
        std::string author;

    } library; //  object of struct book
    
int main(){
	//struct Book b1 = {290, 289.64, "A million lobsters", "Mike Milenial"};  -> allowed
	// struct members are not initialized on declaration but it is correct in C++ 11 and above
	//example; struct Point{
	//                     int x=0;
	//                     int y=0;
	//                     };  -> only correct in C++ 11 and above
	Book b1;
	std::cout<<"Enter book name: ";
	std::string title;
	std::getline(std::cin, title);
	std::cout<<"\nEnter author name: ";
	std::string author;
	std::getline(std::cin, author);
	cout<<"\nEnter number of pages: ";
	cin>>b1.pages;
	cout<<"\nEnter book price: ";
	cin>>b1.price;
	cout<<"\n";
	//Note the use of the std namespace for the I/O operations
	
	
	
	
	cout<<"Author :"<< author<<endl;
	cout<<"Pages: "<< b1.pages<<endl;
	cout<<"Price: "<< b1.price<<endl;
	cout<<"Title: "<< title<<endl;
	
	
}
