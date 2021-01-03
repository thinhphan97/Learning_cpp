#ifndef Project_businessobject_DeptLocation_h
#define Project_businessobject_DeptLocation_h
#include "BaseObject.h"
#include <string>
#include "../libs/json.hpp"

using namespace std;
using json = nlohmann::json;

class DeptLocation:public BaseObject
{
private:
    int Id;             // DeptLocation ID
    int DNumber;        // DeptLocation Number
    string DLocation;   // DeptLocation Location

public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    DeptLocation();

    /** @brief Function is constructor with parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    DeptLocation(int id, int DNum, string DLoca);
  
    /** @brief Function is constructor with parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    DeptLocation(int DNum, string DLoca);

    /** @brief Function is default deconstructor
     *  
     *  Function is default deconstructor
     *  @return not return
     */
    ~DeptLocation();

    /** @brief Function get the value of dept location id
     *  
     *  Function get the value of dept location id
     *  @return returns the value of dept location id that data type is int
     */
    int GetId();

    /** @brief Function set the value for dept location id
     *  
     *  Function set the value for dept location id
     *  @return not return
     */
    void SetId(int id);

    /** @brief Function set the value id decreases by 1
     * 
     *  Function set the value id decreases by 1
     *  @return Not return
    */
    void SetSubId();

    /** @brief Function get the value of dept location number
     *  
     *  Function get the value of dept location number
     *  @return returns the value of dept location number that data type is int
     */
    int GetDNumber();

    /** @brief Function set the value for dept location number
     *  
     *  Function set the value for dept location id
     *  @return not return
     */
    void SetDNumber(int DNum);

    /** @brief Function get the value of dept location
     *  
     *  Function get the value of dept location
     *  @return returns the value of dept location that data type is string
     */
    string GetDLocation();

    /** @brief Function set the value for dept location
     *  
     *  Function set the value for dept location
     *  @return not return
     */
    void SetDLocation(string DLoca);

    /** @brief Function convert parameter in class to string
     * 
     *  Function convert parameter in class to string
     *  @return return a string of information in the class
    */
    string ConvertToString();

    /** @brief Function convert the dept location object to json
     *  
     *  Function convert the dept location object to json
     *  @return a json of dept location
     */
    json ToJson();
};

#endif