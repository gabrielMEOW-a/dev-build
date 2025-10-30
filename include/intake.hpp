#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

inline pros::Motor intakeF(-20, pros::v5::MotorGear::blue);
inline pros::Motor intakeM(-10);
inline pros::Motor intakeU(9);

void set_intakeF(int input);
void set_intakeM(int input);
void set_intakeU(int input);
void intakeOpControl();