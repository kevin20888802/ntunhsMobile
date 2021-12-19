#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 ;
struct unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 ;
struct unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA ;
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D ;
struct unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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

// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
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

// Mono.Unity.UnityTls/unitytls_x509verify_result
struct unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m1B817101FEA9D3C28DF3C9192F70557465BDFB25(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m531442C0133AA29BF262DFD21F81CCBE5EA7E086(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void CDECL ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C(void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 * ___caList4, intptr_t ___caListLen5, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * ___chain6, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 * ___key7, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState8);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245(void* ___userData0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E(void* ___userData0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C(void* ___userData0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6(intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ___data0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B(intptr_t ___dict0, char* ___key1, char* ___value2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ___data0);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[11] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m1B817101FEA9D3C28DF3C9192F70557465BDFB25),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m531442C0133AA29BF262DFD21F81CCBE5EA7E086),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m643E7890E65F131D71A61E96CFEE3F77535F56B6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_m90B6105E6B5496D48AADB83CBB7563FD99C71C22),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_mC4EF7C30F3E96A3263B04589475A4E495F87391B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mB9B7B0F9A50B0954BD9B0F781FDEF1F85ACC455E),
};
