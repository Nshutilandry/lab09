#pragma once
#include <string>

struct Pilot {
    std::string name;
    int skill;
    int fatigue{0};
    int missions{0};

    // Member function declarations
    void rest();
    bool fly_mission();
    void print() const; // print_pilot becomes print() const
};