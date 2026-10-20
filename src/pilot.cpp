#include "pilot.h"
#include <iostream>

Pilot::Pilot(std::string name, int skill)
    : fatigue_(0), missions_(0) {
    if (name.empty()) {
        name_ = "Unnamed";
    } else {
        name_ = name;
    }

    if (skill < 1) {
        skill_ = 1;
    } else if (skill > 100) {
        skill_ = 100;
    } else {
        skill_ = skill;
    }
}

void Pilot::rest() {
    fatigue_ -= 30;
    if (fatigue_ < 0) {
        fatigue_ = 0;
    }
}

bool Pilot::fly_mission() {
    if (fatigue_ > 80) {
        return false;
    }
    fatigue_ += 20;
    missions_ += 1;
    return true;
}

void Pilot::print() const {
    std::cout << name_ << " | skill " << skill_ 
              << " | fatigue " << fatigue_ 
              << " | missions " << missions_ << "\n";
}

bool Pilot::set_name(const std::string& name) {
    if (name.empty()) {
        return false;
    }
    name_ = name;
    return true;
}

void Pilot::change_skill(int change) {
    skill_ += change;
    if (skill_ < 1) {
        skill_ = 1;
    } else if (skill_ > 100) {
        skill_ = 100;
    }
}

// Getters
std::string Pilot::name() const { return name_; }
int Pilot::skill() const { return skill_; }
int Pilot::fatigue() const { return fatigue_; }
int Pilot::missions() const { return missions_; }