#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,System.String>
struct Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Placement.PoolEntry>
struct Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>
struct HashSet_1_t086A2564FADDEA15193C25DA872508542D89A826;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GoogleMobileAds.Placement.PoolEntry>
struct KeyCollection_t46B9AEBA408481DD37E54A8A6C482D96D672DD64;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<GoogleMobileAds.Placement.AdPlacement>
struct List_1_t301564BEB3CCBE02858C2DE14BE26C4C87743008;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<GoogleMobileAds.Api.Reward>
struct UnityEvent_1_t57729AC9C63236D632215A051CBE27F805916414;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GoogleMobileAds.Placement.PoolEntry>
struct ValueCollection_tED07C9E2FA886543EE30E6C9BB77B7398C7B8AB9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,GoogleMobileAds.Placement.PoolEntry>[]
struct EntryU5BU5D_tC0C518E07AD80FD340D79163D4FDBA9E51A78C56;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// GoogleMobileAds.Placement.GoogleMobileAdsPlacements[]
struct GoogleMobileAdsPlacementsU5BU5D_tE5535106414727FCF34CC50E42F4FDB2F2152B91;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// GoogleMobileAds.Api.AdErrorEvent
struct AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81;
// GoogleMobileAds.Api.AdFailedToLoadEvent
struct AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814;
// GoogleMobileAds.Placement.AdGameObject
struct AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734;
// GoogleMobileAds.Placement.AdGameObjectPool
struct AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E;
// GoogleMobileAds.Placement.AdPlacement
struct AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88;
// GoogleMobileAds.Api.AdSize
struct AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D;
// GoogleMobileAds.Placement.AdSizeProperty
struct AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GoogleMobileAds.Placement.BannerAdGameObject
struct BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29;
// GoogleMobileAds.Api.BannerView
struct BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GoogleMobileAds.Placement.GoogleMobileAdsPlacements
struct GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_tCAE3C9BE9900F961A8DC37F11DC13B4A96D263B0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_tF13ECA742E5E16BAF858F4D45792D63FC20743AD;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_tC40AB7988EB34B21D46AEA68B0E7A26EB45E42DB;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t3F59EE9FA1FAE4BF936E7BAA44235964F2B5DCF2;
// GoogleMobileAds.Common.IRewardedInterstitialAdClient
struct IRewardedInterstitialAdClient_t5FA94CEC899D09F91C9AAF4AEEF5A484BBB143B4;
// GoogleMobileAds.Common.InitCompleteExecutor
struct InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9;
// GoogleMobileAds.Placement.InterstitialAdGameObject
struct InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// GoogleMobileAds.Placement.PoolEntry
struct PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// GoogleMobileAds.Api.Reward
struct Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966;
// GoogleMobileAds.Placement.RewardedAdGameObject
struct RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8;
// GoogleMobileAds.Api.RewardedInterstitialAd
struct RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC;
// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject
struct RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.String
struct String_t;
// TestController
struct TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// GoogleMobileAds.Api.UserEarnedRewardEvent
struct UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C;
// GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0
struct U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD;
// GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0
struct U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0
struct U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B;
// GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1
struct U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058;
// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2
struct U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07;
// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0
struct U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E;
// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1
struct U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Orientation_tAA32985C1371FF119E753379A6A751BE28F2225B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_tE65D664BFE046EF99C5F84B2051D976C661A0B2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral054DDE34098ACE813425A1F93663E5C23EB32878;
IL2CPP_EXTERN_C String_t* _stringLiteral0D65A79A64B388B5473808E822119403CEC6F9BB;
IL2CPP_EXTERN_C String_t* _stringLiteral19881E8ACEDA55DB44C9A39D57ACB936FA8CEEAA;
IL2CPP_EXTERN_C String_t* _stringLiteral1C4D2A44C0C549C5B3D4FA3D08196BA57AC83621;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA702279C1566E02D85C69C853CA51B2A29BC15;
IL2CPP_EXTERN_C String_t* _stringLiteral2096AEFC442CF1000AD9F00097ED649EF2B8600E;
IL2CPP_EXTERN_C String_t* _stringLiteral2998B3DF6B3BFF8111BE6FFCC6B77AAC31AF7C80;
IL2CPP_EXTERN_C String_t* _stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65;
IL2CPP_EXTERN_C String_t* _stringLiteral302065C2D63594DEA483E51364795478D08A2D78;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32;
IL2CPP_EXTERN_C String_t* _stringLiteral40941F84518351AECD372E09DB612DD85B247DF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE;
IL2CPP_EXTERN_C String_t* _stringLiteral4D63630052E4B0D87328643DA14055A3524AC68D;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE533855906753C2FCB315EA20CEEF1BA35457E;
IL2CPP_EXTERN_C String_t* _stringLiteral527C543D69536D42B5BCE96AD5D5CF0EC544ACFB;
IL2CPP_EXTERN_C String_t* _stringLiteral52B535BDE23122B8981C7FCC3CD002B9C2A2E518;
IL2CPP_EXTERN_C String_t* _stringLiteral5C6C8C1AD8A137951AC84040691E466E938BB779;
IL2CPP_EXTERN_C String_t* _stringLiteral6358270746AAA6A0A531E650085DB3CC653D26F5;
IL2CPP_EXTERN_C String_t* _stringLiteral65F4002855AF1D7AE1CCEE7474C9D1A59CCE6622;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE07F4C830715436A1305C13760C97BBB6C8E05;
IL2CPP_EXTERN_C String_t* _stringLiteral9085E018E38B9E513A06D1C509261A23A5563DEB;
IL2CPP_EXTERN_C String_t* _stringLiteral9D85499EF28E323A1F3117308216764DC01CC5DE;
IL2CPP_EXTERN_C String_t* _stringLiteralA61AB4BD9B8D82E28FE65284C9F5250DC31F92D3;
IL2CPP_EXTERN_C String_t* _stringLiteralAC67757179F8CD7D14281A771DCCC03175D9A9C9;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F;
IL2CPP_EXTERN_C String_t* _stringLiteralD228077BD7B13FF3F5F9CDBB0EEBC4BE4D91013B;
IL2CPP_EXTERN_C String_t* _stringLiteralE91B79FB97CE92B245AA59A853F4DA5E282F6AB8;
IL2CPP_EXTERN_C String_t* _stringLiteralFF01927167D14B1A0439A309CCE07514C54042A6;
IL2CPP_EXTERN_C String_t* _stringLiteralFF063544DB997DA474629EBFD55B648E5BDC0361;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mDD1649A988F638E91A3267DF7392F10FB5B1B025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m262EADF9A5C0B8271F55AE75258689BAB1EB5E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdGameObjectPool_GetAd_TisBannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29_m65832E679CBA7C7DFF4BB70A8737754167C168C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdGameObjectPool_GetAd_TisInterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE_m620CDC39AD5F62B2FA325613261AC4D7DB3A26DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdGameObjectPool_GetAd_TisRewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8_m05352E0CA267422AB9B6DC4718830441B1077707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdGameObjectPool_GetAd_TisRewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80_mE72F5D337D221431A2BE6588298313D2A8457142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdGameObject_U3CAutoLoadAdU3Em__0_m74734F4BFEEC442797B1FEEC198B3371A33DBA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdGameObject_set_AndroidAdUnitId_m56F05C1D361EAD9179AA440F7CAE9461340476E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdGameObject_set_IOSAdUnitId_m268B6F3F8B4992438B7D5B9A83F13AD30264C1EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdSizeProperty_ToAdSize_m48B076A10FA0AE9A4AA0234F11F064A353581767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdSizeProperty_ToAnchoredAdaptiveAdSize_m870456F9F512C1AF33714CC922D0D0FB125E2096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdGameObject_U3CAddCallbacksU3Em__0_m942F75AEDA1148446FEF43F982B8D05A96B5A284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdGameObject_U3CAddCallbacksU3Em__1_mD22C7480ABAD502DECAF8B1CFE8FE4ADE7DD0B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdGameObject_U3CAddCallbacksU3Em__2_mE19F61F05130B47CCC9CBFA57591F3BED0A53052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdGameObject_U3CAddCallbacksU3Em__3_m165FEB74A9E19DB15472F3F26739800DB28DEC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAdGameObject_U3CAddCallbacksU3Em__4_mCE36AFC5759662C4F8F7C9423E43E259547F688C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9D85DDCC05B8EB54832ED4B6350BE9D73E7FC740_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m7D08FEDF7E310844B587CACCF9F2476A738000EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD613F1AEF2A80F9CDFDE7820B16F12AF1F622E91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDC2E9232E18E8787DBA7C39663462853599E5D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8E498EE0190E61D0730D41AC3893FA61B738DD87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mAB702EC6A295AEC36C6197217872AAFE98BE3FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdGameObject_U3CAddCallbacksU3Em__0_m55E40928025F51DFF7DF88A17E8DF94680BEDF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdGameObject_U3CAddCallbacksU3Em__1_m0A6211EE4739A466C87DC03D43FCAA8A6244ADD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdGameObject_U3CAddCallbacksU3Em__2_mABC03E5DFE1D99D5679CC22A6A5AA28FDFE29056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdGameObject_U3CAddCallbacksU3Em__3_m6104BA833E1009A39203A98F33095C3E51116C8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdGameObject_U3CAddCallbacksU3Em__4_m3D43495AA17EB904AF51DAAE85C6D123F3D68547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisGoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_mC20F3A27646B198E2ECED15CC905024D61BFDA8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdGameObject_U3CAddCallbacksU3Em__0_m58C7EEDEE34818F5DABFEC1BB516672A67B547E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdGameObject_U3CAddCallbacksU3Em__1_m3CA9C10EBFFD8E37A4FE16003737592FB3689904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdGameObject_U3CAddCallbacksU3Em__2_m1ED20F92092163F6AA1C0D52755F332E9FF2D29A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdGameObject_U3CAddCallbacksU3Em__3_m577D579EFF90306AAD47C7FEA66428ADD5E42CF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdGameObject_U3CAddCallbacksU3Em__4_mE3D7AF9525A76076B3E959430C8068071D2B7AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdGameObject_U3CAddCallbacksU3Em__5_m3816ECD85ACC62C24CCC861C973AA42F0FDEB7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__2_m37761996915C81BA9640F94C887F490BE3BA99FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__3_m1CB29E2C4F3F2D1EE7F5EA133C687A59B281C643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__4_mA16D4D8200DC1E042C0C8A02FB5A9AADE571ED87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdGameObject_U3CLoadAdU3Em__0_m86D1A2C35902F126A0D08E99B7E80687BCA1E09F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdGameObject_U3CShowIfLoadedU3Em__1_m66CB190E3197BA785CE2F94E9CC595D02F009445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TestController_HandleInitCompleteAction_m8D8AC3302BC0015D8DE1DA3C22C35CCE81828786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_m5C35959C298B2042877756094D98097D4E6322FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_mA80B39B5927C06010297A7DEE20FC995073B6F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_mC610883412C53D1C7431DF7B4ACFD7AF99ACAD5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddCallbacksU3Ec__AnonStorey1_U3CU3Em__0_m76389014961A03297C47D90A593CF118B3000E69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddCallbacksU3Ec__AnonStorey2_U3CU3Em__0_mF4518F02A146549686CDB592AAD3EC4F3FA94BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_mA9F92EC05E229C4A261BADC4A1171411C55199C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowIfLoadedU3Ec__AnonStorey1_U3CU3Em__0_mDB1DDAE2AE47376A8409BACAED3E18F60D324355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mEE4525B22905335325B6864F18D5235CE328149A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0B1B8BA7EAC84EDCDCA542B70695041A5A7A1AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GoogleMobileAdsPlacementsU5BU5D_tE5535106414727FCF34CC50E42F4FDB2F2152B91;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA9A22F35B9D8DD9E79E806AB4E27DE42BB62703F 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Placement.PoolEntry>
struct Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC0C518E07AD80FD340D79163D4FDBA9E51A78C56* ___entries_1;
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
	KeyCollection_t46B9AEBA408481DD37E54A8A6C482D96D672DD64 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tED07C9E2FA886543EE30E6C9BB77B7398C7B8AB9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___entries_1)); }
	inline EntryU5BU5D_tC0C518E07AD80FD340D79163D4FDBA9E51A78C56* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC0C518E07AD80FD340D79163D4FDBA9E51A78C56** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC0C518E07AD80FD340D79163D4FDBA9E51A78C56* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___keys_7)); }
	inline KeyCollection_t46B9AEBA408481DD37E54A8A6C482D96D672DD64 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t46B9AEBA408481DD37E54A8A6C482D96D672DD64 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t46B9AEBA408481DD37E54A8A6C482D96D672DD64 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ___values_8)); }
	inline ValueCollection_tED07C9E2FA886543EE30E6C9BB77B7398C7B8AB9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tED07C9E2FA886543EE30E6C9BB77B7398C7B8AB9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tED07C9E2FA886543EE30E6C9BB77B7398C7B8AB9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// GoogleMobileAds.Placement.AdGameObjectPool
struct AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Placement.PoolEntry> GoogleMobileAds.Placement.AdGameObjectPool::objects
	Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * ___objects_1;

public:
	inline static int32_t get_offset_of_objects_1() { return static_cast<int32_t>(offsetof(AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E, ___objects_1)); }
	inline Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * get_objects_1() const { return ___objects_1; }
	inline Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 ** get_address_of_objects_1() { return &___objects_1; }
	inline void set_objects_1(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * value)
	{
		___objects_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_1), (void*)value);
	}
};

struct AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_StaticFields
{
public:
	// GoogleMobileAds.Placement.AdGameObjectPool GoogleMobileAds.Placement.AdGameObjectPool::instance
	AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_StaticFields, ___instance_0)); }
	inline AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * get_instance_0() const { return ___instance_0; }
	inline AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GoogleMobileAds.Api.BannerView
struct BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::_PdbQgPRNu3avbiwZinBxFNm0PTg
	RuntimeObject* ____PdbQgPRNu3avbiwZinBxFNm0PTg_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::_MseLMXWyXXg2wsF0mJX9QLM8EBg
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::_9rWgugUbE0cJMamV0KrvPFtX3Zt
	EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::_Ae6WZt5ZdRymDasSD9kXkMoyxsF
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::_wVOTjoflUqWku0yOmJmqiJfxGab
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____wVOTjoflUqWku0yOmJmqiJfxGab_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::_rcbdlgiH0AnLtIRuSq8ij7RyoSA
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::_EGlx7neqXuAvzTfKSBXsqW67nKg
	EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * ____EGlx7neqXuAvzTfKSBXsqW67nKg_6;

public:
	inline static int32_t get_offset_of__PdbQgPRNu3avbiwZinBxFNm0PTg_0() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ____PdbQgPRNu3avbiwZinBxFNm0PTg_0)); }
	inline RuntimeObject* get__PdbQgPRNu3avbiwZinBxFNm0PTg_0() const { return ____PdbQgPRNu3avbiwZinBxFNm0PTg_0; }
	inline RuntimeObject** get_address_of__PdbQgPRNu3avbiwZinBxFNm0PTg_0() { return &____PdbQgPRNu3avbiwZinBxFNm0PTg_0; }
	inline void set__PdbQgPRNu3avbiwZinBxFNm0PTg_0(RuntimeObject* value)
	{
		____PdbQgPRNu3avbiwZinBxFNm0PTg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PdbQgPRNu3avbiwZinBxFNm0PTg_0), (void*)value);
	}

	inline static int32_t get_offset_of__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() const { return ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() { return &____MseLMXWyXXg2wsF0mJX9QLM8EBg_1; }
	inline void set__MseLMXWyXXg2wsF0mJX9QLM8EBg_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____MseLMXWyXXg2wsF0mJX9QLM8EBg_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____MseLMXWyXXg2wsF0mJX9QLM8EBg_1), (void*)value);
	}

	inline static int32_t get_offset_of__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2)); }
	inline EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * get__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() const { return ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2; }
	inline EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 ** get_address_of__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() { return &____9rWgugUbE0cJMamV0KrvPFtX3Zt_2; }
	inline void set__9rWgugUbE0cJMamV0KrvPFtX3Zt_2(EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * value)
	{
		____9rWgugUbE0cJMamV0KrvPFtX3Zt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____9rWgugUbE0cJMamV0KrvPFtX3Zt_2), (void*)value);
	}

	inline static int32_t get_offset_of__Ae6WZt5ZdRymDasSD9kXkMoyxsF_3() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__Ae6WZt5ZdRymDasSD9kXkMoyxsF_3() const { return ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__Ae6WZt5ZdRymDasSD9kXkMoyxsF_3() { return &____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3; }
	inline void set__Ae6WZt5ZdRymDasSD9kXkMoyxsF_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3), (void*)value);
	}

	inline static int32_t get_offset_of__wVOTjoflUqWku0yOmJmqiJfxGab_4() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ____wVOTjoflUqWku0yOmJmqiJfxGab_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__wVOTjoflUqWku0yOmJmqiJfxGab_4() const { return ____wVOTjoflUqWku0yOmJmqiJfxGab_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__wVOTjoflUqWku0yOmJmqiJfxGab_4() { return &____wVOTjoflUqWku0yOmJmqiJfxGab_4; }
	inline void set__wVOTjoflUqWku0yOmJmqiJfxGab_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____wVOTjoflUqWku0yOmJmqiJfxGab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wVOTjoflUqWku0yOmJmqiJfxGab_4), (void*)value);
	}

	inline static int32_t get_offset_of__rcbdlgiH0AnLtIRuSq8ij7RyoSA_5() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__rcbdlgiH0AnLtIRuSq8ij7RyoSA_5() const { return ____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__rcbdlgiH0AnLtIRuSq8ij7RyoSA_5() { return &____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5; }
	inline void set__rcbdlgiH0AnLtIRuSq8ij7RyoSA_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5), (void*)value);
	}

	inline static int32_t get_offset_of__EGlx7neqXuAvzTfKSBXsqW67nKg_6() { return static_cast<int32_t>(offsetof(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737, ____EGlx7neqXuAvzTfKSBXsqW67nKg_6)); }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * get__EGlx7neqXuAvzTfKSBXsqW67nKg_6() const { return ____EGlx7neqXuAvzTfKSBXsqW67nKg_6; }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B ** get_address_of__EGlx7neqXuAvzTfKSBXsqW67nKg_6() { return &____EGlx7neqXuAvzTfKSBXsqW67nKg_6; }
	inline void set__EGlx7neqXuAvzTfKSBXsqW67nKg_6(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * value)
	{
		____EGlx7neqXuAvzTfKSBXsqW67nKg_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____EGlx7neqXuAvzTfKSBXsqW67nKg_6), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::_PdbQgPRNu3avbiwZinBxFNm0PTg
	RuntimeObject* ____PdbQgPRNu3avbiwZinBxFNm0PTg_0;

public:
	inline static int32_t get_offset_of__PdbQgPRNu3avbiwZinBxFNm0PTg_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89, ____PdbQgPRNu3avbiwZinBxFNm0PTg_0)); }
	inline RuntimeObject* get__PdbQgPRNu3avbiwZinBxFNm0PTg_0() const { return ____PdbQgPRNu3avbiwZinBxFNm0PTg_0; }
	inline RuntimeObject** get_address_of__PdbQgPRNu3avbiwZinBxFNm0PTg_0() { return &____PdbQgPRNu3avbiwZinBxFNm0PTg_0; }
	inline void set__PdbQgPRNu3avbiwZinBxFNm0PTg_0(RuntimeObject* value)
	{
		____PdbQgPRNu3avbiwZinBxFNm0PTg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PdbQgPRNu3avbiwZinBxFNm0PTg_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::_PdbQgPRNu3avbiwZinBxFNm0PTg
	RuntimeObject* ____PdbQgPRNu3avbiwZinBxFNm0PTg_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::_MseLMXWyXXg2wsF0mJX9QLM8EBg
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::_9rWgugUbE0cJMamV0KrvPFtX3Zt
	EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::_Ae6WZt5ZdRymDasSD9kXkMoyxsF
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::_wVOTjoflUqWku0yOmJmqiJfxGab
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____wVOTjoflUqWku0yOmJmqiJfxGab_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::_rcbdlgiH0AnLtIRuSq8ij7RyoSA
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::_EGlx7neqXuAvzTfKSBXsqW67nKg
	EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * ____EGlx7neqXuAvzTfKSBXsqW67nKg_6;

public:
	inline static int32_t get_offset_of__PdbQgPRNu3avbiwZinBxFNm0PTg_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ____PdbQgPRNu3avbiwZinBxFNm0PTg_0)); }
	inline RuntimeObject* get__PdbQgPRNu3avbiwZinBxFNm0PTg_0() const { return ____PdbQgPRNu3avbiwZinBxFNm0PTg_0; }
	inline RuntimeObject** get_address_of__PdbQgPRNu3avbiwZinBxFNm0PTg_0() { return &____PdbQgPRNu3avbiwZinBxFNm0PTg_0; }
	inline void set__PdbQgPRNu3avbiwZinBxFNm0PTg_0(RuntimeObject* value)
	{
		____PdbQgPRNu3avbiwZinBxFNm0PTg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PdbQgPRNu3avbiwZinBxFNm0PTg_0), (void*)value);
	}

	inline static int32_t get_offset_of__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() const { return ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() { return &____MseLMXWyXXg2wsF0mJX9QLM8EBg_1; }
	inline void set__MseLMXWyXXg2wsF0mJX9QLM8EBg_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____MseLMXWyXXg2wsF0mJX9QLM8EBg_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____MseLMXWyXXg2wsF0mJX9QLM8EBg_1), (void*)value);
	}

	inline static int32_t get_offset_of__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2)); }
	inline EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * get__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() const { return ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2; }
	inline EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 ** get_address_of__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() { return &____9rWgugUbE0cJMamV0KrvPFtX3Zt_2; }
	inline void set__9rWgugUbE0cJMamV0KrvPFtX3Zt_2(EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * value)
	{
		____9rWgugUbE0cJMamV0KrvPFtX3Zt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____9rWgugUbE0cJMamV0KrvPFtX3Zt_2), (void*)value);
	}

	inline static int32_t get_offset_of__Ae6WZt5ZdRymDasSD9kXkMoyxsF_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__Ae6WZt5ZdRymDasSD9kXkMoyxsF_3() const { return ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__Ae6WZt5ZdRymDasSD9kXkMoyxsF_3() { return &____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3; }
	inline void set__Ae6WZt5ZdRymDasSD9kXkMoyxsF_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Ae6WZt5ZdRymDasSD9kXkMoyxsF_3), (void*)value);
	}

	inline static int32_t get_offset_of__wVOTjoflUqWku0yOmJmqiJfxGab_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ____wVOTjoflUqWku0yOmJmqiJfxGab_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__wVOTjoflUqWku0yOmJmqiJfxGab_4() const { return ____wVOTjoflUqWku0yOmJmqiJfxGab_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__wVOTjoflUqWku0yOmJmqiJfxGab_4() { return &____wVOTjoflUqWku0yOmJmqiJfxGab_4; }
	inline void set__wVOTjoflUqWku0yOmJmqiJfxGab_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____wVOTjoflUqWku0yOmJmqiJfxGab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wVOTjoflUqWku0yOmJmqiJfxGab_4), (void*)value);
	}

	inline static int32_t get_offset_of__rcbdlgiH0AnLtIRuSq8ij7RyoSA_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__rcbdlgiH0AnLtIRuSq8ij7RyoSA_5() const { return ____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__rcbdlgiH0AnLtIRuSq8ij7RyoSA_5() { return &____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5; }
	inline void set__rcbdlgiH0AnLtIRuSq8ij7RyoSA_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rcbdlgiH0AnLtIRuSq8ij7RyoSA_5), (void*)value);
	}

	inline static int32_t get_offset_of__EGlx7neqXuAvzTfKSBXsqW67nKg_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ____EGlx7neqXuAvzTfKSBXsqW67nKg_6)); }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * get__EGlx7neqXuAvzTfKSBXsqW67nKg_6() const { return ____EGlx7neqXuAvzTfKSBXsqW67nKg_6; }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B ** get_address_of__EGlx7neqXuAvzTfKSBXsqW67nKg_6() { return &____EGlx7neqXuAvzTfKSBXsqW67nKg_6; }
	inline void set__EGlx7neqXuAvzTfKSBXsqW67nKg_6(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * value)
	{
		____EGlx7neqXuAvzTfKSBXsqW67nKg_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____EGlx7neqXuAvzTfKSBXsqW67nKg_6), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Api.MobileAdsExtensions
