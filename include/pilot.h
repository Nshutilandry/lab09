#pragma once
#include <string>

class Pilot {
private:
    std::string name_;
    int skill_;
    int fatigue_;
    int missions_;

public:
    // Constructor
    Pilot(std::string name, int skill);

    // Member functions
    void rest();
    bool fly_mission();
    void print() const;

    // Const Getters
    std::string name() const;
    int skill() const;
    int fatigue() const;
    int missions() const;
};