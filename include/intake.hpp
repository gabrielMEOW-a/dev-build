#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

inline pros::Motor intakeF(17, pros::v5::MotorGear::blue);
inline pros::Motor intakeU(-16, pros::v5::MotorGear::blue);

void setintakeF(int input);
void setintakeU(int input);
void intakeOpControl();