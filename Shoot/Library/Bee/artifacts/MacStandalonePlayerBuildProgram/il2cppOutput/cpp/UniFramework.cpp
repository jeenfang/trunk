#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UniFramework.Event.IEventMessage>
struct Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Comparison`1<UniFramework.Singleton.UniSingleton/Wrapper>
struct Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>
struct Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct KeyCollection_t28DBAAA9E79E98C8BC9C16670DF2B1A3CB584CC8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniFramework.Machine.IStateNode>
struct KeyCollection_tE44AABCF0DFC3718615C8CEFA7618F47D7595752;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct KeyCollection_tC8C4ADA5FDBB0915AFDE7C0360E98BDD7CED6764;
// System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C;
// System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76;
// System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>
struct List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C;
// System.Collections.Generic.List`1<UniFramework.Singleton.UniSingleton/Wrapper>
struct List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct ValueCollection_t04C5EE411933B1FDE4B98C159DABB502543D3A39;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniFramework.Machine.IStateNode>
struct ValueCollection_t44B4FD871EC2BC4F09D64DE06D9A27B3334C6D61;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct ValueCollection_t5511B2220412B8F4EFC64786DC11EE3F4A758229;
// System.Action`1<UniFramework.Event.IEventMessage>[]
struct Action_1U5BU5D_tA86BB2F4515F1C2D563CF423A7364368C839717A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>[]
struct EntryU5BU5D_t9BFFDA4AE8FF51C1E96C5D958129CAB6A00DC293;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniFramework.Machine.IStateNode>[]
struct EntryU5BU5D_t2624BB76DFF9387F922FB2D54CDCEC98CA7AF87C;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>[]
struct EntryU5BU5D_t542533476758DAB4EB5945B8B9CB475CA7778CB5;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UniFramework.Event.UniEvent/PostWrapper[]
struct PostWrapperU5BU5D_tD5C367B45DACF66FD85B8542EC80863D4E03C19A;
// UniFramework.Singleton.UniSingleton/Wrapper[]
struct WrapperU5BU5D_tF42DD36DC424454136DDA10F615C4815468021E1;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UniFramework.Event.EventGroup
struct EventGroup_tCA112A3662489F65A6EC3E71AC9553DD734A7973;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UniFramework.Event.IEventMessage
struct IEventMessage_t0B93560638AB9A87426583F088EA70A69A1BF003;
// UniFramework.Singleton.ISingleton
struct ISingleton_t4C7BC5E8B200CFDA74438B35DC816FCAC4F67092;
// UniFramework.Machine.IStateNode
struct IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UniFramework.Machine.StateMachine
struct StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UniFramework.Event.UniEventDriver
struct UniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375;
// UniFramework.Singleton.UniSingletonDriver
struct UniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UniFramework.Event.UniEvent/PostWrapper
struct PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1;
// UniFramework.Singleton.UniSingleton/<>c
struct U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF;
// UniFramework.Singleton.UniSingleton/Wrapper
struct Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISingleton_t4C7BC5E8B200CFDA74438B35DC816FCAC4F67092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17;
IL2CPP_EXTERN_C String_t* _stringLiteral219D8FBDBDF6678F80BB27BFE47C8BF167730C32;
IL2CPP_EXTERN_C String_t* _stringLiteral2C2A31EC8F081A703CF4CAA538CCF7816626F9EC;
IL2CPP_EXTERN_C String_t* _stringLiteral4C8C00CA8B1FC768BE330815119433CED16578F0;
IL2CPP_EXTERN_C String_t* _stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98;
IL2CPP_EXTERN_C String_t* _stringLiteral9E54FECCB7386E9F1531BDA16A3FBDC800E28245;
IL2CPP_EXTERN_C String_t* _stringLiteralEF2F1849B5D7CE6EB4F6B3EC5A3CDFC34AEC955B;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3A1872057EB0944EBBA65DB327A282172951B49F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA82130CEEE2D5ACC42931ACAFAA6C48F0F54FE2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m1FC689CDF757B4E6807837DBDD17DE765E18D796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m81B25EB91073DE229146EBE93A95262BBA9C7F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6D211ADF27AAB1413BCD6DD6E39FDF4308D30B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7630A7274EDD22C63296A6AB9B7F778536575325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9A315CB93BB701B293CD3E6D4C9C60843F1BB17C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0272D5D5EE303A29E65D98D4987E18257439C9FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2CEF7014EC7436E09E529C592B6419ACB946D06C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7DDB2A5D332F5EB2A6B25DE9155FBF28AECAF9A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m994EA30B661E26B640066E762D68EC86EEF7C432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m086CDDB31D5B3B88A47D0CDA0DCD997266666F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m93B5C4CD778626D83CCF08FE6EA5E57735171096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m109D08CC66B1FDEFB65C1DF3242E7C582FA79BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7EB0CB156265055B34787F0AD900FEB77CA175C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m094C6658A4C360786566A9BEF938F46F38DF0DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m728B77F3527F6827D0F4B6EAEE5D322D333F6F04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375_m4BCE787B7F3EEC343AE7C670FC309446ECE5867E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F_m987FA42AB6D9F5718BDE0365A2E51CB72E018940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m9199083C98DE0D0F9B5B928BABDB723F4E0AE3FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m494B40750093363DB865634974DDFE4802CC04B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Previous_mB3C50CEC425581741A8F483326CCBC2554FDC64D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Value_m1750CCDCC98A292582074C90013331AEB70B2DCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_mE2361ADEFBE04B8BB586168308134D479FAFEBE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Clear_mB19052CB7A530107B27E40E3DE543B91FE307624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Contains_mACFD913D54D4CDF8887F5FC9DFF063C800BE1998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_Remove_mB32C5062EDBF5C0A73D95214A66E3563D21B6404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m42505BA1CA213E11DC92E3B3B74EA4F6163BAA24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Count_m0D0EF607264A3BDCF2F99130B9252A91DC2894F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Last_m2FF7AE9F58E4A9D0B9A07215DF0232E4DC738150_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBA206AE062639666C6AF02C387494FD49F108D20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m09E96C2D08181DF38D37ADFD7017E7809FF4F03C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2E60C74C3B7B999D9C2797ABC69BD3BB4221512D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m42F6DCF773A8B6F8321ECE748A3D2574FFD6C0E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m288B0EBC41E4D28C6257D68777179B8993A9144F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m2CDFDAA85C787BC00CF4FA62A794B7A5B9ADB36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m802E08B5533CF28F9B7C708811DCF68FB4A732CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB9ECF65A465CA828FBF5B11988A4815F28A5604C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m098EDD40FC1CB8D3329EE97C5BFD891F9D687F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8FC64E8A3B64461FDBB79AED4758F06246245E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m59C3A8AF5F87AADAA5E3FB11A67EA364A6C6FCA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB997DF3868015289B88CA6B4E60F5BEEF1EEEF82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_AddNode_mC2352B9ACDA3A42ACD7645F626D590302E47B813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_ChangeState_mDFBC0919F4B231F2B264894532714F06C202CD6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_Run_m7ACAC4A957B8A283F3D42F012801B236BB9FDAAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateU3Eb__8_0_m5081E5DBE0D9D96AC180CCF78DA4940B06E36CB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniEvent_Initalize_mE735AAC85E51FABAE4F6589D19890C97DD1A2FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniSingleton_Initialize_m94662A55350DF4052FC56780601F478CF5527DA1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD84A48C8BB536DA85EAA3B10F45964DCE0FF2654 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9BFFDA4AE8FF51C1E96C5D958129CAB6A00DC293* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t28DBAAA9E79E98C8BC9C16670DF2B1A3CB584CC8* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t04C5EE411933B1FDE4B98C159DABB502543D3A39* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>
struct Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2624BB76DFF9387F922FB2D54CDCEC98CA7AF87C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE44AABCF0DFC3718615C8CEFA7618F47D7595752* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t44B4FD871EC2BC4F09D64DE06D9A27B3334C6D61* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t542533476758DAB4EB5945B8B9CB475CA7778CB5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC8C4ADA5FDBB0915AFDE7C0360E98BDD7CED6764* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5511B2220412B8F4EFC64786DC11EE3F4A758229* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct KeyCollection_t28DBAAA9E79E98C8BC9C16670DF2B1A3CB584CC8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* ____dictionary_0;
};

// System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___item_3;
};

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	RuntimeObject* ___item_3;
};

// System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>
struct List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_tA86BB2F4515F1C2D563CF423A7364368C839717A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_tA86BB2F4515F1C2D563CF423A7364368C839717A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>
struct List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PostWrapperU5BU5D_tD5C367B45DACF66FD85B8542EC80863D4E03C19A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PostWrapperU5BU5D_tD5C367B45DACF66FD85B8542EC80863D4E03C19A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UniFramework.Singleton.UniSingleton/Wrapper>
struct List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WrapperU5BU5D_tF42DD36DC424454136DDA10F615C4815468021E1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WrapperU5BU5D_tF42DD36DC424454136DDA10F615C4815468021E1* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UniFramework.Event.EventGroup
struct EventGroup_tCA112A3662489F65A6EC3E71AC9553DD734A7973  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>> UniFramework.Event.EventGroup::_cachedListener
	Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554* ____cachedListener_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UniFramework.Machine.StateMachine
struct StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode> UniFramework.Machine.StateMachine::_nodes
	Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* ____nodes_0;
	// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::_curNode
	RuntimeObject* ____curNode_1;
	// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::_preNode
	RuntimeObject* ____preNode_2;
	// System.Object UniFramework.Machine.StateMachine::<Owner>k__BackingField
	RuntimeObject* ___U3COwnerU3Ek__BackingField_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UniFramework.Event.UniEvent
struct UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B  : public RuntimeObject
{
};

