#include "pch.h"
#include "TestStep.xaml.h"
#if __has_include("TestStep.g.cpp")
#include "TestStep.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    TestStep::TestStep()
    {
        InitializeComponent();
    }

    int32_t TestStep::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void TestStep::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
