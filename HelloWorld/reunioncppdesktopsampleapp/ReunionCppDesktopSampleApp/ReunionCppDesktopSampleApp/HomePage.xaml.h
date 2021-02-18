// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "HomePage.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    struct HomePage : HomePageT<HomePage>
    {
        HomePage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

    };
}

namespace winrt::ReunionCppDesktopSampleApp::factory_implementation
{
    struct HomePage : HomePageT<HomePage, implementation::HomePage>
    {
    };
}
