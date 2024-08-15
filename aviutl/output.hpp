#pragma once

#include "OutputInfo.hpp"
#include "OutputPlugin.hpp"

namespace AviUtl{
    using GetOutputPluginTable_t = OutputPluginDLL*(__stdcall*)();
    constexpr char GetOutputPluginTableName[] = "GetOutputPluginTable";
}
