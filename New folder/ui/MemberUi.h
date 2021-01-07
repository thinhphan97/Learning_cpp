#ifndef _ui_MemberUi_h_
#define _ui_MemberUi_h_
#include "../access/MemberAccess.h"
#include <string>
using namespace std;
class MemberUi
{
private:
    string file_name;
public:
    MemberUi(string file_name);
    void MemberAdd();
    void MemberEdit();
    void MemberRead();
};

#endif