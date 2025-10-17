#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor intakeF(20);
inline pros::Motor intakeB(10, pros::v5::MotorGear::green);
inline pros::Motor intakeU(9);

inline ez::Piston unloader('A');
inline ez::Piston descore('B');

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');