#pragma once

#include "Config.g.h"

namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    struct Config : ConfigT<Config>
    {
        Config();

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::ReunionCppDesktopSampleApp::factory_implementation
{
    struct Config : ConfigT<Config, implementation::Config>
    {
    };
}
