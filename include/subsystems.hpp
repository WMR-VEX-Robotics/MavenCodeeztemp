#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(10);
inline pros::Motor lift(7);


inline pros::adi::Pneumatics odom('D', true);
inline pros::adi::Pneumatics pto('E', false);
inline pros::adi::Pneumatics pusher('F', false);