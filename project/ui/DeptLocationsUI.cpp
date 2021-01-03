#include "DeptLocationsUI.h"

void DeptLocationsUI::EnterDeptLocation()
{
    int DeptLocationsID;
    int DNumber;
    string DLocation;

    char enter('n');
    do
    {
        cout << "Enter DeptLocation infor: ";
        cout << "Enter DeptLocation ID: ";
        cin >> DeptLocationsID;

        cout << "Enter DeptLocation DNumber: ";
        cin >> DNumber;

        cout << "Enter DeptLocation DLocation: ";
        cin >> DLocation;

        DeptLocations deptLocations(DeptLocationsID, DNumber, DLocation);

        deptLocationsDB.AddDeptLocation(deptLocations);
        cout << "Continute ? (y/n) ";
        cin >> enter;
    } while (enter == 'y');

    deptLocationsDB.ExportToFile("DeptLocation.data");
}

void DeptLocationsUI::SelectAllDeptLocation()
{
    vector<DeptLocations> data = deptLocationsDB.GetData();
    if (data.empty())
    {
        cout << "data is empty";
    }
    int i = 1;
    for (DeptLocations d : data)
    {
        cout << left << i;
        cout << d.GetDNumber();
        cout << right << d.GetDLocation() << endl;
        i++;
    }
}

void DeptLocationsUI::DeleteDeptLocation()
{

    int DeptLocationID;
    char choose;
    cout << "please enter Dept Location ID";
    cin >> DeptLocationID;

    deptLocationsDB.DeleteDeptLocation(DeptLocationID);
    deptLocationsDB.ExportToFile("DeptLocation.data");
    cout << "deleted";

    // cout << "DELETE  " << DeptLocationID << endl;
    // cout << "y/n" << endl;
    // cin >> choose;

    // if(choose == 'y'){
    //     deptLocationsDB.DeleteDeptLocation(DeptLocationID);
    //     cout << "deleted";
    // }
}