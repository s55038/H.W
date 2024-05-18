#include "Subscriber.h"
#include <iostream>
#include <string>

// Default constructor
Subscriber::Subscriber() : name(""), numChannels(0), channelList(nullptr) {}

// Parameterized constructor
Subscriber::Subscriber(const std::string& name, int numChannels, const std::string* channelList)
    : name(name), numChannels(numChannels), channelList(new std::string[numChannels])
{
    for (int i = 0; i < numChannels; ++i) {
        this->channelList[i] = channelList[i];
    }
}

// Copy constructor
Subscriber::Subscriber(const Subscriber& other)
    : name(other.name), numChannels(other.numChannels), channelList(new std::string[other.numChannels])
{
    for (int i = 0; i < other.numChannels; ++i) {
        channelList[i] = other.channelList[i];
    }
}

// Destructor
Subscriber::~Subscriber() {
    delete[] channelList;
}

// Mutators
void Subscriber::setName(const std::string& name) {
    this->name = name;
}

void Subscriber::setNumChannels(int numChannels) {
    delete[] channelList;
    this->numChannels = numChannels;
    this->channelList = new std::string[numChannels];
}

void Subscriber::setChannelList(const std::string* channelList, int numChannels) {
    delete[] this->channelList;
    this->numChannels = numChannels;
    this->channelList = new std::string[numChannels];
    for (int i = 0; i < numChannels; ++i) {
        this->channelList[i] = channelList[i];
    }
}

// Accessors
std::string Subscriber::getName() const {
    return name;
}

int Subscriber::getNumChannels() const {
    return numChannels;
}

std::string* Subscriber::getChannelList() const {
    return channelList;
}

// Other member functions
void Subscriber::inputValues() {
    std::cout << "Enter subscriber name: ";
    std::getline(std::cin, name);

    std::cout << "Enter number of channels: ";
    std::cin >> numChannels;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer

    delete[] channelList;
    channelList = new std::string[numChannels];

    for (int i = 0; i < numChannels; ++i) {
        std::cout << "Enter name of channel " << i + 1 << ": ";
        std::getline(std::cin, channelList[i]);
    }
}

void Subscriber::outputValues() const {
    std::cout << "Subscriber Name: " << name << std::endl;
    std::cout << "Subscribed Channels: " << std::endl;
    for (int i = 0; i < numChannels; ++i) {
        std::cout << "  - " << channelList[i] << std::endl;
    }
}

void Subscriber::reset() {
    numChannels = 0;
    delete[] channelList;
    channelList = nullptr;
}

// Overloaded assignment operator
Subscriber& Subscriber::operator=(const Subscriber& other) {
    if (this != &other) {
        name = other.name;
        numChannels = other.numChannels;

        delete[] channelList;
        channelList = new std::string[numChannels];
        for (int i = 0; i < numChannels; ++i) {
            channelList[i] = other.channelList[i];
        }
    }
    return *this;
}
