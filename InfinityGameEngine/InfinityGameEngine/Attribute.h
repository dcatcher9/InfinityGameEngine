#pragma once

#include <string>

namespace InfinityGameEngine
{
    // We need to support adding new attribute via config instead of code change.
    // This flexibility is critical for the extensibility of the engine.
    // However, we'll have to sacrifice performance or memory for it.
    
    // represent static info for ordered atrribute
    class AttributeSchema
    {
    private:
        std::string name_;
        double min_value_;
        double max_value_;
    };
}