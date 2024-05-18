#ifndef TELEVISION_H
#define TELEVISION_H
include<string>
using namespace std;

class Television {
public:
    Television();
    Television(string type, double size);
    Television(string type, double size, string* connect);
    Television(const Television&object);
    void setdisplayType(string type) { displayType = type; }
    void setdimension(double size) { dimension = size; }
    void setconnect(string* list);
    void setnumMode(int numMode) { this->numMode = numMode; }
    string getdisplayType()const { return displayType; }
    double getdimension()const { return dimension;}
    string getconnect()const { return *connectivitySupport; }
    void output()const;
    Television& operator=(const Television& object);
    ~Television();
private:
    string displayType;
    double dimension = 0;
    string* connectivitySupport = nullptr;
    int numMode = 0;
};
#endif // TELEVISION_H
