#ifndef _data_BorrowReturn_h_
#define _data_BorrowReturn_h_
#include <string>
using namespace std;
class BorrowReturn
{
private:
    int Id;
    int MemberId;
    int BookId;
    int Status;
    string Date;

public:
    BorrowReturn(/* args */);
    BorrowReturn(int, int, int, string, int);
    BorrowReturn(int, int, string, int);

    /** @brief Set value for 
     *  @return Not Return
    */

    
    /** @brief Set value for Id 
     *  @return Not Return Id
    */
    void SetId(int);
    
    /** @brief Set value for MemberId 
     *  @return Not Return MemberId
    */
    void SetMemberId(int);
    
    /** @brief Set value for BookId 
     *  @return Not Return BookId
    */
    void SetBookId(int);
    
    /** @brief Set value for Date 
     *  @return Not Return Date
    */
    void SetDate(string);
    
    /** @brief Set value for Status 
     *  @return Not Return Status
    */
    void SetStatus(int);

    /** @brief Get value for 
     *  @returnReturn Status
    */
    
    /** @brief Get value for 
     *  @returnReturn Status Id
    */        
    int GetId();
    
    /** @brief Get value for 
     *  @returnReturn Status MemberId
    */        
    int GetMemberId();
    
    /** @brief Get value for 
     *  @returnReturn Status BookId
    */        
    int GetBookId();
    
    /** @brief Get value for 
     *  @returnReturn Status Date
    */        
    string GetDate();
    
    /** @brief Get value for 
     *  @returnReturn Status Status
    */        
    int GetStatus();
    string ConvertToString();
    ~BorrowReturn();
};

#endif