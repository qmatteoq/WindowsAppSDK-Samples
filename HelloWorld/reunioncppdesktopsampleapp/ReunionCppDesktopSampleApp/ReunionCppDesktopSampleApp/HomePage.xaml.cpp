#include "pch.h"
#include "HomePage.xaml.h"
#if __has_include("HomePage.g.cpp")
#include "HomePage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    HomePage::HomePage()
    {
        InitializeComponent();
    }

    int32_t HomePage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void HomePage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    //void HomePage::CallAPIButton_Click(IInspectable const&, RoutedEventArgs const&)
    //{
    //    winrt::hstring resultMessage = L"API call succeeded.";
    //    try
    //    {
    //        // The purpose of this simple sample is to show the setup for injesting the Project Reunion
    //        // Nuget. At the moment there is are not very many APIs exposed through Project Reunion.
    //        // The follow line is just calling an arbitrary method on an activatable class that is
    //        // included in Project Reunion as validation/demonstration of things working ened to end.
    //        auto activationArgs = winrt::Microsoft::ProjectReunion::AppLifecycle::GetActivatedEventArgs();
    //    }
    //    catch (winrt::hresult_error const& ex)
    //    {
    //        resultMessage = L"API call failed with error: " + ex.message();
    //    }

    //    resultText().Text(resultMessage);
    //}
}