struct MobileAdsExtensions_tDBBA3979D0A9563012227DB36662956A763E76C5  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Placement.PoolEntry
struct PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212  : public RuntimeObject
{
public:
	// UnityEngine.GameObject GoogleMobileAds.Placement.PoolEntry::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	// System.String GoogleMobileAds.Placement.PoolEntry::sceneNameOrigin
	String_t* ___sceneNameOrigin_1;
	// System.Boolean GoogleMobileAds.Placement.PoolEntry::persistent
	bool ___persistent_2;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_sceneNameOrigin_1() { return static_cast<int32_t>(offsetof(PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212, ___sceneNameOrigin_1)); }
	inline String_t* get_sceneNameOrigin_1() const { return ___sceneNameOrigin_1; }
	inline String_t** get_address_of_sceneNameOrigin_1() { return &___sceneNameOrigin_1; }
	inline void set_sceneNameOrigin_1(String_t* value)
	{
		___sceneNameOrigin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneNameOrigin_1), (void*)value);
	}

	inline static int32_t get_offset_of_persistent_2() { return static_cast<int32_t>(offsetof(PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212, ___persistent_2)); }
	inline bool get_persistent_2() const { return ___persistent_2; }
	inline bool* get_address_of_persistent_2() { return &___persistent_2; }
	inline void set_persistent_2(bool value)
	{
		___persistent_2 = value;
	}
};


// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::_PdbQgPRNu3avbiwZinBxFNm0PTg
	RuntimeObject* ____PdbQgPRNu3avbiwZinBxFNm0PTg_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::_MseLMXWyXXg2wsF0mJX9QLM8EBg
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::_9rWgugUbE0cJMamV0KrvPFtX3Zt
	EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::_clcbERIGVRepCVxX5GwzpUUMQnp
	EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * ____clcbERIGVRepCVxX5GwzpUUMQnp_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::_Ae6WZt5ZdRymDasSD9kXkMoyxsF
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::_wVOTjoflUqWku0yOmJmqiJfxGab
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____wVOTjoflUqWku0yOmJmqiJfxGab_5;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::_065ThK8KwU4WfuE6c9edTGiAxAt
	EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * ____065ThK8KwU4WfuE6c9edTGiAxAt_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::_EGlx7neqXuAvzTfKSBXsqW67nKg
	EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * ____EGlx7neqXuAvzTfKSBXsqW67nKg_7;

public:
	inline static int32_t get_offset_of__PdbQgPRNu3avbiwZinBxFNm0PTg_0() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ____PdbQgPRNu3avbiwZinBxFNm0PTg_0)); }
	inline RuntimeObject* get__PdbQgPRNu3avbiwZinBxFNm0PTg_0() const { return ____PdbQgPRNu3avbiwZinBxFNm0PTg_0; }
	inline RuntimeObject** get_address_of__PdbQgPRNu3avbiwZinBxFNm0PTg_0() { return &____PdbQgPRNu3avbiwZinBxFNm0PTg_0; }
	inline void set__PdbQgPRNu3avbiwZinBxFNm0PTg_0(RuntimeObject* value)
	{
		____PdbQgPRNu3avbiwZinBxFNm0PTg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PdbQgPRNu3avbiwZinBxFNm0PTg_0), (void*)value);
	}

	inline static int32_t get_offset_of__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() const { return ____MseLMXWyXXg2wsF0mJX9QLM8EBg_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__MseLMXWyXXg2wsF0mJX9QLM8EBg_1() { return &____MseLMXWyXXg2wsF0mJX9QLM8EBg_1; }
	inline void set__MseLMXWyXXg2wsF0mJX9QLM8EBg_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____MseLMXWyXXg2wsF0mJX9QLM8EBg_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____MseLMXWyXXg2wsF0mJX9QLM8EBg_1), (void*)value);
	}

	inline static int32_t get_offset_of__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2)); }
	inline EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * get__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() const { return ____9rWgugUbE0cJMamV0KrvPFtX3Zt_2; }
	inline EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 ** get_address_of__9rWgugUbE0cJMamV0KrvPFtX3Zt_2() { return &____9rWgugUbE0cJMamV0KrvPFtX3Zt_2; }
	inline void set__9rWgugUbE0cJMamV0KrvPFtX3Zt_2(EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * value)
	{
		____9rWgugUbE0cJMamV0KrvPFtX3Zt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____9rWgugUbE0cJMamV0KrvPFtX3Zt_2), (void*)value);
	}

	inline static int32_t get_offset_of__clcbERIGVRepCVxX5GwzpUUMQnp_3() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ____clcbERIGVRepCVxX5GwzpUUMQnp_3)); }
	inline EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * get__clcbERIGVRepCVxX5GwzpUUMQnp_3() const { return ____clcbERIGVRepCVxX5GwzpUUMQnp_3; }
	inline EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 ** get_address_of__clcbERIGVRepCVxX5GwzpUUMQnp_3() { return &____clcbERIGVRepCVxX5GwzpUUMQnp_3; }
	inline void set__clcbERIGVRepCVxX5GwzpUUMQnp_3(EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * value)
	{
		____clcbERIGVRepCVxX5GwzpUUMQnp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clcbERIGVRepCVxX5GwzpUUMQnp_3), (void*)value);
	}

	inline static int32_t get_offset_of__Ae6WZt5ZdRymDasSD9kXkMoyxsF_4() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__Ae6WZt5ZdRymDasSD9kXkMoyxsF_4() const { return ____Ae6WZt5ZdRymDasSD9kXkMoyxsF_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__Ae6WZt5ZdRymDasSD9kXkMoyxsF_4() { return &____Ae6WZt5ZdRymDasSD9kXkMoyxsF_4; }
	inline void set__Ae6WZt5ZdRymDasSD9kXkMoyxsF_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____Ae6WZt5ZdRymDasSD9kXkMoyxsF_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Ae6WZt5ZdRymDasSD9kXkMoyxsF_4), (void*)value);
	}

	inline static int32_t get_offset_of__wVOTjoflUqWku0yOmJmqiJfxGab_5() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ____wVOTjoflUqWku0yOmJmqiJfxGab_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__wVOTjoflUqWku0yOmJmqiJfxGab_5() const { return ____wVOTjoflUqWku0yOmJmqiJfxGab_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__wVOTjoflUqWku0yOmJmqiJfxGab_5() { return &____wVOTjoflUqWku0yOmJmqiJfxGab_5; }
	inline void set__wVOTjoflUqWku0yOmJmqiJfxGab_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____wVOTjoflUqWku0yOmJmqiJfxGab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wVOTjoflUqWku0yOmJmqiJfxGab_5), (void*)value);
	}

	inline static int32_t get_offset_of__065ThK8KwU4WfuE6c9edTGiAxAt_6() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ____065ThK8KwU4WfuE6c9edTGiAxAt_6)); }
	inline EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * get__065ThK8KwU4WfuE6c9edTGiAxAt_6() const { return ____065ThK8KwU4WfuE6c9edTGiAxAt_6; }
	inline EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 ** get_address_of__065ThK8KwU4WfuE6c9edTGiAxAt_6() { return &____065ThK8KwU4WfuE6c9edTGiAxAt_6; }
	inline void set__065ThK8KwU4WfuE6c9edTGiAxAt_6(EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * value)
	{
		____065ThK8KwU4WfuE6c9edTGiAxAt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____065ThK8KwU4WfuE6c9edTGiAxAt_6), (void*)value);
	}

	inline static int32_t get_offset_of__EGlx7neqXuAvzTfKSBXsqW67nKg_7() { return static_cast<int32_t>(offsetof(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966, ____EGlx7neqXuAvzTfKSBXsqW67nKg_7)); }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * get__EGlx7neqXuAvzTfKSBXsqW67nKg_7() const { return ____EGlx7neqXuAvzTfKSBXsqW67nKg_7; }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B ** get_address_of__EGlx7neqXuAvzTfKSBXsqW67nKg_7() { return &____EGlx7neqXuAvzTfKSBXsqW67nKg_7; }
	inline void set__EGlx7neqXuAvzTfKSBXsqW67nKg_7(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * value)
	{
		____EGlx7neqXuAvzTfKSBXsqW67nKg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____EGlx7neqXuAvzTfKSBXsqW67nKg_7), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedInterstitialAd
struct RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.Api.RewardedInterstitialAd::_32MEWULUdpDENbCULMUVs8eKfkg
	RuntimeObject* ____32MEWULUdpDENbCULMUVs8eKfkg_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::_EGlx7neqXuAvzTfKSBXsqW67nKg
	EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * ____EGlx7neqXuAvzTfKSBXsqW67nKg_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::_WkNPgqllUXXqCv20pveMC4DP0KG
	EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * ____WkNPgqllUXXqCv20pveMC4DP0KG_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::_6UrgX1GEFwW0x0tMNmxOa0CvzTA
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____6UrgX1GEFwW0x0tMNmxOa0CvzTA_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::_klZI0xNc33bLrxKFLlPUX53JNGC
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ____klZI0xNc33bLrxKFLlPUX53JNGC_5;

public:
	inline static int32_t get_offset_of__32MEWULUdpDENbCULMUVs8eKfkg_0() { return static_cast<int32_t>(offsetof(RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC, ____32MEWULUdpDENbCULMUVs8eKfkg_0)); }
	inline RuntimeObject* get__32MEWULUdpDENbCULMUVs8eKfkg_0() const { return ____32MEWULUdpDENbCULMUVs8eKfkg_0; }
	inline RuntimeObject** get_address_of__32MEWULUdpDENbCULMUVs8eKfkg_0() { return &____32MEWULUdpDENbCULMUVs8eKfkg_0; }
	inline void set__32MEWULUdpDENbCULMUVs8eKfkg_0(RuntimeObject* value)
	{
		____32MEWULUdpDENbCULMUVs8eKfkg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____32MEWULUdpDENbCULMUVs8eKfkg_0), (void*)value);
	}

	inline static int32_t get_offset_of__EGlx7neqXuAvzTfKSBXsqW67nKg_2() { return static_cast<int32_t>(offsetof(RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC, ____EGlx7neqXuAvzTfKSBXsqW67nKg_2)); }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * get__EGlx7neqXuAvzTfKSBXsqW67nKg_2() const { return ____EGlx7neqXuAvzTfKSBXsqW67nKg_2; }
	inline EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B ** get_address_of__EGlx7neqXuAvzTfKSBXsqW67nKg_2() { return &____EGlx7neqXuAvzTfKSBXsqW67nKg_2; }
	inline void set__EGlx7neqXuAvzTfKSBXsqW67nKg_2(EventHandler_1_tF65965FE6AE505F8C2D36014F3DBB28F6CE13A0B * value)
	{
		____EGlx7neqXuAvzTfKSBXsqW67nKg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____EGlx7neqXuAvzTfKSBXsqW67nKg_2), (void*)value);
	}

	inline static int32_t get_offset_of__WkNPgqllUXXqCv20pveMC4DP0KG_3() { return static_cast<int32_t>(offsetof(RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC, ____WkNPgqllUXXqCv20pveMC4DP0KG_3)); }
	inline EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * get__WkNPgqllUXXqCv20pveMC4DP0KG_3() const { return ____WkNPgqllUXXqCv20pveMC4DP0KG_3; }
	inline EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 ** get_address_of__WkNPgqllUXXqCv20pveMC4DP0KG_3() { return &____WkNPgqllUXXqCv20pveMC4DP0KG_3; }
	inline void set__WkNPgqllUXXqCv20pveMC4DP0KG_3(EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * value)
	{
		____WkNPgqllUXXqCv20pveMC4DP0KG_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WkNPgqllUXXqCv20pveMC4DP0KG_3), (void*)value);
	}

	inline static int32_t get_offset_of__6UrgX1GEFwW0x0tMNmxOa0CvzTA_4() { return static_cast<int32_t>(offsetof(RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC, ____6UrgX1GEFwW0x0tMNmxOa0CvzTA_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__6UrgX1GEFwW0x0tMNmxOa0CvzTA_4() const { return ____6UrgX1GEFwW0x0tMNmxOa0CvzTA_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__6UrgX1GEFwW0x0tMNmxOa0CvzTA_4() { return &____6UrgX1GEFwW0x0tMNmxOa0CvzTA_4; }
	inline void set__6UrgX1GEFwW0x0tMNmxOa0CvzTA_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____6UrgX1GEFwW0x0tMNmxOa0CvzTA_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____6UrgX1GEFwW0x0tMNmxOa0CvzTA_4), (void*)value);
	}

	inline static int32_t get_offset_of__klZI0xNc33bLrxKFLlPUX53JNGC_5() { return static_cast<int32_t>(offsetof(RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC, ____klZI0xNc33bLrxKFLlPUX53JNGC_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get__klZI0xNc33bLrxKFLlPUX53JNGC_5() const { return ____klZI0xNc33bLrxKFLlPUX53JNGC_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of__klZI0xNc33bLrxKFLlPUX53JNGC_5() { return &____klZI0xNc33bLrxKFLlPUX53JNGC_5; }
	inline void set__klZI0xNc33bLrxKFLlPUX53JNGC_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		____klZI0xNc33bLrxKFLlPUX53JNGC_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____klZI0xNc33bLrxKFLlPUX53JNGC_5), (void*)value);
	}
};

struct RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient> GoogleMobileAds.Api.RewardedInterstitialAd::_71XYLughYL6ltj1bdirPyKCJb2B
	HashSet_1_t086A2564FADDEA15193C25DA872508542D89A826 * ____71XYLughYL6ltj1bdirPyKCJb2B_1;

public:
	inline static int32_t get_offset_of__71XYLughYL6ltj1bdirPyKCJb2B_1() { return static_cast<int32_t>(offsetof(RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC_StaticFields, ____71XYLughYL6ltj1bdirPyKCJb2B_1)); }
	inline HashSet_1_t086A2564FADDEA15193C25DA872508542D89A826 * get__71XYLughYL6ltj1bdirPyKCJb2B_1() const { return ____71XYLughYL6ltj1bdirPyKCJb2B_1; }
	inline HashSet_1_t086A2564FADDEA15193C25DA872508542D89A826 ** get_address_of__71XYLughYL6ltj1bdirPyKCJb2B_1() { return &____71XYLughYL6ltj1bdirPyKCJb2B_1; }
	inline void set__71XYLughYL6ltj1bdirPyKCJb2B_1(HashSet_1_t086A2564FADDEA15193C25DA872508542D89A826 * value)
	{
		____71XYLughYL6ltj1bdirPyKCJb2B_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____71XYLughYL6ltj1bdirPyKCJb2B_1), (void*)value);
	}
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0
struct U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdFailedToLoadEventArgs GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::args
	AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * ___args_0;
	// GoogleMobileAds.Placement.BannerAdGameObject GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::$this
	BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * ___U24this_1;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD, ___args_0)); }
	inline AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * get_args_0() const { return ___args_0; }
	inline AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 ** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD, ___U24this_1)); }
	inline BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * get_U24this_1() const { return ___U24this_1; }
	inline BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0
struct U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdFailedToLoadEventArgs GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::args
	AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * ___args_0;
	// GoogleMobileAds.Placement.InterstitialAdGameObject GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::$this
	InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * ___U24this_1;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727, ___args_0)); }
	inline AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * get_args_0() const { return ___args_0; }
	inline AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 ** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727, ___U24this_1)); }
	inline InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * get_U24this_1() const { return ___U24this_1; }
	inline InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0
struct U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdErrorEventArgs GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::args
	AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * ___args_0;
	// GoogleMobileAds.Placement.RewardedAdGameObject GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::$this
	RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * ___U24this_1;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B, ___args_0)); }
	inline AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * get_args_0() const { return ___args_0; }
	inline AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 ** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B, ___U24this_1)); }
	inline RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * get_U24this_1() const { return ___U24this_1; }
	inline RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1
struct U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.Reward GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::args
	Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * ___args_0;
	// GoogleMobileAds.Placement.RewardedAdGameObject GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::$this
	RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * ___U24this_1;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058, ___args_0)); }
	inline Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * get_args_0() const { return ___args_0; }
	inline Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF ** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058, ___U24this_1)); }
	inline RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * get_U24this_1() const { return ___U24this_1; }
	inline RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2
struct U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdErrorEventArgs GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::args
	AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * ___args_0;
	// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::$this
	RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * ___U24this_1;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07, ___args_0)); }
	inline AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * get_args_0() const { return ___args_0; }
	inline AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 ** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07, ___U24this_1)); }
	inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * get_U24this_1() const { return ___U24this_1; }
	inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0
struct U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E  : public RuntimeObject
{
public:
	// System.String GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::error
	String_t* ___error_0;
	// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::$this
	RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * ___U24this_1;

public:
	inline static int32_t get_offset_of_error_0() { return static_cast<int32_t>(offsetof(U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E, ___error_0)); }
	inline String_t* get_error_0() const { return ___error_0; }
	inline String_t** get_address_of_error_0() { return &___error_0; }
	inline void set_error_0(String_t* value)
	{
		___error_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E, ___U24this_1)); }
	inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * get_U24this_1() const { return ___U24this_1; }
	inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1
struct U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.Reward GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::reward
	Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * ___reward_0;
	// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::$this
	RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * ___U24this_1;

public:
	inline static int32_t get_offset_of_reward_0() { return static_cast<int32_t>(offsetof(U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F, ___reward_0)); }
	inline Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * get_reward_0() const { return ___reward_0; }
	inline Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF ** get_address_of_reward_0() { return &___reward_0; }
	inline void set_reward_0(Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * value)
	{
		___reward_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reward_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F, ___U24this_1)); }
	inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * get_U24this_1() const { return ___U24this_1; }
	inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<GoogleMobileAds.Api.Reward>
struct UnityEvent_1_t57729AC9C63236D632215A051CBE27F805916414  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t57729AC9C63236D632215A051CBE27F805916414, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
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


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// GoogleMobileAds.Api.Reward
struct Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF, ___U3CAmountU3Ek__BackingField_2)); }
	inline double get_U3CAmountU3Ek__BackingField_2() const { return ___U3CAmountU3Ek__BackingField_2; }
	inline double* get_address_of_U3CAmountU3Ek__BackingField_2() { return &___U3CAmountU3Ek__BackingField_2; }
	inline void set_U3CAmountU3Ek__BackingField_2(double value)
	{
		___U3CAmountU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// GoogleMobileAds.Api.AdErrorEvent
struct AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// GoogleMobileAds.Api.AdFailedToLoadEvent
struct AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// GoogleMobileAds.Api.AdPosition
struct AdPosition_tF317317EE617B2B7B0C5536A54396E1AE5BFA9FE 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdPosition_tF317317EE617B2B7B0C5536A54396E1AE5BFA9FE, ___value___2)); }
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