struct UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields
{
	// System.Boolean UniFramework.Event.UniEvent::_isInitialize
	bool ____isInitialize_0;
	// UnityEngine.GameObject UniFramework.Event.UniEvent::_driver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>> UniFramework.Event.UniEvent::_listeners
	Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* ____listeners_2;
	// System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper> UniFramework.Event.UniEvent::_postingList
	List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* ____postingList_3;
};

// UniFramework.Event.UniLogger
struct UniLogger_t0F801CD062DED33763974A98BB23E28689388D2A  : public RuntimeObject
{
};

// UniFramework.Machine.UniLogger
struct UniLogger_t9595A86F53CAF8FACCF70E3923121E92CD2EB40F  : public RuntimeObject
{
};

// UniFramework.Singleton.UniLogger
struct UniLogger_t9F8C6A59A9909C773CE7A7BF4EB162F7ABCADE06  : public RuntimeObject
{
};

// UniFramework.Singleton.UniSingleton
struct UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5  : public RuntimeObject
{
};

struct UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields
{
	// System.Boolean UniFramework.Singleton.UniSingleton::_isInitialize
	bool ____isInitialize_0;
	// UnityEngine.GameObject UniFramework.Singleton.UniSingleton::_driver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver_1;
	// System.Collections.Generic.List`1<UniFramework.Singleton.UniSingleton/Wrapper> UniFramework.Singleton.UniSingleton::_wrappers
	List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* ____wrappers_2;
	// UnityEngine.MonoBehaviour UniFramework.Singleton.UniSingleton::_behaviour
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____behaviour_3;
	// System.Boolean UniFramework.Singleton.UniSingleton::_isDirty
	bool ____isDirty_4;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UniFramework.Event.UniEvent/PostWrapper
struct PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1  : public RuntimeObject
{
	// System.Int32 UniFramework.Event.UniEvent/PostWrapper::PostFrame
	int32_t ___PostFrame_0;
	// System.Int32 UniFramework.Event.UniEvent/PostWrapper::EventID
	int32_t ___EventID_1;
	// UniFramework.Event.IEventMessage UniFramework.Event.UniEvent/PostWrapper::Message
	RuntimeObject* ___Message_2;
};

// UniFramework.Singleton.UniSingleton/<>c
struct U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF  : public RuntimeObject
{
};

struct U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_StaticFields
{
	// UniFramework.Singleton.UniSingleton/<>c UniFramework.Singleton.UniSingleton/<>c::<>9
	U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF* ___U3CU3E9_0;
	// System.Comparison`1<UniFramework.Singleton.UniSingleton/Wrapper> UniFramework.Singleton.UniSingleton/<>c::<>9__8_0
	Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* ___U3CU3E9__8_0_1;
};

// UniFramework.Singleton.UniSingleton/Wrapper
struct Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C  : public RuntimeObject
{
	// System.Int32 UniFramework.Singleton.UniSingleton/Wrapper::<Priority>k__BackingField
	int32_t ___U3CPriorityU3Ek__BackingField_0;
	// UniFramework.Singleton.ISingleton UniFramework.Singleton.UniSingleton/Wrapper::<Singleton>k__BackingField
	RuntimeObject* ___U3CSingletonU3Ek__BackingField_1;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	int32_t ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_t9E8B7A8E56EF3FDE46965824E1C7001E47045468 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	int32_t ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>
struct Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UniFramework.Event.IEventMessage>
struct Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Comparison`1<UniFramework.Singleton.UniSingleton/Wrapper>
struct Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UniFramework.Event.UniEventDriver
struct UniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UniFramework.Singleton.UniSingletonDriver
struct UniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E8B7A8E56EF3FDE46965824E1C7001E47045468 KeyCollection_GetEnumerator_m67544B0DCDA9D428FF54B64EF76CD2DA06BC6A2D_gshared (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFA6E663F1019D22095E439EB56AD4F121B42C15B_gshared (Enumerator_t9E8B7A8E56EF3FDE46965824E1C7001E47045468* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m8A0598EF34186B32CD19AAE697F86E8C19494FA4_gshared_inline (Enumerator_t9E8B7A8E56EF3FDE46965824E1C7001E47045468* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_Clear_m9426CEE1820EEB4779285ED5FCF443C7B2121C19_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m82EDDA07CB5C5189F873957F08178FA3FB397EC4_gshared (Enumerator_t9E8B7A8E56EF3FDE46965824E1C7001E47045468* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Contains_mD8E129C27AD4EB8FDAAA399526DDFC3602E9843E_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedList_1_Remove_m6548CB1A0181356C321DB1F226FC0598378F7997_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_mBFF1AE23B10EDF501026201C0427AA5820AECD82_gshared_inline (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedList_1_get_Last_m67691A5C3482FE484031BD1F60E7A4E08447514D_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LinkedListNode_1_get_Value_m8F67264DC98EF442B34CE4947044BCE18BF26053_gshared_inline (LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedListNode_1_get_Previous_m3B64B8A9429C25AE8AFC87E513E9AE993EE14762_gshared (LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___capacity0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UniFramework.Singleton.UniSingletonDriver>()
inline UniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F* GameObject_AddComponent_TisUniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F_m987FA42AB6D9F5718BDE0365A2E51CB72E018940 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UniFramework.Singleton.UniSingleton::DestroyAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_DestroyAll_mC89E3B650E125EABD0E2A92B81F66060E4F6646D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UniFramework.Singleton.UniSingleton/Wrapper>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mE2A5A8035DFB6F0057004EF64F49C9BA2EA600F7 (Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<UniFramework.Singleton.UniSingleton/Wrapper>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m2CDFDAA85C787BC00CF4FA62A794B7A5B9ADB36F (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* __this, Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542*, Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// T System.Collections.Generic.List`1<UniFramework.Singleton.UniSingleton/Wrapper>::get_Item(System.Int32)
inline Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* (*) (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UniFramework.Singleton.ISingleton UniFramework.Singleton.UniSingleton/Wrapper::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Wrapper_get_Singleton_mAE21D5055B68531CB3DF6874C8A747C95B2FC444_inline (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UniFramework.Singleton.UniSingleton/Wrapper>::get_Count()
inline int32_t List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_inline (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UniFramework.Singleton.UniSingleton/Wrapper::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3_inline (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UniFramework.Singleton.UniSingleton/Wrapper>::Clear()
inline void List_1_Clear_m09E96C2D08181DF38D37ADFD7017E7809FF4F03C_inline (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UniFramework.Singleton.UniSingleton/Wrapper>::.ctor(System.Int32)
inline void List_1__ctor_m802E08B5533CF28F9B7C708811DCF68FB4A732CE (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniFramework.Singleton.UniSingleton/Wrapper::set_Singleton(UniFramework.Singleton.ISingleton)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wrapper_set_Singleton_mB5879DA386BAA506EED5B60A64FFEE64E749913F_inline (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UniFramework.Singleton.UniSingleton/Wrapper::set_Priority(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wrapper_set_Priority_mD86FDD300C52BC6960D1A626BAC6BD444CC0EC28_inline (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UniFramework.Singleton.UniSingleton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m499FA2596777A308399241D2487FB78FBACFACF3 (U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF* __this, const RuntimeMethod* method) ;
// System.Void UniFramework.Singleton.UniSingleton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_Update_m9B639770136608C9413EE6AC4AB5646DDC0F01CD (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m0272D5D5EE303A29E65D98D4987E18257439C9FF (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___capacity0, method);
}
// System.Void UniFramework.Machine.StateMachine::set_Owner(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMachine_set_Owner_m7F38B0AA83838397074D3C3F9B20CD5BB52B74A4_inline (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UniFramework.Machine.StateMachine::Run(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_m7ACAC4A957B8A283F3D42F012801B236BB9FDAAD (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, String_t* ___entryNode0, const RuntimeMethod* method) ;
// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::TryGetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_TryGetNode_mBA11CABEBD62ACDC718F31C81A10CFDCE9092F2F (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, String_t* ___nodeName0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m6D211ADF27AAB1413BCD6DD6E39FDF4308D30B10 (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA82130CEEE2D5ACC42931ACAFAA6C48F0F54FE2C (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UniFramework.Machine.UniLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Error_mFB085E4FC57BE4ACF5048492B7D0997B49AE8DAC (String_t* ___info0, const RuntimeMethod* method) ;
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_mDFBC0919F4B231F2B264894532714F06C202CD6C (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, String_t* ___nodeName0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m9A315CB93BB701B293CD3E6D4C9C60843F1BB17C (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::GetEnumerator()
inline Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56 Dictionary_2_GetEnumerator_m7630A7274EDD22C63296A6AB9B7F778536575325 (Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56 (*) (Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Dispose()
inline void Enumerator_Dispose_m93B5C4CD778626D83CCF08FE6EA5E57735171096 (Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Current()
inline KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974 Enumerator_get_Current_m094C6658A4C360786566A9BEF938F46F38DF0DE7_inline (Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974 (*) (Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Key()
inline Type_t* KeyValuePair_2_get_Key_m494B40750093363DB865634974DDFE4802CC04B3_inline (KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Value()
inline List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_inline (KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974* __this, const RuntimeMethod* method)
{
	return ((  List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* (*) (KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Item(System.Int32)
inline Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* List_1_get_Item_m59C3A8AF5F87AADAA5E3FB11A67EA364A6C6FCA0 (List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* (*) (List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UniFramework.Event.UniEvent::RemoveListener(System.Type,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_RemoveListener_mFBA24BA9BCF369E322262570F7D950B9B7E4D154 (Type_t* ___eventType0, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___listener1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Count()
inline int32_t List_1_get_Count_m098EDD40FC1CB8D3329EE97C5BFD891F9D687F42_inline (List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>::Clear()
inline void List_1_Clear_m2E60C74C3B7B999D9C2797ABC69BD3BB4221512D_inline (List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::MoveNext()
inline bool Enumerator_MoveNext_m109D08CC66B1FDEFB65C1DF3242E7C582FA79BD6 (Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Clear()
inline void Dictionary_2_Clear_m81B25EB91073DE229146EBE93A95262BBA9C7F52 (Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Action`1<UniFramework.Event.IEventMessage>>>::.ctor()
inline void Dictionary_2__ctor_m2CEF7014EC7436E09E529C592B6419ACB946D06C (Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UniFramework.Event.UniEventDriver>()
inline UniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375* GameObject_AddComponent_TisUniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375_m4BCE787B7F3EEC343AE7C670FC309446ECE5867E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UniFramework.Event.UniEvent::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_ClearAll_m59842104F5AC145F860859E5E49EFE2E77E499F8 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::get_Count()
inline int32_t List_1_get_Count_m8FC64E8A3B64461FDBB79AED4758F06246245E70_inline (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::get_Item(System.Int32)
inline PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* List_1_get_Item_mB997DF3868015289B88CA6B4E60F5BEEF1EEEF82 (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* (*) (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.Void UniFramework.Event.UniEvent::SendMessage(System.Int32,UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_SendMessage_m5D1723EFDA2FCD3225F934A3CC72EFEDFDF1EF6B (int32_t ___eventId0, RuntimeObject* ___message1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m288B0EBC41E4D28C6257D68777179B8993A9144F (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Keys()
inline KeyCollection_t28DBAAA9E79E98C8BC9C16670DF2B1A3CB584CC8* Dictionary_2_get_Keys_m994EA30B661E26B640066E762D68EC86EEF7C432 (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t28DBAAA9E79E98C8BC9C16670DF2B1A3CB584CC8* (*) (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2*, const RuntimeMethod*))Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::GetEnumerator()
inline Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA KeyCollection_GetEnumerator_m9199083C98DE0D0F9B5B928BABDB723F4E0AE3FD (KeyCollection_t28DBAAA9E79E98C8BC9C16670DF2B1A3CB584CC8* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA (*) (KeyCollection_t28DBAAA9E79E98C8BC9C16670DF2B1A3CB584CC8*, const RuntimeMethod*))KeyCollection_GetEnumerator_m67544B0DCDA9D428FF54B64EF76CD2DA06BC6A2D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Dispose()
inline void Enumerator_Dispose_m086CDDB31D5B3B88A47D0CDA0DCD997266666F6B (Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA*, const RuntimeMethod*))Enumerator_Dispose_mFA6E663F1019D22095E439EB56AD4F121B42C15B_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Current()
inline int32_t Enumerator_get_Current_m728B77F3527F6827D0F4B6EAEE5D322D333F6F04_inline (Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA*, const RuntimeMethod*))Enumerator_get_Current_m8A0598EF34186B32CD19AAE697F86E8C19494FA4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::get_Item(TKey)
inline LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3 (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* (*) (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::Clear()
inline void LinkedList_1_Clear_mB19052CB7A530107B27E40E3DE543B91FE307624 (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*, const RuntimeMethod*))LinkedList_1_Clear_m9426CEE1820EEB4779285ED5FCF443C7B2121C19_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::MoveNext()
inline bool Enumerator_MoveNext_m7EB0CB156265055B34787F0AD900FEB77CA175C8 (Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA*, const RuntimeMethod*))Enumerator_MoveNext_m82EDDA07CB5C5189F873957F08178FA3FB397EC4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Clear()
inline void Dictionary_2_Clear_m1FC689CDF757B4E6807837DBDD17DE765E18D796 (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::Clear()
inline void List_1_Clear_m42F6DCF773A8B6F8321ECE748A3D2574FFD6C0E9_inline (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UniFramework.Event.UniEvent::AddListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_AddListener_m5F5A2A804D0E3446573BDD6D8973E0B8FE914261 (int32_t ___eventId0, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___listener1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10 (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::.ctor()
inline void LinkedList_1__ctor_m42505BA1CA213E11DC92E3B3B74EA4F6163BAA24 (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3A1872057EB0944EBBA65DB327A282172951B49F (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* __this, int32_t ___key0, LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2*, int32_t, LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::Contains(T)
inline bool LinkedList_1_Contains_mACFD913D54D4CDF8887F5FC9DFF063C800BE1998 (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* __this, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C*, const RuntimeMethod*))LinkedList_1_Contains_mD8E129C27AD4EB8FDAAA399526DDFC3602E9843E_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::AddLast(T)
inline LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* LinkedList_1_AddLast_mE2361ADEFBE04B8BB586168308134D479FAFEBE1 (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* __this, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* (*) (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C*, const RuntimeMethod*))LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared)(__this, ___value0, method);
}
// System.Void UniFramework.Event.UniEvent::RemoveListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_RemoveListener_m04D975384AE8AD7C27DB618AB07F4E494A761282 (int32_t ___eventId0, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___listener1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::Remove(T)
inline bool LinkedList_1_Remove_mB32C5062EDBF5C0A73D95214A66E3563D21B6404 (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* __this, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C*, const RuntimeMethod*))LinkedList_1_Remove_m6548CB1A0181356C321DB1F226FC0598378F7997_gshared)(__this, ___value0, method);
}
// System.Int32 System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Count()
inline int32_t LinkedList_1_get_Count_m0D0EF607264A3BDCF2F99130B9252A91DC2894F9_inline (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*, const RuntimeMethod*))LinkedList_1_get_Count_mBFF1AE23B10EDF501026201C0427AA5820AECD82_gshared_inline)(__this, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Last()
inline LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* LinkedList_1_get_Last_m2FF7AE9F58E4A9D0B9A07215DF0232E4DC738150 (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* __this, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* (*) (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*, const RuntimeMethod*))LinkedList_1_get_Last_m67691A5C3482FE484031BD1F60E7A4E08447514D_gshared)(__this, method);
}
// T System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Value()
inline Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* LinkedListNode_1_get_Value_m1750CCDCC98A292582074C90013331AEB70B2DCD_inline (LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* __this, const RuntimeMethod* method)
{
	return ((  Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* (*) (LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA*, const RuntimeMethod*))LinkedListNode_1_get_Value_m8F67264DC98EF442B34CE4947044BCE18BF26053_gshared_inline)(__this, method);
}
// System.Void System.Action`1<UniFramework.Event.IEventMessage>::Invoke(T)
inline void Action_1_Invoke_mD9B247D186744FD0E8A70AAB9549A5863F982763_inline (Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Action`1<UniFramework.Event.IEventMessage>>::get_Previous()
inline LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* LinkedListNode_1_get_Previous_mB3C50CEC425581741A8F483326CCBC2554FDC64D (LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* __this, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* (*) (LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA*, const RuntimeMethod*))LinkedListNode_1_get_Previous_m3B64B8A9429C25AE8AFC87E513E9AE993EE14762_gshared)(__this, method);
}
// System.Void UniFramework.Event.UniEvent::PostMessage(System.Int32,UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_PostMessage_m04A59CA31E7FA7DBAD3E9B42BD6D5075091E829B (int32_t ___eventId0, RuntimeObject* ___message1, const RuntimeMethod* method) ;
// System.Void UniFramework.Event.UniEvent/PostWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostWrapper__ctor_m9DC6BDF7362782C7C7962142D262193810263F4F (PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::Add(T)
inline void List_1_Add_mBA206AE062639666C6AF02C387494FD49F108D20_inline (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* __this, PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C*, PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<UniFramework.Event.IEventMessage>>>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m7DDB2A5D332F5EB2A6B25DE9155FBF28AECAF9A1 (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UniFramework.Event.UniEvent/PostWrapper>::.ctor(System.Int32)
inline void List_1__ctor_mB9ECF65A465CA828FBF5B11988A4815F28A5604C (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void UniFramework.Event.UniEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_Update_m216B89DA1528DC68B478242CB2998391F0FFB4FD (const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void UniFramework.Singleton.UniLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Log_m3E962544A02BB64026195264325B5BD50A2424AE (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Singleton.UniLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Warning_m2CF8A4DC64B9F426645796B540FB3072096242A7 (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Singleton.UniLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Error_m764554120E561D6705CEFFA6A8ABC0A56B3086AD (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Singleton.UniSingleton::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_Initialize_m94662A55350DF4052FC56780601F478CF5527DA1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F_m987FA42AB6D9F5718BDE0365A2E51CB72E018940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E54FECCB7386E9F1531BDA16A3FBDC800E28245);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		bool L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new Exception($"{nameof(UniSingleton)} is initialized !");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral219D8FBDBDF6678F80BB27BFE47C8BF167730C32)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniSingleton_Initialize_m94662A55350DF4052FC56780601F478CF5527DA1_RuntimeMethod_var)));
	}

IL_0012:
	{
		// if (_isInitialize == false)
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		bool L_2 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// _isInitialize = true;
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)1;
		// _driver = new UnityEngine.GameObject($"[{nameof(UniSingleton)}]");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral9E54FECCB7386E9F1531BDA16A3FBDC800E28245, NULL);
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____driver_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____driver_1), (void*)L_3);
		// _behaviour = _driver.AddComponent<UniSingletonDriver>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____driver_1;
		NullCheck(L_4);
		UniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F* L_5;
		L_5 = GameObject_AddComponent_TisUniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F_m987FA42AB6D9F5718BDE0365A2E51CB72E018940(L_4, GameObject_AddComponent_TisUniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F_m987FA42AB6D9F5718BDE0365A2E51CB72E018940_RuntimeMethod_var);
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____behaviour_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____behaviour_3), (void*)L_5);
		// UnityEngine.Object.DontDestroyOnLoad(_driver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Singleton.UniSingleton::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_Destroy_m6A50335DD8D2AE75054199368E512FFE97446157 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		bool L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// DestroyAll();
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		UniSingleton_DestroyAll_mC89E3B650E125EABD0E2A92B81F66060E4F6646D(NULL);
		// _isInitialize = false;
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// if (_driver != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// GameObject.Destroy(_driver);
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Singleton.UniSingleton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_Update_m9B639770136608C9413EE6AC4AB5646DDC0F01CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISingleton_t4C7BC5E8B200CFDA74438B35DC816FCAC4F67092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m2CDFDAA85C787BC00CF4FA62A794B7A5B9ADB36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateU3Eb__8_0_m5081E5DBE0D9D96AC180CCF78DA4940B06E36CB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* G_B3_0 = NULL;
	List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* G_B3_1 = NULL;
	Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* G_B2_0 = NULL;
	List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* G_B2_1 = NULL;
	{
		// if (_isDirty)
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		bool L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isDirty_4;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// _isDirty = false;
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isDirty_4 = (bool)0;
		// _wrappers.Sort((left, right) =>
		// {
		//     if (left.Priority > right.Priority)
		//         return -1;
		//     else if (left.Priority == right.Priority)
		//         return 0;
		//     else
		//         return 1;
		// });
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_1 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var);
		Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* L_2 = ((U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var);
		U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF* L_4 = ((U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* L_5 = (Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6*)il2cpp_codegen_object_new(Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Comparison_1__ctor_mE2A5A8035DFB6F0057004EF64F49C9BA2EA600F7(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CUpdateU3Eb__8_0_m5081E5DBE0D9D96AC180CCF78DA4940B06E36CB9_RuntimeMethod_var), NULL);
		Comparison_1_t3E5767097E0848560A28031560EC4E49729E6CB6* L_6 = L_5;
		((U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_6);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		List_1_Sort_m2CDFDAA85C787BC00CF4FA62A794B7A5B9ADB36F(G_B3_1, G_B3_0, List_1_Sort_m2CDFDAA85C787BC00CF4FA62A794B7A5B9ADB36F_RuntimeMethod_var);
	}

IL_0036:
	{
		// for (int i = 0; i < _wrappers.Count; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_003a:
	{
		// _wrappers[i].Singleton.OnUpdate();
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_7 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* L_9;
		L_9 = List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F(L_7, L_8, List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Wrapper_get_Singleton_mAE21D5055B68531CB3DF6874C8A747C95B2FC444_inline(L_9, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UniFramework.Singleton.ISingleton::OnUpdate() */, ISingleton_t4C7BC5E8B200CFDA74438B35DC816FCAC4F67092_il2cpp_TypeInfo_var, L_10);
		// for (int i = 0; i < _wrappers.Count; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < _wrappers.Count; i++)
		int32_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_13 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_inline(L_13, List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Coroutine UniFramework.Singleton.UniSingleton::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* UniSingleton_StartCoroutine_m0260564E9CEA5B494787353C2F40757748ED8E10 (RuntimeObject* ___coroutine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _behaviour.StartCoroutine(coroutine);
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____behaviour_3;
		RuntimeObject* L_1 = ___coroutine0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Coroutine UniFramework.Singleton.UniSingleton::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* UniSingleton_StartCoroutine_m81913BA5B91BF00F49F2F28863E4BDFC2C501403 (String_t* ___methodName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _behaviour.StartCoroutine(methodName);
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____behaviour_3;
		String_t* L_1 = ___methodName0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UniFramework.Singleton.UniSingleton::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_StopCoroutine_mDB730C29B192B5D938E6CAA96BA21165585CCFBC (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coroutine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _behaviour.StopCoroutine(coroutine);
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____behaviour_3;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = ___coroutine0;
		NullCheck(L_0);
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Singleton.UniSingleton::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_StopCoroutine_m0E31C14E986A89F19D369F11CAF1A31408266C06 (String_t* ___methodName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _behaviour.StopCoroutine(methodName);
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____behaviour_3;
		String_t* L_1 = ___methodName0;
		NullCheck(L_0);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Singleton.UniSingleton::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_StopAllCoroutines_mB38DEED1CAD56D99D84CF60DBA648AFBD1824A0B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _behaviour.StopAllCoroutines();
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____behaviour_3;
		NullCheck(L_0);
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(L_0, NULL);
		// }
		return;
	}
}
// System.Int32 UniFramework.Singleton.UniSingleton::GetMinPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniSingleton_GetMinPriority_mB329ECF82335DC8BE3022EA46FC8117D730063D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int minPriority = 0;
		V_0 = 0;
		// for (int i = 0; i < _wrappers.Count; i++)
		V_1 = 0;
		goto IL_002e;
	}

IL_0006:
	{
		// if (_wrappers[i].Priority < minPriority)
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* L_2;
		L_2 = List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F(L_0, L_1, List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3_inline(L_2, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		// minPriority = _wrappers[i].Priority;
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_5 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* L_7;
		L_7 = List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F(L_5, L_6, List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3_inline(L_7, NULL);
		V_0 = L_8;
	}

IL_002a:
	{
		// for (int i = 0; i < _wrappers.Count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < _wrappers.Count; i++)
		int32_t L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_11 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_inline(L_11, List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0006;
		}
	}
	{
		// return minPriority; //?????
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Void UniFramework.Singleton.UniSingleton::DestroyAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton_DestroyAll_mC89E3B650E125EABD0E2A92B81F66060E4F6646D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISingleton_t4C7BC5E8B200CFDA74438B35DC816FCAC4F67092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m09E96C2D08181DF38D37ADFD7017E7809FF4F03C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _wrappers.Count; i++)
		V_0 = 0;
		goto IL_001d;
	}

IL_0004:
	{
		// _wrappers[i].Singleton.OnDestroy();
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_0 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* L_2;
		L_2 = List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F(L_0, L_1, List_1_get_Item_m4B587B409CF330D6DD1C8F5DA95727B8B0A5982F_RuntimeMethod_var);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Wrapper_get_Singleton_mAE21D5055B68531CB3DF6874C8A747C95B2FC444_inline(L_2, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UniFramework.Singleton.ISingleton::OnDestroy() */, ISingleton_t4C7BC5E8B200CFDA74438B35DC816FCAC4F67092_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < _wrappers.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < _wrappers.Count; i++)
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_6 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_inline(L_6, List_1_get_Count_mF22F5823FB070EF84DC41A1DFD2D00597CA200F5_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// _wrappers.Clear();
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_8 = ((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2;
		NullCheck(L_8);
		List_1_Clear_m09E96C2D08181DF38D37ADFD7017E7809FF4F03C_inline(L_8, List_1_Clear_m09E96C2D08181DF38D37ADFD7017E7809FF4F03C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniFramework.Singleton.UniSingleton::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingleton__cctor_m50B5612D9D2B89D1F87631B2816F64DCB9D618A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m802E08B5533CF28F9B7C708811DCF68FB4A732CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _isInitialize = false;
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// private static GameObject _driver = null;
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____driver_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____driver_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private static readonly List<Wrapper> _wrappers = new List<Wrapper>(100);
		List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542* L_0 = (List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542*)il2cpp_codegen_object_new(List_1_t0FCA0FCAA70BF9DDB7DB9261F50CF83140E93542_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m802E08B5533CF28F9B7C708811DCF68FB4A732CE(L_0, ((int32_t)100), List_1__ctor_m802E08B5533CF28F9B7C708811DCF68FB4A732CE_RuntimeMethod_var);
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____wrappers_2), (void*)L_0);
		// private static bool _isDirty = false;
		((UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_StaticFields*)il2cpp_codegen_static_fields_for(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var))->____isDirty_4 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Singleton.UniSingleton/Wrapper::set_Priority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_set_Priority_mD86FDD300C52BC6960D1A626BAC6BD444CC0EC28 (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Priority { private set; get; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 UniFramework.Singleton.UniSingleton/Wrapper::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3 (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, const RuntimeMethod* method) 
{
	{
		// public int Priority { private set; get; }
		int32_t L_0 = __this->___U3CPriorityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UniFramework.Singleton.UniSingleton/Wrapper::set_Singleton(UniFramework.Singleton.ISingleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_set_Singleton_mB5879DA386BAA506EED5B60A64FFEE64E749913F (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ISingleton Singleton { private set; get; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSingletonU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSingletonU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// UniFramework.Singleton.ISingleton UniFramework.Singleton.UniSingleton/Wrapper::get_Singleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Wrapper_get_Singleton_mAE21D5055B68531CB3DF6874C8A747C95B2FC444 (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, const RuntimeMethod* method) 
{
	{
		// public ISingleton Singleton { private set; get; }
		RuntimeObject* L_0 = __this->___U3CSingletonU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UniFramework.Singleton.UniSingleton/Wrapper::.ctor(UniFramework.Singleton.ISingleton,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper__ctor_m860D1303887D64C4B5F612E64BE9EF362482CCB9 (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, RuntimeObject* ___module0, int32_t ___priority1, const RuntimeMethod* method) 
{
	{
		// public Wrapper(ISingleton module, int priority)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Singleton = module;
		RuntimeObject* L_0 = ___module0;
		Wrapper_set_Singleton_mB5879DA386BAA506EED5B60A64FFEE64E749913F_inline(__this, L_0, NULL);
		// Priority = priority;
		int32_t L_1 = ___priority1;
		Wrapper_set_Priority_mD86FDD300C52BC6960D1A626BAC6BD444CC0EC28_inline(__this, L_1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Singleton.UniSingleton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5770D2236053160D5ECEA1B10E5858785B943199 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF* L_0 = (U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF*)il2cpp_codegen_object_new(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m499FA2596777A308399241D2487FB78FBACFACF3(L_0, NULL);
		((U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UniFramework.Singleton.UniSingleton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m499FA2596777A308399241D2487FB78FBACFACF3 (U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 UniFramework.Singleton.UniSingleton/<>c::<Update>b__8_0(UniFramework.Singleton.UniSingleton/Wrapper,UniFramework.Singleton.UniSingleton/Wrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateU3Eb__8_0_m5081E5DBE0D9D96AC180CCF78DA4940B06E36CB9 (U3CU3Ec_t5DD06E70D59DBA29ED59D6E0F6C365B75FAC62BF* __this, Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* ___left0, Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* ___right1, const RuntimeMethod* method) 
{
	{
		// if (left.Priority > right.Priority)
		Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* L_0 = ___left0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3_inline(L_0, NULL);
		Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* L_2 = ___right1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3_inline(L_2, NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// else if (left.Priority == right.Priority)
		Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* L_4 = ___left0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3_inline(L_4, NULL);
		Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* L_6 = ___right1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3_inline(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0020:
	{
		// return 1;
		return 1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Singleton.UniSingletonDriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingletonDriver_Update_m0BF58A4D1C10443A3AA0903E2153D2D21EB89C90 (UniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniSingleton.Update();
		il2cpp_codegen_runtime_class_init_inline(UniSingleton_t36F2FFD8FA6DBF079F9DE2A9D209478728B574F5_il2cpp_TypeInfo_var);
		UniSingleton_Update_m9B639770136608C9413EE6AC4AB5646DDC0F01CD(NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Singleton.UniSingletonDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniSingletonDriver__ctor_m4182F4284D2CE4F4DC46F3401B19B9DE337D2B80 (UniSingletonDriver_t770AEF44EAC1ED75E574F9A3309BDE69A40EC53F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Machine.StateMachine::set_Owner(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_set_Owner_m7F38B0AA83838397074D3C3F9B20CD5BB52B74A4 (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3COwnerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Object UniFramework.Machine.StateMachine::get_Owner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_get_Owner_mE001E07A4096A24EF5532C5FD746B7723DCEAD9E (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = __this->___U3COwnerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String UniFramework.Machine.StateMachine::get_CurrentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateMachine_get_CurrentNode_m88EF6BD2705A9AC05B6CC5974D726790F515350E (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _curNode != null ? _curNode.GetType().FullName : string.Empty; }
		RuntimeObject* L_0 = __this->____curNode_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____curNode_1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.Type::get_FullName() */, L_3);
		return L_4;
	}
}
// System.String UniFramework.Machine.StateMachine::get_PreviousNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateMachine_get_PreviousNode_mBD47CBA923A2FF1402969CF4380D33FDC55BCDF4 (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _preNode != null ? _preNode.GetType().FullName : string.Empty; }
		RuntimeObject* L_0 = __this->____preNode_2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____preNode_2;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.Type::get_FullName() */, L_3);
		return L_4;
	}
}
// System.Void UniFramework.Machine.StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_mA194EB997E3342F182DCBCEEEB5DCE8395420F8F (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0272D5D5EE303A29E65D98D4987E18257439C9FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, IStateNode> _nodes = new Dictionary<string, IStateNode>(100);
		Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* L_0 = (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9*)il2cpp_codegen_object_new(Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m0272D5D5EE303A29E65D98D4987E18257439C9FF(L_0, ((int32_t)100), Dictionary_2__ctor_m0272D5D5EE303A29E65D98D4987E18257439C9FF_RuntimeMethod_var);
		__this->____nodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_0), (void*)L_0);
		// private StateMachine() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private StateMachine() { }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_m6DEC2546C4629109E551ACAE29577EF480629DCB (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, RuntimeObject* ___owner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0272D5D5EE303A29E65D98D4987E18257439C9FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, IStateNode> _nodes = new Dictionary<string, IStateNode>(100);
		Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* L_0 = (Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9*)il2cpp_codegen_object_new(Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m0272D5D5EE303A29E65D98D4987E18257439C9FF(L_0, ((int32_t)100), Dictionary_2__ctor_m0272D5D5EE303A29E65D98D4987E18257439C9FF_RuntimeMethod_var);
		__this->____nodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_0), (void*)L_0);
		// public StateMachine(System.Object owner)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Owner = owner;
		RuntimeObject* L_1 = ___owner0;
		StateMachine_set_Owner_m7F38B0AA83838397074D3C3F9B20CD5BB52B74A4_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Update_m10DCED1611C92D1F7ADEF6BB0E0EAE6FA4FD8424 (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_curNode != null)
		RuntimeObject* L_0 = __this->____curNode_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _curNode.OnUpdate();
		RuntimeObject* L_1 = __this->____curNode_1;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UniFramework.Machine.IStateNode::OnUpdate() */, IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Run(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_m27801A6662B90B7F76F6DA2D3476E17D3E296B3F (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, Type_t* ___entryNode0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var nodeName = entryNode.FullName;
		Type_t* L_0 = ___entryNode0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.Type::get_FullName() */, L_0);
		V_0 = L_1;
		// Run(nodeName);
		String_t* L_2 = V_0;
		StateMachine_Run_m7ACAC4A957B8A283F3D42F012801B236BB9FDAAD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Run(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_m7ACAC4A957B8A283F3D42F012801B236BB9FDAAD (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, String_t* ___entryNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _curNode = TryGetNode(entryNode);
		String_t* L_0 = ___entryNode0;
		RuntimeObject* L_1;
		L_1 = StateMachine_TryGetNode_mBA11CABEBD62ACDC718F31C81A10CFDCE9092F2F(__this, L_0, NULL);
		__this->____curNode_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____curNode_1), (void*)L_1);
		// _preNode = _curNode;
		RuntimeObject* L_2 = __this->____curNode_1;
		__this->____preNode_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preNode_2), (void*)L_2);
		// if (_curNode == null)
		RuntimeObject* L_3 = __this->____curNode_1;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// throw new Exception($"Not found entry node: {entryNode }");
		String_t* L_4 = ___entryNode0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF2F1849B5D7CE6EB4F6B3EC5A3CDFC34AEC955B)), L_4, NULL);
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_Run_m7ACAC4A957B8A283F3D42F012801B236BB9FDAAD_RuntimeMethod_var)));
	}

IL_0032:
	{
		// _curNode.OnEnter();
		RuntimeObject* L_7 = __this->____curNode_1;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UniFramework.Machine.IStateNode::OnEnter() */, IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var, L_7);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::AddNode(UniFramework.Machine.IStateNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_AddNode_mC2352B9ACDA3A42ACD7645F626D590302E47B813 (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, RuntimeObject* ___stateNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA82130CEEE2D5ACC42931ACAFAA6C48F0F54FE2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m6D211ADF27AAB1413BCD6DD6E39FDF4308D30B10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (stateNode == null)
		RuntimeObject* L_0 = ___stateNode0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_AddNode_mC2352B9ACDA3A42ACD7645F626D590302E47B813_RuntimeMethod_var)));
	}

IL_0009:
	{
		// var nodeType = stateNode.GetType();
		RuntimeObject* L_2 = ___stateNode0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		// var nodeName = nodeType.FullName;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.Type::get_FullName() */, L_3);
		V_0 = L_4;
		// if (_nodes.ContainsKey(nodeName) == false)
		Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* L_5 = __this->____nodes_0;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m6D211ADF27AAB1413BCD6DD6E39FDF4308D30B10(L_5, L_6, Dictionary_2_ContainsKey_m6D211ADF27AAB1413BCD6DD6E39FDF4308D30B10_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		// stateNode.OnCreate(this);
		RuntimeObject* L_8 = ___stateNode0;
		NullCheck(L_8);
		InterfaceActionInvoker1< StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* >::Invoke(0 /* System.Void UniFramework.Machine.IStateNode::OnCreate(UniFramework.Machine.StateMachine) */, IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var, L_8, __this);
		// _nodes.Add(nodeName, stateNode);
		Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* L_9 = __this->____nodes_0;
		String_t* L_10 = V_0;
		RuntimeObject* L_11 = ___stateNode0;
		NullCheck(L_9);
		Dictionary_2_Add_mA82130CEEE2D5ACC42931ACAFAA6C48F0F54FE2C(L_9, L_10, L_11, Dictionary_2_Add_mA82130CEEE2D5ACC42931ACAFAA6C48F0F54FE2C_RuntimeMethod_var);
		return;
	}

IL_0038:
	{
		// UniLogger.Error($"State node already existed : {nodeName}");
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17, L_12, NULL);
		UniLogger_Error_mFB085E4FC57BE4ACF5048492B7D0997B49AE8DAC(L_13, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_m56866F8FA641578C2C87A2D8A387DF34E18A4D77 (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, Type_t* ___nodeType0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var nodeName = nodeType.FullName;
		Type_t* L_0 = ___nodeType0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.Type::get_FullName() */, L_0);
		V_0 = L_1;
		// ChangeState(nodeName);
		String_t* L_2 = V_0;
		StateMachine_ChangeState_mDFBC0919F4B231F2B264894532714F06C202CD6C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_mDFBC0919F4B231F2B264894532714F06C202CD6C (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, String_t* ___nodeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (string.IsNullOrEmpty(nodeName))
		String_t* L_0 = ___nodeName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_ChangeState_mDFBC0919F4B231F2B264894532714F06C202CD6C_RuntimeMethod_var)));
	}

IL_000e:
	{
		// IStateNode node = TryGetNode(nodeName);
		String_t* L_3 = ___nodeName0;
		RuntimeObject* L_4;
		L_4 = StateMachine_TryGetNode_mBA11CABEBD62ACDC718F31C81A10CFDCE9092F2F(__this, L_3, NULL);
		V_0 = L_4;
		// if (node == null)
		RuntimeObject* L_5 = V_0;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		// UniLogger.Error($"Can not found state node : {nodeName}");
		String_t* L_6 = ___nodeName0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98, L_6, NULL);
		UniLogger_Error_mFB085E4FC57BE4ACF5048492B7D0997B49AE8DAC(L_7, NULL);
		// return;
		return;
	}

IL_002a:
	{
		// _preNode = _curNode;
		RuntimeObject* L_8 = __this->____curNode_1;
		__this->____preNode_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preNode_2), (void*)L_8);
		// _curNode.OnExit();
		RuntimeObject* L_9 = __this->____curNode_1;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UniFramework.Machine.IStateNode::OnExit() */, IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var, L_9);
		// _curNode = node;
		RuntimeObject* L_10 = V_0;
		__this->____curNode_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____curNode_1), (void*)L_10);
		// _curNode.OnEnter();
		RuntimeObject* L_11 = __this->____curNode_1;
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UniFramework.Machine.IStateNode::OnEnter() */, IStateNode_tBCB1FD0620C1AADDA8385F041E9714307D143308_il2cpp_TypeInfo_var, L_11);
		// }
		return;
	}
}
// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::TryGetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_TryGetNode_mBA11CABEBD62ACDC718F31C81A10CFDCE9092F2F (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, String_t* ___nodeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9A315CB93BB701B293CD3E6D4C9C60843F1BB17C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// _nodes.TryGetValue(nodeName, out IStateNode result);
		Dictionary_2_tF7E7AE515806DC1D9465F255CA561A03B28AACD9* L_0 = __this->____nodes_0;
		String_t* L_1 = ___nodeName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m9A315CB93BB701B293CD3E6D4C9C60843F1BB17C(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m9A315CB93BB701B293CD3E6D4C9C60843F1BB17C_RuntimeMethod_var);
		// return result;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Machine.UniLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Log_m481926A3FA3FBC3F457C0232D340204F91AC588F (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.UniLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Warning_mCF22D09E7654DD735FFBF71F35C5064538F1BB45 (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.UniLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Error_mFB085E4FC57BE4ACF5048492B7D0997B49AE8DAC (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Event.EventGroup::RemoveAllListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventGroup_RemoveAllListener_mEC3C28D2E675E69057FF6CEAE9C74BFE37E24515 (EventGroup_tCA112A3662489F65A6EC3E71AC9553DD734A7973* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m81B25EB91073DE229146EBE93A95262BBA9C7F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7630A7274EDD22C63296A6AB9B7F778536575325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m93B5C4CD778626D83CCF08FE6EA5E57735171096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m109D08CC66B1FDEFB65C1DF3242E7C582FA79BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m094C6658A4C360786566A9BEF938F46F38DF0DE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m494B40750093363DB865634974DDFE4802CC04B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2E60C74C3B7B999D9C2797ABC69BD3BB4221512D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m098EDD40FC1CB8D3329EE97C5BFD891F9D687F42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m59C3A8AF5F87AADAA5E3FB11A67EA364A6C6FCA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// foreach (var pair in _cachedListener)
		Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554* L_0 = __this->____cachedListener_0;
		NullCheck(L_0);
		Enumerator_t57A6E789AA9672DC4C66CB358CAEBC81256F7D56 L_1;
		L_1 = Dictionary_2_GetEnumerator_m7630A7274EDD22C63296A6AB9B7F778536575325(L_0, Dictionary_2_GetEnumerator_m7630A7274EDD22C63296A6AB9B7F778536575325_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m93B5C4CD778626D83CCF08FE6EA5E57735171096((&V_0), Enumerator_Dispose_m93B5C4CD778626D83CCF08FE6EA5E57735171096_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_000e_1:
			{
				// foreach (var pair in _cachedListener)
				KeyValuePair_2_t130961593038D1D2874B12C5AC0463D5475D1974 L_2;
				L_2 = Enumerator_get_Current_m094C6658A4C360786566A9BEF938F46F38DF0DE7_inline((&V_0), Enumerator_get_Current_m094C6658A4C360786566A9BEF938F46F38DF0DE7_RuntimeMethod_var);
				V_1 = L_2;
				// System.Type eventType = pair.Key;
				Type_t* L_3;
				L_3 = KeyValuePair_2_get_Key_m494B40750093363DB865634974DDFE4802CC04B3_inline((&V_1), KeyValuePair_2_get_Key_m494B40750093363DB865634974DDFE4802CC04B3_RuntimeMethod_var);
				V_2 = L_3;
				// for (int i = 0; i < pair.Value.Count; i++)
				V_3 = 0;
				goto IL_0039_1;
			}

IL_0022_1:
			{
				// UniEvent.RemoveListener(eventType, pair.Value[i]);
				Type_t* L_4 = V_2;
				List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* L_5;
				L_5 = KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_inline((&V_1), KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_RuntimeMethod_var);
				int32_t L_6 = V_3;
				NullCheck(L_5);
				Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* L_7;
				L_7 = List_1_get_Item_m59C3A8AF5F87AADAA5E3FB11A67EA364A6C6FCA0(L_5, L_6, List_1_get_Item_m59C3A8AF5F87AADAA5E3FB11A67EA364A6C6FCA0_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
				UniEvent_RemoveListener_mFBA24BA9BCF369E322262570F7D950B9B7E4D154(L_4, L_7, NULL);
				// for (int i = 0; i < pair.Value.Count; i++)
				int32_t L_8 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0039_1:
			{
				// for (int i = 0; i < pair.Value.Count; i++)
				int32_t L_9 = V_3;
				List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* L_10;
				L_10 = KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_inline((&V_1), KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_RuntimeMethod_var);
				NullCheck(L_10);
				int32_t L_11;
				L_11 = List_1_get_Count_m098EDD40FC1CB8D3329EE97C5BFD891F9D687F42_inline(L_10, List_1_get_Count_m098EDD40FC1CB8D3329EE97C5BFD891F9D687F42_RuntimeMethod_var);
				if ((((int32_t)L_9) < ((int32_t)L_11)))
				{
					goto IL_0022_1;
				}
			}
			{
				// pair.Value.Clear();
				List_1_tBA246B045AC16C99FD577A08B49E720B1C74C8BB* L_12;
				L_12 = KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_inline((&V_1), KeyValuePair_2_get_Value_mEFCCB27792A3C3834B61650345DD4C080628EF19_RuntimeMethod_var);
				NullCheck(L_12);
				List_1_Clear_m2E60C74C3B7B999D9C2797ABC69BD3BB4221512D_inline(L_12, List_1_Clear_m2E60C74C3B7B999D9C2797ABC69BD3BB4221512D_RuntimeMethod_var);
			}

IL_0054_1:
			{
				// foreach (var pair in _cachedListener)
				bool L_13;
				L_13 = Enumerator_MoveNext_m109D08CC66B1FDEFB65C1DF3242E7C582FA79BD6((&V_0), Enumerator_MoveNext_m109D08CC66B1FDEFB65C1DF3242E7C582FA79BD6_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// _cachedListener.Clear();
		Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554* L_14 = __this->____cachedListener_0;
		NullCheck(L_14);
		Dictionary_2_Clear_m81B25EB91073DE229146EBE93A95262BBA9C7F52(L_14, Dictionary_2_Clear_m81B25EB91073DE229146EBE93A95262BBA9C7F52_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniFramework.Event.EventGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventGroup__ctor_m0F272BCA2B905FE38F0654FF54DE9FB2590BCED8 (EventGroup_tCA112A3662489F65A6EC3E71AC9553DD734A7973* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2CEF7014EC7436E09E529C592B6419ACB946D06C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<System.Type, List<Action<IEventMessage>>> _cachedListener = new Dictionary<System.Type, List<Action<IEventMessage>>>();
		Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554* L_0 = (Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554*)il2cpp_codegen_object_new(Dictionary_2_t3AC3A5CD0519B026510E7ED8AAC6650C422C4554_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m2CEF7014EC7436E09E529C592B6419ACB946D06C(L_0, Dictionary_2__ctor_m2CEF7014EC7436E09E529C592B6419ACB946D06C_RuntimeMethod_var);
		__this->____cachedListener_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedListener_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Event.UniEvent::Initalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_Initalize_mE735AAC85E51FABAE4F6589D19890C97DD1A2FCC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375_m4BCE787B7F3EEC343AE7C670FC309446ECE5867E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C8C00CA8B1FC768BE330815119433CED16578F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		bool L_0 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new Exception($"{nameof(UniEvent)} is initialized !");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C2A31EC8F081A703CF4CAA538CCF7816626F9EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniEvent_Initalize_mE735AAC85E51FABAE4F6589D19890C97DD1A2FCC_RuntimeMethod_var)));
	}

IL_0012:
	{
		// if (_isInitialize == false)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		bool L_2 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		// _isInitialize = true;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)1;
		// _driver = new UnityEngine.GameObject($"[{nameof(UniEvent)}]");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral4C8C00CA8B1FC768BE330815119433CED16578F0, NULL);
		((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____driver_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____driver_1), (void*)L_3);
		// _driver.AddComponent<UniEventDriver>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____driver_1;
		NullCheck(L_4);
		UniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375* L_5;
		L_5 = GameObject_AddComponent_TisUniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375_m4BCE787B7F3EEC343AE7C670FC309446ECE5867E(L_4, GameObject_AddComponent_TisUniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375_m4BCE787B7F3EEC343AE7C670FC309446ECE5867E_RuntimeMethod_var);
		// UnityEngine.Object.DontDestroyOnLoad(_driver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_Destroy_m23CA6628D2225D63262F43D57EB742B42050BC92 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		bool L_0 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// ClearAll();
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		UniEvent_ClearAll_m59842104F5AC145F860859E5E49EFE2E77E499F8(NULL);
		// _isInitialize = false;
		((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// if (_driver != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// GameObject.Destroy(_driver);
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_Update_m216B89DA1528DC68B478242CB2998391F0FFB4FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m288B0EBC41E4D28C6257D68777179B8993A9144F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8FC64E8A3B64461FDBB79AED4758F06246245E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB997DF3868015289B88CA6B4E60F5BEEF1EEEF82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* V_1 = NULL;
	{
		// for (int i = _postingList.Count - 1; i >= 0; i--)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* L_0 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____postingList_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m8FC64E8A3B64461FDBB79AED4758F06246245E70_inline(L_0, List_1_get_Count_m8FC64E8A3B64461FDBB79AED4758F06246245E70_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0048;
	}

IL_000f:
	{
		// var wrapper = _postingList[i];
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* L_2 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____postingList_3;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_4;
		L_4 = List_1_get_Item_mB997DF3868015289B88CA6B4E60F5BEEF1EEEF82(L_2, L_3, List_1_get_Item_mB997DF3868015289B88CA6B4E60F5BEEF1EEEF82_RuntimeMethod_var);
		V_1 = L_4;
		// if (UnityEngine.Time.frameCount > wrapper.PostFrame)
		int32_t L_5;
		L_5 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___PostFrame_0;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		// SendMessage(wrapper.EventID, wrapper.Message);
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___EventID_1;
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___Message_2;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		UniEvent_SendMessage_m5D1723EFDA2FCD3225F934A3CC72EFEDFDF1EF6B(L_9, L_11, NULL);
		// _postingList.RemoveAt(i);
		List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* L_12 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____postingList_3;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m288B0EBC41E4D28C6257D68777179B8993A9144F(L_12, L_13, List_1_RemoveAt_m288B0EBC41E4D28C6257D68777179B8993A9144F_RuntimeMethod_var);
	}

IL_0044:
	{
		// for (int i = _postingList.Count - 1; i >= 0; i--)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0048:
	{
		// for (int i = _postingList.Count - 1; i >= 0; i--)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_ClearAll_m59842104F5AC145F860859E5E49EFE2E77E499F8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m1FC689CDF757B4E6807837DBDD17DE765E18D796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m994EA30B661E26B640066E762D68EC86EEF7C432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m086CDDB31D5B3B88A47D0CDA0DCD997266666F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7EB0CB156265055B34787F0AD900FEB77CA175C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m728B77F3527F6827D0F4B6EAEE5D322D333F6F04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m9199083C98DE0D0F9B5B928BABDB723F4E0AE3FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Clear_mB19052CB7A530107B27E40E3DE543B91FE307624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m42F6DCF773A8B6F8321ECE748A3D2574FFD6C0E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (int eventId in _listeners.Keys)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_0 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		NullCheck(L_0);
		KeyCollection_t28DBAAA9E79E98C8BC9C16670DF2B1A3CB584CC8* L_1;
		L_1 = Dictionary_2_get_Keys_m994EA30B661E26B640066E762D68EC86EEF7C432(L_0, Dictionary_2_get_Keys_m994EA30B661E26B640066E762D68EC86EEF7C432_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t3FCCBCB4A8CC4991A107EAE808C7F21B19204FFA L_2;
		L_2 = KeyCollection_GetEnumerator_m9199083C98DE0D0F9B5B928BABDB723F4E0AE3FD(L_1, KeyCollection_GetEnumerator_m9199083C98DE0D0F9B5B928BABDB723F4E0AE3FD_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m086CDDB31D5B3B88A47D0CDA0DCD997266666F6B((&V_0), Enumerator_Dispose_m086CDDB31D5B3B88A47D0CDA0DCD997266666F6B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0012_1:
			{
				// foreach (int eventId in _listeners.Keys)
				int32_t L_3;
				L_3 = Enumerator_get_Current_m728B77F3527F6827D0F4B6EAEE5D322D333F6F04_inline((&V_0), Enumerator_get_Current_m728B77F3527F6827D0F4B6EAEE5D322D333F6F04_RuntimeMethod_var);
				V_1 = L_3;
				// _listeners[eventId].Clear();
				il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
				Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_4 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
				int32_t L_5 = V_1;
				NullCheck(L_4);
				LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_6;
				L_6 = Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3(L_4, L_5, Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
				NullCheck(L_6);
				LinkedList_1_Clear_mB19052CB7A530107B27E40E3DE543B91FE307624(L_6, LinkedList_1_Clear_mB19052CB7A530107B27E40E3DE543B91FE307624_RuntimeMethod_var);
			}

IL_002a_1:
			{
				// foreach (int eventId in _listeners.Keys)
				bool L_7;
				L_7 = Enumerator_MoveNext_m7EB0CB156265055B34787F0AD900FEB77CA175C8((&V_0), Enumerator_MoveNext_m7EB0CB156265055B34787F0AD900FEB77CA175C8_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// _listeners.Clear();
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_8 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		NullCheck(L_8);
		Dictionary_2_Clear_m1FC689CDF757B4E6807837DBDD17DE765E18D796(L_8, Dictionary_2_Clear_m1FC689CDF757B4E6807837DBDD17DE765E18D796_RuntimeMethod_var);
		// _postingList.Clear();
		List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* L_9 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____postingList_3;
		NullCheck(L_9);
		List_1_Clear_m42F6DCF773A8B6F8321ECE748A3D2574FFD6C0E9_inline(L_9, List_1_Clear_m42F6DCF773A8B6F8321ECE748A3D2574FFD6C0E9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::AddListener(System.Type,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_AddListener_m3D0B125727F7F3BBA9B2C5690A8E7E28BE8667AA (Type_t* ___eventType0, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___listener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int eventId = eventType.GetHashCode();
		Type_t* L_0 = ___eventType0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// AddListener(eventId, listener);
		Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* L_2 = ___listener1;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		UniEvent_AddListener_m5F5A2A804D0E3446573BDD6D8973E0B8FE914261(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::AddListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_AddListener_m5F5A2A804D0E3446573BDD6D8973E0B8FE914261 (int32_t ___eventId0, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___listener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3A1872057EB0944EBBA65DB327A282172951B49F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_mE2361ADEFBE04B8BB586168308134D479FAFEBE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Contains_mACFD913D54D4CDF8887F5FC9DFF063C800BE1998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m42505BA1CA213E11DC92E3B3B74EA4F6163BAA24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_listeners.ContainsKey(eventId) == false)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_0 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_1 = ___eventId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10(L_0, L_1, Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// _listeners.Add(eventId, new LinkedList<Action<IEventMessage>>());
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_3 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_4 = ___eventId0;
		LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_5 = (LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF*)il2cpp_codegen_object_new(LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LinkedList_1__ctor_m42505BA1CA213E11DC92E3B3B74EA4F6163BAA24(L_5, LinkedList_1__ctor_m42505BA1CA213E11DC92E3B3B74EA4F6163BAA24_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_m3A1872057EB0944EBBA65DB327A282172951B49F(L_3, L_4, L_5, Dictionary_2_Add_m3A1872057EB0944EBBA65DB327A282172951B49F_RuntimeMethod_var);
	}

IL_001d:
	{
		// if (_listeners[eventId].Contains(listener) == false)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_6 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_7 = ___eventId0;
		NullCheck(L_6);
		LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_8;
		L_8 = Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3(L_6, L_7, Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* L_9 = ___listener1;
		NullCheck(L_8);
		bool L_10;
		L_10 = LinkedList_1_Contains_mACFD913D54D4CDF8887F5FC9DFF063C800BE1998(L_8, L_9, LinkedList_1_Contains_mACFD913D54D4CDF8887F5FC9DFF063C800BE1998_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0042;
		}
	}
	{
		// _listeners[eventId].AddLast(listener);
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_11 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_12 = ___eventId0;
		NullCheck(L_11);
		LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_13;
		L_13 = Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3(L_11, L_12, Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* L_14 = ___listener1;
		NullCheck(L_13);
		LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* L_15;
		L_15 = LinkedList_1_AddLast_mE2361ADEFBE04B8BB586168308134D479FAFEBE1(L_13, L_14, LinkedList_1_AddLast_mE2361ADEFBE04B8BB586168308134D479FAFEBE1_RuntimeMethod_var);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::RemoveListener(System.Type,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_RemoveListener_mFBA24BA9BCF369E322262570F7D950B9B7E4D154 (Type_t* ___eventType0, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___listener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int eventId = eventType.GetHashCode();
		Type_t* L_0 = ___eventType0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// RemoveListener(eventId, listener);
		Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* L_2 = ___listener1;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		UniEvent_RemoveListener_m04D975384AE8AD7C27DB618AB07F4E494A761282(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::RemoveListener(System.Int32,System.Action`1<UniFramework.Event.IEventMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_RemoveListener_m04D975384AE8AD7C27DB618AB07F4E494A761282 (int32_t ___eventId0, Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* ___listener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Contains_mACFD913D54D4CDF8887F5FC9DFF063C800BE1998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_Remove_mB32C5062EDBF5C0A73D95214A66E3563D21B6404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_listeners.ContainsKey(eventId))
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_0 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_1 = ___eventId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10(L_0, L_1, Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if (_listeners[eventId].Contains(listener))
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_3 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_4 = ___eventId0;
		NullCheck(L_3);
		LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_5;
		L_5 = Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3(L_3, L_4, Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* L_6 = ___listener1;
		NullCheck(L_5);
		bool L_7;
		L_7 = LinkedList_1_Contains_mACFD913D54D4CDF8887F5FC9DFF063C800BE1998(L_5, L_6, LinkedList_1_Contains_mACFD913D54D4CDF8887F5FC9DFF063C800BE1998_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// _listeners[eventId].Remove(listener);
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_8 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_9 = ___eventId0;
		NullCheck(L_8);
		LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_10;
		L_10 = Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3(L_8, L_9, Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* L_11 = ___listener1;
		NullCheck(L_10);
		bool L_12;
		L_12 = LinkedList_1_Remove_mB32C5062EDBF5C0A73D95214A66E3563D21B6404(L_10, L_11, LinkedList_1_Remove_mB32C5062EDBF5C0A73D95214A66E3563D21B6404_RuntimeMethod_var);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::SendMessage(UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_SendMessage_m6A7B6BCD47334E7250BBB07CA6D793BAC11103C6 (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int eventId = message.GetType().GetHashCode();
		RuntimeObject* L_0 = ___message0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		// SendMessage(eventId, message);
		RuntimeObject* L_3 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		UniEvent_SendMessage_m5D1723EFDA2FCD3225F934A3CC72EFEDFDF1EF6B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::SendMessage(System.Int32,UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_SendMessage_m5D1723EFDA2FCD3225F934A3CC72EFEDFDF1EF6B (int32_t ___eventId0, RuntimeObject* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Previous_mB3C50CEC425581741A8F483326CCBC2554FDC64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Value_m1750CCDCC98A292582074C90013331AEB70B2DCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m0D0EF607264A3BDCF2F99130B9252A91DC2894F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Last_m2FF7AE9F58E4A9D0B9A07215DF0232E4DC738150_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* V_0 = NULL;
	LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* V_1 = NULL;
	{
		// if (_listeners.ContainsKey(eventId) == false)
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_0 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_1 = ___eventId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10(L_0, L_1, Dictionary_2_ContainsKey_mD6FAFC6925C36B007BCE0ABD2F580F343692ED10_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// LinkedList<Action<IEventMessage>> listeners = _listeners[eventId];
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_3 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2;
		int32_t L_4 = ___eventId0;
		NullCheck(L_3);
		LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_5;
		L_5 = Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3(L_3, L_4, Dictionary_2_get_Item_m621BFAC8774FA81B9D5C486D0AF7E0AD9A7797D3_RuntimeMethod_var);
		V_0 = L_5;
		// if (listeners.Count > 0)
		LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LinkedList_1_get_Count_m0D0EF607264A3BDCF2F99130B9252A91DC2894F9_inline(L_6, LinkedList_1_get_Count_m0D0EF607264A3BDCF2F99130B9252A91DC2894F9_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// var currentNode = listeners.Last;
		LinkedList_1_t18FB1B6B119DD62EA1643036E7AABD67061709AF* L_8 = V_0;
		NullCheck(L_8);
		LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* L_9;
		L_9 = LinkedList_1_get_Last_m2FF7AE9F58E4A9D0B9A07215DF0232E4DC738150(L_8, LinkedList_1_get_Last_m2FF7AE9F58E4A9D0B9A07215DF0232E4DC738150_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_003f;
	}

IL_002c:
	{
		// currentNode.Value.Invoke(message);
		LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* L_10 = V_1;
		NullCheck(L_10);
		Action_1_tDB0177D47F61F8E2CFCD8A1D9FB30FE1EA43752C* L_11;
		L_11 = LinkedListNode_1_get_Value_m1750CCDCC98A292582074C90013331AEB70B2DCD_inline(L_10, LinkedListNode_1_get_Value_m1750CCDCC98A292582074C90013331AEB70B2DCD_RuntimeMethod_var);
		RuntimeObject* L_12 = ___message1;
		NullCheck(L_11);
		Action_1_Invoke_mD9B247D186744FD0E8A70AAB9549A5863F982763_inline(L_11, L_12, NULL);
		// currentNode = currentNode.Previous;
		LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* L_13 = V_1;
		NullCheck(L_13);
		LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* L_14;
		L_14 = LinkedListNode_1_get_Previous_mB3C50CEC425581741A8F483326CCBC2554FDC64D(L_13, LinkedListNode_1_get_Previous_mB3C50CEC425581741A8F483326CCBC2554FDC64D_RuntimeMethod_var);
		V_1 = L_14;
	}

IL_003f:
	{
		// while (currentNode != null)
		LinkedListNode_1_t6D2464BA5F1EA34D4B47A747793E32907166BCDA* L_15 = V_1;
		if (L_15)
		{
			goto IL_002c;
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::PostMessage(UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_PostMessage_mBE79C4D5E6B0C82DC00FCB6FDA82D4453617F9EA (RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int eventId = message.GetType().GetHashCode();
		RuntimeObject* L_0 = ___message0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		// PostMessage(eventId, message);
		RuntimeObject* L_3 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		UniEvent_PostMessage_m04A59CA31E7FA7DBAD3E9B42BD6D5075091E829B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::PostMessage(System.Int32,UniFramework.Event.IEventMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent_PostMessage_m04A59CA31E7FA7DBAD3E9B42BD6D5075091E829B (int32_t ___eventId0, RuntimeObject* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBA206AE062639666C6AF02C387494FD49F108D20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* V_0 = NULL;
	{
		// var wrapper = new PostWrapper();
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_0 = (PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1*)il2cpp_codegen_object_new(PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PostWrapper__ctor_m9DC6BDF7362782C7C7962142D262193810263F4F(L_0, NULL);
		V_0 = L_0;
		// wrapper.PostFrame = UnityEngine.Time.frameCount;
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_1 = V_0;
		int32_t L_2;
		L_2 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		NullCheck(L_1);
		L_1->___PostFrame_0 = L_2;
		// wrapper.EventID = eventId;
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_3 = V_0;
		int32_t L_4 = ___eventId0;
		NullCheck(L_3);
		L_3->___EventID_1 = L_4;
		// wrapper.Message = message;
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_5 = V_0;
		RuntimeObject* L_6 = ___message1;
		NullCheck(L_5);
		L_5->___Message_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___Message_2), (void*)L_6);
		// _postingList.Add(wrapper);
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* L_7 = ((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____postingList_3;
		PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_mBA206AE062639666C6AF02C387494FD49F108D20_inline(L_7, L_8, List_1_Add_mBA206AE062639666C6AF02C387494FD49F108D20_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEvent__cctor_m18D2222DE4DA3717C39AAB62F29B7C36685EB18E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7DDB2A5D332F5EB2A6B25DE9155FBF28AECAF9A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB9ECF65A465CA828FBF5B11988A4815F28A5604C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _isInitialize = false;
		((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// private static GameObject _driver = null;
		((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____driver_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____driver_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private static readonly Dictionary<int, LinkedList<Action<IEventMessage>>> _listeners = new Dictionary<int, LinkedList<Action<IEventMessage>>>(1000);
		Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2* L_0 = (Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2*)il2cpp_codegen_object_new(Dictionary_2_t3B41ACCA65F3541D6250086B95BB6F2F6B07ACB2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m7DDB2A5D332F5EB2A6B25DE9155FBF28AECAF9A1(L_0, ((int32_t)1000), Dictionary_2__ctor_m7DDB2A5D332F5EB2A6B25DE9155FBF28AECAF9A1_RuntimeMethod_var);
		((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____listeners_2), (void*)L_0);
		// private static readonly List<PostWrapper> _postingList = new List<PostWrapper>(1000);
		List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C* L_1 = (List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C*)il2cpp_codegen_object_new(List_1_t4001900C61C610B0EFB3B4BD0031A12483DEDD0C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mB9ECF65A465CA828FBF5B11988A4815F28A5604C(L_1, ((int32_t)1000), List_1__ctor_mB9ECF65A465CA828FBF5B11988A4815F28A5604C_RuntimeMethod_var);
		((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____postingList_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_StaticFields*)il2cpp_codegen_static_fields_for(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var))->____postingList_3), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Event.UniEvent/PostWrapper::OnRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostWrapper_OnRelease_mF75F7E8242B19F62D4F4C4DCF0EDB8041E0BB295 (PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* __this, const RuntimeMethod* method) 
{
	{
		// PostFrame = 0;
		__this->___PostFrame_0 = 0;
		// EventID = 0;
		__this->___EventID_1 = 0;
		// Message = null;
		__this->___Message_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Message_2), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEvent/PostWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostWrapper__ctor_m9DC6BDF7362782C7C7962142D262193810263F4F (PostWrapper_t7BFA66B21C221794D3265547D088991DEBEF5BE1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Event.UniEventDriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEventDriver_Update_mEC8E18160171D5C3DD166D215B5CC2A60150B301 (UniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniEvent.Update();
		il2cpp_codegen_runtime_class_init_inline(UniEvent_tF56BEF1D166B30FDD993B75E5ED400EFCB0EB02B_il2cpp_TypeInfo_var);
		UniEvent_Update_m216B89DA1528DC68B478242CB2998391F0FFB4FD(NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniEventDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniEventDriver__ctor_m9AABD5FD26FAFC0C5562CA8D593D27EF23BA44C2 (UniEventDriver_tF18E5364E198E0D1FF8A654E26F2F2D37484B375* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniFramework.Event.UniLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Log_m04CEED825A9D7EF7241FA950D5E3FFC56ABEEBEB (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Warning_mE5DABB2197F60A18C70CC319F43C3DA5E3B7BE21 (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Event.UniLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Error_mB297FC98C0F1C67314039BB72C8C7AA38669FA18 (String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Wrapper_get_Singleton_mAE21D5055B68531CB3DF6874C8A747C95B2FC444_inline (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, const RuntimeMethod* method) 
{
	{
		// public ISingleton Singleton { private set; get; }
		RuntimeObject* L_0 = __this->___U3CSingletonU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Wrapper_get_Priority_m35A044AE6B287D43388F6641065861612A9E5BC3_inline (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, const RuntimeMethod* method) 
{
	{
		// public int Priority { private set; get; }
		int32_t L_0 = __this->___U3CPriorityU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wrapper_set_Singleton_mB5879DA386BAA506EED5B60A64FFEE64E749913F_inline (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ISingleton Singleton { private set; get; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSingletonU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSingletonU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wrapper_set_Priority_mD86FDD300C52BC6960D1A626BAC6BD444CC0EC28_inline (Wrapper_t060D0D704D6C91D9F7B84DAD280202665030F44C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Priority { private set; get; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMachine_set_Owner_m7F38B0AA83838397074D3C3F9B20CD5BB52B74A4_inline (StateMachine_t4EACFCB395A0BF9581DE127D47017ADEC5268D0F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3COwnerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m8A0598EF34186B32CD19AAE697F86E8C19494FA4_gshared_inline (Enumerator_t9E8B7A8E56EF3FDE46965824E1C7001E47045468* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_mBFF1AE23B10EDF501026201C0427AA5820AECD82_gshared_inline (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LinkedListNode_1_get_Value_m8F67264DC98EF442B34CE4947044BCE18BF26053_gshared_inline (LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___item_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
