#include <roapi.h>
#include <winrt\base.h>
#include "winrt\Windows.Internal.ApplicationModel.ApplicationSets.h"

#pragma comment(lib, "windowsapp")

using namespace winrt;
namespace wf = winrt::Windows::Foundation;
namespace sets = winrt::Windows::Internal::ApplicationModel::ApplicationSets;

int wWinMain(HINSTANCE, HINSTANCE, LPWSTR, int)
{
    try {
        init_apartment();
        auto factory = get_activation_factory<sets::ApplicationSet, sets::IApplicationSetStatics>();
        auto set = factory.CreateApplicationSetAsync(L"TestSet-980f4bf6-589a-419e-84a0-3a3a06bb5726").get();
    }
    catch (winrt::hresult_error const& hr) {
    }
    catch (...) {
    }
    return 0;
}
