#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(5);
inline ez::Piston clawPiston('A');
inline pros::Motor liftMotor(6);
//inline pros::Motor intake(0);
// inline pros::adi::DigitalIn limit_switch('A');


// example of making a motor group with 2 motors using an intake with 2 motors as an example
//inline pros::MotorGroup intake_motors({1, -2});

// example for doing custom pid's using ez template for other things like lifts for example

inline ez::PID liftPID({0.045, 0, 0, 0, "Lift "});
// the numbers are P, I, D, and then the starting I value 