// GoogleMobileAds.Api.Gender
struct Gender_tB3AB5E04BD5E09A5C1E709CF838BB734ED12D517 
{
public:
	// System.Int32 GoogleMobileAds.Api.Gender::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Gender_tB3AB5E04BD5E09A5C1E709CF838BB734ED12D517, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Common.InitCompleteExecutor
struct InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Action> GoogleMobileAds.Common.InitCompleteExecutor::_tb8XFgtze53EjMxVCobmBp9L7iP
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ____tb8XFgtze53EjMxVCobmBp9L7iP_1;
	// System.Object GoogleMobileAds.Common.InitCompleteExecutor::_dGKmZkFmlH85PwwB8MwgFXAQheC
	RuntimeObject * ____dGKmZkFmlH85PwwB8MwgFXAQheC_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GoogleMobileAds.Common.InitCompleteExecutor::_j352OtWLlWxPuvPGKYdX2U82SfD
	bool ____j352OtWLlWxPuvPGKYdX2U82SfD_3;

public:
	inline static int32_t get_offset_of__tb8XFgtze53EjMxVCobmBp9L7iP_1() { return static_cast<int32_t>(offsetof(InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D, ____tb8XFgtze53EjMxVCobmBp9L7iP_1)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get__tb8XFgtze53EjMxVCobmBp9L7iP_1() const { return ____tb8XFgtze53EjMxVCobmBp9L7iP_1; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of__tb8XFgtze53EjMxVCobmBp9L7iP_1() { return &____tb8XFgtze53EjMxVCobmBp9L7iP_1; }
	inline void set__tb8XFgtze53EjMxVCobmBp9L7iP_1(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		____tb8XFgtze53EjMxVCobmBp9L7iP_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tb8XFgtze53EjMxVCobmBp9L7iP_1), (void*)value);
	}

	inline static int32_t get_offset_of__dGKmZkFmlH85PwwB8MwgFXAQheC_2() { return static_cast<int32_t>(offsetof(InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D, ____dGKmZkFmlH85PwwB8MwgFXAQheC_2)); }
	inline RuntimeObject * get__dGKmZkFmlH85PwwB8MwgFXAQheC_2() const { return ____dGKmZkFmlH85PwwB8MwgFXAQheC_2; }
	inline RuntimeObject ** get_address_of__dGKmZkFmlH85PwwB8MwgFXAQheC_2() { return &____dGKmZkFmlH85PwwB8MwgFXAQheC_2; }
	inline void set__dGKmZkFmlH85PwwB8MwgFXAQheC_2(RuntimeObject * value)
	{
		____dGKmZkFmlH85PwwB8MwgFXAQheC_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dGKmZkFmlH85PwwB8MwgFXAQheC_2), (void*)value);
	}

	inline static int32_t get_offset_of__j352OtWLlWxPuvPGKYdX2U82SfD_3() { return static_cast<int32_t>(offsetof(InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D, ____j352OtWLlWxPuvPGKYdX2U82SfD_3)); }
	inline bool get__j352OtWLlWxPuvPGKYdX2U82SfD_3() const { return ____j352OtWLlWxPuvPGKYdX2U82SfD_3; }
	inline bool* get_address_of__j352OtWLlWxPuvPGKYdX2U82SfD_3() { return &____j352OtWLlWxPuvPGKYdX2U82SfD_3; }
	inline void set__j352OtWLlWxPuvPGKYdX2U82SfD_3(bool value)
	{
		____j352OtWLlWxPuvPGKYdX2U82SfD_3 = value;
	}
};

struct InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D_StaticFields
{
public:
	// GoogleMobileAds.Common.InitCompleteExecutor GoogleMobileAds.Common.InitCompleteExecutor::_7Af5YtYaYN7Ug5w7n6aqZ53zFvL
	InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D * ____7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0;

public:
	inline static int32_t get_offset_of__7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0() { return static_cast<int32_t>(offsetof(InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D_StaticFields, ____7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0)); }
	inline InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D * get__7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0() const { return ____7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0; }
	inline InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D ** get_address_of__7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0() { return &____7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0; }
	inline void set__7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0(InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D * value)
	{
		____7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____7Af5YtYaYN7Ug5w7n6aqZ53zFvL_0), (void*)value);
	}
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

// GoogleMobileAds.Api.Orientation
struct Orientation_tAA32985C1371FF119E753379A6A751BE28F2225B 
{
public:
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_tAA32985C1371FF119E753379A6A751BE28F2225B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
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


// GoogleMobileAds.Api.UserEarnedRewardEvent
struct UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62  : public UnityEvent_1_t57729AC9C63236D632215A051CBE27F805916414
{
public:

public:
};


// GoogleMobileAds.Placement.AdPlacement/AdType
struct AdType_tF82A9866AC512410715BC683D1C6D29FA91F6899 
{
public:
	// System.Int32 GoogleMobileAds.Placement.AdPlacement/AdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdType_tF82A9866AC512410715BC683D1C6D29FA91F6899, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize/Type
struct Type_tE65D664BFE046EF99C5F84B2051D976C661A0B2D 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tE65D664BFE046EF99C5F84B2051D976C661A0B2D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<GoogleMobileAds.Api.Gender>
struct Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// GoogleMobileAds.Placement.AdPlacement
struct AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5  : public RuntimeObject
{
public:
	// System.String GoogleMobileAds.Placement.AdPlacement::placementName
	String_t* ___placementName_0;
	// GoogleMobileAds.Placement.AdPlacement/AdType GoogleMobileAds.Placement.AdPlacement::adType
	int32_t ___adType_1;
	// System.String GoogleMobileAds.Placement.AdPlacement::androidAdUnitId
	String_t* ___androidAdUnitId_2;
	// System.String GoogleMobileAds.Placement.AdPlacement::iOSAdUnitId
	String_t* ___iOSAdUnitId_3;
	// System.Boolean GoogleMobileAds.Placement.AdPlacement::persistent
	bool ___persistent_4;
	// System.Boolean GoogleMobileAds.Placement.AdPlacement::autoLoadEnabled
	bool ___autoLoadEnabled_5;

public:
	inline static int32_t get_offset_of_placementName_0() { return static_cast<int32_t>(offsetof(AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5, ___placementName_0)); }
	inline String_t* get_placementName_0() const { return ___placementName_0; }
	inline String_t** get_address_of_placementName_0() { return &___placementName_0; }
	inline void set_placementName_0(String_t* value)
	{
		___placementName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementName_0), (void*)value);
	}

	inline static int32_t get_offset_of_adType_1() { return static_cast<int32_t>(offsetof(AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5, ___adType_1)); }
	inline int32_t get_adType_1() const { return ___adType_1; }
	inline int32_t* get_address_of_adType_1() { return &___adType_1; }
	inline void set_adType_1(int32_t value)
	{
		___adType_1 = value;
	}

	inline static int32_t get_offset_of_androidAdUnitId_2() { return static_cast<int32_t>(offsetof(AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5, ___androidAdUnitId_2)); }
	inline String_t* get_androidAdUnitId_2() const { return ___androidAdUnitId_2; }
	inline String_t** get_address_of_androidAdUnitId_2() { return &___androidAdUnitId_2; }
	inline void set_androidAdUnitId_2(String_t* value)
	{
		___androidAdUnitId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___androidAdUnitId_2), (void*)value);
	}

	inline static int32_t get_offset_of_iOSAdUnitId_3() { return static_cast<int32_t>(offsetof(AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5, ___iOSAdUnitId_3)); }
	inline String_t* get_iOSAdUnitId_3() const { return ___iOSAdUnitId_3; }
	inline String_t** get_address_of_iOSAdUnitId_3() { return &___iOSAdUnitId_3; }
	inline void set_iOSAdUnitId_3(String_t* value)
	{
		___iOSAdUnitId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iOSAdUnitId_3), (void*)value);
	}

	inline static int32_t get_offset_of_persistent_4() { return static_cast<int32_t>(offsetof(AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5, ___persistent_4)); }
	inline bool get_persistent_4() const { return ___persistent_4; }
	inline bool* get_address_of_persistent_4() { return &___persistent_4; }
	inline void set_persistent_4(bool value)
	{
		___persistent_4 = value;
	}

	inline static int32_t get_offset_of_autoLoadEnabled_5() { return static_cast<int32_t>(offsetof(AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5, ___autoLoadEnabled_5)); }
	inline bool get_autoLoadEnabled_5() const { return ___autoLoadEnabled_5; }
	inline bool* get_address_of_autoLoadEnabled_5() { return &___autoLoadEnabled_5; }
	inline void set_autoLoadEnabled_5(bool value)
	{
		___autoLoadEnabled_5 = value;
	}
};


// GoogleMobileAds.Api.AdSize
struct AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};

struct AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;

public:
	inline static int32_t get_offset_of_Banner_4() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___Banner_4)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_Banner_4() const { return ___Banner_4; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_Banner_4() { return &___Banner_4; }
	inline void set_Banner_4(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_MediumRectangle_5() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___MediumRectangle_5)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_MediumRectangle_5() const { return ___MediumRectangle_5; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_MediumRectangle_5() { return &___MediumRectangle_5; }
	inline void set_MediumRectangle_5(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___MediumRectangle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediumRectangle_5), (void*)value);
	}

	inline static int32_t get_offset_of_IABBanner_6() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___IABBanner_6)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_IABBanner_6() const { return ___IABBanner_6; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_IABBanner_6() { return &___IABBanner_6; }
	inline void set_IABBanner_6(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___IABBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IABBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Leaderboard_7() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___Leaderboard_7)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_Leaderboard_7() const { return ___Leaderboard_7; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_Leaderboard_7() { return &___Leaderboard_7; }
	inline void set_Leaderboard_7(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___Leaderboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leaderboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_SmartBanner_8() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___SmartBanner_8)); }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * get_SmartBanner_8() const { return ___SmartBanner_8; }
	inline AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D ** get_address_of_SmartBanner_8() { return &___SmartBanner_8; }
	inline void set_SmartBanner_8(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * value)
	{
		___SmartBanner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmartBanner_8), (void*)value);
	}

	inline static int32_t get_offset_of_FullWidth_9() { return static_cast<int32_t>(offsetof(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields, ___FullWidth_9)); }
	inline int32_t get_FullWidth_9() const { return ___FullWidth_9; }
	inline int32_t* get_address_of_FullWidth_9() { return &___FullWidth_9; }
	inline void set_FullWidth_9(int32_t value)
	{
		___FullWidth_9 = value;
	}
};


// GoogleMobileAds.Placement.AdSizeProperty
struct AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Placement.AdSizeProperty::type
	int32_t ___type_0;
	// System.Int32 GoogleMobileAds.Placement.AdSizeProperty::width
	int32_t ___width_1;
	// System.Int32 GoogleMobileAds.Placement.AdSizeProperty::height
	int32_t ___height_2;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Placement.AdSizeProperty::orientation
	int32_t ___orientation_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48, ___orientation_3)); }
	inline int32_t get_orientation_3() const { return ___orientation_3; }
	inline int32_t* get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(int32_t value)
	{
		___orientation_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
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


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,System.String>
struct Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::<TestDevices>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDevicesU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::<Birthday>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CBirthdayU3Ek__BackingField_2;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::<Gender>k__BackingField
	Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289  ___U3CGenderU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * ___U3CMediationExtrasU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CTestDevicesU3Ek__BackingField_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDevicesU3Ek__BackingField_0() const { return ___U3CTestDevicesU3Ek__BackingField_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDevicesU3Ek__BackingField_0() { return &___U3CTestDevicesU3Ek__BackingField_0; }
	inline void set_U3CTestDevicesU3Ek__BackingField_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDevicesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CBirthdayU3Ek__BackingField_2)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CBirthdayU3Ek__BackingField_2() const { return ___U3CBirthdayU3Ek__BackingField_2; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CBirthdayU3Ek__BackingField_2() { return &___U3CBirthdayU3Ek__BackingField_2; }
	inline void set_U3CBirthdayU3Ek__BackingField_2(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CBirthdayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CGenderU3Ek__BackingField_3)); }
	inline Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289  get_U3CGenderU3Ek__BackingField_3() const { return ___U3CGenderU3Ek__BackingField_3; }
	inline Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289 * get_address_of_U3CGenderU3Ek__BackingField_3() { return &___U3CGenderU3Ek__BackingField_3; }
	inline void set_U3CGenderU3Ek__BackingField_3(Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289  value)
	{
		___U3CGenderU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_4() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_4() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_4; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CExtrasU3Ek__BackingField_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_5() const { return ___U3CExtrasU3Ek__BackingField_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_5() { return &___U3CExtrasU3Ek__BackingField_5; }
	inline void set_U3CExtrasU3Ek__BackingField_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88, ___U3CMediationExtrasU3Ek__BackingField_6)); }
	inline List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * get_U3CMediationExtrasU3Ek__BackingField_6() const { return ___U3CMediationExtrasU3Ek__BackingField_6; }
	inline List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_6() { return &___U3CMediationExtrasU3Ek__BackingField_6; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_6(List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_6), (void*)value);
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// GoogleMobileAds.Placement.GoogleMobileAdsPlacements
struct GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<GoogleMobileAds.Placement.AdPlacement> GoogleMobileAds.Placement.GoogleMobileAdsPlacements::allPlacements
	List_1_t301564BEB3CCBE02858C2DE14BE26C4C87743008 * ___allPlacements_4;

public:
	inline static int32_t get_offset_of_allPlacements_4() { return static_cast<int32_t>(offsetof(GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360, ___allPlacements_4)); }
	inline List_1_t301564BEB3CCBE02858C2DE14BE26C4C87743008 * get_allPlacements_4() const { return ___allPlacements_4; }
	inline List_1_t301564BEB3CCBE02858C2DE14BE26C4C87743008 ** get_address_of_allPlacements_4() { return &___allPlacements_4; }
	inline void set_allPlacements_4(List_1_t301564BEB3CCBE02858C2DE14BE26C4C87743008 * value)
	{
		___allPlacements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allPlacements_4), (void*)value);
	}
};

struct GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_StaticFields
{
public:
	// GoogleMobileAds.Placement.GoogleMobileAdsPlacements GoogleMobileAds.Placement.GoogleMobileAdsPlacements::instance
	GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_StaticFields, ___instance_5)); }
	inline GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * get_instance_5() const { return ___instance_5; }
	inline GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_5), (void*)value);
	}
};


// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<TestDevices>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDevicesU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::<Birthday>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CBirthdayU3Ek__BackingField_2;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::<Gender>k__BackingField
	Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289  ___U3CGenderU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::<ChildDirectedTreatmentTag>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * ___U3CMediationExtrasU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C, ___U3CTestDevicesU3Ek__BackingField_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDevicesU3Ek__BackingField_0() const { return ___U3CTestDevicesU3Ek__BackingField_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDevicesU3Ek__BackingField_0() { return &___U3CTestDevicesU3Ek__BackingField_0; }
	inline void set_U3CTestDevicesU3Ek__BackingField_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDevicesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C, ___U3CBirthdayU3Ek__BackingField_2)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CBirthdayU3Ek__BackingField_2() const { return ___U3CBirthdayU3Ek__BackingField_2; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CBirthdayU3Ek__BackingField_2() { return &___U3CBirthdayU3Ek__BackingField_2; }
	inline void set_U3CBirthdayU3Ek__BackingField_2(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CBirthdayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C, ___U3CGenderU3Ek__BackingField_3)); }
	inline Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289  get_U3CGenderU3Ek__BackingField_3() const { return ___U3CGenderU3Ek__BackingField_3; }
	inline Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289 * get_address_of_U3CGenderU3Ek__BackingField_3() { return &___U3CGenderU3Ek__BackingField_3; }
	inline void set_U3CGenderU3Ek__BackingField_3(Nullable_1_t25955BA0860068DD4A24D5F1F6D0DA7AFF729289  value)
	{
		___U3CGenderU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C, ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() const { return ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() { return &___U3CChildDirectedTreatmentTagU3Ek__BackingField_4; }
	inline void set_U3CChildDirectedTreatmentTagU3Ek__BackingField_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CChildDirectedTreatmentTagU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C, ___U3CExtrasU3Ek__BackingField_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_5() const { return ___U3CExtrasU3Ek__BackingField_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_5() { return &___U3CExtrasU3Ek__BackingField_5; }
	inline void set_U3CExtrasU3Ek__BackingField_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C, ___U3CMediationExtrasU3Ek__BackingField_6)); }
	inline List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * get_U3CMediationExtrasU3Ek__BackingField_6() const { return ___U3CMediationExtrasU3Ek__BackingField_6; }
	inline List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_6() { return &___U3CMediationExtrasU3Ek__BackingField_6; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_6(List_1_t50C0B8B75CFA60A3BC928889704474AE375F3DA2 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_6), (void*)value);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
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


// GoogleMobileAds.Placement.AdGameObject
struct AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GoogleMobileAds.Placement.AdPlacement/AdType GoogleMobileAds.Placement.AdGameObject::adType
	int32_t ___adType_4;
	// System.Int32 GoogleMobileAds.Placement.AdGameObject::selectedPlacementIndex
	int32_t ___selectedPlacementIndex_5;
	// System.String GoogleMobileAds.Placement.AdGameObject::androidAdUnitId
	String_t* ___androidAdUnitId_6;
	// System.String GoogleMobileAds.Placement.AdGameObject::iOSAdUnitId
	String_t* ___iOSAdUnitId_7;
	// System.Boolean GoogleMobileAds.Placement.AdGameObject::persistent
	bool ___persistent_8;
	// System.Boolean GoogleMobileAds.Placement.AdGameObject::autoLoadEnabled
	bool ___autoLoadEnabled_9;

public:
	inline static int32_t get_offset_of_adType_4() { return static_cast<int32_t>(offsetof(AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734, ___adType_4)); }
	inline int32_t get_adType_4() const { return ___adType_4; }
	inline int32_t* get_address_of_adType_4() { return &___adType_4; }
	inline void set_adType_4(int32_t value)
	{
		___adType_4 = value;
	}

	inline static int32_t get_offset_of_selectedPlacementIndex_5() { return static_cast<int32_t>(offsetof(AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734, ___selectedPlacementIndex_5)); }
	inline int32_t get_selectedPlacementIndex_5() const { return ___selectedPlacementIndex_5; }
	inline int32_t* get_address_of_selectedPlacementIndex_5() { return &___selectedPlacementIndex_5; }
	inline void set_selectedPlacementIndex_5(int32_t value)
	{
		___selectedPlacementIndex_5 = value;
	}

	inline static int32_t get_offset_of_androidAdUnitId_6() { return static_cast<int32_t>(offsetof(AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734, ___androidAdUnitId_6)); }
	inline String_t* get_androidAdUnitId_6() const { return ___androidAdUnitId_6; }
	inline String_t** get_address_of_androidAdUnitId_6() { return &___androidAdUnitId_6; }
	inline void set_androidAdUnitId_6(String_t* value)
	{
		___androidAdUnitId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___androidAdUnitId_6), (void*)value);
	}

	inline static int32_t get_offset_of_iOSAdUnitId_7() { return static_cast<int32_t>(offsetof(AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734, ___iOSAdUnitId_7)); }
	inline String_t* get_iOSAdUnitId_7() const { return ___iOSAdUnitId_7; }
	inline String_t** get_address_of_iOSAdUnitId_7() { return &___iOSAdUnitId_7; }
	inline void set_iOSAdUnitId_7(String_t* value)
	{
		___iOSAdUnitId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iOSAdUnitId_7), (void*)value);
	}

	inline static int32_t get_offset_of_persistent_8() { return static_cast<int32_t>(offsetof(AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734, ___persistent_8)); }
	inline bool get_persistent_8() const { return ___persistent_8; }
	inline bool* get_address_of_persistent_8() { return &___persistent_8; }
	inline void set_persistent_8(bool value)
	{
		___persistent_8 = value;
	}

	inline static int32_t get_offset_of_autoLoadEnabled_9() { return static_cast<int32_t>(offsetof(AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734, ___autoLoadEnabled_9)); }
	inline bool get_autoLoadEnabled_9() const { return ___autoLoadEnabled_9; }
	inline bool* get_address_of_autoLoadEnabled_9() { return &___autoLoadEnabled_9; }
	inline void set_autoLoadEnabled_9(bool value)
	{
		___autoLoadEnabled_9 = value;
	}
};


// TestController
struct TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GoogleMobileAds.Placement.BannerAdGameObject TestController::bannerAd
	BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * ___bannerAd_4;
	// GoogleMobileAds.Placement.InterstitialAdGameObject TestController::interstitialAd
	InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * ___interstitialAd_5;
	// GoogleMobileAds.Placement.RewardedAdGameObject TestController::rewardedAd
	RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * ___rewardedAd_6;
	// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject TestController::rewardedInterstitialAd
	RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * ___rewardedInterstitialAd_7;
	// System.Single TestController::deltaTime
	float ___deltaTime_8;
	// System.Boolean TestController::showFpsMeter
	bool ___showFpsMeter_9;
	// UnityEngine.UI.Text TestController::fpsMeter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___fpsMeter_10;
	// UnityEngine.UI.Text TestController::statusText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___statusText_11;

