#ifndef Project_businessobject_Department_h_
#define Project_businessobject_Department_h_
#include<string>
#include"BaseObject.h"
#include "../libs/json.hpp"
using json = nlohmann::json;

using namespace std;
class Department:public BaseObject{
    private:
        int Id;
        string DName;
        int DNumber;
        long MgrSSN;
        string MgrStartDate;
    public:
        /**@brief Function is default constructor
         * 
         * Function is default constructor
         * @return Not return
        */
        Department();
        /**@brief Function is default constructor
         * 
         * Function is default constructor with parameter
         * @return Not return
        */
        Department(string DName, int DNumber, long MgrSSN, string MgrStartDate);
        /**@brief Function is default constructor
         * 
         * Function is default constructor with parameter
         * @return Not return
        */
        Department(int Id, string DName, int DNumber, long MgrSSN, string MgrStartDate);
        /**@brief Function set the value for Id
         * 
         * Function set the value for Id
         * @return Not return
        */
        void SetId(int Id);
        /**@brief Function get value of Id
         * 
         * Function get value of Id
         * @return return Id
        */
        int GetId();
        /**@brief Function set the value id decreases by 1
         * 
         * Function set the value id decreases by 1
         * @return Not return
        */
        void SetSubId();
        /**@brief Function get value of MgrSSN
         * 
         * Function get value of MgrSSN
         * @return return MgrSSN
        */
        long GetMgrSSN();
        /**@brief Function get value of Dname
         * 
         * Function get value of Dname
         * @return return Dname
        */
        string GetDName();

        /**@brief Function convert parameter in class to string
         * 
         * Function convert parameter in class to string
         * @return return a string of information in the class
        */
        string ConvertToString();
        
        /**@brief Function convert parameter in class to format Json
         * 
         * Function convert parameter in class to format Json
         * @return return a Format json of information in the class
        */
        json ToJson();
        
};

#endif