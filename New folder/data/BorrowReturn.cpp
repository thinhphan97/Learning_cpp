#include "BorrowReturn.h"

BorrowReturn::BorrowReturn(/* args */){

}
BorrowReturn::BorrowReturn(int Id, int MemberId, int BookId, string Date, int Status){
    this->Id = Id;
    this->MemberId = MemberId;
    this->BookId = BookId;
    this->Date = Date;
    this->Status = Status;
}
BorrowReturn::BorrowReturn(int MemberId, int BookId, string Date, int Status){
    this->MemberId = MemberId;
    this->BookId = BookId;
    this->Date = Date;
    this->Status = Status;
}
void BorrowReturn::SetId(int Id){
    this->Id = Id;
}
void BorrowReturn::SetMemberId(int MemberId){
    this->MemberId = MemberId;
}
void BorrowReturn::SetBookId(int BookId){
    this->BookId = BookId;
}
void BorrowReturn::SetDate(string Date){
    this->Date = Date;
}
void BorrowReturn::SetStatus(int Status){
    this->Status = Status;
}
int BorrowReturn::GetId(){
    return Id;
}
int BorrowReturn::GetMemberId(){
    return MemberId;
}
int BorrowReturn::GetBookId(){
    return BookId;
}
string BorrowReturn::GetDate(){
    return Date;
}
int BorrowReturn::GetStatus(){
    return Status;
}
string BorrowReturn::ConvertToString(){
    return to_string(Id)+" "+to_string(MemberId)+" "+to_string(BookId)+" "+Date+" "+to_string(Status)+"\n";
}
BorrowReturn::~BorrowReturn(){
    
}