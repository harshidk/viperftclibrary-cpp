#pragma once

#include <com/qualcomm/robotcore/eventloop/opmode/Disabled>
#include <com/qualcomm/robotcore/eventloop/opmode/LinearOpMode>
#include <com/qualcomm/robotcore/hardware/DcMotor>

namespace viper {

class DcMotor
{
public:
    DcMotor(std::string map = "", viper::NeutralMode mode, viper::Direction direction);

};
}

