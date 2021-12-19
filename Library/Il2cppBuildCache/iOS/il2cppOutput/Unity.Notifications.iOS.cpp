#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[]
struct iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Unity.Notifications.iOS.AuthorizationRequest
struct AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6;
// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25;
// Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074;
// Unity.Notifications.iOS.iOSNotificationTrigger
struct iOSNotificationTrigger_t8E00E938D40866C0F592F785DFCA748E50C10391;
// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783;
// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C;
// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97;
// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3;
// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2;
// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback
struct ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
IL2CPP_EXTERN_C String_t* _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF095BC29C39D74DCA3923E99C34901B64AF08344;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_0_m67C0F85102ACAAA1ED1F04AF6EE6CF91D0DDA508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_1_mBE84624D0BBB75B3CE737EFE0D5C041749C6761D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6;;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke;;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074;;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com;;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5E5AAFCB36C9CFF85EE3134F392BDC6642307F03 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Unity.Notifications.iOS.AuthorizationRequest
struct AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676  : public RuntimeObject
{
public:
	// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::m_IsFinished
	bool ___m_IsFinished_0;
	// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::m_Granted
	bool ___m_Granted_1;
	// System.String Unity.Notifications.iOS.AuthorizationRequest::m_Error
	String_t* ___m_Error_2;
	// System.String Unity.Notifications.iOS.AuthorizationRequest::m_DeviceToken
	String_t* ___m_DeviceToken_3;

public:
	inline static int32_t get_offset_of_m_IsFinished_0() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___m_IsFinished_0)); }
	inline bool get_m_IsFinished_0() const { return ___m_IsFinished_0; }
	inline bool* get_address_of_m_IsFinished_0() { return &___m_IsFinished_0; }
	inline void set_m_IsFinished_0(bool value)
	{
		___m_IsFinished_0 = value;
	}

	inline static int32_t get_offset_of_m_Granted_1() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___m_Granted_1)); }
	inline bool get_m_Granted_1() const { return ___m_Granted_1; }
	inline bool* get_address_of_m_Granted_1() { return &___m_Granted_1; }
	inline void set_m_Granted_1(bool value)
	{
		___m_Granted_1 = value;
	}

	inline static int32_t get_offset_of_m_Error_2() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___m_Error_2)); }
	inline String_t* get_m_Error_2() const { return ___m_Error_2; }
	inline String_t** get_address_of_m_Error_2() { return &___m_Error_2; }
	inline void set_m_Error_2(String_t* value)
	{
		___m_Error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Error_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceToken_3() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___m_DeviceToken_3)); }
	inline String_t* get_m_DeviceToken_3() const { return ___m_DeviceToken_3; }
	inline String_t** get_address_of_m_DeviceToken_3() { return &___m_DeviceToken_3; }
	inline void set_m_DeviceToken_3(String_t* value)
	{
		___m_DeviceToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceToken_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.Notifications.iOS.iOSNotificationCenter
struct iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008  : public RuntimeObject
{
public:

public:
};

struct iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields
{
public:
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_Initialized
	bool ___s_Initialized_0;
	// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnNotificationReceived
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___s_OnNotificationReceived_1;
	// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnRemoteNotificationReceived
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___s_OnRemoteNotificationReceived_2;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_OnNotificationReceived_1() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_OnNotificationReceived_1)); }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * get_s_OnNotificationReceived_1() const { return ___s_OnNotificationReceived_1; }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 ** get_address_of_s_OnNotificationReceived_1() { return &___s_OnNotificationReceived_1; }
	inline void set_s_OnNotificationReceived_1(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * value)
	{
		___s_OnNotificationReceived_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnNotificationReceived_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnRemoteNotificationReceived_2() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_OnRemoteNotificationReceived_2)); }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * get_s_OnRemoteNotificationReceived_2() const { return ___s_OnRemoteNotificationReceived_2; }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 ** get_address_of_s_OnRemoteNotificationReceived_2() { return &___s_OnRemoteNotificationReceived_2; }
	inline void set_s_OnRemoteNotificationReceived_2(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * value)
	{
		___s_OnRemoteNotificationReceived_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnRemoteNotificationReceived_2), (void*)value);
	}
};


// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields
{
public:
	// Unity.Notifications.iOS.iOSNotificationCenter/<>c Unity.Notifications.iOS.iOSNotificationCenter/<>c::<>9
	U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSAuthorizationRequestData::granted
	int32_t ___granted_0;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::error
	String_t* ___error_1;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::deviceToken
	String_t* ___deviceToken_2;

public:
	inline static int32_t get_offset_of_granted_0() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___granted_0)); }
	inline int32_t get_granted_0() const { return ___granted_0; }
	inline int32_t* get_address_of_granted_0() { return &___granted_0; }
	inline void set_granted_0(int32_t value)
	{
		___granted_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_deviceToken_2() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___deviceToken_2)); }
	inline String_t* get_deviceToken_2() const { return ___deviceToken_2; }
	inline String_t** get_address_of_deviceToken_2() { return &___deviceToken_2; }
	inline void set_deviceToken_2(String_t* value)
	{
		___deviceToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceToken_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke
{
	int32_t ___granted_0;
	char* ___error_1;
	char* ___deviceToken_2;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com
{
	int32_t ___granted_0;
	Il2CppChar* ___error_1;
	Il2CppChar* ___deviceToken_2;
};

// Unity.Notifications.iOS.iOSNotificationPushTrigger
struct iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28 
{
public:
	union
	{
		struct
		{
		};
		uint8_t iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28__padding[1];
	};

public:
};


// Unity.Notifications.iOS.iOSNotificationSettings
struct iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::authorizationStatus
	int32_t ___authorizationStatus_0;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::notificationCenterSetting
	int32_t ___notificationCenterSetting_1;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::lockScreenSetting
	int32_t ___lockScreenSetting_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::carPlaySetting
	int32_t ___carPlaySetting_3;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertSetting
	int32_t ___alertSetting_4;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::badgeSetting
	int32_t ___badgeSetting_5;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::soundSetting
	int32_t ___soundSetting_6;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertStyle
	int32_t ___alertStyle_7;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::showPreviewsSetting
	int32_t ___showPreviewsSetting_8;

public:
	inline static int32_t get_offset_of_authorizationStatus_0() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___authorizationStatus_0)); }
	inline int32_t get_authorizationStatus_0() const { return ___authorizationStatus_0; }
	inline int32_t* get_address_of_authorizationStatus_0() { return &___authorizationStatus_0; }
	inline void set_authorizationStatus_0(int32_t value)
	{
		___authorizationStatus_0 = value;
	}

	inline static int32_t get_offset_of_notificationCenterSetting_1() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___notificationCenterSetting_1)); }
	inline int32_t get_notificationCenterSetting_1() const { return ___notificationCenterSetting_1; }
	inline int32_t* get_address_of_notificationCenterSetting_1() { return &___notificationCenterSetting_1; }
	inline void set_notificationCenterSetting_1(int32_t value)
	{
		___notificationCenterSetting_1 = value;
	}

	inline static int32_t get_offset_of_lockScreenSetting_2() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___lockScreenSetting_2)); }
	inline int32_t get_lockScreenSetting_2() const { return ___lockScreenSetting_2; }
	inline int32_t* get_address_of_lockScreenSetting_2() { return &___lockScreenSetting_2; }
	inline void set_lockScreenSetting_2(int32_t value)
	{
		___lockScreenSetting_2 = value;
	}

	inline static int32_t get_offset_of_carPlaySetting_3() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___carPlaySetting_3)); }
	inline int32_t get_carPlaySetting_3() const { return ___carPlaySetting_3; }
	inline int32_t* get_address_of_carPlaySetting_3() { return &___carPlaySetting_3; }
	inline void set_carPlaySetting_3(int32_t value)
	{
		___carPlaySetting_3 = value;
	}

	inline static int32_t get_offset_of_alertSetting_4() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___alertSetting_4)); }
	inline int32_t get_alertSetting_4() const { return ___alertSetting_4; }
	inline int32_t* get_address_of_alertSetting_4() { return &___alertSetting_4; }
	inline void set_alertSetting_4(int32_t value)
	{
		___alertSetting_4 = value;
	}

	inline static int32_t get_offset_of_badgeSetting_5() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___badgeSetting_5)); }
	inline int32_t get_badgeSetting_5() const { return ___badgeSetting_5; }
	inline int32_t* get_address_of_badgeSetting_5() { return &___badgeSetting_5; }
	inline void set_badgeSetting_5(int32_t value)
	{
		___badgeSetting_5 = value;
	}

	inline static int32_t get_offset_of_soundSetting_6() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___soundSetting_6)); }
	inline int32_t get_soundSetting_6() const { return ___soundSetting_6; }
	inline int32_t* get_address_of_soundSetting_6() { return &___soundSetting_6; }
	inline void set_soundSetting_6(int32_t value)
	{
		___soundSetting_6 = value;
	}

	inline static int32_t get_offset_of_alertStyle_7() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___alertStyle_7)); }
	inline int32_t get_alertStyle_7() const { return ___alertStyle_7; }
	inline int32_t* get_address_of_alertStyle_7() { return &___alertStyle_7; }
	inline void set_alertStyle_7(int32_t value)
	{
		___alertStyle_7 = value;
	}

	inline static int32_t get_offset_of_showPreviewsSetting_8() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___showPreviewsSetting_8)); }
	inline int32_t get_showPreviewsSetting_8() const { return ___showPreviewsSetting_8; }
	inline int32_t* get_address_of_showPreviewsSetting_8() { return &___showPreviewsSetting_8; }
	inline void set_showPreviewsSetting_8(int32_t value)
	{
		___showPreviewsSetting_8 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::timeInterval
	int32_t ___timeInterval_0;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_timeInterval_0() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923, ___timeInterval_0)); }
	inline int32_t get_timeInterval_0() const { return ___timeInterval_0; }
	inline int32_t* get_address_of_timeInterval_0() { return &___timeInterval_0; }
	inline void set_timeInterval_0(int32_t value)
	{
		___timeInterval_0 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923, ___U3CRepeatsU3Ek__BackingField_1)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_1() const { return ___U3CRepeatsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_1() { return &___U3CRepeatsU3Ek__BackingField_1; }
	inline void set_U3CRepeatsU3Ek__BackingField_1(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.Notifications.iOS.AuthorizationOption
struct AuthorizationOption_t5B1B8BF3567E4A74BC9A83A804EF2087D55037B1 
{
public:
	// System.Int32 Unity.Notifications.iOS.AuthorizationOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthorizationOption_t5B1B8BF3567E4A74BC9A83A804EF2087D55037B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Notifications.iOS.PresentationOption
struct PresentationOption_t467B22F0F0ADD6BFC2DAFE468B6858EC2D8BBC0D 
{
public:
	// System.Int32 Unity.Notifications.iOS.PresentationOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PresentationOption_t467B22F0F0ADD6BFC2DAFE468B6858EC2D8BBC0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 
{
public:
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Year>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Month>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Day>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Hour>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Minute>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Second>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CYearU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CYearU3Ek__BackingField_0)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CYearU3Ek__BackingField_0() const { return ___U3CYearU3Ek__BackingField_0; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CYearU3Ek__BackingField_0() { return &___U3CYearU3Ek__BackingField_0; }
	inline void set_U3CYearU3Ek__BackingField_0(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CYearU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMonthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CMonthU3Ek__BackingField_1)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMonthU3Ek__BackingField_1() const { return ___U3CMonthU3Ek__BackingField_1; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMonthU3Ek__BackingField_1() { return &___U3CMonthU3Ek__BackingField_1; }
	inline void set_U3CMonthU3Ek__BackingField_1(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMonthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CDayU3Ek__BackingField_2)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CDayU3Ek__BackingField_2() const { return ___U3CDayU3Ek__BackingField_2; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CDayU3Ek__BackingField_2() { return &___U3CDayU3Ek__BackingField_2; }
	inline void set_U3CDayU3Ek__BackingField_2(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CDayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHourU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CHourU3Ek__BackingField_3)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CHourU3Ek__BackingField_3() const { return ___U3CHourU3Ek__BackingField_3; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CHourU3Ek__BackingField_3() { return &___U3CHourU3Ek__BackingField_3; }
	inline void set_U3CHourU3Ek__BackingField_3(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CHourU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMinuteU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CMinuteU3Ek__BackingField_4)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMinuteU3Ek__BackingField_4() const { return ___U3CMinuteU3Ek__BackingField_4; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMinuteU3Ek__BackingField_4() { return &___U3CMinuteU3Ek__BackingField_4; }
	inline void set_U3CMinuteU3Ek__BackingField_4(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMinuteU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSecondU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CSecondU3Ek__BackingField_5)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CSecondU3Ek__BackingField_5() const { return ___U3CSecondU3Ek__BackingField_5; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CSecondU3Ek__BackingField_5() { return &___U3CSecondU3Ek__BackingField_5; }
	inline void set_U3CSecondU3Ek__BackingField_5(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CSecondU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CRepeatsU3Ek__BackingField_6)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_6() const { return ___U3CRepeatsU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_6() { return &___U3CRepeatsU3Ek__BackingField_6; }
	inline void set_U3CRepeatsU3Ek__BackingField_6(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CRepeatsU3Ek__BackingField_6;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CRepeatsU3Ek__BackingField_6;
};

// Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 
{
public:
	// System.String Unity.Notifications.iOS.iOSNotificationData::identifier
	String_t* ___identifier_0;
	// System.String Unity.Notifications.iOS.iOSNotificationData::title
	String_t* ___title_1;
	// System.String Unity.Notifications.iOS.iOSNotificationData::body
	String_t* ___body_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::badge
	int32_t ___badge_3;
	// System.String Unity.Notifications.iOS.iOSNotificationData::subtitle
	String_t* ___subtitle_4;
	// System.String Unity.Notifications.iOS.iOSNotificationData::categoryIdentifier
	String_t* ___categoryIdentifier_5;
	// System.String Unity.Notifications.iOS.iOSNotificationData::threadIdentifier
	String_t* ___threadIdentifier_6;
	// System.IntPtr Unity.Notifications.iOS.iOSNotificationData::userInfo
	intptr_t ___userInfo_7;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::triggerType
	int32_t ___triggerType_8;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::repeats
	bool ___repeats_9;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::timeTriggerInterval
	int32_t ___timeTriggerInterval_10;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerYear
	int32_t ___calendarTriggerYear_11;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerMonth
	int32_t ___calendarTriggerMonth_12;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerDay
	int32_t ___calendarTriggerDay_13;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerHour
	int32_t ___calendarTriggerHour_14;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerMinute
	int32_t ___calendarTriggerMinute_15;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerSecond
	int32_t ___calendarTriggerSecond_16;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerCenterX
	float ___locationTriggerCenterX_17;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerCenterY
	float ___locationTriggerCenterY_18;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerRadius
	float ___locationTriggerRadius_19;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::locationTriggerNotifyOnEntry
	bool ___locationTriggerNotifyOnEntry_20;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::locationTriggerNotifyOnExit
	bool ___locationTriggerNotifyOnExit_21;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_1), (void*)value);
	}

	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___body_2)); }
	inline String_t* get_body_2() const { return ___body_2; }
	inline String_t** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(String_t* value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_2), (void*)value);
	}

	inline static int32_t get_offset_of_badge_3() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___badge_3)); }
	inline int32_t get_badge_3() const { return ___badge_3; }
	inline int32_t* get_address_of_badge_3() { return &___badge_3; }
	inline void set_badge_3(int32_t value)
	{
		___badge_3 = value;
	}

	inline static int32_t get_offset_of_subtitle_4() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___subtitle_4)); }
	inline String_t* get_subtitle_4() const { return ___subtitle_4; }
	inline String_t** get_address_of_subtitle_4() { return &___subtitle_4; }
	inline void set_subtitle_4(String_t* value)
	{
		___subtitle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subtitle_4), (void*)value);
	}

	inline static int32_t get_offset_of_categoryIdentifier_5() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___categoryIdentifier_5)); }
	inline String_t* get_categoryIdentifier_5() const { return ___categoryIdentifier_5; }
	inline String_t** get_address_of_categoryIdentifier_5() { return &___categoryIdentifier_5; }
	inline void set_categoryIdentifier_5(String_t* value)
	{
		___categoryIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryIdentifier_5), (void*)value);
	}

	inline static int32_t get_offset_of_threadIdentifier_6() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___threadIdentifier_6)); }
	inline String_t* get_threadIdentifier_6() const { return ___threadIdentifier_6; }
	inline String_t** get_address_of_threadIdentifier_6() { return &___threadIdentifier_6; }
	inline void set_threadIdentifier_6(String_t* value)
	{
		___threadIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadIdentifier_6), (void*)value);
	}

	inline static int32_t get_offset_of_userInfo_7() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___userInfo_7)); }
	inline intptr_t get_userInfo_7() const { return ___userInfo_7; }
	inline intptr_t* get_address_of_userInfo_7() { return &___userInfo_7; }
	inline void set_userInfo_7(intptr_t value)
	{
		___userInfo_7 = value;
	}

	inline static int32_t get_offset_of_triggerType_8() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___triggerType_8)); }
	inline int32_t get_triggerType_8() const { return ___triggerType_8; }
	inline int32_t* get_address_of_triggerType_8() { return &___triggerType_8; }
	inline void set_triggerType_8(int32_t value)
	{
		___triggerType_8 = value;
	}

	inline static int32_t get_offset_of_repeats_9() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___repeats_9)); }
	inline bool get_repeats_9() const { return ___repeats_9; }
	inline bool* get_address_of_repeats_9() { return &___repeats_9; }
	inline void set_repeats_9(bool value)
	{
		___repeats_9 = value;
	}

	inline static int32_t get_offset_of_timeTriggerInterval_10() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___timeTriggerInterval_10)); }
	inline int32_t get_timeTriggerInterval_10() const { return ___timeTriggerInterval_10; }
	inline int32_t* get_address_of_timeTriggerInterval_10() { return &___timeTriggerInterval_10; }
	inline void set_timeTriggerInterval_10(int32_t value)
	{
		___timeTriggerInterval_10 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerYear_11() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerYear_11)); }
	inline int32_t get_calendarTriggerYear_11() const { return ___calendarTriggerYear_11; }
	inline int32_t* get_address_of_calendarTriggerYear_11() { return &___calendarTriggerYear_11; }
	inline void set_calendarTriggerYear_11(int32_t value)
	{
		___calendarTriggerYear_11 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerMonth_12() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerMonth_12)); }
	inline int32_t get_calendarTriggerMonth_12() const { return ___calendarTriggerMonth_12; }
	inline int32_t* get_address_of_calendarTriggerMonth_12() { return &___calendarTriggerMonth_12; }
	inline void set_calendarTriggerMonth_12(int32_t value)
	{
		___calendarTriggerMonth_12 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerDay_13() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerDay_13)); }
	inline int32_t get_calendarTriggerDay_13() const { return ___calendarTriggerDay_13; }
	inline int32_t* get_address_of_calendarTriggerDay_13() { return &___calendarTriggerDay_13; }
	inline void set_calendarTriggerDay_13(int32_t value)
	{
		___calendarTriggerDay_13 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerHour_14() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerHour_14)); }
	inline int32_t get_calendarTriggerHour_14() const { return ___calendarTriggerHour_14; }
	inline int32_t* get_address_of_calendarTriggerHour_14() { return &___calendarTriggerHour_14; }
	inline void set_calendarTriggerHour_14(int32_t value)
	{
		___calendarTriggerHour_14 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerMinute_15() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerMinute_15)); }
	inline int32_t get_calendarTriggerMinute_15() const { return ___calendarTriggerMinute_15; }
	inline int32_t* get_address_of_calendarTriggerMinute_15() { return &___calendarTriggerMinute_15; }
	inline void set_calendarTriggerMinute_15(int32_t value)
	{
		___calendarTriggerMinute_15 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerSecond_16() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___calendarTriggerSecond_16)); }
	inline int32_t get_calendarTriggerSecond_16() const { return ___calendarTriggerSecond_16; }
	inline int32_t* get_address_of_calendarTriggerSecond_16() { return &___calendarTriggerSecond_16; }
	inline void set_calendarTriggerSecond_16(int32_t value)
	{
		___calendarTriggerSecond_16 = value;
	}

	inline static int32_t get_offset_of_locationTriggerCenterX_17() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerCenterX_17)); }
	inline float get_locationTriggerCenterX_17() const { return ___locationTriggerCenterX_17; }
	inline float* get_address_of_locationTriggerCenterX_17() { return &___locationTriggerCenterX_17; }
	inline void set_locationTriggerCenterX_17(float value)
	{
		___locationTriggerCenterX_17 = value;
	}

	inline static int32_t get_offset_of_locationTriggerCenterY_18() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerCenterY_18)); }
	inline float get_locationTriggerCenterY_18() const { return ___locationTriggerCenterY_18; }
	inline float* get_address_of_locationTriggerCenterY_18() { return &___locationTriggerCenterY_18; }
	inline void set_locationTriggerCenterY_18(float value)
	{
		___locationTriggerCenterY_18 = value;
	}

	inline static int32_t get_offset_of_locationTriggerRadius_19() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerRadius_19)); }
	inline float get_locationTriggerRadius_19() const { return ___locationTriggerRadius_19; }
	inline float* get_address_of_locationTriggerRadius_19() { return &___locationTriggerRadius_19; }
	inline void set_locationTriggerRadius_19(float value)
	{
		___locationTriggerRadius_19 = value;
	}

	inline static int32_t get_offset_of_locationTriggerNotifyOnEntry_20() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerNotifyOnEntry_20)); }
	inline bool get_locationTriggerNotifyOnEntry_20() const { return ___locationTriggerNotifyOnEntry_20; }
	inline bool* get_address_of_locationTriggerNotifyOnEntry_20() { return &___locationTriggerNotifyOnEntry_20; }
	inline void set_locationTriggerNotifyOnEntry_20(bool value)
	{
		___locationTriggerNotifyOnEntry_20 = value;
	}

	inline static int32_t get_offset_of_locationTriggerNotifyOnExit_21() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___locationTriggerNotifyOnExit_21)); }
	inline bool get_locationTriggerNotifyOnExit_21() const { return ___locationTriggerNotifyOnExit_21; }
	inline bool* get_address_of_locationTriggerNotifyOnExit_21() { return &___locationTriggerNotifyOnExit_21; }
	inline void set_locationTriggerNotifyOnExit_21(bool value)
	{
		___locationTriggerNotifyOnExit_21 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke
{
	char* ___identifier_0;
	char* ___title_1;
	char* ___body_2;
	int32_t ___badge_3;
	char* ___subtitle_4;
	char* ___categoryIdentifier_5;
	char* ___threadIdentifier_6;
	intptr_t ___userInfo_7;
	int32_t ___triggerType_8;
	int32_t ___repeats_9;
	int32_t ___timeTriggerInterval_10;
	int32_t ___calendarTriggerYear_11;
	int32_t ___calendarTriggerMonth_12;
	int32_t ___calendarTriggerDay_13;
	int32_t ___calendarTriggerHour_14;
	int32_t ___calendarTriggerMinute_15;
	int32_t ___calendarTriggerSecond_16;
	float ___locationTriggerCenterX_17;
	float ___locationTriggerCenterY_18;
	float ___locationTriggerRadius_19;
	int32_t ___locationTriggerNotifyOnEntry_20;
	int32_t ___locationTriggerNotifyOnExit_21;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Il2CppChar* ___title_1;
	Il2CppChar* ___body_2;
	int32_t ___badge_3;
	Il2CppChar* ___subtitle_4;
	Il2CppChar* ___categoryIdentifier_5;
	Il2CppChar* ___threadIdentifier_6;
	intptr_t ___userInfo_7;
	int32_t ___triggerType_8;
	int32_t ___repeats_9;
	int32_t ___timeTriggerInterval_10;
	int32_t ___calendarTriggerYear_11;
	int32_t ___calendarTriggerMonth_12;
	int32_t ___calendarTriggerDay_13;
	int32_t ___calendarTriggerHour_14;
	int32_t ___calendarTriggerMinute_15;
	int32_t ___calendarTriggerSecond_16;
	float ___locationTriggerCenterX_17;
	float ___locationTriggerCenterY_18;
	float ___locationTriggerRadius_19;
	int32_t ___locationTriggerNotifyOnEntry_20;
	int32_t ___locationTriggerNotifyOnExit_21;
};

// Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 
{
public:
	// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Center>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CCenterU3Ek__BackingField_0;
	// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_1;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnEntry>k__BackingField
	bool ___U3CNotifyOnEntryU3Ek__BackingField_2;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnExit>k__BackingField
	bool ___U3CNotifyOnExitU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CRadiusU3Ek__BackingField_1)); }
	inline float get_U3CRadiusU3Ek__BackingField_1() const { return ___U3CRadiusU3Ek__BackingField_1; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_1() { return &___U3CRadiusU3Ek__BackingField_1; }
	inline void set_U3CRadiusU3Ek__BackingField_1(float value)
	{
		___U3CRadiusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnEntryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CNotifyOnEntryU3Ek__BackingField_2)); }
	inline bool get_U3CNotifyOnEntryU3Ek__BackingField_2() const { return ___U3CNotifyOnEntryU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CNotifyOnEntryU3Ek__BackingField_2() { return &___U3CNotifyOnEntryU3Ek__BackingField_2; }
	inline void set_U3CNotifyOnEntryU3Ek__BackingField_2(bool value)
	{
		___U3CNotifyOnEntryU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnExitU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CNotifyOnExitU3Ek__BackingField_3)); }
	inline bool get_U3CNotifyOnExitU3Ek__BackingField_3() const { return ___U3CNotifyOnExitU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CNotifyOnExitU3Ek__BackingField_3() { return &___U3CNotifyOnExitU3Ek__BackingField_3; }
	inline void set_U3CNotifyOnExitU3Ek__BackingField_3(bool value)
	{
		___U3CNotifyOnExitU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25  : public RuntimeObject
{
public:
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotification::data
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotification::userInfo
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25, ___data_0)); }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  get_data_0() const { return ___data_0; }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_userInfo_1() { return static_cast<int32_t>(offsetof(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25, ___userInfo_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_userInfo_1() const { return ___userInfo_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_userInfo_1() { return &___userInfo_1; }
	inline void set_userInfo_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___userInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userInfo_1), (void*)value);
	}
};


// Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 
{
public:
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotificationWithUserInfo::data
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationWithUserInfo::userInfo
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4, ___data_0)); }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  get_data_0() const { return ___data_0; }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_userInfo_1() { return static_cast<int32_t>(offsetof(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4, ___userInfo_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_userInfo_1() const { return ___userInfo_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_userInfo_1() { return &___userInfo_1; }
	inline void set_userInfo_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___userInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_pinvoke
{
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ___data_0;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_com
{
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com ___data_0;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo_1;
};

// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>
struct Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A 
{
public:
	// T System.Nullable`1::value
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A, ___value_0)); }
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  get_value_0() const { return ___value_0; }
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___userInfo_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback
struct ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[]
struct iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  m_Items[1];

public:
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userInfo_1), (void*)NULL);
		#endif
	}
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userInfo_1), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_gshared (Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A * __this, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___value0, const RuntimeMethod* method);

// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mA347E373A60EDFC6856FCA6EC0CF621B234F05BB (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_mA3E2D1AD523FF6C4C9CBEA7AE41B2B1C2523564E (intptr_t ___request0, int32_t ___options1, bool ___registerRemote2, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_IsFinished(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Granted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_DeviceToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_m7DC585CF58AB71A010E84315578CFAAA106AAB7A (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_mDFBE0CFA22C928F25BD0709D779C5B83BFDC8746 (const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared)(__this, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m29D1C4F1B0B4CD039CA79165ECF517593D1E67EE (const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_m7670980F54E912CF48CC6929E0B0575E328124A8 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Data_m7EB258537988162DEFFE93308B6FC3A016749489 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_m5CDAADD1F4958302625FB22BAD63593E91E5F9CD (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::set_ForegroundPresentationOption(Unity.Notifications.iOS.PresentationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ForegroundPresentationOption_mD8228915A03D3B94FDC32569CF7BD658B3472C6B (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Year(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Month(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Day(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Hour(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Minute(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Second(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Repeats(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_mE7EE23A3B5802F36B73989102962E66E5EFB0E25 (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m55BF113D85F5E185FD0B86F0D3DF75B69661AC83 (const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotification::GetDataForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  iOSNotification_GetDataForSending_m8B36AD41A5E6E0039846F8AD37D91275252046F0 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_mFB56853D4A5CBD056AD3374419B66FE0D7A62037 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_mC4515C33F416325FCFA88885FA16D6EA36EF2DFB (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m7E8C66D7D84868BA73309E146A47115CBB7C99C2 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6 (intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveNSDictionaryKeyValue(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m53B50E456C34B0155E11E14EBBD4C29A559B940F (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mB24D9D7D169B8384EBD773792A76D0545AC42A95 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m67AF6FD539392DF3CBCF7A40BAAE3A5C608D71B0 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mF7134CA2A482738F45D5978507BDA83E7D010DF4 (intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData1, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationDataToDataWithUserInfo(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_m8E3E3E8AB02ABC8B01AED8DA30A250622ECD2228 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mC892316249248FB30569A740C2CCBDEFA31FAB31 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m465028106FA4DB73BA45A8EB58A8EB3B4B3EECD9 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationsWrapper::NSDictionaryToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * iOSNotificationsWrapper_NSDictionaryToCs_m86A5419F56A711E282DC9CA5FF91D27D7E11F6A9 (intptr_t ___dict0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m1F39C033F7FA89FFD35A01C0127CE81BF5311875 (intptr_t ___request0, int32_t ___options1, bool ___registerForRemote2, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  iOSNotificationsWrapper__GetNotificationSettings_mD864C4ABFB87255CDDDC4CDF506BF8F8262B73E1 (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsDictionaryToObjC(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsDictionaryToObjC_m3E1526276CC2334DFEE98FEABB246105B56D2213 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m3816DF182302EA4EAFCA03C14812726B9EFA05A7 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataArray_m03F428EAEB185C866014DCE7B0000D24386D1F3F (int32_t* ___count0, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::MarshalAndFreeNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_mB15A8B0C07BB72655507792D09FF72E3A83F998C (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataArray_mD43963E0EEC6C38DF359B90367E302CABA5710B4 (int32_t* ___count0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A (Type_t * ___t0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3 (intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_mA20D38BF020461371DC2F7764BB00480610873BD (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddItemToNSDictionary(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddItemToNSDictionary_m859349FD97C575EBE05A413766060D64231F6FB7 (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback__ctor_m4B65D4BA92D77AE03C50211EFDCA8B881ECEB5CA (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadNSDictionary(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadNSDictionary_mA0AA22CB19E29AA6C694741760361704724B46EE (intptr_t ___handle0, intptr_t ___nsDict1, ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * ___callback2, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m8783BF138FA9F3D96A391FBC14AD5A218027BF1E (int32_t ___badge0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_mAD93A8C52BC70B24D006AB5C8A89DF26643148BC (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4893DF4E2971137B170098F975DB1991F94FBC89 (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_m7BF8F9AEEBC8E77D4B047A8389FCC597020AC3BE (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::.ctor(!0)
inline void Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF (Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A * __this, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A *, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 , const RuntimeMethod*))Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL _RequestAuthorization(intptr_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _ScheduleLocalNotification(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetNotificationReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetRemoteNotificationReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetAuthorizationRequestReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  DEFAULT_CALL _GetNotificationSettings();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetScheduledNotificationDataArray(int32_t*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetDeliveredNotificationDataArray(int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveScheduledNotification(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllScheduledNotifications();
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveDeliveredNotification(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetApplicationBadge(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetApplicationBadge();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetAppOpenedUsingNotification();
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllDeliveredNotifications();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetLastNotificationData();
IL2CPP_EXTERN_C void DEFAULT_CALL _FreeUnmanagediOSNotificationDataArray(intptr_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddItemToNSDictionary(intptr_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _ReadNSDictionary(intptr_t, intptr_t, Il2CppMethodPointer);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::get_IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthorizationRequest_get_IsFinished_m71305C657CAF3F80819962A6FC8872C82568EBE0 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// get { lock (this) { return m_IsFinished; } }
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// get { lock (this) { return m_IsFinished; } }
		bool L_1 = __this->get_m_IsFinished_0();
		V_2 = L_1;
		IL2CPP_LEAVE(0x1F, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_3 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		}

IL_001e:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
	}

IL_001f:
	{
		// get { lock (this) { return m_IsFinished; } }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_IsFinished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_IsFinished = value; }
		bool L_0 = ___value0;
		__this->set_m_IsFinished_0(L_0);
		// private set { m_IsFinished = value; }
		return;
	}
}
// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::get_Granted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthorizationRequest_get_Granted_mC17CDA24EC97805C2EEE69A250AAED7F95604A39 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// get { lock (this) { return m_Granted; } }
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// get { lock (this) { return m_Granted; } }
		bool L_1 = __this->get_m_Granted_1();
		V_2 = L_1;
		IL2CPP_LEAVE(0x1F, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_3 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		}

IL_001e:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
	}

IL_001f:
	{
		// get { lock (this) { return m_Granted; } }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Granted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_Granted = value; }
		bool L_0 = ___value0;
		__this->set_m_Granted_1(L_0);
		// private set { m_Granted = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.AuthorizationRequest::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthorizationRequest_get_Error_mA12FAED4DD3FB6100D0B064B7960D1863D190E85 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// get { lock (this) { return m_Error; } }
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// get { lock (this) { return m_Error; } }
		String_t* L_1 = __this->get_m_Error_2();
		V_2 = L_1;
		IL2CPP_LEAVE(0x1F, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_3 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		}

IL_001e:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
	}

IL_001f:
	{
		// get { lock (this) { return m_Error; } }
		String_t* L_4 = V_2;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_Error = value; }
		String_t* L_0 = ___value0;
		__this->set_m_Error_2(L_0);
		// private set { m_Error = value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.AuthorizationRequest::get_DeviceToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthorizationRequest_get_DeviceToken_m965C39D2B7A3E50E0C9958929B531FA3A5FEFBA1 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// get { lock (this) { return m_DeviceToken; } }
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// get { lock (this) { return m_DeviceToken; } }
		String_t* L_1 = __this->get_m_DeviceToken_3();
		V_2 = L_1;
		IL2CPP_LEAVE(0x1F, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_3 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		}

IL_001e:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
	}

IL_001f:
	{
		// get { lock (this) { return m_DeviceToken; } }
		String_t* L_4 = V_2;
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_DeviceToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_DeviceToken = value; }
		String_t* L_0 = ___value0;
		__this->set_m_DeviceToken_3(L_0);
		// private set { m_DeviceToken = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest__cctor_mF6BC753706C83C1DEC74EC66356EFEF9A6061BBB (const RuntimeMethod* method)
{
	{
		// iOSNotificationsWrapper.RegisterAuthorizationRequestCallback();
		iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mA347E373A60EDFC6856FCA6EC0CF621B234F05BB(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::.ctor(Unity.Notifications.iOS.AuthorizationOption,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest__ctor_m9525545D7AC78C911ABC4D18A94D2DA4A0BA5C68 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, int32_t ___authorizationOption0, bool ___registerForRemoteNotifications1, const RuntimeMethod* method)
{
	{
		// public AuthorizationRequest(AuthorizationOption authorizationOption, bool registerForRemoteNotifications)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// var handle = GCHandle.Alloc(this);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_0;
		L_0 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(__this, /*hidden argument*/NULL);
		// iOSNotificationsWrapper.RequestAuthorization(GCHandle.ToIntPtr(handle), (int)authorizationOption, registerForRemoteNotifications);
		intptr_t L_1;
		L_1 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___authorizationOption0;
		bool L_3 = ___registerForRemoteNotifications1;
		iOSNotificationsWrapper_RequestAuthorization_mA3E2D1AD523FF6C4C9CBEA7AE41B2B1C2523564E((intptr_t)L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData0, const RuntimeMethod* method)
{
	AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// IsFinished = true;
		AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336_inline(__this, (bool)1, /*hidden argument*/NULL);
		// Granted = requestData.granted != 0;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_1 = ___requestData0;
		int32_t L_2 = L_1.get_granted_0();
		AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07_inline(__this, (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// Error = requestData.error;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_3 = ___requestData0;
		String_t* L_4 = L_3.get_error_1();
		AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF_inline(__this, L_4, /*hidden argument*/NULL);
		// DeviceToken = requestData.deviceToken;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_5 = ___requestData0;
		String_t* L_6 = L_5.get_deviceToken_2();
		AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447_inline(__this, L_6, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x46, FINALLY_003c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0045;
			}
		}

IL_003f:
		{
			AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0045:
		{
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mF7134CA2A482738F45D5978507BDA83E7D010DF4 (intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// var handle = GCHandle.FromIntPtr(request);
		intptr_t L_0 = ___request0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var req = handle.Target as AuthorizationRequest;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// req.OnAuthorizationRequestCompleted(requestData);
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_3 = ___requestData1;
		NullCheck(((AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 *)IsInstClass((RuntimeObject*)L_2, AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var)));
		AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408(((AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 *)IsInstClass((RuntimeObject*)L_2, AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var)), L_3, /*hidden argument*/NULL);
		// }
		goto IL_0029;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{ // begin catch(System.Exception)
		// Debug.LogException(e);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_Dispose_m1F6691D34F6D844872F3539D57B3DEB0A56A8D74 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m1B7389133A43D709FB46E5D6243953A1D14CFBD5 (EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m3E3DB4779359F51DB7256A1D9C9C8097145CB031 (IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled)
{
	marshaled.___granted_0 = unmarshaled.get_granted_0();
	marshaled.___error_1 = il2cpp_codegen_marshal_string(unmarshaled.get_error_1());
	marshaled.___deviceToken_2 = il2cpp_codegen_marshal_string(unmarshaled.get_deviceToken_2());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled)
{
	int32_t unmarshaled_granted_temp_0 = 0;
	unmarshaled_granted_temp_0 = marshaled.___granted_0;
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_string_result(marshaled.___error_1));
	unmarshaled.set_deviceToken_2(il2cpp_codegen_marshal_string_result(marshaled.___deviceToken_2));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___deviceToken_2);
	marshaled.___deviceToken_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled)
{
	marshaled.___granted_0 = unmarshaled.get_granted_0();
	marshaled.___error_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_error_1());
	marshaled.___deviceToken_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_deviceToken_2());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled)
{
	int32_t unmarshaled_granted_temp_0 = 0;
	unmarshaled_granted_temp_0 = marshaled.___granted_0;
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_bstring_result(marshaled.___error_1));
	unmarshaled.set_deviceToken_2(il2cpp_codegen_marshal_bstring_result(marshaled.___deviceToken_2));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceToken_2);
	marshaled.___deviceToken_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.iOS.iOSNotification::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Identifier_m1CE4470A3B31A3641B8D64ABD0031EE60C361DBA (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.identifier = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_identifier_0(L_1);
		// set { data.identifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_CategoryIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_CategoryIdentifier_mECC330742B4318BB85E0298208A7B05CC2677A4F (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.categoryIdentifier = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_categoryIdentifier_5(L_1);
		// set { data.categoryIdentifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ThreadIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ThreadIdentifier_m992B4B56DF5825EF652448A4F23FA925A5EBF930 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.threadIdentifier = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_threadIdentifier_6(L_1);
		// set { data.threadIdentifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Title_m5543C334BAC8EB7E0CB41C0FAB190BF0E8A49CE3 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.title = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_title_1(L_1);
		// set { data.title = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Subtitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Subtitle_m41A15FB72EF7B7709A765873B86F1CFFE96BEBEA (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.subtitle = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_subtitle_4(L_1);
		// set { data.subtitle = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Body(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Body_m60222C7FE1A0B5A8959C1B2F62301B343079EBB5 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.body = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_body_2(L_1);
		// set { data.body = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_m5CDAADD1F4958302625FB22BAD63593E91E5F9CD (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B3_2 = NULL;
	{
		// set { userInfo["showInForeground"] = value ? "YES" : "NO"; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_userInfo_1();
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		NullCheck(G_B3_2);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// set { userInfo["showInForeground"] = value ? "YES" : "NO"; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ForegroundPresentationOption(Unity.Notifications.iOS.PresentationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ForegroundPresentationOption_mD8228915A03D3B94FDC32569CF7BD658B3472C6B (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// set { userInfo["showInForegroundPresentationOptions"] = ((int)value).ToString(); }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_userInfo_1();
		int32_t L_1 = ___value0;
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_0, _stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687, L_2, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// set { userInfo["showInForegroundPresentationOptions"] = ((int)value).ToString(); }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Data_m7EB258537988162DEFFE93308B6FC3A016749489 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { userInfo["data"] = value; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_userInfo_1();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_0, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, L_1, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// set { userInfo["data"] = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Trigger(Unity.Notifications.iOS.iOSNotificationTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_2;
	memset((&V_2), 0, sizeof(V_2));
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605  V_3;
	memset((&V_3), 0, sizeof(V_3));
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B8_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B9_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B11_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B12_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B14_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B15_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B17_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B18_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B20_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B21_1 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B23_0 = NULL;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * G_B24_1 = NULL;
	{
		// if (value is iOSNotificationTimeIntervalTrigger)
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var)))
		{
			goto IL_0061;
		}
	}
	{
		// var trigger = (iOSNotificationTimeIntervalTrigger)value;
		RuntimeObject* L_1 = ___value0;
		V_0 = ((*(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)UnBox(L_1, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationTimeIntervalTrigger.Type;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_2 = __this->get_address_of_data_0();
		int32_t L_3;
		L_3 = iOSNotificationTimeIntervalTrigger_get_Type_m7DC585CF58AB71A010E84315578CFAAA106AAB7A(/*hidden argument*/NULL);
		L_2->set_triggerType_8(L_3);
		// data.timeTriggerInterval = trigger.timeInterval;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_4 = __this->get_address_of_data_0();
		iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  L_5 = V_0;
		int32_t L_6 = L_5.get_timeInterval_0();
		L_4->set_timeTriggerInterval_10(L_6);
		// if (trigger.Repeats && trigger.timeInterval < 60)
		bool L_7;
		L_7 = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)(&V_0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  L_8 = V_0;
		int32_t L_9 = L_8.get_timeInterval_0();
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)60))))
		{
			goto IL_004e;
		}
	}
	{
		// throw new ArgumentException("Time interval must be 60 seconds or greater for repeating notifications.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF095BC29C39D74DCA3923E99C34901B64AF08344)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586_RuntimeMethod_var)));
	}

IL_004e:
	{
		// data.repeats = trigger.Repeats;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_11 = __this->get_address_of_data_0();
		bool L_12;
		L_12 = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)(&V_0), /*hidden argument*/NULL);
		L_11->set_repeats_9(L_12);
		// }
		return;
	}

IL_0061:
	{
		// else if (value is iOSNotificationCalendarTrigger)
		RuntimeObject* L_13 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_13, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var)))
		{
			goto IL_01aa;
		}
	}
	{
		// var trigger = (iOSNotificationCalendarTrigger)value;
		RuntimeObject* L_14 = ___value0;
		V_1 = ((*(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)UnBox(L_14, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationCalendarTrigger.Type;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_15 = __this->get_address_of_data_0();
		int32_t L_16;
		L_16 = iOSNotificationCalendarTrigger_get_Type_mDFBE0CFA22C928F25BD0709D779C5B83BFDC8746(/*hidden argument*/NULL);
		L_15->set_triggerType_8(L_16);
		// data.calendarTriggerYear = trigger.Year != null ? trigger.Year.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_17 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_18;
		L_18 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_18;
		bool L_19;
		L_19 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B7_0 = L_17;
		if (L_19)
		{
			G_B8_0 = L_17;
			goto IL_009d;
		}
	}
	{
		G_B9_0 = (-1);
		G_B9_1 = G_B7_0;
		goto IL_00ac;
	}

IL_009d:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_20;
		L_20 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_20;
		int32_t L_21;
		L_21 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
	}

IL_00ac:
	{
		G_B9_1->set_calendarTriggerYear_11(G_B9_0);
		// data.calendarTriggerMonth = trigger.Month != null ? trigger.Month.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_22 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_23;
		L_23 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_23;
		bool L_24;
		L_24 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B10_0 = L_22;
		if (L_24)
		{
			G_B11_0 = L_22;
			goto IL_00cb;
		}
	}
	{
		G_B12_0 = (-1);
		G_B12_1 = G_B10_0;
		goto IL_00da;
	}

IL_00cb:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_25;
		L_25 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_25;
		int32_t L_26;
		L_26 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B12_0 = L_26;
		G_B12_1 = G_B11_0;
	}

IL_00da:
	{
		G_B12_1->set_calendarTriggerMonth_12(G_B12_0);
		// data.calendarTriggerDay = trigger.Day != null ? trigger.Day.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_27 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_28;
		L_28 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_28;
		bool L_29;
		L_29 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B13_0 = L_27;
		if (L_29)
		{
			G_B14_0 = L_27;
			goto IL_00f9;
		}
	}
	{
		G_B15_0 = (-1);
		G_B15_1 = G_B13_0;
		goto IL_0108;
	}

IL_00f9:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_30;
		L_30 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_30;
		int32_t L_31;
		L_31 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B15_0 = L_31;
		G_B15_1 = G_B14_0;
	}

IL_0108:
	{
		G_B15_1->set_calendarTriggerDay_13(G_B15_0);
		// data.calendarTriggerHour = trigger.Hour != null ? trigger.Hour.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_32 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_33;
		L_33 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_33;
		bool L_34;
		L_34 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B16_0 = L_32;
		if (L_34)
		{
			G_B17_0 = L_32;
			goto IL_0127;
		}
	}
	{
		G_B18_0 = (-1);
		G_B18_1 = G_B16_0;
		goto IL_0136;
	}

IL_0127:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_35;
		L_35 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_35;
		int32_t L_36;
		L_36 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B18_0 = L_36;
		G_B18_1 = G_B17_0;
	}

IL_0136:
	{
		G_B18_1->set_calendarTriggerHour_14(G_B18_0);
		// data.calendarTriggerMinute = trigger.Minute != null ? trigger.Minute.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_37 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_38;
		L_38 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_38;
		bool L_39;
		L_39 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B19_0 = L_37;
		if (L_39)
		{
			G_B20_0 = L_37;
			goto IL_0155;
		}
	}
	{
		G_B21_0 = (-1);
		G_B21_1 = G_B19_0;
		goto IL_0164;
	}

IL_0155:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_40;
		L_40 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_40;
		int32_t L_41;
		L_41 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B21_0 = L_41;
		G_B21_1 = G_B20_0;
	}

IL_0164:
	{
		G_B21_1->set_calendarTriggerMinute_15(G_B21_0);
		// data.calendarTriggerSecond = trigger.Second != null ? trigger.Second.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_42 = __this->get_address_of_data_0();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_43;
		L_43 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_43;
		bool L_44;
		L_44 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B22_0 = L_42;
		if (L_44)
		{
			G_B23_0 = L_42;
			goto IL_0183;
		}
	}
	{
		G_B24_0 = (-1);
		G_B24_1 = G_B22_0;
		goto IL_0192;
	}

IL_0183:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_45;
		L_45 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_45;
		int32_t L_46;
		L_46 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B24_0 = L_46;
		G_B24_1 = G_B23_0;
	}

