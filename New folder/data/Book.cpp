#include "Book.h"
#include "../libs/Function.h"
Book::Book(/* args */){

}
Book::Book(int Id, int BookId, string Name, int Price){
    this->Id = Id;
    this->BookId =BookId;
    this->Name = Name;
    this->Price = Price;
}
Book::Book(int BookId, string Name, int Price){
    this->BookId =BookId;
    this->Name = Name;
    this->Price = Price;
}
void Book::SetId(int Id){
    this->Id = Id;
}
void Book::SetBookId(int BookId){
    this->BookId =BookId;
}
void Book::SetName(string Name){
    this->Name = Name;
}
void Book::SetPrice(int Price){
    this->Price = Price;
}
int Book::GetId(){
    return Id;
}
int Book::GetBookId(){
    return BookId;
}
string Book::GetName(){
    return Name;
}
int Book::GetPrice(){
    return Price;
}
string Book::ConvertToString(){
    return to_string(Id)+" "+to_string(BookId)+" "+Function::ReplaceAll(Name,' ','_')+" "+to_string(Price)+ "\n";
}
Book::~Book(){
    
}