#ifndef _businessobject_Project_h
#define _businessobject_Project_h

#include <string>
#include "../libs/json.hpp"
#include "BaseObject.h"

using namespace std;
using json = nlohmann::json;

class Project:public BaseObject
{
private:
    int Id;    // Project ID
    string PName; // Project Name
    int PNumber;      // Project Number
    string PLocation; // Project Location
    int DNum;         // Department Number

public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    Project();

    /** @brief Function is constructor with parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    Project(int id,string PName, int PNum, string PLoca, int Dnum);

    /** @brief Function is default constructor with parameters
     *  
     *  Function is default constructor with parameters
     *  @return not return
     */
    Project(string PName, int PNum, string PLoca, int Dnum);
    /** @brief Function is default deconstructor
     *  
     *  Function is default deconstructor
     *  @return not return
     */
    ~Project();

    /** @brief Function get the value of project id
     *  
     *  Function get the value of project id
     *  @return returns the value of project id that data type is int
     */
    int GetId();

    /** @brief Function set the value for project id
     *  
     *  Function set the value for project id
     *  @return not return
     */
    void SetId(int id);

    /** @brief Function set the value id decreases by 1
     *  
     *  Function set the value id decreases by 1
     *  @return not return
     */
    void SetSubId();

    /** @brief Function get the value of  project number
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    int GetPNumber();

    /** @brief Function set the value of  project Name
     *  
     *  Function set the value of  project Name
     *  @return Not returns 
     */
    void SetPName(string PName);

    /** @brief Function get the value of  project number
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    string GetPName();

    /** @brief Function set the value for project number
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetPNumber(int PNum);

    /** @brief Function get the value of project location
     *  
     *  Function get the value of project location
     *  @return returns the value of project location that data type is string
     */
    string GetPLocation();

    /** @brief Function set the value for project location
     *  
     *  Function set the value for project location
     *  @return not return
     */
    void SetPLocation(string DLoca);

    /** @brief Function get the value of Department number
     *  
     *  Function get the value of Department number
     *  @return returns the value of Department number that data type is int
     */
    int GetDNum();

    /** @brief Function set the value for Department number
     *  
     *  Function set the value for Department number
     *  @return not return
     */
    void SetDNum(int Dnum);

    /**@brief Function convert parameter in class to string
     * 
     * Function convert parameter in class to string
     * @return return a string of information in the class
    */
    string ConvertToString();

    /** @brief Function convert the project object to json
     *  
     *  Function convert the project object to json
     *  @return a json of project
     */
    json ToJson();
};

#endif