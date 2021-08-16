#include<iostream>
using namespace std;
class Student {
    public :
    string name;
    int RollNo;

    private :
    int RegestrationNo;
    string CloseFriendName;

    public:
    int getRegestrationNo(){
        return RegestrationNo;
    }

    void setRegestrationNo(int a, string password){
        if(password == "TMKOC"){
            RegestrationNo = a;
        }
    }

    void setCloseFriendName(string a, int password){
        if(password == 1234){
            CloseFriendName = a;
        }
    }

    string getCloseFriendName(){
        return CloseFriendName;
    }
};