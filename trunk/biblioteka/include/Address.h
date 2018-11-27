#include <string>
using namespace std;
class Address{
private:
    string street;
    string number;
public:
    //Address(string,string);
    string getStreet();
    string getNumber();
    void setStreet(string);
    void setNumber(string);
};
