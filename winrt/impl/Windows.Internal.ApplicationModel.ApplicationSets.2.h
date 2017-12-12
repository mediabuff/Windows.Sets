// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.UserActivities.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Internal.ApplicationModel.ApplicationSets.1.h"

WINRT_EXPORT namespace winrt::Windows::Internal::ApplicationModel::ApplicationSets {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Internal::ApplicationModel::ApplicationSets {

struct WINRT_EBO ApplicationInstance :
    Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance,
    impl::require<ApplicationInstance, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate>
{
    ApplicationInstance(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ApplicationSet :
    Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet
{
    ApplicationSet(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> CreateApplicationSetAsync(param::hstring const& id);
    static Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> GetApplicationSetAsync(param::hstring const& id);
    static Windows::Foundation::IAsyncAction DeleteApplicationSetAsync(param::hstring const& id);
};

}