public:
	inline static int32_t get_offset_of_bannerAd_4() { return static_cast<int32_t>(offsetof(TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B, ___bannerAd_4)); }
	inline BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * get_bannerAd_4() const { return ___bannerAd_4; }
	inline BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 ** get_address_of_bannerAd_4() { return &___bannerAd_4; }
	inline void set_bannerAd_4(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * value)
	{
		___bannerAd_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerAd_4), (void*)value);
	}

	inline static int32_t get_offset_of_interstitialAd_5() { return static_cast<int32_t>(offsetof(TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B, ___interstitialAd_5)); }
	inline InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * get_interstitialAd_5() const { return ___interstitialAd_5; }
	inline InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE ** get_address_of_interstitialAd_5() { return &___interstitialAd_5; }
	inline void set_interstitialAd_5(InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * value)
	{
		___interstitialAd_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialAd_5), (void*)value);
	}

	inline static int32_t get_offset_of_rewardedAd_6() { return static_cast<int32_t>(offsetof(TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B, ___rewardedAd_6)); }
	inline RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * get_rewardedAd_6() const { return ___rewardedAd_6; }
	inline RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 ** get_address_of_rewardedAd_6() { return &___rewardedAd_6; }
	inline void set_rewardedAd_6(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * value)
	{
		___rewardedAd_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardedAd_6), (void*)value);
	}

	inline static int32_t get_offset_of_rewardedInterstitialAd_7() { return static_cast<int32_t>(offsetof(TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B, ___rewardedInterstitialAd_7)); }
	inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * get_rewardedInterstitialAd_7() const { return ___rewardedInterstitialAd_7; }
	inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 ** get_address_of_rewardedInterstitialAd_7() { return &___rewardedInterstitialAd_7; }
	inline void set_rewardedInterstitialAd_7(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * value)
	{
		___rewardedInterstitialAd_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardedInterstitialAd_7), (void*)value);
	}

	inline static int32_t get_offset_of_deltaTime_8() { return static_cast<int32_t>(offsetof(TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B, ___deltaTime_8)); }
	inline float get_deltaTime_8() const { return ___deltaTime_8; }
	inline float* get_address_of_deltaTime_8() { return &___deltaTime_8; }
	inline void set_deltaTime_8(float value)
	{
		___deltaTime_8 = value;
	}

	inline static int32_t get_offset_of_showFpsMeter_9() { return static_cast<int32_t>(offsetof(TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B, ___showFpsMeter_9)); }
	inline bool get_showFpsMeter_9() const { return ___showFpsMeter_9; }
	inline bool* get_address_of_showFpsMeter_9() { return &___showFpsMeter_9; }
	inline void set_showFpsMeter_9(bool value)
	{
		___showFpsMeter_9 = value;
	}

	inline static int32_t get_offset_of_fpsMeter_10() { return static_cast<int32_t>(offsetof(TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B, ___fpsMeter_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_fpsMeter_10() const { return ___fpsMeter_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_fpsMeter_10() { return &___fpsMeter_10; }
	inline void set_fpsMeter_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___fpsMeter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fpsMeter_10), (void*)value);
	}

	inline static int32_t get_offset_of_statusText_11() { return static_cast<int32_t>(offsetof(TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B, ___statusText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_statusText_11() const { return ___statusText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_statusText_11() { return &___statusText_11; }
	inline void set_statusText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___statusText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusText_11), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GoogleMobileAds.Placement.BannerAdGameObject
struct BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29  : public AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734
{
public:
	// GoogleMobileAds.Placement.AdSizeProperty GoogleMobileAds.Placement.BannerAdGameObject::adSize
	AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * ___adSize_10;
	// GoogleMobileAds.Api.AdPosition GoogleMobileAds.Placement.BannerAdGameObject::adPosition
	int32_t ___adPosition_11;
	// UnityEngine.Vector2 GoogleMobileAds.Placement.BannerAdGameObject::adPositionOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___adPositionOffset_12;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.BannerAdGameObject::onAdLoaded
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdLoaded_13;
	// GoogleMobileAds.Api.AdFailedToLoadEvent GoogleMobileAds.Placement.BannerAdGameObject::onAdFailedToLoad
	AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * ___onAdFailedToLoad_14;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.BannerAdGameObject::onAdOpening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdOpening_15;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.BannerAdGameObject::onAdClosed
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdClosed_16;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.BannerAdGameObject::onAdLeavingApplication
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdLeavingApplication_17;
	// GoogleMobileAds.Api.BannerView GoogleMobileAds.Placement.BannerAdGameObject::ad
	BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * ___ad_18;

public:
	inline static int32_t get_offset_of_adSize_10() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___adSize_10)); }
	inline AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * get_adSize_10() const { return ___adSize_10; }
	inline AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 ** get_address_of_adSize_10() { return &___adSize_10; }
	inline void set_adSize_10(AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * value)
	{
		___adSize_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adSize_10), (void*)value);
	}

	inline static int32_t get_offset_of_adPosition_11() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___adPosition_11)); }
	inline int32_t get_adPosition_11() const { return ___adPosition_11; }
	inline int32_t* get_address_of_adPosition_11() { return &___adPosition_11; }
	inline void set_adPosition_11(int32_t value)
	{
		___adPosition_11 = value;
	}

	inline static int32_t get_offset_of_adPositionOffset_12() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___adPositionOffset_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_adPositionOffset_12() const { return ___adPositionOffset_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_adPositionOffset_12() { return &___adPositionOffset_12; }
	inline void set_adPositionOffset_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___adPositionOffset_12 = value;
	}

	inline static int32_t get_offset_of_onAdLoaded_13() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___onAdLoaded_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdLoaded_13() const { return ___onAdLoaded_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdLoaded_13() { return &___onAdLoaded_13; }
	inline void set_onAdLoaded_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdLoaded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdLoaded_13), (void*)value);
	}

	inline static int32_t get_offset_of_onAdFailedToLoad_14() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___onAdFailedToLoad_14)); }
	inline AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * get_onAdFailedToLoad_14() const { return ___onAdFailedToLoad_14; }
	inline AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 ** get_address_of_onAdFailedToLoad_14() { return &___onAdFailedToLoad_14; }
	inline void set_onAdFailedToLoad_14(AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * value)
	{
		___onAdFailedToLoad_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdFailedToLoad_14), (void*)value);
	}

	inline static int32_t get_offset_of_onAdOpening_15() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___onAdOpening_15)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdOpening_15() const { return ___onAdOpening_15; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdOpening_15() { return &___onAdOpening_15; }
	inline void set_onAdOpening_15(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdOpening_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdOpening_15), (void*)value);
	}

	inline static int32_t get_offset_of_onAdClosed_16() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___onAdClosed_16)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdClosed_16() const { return ___onAdClosed_16; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdClosed_16() { return &___onAdClosed_16; }
	inline void set_onAdClosed_16(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdClosed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdClosed_16), (void*)value);
	}

	inline static int32_t get_offset_of_onAdLeavingApplication_17() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___onAdLeavingApplication_17)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdLeavingApplication_17() const { return ___onAdLeavingApplication_17; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdLeavingApplication_17() { return &___onAdLeavingApplication_17; }
	inline void set_onAdLeavingApplication_17(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdLeavingApplication_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdLeavingApplication_17), (void*)value);
	}

	inline static int32_t get_offset_of_ad_18() { return static_cast<int32_t>(offsetof(BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29, ___ad_18)); }
	inline BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * get_ad_18() const { return ___ad_18; }
	inline BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 ** get_address_of_ad_18() { return &___ad_18; }
	inline void set_ad_18(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * value)
	{
		___ad_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ad_18), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// GoogleMobileAds.Placement.InterstitialAdGameObject
