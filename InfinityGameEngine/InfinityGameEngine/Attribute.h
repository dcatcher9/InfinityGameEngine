#pragma once

#include <string>

namespace InfinityGameEngine
{
    // represent ordered atrribute
    class Attribute
    {
    private:
        double min_value_;
        double max_value_;
        double cur_value_;
    };
}