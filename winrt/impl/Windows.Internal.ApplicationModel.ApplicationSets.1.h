// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.UserActivities.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Internal.ApplicationModel.ApplicationSets.0.h"

WINRT_EXPORT namespace winrt::Windows::Internal::ApplicationModel::ApplicationSets {

struct WINRT_EBO IApplicationInstance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationInstance>
{
    IApplicationInstance(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationInstancePrivate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationInstancePrivate>
{
    IApplicationInstancePrivate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationSet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationSet>
{
    IApplicationSet(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationSetStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationSetStatics>
{
    IApplicationSetStatics(std::nullptr_t = nullptr) noexcept {}
};

}
