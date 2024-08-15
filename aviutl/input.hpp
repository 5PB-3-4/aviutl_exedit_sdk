#pragma once

#include "InputPlugin.hpp"

namespace AviUtl{
    using GetInputPluginTable_t = InputPluginDLL*(__stdcall*)();
    constexpr char GetInputPluginTableName[] = "GetInputPluginTable";
}
