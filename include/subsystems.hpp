#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline ez::Piston upper('A');
inline ez::Piston unloader('D');
inline ez::Piston hood('E');
inline ez::Piston eject('B');
inline ez::Piston wing('C');

inline pros::Rotation intake(10);

inline pros::Optical ColorSensor(15);

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');