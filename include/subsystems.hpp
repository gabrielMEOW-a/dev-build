#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline ez::Piston upper('A');
inline ez::Piston unloader('B');

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');