#pragma once

#include "TestBox.g.h"
namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    struct TestBox : TestBoxT<TestBox>
    {
        TestBox();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void RunTest(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::ReunionCppDesktopSampleApp::factory_implementation
{
    struct TestBox : TestBoxT<TestBox, implementation::TestBox>
    {
    };
}
