// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities {

struct UserActivity;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Internal::ApplicationModel::ApplicationSets {

struct IApplicationInstance;
struct IApplicationInstancePrivate;
struct IApplicationSet;
struct IApplicationSetStatics;
struct ApplicationInstance;
struct ApplicationSet;

}

namespace winrt::impl {

template <> struct category<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance>{ using type = interface_category; };
template <> struct category<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate>{ using type = interface_category; };
template <> struct category<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet>{ using type = interface_category; };
template <> struct category<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics>{ using type = interface_category; };
template <> struct category<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance>{ using type = class_category; };
template <> struct category<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet>{ using type = class_category; };
template <> struct name<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance>{ static constexpr auto & value{ L"Windows.Internal.ApplicationModel.ApplicationSets.IApplicationInstance" }; };
template <> struct name<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate>{ static constexpr auto & value{ L"Windows.Internal.ApplicationModel.ApplicationSets.IApplicationInstancePrivate" }; };
template <> struct name<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet>{ static constexpr auto & value{ L"Windows.Internal.ApplicationModel.ApplicationSets.IApplicationSet" }; };
template <> struct name<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics>{ static constexpr auto & value{ L"Windows.Internal.ApplicationModel.ApplicationSets.IApplicationSetStatics" }; };
template <> struct name<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance>{ static constexpr auto & value{ L"Windows.Internal.ApplicationModel.ApplicationSets.ApplicationInstance" }; };
template <> struct name<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet>{ static constexpr auto & value{ L"Windows.Internal.ApplicationModel.ApplicationSets.ApplicationSet" }; };
template <> struct guid<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance>{ static constexpr GUID value{ 0xF53F8D78,0xFDA5,0x4449,{ 0x86,0x6A,0x0E,0x3C,0x46,0x91,0x73,0xDA } }; };
template <> struct guid<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate>{ static constexpr GUID value{ 0x0C790758,0x6516,0x46E5,{ 0x82,0x90,0xAE,0xEF,0x85,0xB1,0xA7,0xB9 } }; };
template <> struct guid<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet>{ static constexpr GUID value{ 0xC7D16F29,0xE8AE,0x42E6,{ 0xA9,0x4D,0x8F,0x52,0xCF,0xB4,0xB7,0x12 } }; };
template <> struct guid<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics>{ static constexpr GUID value{ 0xD6530953,0x16EC,0x4C91,{ 0xA3,0xCC,0xB5,0xB9,0x53,0x09,0xE1,0x67 } }; };
template <> struct default_interface<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance>{ using type = Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance; };
template <> struct default_interface<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet>{ using type = Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet; };

template <typename D>
struct consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationInstance
{
    hstring InstanceId() const noexcept;
    Windows::Foundation::Uri ActivationUri() const noexcept;
};
template <> struct consume<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance> { template <typename D> using type = consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationInstance<D>; };

template <typename D>
struct consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationInstancePrivate
{
    Windows::ApplicationModel::UserActivities::UserActivity GetBackingUserActivity() const;
};
template <> struct consume<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate> { template <typename D> using type = consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationInstancePrivate<D>; };

template <typename D>
struct consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet
{
    hstring SetId() const noexcept;
    hstring DisplayText() const noexcept;
    void DisplayText(param::hstring const& value) const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance> ApplicationInstances() const noexcept;
    hstring GetApplicationInstanceIds(Windows::Foundation::Collections::IVectorView<GUID>& instanceIds) const;
    Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance AddApplicationInstanceFromUserActivity(Windows::ApplicationModel::UserActivities::UserActivity const& activity) const;
    Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance AddApplicationInstanceFromUserActivity(GUID const& instanceId) const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserActivities::UserActivity> GetOrCreateTimelineActivityForSetAsync() const;
    void Activate() const;
};
template <> struct consume<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet> { template <typename D> using type = consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>; };

template <typename D>
struct consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSetStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> CreateApplicationSetAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> GetApplicationSetAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncAction DeleteApplicationSetAsync(param::hstring const& id) const;
};
template <> struct consume<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics> { template <typename D> using type = consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSetStatics<D>; };

template <> struct abi<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall get_ActivationUri(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetBackingUserActivity(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SetId(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall get_DisplayText(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall put_DisplayText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ApplicationInstances(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetApplicationInstanceIds(::IUnknown** instanceIds, HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall AddApplicationInstanceFromUserActivity(::IUnknown* activity, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall AddApplicationInstanceFromUserActivityById(GUID instanceId, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetOrCreateTimelineActivityForSetAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall Activate() = 0;
};};

template <> struct abi<Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateApplicationSetAsync(HSTRING id, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetApplicationSetAsync(HSTRING id, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall DeleteApplicationSetAsync(HSTRING id, ::IUnknown** returnValue) = 0;
};};

}
