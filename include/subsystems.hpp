#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(10);
inline pros::Motor lift(7);


inline ez::Piston pod('D');
inline ez::Piston pto('E');
inline ez::Piston loader('F');