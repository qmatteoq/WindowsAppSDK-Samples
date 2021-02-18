#pragma once

#include "TestStep.g.h"

namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    struct TestStep : TestStepT<TestStep>
    {
        TestStep();

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::ReunionCppDesktopSampleApp::factory_implementation
{
    struct TestStep : TestStepT<TestStep, implementation::TestStep>
    {
    };
}
