// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::impl::make_constexpr_string(CPPWINRT_VERSION) == "1.0.171013.2", "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Internal.ApplicationModel.ApplicationSets.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationInstance<D>::InstanceId() const noexcept
{
    hstring returnValue{};
    check_terminate(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance)->get_InstanceId(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationInstance<D>::ActivationUri() const noexcept
{
    Windows::Foundation::Uri returnValue{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance)->get_ActivationUri(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::ApplicationModel::UserActivities::UserActivity consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationInstancePrivate<D>::GetBackingUserActivity() const
{
    Windows::ApplicationModel::UserActivities::UserActivity returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate)->GetBackingUserActivity(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::SetId() const noexcept
{
    hstring returnValue{};
    check_terminate(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->get_SetId(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::DisplayText() const noexcept
{
    hstring returnValue{};
    check_terminate(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->get_DisplayText(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::DisplayText(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->put_DisplayText(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance> consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::ApplicationInstances() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance> returnValue{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->get_ApplicationInstances(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::GetApplicationInstanceIds(Windows::Foundation::Collections::IVectorView<GUID>& instanceIds) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->GetApplicationInstanceIds(put_abi(instanceIds), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::AddApplicationInstanceFromUserActivity(Windows::ApplicationModel::UserActivities::UserActivity const& activity) const
{
    Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->AddApplicationInstanceFromUserActivity(get_abi(activity), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::AddApplicationInstanceFromUserActivity(GUID const& instanceId) const
{
    Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->AddApplicationInstanceFromUserActivityById(get_abi(instanceId), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->SaveAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserActivities::UserActivity> consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::GetOrCreateTimelineActivityForSetAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserActivities::UserActivity> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->GetOrCreateTimelineActivityForSetAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSet<D>::Activate() const
{
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet)->Activate());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSetStatics<D>::CreateApplicationSetAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics)->CreateApplicationSetAsync(get_abi(id), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSetStatics<D>::GetApplicationSetAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics)->GetApplicationSetAsync(get_abi(id), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Internal_ApplicationModel_ApplicationSets_IApplicationSetStatics<D>::DeleteApplicationSetAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics)->DeleteApplicationSetAsync(get_abi(id), put_abi(returnValue)));
    return returnValue;
}

template <typename D>
struct produce<D, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance> : produce_base<D, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance>
{
    HRESULT __stdcall get_InstanceId(HSTRING* returnValue) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *returnValue = detach_abi(this->shim().InstanceId());
        return S_OK;
    }

    HRESULT __stdcall get_ActivationUri(::IUnknown** returnValue) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *returnValue = detach_abi(this->shim().ActivationUri());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate> : produce_base<D, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate>
{
    HRESULT __stdcall GetBackingUserActivity(::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetBackingUserActivity());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet> : produce_base<D, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet>
{
    HRESULT __stdcall get_SetId(HSTRING* returnValue) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *returnValue = detach_abi(this->shim().SetId());
        return S_OK;
    }

    HRESULT __stdcall get_DisplayText(HSTRING* returnValue) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *returnValue = detach_abi(this->shim().DisplayText());
        return S_OK;
    }

    HRESULT __stdcall put_DisplayText(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().DisplayText(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ApplicationInstances(::IUnknown** returnValue) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *returnValue = detach_abi(this->shim().ApplicationInstances());
        return S_OK;
    }

    HRESULT __stdcall GetApplicationInstanceIds(::IUnknown** instanceIds, HSTRING* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetApplicationInstanceIds(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<GUID>*>(instanceIds)));
            return S_OK;
        }
        catch (...)
        {
            *instanceIds = nullptr;
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddApplicationInstanceFromUserActivity(::IUnknown* activity, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().AddApplicationInstanceFromUserActivity(*reinterpret_cast<Windows::ApplicationModel::UserActivities::UserActivity const*>(&activity)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddApplicationInstanceFromUserActivityById(GUID instanceId, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().AddApplicationInstanceFromUserActivity(*reinterpret_cast<GUID const*>(&instanceId)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetOrCreateTimelineActivityForSetAsync(::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetOrCreateTimelineActivityForSetAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Activate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics> : produce_base<D, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics>
{
    HRESULT __stdcall CreateApplicationSetAsync(HSTRING id, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateApplicationSetAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetApplicationSetAsync(HSTRING id, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetApplicationSetAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteApplicationSetAsync(HSTRING id, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().DeleteApplicationSetAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Internal::ApplicationModel::ApplicationSets {

inline Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> ApplicationSet::CreateApplicationSetAsync(param::hstring const& id)
{
    return get_activation_factory<ApplicationSet, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics>().CreateApplicationSetAsync(id);
}

inline Windows::Foundation::IAsyncOperation<Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> ApplicationSet::GetApplicationSetAsync(param::hstring const& id)
{
    return get_activation_factory<ApplicationSet, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics>().GetApplicationSetAsync(id);
}

inline Windows::Foundation::IAsyncAction ApplicationSet::DeleteApplicationSetAsync(param::hstring const& id)
{
    return get_activation_factory<ApplicationSet, Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics>().DeleteApplicationSetAsync(id);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstance> {};

template<> struct hash<winrt::Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Internal::ApplicationModel::ApplicationSets::IApplicationInstancePrivate> {};

template<> struct hash<winrt::Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSet> {};

template<> struct hash<winrt::Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Internal::ApplicationModel::ApplicationSets::IApplicationSetStatics> {};

template<> struct hash<winrt::Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Internal::ApplicationModel::ApplicationSets::ApplicationInstance> {};

template<> struct hash<winrt::Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Internal::ApplicationModel::ApplicationSets::ApplicationSet> {};

}

WINRT_WARNING_POP
