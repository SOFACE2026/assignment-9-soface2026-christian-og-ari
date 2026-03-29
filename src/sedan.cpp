#include "sedan.hpp"
#include <array>

static const std::array<double, 7> gear_ratios = {-1, 1, 2, 3, 4, 5, 6};

// starter i index 0, da gear_ratios[0] = -1, hvilket er bakgear
Sedan::Sedan() : current_gear(0)
{
}

void Sedan::shift_up()
{
    // skifter gear til et højere gear hvis den ikke er max gear (6)
    if (current_gear < 6)
    {
        current_gear++;
    }
}

void Sedan::shift_down()
{
    // skifter gear til et lavere gear hvis den ikke er 0
    if (current_gear > 0)
    {
        current_gear--;
    }
}

double Sedan::get_torque(double engine_rpm, double throttle)
{
    // test model med 100Nm * throttle
    return 100 * throttle;
}

double Sedan::get_weight()
{
    // test model med 2000 (den som var fra eksempel i opgaven)
    return 2000;
}

double Sedan::get_wheel_radius()
{
    // test model med 0.3 (den som var fra eksempel i opgaven)
    return 0.3;
}

double Sedan::get_current_gear_ratio()
{
    return gear_ratios[current_gear];
}