IL_0192:
	{
		G_B24_1->set_calendarTriggerSecond_16(G_B24_0);
		// data.repeats = trigger.Repeats;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_47 = __this->get_address_of_data_0();
		bool L_48;
		L_48 = iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), /*hidden argument*/NULL);
		L_47->set_repeats_9(L_48);
		// }
		return;
	}

IL_01aa:
	{
		// else if (value is iOSNotificationLocationTrigger)
		RuntimeObject* L_49 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_49, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var)))
		{
			goto IL_022e;
		}
	}
	{
		// var trigger = (iOSNotificationLocationTrigger)value;
		RuntimeObject* L_50 = ___value0;
		V_3 = ((*(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)UnBox(L_50, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationLocationTrigger.Type;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_51 = __this->get_address_of_data_0();
		int32_t L_52;
		L_52 = iOSNotificationLocationTrigger_get_Type_m29D1C4F1B0B4CD039CA79165ECF517593D1E67EE(/*hidden argument*/NULL);
		L_51->set_triggerType_8(L_52);
		// data.locationTriggerCenterX = trigger.Center.x;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_53 = __this->get_address_of_data_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		L_54 = iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_3), /*hidden argument*/NULL);
		float L_55 = L_54.get_x_0();
		L_53->set_locationTriggerCenterX_17(L_55);
		// data.locationTriggerCenterY = trigger.Center.y;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_56 = __this->get_address_of_data_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57;
		L_57 = iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_3), /*hidden argument*/NULL);
		float L_58 = L_57.get_y_1();
		L_56->set_locationTriggerCenterY_18(L_58);
		// data.locationTriggerNotifyOnEntry = trigger.NotifyOnEntry;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_59 = __this->get_address_of_data_0();
		bool L_60;
		L_60 = iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_3), /*hidden argument*/NULL);
		L_59->set_locationTriggerNotifyOnEntry_20(L_60);
		// data.locationTriggerNotifyOnExit = trigger.NotifyOnExit;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_61 = __this->get_address_of_data_0();
		bool L_62;
		L_62 = iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_3), /*hidden argument*/NULL);
		L_61->set_locationTriggerNotifyOnExit_21(L_62);
		// data.locationTriggerRadius = trigger.Radius;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_63 = __this->get_address_of_data_0();
		float L_64;
		L_64 = iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_3), /*hidden argument*/NULL);
		L_63->set_locationTriggerRadius_19(L_64);
		// }
		return;
	}

