#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>
#include <iostream>

class Subscriber {
private:
    std::string name;
    int numChannels;
    std::string* channelList;

public:
    // Constructors
    Subscriber();
    Subscriber(const std::string& name, int numChannels, const std::string* channelList);
    Subscriber(const Subscriber& other);

    // Destructor
    ~Subscriber();

    // Mutators
    void setName(const std::string& name);
    void setNumChannels(int numChannels);
    void setChannelList(const std::string* channelList, int numChannels);

    // Accessors
    std::string getName() const;
    int getNumChannels() const;
    std::string* getChannelList() const;

    // Other member functions
    void inputValues();
    void outputValues() const;
    void reset();

    // Overloaded assignment operator
    Subscriber& operator=(const Subscriber& other);
};

#endif // SUBSCRIBER_H
