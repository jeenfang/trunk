#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Action`1<YooAsset.AssetOperationHandle>
struct Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16;
// YooAsset.AssetInfo
struct AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456;
// YooAsset.AssetOperationHandle
struct AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B;
// YooAsset.ProviderBase
struct ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t147E3B86B76DFFDC360392348C1E7DBB382BD13F 
{
};
struct Il2CppArrayBounds;

// AssetOperationHandleExtension
struct AssetOperationHandleExtension_t87F6DD9549E1F3B4819860277B23E5831B4EC9DB  : public RuntimeObject
{
};

// YooAsset.OperationHandleBase
struct OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C  : public RuntimeObject
{
	// YooAsset.AssetInfo YooAsset.OperationHandleBase::_assetInfo
	AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ____assetInfo_0;
	// YooAsset.ProviderBase YooAsset.OperationHandleBase::<Provider>k__BackingField
	ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758* ___U3CProviderU3Ek__BackingField_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// YooAsset.AssetOperationHandle
struct AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B  : public OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C
{
	// System.Action`1<YooAsset.AssetOperationHandle> YooAsset.AssetOperationHandle::_callback
	Action_1_tA4487CA045A510BFEB17FAA8D633B6008AFD0F16* ____callback_2;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void YooAsset.AssetOperationHandle::WaitForAsyncComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetOperationHandle_WaitForAsyncComplete_m9ADA7E6CD198C0B67B19347168FC1DE0DBD186ED (AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// YooAsset.AssetOperationHandle AssetOperationHandleExtension::WaitForAsyncOperationComplete(YooAsset.AssetOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* AssetOperationHandleExtension_WaitForAsyncOperationComplete_m2ACF4FA3181C43DFAA14AB69EFF0164956DBCC14 (AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* ___thisHandle0, const RuntimeMethod* method) 
{
	{
		// thisHandle.WaitForAsyncComplete();
		AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* L_0 = ___thisHandle0;
		NullCheck(L_0);
		AssetOperationHandle_WaitForAsyncComplete_m9ADA7E6CD198C0B67B19347168FC1DE0DBD186ED(L_0, NULL);
		// return thisHandle;
		AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* L_1 = ___thisHandle0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