struct InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE  : public AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734
{
public:
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.InterstitialAdGameObject::onAdLoaded
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdLoaded_10;
	// GoogleMobileAds.Api.AdFailedToLoadEvent GoogleMobileAds.Placement.InterstitialAdGameObject::onAdFailedToLoad
	AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * ___onAdFailedToLoad_11;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.InterstitialAdGameObject::onAdOpening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdOpening_12;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.InterstitialAdGameObject::onAdClosed
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdClosed_13;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.InterstitialAdGameObject::onAdLeavingApplication
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdLeavingApplication_14;
	// GoogleMobileAds.Api.InterstitialAd GoogleMobileAds.Placement.InterstitialAdGameObject::ad
	InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * ___ad_15;

public:
	inline static int32_t get_offset_of_onAdLoaded_10() { return static_cast<int32_t>(offsetof(InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE, ___onAdLoaded_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdLoaded_10() const { return ___onAdLoaded_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdLoaded_10() { return &___onAdLoaded_10; }
	inline void set_onAdLoaded_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdLoaded_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdLoaded_10), (void*)value);
	}

	inline static int32_t get_offset_of_onAdFailedToLoad_11() { return static_cast<int32_t>(offsetof(InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE, ___onAdFailedToLoad_11)); }
	inline AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * get_onAdFailedToLoad_11() const { return ___onAdFailedToLoad_11; }
	inline AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 ** get_address_of_onAdFailedToLoad_11() { return &___onAdFailedToLoad_11; }
	inline void set_onAdFailedToLoad_11(AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * value)
	{
		___onAdFailedToLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdFailedToLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_onAdOpening_12() { return static_cast<int32_t>(offsetof(InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE, ___onAdOpening_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdOpening_12() const { return ___onAdOpening_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdOpening_12() { return &___onAdOpening_12; }
	inline void set_onAdOpening_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdOpening_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdOpening_12), (void*)value);
	}

	inline static int32_t get_offset_of_onAdClosed_13() { return static_cast<int32_t>(offsetof(InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE, ___onAdClosed_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdClosed_13() const { return ___onAdClosed_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdClosed_13() { return &___onAdClosed_13; }
	inline void set_onAdClosed_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdClosed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdClosed_13), (void*)value);
	}

	inline static int32_t get_offset_of_onAdLeavingApplication_14() { return static_cast<int32_t>(offsetof(InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE, ___onAdLeavingApplication_14)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdLeavingApplication_14() const { return ___onAdLeavingApplication_14; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdLeavingApplication_14() { return &___onAdLeavingApplication_14; }
	inline void set_onAdLeavingApplication_14(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdLeavingApplication_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdLeavingApplication_14), (void*)value);
	}

	inline static int32_t get_offset_of_ad_15() { return static_cast<int32_t>(offsetof(InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE, ___ad_15)); }
	inline InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * get_ad_15() const { return ___ad_15; }
	inline InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 ** get_address_of_ad_15() { return &___ad_15; }
	inline void set_ad_15(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * value)
	{
		___ad_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ad_15), (void*)value);
	}
};


// GoogleMobileAds.Placement.RewardedAdGameObject
struct RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8  : public AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734
{
public:
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.RewardedAdGameObject::onAdLoaded
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdLoaded_10;
	// GoogleMobileAds.Api.AdFailedToLoadEvent GoogleMobileAds.Placement.RewardedAdGameObject::onAdFailedToLoad
	AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * ___onAdFailedToLoad_11;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.RewardedAdGameObject::onAdFailedToShow
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdFailedToShow_12;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.RewardedAdGameObject::onAdOpening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdOpening_13;
	// GoogleMobileAds.Api.UserEarnedRewardEvent GoogleMobileAds.Placement.RewardedAdGameObject::onUserEarnedReward
	UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * ___onUserEarnedReward_14;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.RewardedAdGameObject::onAdClosed
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdClosed_15;
	// GoogleMobileAds.Api.RewardedAd GoogleMobileAds.Placement.RewardedAdGameObject::ad
	RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * ___ad_16;

public:
	inline static int32_t get_offset_of_onAdLoaded_10() { return static_cast<int32_t>(offsetof(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8, ___onAdLoaded_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdLoaded_10() const { return ___onAdLoaded_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdLoaded_10() { return &___onAdLoaded_10; }
	inline void set_onAdLoaded_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdLoaded_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdLoaded_10), (void*)value);
	}

	inline static int32_t get_offset_of_onAdFailedToLoad_11() { return static_cast<int32_t>(offsetof(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8, ___onAdFailedToLoad_11)); }
	inline AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * get_onAdFailedToLoad_11() const { return ___onAdFailedToLoad_11; }
	inline AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 ** get_address_of_onAdFailedToLoad_11() { return &___onAdFailedToLoad_11; }
	inline void set_onAdFailedToLoad_11(AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * value)
	{
		___onAdFailedToLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdFailedToLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_onAdFailedToShow_12() { return static_cast<int32_t>(offsetof(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8, ___onAdFailedToShow_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdFailedToShow_12() const { return ___onAdFailedToShow_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdFailedToShow_12() { return &___onAdFailedToShow_12; }
	inline void set_onAdFailedToShow_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdFailedToShow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdFailedToShow_12), (void*)value);
	}

	inline static int32_t get_offset_of_onAdOpening_13() { return static_cast<int32_t>(offsetof(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8, ___onAdOpening_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdOpening_13() const { return ___onAdOpening_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdOpening_13() { return &___onAdOpening_13; }
	inline void set_onAdOpening_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdOpening_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdOpening_13), (void*)value);
	}

	inline static int32_t get_offset_of_onUserEarnedReward_14() { return static_cast<int32_t>(offsetof(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8, ___onUserEarnedReward_14)); }
	inline UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * get_onUserEarnedReward_14() const { return ___onUserEarnedReward_14; }
	inline UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 ** get_address_of_onUserEarnedReward_14() { return &___onUserEarnedReward_14; }
	inline void set_onUserEarnedReward_14(UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * value)
	{
		___onUserEarnedReward_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUserEarnedReward_14), (void*)value);
	}

	inline static int32_t get_offset_of_onAdClosed_15() { return static_cast<int32_t>(offsetof(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8, ___onAdClosed_15)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdClosed_15() const { return ___onAdClosed_15; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdClosed_15() { return &___onAdClosed_15; }
	inline void set_onAdClosed_15(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdClosed_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdClosed_15), (void*)value);
	}

	inline static int32_t get_offset_of_ad_16() { return static_cast<int32_t>(offsetof(RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8, ___ad_16)); }
	inline RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * get_ad_16() const { return ___ad_16; }
	inline RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 ** get_address_of_ad_16() { return &___ad_16; }
	inline void set_ad_16(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * value)
	{
		___ad_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ad_16), (void*)value);
	}
};


// GoogleMobileAds.Placement.RewardedInterstitialAdGameObject
struct RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80  : public AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734
{
public:
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::onAdLoaded
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdLoaded_10;
	// GoogleMobileAds.Api.AdFailedToLoadEvent GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::onAdFailedToLoad
	AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * ___onAdFailedToLoad_11;
	// GoogleMobileAds.Api.AdErrorEvent GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::onAdFailedToPresentFullScreenContent
	AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE * ___onAdFailedToPresentFullScreenContent_12;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::onAdDidPresentFullScreenContent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdDidPresentFullScreenContent_13;
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::onAdDidDismissFullScreenContent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onAdDidDismissFullScreenContent_14;
	// GoogleMobileAds.Api.UserEarnedRewardEvent GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::onUserEarnedReward
	UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * ___onUserEarnedReward_15;
	// GoogleMobileAds.Api.RewardedInterstitialAd GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::ad
	RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * ___ad_16;

public:
	inline static int32_t get_offset_of_onAdLoaded_10() { return static_cast<int32_t>(offsetof(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80, ___onAdLoaded_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdLoaded_10() const { return ___onAdLoaded_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdLoaded_10() { return &___onAdLoaded_10; }
	inline void set_onAdLoaded_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdLoaded_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdLoaded_10), (void*)value);
	}

	inline static int32_t get_offset_of_onAdFailedToLoad_11() { return static_cast<int32_t>(offsetof(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80, ___onAdFailedToLoad_11)); }
	inline AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * get_onAdFailedToLoad_11() const { return ___onAdFailedToLoad_11; }
	inline AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 ** get_address_of_onAdFailedToLoad_11() { return &___onAdFailedToLoad_11; }
	inline void set_onAdFailedToLoad_11(AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * value)
	{
		___onAdFailedToLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdFailedToLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_onAdFailedToPresentFullScreenContent_12() { return static_cast<int32_t>(offsetof(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80, ___onAdFailedToPresentFullScreenContent_12)); }
	inline AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE * get_onAdFailedToPresentFullScreenContent_12() const { return ___onAdFailedToPresentFullScreenContent_12; }
	inline AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE ** get_address_of_onAdFailedToPresentFullScreenContent_12() { return &___onAdFailedToPresentFullScreenContent_12; }
	inline void set_onAdFailedToPresentFullScreenContent_12(AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE * value)
	{
		___onAdFailedToPresentFullScreenContent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdFailedToPresentFullScreenContent_12), (void*)value);
	}

	inline static int32_t get_offset_of_onAdDidPresentFullScreenContent_13() { return static_cast<int32_t>(offsetof(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80, ___onAdDidPresentFullScreenContent_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdDidPresentFullScreenContent_13() const { return ___onAdDidPresentFullScreenContent_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdDidPresentFullScreenContent_13() { return &___onAdDidPresentFullScreenContent_13; }
	inline void set_onAdDidPresentFullScreenContent_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdDidPresentFullScreenContent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdDidPresentFullScreenContent_13), (void*)value);
	}

	inline static int32_t get_offset_of_onAdDidDismissFullScreenContent_14() { return static_cast<int32_t>(offsetof(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80, ___onAdDidDismissFullScreenContent_14)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onAdDidDismissFullScreenContent_14() const { return ___onAdDidDismissFullScreenContent_14; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onAdDidDismissFullScreenContent_14() { return &___onAdDidDismissFullScreenContent_14; }
	inline void set_onAdDidDismissFullScreenContent_14(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onAdDidDismissFullScreenContent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdDidDismissFullScreenContent_14), (void*)value);
	}

	inline static int32_t get_offset_of_onUserEarnedReward_15() { return static_cast<int32_t>(offsetof(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80, ___onUserEarnedReward_15)); }
	inline UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * get_onUserEarnedReward_15() const { return ___onUserEarnedReward_15; }
	inline UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 ** get_address_of_onUserEarnedReward_15() { return &___onUserEarnedReward_15; }
	inline void set_onUserEarnedReward_15(UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * value)
	{
		___onUserEarnedReward_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUserEarnedReward_15), (void*)value);
	}

	inline static int32_t get_offset_of_ad_16() { return static_cast<int32_t>(offsetof(RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80, ___ad_16)); }
	inline RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * get_ad_16() const { return ___ad_16; }
	inline RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC ** get_address_of_ad_16() { return &___ad_16; }
	inline void set_ad_16(RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * value)
	{
		___ad_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ad_16), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// GoogleMobileAds.Placement.GoogleMobileAdsPlacements[]
struct GoogleMobileAdsPlacementsU5BU5D_tE5535106414727FCF34CC50E42F4FDB2F2152B91  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * m_Items[1];

public:
	inline GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_LoadAll_TisRuntimeObject_m70F6C48BD50F3B57D39D3B8A82D2F4DD2BDC3CC7_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAd<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AdGameObjectPool_GetAd_TisRuntimeObject_mC57950423C70BA43653E16F0E4A1B77F2B463720_gshared (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, String_t* ___placementName0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.AdGameObject::AutoLoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject_AutoLoadAd_mFB4E7D50FE9A76481A25AC4698BAB59872865DCF (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mEC6564ACB4A7E944E513C1BF39002FAE3E35ED44 (Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * Builder_Build_mA29B4BCC3837D128790FB5740BE36ECBC9B17E75 (Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * __this, const RuntimeMethod* method);
// GoogleMobileAds.Common.InitCompleteExecutor GoogleMobileAds.Common.InitCompleteExecutor::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D * InitCompleteExecutor_get_Instance_mC7C548252F6D8B209D17C28CED62073A8EFD679A (const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Common.InitCompleteExecutor::InvokeOnInitComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitCompleteExecutor_InvokeOnInitComplete_m8B6B5074A7924E585F95C100669AAE771E194F3A (InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// GoogleMobileAds.Placement.AdGameObjectPool GoogleMobileAds.Placement.AdGameObjectPool::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * AdGameObjectPool_get_Instance_m7BE56426512AEB5CEDBC4E6C87B081AE266644DC (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.AdGameObjectPool::Add(System.Type,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, Type_t * ___adPlacementType0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go1, bool ___persistent2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.AdGameObjectPool::Remove(System.Type,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObjectPool_Remove_mE333351DFAB5478A3C680014AB505EF0FDCDB325 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, Type_t * ___adPlacementType0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go1, bool ___persistent2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.AdGameObject::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject_LoadAd_mA5562D9C80E582BCAC1E1A124EFA645971909404 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Placement.PoolEntry>::.ctor()
inline void Dictionary_2__ctor_m8E498EE0190E61D0730D41AC3893FA61B738DD87 (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Placement.AdGameObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObjectPool__ctor_m7A1C63654D702E0C001040A38B8E97F2816A2B98 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String GoogleMobileAds.Placement.AdGameObjectPool::GenerateObjectKey(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdGameObjectPool_GenerateObjectKey_m2E76ECACD550F7C18B4192A378229ECB6BAD9064 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, Type_t * ___adPlacementType0, String_t* ___gameObjectName1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Placement.PoolEntry>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mDC2E9232E18E8787DBA7C39663462853599E5D66 (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * __this, String_t* ___key0, PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 *, String_t*, PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.String GoogleMobileAds.Placement.PoolEntry::get_SceneNameOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PoolEntry_get_SceneNameOrigin_mC81168A3E707DCFDA5FCC2C69A8A25D8040AA2EC_inline (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.OperationCanceledException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m48C1169AD81D51B28826AC875BC850AD952AFA22 (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.PoolEntry::.ctor(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolEntry__ctor_m20E167DDDDF98C602B11C47EC25DCA5EE0548B7E (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, bool ___persistent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Placement.PoolEntry>::Add(!0,!1)
inline void Dictionary_2_Add_m9D85DDCC05B8EB54832ED4B6350BE9D73E7FC740 (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * __this, String_t* ___key0, PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 *, String_t*, PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Placement.PoolEntry>::Remove(!0)
inline bool Dictionary_2_Remove_mD613F1AEF2A80F9CDFDE7820B16F12AF1F622E91 (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Placement.PoolEntry>::Clear()
inline void Dictionary_2_Clear_m7D08FEDF7E310844B587CACCF9F2476A738000EF (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdSize::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSize__ctor_mE27F5EFD57AD454E17566425A1A04AD4CF9F4CA9 (AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdSize GoogleMobileAds.Placement.AdSizeProperty::ToAnchoredAdaptiveAdSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * AdSizeProperty_ToAnchoredAdaptiveAdSize_m870456F9F512C1AF33714CC922D0D0FB125E2096 (AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Int32 GoogleMobileAds.Api.MobileAds/Utils::GetDeviceSafeWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetDeviceSafeWidth_m79911C9DA9303DBE1AB555B20B0FF4BA13B6F7AB (const RuntimeMethod* method);
// System.Int32 GoogleMobileAds.Placement.AdSizeProperty::CalculateAdWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdSizeProperty_CalculateAdWidth_m7370B72E31491A04B7A65C195C719760ED169A42 (int32_t ___percentScreenWidth0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * AdSize_GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth_m154A3242B8FD51055242042758324FC3FEB22000 (int32_t ___width0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetLandscapeAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * AdSize_GetLandscapeAnchoredAdaptiveBannerAdSizeWithWidth_mBC586F8AA2CB1490CA9C8BC364C0C71F6104C1B1 (int32_t ___width0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * AdSize_GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth_mE9CDAAF34C0D5B600BDF5A45525CD2222FA681A5 (int32_t ___width0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.AdGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject__ctor_m60D93F0CA396A59B5B9ECCF108F4ED785B162DC8 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Placement.AdGameObject::AddGameObjectToPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdGameObject_AddGameObjectToPool_m9745CB8EE12A11EEA62D669B5DB34324838F3156 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Placement.AdGameObject::RemoveGameObjectFromPoolIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdGameObject_RemoveGameObjectFromPoolIfNeeded_m7329E6FB94D1CC86C63D828A1D29D2FD45F12D96 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mD4576ADC6F0FF45F7A2DE148D1467FCF323632C6 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, const RuntimeMethod* method);
// System.String GoogleMobileAds.Placement.AdGameObject::get_AdUnitId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdGameObject_get_AdUnitId_m02C309F2A1100877E5D965BAF4EECE20E0F5EB67 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdSize GoogleMobileAds.Placement.AdSizeProperty::ToAdSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * AdSizeProperty_ToAdSize_m48B076A10FA0AE9A4AA0234F11F064A353581767 (AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_mB1C15D892356B0E0626805DABCA0B49BF8556F4E (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, String_t* p0, AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m20EF5C502F831B8E06998EB9708EF4736763B4EC (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, String_t* p0, AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * p1, int32_t p2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_mC393D587280C5F2E9786BDBEF2DA62E7E98BB8FD (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___request0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m8B118E0BDE80EC549D1566662C4E772ACCDB8288 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_m011AAB6C396C58E31CB6B63C2DE3D7465AED6E7F (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdLoaded_m67C042AF5C75F1197BEB23EFE7F00ED50170EC23 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mAB702EC6A295AEC36C6197217872AAFE98BE3FDF (EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFailedToLoad_mDF1DF2787E38A002C1EB410D8A68F4C0288B95AA (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdOpening_m06F30C28A524A65E28F964568C302475978C375A (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdClosed_m998E8A4CE750BC8E1D595B086DB80AD3BDDF7373 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdLeavingApplication_m39F1C6D90866DB7B39F3F8E648C6BA0FC0616796 (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::InvokeInUpdate(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___eventParam0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0__ctor_mB1DE2D1220B414210DAD93B17D373DDAFD00345B (U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::ExecuteInUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_ExecuteInUpdate_m759DD47B457058EE9EB59094AAF66339F01FD3B4 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::LoadAll<GoogleMobileAds.Placement.GoogleMobileAdsPlacements>(System.String)
inline GoogleMobileAdsPlacementsU5BU5D_tE5535106414727FCF34CC50E42F4FDB2F2152B91* Resources_LoadAll_TisGoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_mC20F3A27646B198E2ECED15CC905024D61BFDA8C (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GoogleMobileAdsPlacementsU5BU5D_tE5535106414727FCF34CC50E42F4FDB2F2152B91* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m70F6C48BD50F3B57D39D3B8A82D2F4DD2BDC3CC7_gshared)(___path0, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m50124A019EC4314BB3CE6AA9FF92ABEE726B3523 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m051B7CB234EBA2B60D6997B54805BB5FF154F4C8 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mB3716AF9CAC24F8439FDB615319DCF84DAA9C0C8 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___request0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m6111A6CEA42D17DDF9C6E3A2D8E6FC9E7C46EA28 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_m83539BF410CBD57CFD79E2E92463743F85B5E15F (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m3FB1FF078735A199793D4C668A4DEC4C8225214F (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_m18047F820C801CC2C7457695010A1C29165B3998 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m8D6A71AED40167FC8AA4BE420AF5D469ABCBFB1D (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLeavingApplication_m8FDAF39F69749580C324A38120A08645879AAD92 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0__ctor_m36575161CE29760E0C68B21206C7BD52E8B8E73A (U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m3FDF5017F3E3DACC4920A7628229FD95D827FEF1 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_m599E1713AE11404161630B29EBB3D6F274FD481D (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___request0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.RewardedAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m3443DC72C16E7720A5A2618FB131D07A18D76BBE (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_m97EB3DC60C0273CF7F5A49E5F6D9C3E6161A9550 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_m7AAD3986C80F0A53413B0549EF5FA09D204C34BC (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA (EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToLoad_mD26FFF4D6410C96ABFA9EF9A4A68ED4DFE90CD20 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToShow_mA147D3488D43A6D7D6241AAED5E9BE1AF82D5038 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdOpening_m97C39DD2776451A509628651EDED0F3DA286C405 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2 (EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_m3631CC6509FDB177D1E4EB0CDF8D01F015801409 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_m11B7E72270E0585F0441EF9B491576EBB644D790 (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0__ctor_m48C41637FF8FA9569E74E5C1293AC8DED325E393 (U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey1__ctor_m2ABD3E61770247C6DDC24501040F3CFC73CDB811 (U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m262EADF9A5C0B8271F55AE75258689BAB1EB5E16 (Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::LoadAd(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_LoadAd_m77ADFC866172BA43A8978B3AECA981C084237465 (String_t* ___adUnitID0, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___request1, Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75 * ___adLoadCallback2, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDD1649A988F638E91A3267DF7392F10FB5B1B025 (Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::Show(System.Action`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_Show_m534AFCB39D25B1BC3132BF0B14BA81BCFA9DF423 (RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * __this, Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734 * ___userEarnedRewardCallback0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdDidPresentFullScreenContent_m85359BFF81C9AAEF185A8DEFB5FE894A213014A3 (RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdDidDismissFullScreenContent_m210C8EBC0327FA3E8042EAF178390F052366218D (RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdFailedToPresentFullScreenContent_m5093BC2DE7F510D5079968B0CC4FD4E1986AF342 (RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * __this, EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0__ctor_mDCB3418C9A8FDA8B3F6AA553DDC5260E23A2A7BA (U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowIfLoadedU3Ec__AnonStorey1__ctor_m1EA74E45CA8ABEF65657AEAF54BA73C47679ED8A (U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey2__ctor_mD881DC11C2E09B78CB4616E4F5EBEC80154A449D (U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 * __this, const RuntimeMethod* method);
// TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAd<GoogleMobileAds.Placement.BannerAdGameObject>(System.String)
inline BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * AdGameObjectPool_GetAd_TisBannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29_m65832E679CBA7C7DFF4BB70A8737754167C168C5 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, String_t* ___placementName0, const RuntimeMethod* method)
{
	return ((  BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * (*) (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E *, String_t*, const RuntimeMethod*))AdGameObjectPool_GetAd_TisRuntimeObject_mC57950423C70BA43653E16F0E4A1B77F2B463720_gshared)(__this, ___placementName0, method);
}
// TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAd<GoogleMobileAds.Placement.InterstitialAdGameObject>(System.String)
inline InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * AdGameObjectPool_GetAd_TisInterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE_m620CDC39AD5F62B2FA325613261AC4D7DB3A26DF (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, String_t* ___placementName0, const RuntimeMethod* method)
{
	return ((  InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * (*) (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E *, String_t*, const RuntimeMethod*))AdGameObjectPool_GetAd_TisRuntimeObject_mC57950423C70BA43653E16F0E4A1B77F2B463720_gshared)(__this, ___placementName0, method);
}
// TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAd<GoogleMobileAds.Placement.RewardedAdGameObject>(System.String)
inline RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * AdGameObjectPool_GetAd_TisRewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8_m05352E0CA267422AB9B6DC4718830441B1077707 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, String_t* ___placementName0, const RuntimeMethod* method)
{
	return ((  RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * (*) (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E *, String_t*, const RuntimeMethod*))AdGameObjectPool_GetAd_TisRuntimeObject_mC57950423C70BA43653E16F0E4A1B77F2B463720_gshared)(__this, ___placementName0, method);
}
// TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAd<GoogleMobileAds.Placement.RewardedInterstitialAdGameObject>(System.String)
inline RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * AdGameObjectPool_GetAd_TisRewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80_mE72F5D337D221431A2BE6588298313D2A8457142 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, String_t* ___placementName0, const RuntimeMethod* method)
{
	return ((  RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * (*) (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E *, String_t*, const RuntimeMethod*))AdGameObjectPool_GetAd_TisRuntimeObject_mC57950423C70BA43653E16F0E4A1B77F2B463720_gshared)(__this, ___placementName0, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::SetiOSAppPauseOnBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetiOSAppPauseOnBackground_mF04207DBBF2BF553246777A1431758A68202FB25 (bool ___pause0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55 (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m162D01EF10764A82B218C4D6496F71CF4F50529B (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * ___initCompleteAction0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::DestroyAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_DestroyAd_mAFBB0514882B08DC0395BB54F9E42C356C553039 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::ShowIfLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_ShowIfLoaded_m752DD4E9F74F60E9F23E144378F8CFB47E387134 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::ShowIfLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_ShowIfLoaded_mC28A512B66C894FCC85D369CB534A8F3DE302BAF (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::DestroyAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_DestroyAd_m427B5EDFE75AFF61BC93F4D4B40BEA528ED35C60 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::ShowIfLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_ShowIfLoaded_mE6447BD696B55261073CA20E4FFE59F6D47C8132 (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddTestDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * Builder_AddTestDevice_mD624252D7CD2B72D5664314FE4966A4EBDB55792 (Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * __this, String_t* ___deviceId0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * Builder_AddKeyword_m7322BEAD68354106B05F57E2F52BB4E7A6C0FA82 (Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * __this, String_t* ___keyword0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::TagForChildDirectedTreatment(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * Builder_TagForChildDirectedTreatment_m0E81C3DBD074F82F257CD81AE3E0A7504466D11A (Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * __this, bool ___tagForChildDirectedTreatment0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddExtra(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * Builder_AddExtra_m8300B1045B2DD21D018AE65A221880EBEB46C86E (Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<GoogleMobileAds.Api.Reward>::.ctor()
inline void UnityEvent_1__ctor_m0B1B8BA7EAC84EDCDCA542B70695041A5A7A1AC4 (UnityEvent_1_t57729AC9C63236D632215A051CBE27F805916414 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t57729AC9C63236D632215A051CBE27F805916414 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdFailedToLoadEventArgs_get_Message_m3C8512B88C0BFDB317764CF85DB5763797EB3EFF_inline (AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(!0)
inline void UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.String GoogleMobileAds.Api.AdErrorEventArgs::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdErrorEventArgs_get_Message_m829E43E951CA3F44367B12E0EB02D3E99D830B27_inline (AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<GoogleMobileAds.Api.Reward>::Invoke(!0)
inline void UnityEvent_1_Invoke_mEE4525B22905335325B6864F18D5235CE328149A (UnityEvent_1_t57729AC9C63236D632215A051CBE27F805916414 * __this, Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t57729AC9C63236D632215A051CBE27F805916414 *, Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
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
// System.Void GoogleMobileAds.Api.AdErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEvent__ctor_m055081E7B818E7AC27BF919E55C9B80FDF4220CB (AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Api.AdFailedToLoadEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEvent__ctor_m2D8CB4EFE0A0E72F93C447DA0C19EEE180458F5A (AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Placement.AdGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject__ctor_m60D93F0CA396A59B5B9ECCF108F4ED785B162DC8 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObject::set_AndroidAdUnitId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject_set_AndroidAdUnitId_m56F05C1D361EAD9179AA440F7CAE9461340476E6 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FA702279C1566E02D85C69C853CA51B2A29BC15)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdGameObject_set_AndroidAdUnitId_m56F05C1D361EAD9179AA440F7CAE9461340476E6_RuntimeMethod_var)));
	}

IL_0011:
	{
		String_t* L_2 = ___value0;
		__this->set_androidAdUnitId_6(L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObject::set_IOSAdUnitId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject_set_IOSAdUnitId_m268B6F3F8B4992438B7D5B9A83F13AD30264C1EA (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FA702279C1566E02D85C69C853CA51B2A29BC15)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdGameObject_set_IOSAdUnitId_m268B6F3F8B4992438B7D5B9A83F13AD30264C1EA_RuntimeMethod_var)));
	}

IL_0011:
	{
		String_t* L_2 = ___value0;
		__this->set_iOSAdUnitId_7(L_2);
		return;
	}
}
// System.String GoogleMobileAds.Placement.AdGameObject::get_AdUnitId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdGameObject_get_AdUnitId_m02C309F2A1100877E5D965BAF4EECE20E0F5EB67 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral302065C2D63594DEA483E51364795478D08A2D78);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = __this->get_androidAdUnitId_6();
		return L_1;
	}

IL_0013:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = __this->get_iOSAdUnitId_7();
		return L_3;
	}

IL_0025:
	{
		return _stringLiteral302065C2D63594DEA483E51364795478D08A2D78;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject_Start_mFE35E21523802558291AC51DE690ED71008A9246 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_autoLoadEnabled_9();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		AdGameObject_AutoLoadAd_mFB4E7D50FE9A76481A25AC4698BAB59872865DCF(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObject::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject_LoadAd_mA5562D9C80E582BCAC1E1A124EFA645971909404 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * L_0 = (Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C *)il2cpp_codegen_object_new(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C_il2cpp_TypeInfo_var);
		Builder__ctor_mEC6564ACB4A7E944E513C1BF39002FAE3E35ED44(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_1;
		L_1 = Builder_Build_mA29B4BCC3837D128790FB5740BE36ECBC9B17E75(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * >::Invoke(5 /* System.Void GoogleMobileAds.Placement.AdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */, __this, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObject::AutoLoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject_AutoLoadAd_mFB4E7D50FE9A76481A25AC4698BAB59872865DCF (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdGameObject_U3CAutoLoadAdU3Em__0_m74734F4BFEEC442797B1FEEC198B3371A33DBA1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InitCompleteExecutor_t55301797AD65594C10E3B2CE16F3367082EE2B0D * L_0;
		L_0 = InitCompleteExecutor_get_Instance_mC7C548252F6D8B209D17C28CED62073A8EFD679A(/*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)AdGameObject_U3CAutoLoadAdU3Em__0_m74734F4BFEEC442797B1FEEC198B3371A33DBA1A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		InitCompleteExecutor_InvokeOnInitComplete_m8B6B5074A7924E585F95C100669AAE771E194F3A(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GoogleMobileAds.Placement.AdGameObject::AddGameObjectToPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdGameObject_AddGameObjectToPool_m9745CB8EE12A11EEA62D669B5DB34324838F3156 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method)
{
	ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * V_0 = NULL;
	bool V_1 = false;
	OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_0;
		L_0 = AdGameObjectPool_get_Instance_m7BE56426512AEB5CEDBC4E6C87B081AE266644DC(/*hidden argument*/NULL);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_3 = __this->get_persistent_8();
		NullCheck(L_0);
		AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_003c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0021:
	{ // begin catch(System.ArgumentException)
		V_0 = ((ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003e;
	} // end catch (depth: 1)

CATCH_0034:
	{ // begin catch(System.OperationCanceledException)
		V_2 = ((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)IL2CPP_GET_ACTIVE_EXCEPTION(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *));
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003e;
	} // end catch (depth: 1)

IL_003c:
	{
		return (bool)1;
	}

IL_003e:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean GoogleMobileAds.Placement.AdGameObject::RemoveGameObjectFromPoolIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdGameObject_RemoveGameObjectFromPoolIfNeeded_m7329E6FB94D1CC86C63D828A1D29D2FD45F12D96 (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_persistent_8();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_1;
		L_1 = AdGameObjectPool_get_Instance_m7BE56426512AEB5CEDBC4E6C87B081AE266644DC(/*hidden argument*/NULL);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_4 = __this->get_persistent_8();
		NullCheck(L_1);
		AdGameObjectPool_Remove_mE333351DFAB5478A3C680014AB505EF0FDCDB325(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObject::<AutoLoadAd>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObject_U3CAutoLoadAdU3Em__0_m74734F4BFEEC442797B1FEEC198B3371A33DBA1A (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 * __this, const RuntimeMethod* method)
{
	{
		AdGameObject_LoadAd_mA5562D9C80E582BCAC1E1A124EFA645971909404(__this, /*hidden argument*/NULL);
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
// System.Void GoogleMobileAds.Placement.AdGameObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObjectPool__ctor_m7A1C63654D702E0C001040A38B8E97F2816A2B98 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8E498EE0190E61D0730D41AC3893FA61B738DD87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * L_0 = (Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 *)il2cpp_codegen_object_new(Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8E498EE0190E61D0730D41AC3893FA61B738DD87(L_0, /*hidden argument*/Dictionary_2__ctor_m8E498EE0190E61D0730D41AC3893FA61B738DD87_RuntimeMethod_var);
		__this->set_objects_1(L_0);
		return;
	}
}
// GoogleMobileAds.Placement.AdGameObjectPool GoogleMobileAds.Placement.AdGameObjectPool::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * AdGameObjectPool_get_Instance_m7BE56426512AEB5CEDBC4E6C87B081AE266644DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_0 = ((AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_StaticFields*)il2cpp_codegen_static_fields_for(AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_1 = (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E *)il2cpp_codegen_object_new(AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_il2cpp_TypeInfo_var);
		AdGameObjectPool__ctor_m7A1C63654D702E0C001040A38B8E97F2816A2B98(L_1, /*hidden argument*/NULL);
		((AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_StaticFields*)il2cpp_codegen_static_fields_for(AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_il2cpp_TypeInfo_var))->set_instance_0(L_1);
	}

IL_0014:
	{
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_2 = ((AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_StaticFields*)il2cpp_codegen_static_fields_for(AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E_il2cpp_TypeInfo_var))->get_instance_0();
		return L_2;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObjectPool::Add(System.Type,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, Type_t * ___adPlacementType0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go1, bool ___persistent2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9D85DDCC05B8EB54832ED4B6350BE9D73E7FC740_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDC2E9232E18E8787DBA7C39663462853599E5D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * V_1 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * V_4 = NULL;
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral65F4002855AF1D7AE1CCEE7474C9D1A59CCE6622)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55_RuntimeMethod_var)));
	}

IL_0017:
	{
		Type_t * L_3 = ___adPlacementType0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___go1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = AdGameObjectPool_GenerateObjectKey_m2E76ECACD550F7C18B4192A378229ECB6BAD9064(__this, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		V_1 = (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 *)NULL;
		Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * L_7 = __this->get_objects_1();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_mDC2E9232E18E8787DBA7C39663462853599E5D66(L_7, L_8, (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mDC2E9232E18E8787DBA7C39663462853599E5D66_RuntimeMethod_var);
		PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		bool L_11 = ___persistent2;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = PoolEntry_get_SceneNameOrigin_mC81168A3E707DCFDA5FCC2C69A8A25D8040AA2EC_inline(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ___go1;
		NullCheck(L_14);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_15;
		L_15 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		String_t* L_16;
		L_16 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_17;
		L_17 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_13, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0066;
		}
	}
	{
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_18 = (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var)));
		OperationCanceledException__ctor_m48C1169AD81D51B28826AC875BC850AD952AFA22(L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55_RuntimeMethod_var)));
	}

IL_0066:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = ___go1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_19, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = ___go1;
		NullCheck(L_21);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_22;
		L_22 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		String_t* L_23;
		L_23 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
		PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = PoolEntry_get_SceneNameOrigin_mC81168A3E707DCFDA5FCC2C69A8A25D8040AA2EC_inline(L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2998B3DF6B3BFF8111BE6FFCC6B77AAC31AF7C80)), L_20, L_23, L_25, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_27 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_27, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55_RuntimeMethod_var)));
	}

IL_0090:
	{
		Type_t * L_28 = ___adPlacementType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30;
		L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_31;
		L_31 = VirtFuncInvoker1< bool, Type_t * >::Invoke(101 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_28, L_30);
		if (L_31)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_32 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD228077BD7B13FF3F5F9CDBB0EEBC4BE4D91013B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55_RuntimeMethod_var)));
	}

IL_00b0:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = ___go1;
		Type_t * L_34 = ___adPlacementType0;
		NullCheck(L_33);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_35;
		L_35 = GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473(L_33, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_36 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d1;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_38 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19881E8ACEDA55DB44C9A39D57ACB936FA8CEEAA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdGameObjectPool_Add_mE6209A9FDD99963DA63CB771064DD60A990B9F55_RuntimeMethod_var)));
	}

IL_00d1:
	{
		Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * L_39 = __this->get_objects_1();
		String_t* L_40 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = ___go1;
		bool L_42 = ___persistent2;
		PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * L_43 = (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 *)il2cpp_codegen_object_new(PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212_il2cpp_TypeInfo_var);
		PoolEntry__ctor_m20E167DDDDF98C602B11C47EC25DCA5EE0548B7E(L_43, L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_39);
		Dictionary_2_Add_m9D85DDCC05B8EB54832ED4B6350BE9D73E7FC740(L_39, L_40, L_43, /*hidden argument*/Dictionary_2_Add_m9D85DDCC05B8EB54832ED4B6350BE9D73E7FC740_RuntimeMethod_var);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObjectPool::Remove(System.Type,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObjectPool_Remove_mE333351DFAB5478A3C680014AB505EF0FDCDB325 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, Type_t * ___adPlacementType0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go1, bool ___persistent2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD613F1AEF2A80F9CDFDE7820B16F12AF1F622E91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * L_0 = __this->get_objects_1();
		Type_t * L_1 = ___adPlacementType0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___go1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = AdGameObjectPool_GenerateObjectKey_m2E76ECACD550F7C18B4192A378229ECB6BAD9064(__this, L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_5;
		L_5 = Dictionary_2_Remove_mD613F1AEF2A80F9CDFDE7820B16F12AF1F622E91(L_0, L_4, /*hidden argument*/Dictionary_2_Remove_mD613F1AEF2A80F9CDFDE7820B16F12AF1F622E91_RuntimeMethod_var);
		return;
	}
}
// System.String GoogleMobileAds.Placement.AdGameObjectPool::GenerateObjectKey(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdGameObjectPool_GenerateObjectKey_m2E76ECACD550F7C18B4192A378229ECB6BAD9064 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, Type_t * ___adPlacementType0, String_t* ___gameObjectName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___adPlacementType0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = ___gameObjectName1;
		String_t* L_3;
		L_3 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GoogleMobileAds.Placement.AdGameObjectPool::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdGameObjectPool_Finalize_m9C98DE3A0A198AD6BE6C326B00DEB74F2B7BC232 (AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m7D08FEDF7E310844B587CACCF9F2476A738000EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t8EA7ECA7DA8F431F64D41640EF0F1BEAA281DC68 * L_0 = __this->get_objects_1();
		NullCheck(L_0);
		Dictionary_2_Clear_m7D08FEDF7E310844B587CACCF9F2476A738000EF(L_0, /*hidden argument*/Dictionary_2_Clear_m7D08FEDF7E310844B587CACCF9F2476A738000EF_RuntimeMethod_var);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
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
// System.Void GoogleMobileAds.Placement.AdPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdPlacement__ctor_mC95B33F4C3741853819D27CE15C247F529C8775A (AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_placementName_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GoogleMobileAds.Placement.AdPlacement::get_AdUnitId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdPlacement_get_AdUnitId_mC085CBE728BF1DEB04E9ACED4C723F7D058FDA1F (AdPlacement_t9D21AC609DF1EE69E1826ED2062D9EA54AE368C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral302065C2D63594DEA483E51364795478D08A2D78);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = __this->get_androidAdUnitId_2();
		return L_1;
	}

IL_0013:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = __this->get_iOSAdUnitId_3();
		return L_3;
	}

IL_0025:
	{
		return _stringLiteral302065C2D63594DEA483E51364795478D08A2D78;
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
// System.Void GoogleMobileAds.Placement.AdSizeProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSizeProperty__ctor_m3F3B83562A3B86159F7BAAE3961C0C54FEAAAA8C (AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.AdSize GoogleMobileAds.Placement.AdSizeProperty::ToAdSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * AdSizeProperty_ToAdSize_m48B076A10FA0AE9A4AA0234F11F064A353581767 (AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_type_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_003d;
	}

IL_001e:
	{
		int32_t L_2 = __this->get_width_1();
		int32_t L_3 = __this->get_height_2();
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_4 = (AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D *)il2cpp_codegen_object_new(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var);
		AdSize__ctor_mE27F5EFD57AD454E17566425A1A04AD4CF9F4CA9(L_4, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var);
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_5 = ((AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var))->get_SmartBanner_8();
		return L_5;
	}

IL_0036:
	{
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_6;
		L_6 = AdSizeProperty_ToAnchoredAdaptiveAdSize_m870456F9F512C1AF33714CC922D0D0FB125E2096(__this, /*hidden argument*/NULL);
		return L_6;
	}

IL_003d:
	{
		int32_t L_7 = __this->get_type_0();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_tE65D664BFE046EF99C5F84B2051D976C661A0B2D_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9085E018E38B9E513A06D1C509261A23A5563DEB)), L_9, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdSizeProperty_ToAdSize_m48B076A10FA0AE9A4AA0234F11F064A353581767_RuntimeMethod_var)));
	}
}
// GoogleMobileAds.Api.AdSize GoogleMobileAds.Placement.AdSizeProperty::ToAnchoredAdaptiveAdSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * AdSizeProperty_ToAnchoredAdaptiveAdSize_m870456F9F512C1AF33714CC922D0D0FB125E2096 (AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_width_1();
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var);
		int32_t L_1 = ((AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var))->get_FullWidth_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2;
		L_2 = Utils_GetDeviceSafeWidth_m79911C9DA9303DBE1AB555B20B0FF4BA13B6F7AB(/*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0025;
	}

IL_001a:
	{
		int32_t L_3 = __this->get_width_1();
		int32_t L_4;
		L_4 = AdSizeProperty_CalculateAdWidth_m7370B72E31491A04B7A65C195C719760ED169A42(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0025:
	{
		V_0 = G_B3_0;
		int32_t L_5 = __this->get_orientation_3();
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0044:
	{
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var);
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_8;
		L_8 = AdSize_GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth_m154A3242B8FD51055242042758324FC3FEB22000(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_004b:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var);
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_10;
		L_10 = AdSize_GetLandscapeAnchoredAdaptiveBannerAdSizeWithWidth_mBC586F8AA2CB1490CA9C8BC364C0C71F6104C1B1(L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0052:
	{
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D_il2cpp_TypeInfo_var);
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_12;
		L_12 = AdSize_GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth_mE9CDAAF34C0D5B600BDF5A45525CD2222FA681A5(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0059:
	{
		int32_t L_13 = __this->get_orientation_3();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Orientation_tAA32985C1371FF119E753379A6A751BE28F2225B_il2cpp_TypeInfo_var)), &L_14);
		String_t* L_16;
		L_16 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EE533855906753C2FCB315EA20CEEF1BA35457E)), L_15, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_17 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdSizeProperty_ToAnchoredAdaptiveAdSize_m870456F9F512C1AF33714CC922D0D0FB125E2096_RuntimeMethod_var)));
	}
}
// System.Int32 GoogleMobileAds.Placement.AdSizeProperty::CalculateAdWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdSizeProperty_CalculateAdWidth_m7370B72E31491A04B7A65C195C719760ED169A42 (int32_t ___percentScreenWidth0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___percentScreenWidth0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)50))))
		{
			goto IL_0011;
		}
	}
	{
		___percentScreenWidth0 = ((int32_t)50);
		goto IL_001d;
	}

IL_0011:
	{
		int32_t L_1 = ___percentScreenWidth0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)99))))
		{
			goto IL_001d;
		}
	}
	{
		___percentScreenWidth0 = ((int32_t)99);
	}

IL_001d:
	{
		int32_t L_2;
		L_2 = Utils_GetDeviceSafeWidth_m79911C9DA9303DBE1AB555B20B0FF4BA13B6F7AB(/*hidden argument*/NULL);
		int32_t L_3 = ___percentScreenWidth0;
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))/(int32_t)((int32_t)100)));
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
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject__ctor_m9BE532E0B393A0E6DC4C9FAA47309F9B10971789 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method)
{
	{
		AdGameObject__ctor_m60D93F0CA396A59B5B9ECCF108F4ED785B162DC8(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.BannerView GoogleMobileAds.Placement.BannerAdGameObject::get_BannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * BannerAdGameObject_get_BannerView_m623C8AB7073EE18242F2209115FC90AB1227CD01 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method)
{
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_0 = __this->get_ad_18();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_Awake_mD5DD5CB5267D2C763AEDB1DDFE31426DBCA9AC6F (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AdGameObject_AddGameObjectToPool_m9745CB8EE12A11EEA62D669B5DB34324838F3156(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		bool L_3 = ((AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 *)__this)->get_persistent_8();
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_OnDestroy_mA53B215515770F1C8B58249E175A82F023C24286 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AdGameObject_RemoveGameObjectFromPoolIfNeeded_m7329E6FB94D1CC86C63D828A1D29D2FD45F12D96(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_2 = __this->get_ad_18();
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_3 = __this->get_ad_18();
		NullCheck(L_3);
		BannerView_Destroy_mD4576ADC6F0FF45F7A2DE148D1467FCF323632C6(L_3, /*hidden argument*/NULL);
		__this->set_ad_18((BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 *)NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_LoadAd_m578EAAC202A7BF202ADD07A88D6E9C640BF8EDD1 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___adRequest0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_0 = __this->get_ad_18();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_1 = __this->get_ad_18();
		NullCheck(L_1);
		BannerView_Destroy_mD4576ADC6F0FF45F7A2DE148D1467FCF323632C6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_2 = __this->get_adPosition_11();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_3;
		L_3 = AdGameObject_get_AdUnitId_m02C309F2A1100877E5D965BAF4EECE20E0F5EB67(__this, /*hidden argument*/NULL);
		AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * L_4 = __this->get_adSize_10();
		NullCheck(L_4);
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_5;
		L_5 = AdSizeProperty_ToAdSize_m48B076A10FA0AE9A4AA0234F11F064A353581767(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_adPositionOffset_12();
		float L_7 = L_6->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_adPositionOffset_12();
		float L_9 = L_8->get_y_1();
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_10 = (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 *)il2cpp_codegen_object_new(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737_il2cpp_TypeInfo_var);
		BannerView__ctor_mB1C15D892356B0E0626805DABCA0B49BF8556F4E(L_10, L_3, L_5, il2cpp_codegen_cast_double_to_int<int32_t>(L_7), il2cpp_codegen_cast_double_to_int<int32_t>(L_9), /*hidden argument*/NULL);
		__this->set_ad_18(L_10);
		goto IL_007d;
	}

IL_005b:
	{
		String_t* L_11;
		L_11 = AdGameObject_get_AdUnitId_m02C309F2A1100877E5D965BAF4EECE20E0F5EB67(__this, /*hidden argument*/NULL);
		AdSizeProperty_tA92B054C63C507AD5A8A9AFF89481CE2970E7A48 * L_12 = __this->get_adSize_10();
		NullCheck(L_12);
		AdSize_t008EA5266A0D6B144216E2EBBCE5E2B6A1CAB95D * L_13;
		L_13 = AdSizeProperty_ToAdSize_m48B076A10FA0AE9A4AA0234F11F064A353581767(L_12, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_adPosition_11();
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_15 = (BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 *)il2cpp_codegen_object_new(BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737_il2cpp_TypeInfo_var);
		BannerView__ctor_m20EF5C502F831B8E06998EB9708EF4736763B4EC(L_15, L_11, L_13, L_14, /*hidden argument*/NULL);
		__this->set_ad_18(L_15);
	}

IL_007d:
	{
		VirtActionInvoker0::Invoke(6 /* System.Void GoogleMobileAds.Placement.AdGameObject::AddCallbacks() */, __this);
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_16 = __this->get_ad_18();
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_17 = ___adRequest0;
		NullCheck(L_16);
		BannerView_LoadAd_mC393D587280C5F2E9786BDBEF2DA62E7E98BB8FD(L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_Hide_m3D140F45809BC63757241F822F5E7F13BE0EE718 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method)
{
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_0 = __this->get_ad_18();
		NullCheck(L_0);
		BannerView_Hide_m8B118E0BDE80EC549D1566662C4E772ACCDB8288(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_Show_m1FB80BF4B608F089C0C5A4321A5DFAAFDB2C4E13 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method)
{
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_0 = __this->get_ad_18();
		NullCheck(L_0);
		BannerView_Show_m011AAB6C396C58E31CB6B63C2DE3D7465AED6E7F(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::DestroyAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_DestroyAd_mAFBB0514882B08DC0395BB54F9E42C356C553039 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method)
{
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_0 = __this->get_ad_18();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_1 = __this->get_ad_18();
		NullCheck(L_1);
		BannerView_Destroy_mD4576ADC6F0FF45F7A2DE148D1467FCF323632C6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::AddCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_AddCallbacks_mAD304E3633A9091964B69F7AE10B9B8FC3EC70DF (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdGameObject_U3CAddCallbacksU3Em__0_m942F75AEDA1148446FEF43F982B8D05A96B5A284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdGameObject_U3CAddCallbacksU3Em__1_mD22C7480ABAD502DECAF8B1CFE8FE4ADE7DD0B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdGameObject_U3CAddCallbacksU3Em__2_mE19F61F05130B47CCC9CBFA57591F3BED0A53052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdGameObject_U3CAddCallbacksU3Em__3_m165FEB74A9E19DB15472F3F26739800DB28DEC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAdGameObject_U3CAddCallbacksU3Em__4_mCE36AFC5759662C4F8F7C9423E43E259547F688C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mAB702EC6A295AEC36C6197217872AAFE98BE3FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_0 = __this->get_ad_18();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_1, __this, (intptr_t)((intptr_t)BannerAdGameObject_U3CAddCallbacksU3Em__0_m942F75AEDA1148446FEF43F982B8D05A96B5A284_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_0);
		BannerView_add_OnAdLoaded_m67C042AF5C75F1197BEB23EFE7F00ED50170EC23(L_0, L_1, /*hidden argument*/NULL);
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_2 = __this->get_ad_18();
		EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * L_3 = (EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 *)il2cpp_codegen_object_new(EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mAB702EC6A295AEC36C6197217872AAFE98BE3FDF(L_3, __this, (intptr_t)((intptr_t)BannerAdGameObject_U3CAddCallbacksU3Em__1_mD22C7480ABAD502DECAF8B1CFE8FE4ADE7DD0B01_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mAB702EC6A295AEC36C6197217872AAFE98BE3FDF_RuntimeMethod_var);
		NullCheck(L_2);
		BannerView_add_OnAdFailedToLoad_mDF1DF2787E38A002C1EB410D8A68F4C0288B95AA(L_2, L_3, /*hidden argument*/NULL);
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_4 = __this->get_ad_18();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)BannerAdGameObject_U3CAddCallbacksU3Em__2_mE19F61F05130B47CCC9CBFA57591F3BED0A53052_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		BannerView_add_OnAdOpening_m06F30C28A524A65E28F964568C302475978C375A(L_4, L_5, /*hidden argument*/NULL);
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_6 = __this->get_ad_18();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)BannerAdGameObject_U3CAddCallbacksU3Em__3_m165FEB74A9E19DB15472F3F26739800DB28DEC68_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		BannerView_add_OnAdClosed_m998E8A4CE750BC8E1D595B086DB80AD3BDDF7373(L_6, L_7, /*hidden argument*/NULL);
		BannerView_tF8E40603F2B65ED257DB1A29BE3FE190AD13C737 * L_8 = __this->get_ad_18();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_9, __this, (intptr_t)((intptr_t)BannerAdGameObject_U3CAddCallbacksU3Em__4_mCE36AFC5759662C4F8F7C9423E43E259547F688C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_8);
		BannerView_add_OnAdLeavingApplication_m39F1C6D90866DB7B39F3F8E648C6BA0FC0616796(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_U3CAddCallbacksU3Em__0_m942F75AEDA1148446FEF43F982B8D05A96B5A284 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdLoaded_13();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdLoaded_13();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_U3CAddCallbacksU3Em__1_mD22C7480ABAD502DECAF8B1CFE8FE4ADE7DD0B01 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_mC610883412C53D1C7431DF7B4ACFD7AF99ACAD5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD * V_0 = NULL;
	{
		U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD * L_0 = (U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD *)il2cpp_codegen_object_new(U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD_il2cpp_TypeInfo_var);
		U3CAddCallbacksU3Ec__AnonStorey0__ctor_mB1DE2D1220B414210DAD93B17D373DDAFD00345B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD * L_1 = V_0;
		AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * L_2 = ___args1;
		NullCheck(L_1);
		L_1->set_args_0(L_2);
		U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * L_4 = __this->get_onAdFailedToLoad_14();
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_mC610883412C53D1C7431DF7B4ACFD7AF99ACAD5B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_ExecuteInUpdate_m759DD47B457058EE9EB59094AAF66339F01FD3B4(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_U3CAddCallbacksU3Em__2_mE19F61F05130B47CCC9CBFA57591F3BED0A53052 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdOpening_15();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdOpening_15();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_U3CAddCallbacksU3Em__3_m165FEB74A9E19DB15472F3F26739800DB28DEC68 (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdClosed_16();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdClosed_16();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAdGameObject_U3CAddCallbacksU3Em__4_mCE36AFC5759662C4F8F7C9423E43E259547F688C (BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdLeavingApplication_17();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdLeavingApplication_17();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
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
// System.Void GoogleMobileAds.Placement.GoogleMobileAdsPlacements::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMobileAdsPlacements__ctor_mA1297376C94659BD92951F56F1BD873800A9B41C (GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Placement.GoogleMobileAdsPlacements GoogleMobileAds.Placement.GoogleMobileAdsPlacements::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * GoogleMobileAdsPlacements_get_Instance_mE221736F14402A5ACDFBDCFE999C291C6A010DA0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisGoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_mC20F3A27646B198E2ECED15CC905024D61BFDA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * L_0 = ((GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_il2cpp_TypeInfo_var))->get_instance_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		GoogleMobileAdsPlacementsU5BU5D_tE5535106414727FCF34CC50E42F4FDB2F2152B91* L_3;
		L_3 = Resources_LoadAll_TisGoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_mC20F3A27646B198E2ECED15CC905024D61BFDA8C(L_2, /*hidden argument*/Resources_LoadAll_TisGoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_mC20F3A27646B198E2ECED15CC905024D61BFDA8C_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4 = 0;
		GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_il2cpp_TypeInfo_var))->set_instance_5(L_5);
	}

IL_0021:
	{
		GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360 * L_6 = ((GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_StaticFields*)il2cpp_codegen_static_fields_for(GoogleMobileAdsPlacements_tFC27FC75EBADB3609FF1A0DE93F5542465944360_il2cpp_TypeInfo_var))->get_instance_5();
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
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject__ctor_m95B433AD0D631FE98570F048A8CCF5D2A0281724 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method)
{
	{
		AdGameObject__ctor_m60D93F0CA396A59B5B9ECCF108F4ED785B162DC8(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.InterstitialAd GoogleMobileAds.Placement.InterstitialAdGameObject::get_InterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * InterstitialAdGameObject_get_InterstitialAd_mF8C6C4E95A3748A603C64F4290737F0D693D2FAB (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method)
{
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get_ad_15();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_Awake_mD433F7444C6F1065BCBCD15E33D1EE6FBB8568E9 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AdGameObject_AddGameObjectToPool_m9745CB8EE12A11EEA62D669B5DB34324838F3156(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		bool L_3 = ((AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 *)__this)->get_persistent_8();
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_OnDestroy_m2371F52C2D2B97CF028CFD1C9FBB197D484CE1A3 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AdGameObject_RemoveGameObjectFromPoolIfNeeded_m7329E6FB94D1CC86C63D828A1D29D2FD45F12D96(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_2 = __this->get_ad_15();
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_3 = __this->get_ad_15();
		NullCheck(L_3);
		InterstitialAd_Destroy_m50124A019EC4314BB3CE6AA9FF92ABEE726B3523(L_3, /*hidden argument*/NULL);
		__this->set_ad_15((InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 *)NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_LoadAd_m4352066BCB7636E7919351E69F05378B20DB5CE3 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___adRequest0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get_ad_15();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_1 = __this->get_ad_15();
		NullCheck(L_1);
		InterstitialAd_Destroy_m50124A019EC4314BB3CE6AA9FF92ABEE726B3523(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		String_t* L_2;
		L_2 = AdGameObject_get_AdUnitId_m02C309F2A1100877E5D965BAF4EECE20E0F5EB67(__this, /*hidden argument*/NULL);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_3 = (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 *)il2cpp_codegen_object_new(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var);
		InterstitialAd__ctor_m051B7CB234EBA2B60D6997B54805BB5FF154F4C8(L_3, L_2, /*hidden argument*/NULL);
		__this->set_ad_15(L_3);
		VirtActionInvoker0::Invoke(6 /* System.Void GoogleMobileAds.Placement.AdGameObject::AddCallbacks() */, __this);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_4 = __this->get_ad_15();
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_5 = ___adRequest0;
		NullCheck(L_4);
		InterstitialAd_LoadAd_mB3716AF9CAC24F8439FDB615319DCF84DAA9C0C8(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::ShowIfLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_ShowIfLoaded_mC28A512B66C894FCC85D369CB534A8F3DE302BAF (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method)
{
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get_ad_15();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_2 = __this->get_ad_15();
		NullCheck(L_2);
		InterstitialAd_Show_m6111A6CEA42D17DDF9C6E3A2D8E6FC9E7C46EA28(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::DestroyAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_DestroyAd_m427B5EDFE75AFF61BC93F4D4B40BEA528ED35C60 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method)
{
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get_ad_15();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_1 = __this->get_ad_15();
		NullCheck(L_1);
		InterstitialAd_Destroy_m50124A019EC4314BB3CE6AA9FF92ABEE726B3523(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::AddCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_AddCallbacks_m4B7DD218B8E8BF3B464AEDDA0288814300BC340E (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mAB702EC6A295AEC36C6197217872AAFE98BE3FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdGameObject_U3CAddCallbacksU3Em__0_m55E40928025F51DFF7DF88A17E8DF94680BEDF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdGameObject_U3CAddCallbacksU3Em__1_m0A6211EE4739A466C87DC03D43FCAA8A6244ADD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdGameObject_U3CAddCallbacksU3Em__2_mABC03E5DFE1D99D5679CC22A6A5AA28FDFE29056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdGameObject_U3CAddCallbacksU3Em__3_m6104BA833E1009A39203A98F33095C3E51116C8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdGameObject_U3CAddCallbacksU3Em__4_m3D43495AA17EB904AF51DAAE85C6D123F3D68547_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_0 = __this->get_ad_15();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_1, __this, (intptr_t)((intptr_t)InterstitialAdGameObject_U3CAddCallbacksU3Em__0_m55E40928025F51DFF7DF88A17E8DF94680BEDF5D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_0);
		InterstitialAd_add_OnAdLoaded_m83539BF410CBD57CFD79E2E92463743F85B5E15F(L_0, L_1, /*hidden argument*/NULL);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_2 = __this->get_ad_15();
		EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 * L_3 = (EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4 *)il2cpp_codegen_object_new(EventHandler_1_tC26C79D74BE181ED179BBB5BA1D1EA5FE217B3A4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mAB702EC6A295AEC36C6197217872AAFE98BE3FDF(L_3, __this, (intptr_t)((intptr_t)InterstitialAdGameObject_U3CAddCallbacksU3Em__1_m0A6211EE4739A466C87DC03D43FCAA8A6244ADD6_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mAB702EC6A295AEC36C6197217872AAFE98BE3FDF_RuntimeMethod_var);
		NullCheck(L_2);
		InterstitialAd_add_OnAdFailedToLoad_m3FB1FF078735A199793D4C668A4DEC4C8225214F(L_2, L_3, /*hidden argument*/NULL);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_4 = __this->get_ad_15();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)InterstitialAdGameObject_U3CAddCallbacksU3Em__2_mABC03E5DFE1D99D5679CC22A6A5AA28FDFE29056_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterstitialAd_add_OnAdOpening_m18047F820C801CC2C7457695010A1C29165B3998(L_4, L_5, /*hidden argument*/NULL);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_6 = __this->get_ad_15();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)InterstitialAdGameObject_U3CAddCallbacksU3Em__3_m6104BA833E1009A39203A98F33095C3E51116C8D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		InterstitialAd_add_OnAdClosed_m8D6A71AED40167FC8AA4BE420AF5D469ABCBFB1D(L_6, L_7, /*hidden argument*/NULL);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_8 = __this->get_ad_15();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_9, __this, (intptr_t)((intptr_t)InterstitialAdGameObject_U3CAddCallbacksU3Em__4_m3D43495AA17EB904AF51DAAE85C6D123F3D68547_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_8);
		InterstitialAd_add_OnAdLeavingApplication_m8FDAF39F69749580C324A38120A08645879AAD92(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_U3CAddCallbacksU3Em__0_m55E40928025F51DFF7DF88A17E8DF94680BEDF5D (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdLoaded_10();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdLoaded_10();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_U3CAddCallbacksU3Em__1_m0A6211EE4739A466C87DC03D43FCAA8A6244ADD6 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_mA80B39B5927C06010297A7DEE20FC995073B6F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 * V_0 = NULL;
	{
		U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 * L_0 = (U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 *)il2cpp_codegen_object_new(U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727_il2cpp_TypeInfo_var);
		U3CAddCallbacksU3Ec__AnonStorey0__ctor_m36575161CE29760E0C68B21206C7BD52E8B8E73A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 * L_1 = V_0;
		AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * L_2 = ___args1;
		NullCheck(L_1);
		L_1->set_args_0(L_2);
		U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * L_4 = __this->get_onAdFailedToLoad_11();
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_mA80B39B5927C06010297A7DEE20FC995073B6F83_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_ExecuteInUpdate_m759DD47B457058EE9EB59094AAF66339F01FD3B4(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_U3CAddCallbacksU3Em__2_mABC03E5DFE1D99D5679CC22A6A5AA28FDFE29056 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdOpening_12();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdOpening_12();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_U3CAddCallbacksU3Em__3_m6104BA833E1009A39203A98F33095C3E51116C8D (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdClosed_13();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdClosed_13();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdGameObject_U3CAddCallbacksU3Em__4_m3D43495AA17EB904AF51DAAE85C6D123F3D68547 (InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdLeavingApplication_14();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdLeavingApplication_14();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
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
// System.Void GoogleMobileAds.Placement.PoolEntry::.ctor(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolEntry__ctor_m20E167DDDDF98C602B11C47EC25DCA5EE0548B7E (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, bool ___persistent1, const RuntimeMethod* method)
{
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___gameObject0;
		__this->set_gameObject_0(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___gameObject0;
		NullCheck(L_1);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		__this->set_sceneNameOrigin_1(L_3);
		bool L_4 = ___persistent1;
		__this->set_persistent_2(L_4);
		return;
	}
}
// UnityEngine.GameObject GoogleMobileAds.Placement.PoolEntry::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PoolEntry_get_GameObject_m539B896AD9C328699AB625CF367E406EC5E880C4 (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameObject_0();
		return L_0;
	}
}
// System.String GoogleMobileAds.Placement.PoolEntry::get_SceneNameOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PoolEntry_get_SceneNameOrigin_mC81168A3E707DCFDA5FCC2C69A8A25D8040AA2EC (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_sceneNameOrigin_1();
		return L_0;
	}
}
// System.Boolean GoogleMobileAds.Placement.PoolEntry::get_IsPersistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoolEntry_get_IsPersistent_mD9704974A4F88CD6C87C13508C03B1FDB2479316 (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_persistent_2();
		return L_0;
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
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject__ctor_m31A287B22228BFF6C0348927744E276CFDB540D5 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, const RuntimeMethod* method)
{
	{
		AdGameObject__ctor_m60D93F0CA396A59B5B9ECCF108F4ED785B162DC8(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.RewardedAd GoogleMobileAds.Placement.RewardedAdGameObject::get_RewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * RewardedAdGameObject_get_RewardedAd_m3A4C0EA06B8A836D1AFFF68C7749F5C596C4EE15 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, const RuntimeMethod* method)
{
	{
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_0 = __this->get_ad_16();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_Awake_m6308A82A9BB4A8DCD75B911C2E459C1D07A5484A (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AdGameObject_AddGameObjectToPool_m9745CB8EE12A11EEA62D669B5DB34324838F3156(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		bool L_3 = ((AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 *)__this)->get_persistent_8();
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_OnDestroy_m4F626864B97A2D58EB0AF6A1F319DA3368FFAAEA (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AdGameObject_RemoveGameObjectFromPoolIfNeeded_m7329E6FB94D1CC86C63D828A1D29D2FD45F12D96(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_2 = __this->get_ad_16();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		__this->set_ad_16((RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 *)NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_LoadAd_m40A4B58975070D13202978E815901AC8C9285203 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___adRequest0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = AdGameObject_get_AdUnitId_m02C309F2A1100877E5D965BAF4EECE20E0F5EB67(__this, /*hidden argument*/NULL);
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_1 = (RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 *)il2cpp_codegen_object_new(RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966_il2cpp_TypeInfo_var);
		RewardedAd__ctor_m3FDF5017F3E3DACC4920A7628229FD95D827FEF1(L_1, L_0, /*hidden argument*/NULL);
		__this->set_ad_16(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void GoogleMobileAds.Placement.AdGameObject::AddCallbacks() */, __this);
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_2 = __this->get_ad_16();
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_3 = ___adRequest0;
		NullCheck(L_2);
		RewardedAd_LoadAd_m599E1713AE11404161630B29EBB3D6F274FD481D(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::ShowIfLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_ShowIfLoaded_m752DD4E9F74F60E9F23E144378F8CFB47E387134 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, const RuntimeMethod* method)
{
	{
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_0 = __this->get_ad_16();
		NullCheck(L_0);
		bool L_1;
		L_1 = RewardedAd_IsLoaded_m3443DC72C16E7720A5A2618FB131D07A18D76BBE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_2 = __this->get_ad_16();
		NullCheck(L_2);
		RewardedAd_Show_m97EB3DC60C0273CF7F5A49E5F6D9C3E6161A9550(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::AddCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_AddCallbacks_mDE9BEFB9AEE1900161A9C578670A9679CFF05F50 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdGameObject_U3CAddCallbacksU3Em__0_m58C7EEDEE34818F5DABFEC1BB516672A67B547E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdGameObject_U3CAddCallbacksU3Em__1_m3CA9C10EBFFD8E37A4FE16003737592FB3689904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdGameObject_U3CAddCallbacksU3Em__2_m1ED20F92092163F6AA1C0D52755F332E9FF2D29A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdGameObject_U3CAddCallbacksU3Em__3_m577D579EFF90306AAD47C7FEA66428ADD5E42CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdGameObject_U3CAddCallbacksU3Em__4_mE3D7AF9525A76076B3E959430C8068071D2B7AE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdGameObject_U3CAddCallbacksU3Em__5_m3816ECD85ACC62C24CCC861C973AA42F0FDEB7E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_0 = __this->get_ad_16();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_1, __this, (intptr_t)((intptr_t)RewardedAdGameObject_U3CAddCallbacksU3Em__0_m58C7EEDEE34818F5DABFEC1BB516672A67B547E9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_0);
		RewardedAd_add_OnAdLoaded_m7AAD3986C80F0A53413B0549EF5FA09D204C34BC(L_0, L_1, /*hidden argument*/NULL);
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_2 = __this->get_ad_16();
		EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * L_3 = (EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 *)il2cpp_codegen_object_new(EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA(L_3, __this, (intptr_t)((intptr_t)RewardedAdGameObject_U3CAddCallbacksU3Em__1_m3CA9C10EBFFD8E37A4FE16003737592FB3689904_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA_RuntimeMethod_var);
		NullCheck(L_2);
		RewardedAd_add_OnAdFailedToLoad_mD26FFF4D6410C96ABFA9EF9A4A68ED4DFE90CD20(L_2, L_3, /*hidden argument*/NULL);
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_4 = __this->get_ad_16();
		EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * L_5 = (EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 *)il2cpp_codegen_object_new(EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA(L_5, __this, (intptr_t)((intptr_t)RewardedAdGameObject_U3CAddCallbacksU3Em__2_m1ED20F92092163F6AA1C0D52755F332E9FF2D29A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA_RuntimeMethod_var);
		NullCheck(L_4);
		RewardedAd_add_OnAdFailedToShow_mA147D3488D43A6D7D6241AAED5E9BE1AF82D5038(L_4, L_5, /*hidden argument*/NULL);
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_6 = __this->get_ad_16();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)RewardedAdGameObject_U3CAddCallbacksU3Em__3_m577D579EFF90306AAD47C7FEA66428ADD5E42CF2_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		RewardedAd_add_OnAdOpening_m97C39DD2776451A509628651EDED0F3DA286C405(L_6, L_7, /*hidden argument*/NULL);
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_8 = __this->get_ad_16();
		EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 * L_9 = (EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1 *)il2cpp_codegen_object_new(EventHandler_1_tEDC033EC5B1432E95DB35B1ED5B96B4F1F63E6E1_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2(L_9, __this, (intptr_t)((intptr_t)RewardedAdGameObject_U3CAddCallbacksU3Em__4_mE3D7AF9525A76076B3E959430C8068071D2B7AE2_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m4E427DE98E6A65074F49EFB302CB5DDC876929F2_RuntimeMethod_var);
		NullCheck(L_8);
		RewardedAd_add_OnUserEarnedReward_m3631CC6509FDB177D1E4EB0CDF8D01F015801409(L_8, L_9, /*hidden argument*/NULL);
		RewardedAd_t8FEFB35C9DA5ADAB7F31286AEF45A40A314F3966 * L_10 = __this->get_ad_16();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_11 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_11, __this, (intptr_t)((intptr_t)RewardedAdGameObject_U3CAddCallbacksU3Em__5_m3816ECD85ACC62C24CCC861C973AA42F0FDEB7E7_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_10);
		RewardedAd_add_OnAdClosed_m11B7E72270E0585F0441EF9B491576EBB644D790(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_U3CAddCallbacksU3Em__0_m58C7EEDEE34818F5DABFEC1BB516672A67B547E9 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdLoaded_10();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdLoaded_10();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_U3CAddCallbacksU3Em__1_m3CA9C10EBFFD8E37A4FE16003737592FB3689904 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_m5C35959C298B2042877756094D98097D4E6322FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B * V_0 = NULL;
	{
		U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B * L_0 = (U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B *)il2cpp_codegen_object_new(U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B_il2cpp_TypeInfo_var);
		U3CAddCallbacksU3Ec__AnonStorey0__ctor_m48C41637FF8FA9569E74E5C1293AC8DED325E393(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B * L_1 = V_0;
		AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * L_2 = ___args1;
		NullCheck(L_1);
		L_1->set_args_0(L_2);
		U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * L_4 = __this->get_onAdFailedToLoad_11();
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_m5C35959C298B2042877756094D98097D4E6322FB_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_ExecuteInUpdate_m759DD47B457058EE9EB59094AAF66339F01FD3B4(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__2(System.Object,GoogleMobileAds.Api.AdErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_U3CAddCallbacksU3Em__2_m1ED20F92092163F6AA1C0D52755F332E9FF2D29A (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdFailedToShow_12();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdFailedToShow_12();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_U3CAddCallbacksU3Em__3_m577D579EFF90306AAD47C7FEA66428ADD5E42CF2 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdOpening_13();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdOpening_13();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__4(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_U3CAddCallbacksU3Em__4_mE3D7AF9525A76076B3E959430C8068071D2B7AE2 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, RuntimeObject * ___sender0, Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey1_U3CU3Em__0_m76389014961A03297C47D90A593CF118B3000E69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 * V_0 = NULL;
	{
		U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 * L_0 = (U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 *)il2cpp_codegen_object_new(U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058_il2cpp_TypeInfo_var);
		U3CAddCallbacksU3Ec__AnonStorey1__ctor_m2ABD3E61770247C6DDC24501040F3CFC73CDB811(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 * L_1 = V_0;
		Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * L_2 = ___args1;
		NullCheck(L_1);
		L_1->set_args_0(L_2);
		U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * L_4 = __this->get_onUserEarnedReward_14();
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CAddCallbacksU3Ec__AnonStorey1_U3CU3Em__0_m76389014961A03297C47D90A593CF118B3000E69_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_ExecuteInUpdate_m759DD47B457058EE9EB59094AAF66339F01FD3B4(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdGameObject_U3CAddCallbacksU3Em__5_m3816ECD85ACC62C24CCC861C973AA42F0FDEB7E7 (RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdClosed_15();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdClosed_15();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
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
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject__ctor_m7FF3260E910514EEA208D5D7E64125FD53A0FEEE (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, const RuntimeMethod* method)
{
	{
		AdGameObject__ctor_m60D93F0CA396A59B5B9ECCF108F4ED785B162DC8(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.RewardedInterstitialAd GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::get_RewardedInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * RewardedInterstitialAdGameObject_get_RewardedInterstitialAd_mC1D66C3B0081736876812281D5231AA4F708CD7C (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, const RuntimeMethod* method)
{
	{
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_0 = __this->get_ad_16();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_Awake_mEAF85D0D11376BEC0CA2C554D9D1F9242957679E (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AdGameObject_AddGameObjectToPool_m9745CB8EE12A11EEA62D669B5DB34324838F3156(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		bool L_3 = ((AdGameObject_tE16C94DC0DAFC03FE28CA82346889A10CFA49734 *)__this)->get_persistent_8();
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_OnDestroy_m525AED38D25F8F9DEB27F94EDA492EF74D270C2B (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AdGameObject_RemoveGameObjectFromPoolIfNeeded_m7329E6FB94D1CC86C63D828A1D29D2FD45F12D96(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_2 = __this->get_ad_16();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		__this->set_ad_16((RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC *)NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_LoadAd_m34ECA3CB01843D8982444DA51E734EAB8F0D151F (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * ___adRequest0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m262EADF9A5C0B8271F55AE75258689BAB1EB5E16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdGameObject_U3CLoadAdU3Em__0_m86D1A2C35902F126A0D08E99B7E80687BCA1E09F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = AdGameObject_get_AdUnitId_m02C309F2A1100877E5D965BAF4EECE20E0F5EB67(__this, /*hidden argument*/NULL);
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_1 = ___adRequest0;
		Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75 * L_2 = (Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75 *)il2cpp_codegen_object_new(Action_2_tDC5DD41B07D4331B8F93E93318EBE36191295F75_il2cpp_TypeInfo_var);
		Action_2__ctor_m262EADF9A5C0B8271F55AE75258689BAB1EB5E16(L_2, __this, (intptr_t)((intptr_t)RewardedInterstitialAdGameObject_U3CLoadAdU3Em__0_m86D1A2C35902F126A0D08E99B7E80687BCA1E09F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m262EADF9A5C0B8271F55AE75258689BAB1EB5E16_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC_il2cpp_TypeInfo_var);
		RewardedInterstitialAd_LoadAd_m77ADFC866172BA43A8978B3AECA981C084237465(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::ShowIfLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_ShowIfLoaded_mE6447BD696B55261073CA20E4FFE59F6D47C8132 (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mDD1649A988F638E91A3267DF7392F10FB5B1B025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdGameObject_U3CShowIfLoadedU3Em__1_m66CB190E3197BA785CE2F94E9CC595D02F009445_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_0 = __this->get_ad_16();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_1 = __this->get_ad_16();
		Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734 * L_2 = (Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734 *)il2cpp_codegen_object_new(Action_1_tC132930F086FCA3F70E9D2DB1EA528F969814734_il2cpp_TypeInfo_var);
		Action_1__ctor_mDD1649A988F638E91A3267DF7392F10FB5B1B025(L_2, __this, (intptr_t)((intptr_t)RewardedInterstitialAdGameObject_U3CShowIfLoadedU3Em__1_m66CB190E3197BA785CE2F94E9CC595D02F009445_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mDD1649A988F638E91A3267DF7392F10FB5B1B025_RuntimeMethod_var);
		NullCheck(L_1);
		RewardedInterstitialAd_Show_m534AFCB39D25B1BC3132BF0B14BA81BCFA9DF423(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::AddCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_AddCallbacks_mB93ADFCE08ACDB1A02A7F5D07177DFC4C2D4D1AA (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__2_m37761996915C81BA9640F94C887F490BE3BA99FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__3_m1CB29E2C4F3F2D1EE7F5EA133C687A59B281C643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__4_mA16D4D8200DC1E042C0C8A02FB5A9AADE571ED87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_0 = __this->get_ad_16();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_1 = __this->get_ad_16();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_2 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_2, __this, (intptr_t)((intptr_t)RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__2_m37761996915C81BA9640F94C887F490BE3BA99FC_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_1);
		RewardedInterstitialAd_add_OnAdDidPresentFullScreenContent_m85359BFF81C9AAEF185A8DEFB5FE894A213014A3(L_1, L_2, /*hidden argument*/NULL);
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_3 = __this->get_ad_16();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_4, __this, (intptr_t)((intptr_t)RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__3_m1CB29E2C4F3F2D1EE7F5EA133C687A59B281C643_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_3);
		RewardedInterstitialAd_add_OnAdDidDismissFullScreenContent_m210C8EBC0327FA3E8042EAF178390F052366218D(L_3, L_4, /*hidden argument*/NULL);
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_5 = __this->get_ad_16();
		EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 * L_6 = (EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0 *)il2cpp_codegen_object_new(EventHandler_1_t0E5210AFDC000598EB6E2E3D4E3C2B21CAC2AEE0_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA(L_6, __this, (intptr_t)((intptr_t)RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__4_mA16D4D8200DC1E042C0C8A02FB5A9AADE571ED87_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m5A69B92B6273857ACEE90EEF6C1F355760A821EA_RuntimeMethod_var);
		NullCheck(L_5);
		RewardedInterstitialAd_add_OnAdFailedToPresentFullScreenContent_m5093BC2DE7F510D5079968B0CC4FD4E1986AF342(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<LoadAd>m__0(GoogleMobileAds.Api.RewardedInterstitialAd,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_U3CLoadAdU3Em__0_m86D1A2C35902F126A0D08E99B7E80687BCA1E09F (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * ___rewardedInterstitialAd0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_mA9F92EC05E229C4A261BADC4A1171411C55199C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * V_0 = NULL;
	{
		U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * L_0 = (U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E *)il2cpp_codegen_object_new(U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E_il2cpp_TypeInfo_var);
		U3CLoadAdU3Ec__AnonStorey0__ctor_mDCB3418C9A8FDA8B3F6AA553DDC5260E23A2A7BA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * L_1 = V_0;
		String_t* L_2 = ___error1;
		NullCheck(L_1);
		L_1->set_error_0(L_2);
		U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_error_0();
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * L_6 = __this->get_onAdFailedToLoad_11();
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_mA9F92EC05E229C4A261BADC4A1171411C55199C5_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_ExecuteInUpdate_m759DD47B457058EE9EB59094AAF66339F01FD3B4(L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}

IL_003c:
	{
		RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC * L_9 = ___rewardedInterstitialAd0;
		__this->set_ad_16(L_9);
		VirtActionInvoker0::Invoke(6 /* System.Void GoogleMobileAds.Placement.AdGameObject::AddCallbacks() */, __this);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = __this->get_onAdLoaded_10();
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_11 = __this->get_onAdLoaded_10();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_11, /*hidden argument*/NULL);
	}

IL_005f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<ShowIfLoaded>m__1(GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_U3CShowIfLoadedU3Em__1_m66CB190E3197BA785CE2F94E9CC595D02F009445 (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * ___reward0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowIfLoadedU3Ec__AnonStorey1_U3CU3Em__0_mDB1DDAE2AE47376A8409BACAED3E18F60D324355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F * V_0 = NULL;
	{
		U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F * L_0 = (U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F *)il2cpp_codegen_object_new(U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F_il2cpp_TypeInfo_var);
		U3CShowIfLoadedU3Ec__AnonStorey1__ctor_m1EA74E45CA8ABEF65657AEAF54BA73C47679ED8A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F * L_1 = V_0;
		Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * L_2 = ___reward0;
		NullCheck(L_1);
		L_1->set_reward_0(L_2);
		U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * L_4 = __this->get_onUserEarnedReward_15();
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CShowIfLoadedU3Ec__AnonStorey1_U3CU3Em__0_mDB1DDAE2AE47376A8409BACAED3E18F60D324355_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_ExecuteInUpdate_m759DD47B457058EE9EB59094AAF66339F01FD3B4(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__2_m37761996915C81BA9640F94C887F490BE3BA99FC (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdDidPresentFullScreenContent_13();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdDidPresentFullScreenContent_13();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__3_m1CB29E2C4F3F2D1EE7F5EA133C687A59B281C643 (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onAdDidDismissFullScreenContent_14();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_onAdDidDismissFullScreenContent_14();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_InvokeInUpdate_m2136D7503D3A54356789C85E77E0C67B62C52FE6(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->set_ad_16((RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC *)NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__4(System.Object,GoogleMobileAds.Api.AdErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdGameObject_U3CAddCallbacksU3Em__4_mA16D4D8200DC1E042C0C8A02FB5A9AADE571ED87 (RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey2_U3CU3Em__0_mF4518F02A146549686CDB592AAD3EC4F3FA94BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 * V_0 = NULL;
	{
		U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 * L_0 = (U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 *)il2cpp_codegen_object_new(U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07_il2cpp_TypeInfo_var);
		U3CAddCallbacksU3Ec__AnonStorey2__ctor_mD881DC11C2E09B78CB4616E4F5EBEC80154A449D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 * L_1 = V_0;
		AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * L_2 = ___args1;
		NullCheck(L_1);
		L_1->set_args_0(L_2);
		U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE * L_4 = __this->get_onAdFailedToPresentFullScreenContent_12();
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CAddCallbacksU3Ec__AnonStorey2_U3CU3Em__0_mF4518F02A146549686CDB592AAD3EC4F3FA94BDB_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tE2A89D9962596D83046B8A232C2F4A63777E4FDB_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_ExecuteInUpdate_m759DD47B457058EE9EB59094AAF66339F01FD3B4(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		__this->set_ad_16((RewardedInterstitialAd_t13AD29B4C81D2D266AFE57560B7E84CA080B5DBC *)NULL);
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
// System.Void TestController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController__ctor_mC80E070674043395252722CF9DBB04463BDAC8EE (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	{
		__this->set_showFpsMeter_9((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_Start_m9C0297676D113A4D547B7EF7B89153276A240601 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdGameObjectPool_GetAd_TisBannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29_m65832E679CBA7C7DFF4BB70A8737754167C168C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdGameObjectPool_GetAd_TisInterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE_m620CDC39AD5F62B2FA325613261AC4D7DB3A26DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdGameObjectPool_GetAd_TisRewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8_m05352E0CA267422AB9B6DC4718830441B1077707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdGameObjectPool_GetAd_TisRewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80_mE72F5D337D221431A2BE6588298313D2A8457142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestController_HandleInitCompleteAction_m8D8AC3302BC0015D8DE1DA3C22C35CCE81828786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D63630052E4B0D87328643DA14055A3524AC68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B535BDE23122B8981C7FCC3CD002B9C2A2E518);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA61AB4BD9B8D82E28FE65284C9F5250DC31F92D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC67757179F8CD7D14281A771DCCC03175D9A9C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_0;
		L_0 = AdGameObjectPool_get_Instance_m7BE56426512AEB5CEDBC4E6C87B081AE266644DC(/*hidden argument*/NULL);
		NullCheck(L_0);
		BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * L_1;
		L_1 = AdGameObjectPool_GetAd_TisBannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29_m65832E679CBA7C7DFF4BB70A8737754167C168C5(L_0, _stringLiteral4D63630052E4B0D87328643DA14055A3524AC68D, /*hidden argument*/AdGameObjectPool_GetAd_TisBannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29_m65832E679CBA7C7DFF4BB70A8737754167C168C5_RuntimeMethod_var);
		__this->set_bannerAd_4(L_1);
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_2;
		L_2 = AdGameObjectPool_get_Instance_m7BE56426512AEB5CEDBC4E6C87B081AE266644DC(/*hidden argument*/NULL);
		NullCheck(L_2);
		InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * L_3;
		L_3 = AdGameObjectPool_GetAd_TisInterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE_m620CDC39AD5F62B2FA325613261AC4D7DB3A26DF(L_2, _stringLiteralAC67757179F8CD7D14281A771DCCC03175D9A9C9, /*hidden argument*/AdGameObjectPool_GetAd_TisInterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE_m620CDC39AD5F62B2FA325613261AC4D7DB3A26DF_RuntimeMethod_var);
		__this->set_interstitialAd_5(L_3);
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_4;
		L_4 = AdGameObjectPool_get_Instance_m7BE56426512AEB5CEDBC4E6C87B081AE266644DC(/*hidden argument*/NULL);
		NullCheck(L_4);
		RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * L_5;
		L_5 = AdGameObjectPool_GetAd_TisRewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8_m05352E0CA267422AB9B6DC4718830441B1077707(L_4, _stringLiteralA61AB4BD9B8D82E28FE65284C9F5250DC31F92D3, /*hidden argument*/AdGameObjectPool_GetAd_TisRewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8_m05352E0CA267422AB9B6DC4718830441B1077707_RuntimeMethod_var);
		__this->set_rewardedAd_6(L_5);
		AdGameObjectPool_tAB721145459C1843B36343B2A73085F6D5521D3E * L_6;
		L_6 = AdGameObjectPool_get_Instance_m7BE56426512AEB5CEDBC4E6C87B081AE266644DC(/*hidden argument*/NULL);
		NullCheck(L_6);
		RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * L_7;
		L_7 = AdGameObjectPool_GetAd_TisRewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80_mE72F5D337D221431A2BE6588298313D2A8457142(L_6, _stringLiteral52B535BDE23122B8981C7FCC3CD002B9C2A2E518, /*hidden argument*/AdGameObjectPool_GetAd_TisRewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80_mE72F5D337D221431A2BE6588298313D2A8457142_RuntimeMethod_var);
		__this->set_rewardedInterstitialAd_7(L_7);
		MobileAds_SetiOSAppPauseOnBackground_mF04207DBBF2BF553246777A1431758A68202FB25((bool)1, /*hidden argument*/NULL);
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_8 = (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 *)il2cpp_codegen_object_new(Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var);
		Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55(L_8, __this, (intptr_t)((intptr_t)TestController_HandleInitCompleteAction_m8D8AC3302BC0015D8DE1DA3C22C35CCE81828786_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var);
		MobileAds_Initialize_m162D01EF10764A82B218C4D6496F71CF4F50529B(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_Update_m4CDCD9D737006514BDD2F22D847A2B5F17F73482 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C6C8C1AD8A137951AC84040691E466E938BB779);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get_showFpsMeter_9();
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_fpsMeter_10();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		float L_3 = __this->get_deltaTime_8();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_5 = __this->get_deltaTime_8();
		__this->set_deltaTime_8(((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), (float)(0.100000001f))))));
		float L_6 = __this->get_deltaTime_8();
		V_0 = ((float)((float)(1.0f)/(float)L_6));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_fpsMeter_10();
		float L_8 = V_0;
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5C6C8C1AD8A137951AC84040691E466E938BB779, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_11);
		goto IL_0079;
	}

IL_0068:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_fpsMeter_10();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_0079:
	{
		return;
	}
}
// System.Void TestController::RequestAndLoadBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_RequestAndLoadBannerAd_mEFE4E38ED6234774C2057298F80B47DD9DD82346 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527C543D69536D42B5BCE96AD5D5CF0EC544ACFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE07F4C830715436A1305C13760C97BBB6C8E05);
		s_Il2CppMethodInitialized = true;
	}
	{
		BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * L_0 = __this->get_bannerAd_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_statusText_11();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral527C543D69536D42B5BCE96AD5D5CF0EC544ACFB);
		BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * L_3 = __this->get_bannerAd_4();
		NullCheck(L_3);
		AdGameObject_LoadAd_mA5562D9C80E582BCAC1E1A124EFA645971909404(L_3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0031:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_statusText_11();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral6BE07F4C830715436A1305C13760C97BBB6C8E05);
	}

IL_0041:
	{
		return;
	}
}
// System.Void TestController::DestroyBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_DestroyBannerAd_m7B9D45B7EB5DE9139C46B93690AA43D76D0EC041 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2096AEFC442CF1000AD9F00097ED649EF2B8600E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE07F4C830715436A1305C13760C97BBB6C8E05);
		s_Il2CppMethodInitialized = true;
	}
	{
		BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * L_0 = __this->get_bannerAd_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * L_2 = __this->get_bannerAd_4();
		NullCheck(L_2);
		BannerAdGameObject_DestroyAd_mAFBB0514882B08DC0395BB54F9E42C356C553039(L_2, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_statusText_11();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral2096AEFC442CF1000AD9F00097ED649EF2B8600E);
		goto IL_0041;
	}

IL_0031:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_statusText_11();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral6BE07F4C830715436A1305C13760C97BBB6C8E05);
	}

IL_0041:
	{
		return;
	}
}
// System.Void TestController::RequestAndLoadRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_RequestAndLoadRewardedAd_mFA61226B2F8EE786240A08F1B6D1F57B0F1703DD (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6358270746AAA6A0A531E650085DB3CC653D26F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF01927167D14B1A0439A309CCE07514C54042A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * L_0 = __this->get_rewardedAd_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * L_2 = __this->get_rewardedAd_6();
		NullCheck(L_2);
		AdGameObject_LoadAd_mA5562D9C80E582BCAC1E1A124EFA645971909404(L_2, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_statusText_11();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralFF01927167D14B1A0439A309CCE07514C54042A6);
		goto IL_0041;
	}

IL_0031:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_statusText_11();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral6358270746AAA6A0A531E650085DB3CC653D26F5);
	}

IL_0041:
	{
		return;
	}
}
// System.Void TestController::ShowRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_ShowRewardedAd_m76A3EA744CFBEC214A12329DDD521156C4B57E0A (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * L_0 = __this->get_rewardedAd_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * L_2 = __this->get_rewardedAd_6();
		NullCheck(L_2);
		RewardedAdGameObject_ShowIfLoaded_m752DD4E9F74F60E9F23E144378F8CFB47E387134(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void TestController::RequestAndLoadInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_RequestAndLoadInterstitialAd_m5A05C2089599E6E87BE76B956486FB09F815690A (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054DDE34098ACE813425A1F93663E5C23EB32878);
		s_Il2CppMethodInitialized = true;
	}
	{
		InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * L_0 = __this->get_interstitialAd_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * L_2 = __this->get_interstitialAd_5();
		NullCheck(L_2);
		AdGameObject_LoadAd_mA5562D9C80E582BCAC1E1A124EFA645971909404(L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0021:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_statusText_11();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral054DDE34098ACE813425A1F93663E5C23EB32878);
	}

IL_0031:
	{
		return;
	}
}
// System.Void TestController::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_ShowInterstitialAd_m137A1246A0BE8D76C31297516518139A48D747E1 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054DDE34098ACE813425A1F93663E5C23EB32878);
		s_Il2CppMethodInitialized = true;
	}
	{
		InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * L_0 = __this->get_interstitialAd_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * L_2 = __this->get_interstitialAd_5();
		NullCheck(L_2);
		InterstitialAdGameObject_ShowIfLoaded_mC28A512B66C894FCC85D369CB534A8F3DE302BAF(L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0021:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_statusText_11();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral054DDE34098ACE813425A1F93663E5C23EB32878);
	}

IL_0031:
	{
		return;
	}
}
// System.Void TestController::DestroyInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_DestroyInterstitialAd_m1D8C4D0651EB7EC44ACDDD370200E53CB426F363 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D65A79A64B388B5473808E822119403CEC6F9BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D85499EF28E323A1F3117308216764DC01CC5DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * L_0 = __this->get_interstitialAd_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * L_2 = __this->get_interstitialAd_5();
		NullCheck(L_2);
		InterstitialAdGameObject_DestroyAd_m427B5EDFE75AFF61BC93F4D4B40BEA528ED35C60(L_2, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_statusText_11();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral9D85499EF28E323A1F3117308216764DC01CC5DE);
		goto IL_0041;
	}

IL_0031:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_statusText_11();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral0D65A79A64B388B5473808E822119403CEC6F9BB);
	}

IL_0041:
	{
		return;
	}
}
// System.Void TestController::RequestAndLoadRewardedInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_RequestAndLoadRewardedInterstitialAd_m1A97C3DB64EB73AECC583351E982F15D3E0AD228 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C4D2A44C0C549C5B3D4FA3D08196BA57AC83621);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * L_0 = __this->get_rewardedInterstitialAd_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * L_2 = __this->get_rewardedInterstitialAd_7();
		NullCheck(L_2);
		AdGameObject_LoadAd_mA5562D9C80E582BCAC1E1A124EFA645971909404(L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0021:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_statusText_11();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral1C4D2A44C0C549C5B3D4FA3D08196BA57AC83621);
	}

IL_0031:
	{
		return;
	}
}
// System.Void TestController::ShowRewardedInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_ShowRewardedInterstitialAd_m56C2833D3A347E20554EBAA4EE08EF6BD3E6D2AF (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C4D2A44C0C549C5B3D4FA3D08196BA57AC83621);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * L_0 = __this->get_rewardedInterstitialAd_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * L_2 = __this->get_rewardedInterstitialAd_7();
		NullCheck(L_2);
		RewardedInterstitialAdGameObject_ShowIfLoaded_mE6447BD696B55261073CA20E4FFE59F6D47C8132(L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0021:
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_statusText_11();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral1C4D2A44C0C549C5B3D4FA3D08196BA57AC83621);
	}

IL_0031:
	{
		return;
	}
}
// System.Void TestController::HandleInitCompleteAction(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestController_HandleInitCompleteAction_m8D8AC3302BC0015D8DE1DA3C22C35CCE81828786 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * ___initStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF063544DB997DA474629EBFD55B648E5BDC0361);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFF063544DB997DA474629EBFD55B648E5BDC0361, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.AdRequest TestController::CreateAdRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * TestController_CreateAdRequest_m90519510EC0AB633C9810DBA3F34464236787515 (TestController_tC25E6E59D63462EB99CA1138D860DEF204E2B78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40941F84518351AECD372E09DB612DD85B247DF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91B79FB97CE92B245AA59A853F4DA5E282F6AB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * L_0 = (Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C *)il2cpp_codegen_object_new(Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C_il2cpp_TypeInfo_var);
		Builder__ctor_mEC6564ACB4A7E944E513C1BF39002FAE3E35ED44(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * L_1;
		L_1 = Builder_AddTestDevice_mD624252D7CD2B72D5664314FE4966A4EBDB55792(L_0, _stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32, /*hidden argument*/NULL);
		NullCheck(L_1);
		Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * L_2;
		L_2 = Builder_AddTestDevice_mD624252D7CD2B72D5664314FE4966A4EBDB55792(L_1, _stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65, /*hidden argument*/NULL);
		NullCheck(L_2);
		Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * L_3;
		L_3 = Builder_AddKeyword_m7322BEAD68354106B05F57E2F52BB4E7A6C0FA82(L_2, _stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE, /*hidden argument*/NULL);
		NullCheck(L_3);
		Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * L_4;
		L_4 = Builder_TagForChildDirectedTreatment_m0E81C3DBD074F82F257CD81AE3E0A7504466D11A(L_3, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_4);
		Builder_tDEC3EA9C2617E6B676AF0ABED231D4FDB2B2434C * L_5;
		L_5 = Builder_AddExtra_m8300B1045B2DD21D018AE65A221880EBEB46C86E(L_4, _stringLiteralE91B79FB97CE92B245AA59A853F4DA5E282F6AB8, _stringLiteral40941F84518351AECD372E09DB612DD85B247DF2, /*hidden argument*/NULL);
		NullCheck(L_5);
		AdRequest_t2F1349A0C7189A7609F81197A2D4F80AAFB8AE88 * L_6;
		L_6 = Builder_Build_mA29B4BCC3837D128790FB5740BE36ECBC9B17E75(L_5, /*hidden argument*/NULL);
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
// System.Void GoogleMobileAds.Api.UserEarnedRewardEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserEarnedRewardEvent__ctor_m1746EC9E4436037F1FD9530DA6C4EB8CF98FD121 (UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0B1B8BA7EAC84EDCDCA542B70695041A5A7A1AC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0B1B8BA7EAC84EDCDCA542B70695041A5A7A1AC4(__this, /*hidden argument*/UnityEvent_1__ctor_m0B1B8BA7EAC84EDCDCA542B70695041A5A7A1AC4_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0__ctor_mB1DE2D1220B414210DAD93B17D373DDAFD00345B (U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_mC610883412C53D1C7431DF7B4ACFD7AF99ACAD5B (U3CAddCallbacksU3Ec__AnonStorey0_t12592703CA651C9615391B87753E413783354AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BannerAdGameObject_t0D88F994B8CC252A6C91A6FF76AABB64F0991F29 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * L_1 = L_0->get_onAdFailedToLoad_14();
		AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * L_2 = __this->get_args_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = AdFailedToLoadEventArgs_get_Message_m3C8512B88C0BFDB317764CF85DB5763797EB3EFF_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(L_1, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0__ctor_m36575161CE29760E0C68B21206C7BD52E8B8E73A (U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_mA80B39B5927C06010297A7DEE20FC995073B6F83 (U3CAddCallbacksU3Ec__AnonStorey0_t081A644FA198569137DFA4559F877929AF72E727 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InterstitialAdGameObject_t9F2D77329343B8D67F2395B1E9B73AF306857AAE * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * L_1 = L_0->get_onAdFailedToLoad_11();
		AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * L_2 = __this->get_args_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = AdFailedToLoadEventArgs_get_Message_m3C8512B88C0BFDB317764CF85DB5763797EB3EFF_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(L_1, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0__ctor_m48C41637FF8FA9569E74E5C1293AC8DED325E393 (U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey0_U3CU3Em__0_m5C35959C298B2042877756094D98097D4E6322FB (U3CAddCallbacksU3Ec__AnonStorey0_t38AFA23C807DA5AEA56ED96119D7BF2697825B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * L_1 = L_0->get_onAdFailedToLoad_11();
		AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * L_2 = __this->get_args_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = AdErrorEventArgs_get_Message_m829E43E951CA3F44367B12E0EB02D3E99D830B27_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(L_1, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey1__ctor_m2ABD3E61770247C6DDC24501040F3CFC73CDB811 (U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey1_U3CU3Em__0_m76389014961A03297C47D90A593CF118B3000E69 (U3CAddCallbacksU3Ec__AnonStorey1_t0B5E5A4CB69D9EE597FF77EB35C56A4E1A2C4058 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mEE4525B22905335325B6864F18D5235CE328149A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAdGameObject_tA89AB9A27778351B5033BE6F27156EA1B2E1F7E8 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * L_1 = L_0->get_onUserEarnedReward_14();
		Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * L_2 = __this->get_args_0();
		NullCheck(L_1);
		UnityEvent_1_Invoke_mEE4525B22905335325B6864F18D5235CE328149A(L_1, L_2, /*hidden argument*/UnityEvent_1_Invoke_mEE4525B22905335325B6864F18D5235CE328149A_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey2__ctor_mD881DC11C2E09B78CB4616E4F5EBEC80154A449D (U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddCallbacksU3Ec__AnonStorey2_U3CU3Em__0_mF4518F02A146549686CDB592AAD3EC4F3FA94BDB (U3CAddCallbacksU3Ec__AnonStorey2_tCCBC250F8408E7E16DB79E0D39B497CF72D09C07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		AdErrorEvent_tA2445CCCBF52E52151945892E3CB54880F1986DE * L_1 = L_0->get_onAdFailedToPresentFullScreenContent_12();
		AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * L_2 = __this->get_args_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = AdErrorEventArgs_get_Message_m829E43E951CA3F44367B12E0EB02D3E99D830B27_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(L_1, L_3, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0__ctor_mDCB3418C9A8FDA8B3F6AA553DDC5260E23A2A7BA (U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_mA9F92EC05E229C4A261BADC4A1171411C55199C5 (U3CLoadAdU3Ec__AnonStorey0_t4725D5E6C4DE9B6A9B5BCABC842E783CBF08B55E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		AdFailedToLoadEvent_tE38FA5743B55D7790EE77B957075275296270418 * L_1 = L_0->get_onAdFailedToLoad_11();
		String_t* L_2 = __this->get_error_0();
		NullCheck(L_1);
		UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10(L_1, L_2, /*hidden argument*/UnityEvent_1_Invoke_m48FFBB804EE21EB2CB49F17413E013F7C6A97E10_RuntimeMethod_var);
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
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowIfLoadedU3Ec__AnonStorey1__ctor_m1EA74E45CA8ABEF65657AEAF54BA73C47679ED8A (U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowIfLoadedU3Ec__AnonStorey1_U3CU3Em__0_mDB1DDAE2AE47376A8409BACAED3E18F60D324355 (U3CShowIfLoadedU3Ec__AnonStorey1_t6F6317F02C7C2C90F87699C4CD015289FD60CD0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mEE4525B22905335325B6864F18D5235CE328149A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedInterstitialAdGameObject_t54E6CB9B7A2D05009BED40E28550A85D2295CF80 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		UserEarnedRewardEvent_t12981D0B66BD36B25AECD96D53B4A1CB943A4E62 * L_1 = L_0->get_onUserEarnedReward_15();
		Reward_tCAE9570117A696C08D451C1CAAC4C6AAB71610CF * L_2 = __this->get_reward_0();
		NullCheck(L_1);
		UnityEvent_1_Invoke_mEE4525B22905335325B6864F18D5235CE328149A(L_1, L_2, /*hidden argument*/UnityEvent_1_Invoke_mEE4525B22905335325B6864F18D5235CE328149A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PoolEntry_get_SceneNameOrigin_mC81168A3E707DCFDA5FCC2C69A8A25D8040AA2EC_inline (PoolEntry_t1048AF1B84AA46AA3AC59896D1AC8BD94E808212 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_sceneNameOrigin_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdFailedToLoadEventArgs_get_Message_m3C8512B88C0BFDB317764CF85DB5763797EB3EFF_inline (AdFailedToLoadEventArgs_t97F2528C8232E0F8581A80A6959EDB1539333814 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdErrorEventArgs_get_Message_m829E43E951CA3F44367B12E0EB02D3E99D830B27_inline (AdErrorEventArgs_t7BE23EFD9ED89D56679A86F126120BFFB36EFC81 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
