#include"Television.h"
#include<iostream>
#include<string>
using namespace std;

Television::Television(string type,double size):displayType(type),dimension(size){}
Television::Television(string type, double size, string* connect) :displayType(type), dimension(size), connectivitySupport(nullptr) {
    setconnect(connect);
}

Television::Television(string type, double size, string* connect) : displayType(type), dimension(size), connectivitySupport(nullptr) {
    setconnect(connect);
}

Television::Television(const Television& object) : displayType(object.displayType), dimension(object.dimension), connectivitySupport(nullptr) {
    if (object.connectivitySupport) {
        connectivitySupport = new string[object.numMode];
        for (int i = 0; i < object.numMode; i++) {
            connectivitySupport[i] = object.connectivitySupport[i];
        }
    }
}

void Television::setconnect(string* list) {
    delete[] connectivitySupport;
    connectivitySupport = new string[numMode];

    if (!connectivitySupport) {
        cout << "Insufficient memory." << endl;
        exit(1);
    }

    for (int i = 0; i < numMode; i++) {
        connectivitySupport[i] = list[i];
    }
}

void Television::output() const {
    cout << endl << endl;
    cout << "Display type => " << displayType << endl;
    cout << "Dimension of the television in inches => " << dimension << endl;

    cout << "Connectivity modes => ";
    for (int i = 0; i < numMode; i++) {
        cout << connectivitySupport[i] << " ";
    }
    cout << endl;
}

Television& Television::operator=(const Television& object) {
    if (this != &object) {
        displayType = object.displayType;
        dimension = object.dimension;

        delete[] connectivitySupport;
        connectivitySupport = nullptr;

        if (object.connectivitySupport) {
            connectivitySupport = new string[object.numMode];
            for (int i = 0; i < object.numMode; i++) {
                connectivitySupport[i] = object.connectivitySupport[i];
            }
        }
    }
    return *this;
}

Television::~Television() {
    delete[] connectivitySupport;
}
