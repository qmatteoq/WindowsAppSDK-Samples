#pragma once

#include "AppPayload.g.h"

namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    struct AppPayload : AppPayloadT<AppPayload>
    {
        AppPayload();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::ReunionCppDesktopSampleApp::factory_implementation
{
    struct AppPayload : AppPayloadT<AppPayload, implementation::AppPayload>
    {
    };
}
