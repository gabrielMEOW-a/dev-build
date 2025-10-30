#include "main.h"

void setIntakeF(int input) {
    intakeF.move(input);
}

void setIntakeM(int input) {
    intakeM.move(input);
}

void setIntakeU(int input) {
    intakeU.move(input);
}

void intakeOpControl() {
    if (master.get_digital(DIGITAL_L1)) {
        setIntakeF(127);
        setIntakeM(127);
    } else if (master.get_digital(DIGITAL_L2)) {
        setIntakeF(-127);
        setIntakeM(-127);
    } else if (master.get_digital(DIGITAL_R1)) {
        setIntakeF(127);
        setIntakeM(-127);
    } else if (master.get_digital(DIGITAL_R2)) {
        setIntakeF(127);
        setIntakeM(127);
        setIntakeU(-127);
    } else {
        setIntakeF(0);
        setIntakeM(0);
        setIntakeU(0);
    }
}