IL_022e:
	{
		// else if (value is iOSNotificationPushTrigger)
		RuntimeObject* L_65 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_65, iOSNotificationPushTrigger_tC3A3576FC00D3D22F9B7DCFE77A8DBF6D1B08B28_il2cpp_TypeInfo_var)))
		{
			goto IL_0242;
		}
	}
	{
		// data.triggerType = 3;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_66 = __this->get_address_of_data_0();
		L_66->set_triggerType_8(3);
	}

IL_0242:
	{
		// }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_m7670980F54E912CF48CC6929E0B0575E328124A8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return Math.Abs(DateTime.Now.ToString("yyMMddHHmmssffffff").GetHashCode()).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = il2cpp_codegen_abs(L_2);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m4EBBEFB3A261C60DC402F75851F9658595E2E4B4 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	{
		// public iOSNotification() : this(GenerateUniqueID())
		String_t* L_0;
		L_0 = iOSNotification_GenerateUniqueID_m7670980F54E912CF48CC6929E0B0575E328124A8(/*hidden argument*/NULL);
		iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public iOSNotification(string identifier)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// data = new iOSNotificationData();
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		il2cpp_codegen_initobj(L_0, sizeof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 ));
		// data.identifier = identifier;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_1 = __this->get_address_of_data_0();
		String_t* L_2 = ___identifier0;
		L_1->set_identifier_0(L_2);
		// data.title = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_3 = __this->get_address_of_data_0();
		L_3->set_title_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.body = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_4 = __this->get_address_of_data_0();
		L_4->set_body_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.badge = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_5 = __this->get_address_of_data_0();
		L_5->set_badge_3((-1));
		// data.subtitle = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_6 = __this->get_address_of_data_0();
		L_6->set_subtitle_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.categoryIdentifier = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_7 = __this->get_address_of_data_0();
		L_7->set_categoryIdentifier_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.threadIdentifier = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_8 = __this->get_address_of_data_0();
		L_8->set_threadIdentifier_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.triggerType = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_9 = __this->get_address_of_data_0();
		L_9->set_triggerType_8((-1));
		// data.repeats = false;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_10 = __this->get_address_of_data_0();
		L_10->set_repeats_9((bool)0);
		// data.timeTriggerInterval = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_11 = __this->get_address_of_data_0();
		L_11->set_timeTriggerInterval_10((-1));
		// data.calendarTriggerYear = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_12 = __this->get_address_of_data_0();
		L_12->set_calendarTriggerYear_11((-1));
		// data.calendarTriggerMonth = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_13 = __this->get_address_of_data_0();
		L_13->set_calendarTriggerMonth_12((-1));
		// data.calendarTriggerDay = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_14 = __this->get_address_of_data_0();
		L_14->set_calendarTriggerDay_13((-1));
		// data.calendarTriggerHour = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_15 = __this->get_address_of_data_0();
		L_15->set_calendarTriggerHour_14((-1));
		// data.calendarTriggerMinute = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_16 = __this->get_address_of_data_0();
		L_16->set_calendarTriggerMinute_15((-1));
		// data.calendarTriggerSecond = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_17 = __this->get_address_of_data_0();
		L_17->set_calendarTriggerSecond_16((-1));
		// data.locationTriggerCenterX = 0f;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_18 = __this->get_address_of_data_0();
		L_18->set_locationTriggerCenterX_17((0.0f));
		// data.locationTriggerCenterY = 0f;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_19 = __this->get_address_of_data_0();
		L_19->set_locationTriggerCenterY_18((0.0f));
		// data.locationTriggerRadius = 2f;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_20 = __this->get_address_of_data_0();
		L_20->set_locationTriggerRadius_19((2.0f));
		// data.locationTriggerNotifyOnEntry = true;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_21 = __this->get_address_of_data_0();
		L_21->set_locationTriggerNotifyOnEntry_20((bool)1);
		// data.locationTriggerNotifyOnExit = false;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_22 = __this->get_address_of_data_0();
		L_22->set_locationTriggerNotifyOnExit_21((bool)0);
		// data.userInfo = IntPtr.Zero;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_23 = __this->get_address_of_data_0();
		L_23->set_userInfo_7((intptr_t)(0));
		// userInfo = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_24 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_24, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_userInfo_1(L_24);
		// Data = "";
		iOSNotification_set_Data_m7EB258537988162DEFFE93308B6FC3A016749489(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// ShowInForeground = false;
		iOSNotification_set_ShowInForeground_m5CDAADD1F4958302625FB22BAD63593E91E5F9CD(__this, (bool)0, /*hidden argument*/NULL);
		// ForegroundPresentationOption = PresentationOption.Alert | PresentationOption.Sound;
		iOSNotification_set_ForegroundPresentationOption_mD8228915A03D3B94FDC32569CF7BD658B3472C6B(__this, 6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m7E8C66D7D84868BA73309E146A47115CBB7C99C2 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method)
{
	{
		// internal iOSNotification(iOSNotificationWithUserInfo data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.data = data.data;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_0 = ___data0;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_1 = L_0.get_data_0();
		__this->set_data_0(L_1);
		// userInfo = data.userInfo;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_2 = ___data0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = L_2.get_userInfo_1();
		__this->set_userInfo_1(L_3);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotification::GetDataForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  iOSNotification_GetDataForSending_m8B36AD41A5E6E0039846F8AD37D91275252046F0 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (data.identifier == null)
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_identifier_0();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// data.identifier = GenerateUniqueID();
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_2 = __this->get_address_of_data_0();
		String_t* L_3;
		L_3 = iOSNotification_GenerateUniqueID_m7670980F54E912CF48CC6929E0B0575E328124A8(/*hidden argument*/NULL);
		L_2->set_identifier_0(L_3);
	}

IL_001d:
	{
		// ret.data = data;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_4 = __this->get_data_0();
		(&V_0)->set_data_0(L_4);
		// ret.userInfo = userInfo;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = __this->get_userInfo_1();
		(&V_0)->set_userInfo_1(L_5);
		// return ret;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_6 = V_0;
		return L_6;
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke_back(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke_cleanup(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com_back(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com_cleanup(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_mDFBE0CFA22C928F25BD0709D779C5B83BFDC8746 (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.CalendarTrigger; } }
		return ((int32_t)10);
	}
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Year(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CYearU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Month(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CMonthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Day(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CDayU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Hour(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CHourU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Minute(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CMinuteU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Second(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CSecondU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m55BF113D85F5E185FD0B86F0D3DF75B69661AC83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// iOSNotificationsWrapper.RegisterOnReceivedCallback();
		iOSNotificationsWrapper_RegisterOnReceivedCallback_mE7EE23A3B5802F36B73989102962E66E5EFB0E25(/*hidden argument*/NULL);
		// return s_Initialized = true;
		int32_t L_1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_Initialized_0((bool)L_1);
		return (bool)L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::ScheduleNotification(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_ScheduleNotification_m7C35154B28D1731A1E1D0750148D809BA95D5025 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m55BF113D85F5E185FD0B86F0D3DF75B69661AC83(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// iOSNotificationsWrapper.ScheduleLocalNotification(notification.GetDataForSending());
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_1 = ___notification0;
		NullCheck(L_1);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_2;
		L_2 = iOSNotification_GetDataForSending_m8B36AD41A5E6E0039846F8AD37D91275252046F0(L_1, /*hidden argument*/NULL);
		iOSNotificationsWrapper_ScheduleLocalNotification_mFB56853D4A5CBD056AD3374419B66FE0D7A62037(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveAllScheduledNotifications_m653738A08FBAC034D29BE7F4F9E6C81E3BFD8895 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m55BF113D85F5E185FD0B86F0D3DF75B69661AC83(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveAllScheduledNotifications();
		iOSNotificationsWrapper__RemoveAllScheduledNotifications_mC4515C33F416325FCFA88885FA16D6EA36EF2DFB(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mC892316249248FB30569A740C2CCBDEFA31FAB31 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_0 = ___data0;
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_1 = (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *)il2cpp_codegen_object_new(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m7E8C66D7D84868BA73309E146A47115CBB7C99C2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// s_OnRemoteNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_2 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceived_2();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m465028106FA4DB73BA45A8EB58A8EB3B4B3EECD9 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_0 = ___data0;
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_1 = (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *)il2cpp_codegen_object_new(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m7E8C66D7D84868BA73309E146A47115CBB7C99C2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// s_OnNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_2 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnNotificationReceived_1();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter__cctor_mFB20764B4C19A8B7CBCFDCA043F8A820D81340F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__34_0_m67C0F85102ACAAA1ED1F04AF6EE6CF91D0DDA508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__34_1_mBE84624D0BBB75B3CE737EFE0D5C041749C6761D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate {};
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_0 = ((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_1 = (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_0_m67C0F85102ACAAA1ED1F04AF6EE6CF91D0DDA508_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_OnNotificationReceived_1(L_1);
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate {};
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_2 = ((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_3 = (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_1_mBE84624D0BBB75B3CE737EFE0D5C041749C6761D_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_OnRemoteNotificationReceived_2(L_3);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_string(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_string(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_string(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_string(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_string(unmarshaled.get_threadIdentifier_6());
	marshaled.___userInfo_7 = unmarshaled.get_userInfo_7();
	marshaled.___triggerType_8 = unmarshaled.get_triggerType_8();
	marshaled.___repeats_9 = static_cast<int32_t>(unmarshaled.get_repeats_9());
	marshaled.___timeTriggerInterval_10 = unmarshaled.get_timeTriggerInterval_10();
	marshaled.___calendarTriggerYear_11 = unmarshaled.get_calendarTriggerYear_11();
	marshaled.___calendarTriggerMonth_12 = unmarshaled.get_calendarTriggerMonth_12();
	marshaled.___calendarTriggerDay_13 = unmarshaled.get_calendarTriggerDay_13();
	marshaled.___calendarTriggerHour_14 = unmarshaled.get_calendarTriggerHour_14();
	marshaled.___calendarTriggerMinute_15 = unmarshaled.get_calendarTriggerMinute_15();
	marshaled.___calendarTriggerSecond_16 = unmarshaled.get_calendarTriggerSecond_16();
	marshaled.___locationTriggerCenterX_17 = unmarshaled.get_locationTriggerCenterX_17();
	marshaled.___locationTriggerCenterY_18 = unmarshaled.get_locationTriggerCenterY_18();
	marshaled.___locationTriggerRadius_19 = unmarshaled.get_locationTriggerRadius_19();
	marshaled.___locationTriggerNotifyOnEntry_20 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnEntry_20());
	marshaled.___locationTriggerNotifyOnExit_21 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnExit_21());
}
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_string_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_string_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_string_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_string_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_string_result(marshaled.___threadIdentifier_6));
	intptr_t unmarshaled_userInfo_temp_7;
	memset((&unmarshaled_userInfo_temp_7), 0, sizeof(unmarshaled_userInfo_temp_7));
	unmarshaled_userInfo_temp_7 = marshaled.___userInfo_7;
	unmarshaled.set_userInfo_7(unmarshaled_userInfo_temp_7);
	int32_t unmarshaled_triggerType_temp_8 = 0;
	unmarshaled_triggerType_temp_8 = marshaled.___triggerType_8;
	unmarshaled.set_triggerType_8(unmarshaled_triggerType_temp_8);
	bool unmarshaled_repeats_temp_9 = false;
	unmarshaled_repeats_temp_9 = static_cast<bool>(marshaled.___repeats_9);
	unmarshaled.set_repeats_9(unmarshaled_repeats_temp_9);
	int32_t unmarshaled_timeTriggerInterval_temp_10 = 0;
	unmarshaled_timeTriggerInterval_temp_10 = marshaled.___timeTriggerInterval_10;
	unmarshaled.set_timeTriggerInterval_10(unmarshaled_timeTriggerInterval_temp_10);
	int32_t unmarshaled_calendarTriggerYear_temp_11 = 0;
	unmarshaled_calendarTriggerYear_temp_11 = marshaled.___calendarTriggerYear_11;
	unmarshaled.set_calendarTriggerYear_11(unmarshaled_calendarTriggerYear_temp_11);
	int32_t unmarshaled_calendarTriggerMonth_temp_12 = 0;
	unmarshaled_calendarTriggerMonth_temp_12 = marshaled.___calendarTriggerMonth_12;
	unmarshaled.set_calendarTriggerMonth_12(unmarshaled_calendarTriggerMonth_temp_12);
	int32_t unmarshaled_calendarTriggerDay_temp_13 = 0;
	unmarshaled_calendarTriggerDay_temp_13 = marshaled.___calendarTriggerDay_13;
	unmarshaled.set_calendarTriggerDay_13(unmarshaled_calendarTriggerDay_temp_13);
	int32_t unmarshaled_calendarTriggerHour_temp_14 = 0;
	unmarshaled_calendarTriggerHour_temp_14 = marshaled.___calendarTriggerHour_14;
	unmarshaled.set_calendarTriggerHour_14(unmarshaled_calendarTriggerHour_temp_14);
	int32_t unmarshaled_calendarTriggerMinute_temp_15 = 0;
	unmarshaled_calendarTriggerMinute_temp_15 = marshaled.___calendarTriggerMinute_15;
	unmarshaled.set_calendarTriggerMinute_15(unmarshaled_calendarTriggerMinute_temp_15);
	int32_t unmarshaled_calendarTriggerSecond_temp_16 = 0;
	unmarshaled_calendarTriggerSecond_temp_16 = marshaled.___calendarTriggerSecond_16;
	unmarshaled.set_calendarTriggerSecond_16(unmarshaled_calendarTriggerSecond_temp_16);
	float unmarshaled_locationTriggerCenterX_temp_17 = 0.0f;
	unmarshaled_locationTriggerCenterX_temp_17 = marshaled.___locationTriggerCenterX_17;
	unmarshaled.set_locationTriggerCenterX_17(unmarshaled_locationTriggerCenterX_temp_17);
	float unmarshaled_locationTriggerCenterY_temp_18 = 0.0f;
	unmarshaled_locationTriggerCenterY_temp_18 = marshaled.___locationTriggerCenterY_18;
	unmarshaled.set_locationTriggerCenterY_18(unmarshaled_locationTriggerCenterY_temp_18);
	float unmarshaled_locationTriggerRadius_temp_19 = 0.0f;
	unmarshaled_locationTriggerRadius_temp_19 = marshaled.___locationTriggerRadius_19;
	unmarshaled.set_locationTriggerRadius_19(unmarshaled_locationTriggerRadius_temp_19);
	bool unmarshaled_locationTriggerNotifyOnEntry_temp_20 = false;
	unmarshaled_locationTriggerNotifyOnEntry_temp_20 = static_cast<bool>(marshaled.___locationTriggerNotifyOnEntry_20);
	unmarshaled.set_locationTriggerNotifyOnEntry_20(unmarshaled_locationTriggerNotifyOnEntry_temp_20);
	bool unmarshaled_locationTriggerNotifyOnExit_temp_21 = false;
	unmarshaled_locationTriggerNotifyOnExit_temp_21 = static_cast<bool>(marshaled.___locationTriggerNotifyOnExit_21);
	unmarshaled.set_locationTriggerNotifyOnExit_21(unmarshaled_locationTriggerNotifyOnExit_temp_21);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_bstring(unmarshaled.get_threadIdentifier_6());
	marshaled.___userInfo_7 = unmarshaled.get_userInfo_7();
	marshaled.___triggerType_8 = unmarshaled.get_triggerType_8();
	marshaled.___repeats_9 = static_cast<int32_t>(unmarshaled.get_repeats_9());
	marshaled.___timeTriggerInterval_10 = unmarshaled.get_timeTriggerInterval_10();
	marshaled.___calendarTriggerYear_11 = unmarshaled.get_calendarTriggerYear_11();
	marshaled.___calendarTriggerMonth_12 = unmarshaled.get_calendarTriggerMonth_12();
	marshaled.___calendarTriggerDay_13 = unmarshaled.get_calendarTriggerDay_13();
	marshaled.___calendarTriggerHour_14 = unmarshaled.get_calendarTriggerHour_14();
	marshaled.___calendarTriggerMinute_15 = unmarshaled.get_calendarTriggerMinute_15();
	marshaled.___calendarTriggerSecond_16 = unmarshaled.get_calendarTriggerSecond_16();
	marshaled.___locationTriggerCenterX_17 = unmarshaled.get_locationTriggerCenterX_17();
	marshaled.___locationTriggerCenterY_18 = unmarshaled.get_locationTriggerCenterY_18();
	marshaled.___locationTriggerRadius_19 = unmarshaled.get_locationTriggerRadius_19();
	marshaled.___locationTriggerNotifyOnEntry_20 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnEntry_20());
	marshaled.___locationTriggerNotifyOnExit_21 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnExit_21());
}
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_bstring_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_bstring_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_bstring_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_bstring_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_bstring_result(marshaled.___threadIdentifier_6));
	intptr_t unmarshaled_userInfo_temp_7;
	memset((&unmarshaled_userInfo_temp_7), 0, sizeof(unmarshaled_userInfo_temp_7));
	unmarshaled_userInfo_temp_7 = marshaled.___userInfo_7;
	unmarshaled.set_userInfo_7(unmarshaled_userInfo_temp_7);
	int32_t unmarshaled_triggerType_temp_8 = 0;
	unmarshaled_triggerType_temp_8 = marshaled.___triggerType_8;
	unmarshaled.set_triggerType_8(unmarshaled_triggerType_temp_8);
	bool unmarshaled_repeats_temp_9 = false;
	unmarshaled_repeats_temp_9 = static_cast<bool>(marshaled.___repeats_9);
	unmarshaled.set_repeats_9(unmarshaled_repeats_temp_9);
	int32_t unmarshaled_timeTriggerInterval_temp_10 = 0;
	unmarshaled_timeTriggerInterval_temp_10 = marshaled.___timeTriggerInterval_10;
	unmarshaled.set_timeTriggerInterval_10(unmarshaled_timeTriggerInterval_temp_10);
	int32_t unmarshaled_calendarTriggerYear_temp_11 = 0;
	unmarshaled_calendarTriggerYear_temp_11 = marshaled.___calendarTriggerYear_11;
	unmarshaled.set_calendarTriggerYear_11(unmarshaled_calendarTriggerYear_temp_11);
	int32_t unmarshaled_calendarTriggerMonth_temp_12 = 0;
	unmarshaled_calendarTriggerMonth_temp_12 = marshaled.___calendarTriggerMonth_12;
	unmarshaled.set_calendarTriggerMonth_12(unmarshaled_calendarTriggerMonth_temp_12);
	int32_t unmarshaled_calendarTriggerDay_temp_13 = 0;
	unmarshaled_calendarTriggerDay_temp_13 = marshaled.___calendarTriggerDay_13;
	unmarshaled.set_calendarTriggerDay_13(unmarshaled_calendarTriggerDay_temp_13);
	int32_t unmarshaled_calendarTriggerHour_temp_14 = 0;
	unmarshaled_calendarTriggerHour_temp_14 = marshaled.___calendarTriggerHour_14;
	unmarshaled.set_calendarTriggerHour_14(unmarshaled_calendarTriggerHour_temp_14);
	int32_t unmarshaled_calendarTriggerMinute_temp_15 = 0;
	unmarshaled_calendarTriggerMinute_temp_15 = marshaled.___calendarTriggerMinute_15;
	unmarshaled.set_calendarTriggerMinute_15(unmarshaled_calendarTriggerMinute_temp_15);
	int32_t unmarshaled_calendarTriggerSecond_temp_16 = 0;
	unmarshaled_calendarTriggerSecond_temp_16 = marshaled.___calendarTriggerSecond_16;
	unmarshaled.set_calendarTriggerSecond_16(unmarshaled_calendarTriggerSecond_temp_16);
	float unmarshaled_locationTriggerCenterX_temp_17 = 0.0f;
	unmarshaled_locationTriggerCenterX_temp_17 = marshaled.___locationTriggerCenterX_17;
	unmarshaled.set_locationTriggerCenterX_17(unmarshaled_locationTriggerCenterX_temp_17);
	float unmarshaled_locationTriggerCenterY_temp_18 = 0.0f;
	unmarshaled_locationTriggerCenterY_temp_18 = marshaled.___locationTriggerCenterY_18;
	unmarshaled.set_locationTriggerCenterY_18(unmarshaled_locationTriggerCenterY_temp_18);
	float unmarshaled_locationTriggerRadius_temp_19 = 0.0f;
	unmarshaled_locationTriggerRadius_temp_19 = marshaled.___locationTriggerRadius_19;
	unmarshaled.set_locationTriggerRadius_19(unmarshaled_locationTriggerRadius_temp_19);
	bool unmarshaled_locationTriggerNotifyOnEntry_temp_20 = false;
	unmarshaled_locationTriggerNotifyOnEntry_temp_20 = static_cast<bool>(marshaled.___locationTriggerNotifyOnEntry_20);
	unmarshaled.set_locationTriggerNotifyOnEntry_20(unmarshaled_locationTriggerNotifyOnEntry_temp_20);
	bool unmarshaled_locationTriggerNotifyOnExit_temp_21 = false;
	unmarshaled_locationTriggerNotifyOnExit_temp_21 = static_cast<bool>(marshaled.___locationTriggerNotifyOnExit_21);
	unmarshaled.set_locationTriggerNotifyOnExit_21(unmarshaled_locationTriggerNotifyOnExit_temp_21);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.get_U3CCenterU3Ek__BackingField_0();
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.get_U3CRadiusU3Ek__BackingField_1();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_2());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke_back(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_U3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCenterU3Ek__BackingField_temp_0));
	unmarshaled_U3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.set_U3CCenterU3Ek__BackingField_0(unmarshaled_U3CCenterU3Ek__BackingField_temp_0);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_1(unmarshaled_U3CRadiusU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_2(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_3(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke_cleanup(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.get_U3CCenterU3Ek__BackingField_0();
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.get_U3CRadiusU3Ek__BackingField_1();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_2());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com_back(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_U3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCenterU3Ek__BackingField_temp_0));
	unmarshaled_U3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.set_U3CCenterU3Ek__BackingField_0(unmarshaled_U3CCenterU3Ek__BackingField_temp_0);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_1(unmarshaled_U3CRadiusU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_2(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_3(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com_cleanup(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m29D1C4F1B0B4CD039CA79165ECF517593D1E67EE (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.LocationTrigger; } }
		return ((int32_t)20);
	}
}
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CCenterU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	float _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98 (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke_back(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke_cleanup(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com_back(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com_cleanup(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_m7DC585CF58AB71A010E84315578CFAAA106AAB7A (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.TimeTrigger; } }
		return 0;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_pinvoke(const iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4& unmarshaled, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_pinvoke_back(const iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_pinvoke& marshaled, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4& unmarshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_pinvoke_cleanup(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_com(const iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4& unmarshaled, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_com& marshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_com_back(const iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_com& marshaled, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4& unmarshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_com_cleanup(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6(intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke ___data1)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data1' to managed representation
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ____data1_unmarshaled;
	memset((&____data1_unmarshaled), 0, sizeof(____data1_unmarshaled));
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_back(___data1, ____data1_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6(___request0, ____data1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ___data0)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data0' to managed representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ____data0_unmarshaled;
	memset((&____data0_unmarshaled), 0, sizeof(____data0_unmarshaled));
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(___data0, ____data0_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E(____data0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ___data0)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data0' to managed representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ____data0_unmarshaled;
	memset((&____data0_unmarshaled), 0, sizeof(____data0_unmarshaled));
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(___data0, ____data0_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22(____data0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B(intptr_t ___dict0, char* ___key1, char* ___value2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key1' to managed representation
	String_t* ____key1_unmarshaled = NULL;
	____key1_unmarshaled = il2cpp_codegen_marshal_string_result(___key1);

	// Marshaling of parameter '___value2' to managed representation
	String_t* ____value2_unmarshaled = NULL;
	____value2_unmarshaled = il2cpp_codegen_marshal_string_result(___value2);

	// Managed method invocation
	iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B(___dict0, ____key1_unmarshaled, ____value2_unmarshaled, NULL);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m1F39C033F7FA89FFD35A01C0127CE81BF5311875 (intptr_t ___request0, int32_t ___options1, bool ___registerForRemote2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RequestAuthorization)(___request0, ___options1, static_cast<int32_t>(___registerForRemote2));

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m3816DF182302EA4EAFCA03C14812726B9EFA05A7 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke);

	// Marshaling of parameter '___data0' to native representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ____data0_marshaled = {};
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(___data0, ____data0_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ScheduleLocalNotification)(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(____data0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m67AF6FD539392DF3CBCF7A40BAAE3A5C608D71B0 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetNotificationReceivedDelegate)(____callback0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mB24D9D7D169B8384EBD773792A76D0545AC42A95 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetRemoteNotificationReceivedDelegate)(____callback0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m53B50E456C34B0155E11E14EBBD4C29A559B940F (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetAuthorizationRequestReceivedDelegate)(____callback0_marshaled);

}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  iOSNotificationsWrapper__GetNotificationSettings_mD864C4ABFB87255CDDDC4CDF506BF8F8262B73E1 (const RuntimeMethod* method)
{
	typedef iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  returnValue = reinterpret_cast<PInvokeFunc>(_GetNotificationSettings)();

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataArray_mD43963E0EEC6C38DF359B90367E302CABA5710B4 (int32_t* ___count0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataArray)(___count0);

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataArray_m03F428EAEB185C866014DCE7B0000D24386D1F3F (int32_t* ___count0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataArray)(___count0);

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_m7D981C54A72CEC14A3EA9E31FD14C8C6033B0A00 (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveScheduledNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_mC4515C33F416325FCFA88885FA16D6EA36EF2DFB (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllScheduledNotifications)();

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m0297EA245D64A1A6510C98718E2BAF08A625A818 (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveDeliveredNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m8783BF138FA9F3D96A391FBC14AD5A218027BF1E (int32_t ___badge0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetApplicationBadge)(___badge0);

}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_mAD93A8C52BC70B24D006AB5C8A89DF26643148BC (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetApplicationBadge)();

	return returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4893DF4E2971137B170098F975DB1991F94FBC89 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetAppOpenedUsingNotification)();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_m242CAF8C9AB902C5595C319C0AFCEC4B2C9598F6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllDeliveredNotifications)();

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_m7BF8F9AEEBC8E77D4B047A8389FCC597020AC3BE (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetLastNotificationData)();

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_mA20D38BF020461371DC2F7764BB00480610873BD (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_FreeUnmanagediOSNotificationDataArray)(___ptr0, ___count1);

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddItemToNSDictionary(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddItemToNSDictionary_m859349FD97C575EBE05A413766060D64231F6FB7 (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___key1' to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Marshaling of parameter '___value2' to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddItemToNSDictionary)(___dict0, ____key1_marshaled, ____value2_marshaled);

	// Marshaling cleanup of parameter '___key1' native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	// Marshaling cleanup of parameter '___value2' native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadNSDictionary(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadNSDictionary_mA0AA22CB19E29AA6C694741760361704724B46EE (intptr_t ___handle0, intptr_t ___nsDict1, ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * ___callback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ReadNSDictionary)(___handle0, ___nsDict1, ____callback2_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mA347E373A60EDFC6856FCA6EC0CF621B234F05BB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetAuthorizationRequestReceivedDelegate(AuthorizationRequestReceived);
		AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * L_0 = (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 *)il2cpp_codegen_object_new(AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var);
		AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m53B50E456C34B0155E11E14EBBD4C29A559B940F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedRemoteNotificationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m9558DD461486B0613BB2BB12FC0410930D125748 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetRemoteNotificationReceivedDelegate(RemoteNotificationReceived);
		NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * L_0 = (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_mB24D9D7D169B8384EBD773792A76D0545AC42A95(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_mE7EE23A3B5802F36B73989102962E66E5EFB0E25 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetNotificationReceivedDelegate(NotificationReceived);
		NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * L_0 = (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__SetNotificationReceivedDelegate_m67AF6FD539392DF3CBCF7A40BAAE3A5C608D71B0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6 (intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AuthorizationRequest.OnAuthorizationRequestCompleted(request, data);
		intptr_t L_0 = ___request0;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_1 = ___data1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var);
		AuthorizationRequest_OnAuthorizationRequestCompleted_mF7134CA2A482738F45D5978507BDA83E7D010DF4((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iOSNotificationCenter.OnReceivedRemoteNotification(NotificationDataToDataWithUserInfo(data));
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_1;
		L_1 = iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_m8E3E3E8AB02ABC8B01AED8DA30A250622ECD2228(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnReceivedRemoteNotification_mC892316249248FB30569A740C2CCBDEFA31FAB31(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iOSNotificationCenter.OnSentNotification(NotificationDataToDataWithUserInfo(data));
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_1;
		L_1 = iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_m8E3E3E8AB02ABC8B01AED8DA30A250622ECD2228(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnSentNotification_m465028106FA4DB73BA45A8EB58A8EB3B4B3EECD9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationDataToDataWithUserInfo(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_m8E3E3E8AB02ABC8B01AED8DA30A250622ECD2228 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ret.data = data;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		(&V_0)->set_data_0(L_0);
		// ret.data.userInfo = IntPtr.Zero;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_1 = (&V_0)->get_address_of_data_0();
		L_1->set_userInfo_7((intptr_t)(0));
		// ret.userInfo = NSDictionaryToCs(data.userInfo);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_2 = ___data0;
		intptr_t L_3 = L_2.get_userInfo_7();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4;
		L_4 = iOSNotificationsWrapper_NSDictionaryToCs_m86A5419F56A711E282DC9CA5FF91D27D7E11F6A9((intptr_t)L_3, /*hidden argument*/NULL);
		(&V_0)->set_userInfo_1(L_4);
		// return ret;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_5 = V_0;
		return L_5;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveNSDictionaryKeyValue(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_1 = NULL;
	{
		// GCHandle handle = GCHandle.FromIntPtr(dict);
		intptr_t L_0 = ___dict0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var dictionary = (Dictionary<string, string>)handle.Target;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)CastclassClass((RuntimeObject*)L_2, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var));
		// if (dictionary == null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// dictionary[key] = value;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = V_1;
		String_t* L_5 = ___key1;
		String_t* L_6 = ___value2;
		NullCheck(L_4);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_4, L_5, L_6, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_mA3E2D1AD523FF6C4C9CBEA7AE41B2B1C2523564E (intptr_t ___request0, int32_t ___options1, bool ___registerRemote2, const RuntimeMethod* method)
{
	{
		// _RequestAuthorization(request, options, registerRemote);
		intptr_t L_0 = ___request0;
		int32_t L_1 = ___options1;
		bool L_2 = ___registerRemote2;
		iOSNotificationsWrapper__RequestAuthorization_m1F39C033F7FA89FFD35A01C0127CE81BF5311875((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  iOSNotificationsWrapper_GetNotificationSettings_mA5B969AC160ED447361BA8F16F11632DADE75ACC (const RuntimeMethod* method)
{
	{
		// return _GetNotificationSettings();
		iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  L_0;
		L_0 = iOSNotificationsWrapper__GetNotificationSettings_mD864C4ABFB87255CDDDC4CDF506BF8F8262B73E1(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_mFB56853D4A5CBD056AD3374419B66FE0D7A62037 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method)
{
	{
		// data.data.userInfo = iOSNotificationsWrapper.CsDictionaryToObjC(data.userInfo);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = (&___data0)->get_address_of_data_0();
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_1 = ___data0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = L_1.get_userInfo_1();
		intptr_t L_3;
		L_3 = iOSNotificationsWrapper_CsDictionaryToObjC_m3E1526276CC2334DFEE98FEABB246105B56D2213(L_2, /*hidden argument*/NULL);
		L_0->set_userInfo_7((intptr_t)L_3);
		// _ScheduleLocalNotification(data.data);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_4 = ___data0;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_5 = L_4.get_data_0();
		iOSNotificationsWrapper__ScheduleLocalNotification_m3816DF182302EA4EAFCA03C14812726B9EFA05A7(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetDeliveredNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* iOSNotificationsWrapper_GetDeliveredNotificationData_m34FA4E882A0693260CC580B9D0478B66111904F7 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var ptr = _GetDeliveredNotificationDataArray(out count);
		intptr_t L_0;
		L_0 = iOSNotificationsWrapper__GetDeliveredNotificationDataArray_m03F428EAEB185C866014DCE7B0000D24386D1F3F((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return MarshalAndFreeNotificationDataArray(ptr, count);
		int32_t L_1 = V_0;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_2;
		L_2 = iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_mB15A8B0C07BB72655507792D09FF72E3A83F998C((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetScheduledNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* iOSNotificationsWrapper_GetScheduledNotificationData_m81582A72E403BE1D4C05EA01A95D9F02911D231D (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var ptr = _GetScheduledNotificationDataArray(out count);
		intptr_t L_0;
		L_0 = iOSNotificationsWrapper__GetScheduledNotificationDataArray_mD43963E0EEC6C38DF359B90367E302CABA5710B4((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return MarshalAndFreeNotificationDataArray(ptr, count);
		int32_t L_1 = V_0;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_2;
		L_2 = iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_mB15A8B0C07BB72655507792D09FF72E3A83F998C((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::MarshalAndFreeNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_mB15A8B0C07BB72655507792D09FF72E3A83F998C (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// if (count == 0 || ptr == IntPtr.Zero)
		int32_t L_0 = ___count1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		intptr_t L_1 = ___ptr0;
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return null;
		return (iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC*)NULL;
	}

IL_0012:
	{
		// var dataArray = new iOSNotificationWithUserInfo[count];
		int32_t L_3 = ___count1;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_4 = (iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC*)(iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC*)SZArrayNew(iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		// var structSize = Marshal.SizeOf(typeof(iOSNotificationData));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// var next = ptr;
		intptr_t L_8 = ___ptr0;
		V_2 = (intptr_t)L_8;
		// for (var i = 0; i < count; ++i)
		V_3 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		// dataArray[i].data = (iOSNotificationData)Marshal.PtrToStructure(next, typeof(iOSNotificationData));
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		intptr_t L_11 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13;
		L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_14;
		L_14 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_11, L_13, /*hidden argument*/NULL);
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->set_data_0(((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_14, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var)))));
		// dataArray[i].userInfo = NSDictionaryToCs(dataArray[i].data.userInfo);
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->get_address_of_data_0();
		intptr_t L_20 = L_19->get_userInfo_7();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_21;
		L_21 = iOSNotificationsWrapper_NSDictionaryToCs_m86A5419F56A711E282DC9CA5FF91D27D7E11F6A9((intptr_t)L_20, /*hidden argument*/NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_userInfo_1(L_21);
		// dataArray[i].data.userInfo = IntPtr.Zero;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_22 = V_0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_address_of_data_0();
		L_24->set_userInfo_7((intptr_t)(0));
		// next = next + structSize;
		intptr_t L_25 = V_2;
		int32_t L_26 = V_1;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_25, L_26, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_27;
		// for (var i = 0; i < count; ++i)
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0094:
	{
		// for (var i = 0; i < count; ++i)
		int32_t L_29 = V_3;
		int32_t L_30 = ___count1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_002f;
		}
	}
	{
		// _FreeUnmanagediOSNotificationDataArray(ptr, count);
		intptr_t L_31 = ___ptr0;
		int32_t L_32 = ___count1;
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_mA20D38BF020461371DC2F7764BB00480610873BD((intptr_t)L_31, L_32, /*hidden argument*/NULL);
		// return dataArray;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_33 = V_0;
		return L_33;
	}
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsDictionaryToObjC(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsDictionaryToObjC_m3E1526276CC2334DFEE98FEABB246105B56D2213 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (userInfo == null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___userInfo0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0009:
	{
		// IntPtr dict = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// foreach (var item in userInfo)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___userInfo0;
		NullCheck(L_1);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_2;
		L_2 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0018:
		{
			// foreach (var item in userInfo)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_3;
			L_3 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_2 = L_3;
			// dict = _AddItemToNSDictionary(dict, item.Key, item.Value);
			intptr_t L_4 = V_0;
			String_t* L_5;
			L_5 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_6;
			L_6 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			intptr_t L_7;
			L_7 = iOSNotificationsWrapper__AddItemToNSDictionary_m859349FD97C575EBE05A413766060D64231F6FB7((intptr_t)L_4, L_5, L_6, /*hidden argument*/NULL);
			V_0 = (intptr_t)L_7;
		}

IL_0035:
		{
			// foreach (var item in userInfo)
			bool L_8;
			L_8 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0018;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
		// return dict;
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationsWrapper::NSDictionaryToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * iOSNotificationsWrapper_NSDictionaryToCs_m86A5419F56A711E282DC9CA5FF91D27D7E11F6A9 (intptr_t ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var ret = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		// var handle = GCHandle.Alloc(ret);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = L_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_2;
		L_2 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _ReadNSDictionary(GCHandle.ToIntPtr(handle), dict, ReceiveNSDictionaryKeyValue);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = V_0;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = ___dict0;
		ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * L_6 = (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 *)il2cpp_codegen_object_new(ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1_il2cpp_TypeInfo_var);
		ReceiveNSDictionaryKeyValueCallback__ctor_m4B65D4BA92D77AE03C50211EFDCA8B881ECEB5CA(L_6, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__ReadNSDictionary_mA0AA22CB19E29AA6C694741760361704724B46EE((intptr_t)L_4, (intptr_t)L_5, L_6, /*hidden argument*/NULL);
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// return ret;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetApplicationBadge_m9B98DEA25B8F0B42DC53F54AA8A2246E91E3DA77 (int32_t ___badge0, const RuntimeMethod* method)
{
	{
		// _SetApplicationBadge(badge);
		int32_t L_0 = ___badge0;
		iOSNotificationsWrapper__SetApplicationBadge_m8783BF138FA9F3D96A391FBC14AD5A218027BF1E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper_GetApplicationBadge_m7810091A8AF73D2A346E95490A99BAC44F2AB2E0 (const RuntimeMethod* method)
{
	{
		// return _GetApplicationBadge();
		int32_t L_0;
		L_0 = iOSNotificationsWrapper__GetApplicationBadge_mAD93A8C52BC70B24D006AB5C8A89DF26643148BC(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper_GetAppOpenedUsingNotification_m3FC28F12769668442D15143476418BAA78EC0EAC (const RuntimeMethod* method)
{
	{
		// return _GetAppOpenedUsingNotification();
		bool L_0;
		L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4893DF4E2971137B170098F975DB1991F94FBC89(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  iOSNotificationsWrapper_GetLastNotificationData_m7F5171B526517BC4B8098671075EC837D22A0A7F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_GetAppOpenedUsingNotification())
		bool L_0;
		L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4893DF4E2971137B170098F975DB1991F94FBC89(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		// IntPtr ptr = _GetLastNotificationData();
		intptr_t L_1;
		L_1 = iOSNotificationsWrapper__GetLastNotificationData_m7BF8F9AEEBC8E77D4B047A8389FCC597020AC3BE(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		// if (ptr != IntPtr.Zero)
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		// data.data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_7;
		L_7 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_4, L_6, /*hidden argument*/NULL);
		(&V_1)->set_data_0(((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_7, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var)))));
		// data.userInfo = NSDictionaryToCs(data.data.userInfo);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_8 = V_1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_9 = L_8.get_data_0();
		intptr_t L_10 = L_9.get_userInfo_7();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11;
		L_11 = iOSNotificationsWrapper_NSDictionaryToCs_m86A5419F56A711E282DC9CA5FF91D27D7E11F6A9((intptr_t)L_10, /*hidden argument*/NULL);
		(&V_1)->set_userInfo_1(L_11);
		// data.data.userInfo = IntPtr.Zero;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_12 = (&V_1)->get_address_of_data_0();
		L_12->set_userInfo_7((intptr_t)(0));
		// _FreeUnmanagediOSNotificationDataArray(ptr, 1);
		intptr_t L_13 = V_0;
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_mA20D38BF020461371DC2F7764BB00480610873BD((intptr_t)L_13, 1, /*hidden argument*/NULL);
		// return data;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_14 = V_1;
		Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_RuntimeMethod_var);
		return L_15;
	}

IL_006c:
	{
		// return null;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A ));
		Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  L_16 = V_2;
		return L_16;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ctor_m5738C126099AB6A70D2945B63CFB1094BE3E653E (iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m73FAF531997F1BC546180674BF4DF0299763FE16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_0 = (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C *)il2cpp_codegen_object_new(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__34_0(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_0_m67C0F85102ACAAA1ED1F04AF6EE6CF91D0DDA508 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate {};
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__34_1(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_1_mBE84624D0BBB75B3CE737EFE0D5C041749C6761D (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate {};
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___notification0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___notification0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___notification0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(targetMethod, targetThis, ___notification0);
					else
						GenericVirtActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(targetMethod, targetThis, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notification0);
					else
						VirtActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notification0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotification,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m0488CEE5793DCF43C0E3CC91BDE3588678368527 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___notification0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m63776B1B0C6CC0CA5D5A08ECE31F4C53FBCB4A79 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___data1' to native representation
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke ____data1_marshaled = {};
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(___data1, ____data1_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___request0, ____data1_marshaled);

	// Marshaling cleanup of parameter '___data1' native representation
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(____data1_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::Invoke(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_Invoke_m96AD87B0B5032082BF086D48B32A69D50195BEFF (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___request0, ___data1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, ___data1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(targetMethod, targetThis, ___request0, ___data1);
					else
						GenericVirtActionInvoker2< intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(targetMethod, targetThis, ___request0, ___data1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___request0, ___data1);
					else
						VirtActionInvoker2< intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___request0, ___data1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, ___data1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::BeginInvoke(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCallback_BeginInvoke_m360935E0CE42141A8E11E2EDA9EA7D29C8A24683 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___request0);
	__d_args[1] = Box(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var, &___data1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_EndInvoke_m08EAE13F515327EACD162DC939B0693282F545C0 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___notificationData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___notificationData0' to native representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ____notificationData0_marshaled = {};
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(___notificationData0, ____notificationData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____notificationData0_marshaled);

	// Marshaling cleanup of parameter '___notificationData0' native representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(____notificationData0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m52E4634DA9E46A4D24800D2749D542B7A3A183F9 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___notificationData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notificationData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  >::Invoke(targetMethod, targetThis, ___notificationData0);
					else
						GenericVirtActionInvoker1< iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  >::Invoke(targetMethod, targetThis, ___notificationData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notificationData0);
					else
						VirtActionInvoker1< iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notificationData0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___notificationData0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotificationData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_mF9B216312C51391E4FC0A2F1810BE6F99FE2DA06 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___notificationData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var, &___notificationData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_mCFBA6F33499ECC319794CCC3333D319D4351FE81 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___key1' to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Marshaling of parameter '___value2' to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	il2cppPInvokeFunc(___dict0, ____key1_marshaled, ____value2_marshaled);

	// Marshaling cleanup of parameter '___key1' native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	// Marshaling cleanup of parameter '___value2' native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback__ctor_m4B65D4BA92D77AE03C50211EFDCA8B881ECEB5CA (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::Invoke(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback_Invoke_m5A38551B879697810FE56A323E5028B7A51BE6F1 (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___dict0, ___key1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___dict0, ___key1, ___value2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___dict0, ___key1, ___value2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___dict0, ___key1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dict0, ___key1, ___value2);
					else
						VirtActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dict0, ___key1, ___value2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___dict0, ___key1, ___value2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::BeginInvoke(System.IntPtr,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveNSDictionaryKeyValueCallback_BeginInvoke_m94F2BE43BACFF98761D15A8B65407AF3DDA3B2DD (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dict0);
	__d_args[1] = ___key1;
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback_EndInvoke_m9D7D3FA41F4595F1652EE2059907FFA0D275363B (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_IsFinished = value; }
		bool L_0 = ___value0;
		__this->set_m_IsFinished_0(L_0);
		// private set { m_IsFinished = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_Granted = value; }
		bool L_0 = ___value0;
		__this->set_m_Granted_1(L_0);
		// private set { m_Granted = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_Error = value; }
		String_t* L_0 = ___value0;
		__this->set_m_Error_2(L_0);
		// private set { m_Error = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447_inline (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_DeviceToken = value; }
		String_t* L_0 = ___value0;
		__this->set_m_DeviceToken_3(L_0);
		// private set { m_DeviceToken = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  iOSNotificationLocationTrigger_get_Center_m908323B952AA351BCA1A2E8060B3776FE2FFB91A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CCenterU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CYearU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CMonthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CDayU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CHourU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CMinuteU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CSecondU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
