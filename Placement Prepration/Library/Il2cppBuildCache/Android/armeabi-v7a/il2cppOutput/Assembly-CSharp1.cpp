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

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<JobDataBean>
struct List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<QuesDataBean>
struct List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// JobDataBean[]
struct JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AppManager
struct AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.UI.ContentSizeFitter
struct ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// JobDataBean
struct JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294;
// JobManager
struct JobManager_t89BD3393575335C464C70D6B561A32404520E022;
// LoadingScreenManager
struct LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7;
// LocalTestManager
struct LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA;
// MainManager
struct MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// TestContoller
struct TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// AppManager/<PutCompanyValuesToListFromServer>d__20
struct U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B;
// AppManager/<PutCourseValuesToListFromServer>d__18
struct U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA;
// AppManager/<PutSubjectValuesToListFromServer>d__19
struct U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136;
// AppManager/<ShowAndHideAfterTime>d__91
struct U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9;
// AppManager/<TextAlighByGeometry>d__45
struct U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD;
// JobManager/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tBED9CC855307295485E2CC3B2F42DD900C4AB02C;
// JobManager/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t9CB81EC4BA8C08DFA1673147B2DA7417A9E52C78;
// JobManager/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t59396D2D17ECF4671336687B564B062833D83A5D;
// JobManager/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_tE8AC7342B4BEF1CAD2FD933C4F65F6AB8F8259BE;
// JobManager/<DisableJobListThings>d__11
struct U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12;
// JobManager/<GetAllTheJobs>d__21
struct U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243;
// JobManager/<GetAllTheSkills>d__43
struct U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911;
// JobManager/<GetNewAllTheJobs>d__19
struct U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893;
// JobManager/<PlaceImageToObject>d__76
struct U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D;
// JobManager/<RefreshMyJob>d__8
struct U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98;
// LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5
struct U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD;
// LocalTestManager/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t69314CA188D3C9982D9015642E2E5EDD66ED4AB4;
// LocalTestManager/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_t6BE475F33EC3E6A7DEAC0159B740977F79686524;
// LocalTestManager/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_tCD98008967B62CAC2EB86FAF37E8B553CF4DFBE2;
// LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86
struct U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7;
// MainManager/<CreateAccountToServer>d__12
struct U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02;
// MainManager/<GetAdsFreqValue>d__22
struct U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1;
// MainManager/<IncreaseTimePlayed>d__15
struct U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560;
// MainManager/<UpdateRepeatToServer>d__14
struct U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F;
// MainManager/<UpdateStatsServer>d__17
struct U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// TestContoller/<Countdown>d__24
struct U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A;
// TestContoller/<TextAlighByGeometry>d__40
struct U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9;
// TestContoller/<TimeTakenCounterFU>d__52
struct U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A;
// TestContoller/<waitAndShowAds>d__51
struct U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00C1930F7BDCAA8D715F36C433B90455976246B1;
IL2CPP_EXTERN_C String_t* _stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD;
IL2CPP_EXTERN_C String_t* _stringLiteral04BB2B79C908AA9F00779CD8A45E22416ABE1E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral0ACEE724E4A550F5D72D235FF0F6FCAB5A77F1D9;
IL2CPP_EXTERN_C String_t* _stringLiteral0BF4B68B4B4C3969B587B737C674E7867C179AA3;
IL2CPP_EXTERN_C String_t* _stringLiteral0C25FAD76378D327D7BBD4B1C3A1F458CD1CD571;
IL2CPP_EXTERN_C String_t* _stringLiteral135E638DA52F163A28F9A25566D4A366F2652F79;
IL2CPP_EXTERN_C String_t* _stringLiteral21B885F6048303847B53574C707B2C876146C442;
IL2CPP_EXTERN_C String_t* _stringLiteral21E11D6E5A821EE8A67FB671F552FB4B14259784;
IL2CPP_EXTERN_C String_t* _stringLiteral22D048524F458D89CC8D755A4F9F030522F8010E;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2408E546AB809DF90137E84C0FDA19E4CCD0642B;
IL2CPP_EXTERN_C String_t* _stringLiteral26027DEFE902AF1F286824150A726C18EA29D9A5;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE45FFE2BBB90A90DA7494CC34F45AA0DFCD5D0;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC4FE86DCBBC89E960BFF3EDE1A5ADA4EFC2681;
IL2CPP_EXTERN_C String_t* _stringLiteral2F4667F64A3AD6EE792010100E4F3D76A1027784;
IL2CPP_EXTERN_C String_t* _stringLiteral30ADF4D36B6CCB9EFC4F08C7D12FCB95829AD91A;
IL2CPP_EXTERN_C String_t* _stringLiteral329F65FFA2A66A359FF1F566C8DC34F497DE13C0;
IL2CPP_EXTERN_C String_t* _stringLiteral50F9C30DB776D3327851E245A9FD687574FB96DB;
IL2CPP_EXTERN_C String_t* _stringLiteral52549EC33402874F91BE6513CAAB2F51A0973711;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4D640CF9D59A4F71FD24C9CD2278A4D71D503E;
IL2CPP_EXTERN_C String_t* _stringLiteral639AF8B14043FE813D57F08C90B400CEE6FDE099;
IL2CPP_EXTERN_C String_t* _stringLiteral63AF33DFD791785F3213FA822F77D47671AC3335;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral73A6A7ED5C5A3694B075CA8CA69A81332698700B;
IL2CPP_EXTERN_C String_t* _stringLiteral73DA0A9C7350CCD00BF824D784BF471386D8A207;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5EF3B88A810ED17930593E9B93C319C754B931;
IL2CPP_EXTERN_C String_t* _stringLiteral884284E03605E6B08A271AB4FF7481ED26221934;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral986B582D711D96B5EDAFD141FFD72B529F029D85;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9F8D6DA2F6B414D44649F54CEBA19901537A012C;
IL2CPP_EXTERN_C String_t* _stringLiteralA0A3E947017A4E6B0486C47C768C23BB95D6B8E2;
IL2CPP_EXTERN_C String_t* _stringLiteralABBD34FC4FF77F29B83A925D95378A4B68575021;
IL2CPP_EXTERN_C String_t* _stringLiteralB4EF6069890D0760665F15E5FD54DEDF80DA327B;
IL2CPP_EXTERN_C String_t* _stringLiteralB6C7257B1F9AA5918E1B6EB477D23DC7634170F7;
IL2CPP_EXTERN_C String_t* _stringLiteralB932F4795A105A9C25A8B2626832082FE834E55F;
IL2CPP_EXTERN_C String_t* _stringLiteralBD73CE24C609A9FED129FCEFA6E973E9435656B6;
IL2CPP_EXTERN_C String_t* _stringLiteralBF75A89A51C6347BB081E987C2DCA5529690F3C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBFF343FC0FFA83491668F52D4BAE59C345E1C05C;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E403C36178DCB3EA861D044065F99E595D86EF;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB7DCDDC1FBD1E2C478282A4BE343AFD538C5A34;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCED737DF5F5E32BBC2D3B7CB2104E14A473604;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE94AAB57C83AA1A6A0EDA30B4D195E0750794F1;
IL2CPP_EXTERN_C String_t* _stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD433298EC09A08A5480542EC27487B2B844B8CBE;
IL2CPP_EXTERN_C String_t* _stringLiteralD90766367386354624B23E748650672804353B83;
IL2CPP_EXTERN_C String_t* _stringLiteralD96A978CB229C4E4AEA6473FA5816684CB105B90;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE784C67A2BB378DEE858C2DFE27C9E227AED30C9;
IL2CPP_EXTERN_C String_t* _stringLiteralEA3ACC59CDD38DB07A306FE6E82DE222538AEE7C;
IL2CPP_EXTERN_C String_t* _stringLiteralF8FD467662406311C1881BB9D717E2F32F862DCF;
IL2CPP_EXTERN_C String_t* _stringLiteralFD2EF77FA61C59FEF53C32BF28B455CE865089CB;
IL2CPP_EXTERN_C String_t* _stringLiteralFE43351E3D064F45C4ABCED162CA5AB863117D88;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisJobManager_t89BD3393575335C464C70D6B561A32404520E022_m2E4E9EEBD114DE812F048006EBD653D880E23E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F_m0A143C05F728D1FACB70BB193897AE380F99AABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTestContoller_t937C672BED623740089E5DA4F104D6512B230EE1_m78EA412A36A106CF89E7E24E7FEFE2395E81C980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4400CEB1C172F05FBA3226E8482D8E4B46F5D4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckForSometimeThenShowRestartButtonU3Ed__5_System_Collections_IEnumerator_Reset_m0B83589EAE5B70A68124AF5020DB3608416D1272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountdownU3Ed__24_System_Collections_IEnumerator_Reset_m6DE28C10716AF153E601F289F13DD66FC6DB9EC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateAccountToServerU3Ed__12_System_Collections_IEnumerator_Reset_mC02653AE96BF5EAC06B7618135FA35B80D2B3B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisableJobListThingsU3Ed__11_System_Collections_IEnumerator_Reset_m191CC72390414AD5C910EF9B2A0E5014E59396E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAdsFreqValueU3Ed__22_System_Collections_IEnumerator_Reset_m30083B6AD1F5E3C14FDB19FC0E72DF170D469FB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllTheJobsU3Ed__21_System_Collections_IEnumerator_Reset_m8F4DEDC04454474B51377D95EF9C73963B1DC857_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllTheSkillsU3Ed__43_System_Collections_IEnumerator_Reset_mE3D292B97772CABE827CCEBB2D229FCBD1BE6949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_System_Collections_IEnumerator_Reset_m2497C1574EB8E669C42B571B78039296C46F8AA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetNewAllTheJobsU3Ed__19_System_Collections_IEnumerator_Reset_m6CE158B8BDE062CAF92DDA00ACFDB99AD0007DE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIncreaseTimePlayedU3Ed__15_System_Collections_IEnumerator_Reset_m8605349FCCA5D1804F74C3EC35D599A4AD0E55F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlaceImageToObjectU3Ed__76_System_Collections_IEnumerator_Reset_m4682AC159D844D6CE287007E98B66EAEDD044F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutCompanyValuesToListFromServerU3Ed__20_System_Collections_IEnumerator_Reset_m1F7332D16943E3223B6723427111442CB8452DCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutCourseValuesToListFromServerU3Ed__18_System_Collections_IEnumerator_Reset_m8B926EE2EB12BDF8F959C046408D8A367633AF93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutSubjectValuesToListFromServerU3Ed__19_System_Collections_IEnumerator_Reset_m2A181EBB093C850CB5F80C7D6272A88A7C29B46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRefreshMyJobU3Ed__8_System_Collections_IEnumerator_Reset_mD53D021AA685A665A5AB05F9F669C746496A880B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowAndHideAfterTimeU3Ed__91_System_Collections_IEnumerator_Reset_m95C49E71C8B532DA99B879B1BA3657E1AF9B81CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTextAlighByGeometryU3Ed__40_System_Collections_IEnumerator_Reset_m0310F38B60D0E8BBA688016CBCC034C5470A98C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTextAlighByGeometryU3Ed__45_System_Collections_IEnumerator_Reset_mB44E0AA2E82322AE09EE78D2C3B0B4FD2E18EF77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimeTakenCounterFUU3Ed__52_System_Collections_IEnumerator_Reset_m70C2828647D1C15D148D51575F344F1035F4EFD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateRepeatToServerU3Ed__14_System_Collections_IEnumerator_Reset_m753B8003CE6A454BE63E169FAA173CE2B2C985E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateStatsServerU3Ed__17_System_Collections_IEnumerator_Reset_mFE058FC2ADACC91DF7A8D22F0B8E53B3EE682865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitAndShowAdsU3Ed__51_System_Collections_IEnumerator_Reset_m8673659EBF283412547A6F657EDF77F8FA9E87D7_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<JobDataBean>
struct List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C, ____items_1)); }
	inline JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C* get__items_1() const { return ____items_1; }
	inline JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C_StaticFields, ____emptyArray_5)); }
	inline JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JobDataBeanU5BU5D_t61C2BEE4D579B427A975B2B435E7B88F0A7BBF6C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
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

// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___formData_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_formData_0() const { return ___formData_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fieldNames_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fileNames_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___types_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_types_3() const { return ___types_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___boundary_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// AppManager/<PutCompanyValuesToListFromServer>d__20
struct U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B  : public RuntimeObject
{
public:
	// System.Int32 AppManager/<PutCompanyValuesToListFromServer>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AppManager/<PutCompanyValuesToListFromServer>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AppManager AppManager/<PutCompanyValuesToListFromServer>d__20::<>4__this
	AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * ___U3CU3E4__this_2;
	// UnityEngine.WWW AppManager/<PutCompanyValuesToListFromServer>d__20::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B, ___U3CU3E4__this_2)); }
	inline AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// AppManager/<PutCourseValuesToListFromServer>d__18
struct U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA  : public RuntimeObject
{
public:
	// System.Int32 AppManager/<PutCourseValuesToListFromServer>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AppManager/<PutCourseValuesToListFromServer>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AppManager AppManager/<PutCourseValuesToListFromServer>d__18::<>4__this
	AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * ___U3CU3E4__this_2;
	// UnityEngine.WWW AppManager/<PutCourseValuesToListFromServer>d__18::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA, ___U3CU3E4__this_2)); }
	inline AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// AppManager/<PutSubjectValuesToListFromServer>d__19
struct U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136  : public RuntimeObject
{
public:
	// System.Int32 AppManager/<PutSubjectValuesToListFromServer>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AppManager/<PutSubjectValuesToListFromServer>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AppManager AppManager/<PutSubjectValuesToListFromServer>d__19::<>4__this
	AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * ___U3CU3E4__this_2;
	// UnityEngine.WWW AppManager/<PutSubjectValuesToListFromServer>d__19::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136, ___U3CU3E4__this_2)); }
	inline AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// AppManager/<ShowAndHideAfterTime>d__91
struct U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9  : public RuntimeObject
{
public:
	// System.Int32 AppManager/<ShowAndHideAfterTime>d__91::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AppManager/<ShowAndHideAfterTime>d__91::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single AppManager/<ShowAndHideAfterTime>d__91::Time
	float ___Time_2;
	// UnityEngine.GameObject AppManager/<ShowAndHideAfterTime>d__91::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_Time_2() { return static_cast<int32_t>(offsetof(U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9, ___Time_2)); }
	inline float get_Time_2() const { return ___Time_2; }
	inline float* get_address_of_Time_2() { return &___Time_2; }
	inline void set_Time_2(float value)
	{
		___Time_2 = value;
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9, ___go_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_3() const { return ___go_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_3), (void*)value);
	}
};


// AppManager/<TextAlighByGeometry>d__45
struct U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD  : public RuntimeObject
{
public:
	// System.Int32 AppManager/<TextAlighByGeometry>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AppManager/<TextAlighByGeometry>d__45::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Text AppManager/<TextAlighByGeometry>d__45::textt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textt_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_textt_2() { return static_cast<int32_t>(offsetof(U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD, ___textt_2)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textt_2() const { return ___textt_2; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textt_2() { return &___textt_2; }
	inline void set_textt_2(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textt_2), (void*)value);
	}
};


// JobManager/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tBED9CC855307295485E2CC3B2F42DD900C4AB02C  : public RuntimeObject
{
public:
	// System.Int32 JobManager/<>c__DisplayClass24_0::n
	int32_t ___n_0;
	// JobManager JobManager/<>c__DisplayClass24_0::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_n_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tBED9CC855307295485E2CC3B2F42DD900C4AB02C, ___n_0)); }
	inline int32_t get_n_0() const { return ___n_0; }
	inline int32_t* get_address_of_n_0() { return &___n_0; }
	inline void set_n_0(int32_t value)
	{
		___n_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tBED9CC855307295485E2CC3B2F42DD900C4AB02C, ___U3CU3E4__this_1)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// JobManager/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t9CB81EC4BA8C08DFA1673147B2DA7417A9E52C78  : public RuntimeObject
{
public:
	// System.Int32 JobManager/<>c__DisplayClass45_0::n
	int32_t ___n_0;
	// JobManager JobManager/<>c__DisplayClass45_0::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_n_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_t9CB81EC4BA8C08DFA1673147B2DA7417A9E52C78, ___n_0)); }
	inline int32_t get_n_0() const { return ___n_0; }
	inline int32_t* get_address_of_n_0() { return &___n_0; }
	inline void set_n_0(int32_t value)
	{
		___n_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_t9CB81EC4BA8C08DFA1673147B2DA7417A9E52C78, ___U3CU3E4__this_1)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// JobManager/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t59396D2D17ECF4671336687B564B062833D83A5D  : public RuntimeObject
{
public:
	// JobManager JobManager/<>c__DisplayClass63_0::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_0;
	// System.Int32 JobManager/<>c__DisplayClass63_0::n
	int32_t ___n_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass63_0_t59396D2D17ECF4671336687B564B062833D83A5D, ___U3CU3E4__this_0)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_n_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass63_0_t59396D2D17ECF4671336687B564B062833D83A5D, ___n_1)); }
	inline int32_t get_n_1() const { return ___n_1; }
	inline int32_t* get_address_of_n_1() { return &___n_1; }
	inline void set_n_1(int32_t value)
	{
		___n_1 = value;
	}
};


// JobManager/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_tE8AC7342B4BEF1CAD2FD933C4F65F6AB8F8259BE  : public RuntimeObject
{
public:
	// JobManager JobManager/<>c__DisplayClass70_0::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_0;
	// System.Int32 JobManager/<>c__DisplayClass70_0::n
	int32_t ___n_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_tE8AC7342B4BEF1CAD2FD933C4F65F6AB8F8259BE, ___U3CU3E4__this_0)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_n_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_tE8AC7342B4BEF1CAD2FD933C4F65F6AB8F8259BE, ___n_1)); }
	inline int32_t get_n_1() const { return ___n_1; }
	inline int32_t* get_address_of_n_1() { return &___n_1; }
	inline void set_n_1(int32_t value)
	{
		___n_1 = value;
	}
};


// JobManager/<DisableJobListThings>d__11
struct U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12  : public RuntimeObject
{
public:
	// System.Int32 JobManager/<DisableJobListThings>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JobManager/<DisableJobListThings>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// JobManager JobManager/<DisableJobListThings>d__11::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_2;
	// System.Int32 JobManager/<DisableJobListThings>d__11::setvalue
	int32_t ___setvalue_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12, ___U3CU3E4__this_2)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_setvalue_3() { return static_cast<int32_t>(offsetof(U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12, ___setvalue_3)); }
	inline int32_t get_setvalue_3() const { return ___setvalue_3; }
	inline int32_t* get_address_of_setvalue_3() { return &___setvalue_3; }
	inline void set_setvalue_3(int32_t value)
	{
		___setvalue_3 = value;
	}
};


// JobManager/<GetAllTheJobs>d__21
struct U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243  : public RuntimeObject
{
public:
	// System.Int32 JobManager/<GetAllTheJobs>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JobManager/<GetAllTheJobs>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// JobManager JobManager/<GetAllTheJobs>d__21::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_2;
	// UnityEngine.WWW JobManager/<GetAllTheJobs>d__21::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243, ___U3CU3E4__this_2)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// JobManager/<GetAllTheSkills>d__43
struct U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911  : public RuntimeObject
{
public:
	// System.Int32 JobManager/<GetAllTheSkills>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JobManager/<GetAllTheSkills>d__43::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// JobManager JobManager/<GetAllTheSkills>d__43::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_2;
	// UnityEngine.WWW JobManager/<GetAllTheSkills>d__43::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911, ___U3CU3E4__this_2)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// JobManager/<GetNewAllTheJobs>d__19
struct U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893  : public RuntimeObject
{
public:
	// System.Int32 JobManager/<GetNewAllTheJobs>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JobManager/<GetNewAllTheJobs>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// JobManager JobManager/<GetNewAllTheJobs>d__19::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_2;
	// UnityEngine.WWW JobManager/<GetNewAllTheJobs>d__19::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893, ___U3CU3E4__this_2)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// JobManager/<PlaceImageToObject>d__76
struct U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D  : public RuntimeObject
{
public:
	// System.Int32 JobManager/<PlaceImageToObject>d__76::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JobManager/<PlaceImageToObject>d__76::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Image JobManager/<PlaceImageToObject>d__76::go
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___go_2;
	// System.String JobManager/<PlaceImageToObject>d__76::URL
	String_t* ___URL_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_go_2() { return static_cast<int32_t>(offsetof(U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D, ___go_2)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_go_2() const { return ___go_2; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_go_2() { return &___go_2; }
	inline void set_go_2(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___go_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_2), (void*)value);
	}

	inline static int32_t get_offset_of_URL_3() { return static_cast<int32_t>(offsetof(U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D, ___URL_3)); }
	inline String_t* get_URL_3() const { return ___URL_3; }
	inline String_t** get_address_of_URL_3() { return &___URL_3; }
	inline void set_URL_3(String_t* value)
	{
		___URL_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___URL_3), (void*)value);
	}
};


// JobManager/<RefreshMyJob>d__8
struct U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98  : public RuntimeObject
{
public:
	// System.Int32 JobManager/<RefreshMyJob>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JobManager/<RefreshMyJob>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// JobManager JobManager/<RefreshMyJob>d__8::<>4__this
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * ___U3CU3E4__this_2;
	// System.Int32 JobManager/<RefreshMyJob>d__8::<con>5__2
	int32_t ___U3CconU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98, ___U3CU3E4__this_2)); }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JobManager_t89BD3393575335C464C70D6B561A32404520E022 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98, ___U3CconU3E5__2_3)); }
	inline int32_t get_U3CconU3E5__2_3() const { return ___U3CconU3E5__2_3; }
	inline int32_t* get_address_of_U3CconU3E5__2_3() { return &___U3CconU3E5__2_3; }
	inline void set_U3CconU3E5__2_3(int32_t value)
	{
		___U3CconU3E5__2_3 = value;
	}
};


// LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5
struct U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD  : public RuntimeObject
{
public:
	// System.Int32 LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LoadingScreenManager LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::<>4__this
	LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD, ___U3CU3E4__this_2)); }
	inline LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// LocalTestManager/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t69314CA188D3C9982D9015642E2E5EDD66ED4AB4  : public RuntimeObject
{
public:
	// System.Int32 LocalTestManager/<>c__DisplayClass32_0::num
	int32_t ___num_0;
	// LocalTestManager LocalTestManager/<>c__DisplayClass32_0::<>4__this
	LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_num_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t69314CA188D3C9982D9015642E2E5EDD66ED4AB4, ___num_0)); }
	inline int32_t get_num_0() const { return ___num_0; }
	inline int32_t* get_address_of_num_0() { return &___num_0; }
	inline void set_num_0(int32_t value)
	{
		___num_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t69314CA188D3C9982D9015642E2E5EDD66ED4AB4, ___U3CU3E4__this_1)); }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// LocalTestManager/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_t6BE475F33EC3E6A7DEAC0159B740977F79686524  : public RuntimeObject
{
public:
	// System.Int32 LocalTestManager/<>c__DisplayClass46_0::num
	int32_t ___num_0;
	// LocalTestManager LocalTestManager/<>c__DisplayClass46_0::<>4__this
	LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_num_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_t6BE475F33EC3E6A7DEAC0159B740977F79686524, ___num_0)); }
	inline int32_t get_num_0() const { return ___num_0; }
	inline int32_t* get_address_of_num_0() { return &___num_0; }
	inline void set_num_0(int32_t value)
	{
		___num_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_t6BE475F33EC3E6A7DEAC0159B740977F79686524, ___U3CU3E4__this_1)); }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// LocalTestManager/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_tCD98008967B62CAC2EB86FAF37E8B553CF4DFBE2  : public RuntimeObject
{
public:
	// System.Int32 LocalTestManager/<>c__DisplayClass60_0::num
	int32_t ___num_0;
	// LocalTestManager LocalTestManager/<>c__DisplayClass60_0::<>4__this
	LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_num_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tCD98008967B62CAC2EB86FAF37E8B553CF4DFBE2, ___num_0)); }
	inline int32_t get_num_0() const { return ___num_0; }
	inline int32_t* get_address_of_num_0() { return &___num_0; }
	inline void set_num_0(int32_t value)
	{
		___num_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tCD98008967B62CAC2EB86FAF37E8B553CF4DFBE2, ___U3CU3E4__this_1)); }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86
struct U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7  : public RuntimeObject
{
public:
	// System.Int32 LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LocalTestManager LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::<>4__this
	LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * ___U3CU3E4__this_2;
	// UnityEngine.WWW LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7, ___U3CU3E4__this_2)); }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// MainManager/<CreateAccountToServer>d__12
struct U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02  : public RuntimeObject
{
public:
	// System.Int32 MainManager/<CreateAccountToServer>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainManager/<CreateAccountToServer>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MainManager MainManager/<CreateAccountToServer>d__12::<>4__this
	MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * ___U3CU3E4__this_2;
	// UnityEngine.WWW MainManager/<CreateAccountToServer>d__12::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02, ___U3CU3E4__this_2)); }
	inline MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// MainManager/<GetAdsFreqValue>d__22
struct U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1  : public RuntimeObject
{
public:
	// System.Int32 MainManager/<GetAdsFreqValue>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainManager/<GetAdsFreqValue>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MainManager MainManager/<GetAdsFreqValue>d__22::<>4__this
	MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * ___U3CU3E4__this_2;
	// UnityEngine.WWW MainManager/<GetAdsFreqValue>d__22::<www>5__2
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1, ___U3CU3E4__this_2)); }
	inline MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1, ___U3CwwwU3E5__2_3)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// MainManager/<IncreaseTimePlayed>d__15
struct U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560  : public RuntimeObject
{
public:
	// System.Int32 MainManager/<IncreaseTimePlayed>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainManager/<IncreaseTimePlayed>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MainManager MainManager/<IncreaseTimePlayed>d__15::<>4__this
	MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560, ___U3CU3E4__this_2)); }
	inline MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// MainManager/<UpdateRepeatToServer>d__14
struct U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F  : public RuntimeObject
{
public:
	// System.Int32 MainManager/<UpdateRepeatToServer>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainManager/<UpdateRepeatToServer>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// MainManager/<UpdateStatsServer>d__17
struct U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41  : public RuntimeObject
{
public:
	// System.Int32 MainManager/<UpdateStatsServer>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainManager/<UpdateStatsServer>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// TestContoller/<Countdown>d__24
struct U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A  : public RuntimeObject
{
public:
	// System.Int32 TestContoller/<Countdown>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestContoller/<Countdown>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TestContoller TestContoller/<Countdown>d__24::<>4__this
	TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * ___U3CU3E4__this_2;
	// System.Int32 TestContoller/<Countdown>d__24::completeTime
	int32_t ___completeTime_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A, ___U3CU3E4__this_2)); }
	inline TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_completeTime_3() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A, ___completeTime_3)); }
	inline int32_t get_completeTime_3() const { return ___completeTime_3; }
	inline int32_t* get_address_of_completeTime_3() { return &___completeTime_3; }
	inline void set_completeTime_3(int32_t value)
	{
		___completeTime_3 = value;
	}
};


// TestContoller/<TextAlighByGeometry>d__40
struct U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9  : public RuntimeObject
{
public:
	// System.Int32 TestContoller/<TextAlighByGeometry>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestContoller/<TextAlighByGeometry>d__40::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Text TestContoller/<TextAlighByGeometry>d__40::textt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textt_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_textt_2() { return static_cast<int32_t>(offsetof(U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9, ___textt_2)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textt_2() const { return ___textt_2; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textt_2() { return &___textt_2; }
	inline void set_textt_2(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textt_2), (void*)value);
	}
};


// TestContoller/<TimeTakenCounterFU>d__52
struct U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A  : public RuntimeObject
{
public:
	// System.Int32 TestContoller/<TimeTakenCounterFU>d__52::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestContoller/<TimeTakenCounterFU>d__52::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TestContoller TestContoller/<TimeTakenCounterFU>d__52::<>4__this
	TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A, ___U3CU3E4__this_2)); }
	inline TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TestContoller/<waitAndShowAds>d__51
struct U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43  : public RuntimeObject
{
public:
	// System.Int32 TestContoller/<waitAndShowAds>d__51::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestContoller/<waitAndShowAds>d__51::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TestContoller TestContoller/<waitAndShowAds>d__51::<>4__this
	TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43, ___U3CU3E4__this_2)); }
	inline TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

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


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.UI.ContentSizeFitter/FitMode
struct FitMode_t003CA2D5EEC902650F2182E2D748E327BC6D4571 
{
public:
	// System.Int32 UnityEngine.UI.ContentSizeFitter/FitMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FitMode_t003CA2D5EEC902650F2182E2D748E327BC6D4571, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OnlyOneEdgeModifier/ProceduralImageEdge
struct ProceduralImageEdge_tBE21C522F4E64E5986FECDDC0586EAD16502E626 
{
public:
	// System.Int32 OnlyOneEdgeModifier/ProceduralImageEdge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProceduralImageEdge_tBE21C522F4E64E5986FECDDC0586EAD16502E626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// AppManager
struct AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AppManager::LoadingScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LoadingScreen_4;
	// UnityEngine.GameObject AppManager::PracticePannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PracticePannel_5;
	// System.String AppManager::GetCourseDataLink
	String_t* ___GetCourseDataLink_6;
	// System.String AppManager::GetSubjectDataLink
	String_t* ___GetSubjectDataLink_7;
	// System.String AppManager::GetCompanyDataLink
	String_t* ___GetCompanyDataLink_8;
	// System.String AppManager::GetAllQuesDataLink
	String_t* ___GetAllQuesDataLink_9;
	// System.Collections.Generic.List`1<System.String> AppManager::courseValues
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___courseValues_10;
	// System.Collections.Generic.List`1<System.String> AppManager::subjectValues
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___subjectValues_11;
	// System.Collections.Generic.List`1<System.String> AppManager::companyValues
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___companyValues_12;
	// System.String AppManager::AllCourseData
	String_t* ___AllCourseData_13;
	// System.String AppManager::AllSubjectData
	String_t* ___AllSubjectData_14;
	// System.String AppManager::AllCompanyData
	String_t* ___AllCompanyData_15;
	// System.Collections.Generic.List`1<QuesDataBean> AppManager::quesData
	List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8 * ___quesData_16;
	// System.Int32 AppManager::sendOnPath
	int32_t ___sendOnPath_17;
	// System.Int32 AppManager::quesid
	int32_t ___quesid_18;
	// System.Int32 AppManager::isPanellOpen
	int32_t ___isPanellOpen_19;
	// UnityEngine.GameObject AppManager::CourseGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CourseGO_20;
	// UnityEngine.GameObject AppManager::SubjectGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SubjectGO_21;
	// UnityEngine.GameObject AppManager::CompanyGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CompanyGO_22;
	// UnityEngine.GameObject AppManager::QuesGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___QuesGO_23;
	// UnityEngine.Transform AppManager::LocationToSpawn
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___LocationToSpawn_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AppManager::SubjectsButtonsGO
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___SubjectsButtonsGO_25;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AppManager::CourseButtonsGO
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___CourseButtonsGO_26;
	// System.Int32 AppManager::currentSubjectIndex
	int32_t ___currentSubjectIndex_27;
	// UnityEngine.GameObject AppManager::NormalQuestionPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NormalQuestionPannel_28;
	// System.String AppManager::explanationWritten
	String_t* ___explanationWritten_29;
	// UnityEngine.UI.Text AppManager::QuesNumberText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___QuesNumberText_30;
	// UnityEngine.UI.Text AppManager::QuesTextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___QuesTextCenter_31;
	// UnityEngine.UI.Text AppManager::Option1TextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Option1TextCenter_32;
	// UnityEngine.UI.Text AppManager::Option2TextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Option2TextCenter_33;
	// UnityEngine.UI.Text AppManager::Option3TextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Option3TextCenter_34;
	// UnityEngine.UI.Text AppManager::Option4TextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Option4TextCenter_35;
	// UnityEngine.UI.Text AppManager::ExplanationTextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ExplanationTextCenter_36;
	// UnityEngine.UI.Text AppManager::YoutubeLinkCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___YoutubeLinkCenter_37;
	// UnityEngine.GameObject AppManager::LeftPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LeftPannel_38;
	// UnityEngine.UI.Image AppManager::MainMenuImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___MainMenuImage_39;
	// UnityEngine.GameObject AppManager::CloseLeftPannelGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CloseLeftPannelGO_40;
	// System.Boolean AppManager::isLeftPannelOpen
	bool ___isLeftPannelOpen_41;
	// UnityEngine.GameObject AppManager::OptionsText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___OptionsText_42;
	// UnityEngine.GameObject AppManager::CenterLogoPage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CenterLogoPage_43;
	// UnityEngine.GameObject AppManager::BackButtonCenter
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BackButtonCenter_44;
	// UnityEngine.GameObject AppManager::ForwardButtonCenter
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ForwardButtonCenter_45;
	// UnityEngine.Sprite AppManager::TickCheckBox
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___TickCheckBox_46;
	// UnityEngine.Sprite AppManager::UnTickCheckBox
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___UnTickCheckBox_47;
	// UnityEngine.Sprite AppManager::WrongTickCheckBox
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___WrongTickCheckBox_48;
	// UnityEngine.GameObject AppManager::CheckBox1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CheckBox1_49;
	// UnityEngine.GameObject AppManager::CheckBox2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CheckBox2_50;
	// UnityEngine.GameObject AppManager::CheckBox3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CheckBox3_51;
	// UnityEngine.GameObject AppManager::CheckBox4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CheckBox4_52;
	// UnityEngine.UI.Text AppManager::RightAnswerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RightAnswerText_53;
	// UnityEngine.UI.Text AppManager::WrongAnswerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___WrongAnswerText_54;
	// System.Int32 AppManager::correctAns
	int32_t ___correctAns_55;
	// System.Int32 AppManager::currentQues
	int32_t ___currentQues_56;
	// System.Int32 AppManager::currentCheckBox
	int32_t ___currentCheckBox_57;
	// UnityEngine.GameObject AppManager::SubmitButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SubmitButton_58;
	// UnityEngine.GameObject AppManager::ShowExplanationButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ShowExplanationButton_59;
	// UnityEngine.GameObject AppManager::ExplanationText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ExplanationText_60;
	// UnityEngine.UI.Text AppManager::ReportText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ReportText_61;
	// System.Boolean AppManager::isloadingPannelActivated
	bool ___isloadingPannelActivated_62;

public:
	inline static int32_t get_offset_of_LoadingScreen_4() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___LoadingScreen_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LoadingScreen_4() const { return ___LoadingScreen_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LoadingScreen_4() { return &___LoadingScreen_4; }
	inline void set_LoadingScreen_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LoadingScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadingScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_PracticePannel_5() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___PracticePannel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PracticePannel_5() const { return ___PracticePannel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PracticePannel_5() { return &___PracticePannel_5; }
	inline void set_PracticePannel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PracticePannel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PracticePannel_5), (void*)value);
	}

	inline static int32_t get_offset_of_GetCourseDataLink_6() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___GetCourseDataLink_6)); }
	inline String_t* get_GetCourseDataLink_6() const { return ___GetCourseDataLink_6; }
	inline String_t** get_address_of_GetCourseDataLink_6() { return &___GetCourseDataLink_6; }
	inline void set_GetCourseDataLink_6(String_t* value)
	{
		___GetCourseDataLink_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetCourseDataLink_6), (void*)value);
	}

	inline static int32_t get_offset_of_GetSubjectDataLink_7() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___GetSubjectDataLink_7)); }
	inline String_t* get_GetSubjectDataLink_7() const { return ___GetSubjectDataLink_7; }
	inline String_t** get_address_of_GetSubjectDataLink_7() { return &___GetSubjectDataLink_7; }
	inline void set_GetSubjectDataLink_7(String_t* value)
	{
		___GetSubjectDataLink_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetSubjectDataLink_7), (void*)value);
	}

	inline static int32_t get_offset_of_GetCompanyDataLink_8() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___GetCompanyDataLink_8)); }
	inline String_t* get_GetCompanyDataLink_8() const { return ___GetCompanyDataLink_8; }
	inline String_t** get_address_of_GetCompanyDataLink_8() { return &___GetCompanyDataLink_8; }
	inline void set_GetCompanyDataLink_8(String_t* value)
	{
		___GetCompanyDataLink_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetCompanyDataLink_8), (void*)value);
	}

	inline static int32_t get_offset_of_GetAllQuesDataLink_9() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___GetAllQuesDataLink_9)); }
	inline String_t* get_GetAllQuesDataLink_9() const { return ___GetAllQuesDataLink_9; }
	inline String_t** get_address_of_GetAllQuesDataLink_9() { return &___GetAllQuesDataLink_9; }
	inline void set_GetAllQuesDataLink_9(String_t* value)
	{
		___GetAllQuesDataLink_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetAllQuesDataLink_9), (void*)value);
	}

	inline static int32_t get_offset_of_courseValues_10() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___courseValues_10)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_courseValues_10() const { return ___courseValues_10; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_courseValues_10() { return &___courseValues_10; }
	inline void set_courseValues_10(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___courseValues_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___courseValues_10), (void*)value);
	}

	inline static int32_t get_offset_of_subjectValues_11() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___subjectValues_11)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_subjectValues_11() const { return ___subjectValues_11; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_subjectValues_11() { return &___subjectValues_11; }
	inline void set_subjectValues_11(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___subjectValues_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subjectValues_11), (void*)value);
	}

	inline static int32_t get_offset_of_companyValues_12() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___companyValues_12)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_companyValues_12() const { return ___companyValues_12; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_companyValues_12() { return &___companyValues_12; }
	inline void set_companyValues_12(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___companyValues_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___companyValues_12), (void*)value);
	}

	inline static int32_t get_offset_of_AllCourseData_13() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___AllCourseData_13)); }
	inline String_t* get_AllCourseData_13() const { return ___AllCourseData_13; }
	inline String_t** get_address_of_AllCourseData_13() { return &___AllCourseData_13; }
	inline void set_AllCourseData_13(String_t* value)
	{
		___AllCourseData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllCourseData_13), (void*)value);
	}

	inline static int32_t get_offset_of_AllSubjectData_14() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___AllSubjectData_14)); }
	inline String_t* get_AllSubjectData_14() const { return ___AllSubjectData_14; }
	inline String_t** get_address_of_AllSubjectData_14() { return &___AllSubjectData_14; }
	inline void set_AllSubjectData_14(String_t* value)
	{
		___AllSubjectData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllSubjectData_14), (void*)value);
	}

	inline static int32_t get_offset_of_AllCompanyData_15() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___AllCompanyData_15)); }
	inline String_t* get_AllCompanyData_15() const { return ___AllCompanyData_15; }
	inline String_t** get_address_of_AllCompanyData_15() { return &___AllCompanyData_15; }
	inline void set_AllCompanyData_15(String_t* value)
	{
		___AllCompanyData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllCompanyData_15), (void*)value);
	}

	inline static int32_t get_offset_of_quesData_16() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___quesData_16)); }
	inline List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8 * get_quesData_16() const { return ___quesData_16; }
	inline List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8 ** get_address_of_quesData_16() { return &___quesData_16; }
	inline void set_quesData_16(List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8 * value)
	{
		___quesData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quesData_16), (void*)value);
	}

	inline static int32_t get_offset_of_sendOnPath_17() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___sendOnPath_17)); }
	inline int32_t get_sendOnPath_17() const { return ___sendOnPath_17; }
	inline int32_t* get_address_of_sendOnPath_17() { return &___sendOnPath_17; }
	inline void set_sendOnPath_17(int32_t value)
	{
		___sendOnPath_17 = value;
	}

	inline static int32_t get_offset_of_quesid_18() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___quesid_18)); }
	inline int32_t get_quesid_18() const { return ___quesid_18; }
	inline int32_t* get_address_of_quesid_18() { return &___quesid_18; }
	inline void set_quesid_18(int32_t value)
	{
		___quesid_18 = value;
	}

	inline static int32_t get_offset_of_isPanellOpen_19() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___isPanellOpen_19)); }
	inline int32_t get_isPanellOpen_19() const { return ___isPanellOpen_19; }
	inline int32_t* get_address_of_isPanellOpen_19() { return &___isPanellOpen_19; }
	inline void set_isPanellOpen_19(int32_t value)
	{
		___isPanellOpen_19 = value;
	}

	inline static int32_t get_offset_of_CourseGO_20() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CourseGO_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CourseGO_20() const { return ___CourseGO_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CourseGO_20() { return &___CourseGO_20; }
	inline void set_CourseGO_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CourseGO_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CourseGO_20), (void*)value);
	}

	inline static int32_t get_offset_of_SubjectGO_21() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___SubjectGO_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SubjectGO_21() const { return ___SubjectGO_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SubjectGO_21() { return &___SubjectGO_21; }
	inline void set_SubjectGO_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SubjectGO_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubjectGO_21), (void*)value);
	}

	inline static int32_t get_offset_of_CompanyGO_22() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CompanyGO_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CompanyGO_22() const { return ___CompanyGO_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CompanyGO_22() { return &___CompanyGO_22; }
	inline void set_CompanyGO_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CompanyGO_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CompanyGO_22), (void*)value);
	}

	inline static int32_t get_offset_of_QuesGO_23() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___QuesGO_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_QuesGO_23() const { return ___QuesGO_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_QuesGO_23() { return &___QuesGO_23; }
	inline void set_QuesGO_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___QuesGO_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuesGO_23), (void*)value);
	}

	inline static int32_t get_offset_of_LocationToSpawn_24() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___LocationToSpawn_24)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_LocationToSpawn_24() const { return ___LocationToSpawn_24; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_LocationToSpawn_24() { return &___LocationToSpawn_24; }
	inline void set_LocationToSpawn_24(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___LocationToSpawn_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocationToSpawn_24), (void*)value);
	}

	inline static int32_t get_offset_of_SubjectsButtonsGO_25() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___SubjectsButtonsGO_25)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_SubjectsButtonsGO_25() const { return ___SubjectsButtonsGO_25; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_SubjectsButtonsGO_25() { return &___SubjectsButtonsGO_25; }
	inline void set_SubjectsButtonsGO_25(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___SubjectsButtonsGO_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubjectsButtonsGO_25), (void*)value);
	}

	inline static int32_t get_offset_of_CourseButtonsGO_26() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CourseButtonsGO_26)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_CourseButtonsGO_26() const { return ___CourseButtonsGO_26; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_CourseButtonsGO_26() { return &___CourseButtonsGO_26; }
	inline void set_CourseButtonsGO_26(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___CourseButtonsGO_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CourseButtonsGO_26), (void*)value);
	}

	inline static int32_t get_offset_of_currentSubjectIndex_27() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___currentSubjectIndex_27)); }
	inline int32_t get_currentSubjectIndex_27() const { return ___currentSubjectIndex_27; }
	inline int32_t* get_address_of_currentSubjectIndex_27() { return &___currentSubjectIndex_27; }
	inline void set_currentSubjectIndex_27(int32_t value)
	{
		___currentSubjectIndex_27 = value;
	}

	inline static int32_t get_offset_of_NormalQuestionPannel_28() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___NormalQuestionPannel_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NormalQuestionPannel_28() const { return ___NormalQuestionPannel_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NormalQuestionPannel_28() { return &___NormalQuestionPannel_28; }
	inline void set_NormalQuestionPannel_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NormalQuestionPannel_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NormalQuestionPannel_28), (void*)value);
	}

	inline static int32_t get_offset_of_explanationWritten_29() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___explanationWritten_29)); }
	inline String_t* get_explanationWritten_29() const { return ___explanationWritten_29; }
	inline String_t** get_address_of_explanationWritten_29() { return &___explanationWritten_29; }
	inline void set_explanationWritten_29(String_t* value)
	{
		___explanationWritten_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explanationWritten_29), (void*)value);
	}

	inline static int32_t get_offset_of_QuesNumberText_30() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___QuesNumberText_30)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_QuesNumberText_30() const { return ___QuesNumberText_30; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_QuesNumberText_30() { return &___QuesNumberText_30; }
	inline void set_QuesNumberText_30(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___QuesNumberText_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuesNumberText_30), (void*)value);
	}

	inline static int32_t get_offset_of_QuesTextCenter_31() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___QuesTextCenter_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_QuesTextCenter_31() const { return ___QuesTextCenter_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_QuesTextCenter_31() { return &___QuesTextCenter_31; }
	inline void set_QuesTextCenter_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___QuesTextCenter_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuesTextCenter_31), (void*)value);
	}

	inline static int32_t get_offset_of_Option1TextCenter_32() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___Option1TextCenter_32)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Option1TextCenter_32() const { return ___Option1TextCenter_32; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Option1TextCenter_32() { return &___Option1TextCenter_32; }
	inline void set_Option1TextCenter_32(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Option1TextCenter_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Option1TextCenter_32), (void*)value);
	}

	inline static int32_t get_offset_of_Option2TextCenter_33() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___Option2TextCenter_33)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Option2TextCenter_33() const { return ___Option2TextCenter_33; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Option2TextCenter_33() { return &___Option2TextCenter_33; }
	inline void set_Option2TextCenter_33(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Option2TextCenter_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Option2TextCenter_33), (void*)value);
	}

	inline static int32_t get_offset_of_Option3TextCenter_34() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___Option3TextCenter_34)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Option3TextCenter_34() const { return ___Option3TextCenter_34; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Option3TextCenter_34() { return &___Option3TextCenter_34; }
	inline void set_Option3TextCenter_34(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Option3TextCenter_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Option3TextCenter_34), (void*)value);
	}

	inline static int32_t get_offset_of_Option4TextCenter_35() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___Option4TextCenter_35)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Option4TextCenter_35() const { return ___Option4TextCenter_35; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Option4TextCenter_35() { return &___Option4TextCenter_35; }
	inline void set_Option4TextCenter_35(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Option4TextCenter_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Option4TextCenter_35), (void*)value);
	}

	inline static int32_t get_offset_of_ExplanationTextCenter_36() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___ExplanationTextCenter_36)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ExplanationTextCenter_36() const { return ___ExplanationTextCenter_36; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ExplanationTextCenter_36() { return &___ExplanationTextCenter_36; }
	inline void set_ExplanationTextCenter_36(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ExplanationTextCenter_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExplanationTextCenter_36), (void*)value);
	}

	inline static int32_t get_offset_of_YoutubeLinkCenter_37() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___YoutubeLinkCenter_37)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_YoutubeLinkCenter_37() const { return ___YoutubeLinkCenter_37; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_YoutubeLinkCenter_37() { return &___YoutubeLinkCenter_37; }
	inline void set_YoutubeLinkCenter_37(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___YoutubeLinkCenter_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YoutubeLinkCenter_37), (void*)value);
	}

	inline static int32_t get_offset_of_LeftPannel_38() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___LeftPannel_38)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LeftPannel_38() const { return ___LeftPannel_38; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LeftPannel_38() { return &___LeftPannel_38; }
	inline void set_LeftPannel_38(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LeftPannel_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeftPannel_38), (void*)value);
	}

	inline static int32_t get_offset_of_MainMenuImage_39() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___MainMenuImage_39)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_MainMenuImage_39() const { return ___MainMenuImage_39; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_MainMenuImage_39() { return &___MainMenuImage_39; }
	inline void set_MainMenuImage_39(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___MainMenuImage_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainMenuImage_39), (void*)value);
	}

	inline static int32_t get_offset_of_CloseLeftPannelGO_40() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CloseLeftPannelGO_40)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CloseLeftPannelGO_40() const { return ___CloseLeftPannelGO_40; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CloseLeftPannelGO_40() { return &___CloseLeftPannelGO_40; }
	inline void set_CloseLeftPannelGO_40(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CloseLeftPannelGO_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CloseLeftPannelGO_40), (void*)value);
	}

	inline static int32_t get_offset_of_isLeftPannelOpen_41() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___isLeftPannelOpen_41)); }
	inline bool get_isLeftPannelOpen_41() const { return ___isLeftPannelOpen_41; }
	inline bool* get_address_of_isLeftPannelOpen_41() { return &___isLeftPannelOpen_41; }
	inline void set_isLeftPannelOpen_41(bool value)
	{
		___isLeftPannelOpen_41 = value;
	}

	inline static int32_t get_offset_of_OptionsText_42() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___OptionsText_42)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_OptionsText_42() const { return ___OptionsText_42; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_OptionsText_42() { return &___OptionsText_42; }
	inline void set_OptionsText_42(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___OptionsText_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OptionsText_42), (void*)value);
	}

	inline static int32_t get_offset_of_CenterLogoPage_43() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CenterLogoPage_43)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CenterLogoPage_43() const { return ___CenterLogoPage_43; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CenterLogoPage_43() { return &___CenterLogoPage_43; }
	inline void set_CenterLogoPage_43(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CenterLogoPage_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CenterLogoPage_43), (void*)value);
	}

	inline static int32_t get_offset_of_BackButtonCenter_44() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___BackButtonCenter_44)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BackButtonCenter_44() const { return ___BackButtonCenter_44; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BackButtonCenter_44() { return &___BackButtonCenter_44; }
	inline void set_BackButtonCenter_44(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BackButtonCenter_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackButtonCenter_44), (void*)value);
	}

	inline static int32_t get_offset_of_ForwardButtonCenter_45() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___ForwardButtonCenter_45)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ForwardButtonCenter_45() const { return ___ForwardButtonCenter_45; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ForwardButtonCenter_45() { return &___ForwardButtonCenter_45; }
	inline void set_ForwardButtonCenter_45(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ForwardButtonCenter_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForwardButtonCenter_45), (void*)value);
	}

	inline static int32_t get_offset_of_TickCheckBox_46() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___TickCheckBox_46)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_TickCheckBox_46() const { return ___TickCheckBox_46; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_TickCheckBox_46() { return &___TickCheckBox_46; }
	inline void set_TickCheckBox_46(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___TickCheckBox_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TickCheckBox_46), (void*)value);
	}

	inline static int32_t get_offset_of_UnTickCheckBox_47() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___UnTickCheckBox_47)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_UnTickCheckBox_47() const { return ___UnTickCheckBox_47; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_UnTickCheckBox_47() { return &___UnTickCheckBox_47; }
	inline void set_UnTickCheckBox_47(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___UnTickCheckBox_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnTickCheckBox_47), (void*)value);
	}

	inline static int32_t get_offset_of_WrongTickCheckBox_48() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___WrongTickCheckBox_48)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_WrongTickCheckBox_48() const { return ___WrongTickCheckBox_48; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_WrongTickCheckBox_48() { return &___WrongTickCheckBox_48; }
	inline void set_WrongTickCheckBox_48(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___WrongTickCheckBox_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WrongTickCheckBox_48), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBox1_49() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CheckBox1_49)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CheckBox1_49() const { return ___CheckBox1_49; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CheckBox1_49() { return &___CheckBox1_49; }
	inline void set_CheckBox1_49(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CheckBox1_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBox1_49), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBox2_50() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CheckBox2_50)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CheckBox2_50() const { return ___CheckBox2_50; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CheckBox2_50() { return &___CheckBox2_50; }
	inline void set_CheckBox2_50(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CheckBox2_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBox2_50), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBox3_51() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CheckBox3_51)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CheckBox3_51() const { return ___CheckBox3_51; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CheckBox3_51() { return &___CheckBox3_51; }
	inline void set_CheckBox3_51(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CheckBox3_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBox3_51), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBox4_52() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___CheckBox4_52)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CheckBox4_52() const { return ___CheckBox4_52; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CheckBox4_52() { return &___CheckBox4_52; }
	inline void set_CheckBox4_52(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CheckBox4_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBox4_52), (void*)value);
	}

	inline static int32_t get_offset_of_RightAnswerText_53() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___RightAnswerText_53)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RightAnswerText_53() const { return ___RightAnswerText_53; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RightAnswerText_53() { return &___RightAnswerText_53; }
	inline void set_RightAnswerText_53(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RightAnswerText_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RightAnswerText_53), (void*)value);
	}

	inline static int32_t get_offset_of_WrongAnswerText_54() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___WrongAnswerText_54)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_WrongAnswerText_54() const { return ___WrongAnswerText_54; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_WrongAnswerText_54() { return &___WrongAnswerText_54; }
	inline void set_WrongAnswerText_54(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___WrongAnswerText_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WrongAnswerText_54), (void*)value);
	}

	inline static int32_t get_offset_of_correctAns_55() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___correctAns_55)); }
	inline int32_t get_correctAns_55() const { return ___correctAns_55; }
	inline int32_t* get_address_of_correctAns_55() { return &___correctAns_55; }
	inline void set_correctAns_55(int32_t value)
	{
		___correctAns_55 = value;
	}

	inline static int32_t get_offset_of_currentQues_56() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___currentQues_56)); }
	inline int32_t get_currentQues_56() const { return ___currentQues_56; }
	inline int32_t* get_address_of_currentQues_56() { return &___currentQues_56; }
	inline void set_currentQues_56(int32_t value)
	{
		___currentQues_56 = value;
	}

	inline static int32_t get_offset_of_currentCheckBox_57() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___currentCheckBox_57)); }
	inline int32_t get_currentCheckBox_57() const { return ___currentCheckBox_57; }
	inline int32_t* get_address_of_currentCheckBox_57() { return &___currentCheckBox_57; }
	inline void set_currentCheckBox_57(int32_t value)
	{
		___currentCheckBox_57 = value;
	}

	inline static int32_t get_offset_of_SubmitButton_58() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___SubmitButton_58)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SubmitButton_58() const { return ___SubmitButton_58; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SubmitButton_58() { return &___SubmitButton_58; }
	inline void set_SubmitButton_58(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SubmitButton_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubmitButton_58), (void*)value);
	}

	inline static int32_t get_offset_of_ShowExplanationButton_59() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___ShowExplanationButton_59)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ShowExplanationButton_59() const { return ___ShowExplanationButton_59; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ShowExplanationButton_59() { return &___ShowExplanationButton_59; }
	inline void set_ShowExplanationButton_59(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ShowExplanationButton_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShowExplanationButton_59), (void*)value);
	}

	inline static int32_t get_offset_of_ExplanationText_60() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___ExplanationText_60)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ExplanationText_60() const { return ___ExplanationText_60; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ExplanationText_60() { return &___ExplanationText_60; }
	inline void set_ExplanationText_60(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ExplanationText_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExplanationText_60), (void*)value);
	}

	inline static int32_t get_offset_of_ReportText_61() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___ReportText_61)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ReportText_61() const { return ___ReportText_61; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ReportText_61() { return &___ReportText_61; }
	inline void set_ReportText_61(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ReportText_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReportText_61), (void*)value);
	}

	inline static int32_t get_offset_of_isloadingPannelActivated_62() { return static_cast<int32_t>(offsetof(AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7, ___isloadingPannelActivated_62)); }
	inline bool get_isloadingPannelActivated_62() const { return ___isloadingPannelActivated_62; }
	inline bool* get_address_of_isloadingPannelActivated_62() { return &___isloadingPannelActivated_62; }
	inline void set_isloadingPannelActivated_62(bool value)
	{
		___isloadingPannelActivated_62 = value;
	}
};


// JobDataBean
struct JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String JobDataBean::CompanyPhoto
	String_t* ___CompanyPhoto_4;
	// System.String JobDataBean::CompanyName
	String_t* ___CompanyName_5;
	// System.String JobDataBean::Post
	String_t* ___Post_6;
	// System.String JobDataBean::Package
	String_t* ___Package_7;
	// System.String JobDataBean::Experience
	String_t* ___Experience_8;
	// System.String JobDataBean::Bond
	String_t* ___Bond_9;
	// System.String JobDataBean::Location
	String_t* ___Location_10;
	// System.String JobDataBean::Role
	String_t* ___Role_11;
	// System.String JobDataBean::IndustyType
	String_t* ___IndustyType_12;
	// System.String JobDataBean::FunctionalArea
	String_t* ___FunctionalArea_13;
	// System.String JobDataBean::EmploymentType
	String_t* ___EmploymentType_14;
	// System.String JobDataBean::RoleCategory
	String_t* ___RoleCategory_15;
	// System.String JobDataBean::Education
	String_t* ___Education_16;
	// System.String JobDataBean::KeySkill
	String_t* ___KeySkill_17;
	// System.String JobDataBean::Responsibility
	String_t* ___Responsibility_18;
	// System.String JobDataBean::Knowledge
	String_t* ___Knowledge_19;
	// System.String JobDataBean::Benifit
	String_t* ___Benifit_20;
	// System.String JobDataBean::AboutCompany
	String_t* ___AboutCompany_21;
	// System.Int32 JobDataBean::TotalEmployee
	int32_t ___TotalEmployee_22;
	// System.String JobDataBean::LastApplyDate
	String_t* ___LastApplyDate_23;
	// System.String JobDataBean::ApplyLink
	String_t* ___ApplyLink_24;
	// System.String JobDataBean::Description
	String_t* ___Description_25;
	// System.String JobDataBean::Ago
	String_t* ___Ago_26;

public:
	inline static int32_t get_offset_of_CompanyPhoto_4() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___CompanyPhoto_4)); }
	inline String_t* get_CompanyPhoto_4() const { return ___CompanyPhoto_4; }
	inline String_t** get_address_of_CompanyPhoto_4() { return &___CompanyPhoto_4; }
	inline void set_CompanyPhoto_4(String_t* value)
	{
		___CompanyPhoto_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CompanyPhoto_4), (void*)value);
	}

	inline static int32_t get_offset_of_CompanyName_5() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___CompanyName_5)); }
	inline String_t* get_CompanyName_5() const { return ___CompanyName_5; }
	inline String_t** get_address_of_CompanyName_5() { return &___CompanyName_5; }
	inline void set_CompanyName_5(String_t* value)
	{
		___CompanyName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CompanyName_5), (void*)value);
	}

	inline static int32_t get_offset_of_Post_6() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Post_6)); }
	inline String_t* get_Post_6() const { return ___Post_6; }
	inline String_t** get_address_of_Post_6() { return &___Post_6; }
	inline void set_Post_6(String_t* value)
	{
		___Post_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Post_6), (void*)value);
	}

	inline static int32_t get_offset_of_Package_7() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Package_7)); }
	inline String_t* get_Package_7() const { return ___Package_7; }
	inline String_t** get_address_of_Package_7() { return &___Package_7; }
	inline void set_Package_7(String_t* value)
	{
		___Package_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Package_7), (void*)value);
	}

	inline static int32_t get_offset_of_Experience_8() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Experience_8)); }
	inline String_t* get_Experience_8() const { return ___Experience_8; }
	inline String_t** get_address_of_Experience_8() { return &___Experience_8; }
	inline void set_Experience_8(String_t* value)
	{
		___Experience_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Experience_8), (void*)value);
	}

	inline static int32_t get_offset_of_Bond_9() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Bond_9)); }
	inline String_t* get_Bond_9() const { return ___Bond_9; }
	inline String_t** get_address_of_Bond_9() { return &___Bond_9; }
	inline void set_Bond_9(String_t* value)
	{
		___Bond_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Bond_9), (void*)value);
	}

	inline static int32_t get_offset_of_Location_10() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Location_10)); }
	inline String_t* get_Location_10() const { return ___Location_10; }
	inline String_t** get_address_of_Location_10() { return &___Location_10; }
	inline void set_Location_10(String_t* value)
	{
		___Location_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Location_10), (void*)value);
	}

	inline static int32_t get_offset_of_Role_11() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Role_11)); }
	inline String_t* get_Role_11() const { return ___Role_11; }
	inline String_t** get_address_of_Role_11() { return &___Role_11; }
	inline void set_Role_11(String_t* value)
	{
		___Role_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Role_11), (void*)value);
	}

	inline static int32_t get_offset_of_IndustyType_12() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___IndustyType_12)); }
	inline String_t* get_IndustyType_12() const { return ___IndustyType_12; }
	inline String_t** get_address_of_IndustyType_12() { return &___IndustyType_12; }
	inline void set_IndustyType_12(String_t* value)
	{
		___IndustyType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IndustyType_12), (void*)value);
	}

	inline static int32_t get_offset_of_FunctionalArea_13() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___FunctionalArea_13)); }
	inline String_t* get_FunctionalArea_13() const { return ___FunctionalArea_13; }
	inline String_t** get_address_of_FunctionalArea_13() { return &___FunctionalArea_13; }
	inline void set_FunctionalArea_13(String_t* value)
	{
		___FunctionalArea_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FunctionalArea_13), (void*)value);
	}

	inline static int32_t get_offset_of_EmploymentType_14() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___EmploymentType_14)); }
	inline String_t* get_EmploymentType_14() const { return ___EmploymentType_14; }
	inline String_t** get_address_of_EmploymentType_14() { return &___EmploymentType_14; }
	inline void set_EmploymentType_14(String_t* value)
	{
		___EmploymentType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmploymentType_14), (void*)value);
	}

	inline static int32_t get_offset_of_RoleCategory_15() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___RoleCategory_15)); }
	inline String_t* get_RoleCategory_15() const { return ___RoleCategory_15; }
	inline String_t** get_address_of_RoleCategory_15() { return &___RoleCategory_15; }
	inline void set_RoleCategory_15(String_t* value)
	{
		___RoleCategory_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoleCategory_15), (void*)value);
	}

	inline static int32_t get_offset_of_Education_16() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Education_16)); }
	inline String_t* get_Education_16() const { return ___Education_16; }
	inline String_t** get_address_of_Education_16() { return &___Education_16; }
	inline void set_Education_16(String_t* value)
	{
		___Education_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Education_16), (void*)value);
	}

	inline static int32_t get_offset_of_KeySkill_17() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___KeySkill_17)); }
	inline String_t* get_KeySkill_17() const { return ___KeySkill_17; }
	inline String_t** get_address_of_KeySkill_17() { return &___KeySkill_17; }
	inline void set_KeySkill_17(String_t* value)
	{
		___KeySkill_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeySkill_17), (void*)value);
	}

	inline static int32_t get_offset_of_Responsibility_18() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Responsibility_18)); }
	inline String_t* get_Responsibility_18() const { return ___Responsibility_18; }
	inline String_t** get_address_of_Responsibility_18() { return &___Responsibility_18; }
	inline void set_Responsibility_18(String_t* value)
	{
		___Responsibility_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Responsibility_18), (void*)value);
	}

	inline static int32_t get_offset_of_Knowledge_19() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Knowledge_19)); }
	inline String_t* get_Knowledge_19() const { return ___Knowledge_19; }
	inline String_t** get_address_of_Knowledge_19() { return &___Knowledge_19; }
	inline void set_Knowledge_19(String_t* value)
	{
		___Knowledge_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Knowledge_19), (void*)value);
	}

	inline static int32_t get_offset_of_Benifit_20() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Benifit_20)); }
	inline String_t* get_Benifit_20() const { return ___Benifit_20; }
	inline String_t** get_address_of_Benifit_20() { return &___Benifit_20; }
	inline void set_Benifit_20(String_t* value)
	{
		___Benifit_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Benifit_20), (void*)value);
	}

	inline static int32_t get_offset_of_AboutCompany_21() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___AboutCompany_21)); }
	inline String_t* get_AboutCompany_21() const { return ___AboutCompany_21; }
	inline String_t** get_address_of_AboutCompany_21() { return &___AboutCompany_21; }
	inline void set_AboutCompany_21(String_t* value)
	{
		___AboutCompany_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AboutCompany_21), (void*)value);
	}

	inline static int32_t get_offset_of_TotalEmployee_22() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___TotalEmployee_22)); }
	inline int32_t get_TotalEmployee_22() const { return ___TotalEmployee_22; }
	inline int32_t* get_address_of_TotalEmployee_22() { return &___TotalEmployee_22; }
	inline void set_TotalEmployee_22(int32_t value)
	{
		___TotalEmployee_22 = value;
	}

	inline static int32_t get_offset_of_LastApplyDate_23() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___LastApplyDate_23)); }
	inline String_t* get_LastApplyDate_23() const { return ___LastApplyDate_23; }
	inline String_t** get_address_of_LastApplyDate_23() { return &___LastApplyDate_23; }
	inline void set_LastApplyDate_23(String_t* value)
	{
		___LastApplyDate_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LastApplyDate_23), (void*)value);
	}

	inline static int32_t get_offset_of_ApplyLink_24() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___ApplyLink_24)); }
	inline String_t* get_ApplyLink_24() const { return ___ApplyLink_24; }
	inline String_t** get_address_of_ApplyLink_24() { return &___ApplyLink_24; }
	inline void set_ApplyLink_24(String_t* value)
	{
		___ApplyLink_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplyLink_24), (void*)value);
	}

	inline static int32_t get_offset_of_Description_25() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Description_25)); }
	inline String_t* get_Description_25() const { return ___Description_25; }
	inline String_t** get_address_of_Description_25() { return &___Description_25; }
	inline void set_Description_25(String_t* value)
	{
		___Description_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_25), (void*)value);
	}

	inline static int32_t get_offset_of_Ago_26() { return static_cast<int32_t>(offsetof(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294, ___Ago_26)); }
	inline String_t* get_Ago_26() const { return ___Ago_26; }
	inline String_t** get_address_of_Ago_26() { return &___Ago_26; }
	inline void set_Ago_26(String_t* value)
	{
		___Ago_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ago_26), (void*)value);
	}
};


// JobManager
struct JobManager_t89BD3393575335C464C70D6B561A32404520E022  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<JobDataBean> JobManager::jobData
	List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C * ___jobData_4;
	// System.Collections.Generic.List`1<System.String> JobManager::allskills
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___allskills_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> JobManager::allskillsgo
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___allskillsgo_6;
	// System.Single JobManager::refreshFrequency
	float ___refreshFrequency_7;
	// UnityEngine.GameObject JobManager::LoadingScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LoadingScreen_8;
	// System.Boolean JobManager::isJobListPageOn
	bool ___isJobListPageOn_9;
	// System.Int32 JobManager::isJobListOpen
	int32_t ___isJobListOpen_10;
	// UnityEngine.UI.Image JobManager::AllJobsImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___AllJobsImage_11;
	// UnityEngine.UI.Image JobManager::RecommendedJobsImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___RecommendedJobsImage_12;
	// UnityEngine.Color JobManager::ButtonPressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ButtonPressedColor_13;
	// System.String JobManager::state
	String_t* ___state_14;
	// System.Boolean JobManager::isalreadyRecommended
	bool ___isalreadyRecommended_15;
	// UnityEngine.GameObject JobManager::JobListPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___JobListPrefab_16;
	// UnityEngine.Transform JobManager::JobToPlace
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___JobToPlace_17;
	// UnityEngine.GameObject JobManager::JobDetailPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___JobDetailPannel_18;
	// UnityEngine.GameObject JobManager::JobDetailThings
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___JobDetailThings_19;
	// UnityEngine.GameObject JobManager::OtherContent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___OtherContent_20;
	// UnityEngine.UI.Text JobManager::CompanyNameHead
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CompanyNameHead_21;
	// UnityEngine.UI.Button JobManager::ApplyLinkButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___ApplyLinkButton_22;
	// System.String JobManager::currentjobLink
	String_t* ___currentjobLink_23;
	// UnityEngine.GameObject JobManager::FilterPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___FilterPannel_24;
	// UnityEngine.GameObject JobManager::SkillBox
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SkillBox_25;
	// UnityEngine.Transform JobManager::SkillContentPlace
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___SkillContentPlace_26;
	// UnityEngine.Sprite JobManager::TickSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___TickSprite_27;
	// UnityEngine.Sprite JobManager::UntickSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___UntickSprite_28;
	// System.Collections.Generic.List`1<System.String> JobManager::savedSkills
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___savedSkills_29;
	// System.Collections.Generic.List`1<System.String> JobManager::selectedSkills
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___selectedSkills_30;
	// UnityEngine.UI.Dropdown JobManager::ExperienceDropDown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___ExperienceDropDown_31;
	// System.String JobManager::madedskills
	String_t* ___madedskills_32;
	// System.String JobManager::filteredexperience
	String_t* ___filteredexperience_33;
	// System.String JobManager::madedlocation
	String_t* ___madedlocation_34;
	// UnityEngine.GameObject JobManager::RecommendedFilterPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RecommendedFilterPannel_35;
	// System.Collections.Generic.List`1<System.String> JobManager::recommendedSkillsList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___recommendedSkillsList_36;
	// System.Collections.Generic.List`1<System.String> JobManager::recommendedLocationsList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___recommendedLocationsList_37;
	// System.Int32 JobManager::indexskill
	int32_t ___indexskill_38;
	// System.Int32 JobManager::indedxlocation
	int32_t ___indedxlocation_39;
	// UnityEngine.UI.InputField JobManager::newRecommendedSkillInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___newRecommendedSkillInputField_40;
	// UnityEngine.GameObject JobManager::RecommendedSkillBoxPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RecommendedSkillBoxPrefab_41;
	// UnityEngine.Transform JobManager::RecommendedSkillBoxContainer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___RecommendedSkillBoxContainer_42;
	// UnityEngine.UI.InputField JobManager::newRecommendedLocationInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___newRecommendedLocationInputField_43;
	// UnityEngine.GameObject JobManager::RecommendedLocationBoxPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RecommendedLocationBoxPrefab_44;
	// UnityEngine.Transform JobManager::RecommendedLocationlBoxContainer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___RecommendedLocationlBoxContainer_45;

public:
	inline static int32_t get_offset_of_jobData_4() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___jobData_4)); }
	inline List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C * get_jobData_4() const { return ___jobData_4; }
	inline List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C ** get_address_of_jobData_4() { return &___jobData_4; }
	inline void set_jobData_4(List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C * value)
	{
		___jobData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jobData_4), (void*)value);
	}

	inline static int32_t get_offset_of_allskills_5() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___allskills_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_allskills_5() const { return ___allskills_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_allskills_5() { return &___allskills_5; }
	inline void set_allskills_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___allskills_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allskills_5), (void*)value);
	}

	inline static int32_t get_offset_of_allskillsgo_6() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___allskillsgo_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_allskillsgo_6() const { return ___allskillsgo_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_allskillsgo_6() { return &___allskillsgo_6; }
	inline void set_allskillsgo_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___allskillsgo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allskillsgo_6), (void*)value);
	}

	inline static int32_t get_offset_of_refreshFrequency_7() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___refreshFrequency_7)); }
	inline float get_refreshFrequency_7() const { return ___refreshFrequency_7; }
	inline float* get_address_of_refreshFrequency_7() { return &___refreshFrequency_7; }
	inline void set_refreshFrequency_7(float value)
	{
		___refreshFrequency_7 = value;
	}

	inline static int32_t get_offset_of_LoadingScreen_8() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___LoadingScreen_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LoadingScreen_8() const { return ___LoadingScreen_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LoadingScreen_8() { return &___LoadingScreen_8; }
	inline void set_LoadingScreen_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LoadingScreen_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadingScreen_8), (void*)value);
	}

	inline static int32_t get_offset_of_isJobListPageOn_9() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___isJobListPageOn_9)); }
	inline bool get_isJobListPageOn_9() const { return ___isJobListPageOn_9; }
	inline bool* get_address_of_isJobListPageOn_9() { return &___isJobListPageOn_9; }
	inline void set_isJobListPageOn_9(bool value)
	{
		___isJobListPageOn_9 = value;
	}

	inline static int32_t get_offset_of_isJobListOpen_10() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___isJobListOpen_10)); }
	inline int32_t get_isJobListOpen_10() const { return ___isJobListOpen_10; }
	inline int32_t* get_address_of_isJobListOpen_10() { return &___isJobListOpen_10; }
	inline void set_isJobListOpen_10(int32_t value)
	{
		___isJobListOpen_10 = value;
	}

	inline static int32_t get_offset_of_AllJobsImage_11() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___AllJobsImage_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_AllJobsImage_11() const { return ___AllJobsImage_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_AllJobsImage_11() { return &___AllJobsImage_11; }
	inline void set_AllJobsImage_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___AllJobsImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllJobsImage_11), (void*)value);
	}

	inline static int32_t get_offset_of_RecommendedJobsImage_12() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___RecommendedJobsImage_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_RecommendedJobsImage_12() const { return ___RecommendedJobsImage_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_RecommendedJobsImage_12() { return &___RecommendedJobsImage_12; }
	inline void set_RecommendedJobsImage_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___RecommendedJobsImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecommendedJobsImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonPressedColor_13() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___ButtonPressedColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ButtonPressedColor_13() const { return ___ButtonPressedColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ButtonPressedColor_13() { return &___ButtonPressedColor_13; }
	inline void set_ButtonPressedColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ButtonPressedColor_13 = value;
	}

	inline static int32_t get_offset_of_state_14() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___state_14)); }
	inline String_t* get_state_14() const { return ___state_14; }
	inline String_t** get_address_of_state_14() { return &___state_14; }
	inline void set_state_14(String_t* value)
	{
		___state_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_14), (void*)value);
	}

	inline static int32_t get_offset_of_isalreadyRecommended_15() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___isalreadyRecommended_15)); }
	inline bool get_isalreadyRecommended_15() const { return ___isalreadyRecommended_15; }
	inline bool* get_address_of_isalreadyRecommended_15() { return &___isalreadyRecommended_15; }
	inline void set_isalreadyRecommended_15(bool value)
	{
		___isalreadyRecommended_15 = value;
	}

	inline static int32_t get_offset_of_JobListPrefab_16() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___JobListPrefab_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_JobListPrefab_16() const { return ___JobListPrefab_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_JobListPrefab_16() { return &___JobListPrefab_16; }
	inline void set_JobListPrefab_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___JobListPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JobListPrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_JobToPlace_17() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___JobToPlace_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_JobToPlace_17() const { return ___JobToPlace_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_JobToPlace_17() { return &___JobToPlace_17; }
	inline void set_JobToPlace_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___JobToPlace_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JobToPlace_17), (void*)value);
	}

	inline static int32_t get_offset_of_JobDetailPannel_18() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___JobDetailPannel_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_JobDetailPannel_18() const { return ___JobDetailPannel_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_JobDetailPannel_18() { return &___JobDetailPannel_18; }
	inline void set_JobDetailPannel_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___JobDetailPannel_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JobDetailPannel_18), (void*)value);
	}

	inline static int32_t get_offset_of_JobDetailThings_19() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___JobDetailThings_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_JobDetailThings_19() const { return ___JobDetailThings_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_JobDetailThings_19() { return &___JobDetailThings_19; }
	inline void set_JobDetailThings_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___JobDetailThings_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JobDetailThings_19), (void*)value);
	}

	inline static int32_t get_offset_of_OtherContent_20() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___OtherContent_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_OtherContent_20() const { return ___OtherContent_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_OtherContent_20() { return &___OtherContent_20; }
	inline void set_OtherContent_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___OtherContent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OtherContent_20), (void*)value);
	}

	inline static int32_t get_offset_of_CompanyNameHead_21() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___CompanyNameHead_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CompanyNameHead_21() const { return ___CompanyNameHead_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CompanyNameHead_21() { return &___CompanyNameHead_21; }
	inline void set_CompanyNameHead_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CompanyNameHead_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CompanyNameHead_21), (void*)value);
	}

	inline static int32_t get_offset_of_ApplyLinkButton_22() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___ApplyLinkButton_22)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_ApplyLinkButton_22() const { return ___ApplyLinkButton_22; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_ApplyLinkButton_22() { return &___ApplyLinkButton_22; }
	inline void set_ApplyLinkButton_22(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___ApplyLinkButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplyLinkButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_currentjobLink_23() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___currentjobLink_23)); }
	inline String_t* get_currentjobLink_23() const { return ___currentjobLink_23; }
	inline String_t** get_address_of_currentjobLink_23() { return &___currentjobLink_23; }
	inline void set_currentjobLink_23(String_t* value)
	{
		___currentjobLink_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentjobLink_23), (void*)value);
	}

	inline static int32_t get_offset_of_FilterPannel_24() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___FilterPannel_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_FilterPannel_24() const { return ___FilterPannel_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_FilterPannel_24() { return &___FilterPannel_24; }
	inline void set_FilterPannel_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___FilterPannel_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterPannel_24), (void*)value);
	}

	inline static int32_t get_offset_of_SkillBox_25() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___SkillBox_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SkillBox_25() const { return ___SkillBox_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SkillBox_25() { return &___SkillBox_25; }
	inline void set_SkillBox_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SkillBox_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkillBox_25), (void*)value);
	}

	inline static int32_t get_offset_of_SkillContentPlace_26() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___SkillContentPlace_26)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_SkillContentPlace_26() const { return ___SkillContentPlace_26; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_SkillContentPlace_26() { return &___SkillContentPlace_26; }
	inline void set_SkillContentPlace_26(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___SkillContentPlace_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkillContentPlace_26), (void*)value);
	}

	inline static int32_t get_offset_of_TickSprite_27() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___TickSprite_27)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_TickSprite_27() const { return ___TickSprite_27; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_TickSprite_27() { return &___TickSprite_27; }
	inline void set_TickSprite_27(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___TickSprite_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TickSprite_27), (void*)value);
	}

	inline static int32_t get_offset_of_UntickSprite_28() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___UntickSprite_28)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_UntickSprite_28() const { return ___UntickSprite_28; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_UntickSprite_28() { return &___UntickSprite_28; }
	inline void set_UntickSprite_28(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___UntickSprite_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UntickSprite_28), (void*)value);
	}

	inline static int32_t get_offset_of_savedSkills_29() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___savedSkills_29)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_savedSkills_29() const { return ___savedSkills_29; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_savedSkills_29() { return &___savedSkills_29; }
	inline void set_savedSkills_29(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___savedSkills_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedSkills_29), (void*)value);
	}

	inline static int32_t get_offset_of_selectedSkills_30() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___selectedSkills_30)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_selectedSkills_30() const { return ___selectedSkills_30; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_selectedSkills_30() { return &___selectedSkills_30; }
	inline void set_selectedSkills_30(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___selectedSkills_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedSkills_30), (void*)value);
	}

	inline static int32_t get_offset_of_ExperienceDropDown_31() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___ExperienceDropDown_31)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_ExperienceDropDown_31() const { return ___ExperienceDropDown_31; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_ExperienceDropDown_31() { return &___ExperienceDropDown_31; }
	inline void set_ExperienceDropDown_31(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___ExperienceDropDown_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExperienceDropDown_31), (void*)value);
	}

	inline static int32_t get_offset_of_madedskills_32() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___madedskills_32)); }
	inline String_t* get_madedskills_32() const { return ___madedskills_32; }
	inline String_t** get_address_of_madedskills_32() { return &___madedskills_32; }
	inline void set_madedskills_32(String_t* value)
	{
		___madedskills_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___madedskills_32), (void*)value);
	}

	inline static int32_t get_offset_of_filteredexperience_33() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___filteredexperience_33)); }
	inline String_t* get_filteredexperience_33() const { return ___filteredexperience_33; }
	inline String_t** get_address_of_filteredexperience_33() { return &___filteredexperience_33; }
	inline void set_filteredexperience_33(String_t* value)
	{
		___filteredexperience_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filteredexperience_33), (void*)value);
	}

	inline static int32_t get_offset_of_madedlocation_34() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___madedlocation_34)); }
	inline String_t* get_madedlocation_34() const { return ___madedlocation_34; }
	inline String_t** get_address_of_madedlocation_34() { return &___madedlocation_34; }
	inline void set_madedlocation_34(String_t* value)
	{
		___madedlocation_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___madedlocation_34), (void*)value);
	}

	inline static int32_t get_offset_of_RecommendedFilterPannel_35() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___RecommendedFilterPannel_35)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RecommendedFilterPannel_35() const { return ___RecommendedFilterPannel_35; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RecommendedFilterPannel_35() { return &___RecommendedFilterPannel_35; }
	inline void set_RecommendedFilterPannel_35(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RecommendedFilterPannel_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecommendedFilterPannel_35), (void*)value);
	}

	inline static int32_t get_offset_of_recommendedSkillsList_36() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___recommendedSkillsList_36)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_recommendedSkillsList_36() const { return ___recommendedSkillsList_36; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_recommendedSkillsList_36() { return &___recommendedSkillsList_36; }
	inline void set_recommendedSkillsList_36(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___recommendedSkillsList_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recommendedSkillsList_36), (void*)value);
	}

	inline static int32_t get_offset_of_recommendedLocationsList_37() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___recommendedLocationsList_37)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_recommendedLocationsList_37() const { return ___recommendedLocationsList_37; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_recommendedLocationsList_37() { return &___recommendedLocationsList_37; }
	inline void set_recommendedLocationsList_37(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___recommendedLocationsList_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recommendedLocationsList_37), (void*)value);
	}

	inline static int32_t get_offset_of_indexskill_38() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___indexskill_38)); }
	inline int32_t get_indexskill_38() const { return ___indexskill_38; }
	inline int32_t* get_address_of_indexskill_38() { return &___indexskill_38; }
	inline void set_indexskill_38(int32_t value)
	{
		___indexskill_38 = value;
	}

	inline static int32_t get_offset_of_indedxlocation_39() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___indedxlocation_39)); }
	inline int32_t get_indedxlocation_39() const { return ___indedxlocation_39; }
	inline int32_t* get_address_of_indedxlocation_39() { return &___indedxlocation_39; }
	inline void set_indedxlocation_39(int32_t value)
	{
		___indedxlocation_39 = value;
	}

	inline static int32_t get_offset_of_newRecommendedSkillInputField_40() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___newRecommendedSkillInputField_40)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_newRecommendedSkillInputField_40() const { return ___newRecommendedSkillInputField_40; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_newRecommendedSkillInputField_40() { return &___newRecommendedSkillInputField_40; }
	inline void set_newRecommendedSkillInputField_40(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___newRecommendedSkillInputField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newRecommendedSkillInputField_40), (void*)value);
	}

	inline static int32_t get_offset_of_RecommendedSkillBoxPrefab_41() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___RecommendedSkillBoxPrefab_41)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RecommendedSkillBoxPrefab_41() const { return ___RecommendedSkillBoxPrefab_41; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RecommendedSkillBoxPrefab_41() { return &___RecommendedSkillBoxPrefab_41; }
	inline void set_RecommendedSkillBoxPrefab_41(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RecommendedSkillBoxPrefab_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecommendedSkillBoxPrefab_41), (void*)value);
	}

	inline static int32_t get_offset_of_RecommendedSkillBoxContainer_42() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___RecommendedSkillBoxContainer_42)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_RecommendedSkillBoxContainer_42() const { return ___RecommendedSkillBoxContainer_42; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_RecommendedSkillBoxContainer_42() { return &___RecommendedSkillBoxContainer_42; }
	inline void set_RecommendedSkillBoxContainer_42(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___RecommendedSkillBoxContainer_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecommendedSkillBoxContainer_42), (void*)value);
	}

	inline static int32_t get_offset_of_newRecommendedLocationInputField_43() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___newRecommendedLocationInputField_43)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_newRecommendedLocationInputField_43() const { return ___newRecommendedLocationInputField_43; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_newRecommendedLocationInputField_43() { return &___newRecommendedLocationInputField_43; }
	inline void set_newRecommendedLocationInputField_43(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___newRecommendedLocationInputField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newRecommendedLocationInputField_43), (void*)value);
	}

	inline static int32_t get_offset_of_RecommendedLocationBoxPrefab_44() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___RecommendedLocationBoxPrefab_44)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RecommendedLocationBoxPrefab_44() const { return ___RecommendedLocationBoxPrefab_44; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RecommendedLocationBoxPrefab_44() { return &___RecommendedLocationBoxPrefab_44; }
	inline void set_RecommendedLocationBoxPrefab_44(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RecommendedLocationBoxPrefab_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecommendedLocationBoxPrefab_44), (void*)value);
	}

	inline static int32_t get_offset_of_RecommendedLocationlBoxContainer_45() { return static_cast<int32_t>(offsetof(JobManager_t89BD3393575335C464C70D6B561A32404520E022, ___RecommendedLocationlBoxContainer_45)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_RecommendedLocationlBoxContainer_45() const { return ___RecommendedLocationlBoxContainer_45; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_RecommendedLocationlBoxContainer_45() { return &___RecommendedLocationlBoxContainer_45; }
	inline void set_RecommendedLocationlBoxContainer_45(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___RecommendedLocationlBoxContainer_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecommendedLocationlBoxContainer_45), (void*)value);
	}
};


// LoadingScreenManager
struct LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean LoadingScreenManager::isEnable
	bool ___isEnable_4;
	// System.Int32 LoadingScreenManager::timer
	int32_t ___timer_5;
	// UnityEngine.GameObject LoadingScreenManager::RestartButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RestartButton_6;

public:
	inline static int32_t get_offset_of_isEnable_4() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7, ___isEnable_4)); }
	inline bool get_isEnable_4() const { return ___isEnable_4; }
	inline bool* get_address_of_isEnable_4() { return &___isEnable_4; }
	inline void set_isEnable_4(bool value)
	{
		___isEnable_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7, ___timer_5)); }
	inline int32_t get_timer_5() const { return ___timer_5; }
	inline int32_t* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(int32_t value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_RestartButton_6() { return static_cast<int32_t>(offsetof(LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7, ___RestartButton_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RestartButton_6() const { return ___RestartButton_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RestartButton_6() { return &___RestartButton_6; }
	inline void set_RestartButton_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RestartButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RestartButton_6), (void*)value);
	}
};


// LocalTestManager
struct LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject LocalTestManager::LoadingScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LoadingScreen_4;
	// System.String LocalTestManager::GetQuestion
	String_t* ___GetQuestion_5;
	// System.String[] LocalTestManager::revisionTestQuestions
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___revisionTestQuestions_6;
	// System.String[] LocalTestManager::courseData
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___courseData_7;
	// System.String[] LocalTestManager::subjectData
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___subjectData_8;
	// System.String[] LocalTestManager::companyData
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___companyData_9;
	// System.Int32[] LocalTestManager::courseDataSelected
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___courseDataSelected_10;
	// System.Int32[] LocalTestManager::subjectDataSelected
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___subjectDataSelected_11;
	// System.Int32[] LocalTestManager::companyDataSelected
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___companyDataSelected_12;
	// System.Boolean LocalTestManager::isNoTimer
	bool ___isNoTimer_13;
	// System.String LocalTestManager::timerInputed
	String_t* ___timerInputed_14;
	// System.Boolean LocalTestManager::canSkip
	bool ___canSkip_15;
	// System.String LocalTestManager::quesDuration
	String_t* ___quesDuration_16;
	// UnityEngine.GameObject LocalTestManager::LocalTestPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LocalTestPannel_17;
	// UnityEngine.Sprite LocalTestManager::UnTickSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___UnTickSprite_18;
	// UnityEngine.Sprite LocalTestManager::TickSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___TickSprite_19;
	// UnityEngine.Sprite LocalTestManager::WrongTickSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___WrongTickSprite_20;
	// UnityEngine.GameObject LocalTestManager::BoxFromScrollViewData
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BoxFromScrollViewData_21;
	// System.Int32 LocalTestManager::isPannelOpenIndex
	int32_t ___isPannelOpenIndex_22;
	// UnityEngine.GameObject LocalTestManager::JobCancelPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___JobCancelPannel_23;
	// UnityEngine.GameObject LocalTestManager::AllCourseTickButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AllCourseTickButton_24;
	// UnityEngine.GameObject LocalTestManager::CustomCourseTickButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CustomCourseTickButton_25;
	// UnityEngine.GameObject LocalTestManager::CustomCourseScrollView
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CustomCourseScrollView_26;
	// UnityEngine.UI.Text LocalTestManager::TotalCourseSelected
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TotalCourseSelected_27;
	// UnityEngine.Transform LocalTestManager::CourseCustomPlaceData
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___CourseCustomPlaceData_28;
	// System.Boolean LocalTestManager::allcourseSelected
	bool ___allcourseSelected_29;
	// UnityEngine.GameObject LocalTestManager::AllSubjectTickButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AllSubjectTickButton_30;
	// UnityEngine.GameObject LocalTestManager::CustomSubjectTickButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CustomSubjectTickButton_31;
	// UnityEngine.GameObject LocalTestManager::CustomSubjectScrollView
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CustomSubjectScrollView_32;
	// UnityEngine.UI.Text LocalTestManager::TotalSubjectSelected
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TotalSubjectSelected_33;
	// UnityEngine.Transform LocalTestManager::SubjectCustomPlaceData
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___SubjectCustomPlaceData_34;
	// UnityEngine.GameObject LocalTestManager::SubjectSaveButtonGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SubjectSaveButtonGO_35;
	// System.Boolean LocalTestManager::allsubjectSelected
	bool ___allsubjectSelected_36;
	// UnityEngine.GameObject LocalTestManager::AllCompanyTickButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AllCompanyTickButton_37;
	// UnityEngine.GameObject LocalTestManager::CustomCompanyTickButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CustomCompanyTickButton_38;
	// UnityEngine.GameObject LocalTestManager::CustomCompanyScrollView
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CustomCompanyScrollView_39;
	// UnityEngine.UI.Text LocalTestManager::TotalCompanySelected
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TotalCompanySelected_40;
	// UnityEngine.Transform LocalTestManager::CompanyCustomPlaceData
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___CompanyCustomPlaceData_41;
	// UnityEngine.GameObject LocalTestManager::CompanySaveButtonGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CompanySaveButtonGO_42;
	// System.Boolean LocalTestManager::allcompanySelected
	bool ___allcompanySelected_43;
	// UnityEngine.GameObject LocalTestManager::NoTimerButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NoTimerButton_44;
	// UnityEngine.UI.InputField LocalTestManager::TimerInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___TimerInput_45;
	// UnityEngine.GameObject LocalTestManager::NoCanSkipButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NoCanSkipButton_46;
	// UnityEngine.GameObject LocalTestManager::YesCanSkipButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___YesCanSkipButton_47;
	// UnityEngine.UI.Dropdown LocalTestManager::GenerateQuestionDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___GenerateQuestionDropdown_48;
	// UnityEngine.UI.Text LocalTestManager::TotalQues
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TotalQues_49;
	// UnityEngine.UI.Text LocalTestManager::TotalDuration
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TotalDuration_50;
	// UnityEngine.UI.Text LocalTestManager::TotalTimeDuration
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TotalTimeDuration_51;
	// UnityEngine.GameObject LocalTestManager::StartTestButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___StartTestButton_52;
	// UnityEngine.UI.InputField LocalTestManager::TotalQuestionInputfield
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___TotalQuestionInputfield_53;
	// System.Int32 LocalTestManager::totalQuestionFilter
	int32_t ___totalQuestionFilter_54;
	// System.String LocalTestManager::encodeSubject
	String_t* ___encodeSubject_55;
	// System.String LocalTestManager::encodeCompany
	String_t* ___encodeCompany_56;

public:
	inline static int32_t get_offset_of_LoadingScreen_4() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___LoadingScreen_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LoadingScreen_4() const { return ___LoadingScreen_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LoadingScreen_4() { return &___LoadingScreen_4; }
	inline void set_LoadingScreen_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LoadingScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadingScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_GetQuestion_5() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___GetQuestion_5)); }
	inline String_t* get_GetQuestion_5() const { return ___GetQuestion_5; }
	inline String_t** get_address_of_GetQuestion_5() { return &___GetQuestion_5; }
	inline void set_GetQuestion_5(String_t* value)
	{
		___GetQuestion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetQuestion_5), (void*)value);
	}

	inline static int32_t get_offset_of_revisionTestQuestions_6() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___revisionTestQuestions_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_revisionTestQuestions_6() const { return ___revisionTestQuestions_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_revisionTestQuestions_6() { return &___revisionTestQuestions_6; }
	inline void set_revisionTestQuestions_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___revisionTestQuestions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___revisionTestQuestions_6), (void*)value);
	}

	inline static int32_t get_offset_of_courseData_7() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___courseData_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_courseData_7() const { return ___courseData_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_courseData_7() { return &___courseData_7; }
	inline void set_courseData_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___courseData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___courseData_7), (void*)value);
	}

	inline static int32_t get_offset_of_subjectData_8() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___subjectData_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_subjectData_8() const { return ___subjectData_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_subjectData_8() { return &___subjectData_8; }
	inline void set_subjectData_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___subjectData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subjectData_8), (void*)value);
	}

	inline static int32_t get_offset_of_companyData_9() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___companyData_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_companyData_9() const { return ___companyData_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_companyData_9() { return &___companyData_9; }
	inline void set_companyData_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___companyData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___companyData_9), (void*)value);
	}

	inline static int32_t get_offset_of_courseDataSelected_10() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___courseDataSelected_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_courseDataSelected_10() const { return ___courseDataSelected_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_courseDataSelected_10() { return &___courseDataSelected_10; }
	inline void set_courseDataSelected_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___courseDataSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___courseDataSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_subjectDataSelected_11() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___subjectDataSelected_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_subjectDataSelected_11() const { return ___subjectDataSelected_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_subjectDataSelected_11() { return &___subjectDataSelected_11; }
	inline void set_subjectDataSelected_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___subjectDataSelected_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subjectDataSelected_11), (void*)value);
	}

	inline static int32_t get_offset_of_companyDataSelected_12() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___companyDataSelected_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_companyDataSelected_12() const { return ___companyDataSelected_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_companyDataSelected_12() { return &___companyDataSelected_12; }
	inline void set_companyDataSelected_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___companyDataSelected_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___companyDataSelected_12), (void*)value);
	}

	inline static int32_t get_offset_of_isNoTimer_13() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___isNoTimer_13)); }
	inline bool get_isNoTimer_13() const { return ___isNoTimer_13; }
	inline bool* get_address_of_isNoTimer_13() { return &___isNoTimer_13; }
	inline void set_isNoTimer_13(bool value)
	{
		___isNoTimer_13 = value;
	}

	inline static int32_t get_offset_of_timerInputed_14() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___timerInputed_14)); }
	inline String_t* get_timerInputed_14() const { return ___timerInputed_14; }
	inline String_t** get_address_of_timerInputed_14() { return &___timerInputed_14; }
	inline void set_timerInputed_14(String_t* value)
	{
		___timerInputed_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerInputed_14), (void*)value);
	}

	inline static int32_t get_offset_of_canSkip_15() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___canSkip_15)); }
	inline bool get_canSkip_15() const { return ___canSkip_15; }
	inline bool* get_address_of_canSkip_15() { return &___canSkip_15; }
	inline void set_canSkip_15(bool value)
	{
		___canSkip_15 = value;
	}

	inline static int32_t get_offset_of_quesDuration_16() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___quesDuration_16)); }
	inline String_t* get_quesDuration_16() const { return ___quesDuration_16; }
	inline String_t** get_address_of_quesDuration_16() { return &___quesDuration_16; }
	inline void set_quesDuration_16(String_t* value)
	{
		___quesDuration_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quesDuration_16), (void*)value);
	}

	inline static int32_t get_offset_of_LocalTestPannel_17() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___LocalTestPannel_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LocalTestPannel_17() const { return ___LocalTestPannel_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LocalTestPannel_17() { return &___LocalTestPannel_17; }
	inline void set_LocalTestPannel_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LocalTestPannel_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalTestPannel_17), (void*)value);
	}

	inline static int32_t get_offset_of_UnTickSprite_18() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___UnTickSprite_18)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_UnTickSprite_18() const { return ___UnTickSprite_18; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_UnTickSprite_18() { return &___UnTickSprite_18; }
	inline void set_UnTickSprite_18(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___UnTickSprite_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnTickSprite_18), (void*)value);
	}

	inline static int32_t get_offset_of_TickSprite_19() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TickSprite_19)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_TickSprite_19() const { return ___TickSprite_19; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_TickSprite_19() { return &___TickSprite_19; }
	inline void set_TickSprite_19(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___TickSprite_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TickSprite_19), (void*)value);
	}

	inline static int32_t get_offset_of_WrongTickSprite_20() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___WrongTickSprite_20)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_WrongTickSprite_20() const { return ___WrongTickSprite_20; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_WrongTickSprite_20() { return &___WrongTickSprite_20; }
	inline void set_WrongTickSprite_20(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___WrongTickSprite_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WrongTickSprite_20), (void*)value);
	}

	inline static int32_t get_offset_of_BoxFromScrollViewData_21() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___BoxFromScrollViewData_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BoxFromScrollViewData_21() const { return ___BoxFromScrollViewData_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BoxFromScrollViewData_21() { return &___BoxFromScrollViewData_21; }
	inline void set_BoxFromScrollViewData_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BoxFromScrollViewData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxFromScrollViewData_21), (void*)value);
	}

	inline static int32_t get_offset_of_isPannelOpenIndex_22() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___isPannelOpenIndex_22)); }
	inline int32_t get_isPannelOpenIndex_22() const { return ___isPannelOpenIndex_22; }
	inline int32_t* get_address_of_isPannelOpenIndex_22() { return &___isPannelOpenIndex_22; }
	inline void set_isPannelOpenIndex_22(int32_t value)
	{
		___isPannelOpenIndex_22 = value;
	}

	inline static int32_t get_offset_of_JobCancelPannel_23() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___JobCancelPannel_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_JobCancelPannel_23() const { return ___JobCancelPannel_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_JobCancelPannel_23() { return &___JobCancelPannel_23; }
	inline void set_JobCancelPannel_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___JobCancelPannel_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JobCancelPannel_23), (void*)value);
	}

	inline static int32_t get_offset_of_AllCourseTickButton_24() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___AllCourseTickButton_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AllCourseTickButton_24() const { return ___AllCourseTickButton_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AllCourseTickButton_24() { return &___AllCourseTickButton_24; }
	inline void set_AllCourseTickButton_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AllCourseTickButton_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllCourseTickButton_24), (void*)value);
	}

	inline static int32_t get_offset_of_CustomCourseTickButton_25() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CustomCourseTickButton_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CustomCourseTickButton_25() const { return ___CustomCourseTickButton_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CustomCourseTickButton_25() { return &___CustomCourseTickButton_25; }
	inline void set_CustomCourseTickButton_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CustomCourseTickButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomCourseTickButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_CustomCourseScrollView_26() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CustomCourseScrollView_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CustomCourseScrollView_26() const { return ___CustomCourseScrollView_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CustomCourseScrollView_26() { return &___CustomCourseScrollView_26; }
	inline void set_CustomCourseScrollView_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CustomCourseScrollView_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomCourseScrollView_26), (void*)value);
	}

	inline static int32_t get_offset_of_TotalCourseSelected_27() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TotalCourseSelected_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TotalCourseSelected_27() const { return ___TotalCourseSelected_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TotalCourseSelected_27() { return &___TotalCourseSelected_27; }
	inline void set_TotalCourseSelected_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TotalCourseSelected_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalCourseSelected_27), (void*)value);
	}

	inline static int32_t get_offset_of_CourseCustomPlaceData_28() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CourseCustomPlaceData_28)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_CourseCustomPlaceData_28() const { return ___CourseCustomPlaceData_28; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_CourseCustomPlaceData_28() { return &___CourseCustomPlaceData_28; }
	inline void set_CourseCustomPlaceData_28(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___CourseCustomPlaceData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CourseCustomPlaceData_28), (void*)value);
	}

	inline static int32_t get_offset_of_allcourseSelected_29() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___allcourseSelected_29)); }
	inline bool get_allcourseSelected_29() const { return ___allcourseSelected_29; }
	inline bool* get_address_of_allcourseSelected_29() { return &___allcourseSelected_29; }
	inline void set_allcourseSelected_29(bool value)
	{
		___allcourseSelected_29 = value;
	}

	inline static int32_t get_offset_of_AllSubjectTickButton_30() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___AllSubjectTickButton_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AllSubjectTickButton_30() const { return ___AllSubjectTickButton_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AllSubjectTickButton_30() { return &___AllSubjectTickButton_30; }
	inline void set_AllSubjectTickButton_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AllSubjectTickButton_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllSubjectTickButton_30), (void*)value);
	}

	inline static int32_t get_offset_of_CustomSubjectTickButton_31() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CustomSubjectTickButton_31)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CustomSubjectTickButton_31() const { return ___CustomSubjectTickButton_31; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CustomSubjectTickButton_31() { return &___CustomSubjectTickButton_31; }
	inline void set_CustomSubjectTickButton_31(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CustomSubjectTickButton_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomSubjectTickButton_31), (void*)value);
	}

	inline static int32_t get_offset_of_CustomSubjectScrollView_32() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CustomSubjectScrollView_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CustomSubjectScrollView_32() const { return ___CustomSubjectScrollView_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CustomSubjectScrollView_32() { return &___CustomSubjectScrollView_32; }
	inline void set_CustomSubjectScrollView_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CustomSubjectScrollView_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomSubjectScrollView_32), (void*)value);
	}

	inline static int32_t get_offset_of_TotalSubjectSelected_33() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TotalSubjectSelected_33)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TotalSubjectSelected_33() const { return ___TotalSubjectSelected_33; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TotalSubjectSelected_33() { return &___TotalSubjectSelected_33; }
	inline void set_TotalSubjectSelected_33(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TotalSubjectSelected_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalSubjectSelected_33), (void*)value);
	}

	inline static int32_t get_offset_of_SubjectCustomPlaceData_34() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___SubjectCustomPlaceData_34)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_SubjectCustomPlaceData_34() const { return ___SubjectCustomPlaceData_34; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_SubjectCustomPlaceData_34() { return &___SubjectCustomPlaceData_34; }
	inline void set_SubjectCustomPlaceData_34(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___SubjectCustomPlaceData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubjectCustomPlaceData_34), (void*)value);
	}

	inline static int32_t get_offset_of_SubjectSaveButtonGO_35() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___SubjectSaveButtonGO_35)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SubjectSaveButtonGO_35() const { return ___SubjectSaveButtonGO_35; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SubjectSaveButtonGO_35() { return &___SubjectSaveButtonGO_35; }
	inline void set_SubjectSaveButtonGO_35(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SubjectSaveButtonGO_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubjectSaveButtonGO_35), (void*)value);
	}

	inline static int32_t get_offset_of_allsubjectSelected_36() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___allsubjectSelected_36)); }
	inline bool get_allsubjectSelected_36() const { return ___allsubjectSelected_36; }
	inline bool* get_address_of_allsubjectSelected_36() { return &___allsubjectSelected_36; }
	inline void set_allsubjectSelected_36(bool value)
	{
		___allsubjectSelected_36 = value;
	}

	inline static int32_t get_offset_of_AllCompanyTickButton_37() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___AllCompanyTickButton_37)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AllCompanyTickButton_37() const { return ___AllCompanyTickButton_37; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AllCompanyTickButton_37() { return &___AllCompanyTickButton_37; }
	inline void set_AllCompanyTickButton_37(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AllCompanyTickButton_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllCompanyTickButton_37), (void*)value);
	}

	inline static int32_t get_offset_of_CustomCompanyTickButton_38() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CustomCompanyTickButton_38)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CustomCompanyTickButton_38() const { return ___CustomCompanyTickButton_38; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CustomCompanyTickButton_38() { return &___CustomCompanyTickButton_38; }
	inline void set_CustomCompanyTickButton_38(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CustomCompanyTickButton_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomCompanyTickButton_38), (void*)value);
	}

	inline static int32_t get_offset_of_CustomCompanyScrollView_39() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CustomCompanyScrollView_39)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CustomCompanyScrollView_39() const { return ___CustomCompanyScrollView_39; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CustomCompanyScrollView_39() { return &___CustomCompanyScrollView_39; }
	inline void set_CustomCompanyScrollView_39(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CustomCompanyScrollView_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomCompanyScrollView_39), (void*)value);
	}

	inline static int32_t get_offset_of_TotalCompanySelected_40() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TotalCompanySelected_40)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TotalCompanySelected_40() const { return ___TotalCompanySelected_40; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TotalCompanySelected_40() { return &___TotalCompanySelected_40; }
	inline void set_TotalCompanySelected_40(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TotalCompanySelected_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalCompanySelected_40), (void*)value);
	}

	inline static int32_t get_offset_of_CompanyCustomPlaceData_41() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CompanyCustomPlaceData_41)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_CompanyCustomPlaceData_41() const { return ___CompanyCustomPlaceData_41; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_CompanyCustomPlaceData_41() { return &___CompanyCustomPlaceData_41; }
	inline void set_CompanyCustomPlaceData_41(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___CompanyCustomPlaceData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CompanyCustomPlaceData_41), (void*)value);
	}

	inline static int32_t get_offset_of_CompanySaveButtonGO_42() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___CompanySaveButtonGO_42)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CompanySaveButtonGO_42() const { return ___CompanySaveButtonGO_42; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CompanySaveButtonGO_42() { return &___CompanySaveButtonGO_42; }
	inline void set_CompanySaveButtonGO_42(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CompanySaveButtonGO_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CompanySaveButtonGO_42), (void*)value);
	}

	inline static int32_t get_offset_of_allcompanySelected_43() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___allcompanySelected_43)); }
	inline bool get_allcompanySelected_43() const { return ___allcompanySelected_43; }
	inline bool* get_address_of_allcompanySelected_43() { return &___allcompanySelected_43; }
	inline void set_allcompanySelected_43(bool value)
	{
		___allcompanySelected_43 = value;
	}

	inline static int32_t get_offset_of_NoTimerButton_44() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___NoTimerButton_44)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NoTimerButton_44() const { return ___NoTimerButton_44; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NoTimerButton_44() { return &___NoTimerButton_44; }
	inline void set_NoTimerButton_44(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NoTimerButton_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NoTimerButton_44), (void*)value);
	}

	inline static int32_t get_offset_of_TimerInput_45() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TimerInput_45)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_TimerInput_45() const { return ___TimerInput_45; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_TimerInput_45() { return &___TimerInput_45; }
	inline void set_TimerInput_45(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___TimerInput_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimerInput_45), (void*)value);
	}

	inline static int32_t get_offset_of_NoCanSkipButton_46() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___NoCanSkipButton_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NoCanSkipButton_46() const { return ___NoCanSkipButton_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NoCanSkipButton_46() { return &___NoCanSkipButton_46; }
	inline void set_NoCanSkipButton_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NoCanSkipButton_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NoCanSkipButton_46), (void*)value);
	}

	inline static int32_t get_offset_of_YesCanSkipButton_47() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___YesCanSkipButton_47)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_YesCanSkipButton_47() const { return ___YesCanSkipButton_47; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_YesCanSkipButton_47() { return &___YesCanSkipButton_47; }
	inline void set_YesCanSkipButton_47(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___YesCanSkipButton_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YesCanSkipButton_47), (void*)value);
	}

	inline static int32_t get_offset_of_GenerateQuestionDropdown_48() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___GenerateQuestionDropdown_48)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_GenerateQuestionDropdown_48() const { return ___GenerateQuestionDropdown_48; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_GenerateQuestionDropdown_48() { return &___GenerateQuestionDropdown_48; }
	inline void set_GenerateQuestionDropdown_48(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___GenerateQuestionDropdown_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenerateQuestionDropdown_48), (void*)value);
	}

	inline static int32_t get_offset_of_TotalQues_49() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TotalQues_49)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TotalQues_49() const { return ___TotalQues_49; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TotalQues_49() { return &___TotalQues_49; }
	inline void set_TotalQues_49(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TotalQues_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalQues_49), (void*)value);
	}

	inline static int32_t get_offset_of_TotalDuration_50() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TotalDuration_50)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TotalDuration_50() const { return ___TotalDuration_50; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TotalDuration_50() { return &___TotalDuration_50; }
	inline void set_TotalDuration_50(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TotalDuration_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalDuration_50), (void*)value);
	}

	inline static int32_t get_offset_of_TotalTimeDuration_51() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TotalTimeDuration_51)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TotalTimeDuration_51() const { return ___TotalTimeDuration_51; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TotalTimeDuration_51() { return &___TotalTimeDuration_51; }
	inline void set_TotalTimeDuration_51(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TotalTimeDuration_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalTimeDuration_51), (void*)value);
	}

	inline static int32_t get_offset_of_StartTestButton_52() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___StartTestButton_52)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_StartTestButton_52() const { return ___StartTestButton_52; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_StartTestButton_52() { return &___StartTestButton_52; }
	inline void set_StartTestButton_52(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___StartTestButton_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartTestButton_52), (void*)value);
	}

	inline static int32_t get_offset_of_TotalQuestionInputfield_53() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___TotalQuestionInputfield_53)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_TotalQuestionInputfield_53() const { return ___TotalQuestionInputfield_53; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_TotalQuestionInputfield_53() { return &___TotalQuestionInputfield_53; }
	inline void set_TotalQuestionInputfield_53(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___TotalQuestionInputfield_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalQuestionInputfield_53), (void*)value);
	}

	inline static int32_t get_offset_of_totalQuestionFilter_54() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___totalQuestionFilter_54)); }
	inline int32_t get_totalQuestionFilter_54() const { return ___totalQuestionFilter_54; }
	inline int32_t* get_address_of_totalQuestionFilter_54() { return &___totalQuestionFilter_54; }
	inline void set_totalQuestionFilter_54(int32_t value)
	{
		___totalQuestionFilter_54 = value;
	}

	inline static int32_t get_offset_of_encodeSubject_55() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___encodeSubject_55)); }
	inline String_t* get_encodeSubject_55() const { return ___encodeSubject_55; }
	inline String_t** get_address_of_encodeSubject_55() { return &___encodeSubject_55; }
	inline void set_encodeSubject_55(String_t* value)
	{
		___encodeSubject_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodeSubject_55), (void*)value);
	}

	inline static int32_t get_offset_of_encodeCompany_56() { return static_cast<int32_t>(offsetof(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA, ___encodeCompany_56)); }
	inline String_t* get_encodeCompany_56() const { return ___encodeCompany_56; }
	inline String_t** get_address_of_encodeCompany_56() { return &___encodeCompany_56; }
	inline void set_encodeCompany_56(String_t* value)
	{
		___encodeCompany_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodeCompany_56), (void*)value);
	}
};


// MainManager
struct MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MainManager::RevisionTestDashbordPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RevisionTestDashbordPannel_4;
	// UnityEngine.GameObject MainManager::TestPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TestPannel_5;
	// UnityEngine.GameObject MainManager::LogoPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LogoPannel_6;
	// UnityEngine.GameObject MainManager::PracticePannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PracticePannel_7;
	// UnityEngine.GameObject MainManager::TestReportPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TestReportPannel_8;
	// UnityEngine.GameObject MainManager::JobPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___JobPannel_9;
	// System.Int32 MainManager::defaultValue
	int32_t ___defaultValue_10;
	// System.Int32 MainManager::tempdefaultValue
	int32_t ___tempdefaultValue_11;

public:
	inline static int32_t get_offset_of_RevisionTestDashbordPannel_4() { return static_cast<int32_t>(offsetof(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F, ___RevisionTestDashbordPannel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RevisionTestDashbordPannel_4() const { return ___RevisionTestDashbordPannel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RevisionTestDashbordPannel_4() { return &___RevisionTestDashbordPannel_4; }
	inline void set_RevisionTestDashbordPannel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RevisionTestDashbordPannel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RevisionTestDashbordPannel_4), (void*)value);
	}

	inline static int32_t get_offset_of_TestPannel_5() { return static_cast<int32_t>(offsetof(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F, ___TestPannel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TestPannel_5() const { return ___TestPannel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TestPannel_5() { return &___TestPannel_5; }
	inline void set_TestPannel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TestPannel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestPannel_5), (void*)value);
	}

	inline static int32_t get_offset_of_LogoPannel_6() { return static_cast<int32_t>(offsetof(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F, ___LogoPannel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LogoPannel_6() const { return ___LogoPannel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LogoPannel_6() { return &___LogoPannel_6; }
	inline void set_LogoPannel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LogoPannel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogoPannel_6), (void*)value);
	}

	inline static int32_t get_offset_of_PracticePannel_7() { return static_cast<int32_t>(offsetof(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F, ___PracticePannel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PracticePannel_7() const { return ___PracticePannel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PracticePannel_7() { return &___PracticePannel_7; }
	inline void set_PracticePannel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PracticePannel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PracticePannel_7), (void*)value);
	}

	inline static int32_t get_offset_of_TestReportPannel_8() { return static_cast<int32_t>(offsetof(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F, ___TestReportPannel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TestReportPannel_8() const { return ___TestReportPannel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TestReportPannel_8() { return &___TestReportPannel_8; }
	inline void set_TestReportPannel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TestReportPannel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestReportPannel_8), (void*)value);
	}

	inline static int32_t get_offset_of_JobPannel_9() { return static_cast<int32_t>(offsetof(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F, ___JobPannel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_JobPannel_9() const { return ___JobPannel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_JobPannel_9() { return &___JobPannel_9; }
	inline void set_JobPannel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___JobPannel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JobPannel_9), (void*)value);
	}

	inline static int32_t get_offset_of_defaultValue_10() { return static_cast<int32_t>(offsetof(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F, ___defaultValue_10)); }
	inline int32_t get_defaultValue_10() const { return ___defaultValue_10; }
	inline int32_t* get_address_of_defaultValue_10() { return &___defaultValue_10; }
	inline void set_defaultValue_10(int32_t value)
	{
		___defaultValue_10 = value;
	}

	inline static int32_t get_offset_of_tempdefaultValue_11() { return static_cast<int32_t>(offsetof(MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F, ___tempdefaultValue_11)); }
	inline int32_t get_tempdefaultValue_11() const { return ___tempdefaultValue_11; }
	inline int32_t* get_address_of_tempdefaultValue_11() { return &___tempdefaultValue_11; }
	inline void set_tempdefaultValue_11(int32_t value)
	{
		___tempdefaultValue_11 = value;
	}
};


// TestContoller
struct TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// LocalTestManager TestContoller::localTestManager
	LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * ___localTestManager_4;
	// System.Collections.Generic.List`1<QuesDataBean> TestContoller::quesData
	List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8 * ___quesData_5;
	// System.String[] TestContoller::items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___items_6;
	// System.Int32 TestContoller::quesid
	int32_t ___quesid_7;
	// System.Int32 TestContoller::score
	int32_t ___score_8;
	// System.Int32 TestContoller::correctAns
	int32_t ___correctAns_9;
	// System.Int32 TestContoller::currentQues
	int32_t ___currentQues_10;
	// System.Int32 TestContoller::currentCheckBox
	int32_t ___currentCheckBox_11;
	// UnityEngine.GameObject TestContoller::TestPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TestPannel_12;
	// UnityEngine.GameObject TestContoller::TopBar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TopBar_13;
	// System.Boolean TestContoller::canSkip
	bool ___canSkip_14;
	// System.Boolean TestContoller::isNoTimer
	bool ___isNoTimer_15;
	// System.String TestContoller::timerInputed
	String_t* ___timerInputed_16;
	// System.Int32 TestContoller::timetakenCounter
	int32_t ___timetakenCounter_17;
	// System.Boolean TestContoller::istestOn
	bool ___istestOn_18;
	// UnityEngine.UI.Text TestContoller::TimerCountdownText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TimerCountdownText_19;
	// UnityEngine.GameObject TestContoller::TimerImageGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TimerImageGO_20;
	// System.Int32 TestContoller::testTime
	int32_t ___testTime_21;
	// System.Boolean TestContoller::colorChanger
	bool ___colorChanger_22;
	// UnityEngine.UI.Text TestContoller::QuesNumberText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___QuesNumberText_23;
	// UnityEngine.UI.Text TestContoller::QuesTextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___QuesTextCenter_24;
	// UnityEngine.UI.Text TestContoller::Option1TextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Option1TextCenter_25;
	// UnityEngine.UI.Text TestContoller::Option2TextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Option2TextCenter_26;
	// UnityEngine.UI.Text TestContoller::Option3TextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Option3TextCenter_27;
	// UnityEngine.UI.Text TestContoller::Option4TextCenter
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Option4TextCenter_28;
	// UnityEngine.Sprite TestContoller::TickCheckBox
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___TickCheckBox_29;
	// UnityEngine.Sprite TestContoller::UnTickCheckBox
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___UnTickCheckBox_30;
	// UnityEngine.Sprite TestContoller::WrongTickCheckBox
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___WrongTickCheckBox_31;
	// UnityEngine.GameObject TestContoller::CheckBox1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CheckBox1_32;
	// UnityEngine.GameObject TestContoller::CheckBox2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CheckBox2_33;
	// UnityEngine.GameObject TestContoller::CheckBox3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CheckBox3_34;
	// UnityEngine.GameObject TestContoller::CheckBox4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CheckBox4_35;
	// UnityEngine.GameObject TestContoller::TestReportPannel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TestReportPannel_36;
	// UnityEngine.UI.Text TestContoller::TotalQuesText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TotalQuesText_37;
	// UnityEngine.UI.Text TestContoller::CorrectAnswerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CorrectAnswerText_38;
	// UnityEngine.UI.Text TestContoller::WrongAnswerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___WrongAnswerText_39;
	// UnityEngine.UI.Text TestContoller::MarksObtainedText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___MarksObtainedText_40;
	// UnityEngine.UI.Text TestContoller::PercentageText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___PercentageText_41;
	// UnityEngine.UI.Text TestContoller::TotalTimeTakenText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TotalTimeTakenText_42;
	// UnityEngine.UI.Text TestContoller::ResultText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ResultText_43;

public:
	inline static int32_t get_offset_of_localTestManager_4() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___localTestManager_4)); }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * get_localTestManager_4() const { return ___localTestManager_4; }
	inline LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA ** get_address_of_localTestManager_4() { return &___localTestManager_4; }
	inline void set_localTestManager_4(LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * value)
	{
		___localTestManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localTestManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_quesData_5() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___quesData_5)); }
	inline List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8 * get_quesData_5() const { return ___quesData_5; }
	inline List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8 ** get_address_of_quesData_5() { return &___quesData_5; }
	inline void set_quesData_5(List_1_tC348015B7E0FCA83663D6707712074147D0A3AD8 * value)
	{
		___quesData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quesData_5), (void*)value);
	}

	inline static int32_t get_offset_of_items_6() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___items_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_items_6() const { return ___items_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_items_6() { return &___items_6; }
	inline void set_items_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___items_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_6), (void*)value);
	}

	inline static int32_t get_offset_of_quesid_7() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___quesid_7)); }
	inline int32_t get_quesid_7() const { return ___quesid_7; }
	inline int32_t* get_address_of_quesid_7() { return &___quesid_7; }
	inline void set_quesid_7(int32_t value)
	{
		___quesid_7 = value;
	}

	inline static int32_t get_offset_of_score_8() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___score_8)); }
	inline int32_t get_score_8() const { return ___score_8; }
	inline int32_t* get_address_of_score_8() { return &___score_8; }
	inline void set_score_8(int32_t value)
	{
		___score_8 = value;
	}

	inline static int32_t get_offset_of_correctAns_9() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___correctAns_9)); }
	inline int32_t get_correctAns_9() const { return ___correctAns_9; }
	inline int32_t* get_address_of_correctAns_9() { return &___correctAns_9; }
	inline void set_correctAns_9(int32_t value)
	{
		___correctAns_9 = value;
	}

	inline static int32_t get_offset_of_currentQues_10() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___currentQues_10)); }
	inline int32_t get_currentQues_10() const { return ___currentQues_10; }
	inline int32_t* get_address_of_currentQues_10() { return &___currentQues_10; }
	inline void set_currentQues_10(int32_t value)
	{
		___currentQues_10 = value;
	}

	inline static int32_t get_offset_of_currentCheckBox_11() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___currentCheckBox_11)); }
	inline int32_t get_currentCheckBox_11() const { return ___currentCheckBox_11; }
	inline int32_t* get_address_of_currentCheckBox_11() { return &___currentCheckBox_11; }
	inline void set_currentCheckBox_11(int32_t value)
	{
		___currentCheckBox_11 = value;
	}

	inline static int32_t get_offset_of_TestPannel_12() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___TestPannel_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TestPannel_12() const { return ___TestPannel_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TestPannel_12() { return &___TestPannel_12; }
	inline void set_TestPannel_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TestPannel_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestPannel_12), (void*)value);
	}

	inline static int32_t get_offset_of_TopBar_13() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___TopBar_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TopBar_13() const { return ___TopBar_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TopBar_13() { return &___TopBar_13; }
	inline void set_TopBar_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TopBar_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TopBar_13), (void*)value);
	}

	inline static int32_t get_offset_of_canSkip_14() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___canSkip_14)); }
	inline bool get_canSkip_14() const { return ___canSkip_14; }
	inline bool* get_address_of_canSkip_14() { return &___canSkip_14; }
	inline void set_canSkip_14(bool value)
	{
		___canSkip_14 = value;
	}

	inline static int32_t get_offset_of_isNoTimer_15() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___isNoTimer_15)); }
	inline bool get_isNoTimer_15() const { return ___isNoTimer_15; }
	inline bool* get_address_of_isNoTimer_15() { return &___isNoTimer_15; }
	inline void set_isNoTimer_15(bool value)
	{
		___isNoTimer_15 = value;
	}

	inline static int32_t get_offset_of_timerInputed_16() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___timerInputed_16)); }
	inline String_t* get_timerInputed_16() const { return ___timerInputed_16; }
	inline String_t** get_address_of_timerInputed_16() { return &___timerInputed_16; }
	inline void set_timerInputed_16(String_t* value)
	{
		___timerInputed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerInputed_16), (void*)value);
	}

	inline static int32_t get_offset_of_timetakenCounter_17() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___timetakenCounter_17)); }
	inline int32_t get_timetakenCounter_17() const { return ___timetakenCounter_17; }
	inline int32_t* get_address_of_timetakenCounter_17() { return &___timetakenCounter_17; }
	inline void set_timetakenCounter_17(int32_t value)
	{
		___timetakenCounter_17 = value;
	}

	inline static int32_t get_offset_of_istestOn_18() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___istestOn_18)); }
	inline bool get_istestOn_18() const { return ___istestOn_18; }
	inline bool* get_address_of_istestOn_18() { return &___istestOn_18; }
	inline void set_istestOn_18(bool value)
	{
		___istestOn_18 = value;
	}

	inline static int32_t get_offset_of_TimerCountdownText_19() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___TimerCountdownText_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TimerCountdownText_19() const { return ___TimerCountdownText_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TimerCountdownText_19() { return &___TimerCountdownText_19; }
	inline void set_TimerCountdownText_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TimerCountdownText_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimerCountdownText_19), (void*)value);
	}

	inline static int32_t get_offset_of_TimerImageGO_20() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___TimerImageGO_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TimerImageGO_20() const { return ___TimerImageGO_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TimerImageGO_20() { return &___TimerImageGO_20; }
	inline void set_TimerImageGO_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TimerImageGO_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimerImageGO_20), (void*)value);
	}

	inline static int32_t get_offset_of_testTime_21() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___testTime_21)); }
	inline int32_t get_testTime_21() const { return ___testTime_21; }
	inline int32_t* get_address_of_testTime_21() { return &___testTime_21; }
	inline void set_testTime_21(int32_t value)
	{
		___testTime_21 = value;
	}

	inline static int32_t get_offset_of_colorChanger_22() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___colorChanger_22)); }
	inline bool get_colorChanger_22() const { return ___colorChanger_22; }
	inline bool* get_address_of_colorChanger_22() { return &___colorChanger_22; }
	inline void set_colorChanger_22(bool value)
	{
		___colorChanger_22 = value;
	}

	inline static int32_t get_offset_of_QuesNumberText_23() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___QuesNumberText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_QuesNumberText_23() const { return ___QuesNumberText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_QuesNumberText_23() { return &___QuesNumberText_23; }
	inline void set_QuesNumberText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___QuesNumberText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuesNumberText_23), (void*)value);
	}

	inline static int32_t get_offset_of_QuesTextCenter_24() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___QuesTextCenter_24)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_QuesTextCenter_24() const { return ___QuesTextCenter_24; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_QuesTextCenter_24() { return &___QuesTextCenter_24; }
	inline void set_QuesTextCenter_24(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___QuesTextCenter_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuesTextCenter_24), (void*)value);
	}

	inline static int32_t get_offset_of_Option1TextCenter_25() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___Option1TextCenter_25)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Option1TextCenter_25() const { return ___Option1TextCenter_25; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Option1TextCenter_25() { return &___Option1TextCenter_25; }
	inline void set_Option1TextCenter_25(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Option1TextCenter_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Option1TextCenter_25), (void*)value);
	}

	inline static int32_t get_offset_of_Option2TextCenter_26() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___Option2TextCenter_26)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Option2TextCenter_26() const { return ___Option2TextCenter_26; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Option2TextCenter_26() { return &___Option2TextCenter_26; }
	inline void set_Option2TextCenter_26(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Option2TextCenter_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Option2TextCenter_26), (void*)value);
	}

	inline static int32_t get_offset_of_Option3TextCenter_27() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___Option3TextCenter_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Option3TextCenter_27() const { return ___Option3TextCenter_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Option3TextCenter_27() { return &___Option3TextCenter_27; }
	inline void set_Option3TextCenter_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Option3TextCenter_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Option3TextCenter_27), (void*)value);
	}

	inline static int32_t get_offset_of_Option4TextCenter_28() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___Option4TextCenter_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Option4TextCenter_28() const { return ___Option4TextCenter_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Option4TextCenter_28() { return &___Option4TextCenter_28; }
	inline void set_Option4TextCenter_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Option4TextCenter_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Option4TextCenter_28), (void*)value);
	}

	inline static int32_t get_offset_of_TickCheckBox_29() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___TickCheckBox_29)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_TickCheckBox_29() const { return ___TickCheckBox_29; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_TickCheckBox_29() { return &___TickCheckBox_29; }
	inline void set_TickCheckBox_29(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___TickCheckBox_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TickCheckBox_29), (void*)value);
	}

	inline static int32_t get_offset_of_UnTickCheckBox_30() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___UnTickCheckBox_30)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_UnTickCheckBox_30() const { return ___UnTickCheckBox_30; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_UnTickCheckBox_30() { return &___UnTickCheckBox_30; }
	inline void set_UnTickCheckBox_30(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___UnTickCheckBox_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnTickCheckBox_30), (void*)value);
	}

	inline static int32_t get_offset_of_WrongTickCheckBox_31() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___WrongTickCheckBox_31)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_WrongTickCheckBox_31() const { return ___WrongTickCheckBox_31; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_WrongTickCheckBox_31() { return &___WrongTickCheckBox_31; }
	inline void set_WrongTickCheckBox_31(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___WrongTickCheckBox_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WrongTickCheckBox_31), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBox1_32() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___CheckBox1_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CheckBox1_32() const { return ___CheckBox1_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CheckBox1_32() { return &___CheckBox1_32; }
	inline void set_CheckBox1_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CheckBox1_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBox1_32), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBox2_33() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___CheckBox2_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CheckBox2_33() const { return ___CheckBox2_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CheckBox2_33() { return &___CheckBox2_33; }
	inline void set_CheckBox2_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CheckBox2_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBox2_33), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBox3_34() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___CheckBox3_34)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CheckBox3_34() const { return ___CheckBox3_34; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CheckBox3_34() { return &___CheckBox3_34; }
	inline void set_CheckBox3_34(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CheckBox3_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBox3_34), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBox4_35() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___CheckBox4_35)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CheckBox4_35() const { return ___CheckBox4_35; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CheckBox4_35() { return &___CheckBox4_35; }
	inline void set_CheckBox4_35(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CheckBox4_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBox4_35), (void*)value);
	}

	inline static int32_t get_offset_of_TestReportPannel_36() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___TestReportPannel_36)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TestReportPannel_36() const { return ___TestReportPannel_36; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TestReportPannel_36() { return &___TestReportPannel_36; }
	inline void set_TestReportPannel_36(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TestReportPannel_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestReportPannel_36), (void*)value);
	}

	inline static int32_t get_offset_of_TotalQuesText_37() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___TotalQuesText_37)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TotalQuesText_37() const { return ___TotalQuesText_37; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TotalQuesText_37() { return &___TotalQuesText_37; }
	inline void set_TotalQuesText_37(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TotalQuesText_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalQuesText_37), (void*)value);
	}

	inline static int32_t get_offset_of_CorrectAnswerText_38() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___CorrectAnswerText_38)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CorrectAnswerText_38() const { return ___CorrectAnswerText_38; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CorrectAnswerText_38() { return &___CorrectAnswerText_38; }
	inline void set_CorrectAnswerText_38(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CorrectAnswerText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CorrectAnswerText_38), (void*)value);
	}

	inline static int32_t get_offset_of_WrongAnswerText_39() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___WrongAnswerText_39)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_WrongAnswerText_39() const { return ___WrongAnswerText_39; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_WrongAnswerText_39() { return &___WrongAnswerText_39; }
	inline void set_WrongAnswerText_39(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___WrongAnswerText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WrongAnswerText_39), (void*)value);
	}

	inline static int32_t get_offset_of_MarksObtainedText_40() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___MarksObtainedText_40)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_MarksObtainedText_40() const { return ___MarksObtainedText_40; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_MarksObtainedText_40() { return &___MarksObtainedText_40; }
	inline void set_MarksObtainedText_40(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___MarksObtainedText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MarksObtainedText_40), (void*)value);
	}

	inline static int32_t get_offset_of_PercentageText_41() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___PercentageText_41)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_PercentageText_41() const { return ___PercentageText_41; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_PercentageText_41() { return &___PercentageText_41; }
	inline void set_PercentageText_41(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___PercentageText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PercentageText_41), (void*)value);
	}

	inline static int32_t get_offset_of_TotalTimeTakenText_42() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___TotalTimeTakenText_42)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TotalTimeTakenText_42() const { return ___TotalTimeTakenText_42; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TotalTimeTakenText_42() { return &___TotalTimeTakenText_42; }
	inline void set_TotalTimeTakenText_42(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TotalTimeTakenText_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalTimeTakenText_42), (void*)value);
	}

	inline static int32_t get_offset_of_ResultText_43() { return static_cast<int32_t>(offsetof(TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1, ___ResultText_43)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ResultText_43() const { return ___ResultText_43; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ResultText_43() { return &___ResultText_43; }
	inline void set_ResultText_43(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ResultText_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResultText_43), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// saveload
struct saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields
{
public:
	// System.String saveload::ServerLink
	String_t* ___ServerLink_4;
	// System.String saveload::CreateAccount
	String_t* ___CreateAccount_5;
	// System.String saveload::UpdateRepeatUser
	String_t* ___UpdateRepeatUser_6;
	// System.String saveload::UpdateStats
	String_t* ___UpdateStats_7;
	// System.String saveload::AdsFreq
	String_t* ___AdsFreq_8;
	// System.String saveload::LaravelServerLink
	String_t* ___LaravelServerLink_9;
	// System.String saveload::JobDetails
	String_t* ___JobDetails_10;
	// System.String saveload::SkillList
	String_t* ___SkillList_11;
	// System.Int32 saveload::totalTime
	int32_t ___totalTime_12;
	// System.Int32 saveload::correct
	int32_t ___correct_13;
	// System.Int32 saveload::wrong
	int32_t ___wrong_14;
	// System.Int32 saveload::revision
	int32_t ___revision_15;
	// System.Int32 saveload::ads
	int32_t ___ads_16;
	// System.Int32 saveload::repeatUser
	int32_t ___repeatUser_17;
	// System.String saveload::allSkills
	String_t* ___allSkills_18;
	// System.String saveload::selectedexperience
	String_t* ___selectedexperience_19;
	// System.String saveload::selectedLocations
	String_t* ___selectedLocations_20;
	// System.Int32 saveload::applyCount
	int32_t ___applyCount_21;
	// System.String saveload::accountID
	String_t* ___accountID_22;
	// System.String saveload::playerName
	String_t* ___playerName_23;
	// System.String saveload::current_filename
	String_t* ___current_filename_24;
	// System.String saveload::hash
	String_t* ___hash_25;

public:
	inline static int32_t get_offset_of_ServerLink_4() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___ServerLink_4)); }
	inline String_t* get_ServerLink_4() const { return ___ServerLink_4; }
	inline String_t** get_address_of_ServerLink_4() { return &___ServerLink_4; }
	inline void set_ServerLink_4(String_t* value)
	{
		___ServerLink_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerLink_4), (void*)value);
	}

	inline static int32_t get_offset_of_CreateAccount_5() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___CreateAccount_5)); }
	inline String_t* get_CreateAccount_5() const { return ___CreateAccount_5; }
	inline String_t** get_address_of_CreateAccount_5() { return &___CreateAccount_5; }
	inline void set_CreateAccount_5(String_t* value)
	{
		___CreateAccount_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateAccount_5), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateRepeatUser_6() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___UpdateRepeatUser_6)); }
	inline String_t* get_UpdateRepeatUser_6() const { return ___UpdateRepeatUser_6; }
	inline String_t** get_address_of_UpdateRepeatUser_6() { return &___UpdateRepeatUser_6; }
	inline void set_UpdateRepeatUser_6(String_t* value)
	{
		___UpdateRepeatUser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateRepeatUser_6), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateStats_7() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___UpdateStats_7)); }
	inline String_t* get_UpdateStats_7() const { return ___UpdateStats_7; }
	inline String_t** get_address_of_UpdateStats_7() { return &___UpdateStats_7; }
	inline void set_UpdateStats_7(String_t* value)
	{
		___UpdateStats_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateStats_7), (void*)value);
	}

	inline static int32_t get_offset_of_AdsFreq_8() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___AdsFreq_8)); }
	inline String_t* get_AdsFreq_8() const { return ___AdsFreq_8; }
	inline String_t** get_address_of_AdsFreq_8() { return &___AdsFreq_8; }
	inline void set_AdsFreq_8(String_t* value)
	{
		___AdsFreq_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AdsFreq_8), (void*)value);
	}

	inline static int32_t get_offset_of_LaravelServerLink_9() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___LaravelServerLink_9)); }
	inline String_t* get_LaravelServerLink_9() const { return ___LaravelServerLink_9; }
	inline String_t** get_address_of_LaravelServerLink_9() { return &___LaravelServerLink_9; }
	inline void set_LaravelServerLink_9(String_t* value)
	{
		___LaravelServerLink_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaravelServerLink_9), (void*)value);
	}

	inline static int32_t get_offset_of_JobDetails_10() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___JobDetails_10)); }
	inline String_t* get_JobDetails_10() const { return ___JobDetails_10; }
	inline String_t** get_address_of_JobDetails_10() { return &___JobDetails_10; }
	inline void set_JobDetails_10(String_t* value)
	{
		___JobDetails_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JobDetails_10), (void*)value);
	}

	inline static int32_t get_offset_of_SkillList_11() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___SkillList_11)); }
	inline String_t* get_SkillList_11() const { return ___SkillList_11; }
	inline String_t** get_address_of_SkillList_11() { return &___SkillList_11; }
	inline void set_SkillList_11(String_t* value)
	{
		___SkillList_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkillList_11), (void*)value);
	}

	inline static int32_t get_offset_of_totalTime_12() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___totalTime_12)); }
	inline int32_t get_totalTime_12() const { return ___totalTime_12; }
	inline int32_t* get_address_of_totalTime_12() { return &___totalTime_12; }
	inline void set_totalTime_12(int32_t value)
	{
		___totalTime_12 = value;
	}

	inline static int32_t get_offset_of_correct_13() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___correct_13)); }
	inline int32_t get_correct_13() const { return ___correct_13; }
	inline int32_t* get_address_of_correct_13() { return &___correct_13; }
	inline void set_correct_13(int32_t value)
	{
		___correct_13 = value;
	}

	inline static int32_t get_offset_of_wrong_14() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___wrong_14)); }
	inline int32_t get_wrong_14() const { return ___wrong_14; }
	inline int32_t* get_address_of_wrong_14() { return &___wrong_14; }
	inline void set_wrong_14(int32_t value)
	{
		___wrong_14 = value;
	}

	inline static int32_t get_offset_of_revision_15() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___revision_15)); }
	inline int32_t get_revision_15() const { return ___revision_15; }
	inline int32_t* get_address_of_revision_15() { return &___revision_15; }
	inline void set_revision_15(int32_t value)
	{
		___revision_15 = value;
	}

	inline static int32_t get_offset_of_ads_16() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___ads_16)); }
	inline int32_t get_ads_16() const { return ___ads_16; }
	inline int32_t* get_address_of_ads_16() { return &___ads_16; }
	inline void set_ads_16(int32_t value)
	{
		___ads_16 = value;
	}

	inline static int32_t get_offset_of_repeatUser_17() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___repeatUser_17)); }
	inline int32_t get_repeatUser_17() const { return ___repeatUser_17; }
	inline int32_t* get_address_of_repeatUser_17() { return &___repeatUser_17; }
	inline void set_repeatUser_17(int32_t value)
	{
		___repeatUser_17 = value;
	}

	inline static int32_t get_offset_of_allSkills_18() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___allSkills_18)); }
	inline String_t* get_allSkills_18() const { return ___allSkills_18; }
	inline String_t** get_address_of_allSkills_18() { return &___allSkills_18; }
	inline void set_allSkills_18(String_t* value)
	{
		___allSkills_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allSkills_18), (void*)value);
	}

	inline static int32_t get_offset_of_selectedexperience_19() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___selectedexperience_19)); }
	inline String_t* get_selectedexperience_19() const { return ___selectedexperience_19; }
	inline String_t** get_address_of_selectedexperience_19() { return &___selectedexperience_19; }
	inline void set_selectedexperience_19(String_t* value)
	{
		___selectedexperience_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedexperience_19), (void*)value);
	}

	inline static int32_t get_offset_of_selectedLocations_20() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___selectedLocations_20)); }
	inline String_t* get_selectedLocations_20() const { return ___selectedLocations_20; }
	inline String_t** get_address_of_selectedLocations_20() { return &___selectedLocations_20; }
	inline void set_selectedLocations_20(String_t* value)
	{
		___selectedLocations_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedLocations_20), (void*)value);
	}

	inline static int32_t get_offset_of_applyCount_21() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___applyCount_21)); }
	inline int32_t get_applyCount_21() const { return ___applyCount_21; }
	inline int32_t* get_address_of_applyCount_21() { return &___applyCount_21; }
	inline void set_applyCount_21(int32_t value)
	{
		___applyCount_21 = value;
	}

	inline static int32_t get_offset_of_accountID_22() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___accountID_22)); }
	inline String_t* get_accountID_22() const { return ___accountID_22; }
	inline String_t** get_address_of_accountID_22() { return &___accountID_22; }
	inline void set_accountID_22(String_t* value)
	{
		___accountID_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accountID_22), (void*)value);
	}

	inline static int32_t get_offset_of_playerName_23() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___playerName_23)); }
	inline String_t* get_playerName_23() const { return ___playerName_23; }
	inline String_t** get_address_of_playerName_23() { return &___playerName_23; }
	inline void set_playerName_23(String_t* value)
	{
		___playerName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerName_23), (void*)value);
	}

	inline static int32_t get_offset_of_current_filename_24() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___current_filename_24)); }
	inline String_t* get_current_filename_24() const { return ___current_filename_24; }
	inline String_t** get_address_of_current_filename_24() { return &___current_filename_24; }
	inline void set_current_filename_24(String_t* value)
	{
		___current_filename_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_filename_24), (void*)value);
	}

	inline static int32_t get_offset_of_hash_25() { return static_cast<int32_t>(offsetof(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields, ___hash_25)); }
	inline String_t* get_hash_25() const { return ___hash_25; }
	inline String_t** get_address_of_hash_25() { return &___hash_25; }
	inline void set_hash_25(String_t* value)
	{
		___hash_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hash_25), (void*)value);
	}
};


// UnityEngine.UI.ContentSizeFitter
struct ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_HorizontalFit
	int32_t ___m_HorizontalFit_4;
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_VerticalFit
	int32_t ___m_VerticalFit_5;
	// UnityEngine.RectTransform UnityEngine.UI.ContentSizeFitter::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ContentSizeFitter::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_7;

public:
	inline static int32_t get_offset_of_m_HorizontalFit_4() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5, ___m_HorizontalFit_4)); }
	inline int32_t get_m_HorizontalFit_4() const { return ___m_HorizontalFit_4; }
	inline int32_t* get_address_of_m_HorizontalFit_4() { return &___m_HorizontalFit_4; }
	inline void set_m_HorizontalFit_4(int32_t value)
	{
		___m_HorizontalFit_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalFit_5() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5, ___m_VerticalFit_5)); }
	inline int32_t get_m_VerticalFit_5() const { return ___m_VerticalFit_5; }
	inline int32_t* get_address_of_m_VerticalFit_5() { return &___m_VerticalFit_5; }
	inline void set_m_VerticalFit_5(int32_t value)
	{
		___m_VerticalFit_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5, ___m_Rect_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_7 = value;
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


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void AppManager::InstantiateLeftPannelThings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppManager_InstantiateLeftPannelThings_m6F5CD0D9B0E5C6ABFDFAD01CFA2708CCD9D5CDE6 (AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator AppManager::PutSubjectValuesToListFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppManager_PutSubjectValuesToListFromServer_m5FDC748029332931A698EFD5E0868049FD396AF0 (AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator AppManager::PutCompanyValuesToListFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppManager_PutCompanyValuesToListFromServer_mDA281368596C351BA8214D031ECD6E22C2964E45 (AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.ContentSizeFitter>()
inline ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5 * Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void JobManager::OnJobButtonPressed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_OnJobButtonPressed_m6760702EB1B024890A776F92CF885A512AD34A77 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void JobManager::onperticularskillbuttonpressed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_onperticularskillbuttonpressed_m46A4E4CC28B396A175863148CBD901868F735BB9 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void JobManager::OnDeleteRecommendedSkill(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_OnDeleteRecommendedSkill_m658536502751F3F91FCD57D3754F2162D677F6AD (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void JobManager::OnDeleteRecommendedLocation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_OnDeleteRecommendedLocation_m5B69E0924814EA69BDBC76AD5B2D4CE47ECFB198 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<JobManager>()
inline JobManager_t89BD3393575335C464C70D6B561A32404520E022 * GameObject_GetComponent_TisJobManager_t89BD3393575335C464C70D6B561A32404520E022_m2E4E9EEBD114DE812F048006EBD653D880E23E20 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  JobManager_t89BD3393575335C464C70D6B561A32404520E022 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.String JobManager::GetDataValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, String_t* ___data0, String_t* ___index1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void JobDataBean::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobDataBean__ctor_m02B69F9E6BC2D830CF2BB805205C79F89F436F08 (JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294 * __this, String_t* ___companyPhoto0, String_t* ___companyName1, String_t* ___post2, String_t* ___package3, String_t* ___experience4, String_t* ___bond5, String_t* ___location6, String_t* ___role7, String_t* ___industyType8, String_t* ___functionalArea9, String_t* ___employmentType10, String_t* ___roleCategory11, String_t* ___education12, String_t* ___keySkill13, String_t* ___responsibility14, String_t* ___knowledge15, String_t* ___benifit16, String_t* ___aboutCompany17, int32_t ___totalEmployee18, String_t* ___lastApplyDate19, String_t* ___applyLink20, String_t* ___description21, String_t* ___ago22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JobDataBean>::Add(!0)
inline void List_1_Add_m4400CEB1C172F05FBA3226E8482D8E4B46F5D4EB (List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C * __this, JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C *, JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void JobManager::CreteJobList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_CreteJobList_mD42ADABFA91F8A89DDF25338A0E8EEC8D24D97F4 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___form1, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void JobManager::processjsonallskillsData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_processjsonallskillsData_mECEBDD7461C1356D9E9B621FD2D8D888267B3101 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, String_t* ___url_text0, const RuntimeMethod* method);
// System.Void JobManager::ShowLoadingScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_ShowLoadingScreen_m604CBD7CD41D8836FA6BA24CF9BA953240369112 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, const RuntimeMethod* method);
// System.Void JobManager::HideLoadingScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_HideLoadingScreen_m3E5070F01A56BE4CF0D317147ED86267176AACA5 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, const RuntimeMethod* method);
// System.Void JobManager::processjsonjobData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_processjsonjobData_mBBC12EC58AD8F49DEC4FBFC672744A130BA7C784 (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, String_t* ___url_text0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void JobManager::OnJobListButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobManager_OnJobListButtonPressed_m6AD212F120A3559312676011BCD2FD866C6EA63E (JobManager_t89BD3393575335C464C70D6B561A32404520E022 * __this, const RuntimeMethod* method);
// System.Void LocalTestManager::OnCourseSelectedUpdateDatato1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalTestManager_OnCourseSelectedUpdateDatato1_m47CD1CE435A515FBFA40C619E6DD12EF1A05CCFE (LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LocalTestManager::OnSubjectSelectedUpdateDatato1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalTestManager_OnSubjectSelectedUpdateDatato1_m8F42EE0F8F666B1E22BA9AB51B3DA11081E9D800 (LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LocalTestManager::OnCompanySelectedUpdateDatato1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalTestManager_OnCompanySelectedUpdateDatato1_m3BECE876AEA1198147E13DE566D4D099D9F33E53 (LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, int32_t ___i1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TestContoller>()
inline TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * GameObject_GetComponent_TisTestContoller_t937C672BED623740089E5DA4F104D6512B230EE1_m78EA412A36A106CF89E7E24E7FEFE2395E81C980 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void TestContoller::SetMyDataTest(System.String[],System.Boolean,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestContoller_SetMyDataTest_m69AA1E8FD7B820899C94607A1F198AFD7819C4A2 (TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___things0, bool ___canskip1, bool ___isnoTimer2, String_t* ___timeinput3, const RuntimeMethod* method);
// System.Void LocalTestManager::SetDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalTestManager_SetDetails_m784503B6F0200EC8F2B4272011FCAE9BDF764845 (LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void saveload::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void saveload_Save_mF289F44A0E648A1E31B96489C770756705779560 (const RuntimeMethod* method);
// System.String MainManager::GetDataValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MainManager_GetDataValue_m06E87267D4E44B99833B5B574CFAC9626D53945B (MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * __this, String_t* ___data0, String_t* ___index1, const RuntimeMethod* method);
// System.Void MainManager::CheckTimerIfHaveThenShowAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainManager_CheckTimerIfHaveThenShowAds_m8E509D66E49AA3283464E226D33E063CE78B7F9C (MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * __this, const RuntimeMethod* method);
// System.Void MainManager::UpdateStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainManager_UpdateStats_mACFC658DBD8CF75841448FFADCA938EC9FA12DA4 (MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void TestContoller::ShowData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestContoller_ShowData_m752AFF1CFC104FF9533398726EF9B16257D99AEA (TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TestContoller::Countdown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestContoller_Countdown_m4B9CB4C14AD0909BE5FED3EDDD5F5E4873629A55 (TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * __this, int32_t ___completeTime0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MainManager>()
inline MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * GameObject_GetComponent_TisMainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F_m0A143C05F728D1FACB70BB193897AE380F99AABB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppManager/<PutCompanyValuesToListFromServer>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutCompanyValuesToListFromServerU3Ed__20__ctor_m008611A6935658009D96612B82D7041FBE57AD0D (U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AppManager/<PutCompanyValuesToListFromServer>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutCompanyValuesToListFromServerU3Ed__20_System_IDisposable_Dispose_mCD5CA5D9B18A7723A306EE6FFB411ACA4293F83F (U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AppManager/<PutCompanyValuesToListFromServer>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPutCompanyValuesToListFromServerU3Ed__20_MoveNext_mC1B7BDAFC61426270A651C68380E092EA62A20BC (U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * V_1 = NULL;
	bool V_2 = false;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWW www = new WWW(saveload.ServerLink+GetCompanyDataLink);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_4 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_GetCompanyDataLink_8();
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, L_6, /*hidden argument*/NULL);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_8 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_8);
		// sendOnPath++;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_9 = V_1;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_sendOnPath_17();
		NullCheck(L_9);
		L_9->set_sendOnPath_17(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// LoadingScreen.SetActive(true);
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_LoadingScreen_4();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_14 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0068:
	{
		__this->set_U3CU3E1__state_0((-1));
		// print(www.text);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_15 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_15, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_16, /*hidden argument*/NULL);
		// AllCompanyData = www.text;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_17 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_18 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_AllCompanyData_15(L_19);
		// sendOnPath--;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_20 = V_1;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_sendOnPath_17();
		NullCheck(L_20);
		L_20->set_sendOnPath_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)));
		// if (www.text != "" && www.text.Contains(";"))
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_23 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_23);
		String_t* L_24;
		L_24 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_23, /*hidden argument*/NULL);
		bool L_25;
		L_25 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_24, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_016b;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_26 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_26);
		String_t* L_27;
		L_27 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		bool L_28;
		L_28 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_27, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_016b;
		}
	}
	{
		// string[] items = www.text.Split(';');
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_29 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_29);
		String_t* L_30;
		L_30 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_29, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = L_31;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		NullCheck(L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33;
		L_33 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_30, L_32, /*hidden argument*/NULL);
		// companyValues.Clear();
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_34 = V_1;
		NullCheck(L_34);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = L_34->get_companyValues_12();
		NullCheck(L_35);
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_35, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// bool flag = false;
		V_2 = (bool)0;
		// foreach (string s in items)
		V_3 = L_33;
		V_4 = 0;
		goto IL_0158;
	}

IL_0100:
	{
		// foreach (string s in items)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = V_3;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		String_t* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = L_39;
		// flag = false;
		V_2 = (bool)0;
		// foreach (string ss in companyValues)
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_40 = V_1;
		NullCheck(L_40);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_41 = L_40->get_companyValues_12();
		NullCheck(L_41);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_42;
		L_42 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_41, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_6 = L_42;
	}

IL_0115:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_0117:
		{
			// foreach (string ss in companyValues)
			String_t* L_43;
			L_43 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_6), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			// if (ss == s)
			String_t* L_44 = V_5;
			bool L_45;
			L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_0129;
			}
		}

IL_0127:
		{
			// flag = true;
			V_2 = (bool)1;
		}

IL_0129:
		{
			// foreach (string ss in companyValues)
			bool L_46;
			L_46 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_0117;
			}
		}

IL_0132:
		{
			IL2CPP_LEAVE(0x142, FINALLY_0134);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0134;
	}

FINALLY_0134:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_6), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(308)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(308)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x142, IL_0142)
	}

IL_0142:
	{
		// if (flag == false)
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0152;
		}
	}
	{
		// companyValues.Add(s);
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_48 = V_1;
		NullCheck(L_48);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_49 = L_48->get_companyValues_12();
		String_t* L_50 = V_5;
		NullCheck(L_49);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_49, L_50, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0152:
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_0158:
	{
		// foreach (string s in items)
		int32_t L_52 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = V_3;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length))))))
		{
			goto IL_0100;
		}
	}
	{
		// LoadingScreen.SetActive(false);
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_54 = V_1;
		NullCheck(L_54);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = L_54->get_LoadingScreen_4();
		NullCheck(L_55);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_55, (bool)0, /*hidden argument*/NULL);
	}

IL_016b:
	{
		// InstantiateLeftPannelThings();
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_56 = V_1;
		NullCheck(L_56);
		AppManager_InstantiateLeftPannelThings_m6F5CD0D9B0E5C6ABFDFAD01CFA2708CCD9D5CDE6(L_56, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AppManager/<PutCompanyValuesToListFromServer>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPutCompanyValuesToListFromServerU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A5D3CAA78BD35A626E5AF2D6AF2D0AC2380C3CD (U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AppManager/<PutCompanyValuesToListFromServer>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutCompanyValuesToListFromServerU3Ed__20_System_Collections_IEnumerator_Reset_m1F7332D16943E3223B6723427111442CB8452DCC (U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPutCompanyValuesToListFromServerU3Ed__20_System_Collections_IEnumerator_Reset_m1F7332D16943E3223B6723427111442CB8452DCC_RuntimeMethod_var)));
	}
}
// System.Object AppManager/<PutCompanyValuesToListFromServer>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPutCompanyValuesToListFromServerU3Ed__20_System_Collections_IEnumerator_get_Current_m90BCD3FC058C1E3310DB0CA652C22E054DA17EB1 (U3CPutCompanyValuesToListFromServerU3Ed__20_tC1FA1D55C8EE1E8342BBFE9353BD1180CA26BC6B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void AppManager/<PutCourseValuesToListFromServer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutCourseValuesToListFromServerU3Ed__18__ctor_m08F167D5D688F1ECD84BBF83B0A7A69083BA6674 (U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AppManager/<PutCourseValuesToListFromServer>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutCourseValuesToListFromServerU3Ed__18_System_IDisposable_Dispose_mA5DA8DCA06097A2823BDEA4D8656884D4DE1A3C9 (U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AppManager/<PutCourseValuesToListFromServer>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPutCourseValuesToListFromServerU3Ed__18_MoveNext_m31B1A7AF2B264E319EEAF4D3E6508758E1634C8E (U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * V_1 = NULL;
	bool V_2 = false;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWW www = new WWW(saveload.ServerLink+GetCourseDataLink);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_4 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_GetCourseDataLink_6();
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, L_6, /*hidden argument*/NULL);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_8 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_8);
		// sendOnPath++;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_9 = V_1;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_sendOnPath_17();
		NullCheck(L_9);
		L_9->set_sendOnPath_17(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_12 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// print(www.text);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_13 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_13, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_14, /*hidden argument*/NULL);
		// AllCourseData = www.text;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_15 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_16 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_AllCourseData_13(L_17);
		// sendOnPath--;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_18 = V_1;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_sendOnPath_17();
		NullCheck(L_18);
		L_18->set_sendOnPath_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		// if (www.text != "" && www.text.Contains(";"))
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_21 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0153;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_24 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_24);
		String_t* L_25;
		L_25 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_26;
		L_26 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_25, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0153;
		}
	}
	{
		// string[] items = www.text.Split(';');
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_27 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_27);
		String_t* L_28;
		L_28 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_27, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		NullCheck(L_28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31;
		L_31 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_28, L_30, /*hidden argument*/NULL);
		// courseValues.Clear();
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_32 = V_1;
		NullCheck(L_32);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_33 = L_32->get_courseValues_10();
		NullCheck(L_33);
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_33, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// bool flag = false;
		V_2 = (bool)0;
		// foreach (string s in items)
		V_3 = L_31;
		V_4 = 0;
		goto IL_014c;
	}

IL_00f4:
	{
		// foreach (string s in items)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = V_3;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		String_t* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_5 = L_37;
		// flag = false;
		V_2 = (bool)0;
		// foreach (string ss in courseValues)
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_38 = V_1;
		NullCheck(L_38);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_39 = L_38->get_courseValues_10();
		NullCheck(L_39);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_40;
		L_40 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_39, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_6 = L_40;
	}

IL_0109:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011d;
		}

IL_010b:
		{
			// foreach (string ss in courseValues)
			String_t* L_41;
			L_41 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_6), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			// if (ss == s)
			String_t* L_42 = V_5;
			bool L_43;
			L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_011d;
			}
		}

IL_011b:
		{
			// flag = true;
			V_2 = (bool)1;
		}

IL_011d:
		{
			// foreach (string ss in courseValues)
			bool L_44;
			L_44 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_44)
			{
				goto IL_010b;
			}
		}

IL_0126:
		{
			IL2CPP_LEAVE(0x136, FINALLY_0128);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0128;
	}

FINALLY_0128:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_6), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(296)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(296)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x136, IL_0136)
	}

IL_0136:
	{
		// if (flag == false)
		bool L_45 = V_2;
		if (L_45)
		{
			goto IL_0146;
		}
	}
	{
		// courseValues.Add(s);
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_46 = V_1;
		NullCheck(L_46);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_47 = L_46->get_courseValues_10();
		String_t* L_48 = V_5;
		NullCheck(L_47);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_47, L_48, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0146:
	{
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_014c:
	{
		// foreach (string s in items)
		int32_t L_50 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = V_3;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))))))
		{
			goto IL_00f4;
		}
	}

IL_0153:
	{
		// StartCoroutine(PutSubjectValuesToListFromServer());
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_52 = V_1;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_53 = V_1;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = AppManager_PutSubjectValuesToListFromServer_m5FDC748029332931A698EFD5E0868049FD396AF0(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_55;
		L_55 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_52, L_54, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AppManager/<PutCourseValuesToListFromServer>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPutCourseValuesToListFromServerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m99801E14286ABC445C7D1157A7EB5153709AD21D (U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AppManager/<PutCourseValuesToListFromServer>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutCourseValuesToListFromServerU3Ed__18_System_Collections_IEnumerator_Reset_m8B926EE2EB12BDF8F959C046408D8A367633AF93 (U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPutCourseValuesToListFromServerU3Ed__18_System_Collections_IEnumerator_Reset_m8B926EE2EB12BDF8F959C046408D8A367633AF93_RuntimeMethod_var)));
	}
}
// System.Object AppManager/<PutCourseValuesToListFromServer>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPutCourseValuesToListFromServerU3Ed__18_System_Collections_IEnumerator_get_Current_mDCFF0B078FA2569497953E7A26D49B294A9AB11F (U3CPutCourseValuesToListFromServerU3Ed__18_t6F9CC69F76AB95212758A0E4E3DC892142D44CFA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void AppManager/<PutSubjectValuesToListFromServer>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutSubjectValuesToListFromServerU3Ed__19__ctor_m9DE55A57F4BA703F8690ECEC36F11AA0A0D3914B (U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AppManager/<PutSubjectValuesToListFromServer>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutSubjectValuesToListFromServerU3Ed__19_System_IDisposable_Dispose_m6F7ACE0E20407E1F0C52A506A1E3D219A2F74494 (U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AppManager/<PutSubjectValuesToListFromServer>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPutSubjectValuesToListFromServerU3Ed__19_MoveNext_m09803C796E3FC09B97439AF7D0605AA02800ED76 (U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWW www = new WWW(saveload.ServerLink+GetSubjectDataLink);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_4 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_GetSubjectDataLink_7();
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, L_6, /*hidden argument*/NULL);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_8 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_8);
		// sendOnPath++;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_9 = V_1;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_sendOnPath_17();
		NullCheck(L_9);
		L_9->set_sendOnPath_17(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_12 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// print(www.text);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_13 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_13, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_14, /*hidden argument*/NULL);
		// AllSubjectData = www.text;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_15 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_16 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_AllSubjectData_14(L_17);
		// sendOnPath--;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_18 = V_1;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_sendOnPath_17();
		NullCheck(L_18);
		L_18->set_sendOnPath_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		// if (www.text != "" && www.text.Contains(";"))
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_21 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_010a;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_24 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_24);
		String_t* L_25;
		L_25 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_26;
		L_26 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_25, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_010a;
		}
	}
	{
		// string[] items = www.text.Split(';');
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_27 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_27);
		String_t* L_28;
		L_28 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_27, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		NullCheck(L_28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31;
		L_31 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_28, L_30, /*hidden argument*/NULL);
		// subjectValues.Clear();
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_32 = V_1;
		NullCheck(L_32);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_33 = L_32->get_subjectValues_11();
		NullCheck(L_33);
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_33, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// foreach (string s in items)
		V_2 = L_31;
		V_3 = 0;
		goto IL_0104;
	}

IL_00eb:
	{
		// foreach (string s in items)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = V_2;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		String_t* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_4 = L_37;
		// flag = false;
		// if (flag == false)
		if (0)
		{
			goto IL_0100;
		}
	}
	{
		// subjectValues.Add(s);
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_38 = V_1;
		NullCheck(L_38);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_39 = L_38->get_subjectValues_11();
		String_t* L_40 = V_4;
		NullCheck(L_39);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_39, L_40, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0100:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0104:
	{
		// foreach (string s in items)
		int32_t L_42 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = V_2;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))))
		{
			goto IL_00eb;
		}
	}

IL_010a:
	{
		// StartCoroutine(PutCompanyValuesToListFromServer());
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_44 = V_1;
		AppManager_tEB396F692721325A4933F377470C18D49C5B7BC7 * L_45 = V_1;
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = AppManager_PutCompanyValuesToListFromServer_mDA281368596C351BA8214D031ECD6E22C2964E45(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_47;
		L_47 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_44, L_46, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AppManager/<PutSubjectValuesToListFromServer>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPutSubjectValuesToListFromServerU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6756813A7A1B1D1F4D660025F24467B8BECC16CB (U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AppManager/<PutSubjectValuesToListFromServer>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutSubjectValuesToListFromServerU3Ed__19_System_Collections_IEnumerator_Reset_m2A181EBB093C850CB5F80C7D6272A88A7C29B46E (U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPutSubjectValuesToListFromServerU3Ed__19_System_Collections_IEnumerator_Reset_m2A181EBB093C850CB5F80C7D6272A88A7C29B46E_RuntimeMethod_var)));
	}
}
// System.Object AppManager/<PutSubjectValuesToListFromServer>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPutSubjectValuesToListFromServerU3Ed__19_System_Collections_IEnumerator_get_Current_mE4328BB318E40DEEB87EC69EFBE471814F266214 (U3CPutSubjectValuesToListFromServerU3Ed__19_t934881F79E1BA0B2B97D41FEA05990F0FBC43136 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void AppManager/<ShowAndHideAfterTime>d__91::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAndHideAfterTimeU3Ed__91__ctor_m5110919061D335C0D19A3835703B0E139FC66D85 (U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AppManager/<ShowAndHideAfterTime>d__91::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAndHideAfterTimeU3Ed__91_System_IDisposable_Dispose_m2107AA551F6C8DE5D289F257AE7C74649ED1D3BF (U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AppManager/<ShowAndHideAfterTime>d__91::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowAndHideAfterTimeU3Ed__91_MoveNext_mF71664D8D06A2DADCAEA3F2177C47667E5CE5F3E (U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(Time);
		float L_3 = __this->get_Time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// go.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_go_3();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AppManager/<ShowAndHideAfterTime>d__91::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowAndHideAfterTimeU3Ed__91_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEB4C02B092F60C54B7435D2C3D330D39C4BCBFD6 (U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AppManager/<ShowAndHideAfterTime>d__91::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAndHideAfterTimeU3Ed__91_System_Collections_IEnumerator_Reset_m95C49E71C8B532DA99B879B1BA3657E1AF9B81CB (U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowAndHideAfterTimeU3Ed__91_System_Collections_IEnumerator_Reset_m95C49E71C8B532DA99B879B1BA3657E1AF9B81CB_RuntimeMethod_var)));
	}
}
// System.Object AppManager/<ShowAndHideAfterTime>d__91::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowAndHideAfterTimeU3Ed__91_System_Collections_IEnumerator_get_Current_mEBBD312D1A56BD0357359FF2A4563ABE349F74D8 (U3CShowAndHideAfterTimeU3Ed__91_t70A05877733BE36564C9C1B03248DB33158FB9D9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void AppManager/<TextAlighByGeometry>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextAlighByGeometryU3Ed__45__ctor_m218EA1E4344B73E9CA72376BCF59B2663279BCDC (U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AppManager/<TextAlighByGeometry>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextAlighByGeometryU3Ed__45_System_IDisposable_Dispose_mA2195ADCE4B40989E09A1405559BD442DAE3AA5D (U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AppManager/<TextAlighByGeometry>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTextAlighByGeometryU3Ed__45_MoveNext_mD92529DD0A0869F5F164349C1E7427DD135C9437 (U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_006c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_2 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_2, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_2);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textt.GetComponent<ContentSizeFitter>().enabled = false;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_textt_2();
		NullCheck(L_3);
		ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5 * L_4;
		L_4 = Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C(L_3, /*hidden argument*/Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textt.GetComponent<ContentSizeFitter>().enabled = true;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_textt_2();
		NullCheck(L_6);
		ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5 * L_7;
		L_7 = Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C(L_6, /*hidden argument*/Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C_RuntimeMethod_var);
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AppManager/<TextAlighByGeometry>d__45::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTextAlighByGeometryU3Ed__45_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C34BE09853C5C396410FEF7FAFE2FCF6BB23DCA (U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AppManager/<TextAlighByGeometry>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextAlighByGeometryU3Ed__45_System_Collections_IEnumerator_Reset_mB44E0AA2E82322AE09EE78D2C3B0B4FD2E18EF77 (U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTextAlighByGeometryU3Ed__45_System_Collections_IEnumerator_Reset_mB44E0AA2E82322AE09EE78D2C3B0B4FD2E18EF77_RuntimeMethod_var)));
	}
}
// System.Object AppManager/<TextAlighByGeometry>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTextAlighByGeometryU3Ed__45_System_Collections_IEnumerator_get_Current_mAFF667A714976F259422F154A5420572C24B8493 (U3CTextAlighByGeometryU3Ed__45_t5CA7A0B7E2E8D966B23537ECBE21F245FBA9BCCD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void JobManager/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mF1FA698F915ED72A4FA03055D7926567E51A27AC (U3CU3Ec__DisplayClass24_0_tBED9CC855307295485E2CC3B2F42DD900C4AB02C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobManager/<>c__DisplayClass24_0::<CreteJobList>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CCreteJobListU3Eb__0_m230ECA4E680B36020A3219A0E31F3720BFB5D0BB (U3CU3Ec__DisplayClass24_0_tBED9CC855307295485E2CC3B2F42DD900C4AB02C * __this, const RuntimeMethod* method)
{
	{
		// go.GetComponent<Button>().onClick.AddListener(() => OnJobButtonPressed(n));
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_n_0();
		NullCheck(L_0);
		JobManager_OnJobButtonPressed_m6760702EB1B024890A776F92CF885A512AD34A77(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void JobManager/<>c__DisplayClass45_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_mD5EB681326A70F25AAEE6EDA7F8F5CF2A798CE2A (U3CU3Ec__DisplayClass45_0_t9CB81EC4BA8C08DFA1673147B2DA7417A9E52C78 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobManager/<>c__DisplayClass45_0::<LoadFilterSkills>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0_U3CLoadFilterSkillsU3Eb__0_m15665C97B07308DC774264749E23D8C722B65F20 (U3CU3Ec__DisplayClass45_0_t9CB81EC4BA8C08DFA1673147B2DA7417A9E52C78 * __this, const RuntimeMethod* method)
{
	{
		// go.GetComponent<Button>().onClick.AddListener(() => onperticularskillbuttonpressed(n));
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_n_0();
		NullCheck(L_0);
		JobManager_onperticularskillbuttonpressed_m46A4E4CC28B396A175863148CBD901868F735BB9(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void JobManager/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_m9E6674E57FE85C2C5FB1FEF69E85221557437FD2 (U3CU3Ec__DisplayClass63_0_t59396D2D17ECF4671336687B564B062833D83A5D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobManager/<>c__DisplayClass63_0::<InitializeSkill>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CInitializeSkillU3Eb__0_mECC12F6405E79D84209E25545466229D3AF144A4 (U3CU3Ec__DisplayClass63_0_t59396D2D17ECF4671336687B564B062833D83A5D * __this, const RuntimeMethod* method)
{
	{
		// go.GetComponent<Button>().onClick.AddListener(() => OnDeleteRecommendedSkill(n));
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_0 = __this->get_U3CU3E4__this_0();
		int32_t L_1 = __this->get_n_1();
		NullCheck(L_0);
		JobManager_OnDeleteRecommendedSkill_m658536502751F3F91FCD57D3754F2162D677F6AD(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void JobManager/<>c__DisplayClass70_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_m74CEFCAB175685F81CD6AF5B91F87617275BF7D4 (U3CU3Ec__DisplayClass70_0_tE8AC7342B4BEF1CAD2FD933C4F65F6AB8F8259BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JobManager/<>c__DisplayClass70_0::<InitializeLocation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3CInitializeLocationU3Eb__0_mCCFBE370E1F4BF5B37F0D8BA4DCD56DAA2410D4F (U3CU3Ec__DisplayClass70_0_tE8AC7342B4BEF1CAD2FD933C4F65F6AB8F8259BE * __this, const RuntimeMethod* method)
{
	{
		// go.GetComponent<Button>().onClick.AddListener(() => OnDeleteRecommendedLocation(n));
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_0 = __this->get_U3CU3E4__this_0();
		int32_t L_1 = __this->get_n_1();
		NullCheck(L_0);
		JobManager_OnDeleteRecommendedLocation_m5B69E0924814EA69BDBC76AD5B2D4CE47ECFB198(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void JobManager/<DisableJobListThings>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableJobListThingsU3Ed__11__ctor_m15759317F6101A1EBA9B4E461690787319C03E84 (U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void JobManager/<DisableJobListThings>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableJobListThingsU3Ed__11_System_IDisposable_Dispose_m3BC67113761CDA4D8CB669048259E96A825EC602 (U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean JobManager/<DisableJobListThings>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisableJobListThingsU3Ed__11_MoveNext_mD7E54A5B817AA5F0DA850D95E71B11DCC0BA858F (U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJobManager_t89BD3393575335C464C70D6B561A32404520E022_m2E4E9EEBD114DE812F048006EBD653D880E23E20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isJobListOpen = setvalue;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_5 = V_1;
		int32_t L_6 = __this->get_setvalue_3();
		NullCheck(L_5);
		L_5->set_isJobListOpen_10(L_6);
		// if (isJobListOpen == -1)
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_isJobListOpen_10();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0064;
		}
	}
	{
		// gameObject.GetComponent<JobManager>().enabled = false;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_9 = V_1;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_11;
		L_11 = GameObject_GetComponent_TisJobManager_t89BD3393575335C464C70D6B561A32404520E022_m2E4E9EEBD114DE812F048006EBD653D880E23E20(L_10, /*hidden argument*/GameObject_GetComponent_TisJobManager_t89BD3393575335C464C70D6B561A32404520E022_m2E4E9EEBD114DE812F048006EBD653D880E23E20_RuntimeMethod_var);
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return (bool)0;
	}
}
// System.Object JobManager/<DisableJobListThings>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisableJobListThingsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD77EA21CAA1C02FDE12A5D1665BF491AB046747D (U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JobManager/<DisableJobListThings>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableJobListThingsU3Ed__11_System_Collections_IEnumerator_Reset_m191CC72390414AD5C910EF9B2A0E5014E59396E5 (U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisableJobListThingsU3Ed__11_System_Collections_IEnumerator_Reset_m191CC72390414AD5C910EF9B2A0E5014E59396E5_RuntimeMethod_var)));
	}
}
// System.Object JobManager/<DisableJobListThings>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisableJobListThingsU3Ed__11_System_Collections_IEnumerator_get_Current_m93D6E13F57AED333B8EF21C05E63C82984A2EDC0 (U3CDisableJobListThingsU3Ed__11_tC188C9B9DDAFC30D9A13E38B0B495B80A3096C12 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void JobManager/<GetAllTheJobs>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllTheJobsU3Ed__21__ctor_mBF4A829FBBB6AAE362F85D7D25C879323228A22C (U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void JobManager/<GetAllTheJobs>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllTheJobsU3Ed__21_System_IDisposable_Dispose_mF5C902BDC5C57D87873FF9D0B850D32E832D2122 (U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean JobManager/<GetAllTheJobs>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllTheJobsU3Ed__21_MoveNext_m80BD56FF539AD3A57FBE655FF837776DA5C2686A (U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4400CEB1C172F05FBA3226E8482D8E4B46F5D4EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04BB2B79C908AA9F00779CD8A45E22416ABE1E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACEE724E4A550F5D72D235FF0F6FCAB5A77F1D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BF4B68B4B4C3969B587B737C674E7867C179AA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C25FAD76378D327D7BBD4B1C3A1F458CD1CD571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral135E638DA52F163A28F9A25566D4A366F2652F79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2408E546AB809DF90137E84C0FDA19E4CCD0642B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26027DEFE902AF1F286824150A726C18EA29D9A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC4FE86DCBBC89E960BFF3EDE1A5ADA4EFC2681);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral329F65FFA2A66A359FF1F566C8DC34F497DE13C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50F9C30DB776D3327851E245A9FD687574FB96DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639AF8B14043FE813D57F08C90B400CEE6FDE099);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73A6A7ED5C5A3694B075CA8CA69A81332698700B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73DA0A9C7350CCD00BF824D784BF471386D8A207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5EF3B88A810ED17930593E9B93C319C754B931);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884284E03605E6B08A271AB4FF7481ED26221934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral986B582D711D96B5EDAFD141FFD72B529F029D85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A3E947017A4E6B0486C47C768C23BB95D6B8E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABBD34FC4FF77F29B83A925D95378A4B68575021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4EF6069890D0760665F15E5FD54DEDF80DA327B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB932F4795A105A9C25A8B2626832082FE834E55F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF343FC0FFA83491668F52D4BAE59C345E1C05C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCED737DF5F5E32BBC2D3B7CB2104E14A473604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE94AAB57C83AA1A6A0EDA30B4D195E0750794F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE784C67A2BB378DEE858C2DFE27C9E227AED30C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE43351E3D064F45C4ABCED162CA5AB863117D88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	String_t* V_13 = NULL;
	String_t* V_14 = NULL;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	String_t* V_17 = NULL;
	String_t* V_18 = NULL;
	String_t* V_19 = NULL;
	String_t* V_20 = NULL;
	String_t* V_21 = NULL;
	int32_t V_22 = 0;
	String_t* V_23 = NULL;
	String_t* V_24 = NULL;
	String_t* V_25 = NULL;
	String_t* V_26 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWWForm form1 = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_4 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_4, /*hidden argument*/NULL);
		// WWW www = new WWW(saveload.ServerLink+saveload.JobDetails);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_5 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		String_t* L_6 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_JobDetails_10();
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_6, /*hidden argument*/NULL);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_8 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_8);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_9 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// print("JobData:"+www.text);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_10 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral329F65FFA2A66A359FF1F566C8DC34F497DE13C0, L_11, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_12, /*hidden argument*/NULL);
		// if (www.text.Contains("CompanyName"))
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_13 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_14, _stringLiteral639AF8B14043FE813D57F08C90B400CEE6FDE099, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0279;
		}
	}
	{
		// string[] items=www.text.Split(';');
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_16 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_16, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		NullCheck(L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20;
		L_20 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_17, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// for(int i=0;i<items.Length-1;i++){
		V_3 = 0;
		goto IL_0268;
	}

IL_00b1:
	{
		// string CompanyPhoto=GetDataValue(items[i],"CompanyPhoto:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_21 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_2;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		String_t* L_26;
		L_26 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_21, L_25, _stringLiteral2BC4FE86DCBBC89E960BFF3EDE1A5ADA4EFC2681, /*hidden argument*/NULL);
		V_4 = L_26;
		// string CompanyName = GetDataValue(items[i], "CompanyName:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_27 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		String_t* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		String_t* L_32;
		L_32 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_27, L_31, _stringLiteral26027DEFE902AF1F286824150A726C18EA29D9A5, /*hidden argument*/NULL);
		V_5 = L_32;
		// string Post = GetDataValue(items[i], "Post:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_33 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = V_2;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		String_t* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		String_t* L_38;
		L_38 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_33, L_37, _stringLiteral7F5EF3B88A810ED17930593E9B93C319C754B931, /*hidden argument*/NULL);
		V_6 = L_38;
		// string Package = GetDataValue(items[i], "Package:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_39 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = V_2;
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		String_t* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		String_t* L_44;
		L_44 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_39, L_43, _stringLiteral73A6A7ED5C5A3694B075CA8CA69A81332698700B, /*hidden argument*/NULL);
		V_7 = L_44;
		// string Experience = GetDataValue(items[i], "Experience:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_45 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = V_2;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		String_t* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		String_t* L_50;
		L_50 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_45, L_49, _stringLiteralFE43351E3D064F45C4ABCED162CA5AB863117D88, /*hidden argument*/NULL);
		V_8 = L_50;
		// string Bond = GetDataValue(items[i], "Bond:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_51 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = V_2;
		int32_t L_53 = V_3;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		String_t* L_56;
		L_56 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_51, L_55, _stringLiteral04BB2B79C908AA9F00779CD8A45E22416ABE1E8E, /*hidden argument*/NULL);
		V_9 = L_56;
		// string Location = GetDataValue(items[i], "Location:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_57 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = V_2;
		int32_t L_59 = V_3;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		String_t* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_57);
		String_t* L_62;
		L_62 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_57, L_61, _stringLiteralBFF343FC0FFA83491668F52D4BAE59C345E1C05C, /*hidden argument*/NULL);
		V_10 = L_62;
		// string Role = GetDataValue(items[i], "Role:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_63 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = V_2;
		int32_t L_65 = V_3;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		String_t* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_63);
		String_t* L_68;
		L_68 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_63, L_67, _stringLiteral884284E03605E6B08A271AB4FF7481ED26221934, /*hidden argument*/NULL);
		V_11 = L_68;
		// string IndustyType = GetDataValue(items[i], "IndustyType:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_69 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = V_2;
		int32_t L_71 = V_3;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		String_t* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_69);
		String_t* L_74;
		L_74 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_69, L_73, _stringLiteral73DA0A9C7350CCD00BF824D784BF471386D8A207, /*hidden argument*/NULL);
		V_12 = L_74;
		// string FunctionalArea = GetDataValue(items[i], "FunctionalArea:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_75 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = V_2;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		String_t* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_75);
		String_t* L_80;
		L_80 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_75, L_79, _stringLiteral0C25FAD76378D327D7BBD4B1C3A1F458CD1CD571, /*hidden argument*/NULL);
		V_13 = L_80;
		// string EmploymentType = GetDataValue(items[i], "EmploymentType:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_81 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = V_2;
		int32_t L_83 = V_3;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		String_t* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		String_t* L_86;
		L_86 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_81, L_85, _stringLiteralB932F4795A105A9C25A8B2626832082FE834E55F, /*hidden argument*/NULL);
		V_14 = L_86;
		// string RoleCategory = GetDataValue(items[i], "RoleCategory:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_87 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = V_2;
		int32_t L_89 = V_3;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		String_t* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_87);
		String_t* L_92;
		L_92 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_87, L_91, _stringLiteral0BF4B68B4B4C3969B587B737C674E7867C179AA3, /*hidden argument*/NULL);
		V_15 = L_92;
		// string Education = GetDataValue(items[i], "Education:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_93 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_94 = V_2;
		int32_t L_95 = V_3;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		String_t* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_93);
		String_t* L_98;
		L_98 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_93, L_97, _stringLiteralCE94AAB57C83AA1A6A0EDA30B4D195E0750794F1, /*hidden argument*/NULL);
		V_16 = L_98;
		// string KeySkill = GetDataValue(items[i], "KeySkill:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_99 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = V_2;
		int32_t L_101 = V_3;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		String_t* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_99);
		String_t* L_104;
		L_104 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_99, L_103, _stringLiteralCCCED737DF5F5E32BBC2D3B7CB2104E14A473604, /*hidden argument*/NULL);
		V_17 = L_104;
		// string Responsibility = GetDataValue(items[i], "Responsibility:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_105 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = V_2;
		int32_t L_107 = V_3;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		String_t* L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_105);
		String_t* L_110;
		L_110 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_105, L_109, _stringLiteral2408E546AB809DF90137E84C0FDA19E4CCD0642B, /*hidden argument*/NULL);
		V_18 = L_110;
		// string Knowledge = GetDataValue(items[i], "Knowledge:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_111 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_112 = V_2;
		int32_t L_113 = V_3;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		String_t* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_111);
		String_t* L_116;
		L_116 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_111, L_115, _stringLiteral50F9C30DB776D3327851E245A9FD687574FB96DB, /*hidden argument*/NULL);
		V_19 = L_116;
		// string Benifit = GetDataValue(items[i], "Benifit:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_117 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_118 = V_2;
		int32_t L_119 = V_3;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		String_t* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_117);
		String_t* L_122;
		L_122 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_117, L_121, _stringLiteralABBD34FC4FF77F29B83A925D95378A4B68575021, /*hidden argument*/NULL);
		V_20 = L_122;
		// string AboutCompany = GetDataValue(items[i], "AboutCompany:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_123 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_124 = V_2;
		int32_t L_125 = V_3;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		String_t* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_123);
		String_t* L_128;
		L_128 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_123, L_127, _stringLiteralE784C67A2BB378DEE858C2DFE27C9E227AED30C9, /*hidden argument*/NULL);
		V_21 = L_128;
		// int TotalEmployee = int.Parse(GetDataValue(items[i], "TotalEmployee:"));
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_129 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = V_2;
		int32_t L_131 = V_3;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		String_t* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_129);
		String_t* L_134;
		L_134 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_129, L_133, _stringLiteralB4EF6069890D0760665F15E5FD54DEDF80DA327B, /*hidden argument*/NULL);
		int32_t L_135;
		L_135 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_134, /*hidden argument*/NULL);
		V_22 = L_135;
		// string LastApplyDate = GetDataValue(items[i], "LastApplyDate:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_136 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_137 = V_2;
		int32_t L_138 = V_3;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		String_t* L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_136);
		String_t* L_141;
		L_141 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_136, L_140, _stringLiteral0ACEE724E4A550F5D72D235FF0F6FCAB5A77F1D9, /*hidden argument*/NULL);
		V_23 = L_141;
		// string ApplyLink = GetDataValue(items[i], "ApplyLink:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_142 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_143 = V_2;
		int32_t L_144 = V_3;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		String_t* L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		NullCheck(L_142);
		String_t* L_147;
		L_147 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_142, L_146, _stringLiteral135E638DA52F163A28F9A25566D4A366F2652F79, /*hidden argument*/NULL);
		V_24 = L_147;
		// string Description = GetDataValue(items[i], "Description:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_148 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_149 = V_2;
		int32_t L_150 = V_3;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		String_t* L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_148);
		String_t* L_153;
		L_153 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_148, L_152, _stringLiteralA0A3E947017A4E6B0486C47C768C23BB95D6B8E2, /*hidden argument*/NULL);
		V_25 = L_153;
		// string Ago = GetDataValue(items[i], "Ago:");
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_154 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_155 = V_2;
		int32_t L_156 = V_3;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		String_t* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		NullCheck(L_154);
		String_t* L_159;
		L_159 = JobManager_GetDataValue_mFA9474AFA781491FDE69AA064FC6F7F259584741(L_154, L_158, _stringLiteral986B582D711D96B5EDAFD141FFD72B529F029D85, /*hidden argument*/NULL);
		V_26 = L_159;
		// jobData.Add(new JobDataBean(CompanyPhoto, CompanyName, Post, Package, Experience, Bond, Location, Role, IndustyType, FunctionalArea, EmploymentType
		// , RoleCategory
		// , Education
		// , KeySkill
		// , Responsibility
		// , Knowledge
		// , Benifit
		// , AboutCompany
		// , TotalEmployee
		// , LastApplyDate
		// , ApplyLink
		// , Description
		// , Ago));
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_160 = V_1;
		NullCheck(L_160);
		List_1_t8D7E8F54B3F5A5E17BA15E5FD309CCDA802E887C * L_161 = L_160->get_jobData_4();
		String_t* L_162 = V_4;
		String_t* L_163 = V_5;
		String_t* L_164 = V_6;
		String_t* L_165 = V_7;
		String_t* L_166 = V_8;
		String_t* L_167 = V_9;
		String_t* L_168 = V_10;
		String_t* L_169 = V_11;
		String_t* L_170 = V_12;
		String_t* L_171 = V_13;
		String_t* L_172 = V_14;
		String_t* L_173 = V_15;
		String_t* L_174 = V_16;
		String_t* L_175 = V_17;
		String_t* L_176 = V_18;
		String_t* L_177 = V_19;
		String_t* L_178 = V_20;
		String_t* L_179 = V_21;
		int32_t L_180 = V_22;
		String_t* L_181 = V_23;
		String_t* L_182 = V_24;
		String_t* L_183 = V_25;
		String_t* L_184 = V_26;
		JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294 * L_185 = (JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294 *)il2cpp_codegen_object_new(JobDataBean_t03EBBE991934FFA085D24573200F93EB76555294_il2cpp_TypeInfo_var);
		JobDataBean__ctor_m02B69F9E6BC2D830CF2BB805205C79F89F436F08(L_185, L_162, L_163, L_164, L_165, L_166, L_167, L_168, L_169, L_170, L_171, L_172, L_173, L_174, L_175, L_176, L_177, L_178, L_179, L_180, L_181, L_182, L_183, L_184, /*hidden argument*/NULL);
		NullCheck(L_161);
		List_1_Add_m4400CEB1C172F05FBA3226E8482D8E4B46F5D4EB(L_161, L_185, /*hidden argument*/List_1_Add_m4400CEB1C172F05FBA3226E8482D8E4B46F5D4EB_RuntimeMethod_var);
		// for(int i=0;i<items.Length-1;i++){
		int32_t L_186 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)1));
	}

IL_0268:
	{
		// for(int i=0;i<items.Length-1;i++){
		int32_t L_187 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_188 = V_2;
		NullCheck(L_188);
		if ((((int32_t)L_187) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_188)->max_length))), (int32_t)1)))))
		{
			goto IL_00b1;
		}
	}
	{
		// CreteJobList();
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_189 = V_1;
		NullCheck(L_189);
		JobManager_CreteJobList_mD42ADABFA91F8A89DDF25338A0E8EEC8D24D97F4(L_189, /*hidden argument*/NULL);
	}

IL_0279:
	{
		// }
		return (bool)0;
	}
}
// System.Object JobManager/<GetAllTheJobs>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllTheJobsU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m729A62FD49C4BB7CEB758B1969B3EADDD3453F68 (U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JobManager/<GetAllTheJobs>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllTheJobsU3Ed__21_System_Collections_IEnumerator_Reset_m8F4DEDC04454474B51377D95EF9C73963B1DC857 (U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllTheJobsU3Ed__21_System_Collections_IEnumerator_Reset_m8F4DEDC04454474B51377D95EF9C73963B1DC857_RuntimeMethod_var)));
	}
}
// System.Object JobManager/<GetAllTheJobs>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllTheJobsU3Ed__21_System_Collections_IEnumerator_get_Current_mFFFC0413B7D4DDE9FF79A2446539DFB4961849D7 (U3CGetAllTheJobsU3Ed__21_t0F840AEF5635ED91A1AB17ECFDA2DD924B94B243 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void JobManager/<GetAllTheSkills>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllTheSkillsU3Ed__43__ctor_m68D3DCB9181D609DD5AF88E03B833765DFF396FD (U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void JobManager/<GetAllTheSkills>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllTheSkillsU3Ed__43_System_IDisposable_Dispose_m1B4B941B2D53C62573C6022CA58395D32FCBE437 (U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean JobManager/<GetAllTheSkills>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllTheSkillsU3Ed__43_MoveNext_mAB569E53F150436C912B6CC589AC07DC1FA47353 (U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52549EC33402874F91BE6513CAAB2F51A0973711);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63AF33DFD791785F3213FA822F77D47671AC3335);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD90766367386354624B23E748650672804353B83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * V_1 = NULL;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWWForm form1 = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_4 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		// form1.AddField("connection_id", "Hello");
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_5 = V_2;
		NullCheck(L_5);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_5, _stringLiteralD90766367386354624B23E748650672804353B83, _stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9, /*hidden argument*/NULL);
		// WWW www = new WWW(saveload.LaravelServerLink + saveload.SkillList, form1);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_6 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_LaravelServerLink_9();
		String_t* L_7 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_SkillList_11();
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, L_7, /*hidden argument*/NULL);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_9 = V_2;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_10 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6(L_10, L_8, L_9, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_10);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_11 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0064:
	{
		__this->set_U3CU3E1__state_0((-1));
		// print("SkillData:" + www.text);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_12 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral52549EC33402874F91BE6513CAAB2F51A0973711, L_13, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_14, /*hidden argument*/NULL);
		// if (www.error == null)
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_15 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00a5;
		}
	}
	{
		// processjsonallskillsData(www.text);
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_17 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_18 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		JobManager_processjsonallskillsData_mECEBDD7461C1356D9E9B621FD2D8D888267B3101(L_17, L_19, /*hidden argument*/NULL);
		goto IL_00af;
	}

IL_00a5:
	{
		// print("something went wrong");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral63AF33DFD791785F3213FA822F77D47671AC3335, /*hidden argument*/NULL);
	}

IL_00af:
	{
		// }
		return (bool)0;
	}
}
// System.Object JobManager/<GetAllTheSkills>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllTheSkillsU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m920C48120E39FBC71B41E7670E60D6B326618FAC (U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JobManager/<GetAllTheSkills>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllTheSkillsU3Ed__43_System_Collections_IEnumerator_Reset_mE3D292B97772CABE827CCEBB2D229FCBD1BE6949 (U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllTheSkillsU3Ed__43_System_Collections_IEnumerator_Reset_mE3D292B97772CABE827CCEBB2D229FCBD1BE6949_RuntimeMethod_var)));
	}
}
// System.Object JobManager/<GetAllTheSkills>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllTheSkillsU3Ed__43_System_Collections_IEnumerator_get_Current_m3D1BD02E4B7D31ABC75889C3A623D818689675DB (U3CGetAllTheSkillsU3Ed__43_tBB87820C8FA3917F9426367B8CE939273A2C4911 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void JobManager/<GetNewAllTheJobs>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNewAllTheJobsU3Ed__19__ctor_m7FFBD4461A3E5A3DC8295987795DCDCBBB2CDCC9 (U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void JobManager/<GetNewAllTheJobs>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNewAllTheJobsU3Ed__19_System_IDisposable_Dispose_mDC7963B9A1EA7787120A16DF2178D3EA581E4A49 (U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean JobManager/<GetNewAllTheJobs>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetNewAllTheJobsU3Ed__19_MoveNext_mCB8135EC8401BD0284B8236398C121D0004FE86D (U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21B885F6048303847B53574C707B2C876146C442);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F4667F64A3AD6EE792010100E4F3D76A1027784);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral329F65FFA2A66A359FF1F566C8DC34F497DE13C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63AF33DFD791785F3213FA822F77D47671AC3335);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F8D6DA2F6B414D44649F54CEBA19901537A012C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB7DCDDC1FBD1E2C478282A4BE343AFD538C5A34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * V_1 = NULL;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// print("Skills:"+madedskills);
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_madedskills_32();
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9F8D6DA2F6B414D44649F54CEBA19901537A012C, L_5, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_6, /*hidden argument*/NULL);
		// WWWForm form1 = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_7 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_7, /*hidden argument*/NULL);
		V_2 = L_7;
		// form1.AddField("experience", filteredexperience);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_8 = V_2;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_filteredexperience_33();
		NullCheck(L_8);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_8, _stringLiteral21B885F6048303847B53574C707B2C876146C442, L_10, /*hidden argument*/NULL);
		// form1.AddField("keyskills", madedskills);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_11 = V_2;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_madedskills_32();
		NullCheck(L_11);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_11, _stringLiteral2F4667F64A3AD6EE792010100E4F3D76A1027784, L_13, /*hidden argument*/NULL);
		// form1.AddField("madedlocation", madedlocation);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_14 = V_2;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_madedlocation_34();
		NullCheck(L_14);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_14, _stringLiteralCB7DCDDC1FBD1E2C478282A4BE343AFD538C5A34, L_16, /*hidden argument*/NULL);
		// WWW www = new WWW(saveload.LaravelServerLink + saveload.JobDetails, form1);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_17 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_LaravelServerLink_9();
		String_t* L_18 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_JobDetails_10();
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, L_18, /*hidden argument*/NULL);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_20 = V_2;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_21 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6(L_21, L_19, L_20, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_21);
		// ShowLoadingScreen();
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_22 = V_1;
		NullCheck(L_22);
		JobManager_ShowLoadingScreen_m604CBD7CD41D8836FA6BA24CF9BA953240369112(L_22, /*hidden argument*/NULL);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_23 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a5:
	{
		__this->set_U3CU3E1__state_0((-1));
		// HideLoadingScreen();
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_24 = V_1;
		NullCheck(L_24);
		JobManager_HideLoadingScreen_m3E5070F01A56BE4CF0D317147ED86267176AACA5(L_24, /*hidden argument*/NULL);
		// print("JobData:" + www.text);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_25 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_25);
		String_t* L_26;
		L_26 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_25, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral329F65FFA2A66A359FF1F566C8DC34F497DE13C0, L_26, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_27, /*hidden argument*/NULL);
		// if (www.error == null)
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_28 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_28);
		String_t* L_29;
		L_29 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00ec;
		}
	}
	{
		// processjsonjobData(www.text);
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_30 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_31 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_31);
		String_t* L_32;
		L_32 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		JobManager_processjsonjobData_mBBC12EC58AD8F49DEC4FBFC672744A130BA7C784(L_30, L_32, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00ec:
	{
		// print("something went wrong");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral63AF33DFD791785F3213FA822F77D47671AC3335, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// }
		return (bool)0;
	}
}
// System.Object JobManager/<GetNewAllTheJobs>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetNewAllTheJobsU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD8A86F5135689BE6808C17057C9F2C51043CC24A (U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JobManager/<GetNewAllTheJobs>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNewAllTheJobsU3Ed__19_System_Collections_IEnumerator_Reset_m6CE158B8BDE062CAF92DDA00ACFDB99AD0007DE4 (U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetNewAllTheJobsU3Ed__19_System_Collections_IEnumerator_Reset_m6CE158B8BDE062CAF92DDA00ACFDB99AD0007DE4_RuntimeMethod_var)));
	}
}
// System.Object JobManager/<GetNewAllTheJobs>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetNewAllTheJobsU3Ed__19_System_Collections_IEnumerator_get_Current_mEC6CBE86BEB4F9FAAA6DE74864D9D82BA34DB32D (U3CGetNewAllTheJobsU3Ed__19_t0C1D1387A6E6EEE21E04AD4363E1BA3DA0154893 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void JobManager/<PlaceImageToObject>d__76::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaceImageToObjectU3Ed__76__ctor_mD840B0D70FA05AEF43306CBFEFA91A08ECA9C593 (U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void JobManager/<PlaceImageToObject>d__76::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaceImageToObjectU3Ed__76_System_IDisposable_Dispose_mD0224528D2FCAD912D4DC293A8219158F17BB698 (U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean JobManager/<PlaceImageToObject>d__76::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlaceImageToObjectU3Ed__76_MoveNext_m58E9861DDE08EC59E567F02A0B0C89D757722401 (U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// go.sprite = null;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_go_2();
		NullCheck(L_3);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL, /*hidden argument*/NULL);
		// WWW www = new WWW(URL);
		String_t* L_4 = __this->get_URL_3();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_5 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_6 = V_1;
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object JobManager/<PlaceImageToObject>d__76::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlaceImageToObjectU3Ed__76_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF82D132C9A0FD3C32985CAA51DCE22E235C4DA3C (U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JobManager/<PlaceImageToObject>d__76::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaceImageToObjectU3Ed__76_System_Collections_IEnumerator_Reset_m4682AC159D844D6CE287007E98B66EAEDD044F86 (U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlaceImageToObjectU3Ed__76_System_Collections_IEnumerator_Reset_m4682AC159D844D6CE287007E98B66EAEDD044F86_RuntimeMethod_var)));
	}
}
// System.Object JobManager/<PlaceImageToObject>d__76::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlaceImageToObjectU3Ed__76_System_Collections_IEnumerator_get_Current_m909CFBC7EE43D97C14ADB336DD32B9233AC8975B (U3CPlaceImageToObjectU3Ed__76_tD6EE0768B5B515C6A9E4A607684A024572F21A5D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void JobManager/<RefreshMyJob>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshMyJobU3Ed__8__ctor_m502465AADF9E9E22BA4F911AD3EF532A07023119 (U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void JobManager/<RefreshMyJob>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshMyJobU3Ed__8_System_IDisposable_Dispose_m2098ABFB5ED6DC124D06B5976C011D17474BED70 (U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean JobManager/<RefreshMyJob>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRefreshMyJobU3Ed__8_MoveNext_m7B533FB7BE143699C57BE13097C5B17592A5C55A (U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00C1930F7BDCAA8D715F36C433B90455976246B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD73CE24C609A9FED129FCEFA6E973E9435656B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8FD467662406311C1881BB9D717E2F32F862DCF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JobManager_t89BD3393575335C464C70D6B561A32404520E022 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int con = 1;
		__this->set_U3CconU3E5__2_3(1);
		goto IL_0087;
	}

IL_0027:
	{
		// yield return new WaitForSeconds(refreshFrequency);
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_refreshFrequency_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
		// print("revolve");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralF8FD467662406311C1881BB9D717E2F32F862DCF, /*hidden argument*/NULL);
		// if(isJobListOpen == 0)
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_isJobListOpen_10();
		if (L_8)
		{
			goto IL_006d;
		}
	}
	{
		// con = 0;
		__this->set_U3CconU3E5__2_3(0);
		// print("zero");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral00C1930F7BDCAA8D715F36C433B90455976246B1, /*hidden argument*/NULL);
		// }
		goto IL_0087;
	}

IL_006d:
	{
		// else if (isJobListOpen == -1)
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_isJobListOpen_10();
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0087;
		}
	}
	{
		// con = -1;
		__this->set_U3CconU3E5__2_3((-1));
		// print("sad");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralBD73CE24C609A9FED129FCEFA6E973E9435656B6, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// while(con>0)
		int32_t L_11 = __this->get_U3CconU3E5__2_3();
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// if(con==0)
		int32_t L_12 = __this->get_U3CconU3E5__2_3();
		if (L_12)
		{
			goto IL_009e;
		}
	}
	{
		// OnJobListButtonPressed();
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_13 = V_1;
		NullCheck(L_13);
		JobManager_OnJobListButtonPressed_m6AD212F120A3559312676011BCD2FD866C6EA63E(L_13, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// isJobListPageOn = false;
		JobManager_t89BD3393575335C464C70D6B561A32404520E022 * L_14 = V_1;
		NullCheck(L_14);
		L_14->set_isJobListPageOn_9((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object JobManager/<RefreshMyJob>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRefreshMyJobU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m06BEA09F27132CCA3AF06ACD5EBDC7A943390645 (U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JobManager/<RefreshMyJob>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshMyJobU3Ed__8_System_Collections_IEnumerator_Reset_mD53D021AA685A665A5AB05F9F669C746496A880B (U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRefreshMyJobU3Ed__8_System_Collections_IEnumerator_Reset_mD53D021AA685A665A5AB05F9F669C746496A880B_RuntimeMethod_var)));
	}
}
// System.Object JobManager/<RefreshMyJob>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRefreshMyJobU3Ed__8_System_Collections_IEnumerator_get_Current_mEF547ABB7296A6BE04BD909F5432B236ECC87FFB (U3CRefreshMyJobU3Ed__8_t33D50685414962088AC3E209F37AF455E2116E98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForSometimeThenShowRestartButtonU3Ed__5__ctor_m4340893B56B53EF5A8616778BCBED69304C5CCE2 (U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForSometimeThenShowRestartButtonU3Ed__5_System_IDisposable_Dispose_m8CC5834782E80984BE9EF66F655E76056489D2A0 (U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckForSometimeThenShowRestartButtonU3Ed__5_MoveNext_m1D8868AA72AAF8FDFD2CC9D72B96C31C841D88B6 (U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_004e;
	}

IL_0020:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// timer--;
		LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * L_5 = V_1;
		LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_timer_5();
		NullCheck(L_5);
		L_5->set_timer_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
	}

IL_004e:
	{
		// while(timer<0){
		LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_timer_5();
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// if(isEnable==true);
		LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->get_isEnable_4();
		// RestartButton.SetActive(true);
		LoadingScreenManager_t1DAAA1AEFA496F5287E4A4B1302F27450225D7D7 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_RestartButton_6();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckForSometimeThenShowRestartButtonU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8B2221CA5972DD8C5EA97A1C2AB4839F4426F8B (U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForSometimeThenShowRestartButtonU3Ed__5_System_Collections_IEnumerator_Reset_m0B83589EAE5B70A68124AF5020DB3608416D1272 (U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckForSometimeThenShowRestartButtonU3Ed__5_System_Collections_IEnumerator_Reset_m0B83589EAE5B70A68124AF5020DB3608416D1272_RuntimeMethod_var)));
	}
}
// System.Object LoadingScreenManager/<CheckForSometimeThenShowRestartButton>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckForSometimeThenShowRestartButtonU3Ed__5_System_Collections_IEnumerator_get_Current_m0926CA62466D1BD1A11F364F7643255F465A2914 (U3CCheckForSometimeThenShowRestartButtonU3Ed__5_t83D0743CAC52C76EB7F8FA7DC71DE3DAE996FBBD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LocalTestManager/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m799E0CB75B771B5B27846C9DA953A6912CAF496B (U3CU3Ec__DisplayClass32_0_t69314CA188D3C9982D9015642E2E5EDD66ED4AB4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LocalTestManager/<>c__DisplayClass32_0::<InitializeAllScrollViewData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3CInitializeAllScrollViewDataU3Eb__0_mE08F8624D27B12EDBB50F54727D06C4D3E51A9BD (U3CU3Ec__DisplayClass32_0_t69314CA188D3C9982D9015642E2E5EDD66ED4AB4 * __this, const RuntimeMethod* method)
{
	{
		// go.transform.Find("Course").GetComponent<Button>().onClick.AddListener(() => OnCourseSelectedUpdateDatato1(num));
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_num_0();
		NullCheck(L_0);
		LocalTestManager_OnCourseSelectedUpdateDatato1_m47CD1CE435A515FBFA40C619E6DD12EF1A05CCFE(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void LocalTestManager/<>c__DisplayClass46_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0__ctor_mBF1A39DEC94402E6FA9C7E552059E8414A1315B3 (U3CU3Ec__DisplayClass46_0_t6BE475F33EC3E6A7DEAC0159B740977F79686524 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LocalTestManager/<>c__DisplayClass46_0::<InitializeAllScrollSubjectViewData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0_U3CInitializeAllScrollSubjectViewDataU3Eb__0_m683EE4F6E8E0742F6D11B5DD6CC6FC737C231D6F (U3CU3Ec__DisplayClass46_0_t6BE475F33EC3E6A7DEAC0159B740977F79686524 * __this, const RuntimeMethod* method)
{
	{
		// go.transform.Find("Course").GetComponent<Button>().onClick.AddListener(() => OnSubjectSelectedUpdateDatato1(num));
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_num_0();
		NullCheck(L_0);
		LocalTestManager_OnSubjectSelectedUpdateDatato1_m8F42EE0F8F666B1E22BA9AB51B3DA11081E9D800(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void LocalTestManager/<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_mD2F6D584560AB3B2A1CEF3B0A9B3184029AD80A6 (U3CU3Ec__DisplayClass60_0_tCD98008967B62CAC2EB86FAF37E8B553CF4DFBE2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LocalTestManager/<>c__DisplayClass60_0::<InitializeAllScrollCompanyViewData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0_U3CInitializeAllScrollCompanyViewDataU3Eb__0_m792E2ED0E5EA31F8936168038F796C2D5BDBF5DE (U3CU3Ec__DisplayClass60_0_tCD98008967B62CAC2EB86FAF37E8B553CF4DFBE2 * __this, const RuntimeMethod* method)
{
	{
		// go.transform.Find("Course").GetComponent<Button>().onClick.AddListener(() => OnCompanySelectedUpdateDatato1(num));
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_num_0();
		NullCheck(L_0);
		LocalTestManager_OnCompanySelectedUpdateDatato1_m3BECE876AEA1198147E13DE566D4D099D9F33E53(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86__ctor_mBB2A1FB9D074BAEC778CCBC42A8B32E32145BEB1 (U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_System_IDisposable_Dispose_m93DD7D2CA1CFFD44BFE9DEB00603D6612B4D0F4E (U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_MoveNext_m6F94364D13CE5BF52524251485DC3ADF8A650895 (U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTestContoller_t937C672BED623740089E5DA4F104D6512B230EE1_m78EA412A36A106CF89E7E24E7FEFE2395E81C980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF75A89A51C6347BB081E987C2DCA5529690F3C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E403C36178DCB3EA861D044065F99E595D86EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD433298EC09A08A5480542EC27487B2B844B8CBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * V_1 = NULL;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartTestButton.SetActive(false);
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_StartTestButton_52();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// print(encodeSubject);
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_encodeSubject_55();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_7, /*hidden argument*/NULL);
		// print(encodeCompany);
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_encodeCompany_56();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_9, /*hidden argument*/NULL);
		// print(timerInputed);
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_timerInputed_14();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_11, /*hidden argument*/NULL);
		// WWWForm form1 = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_12 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_12, /*hidden argument*/NULL);
		V_2 = L_12;
		// form1.AddField("Subject", encodeSubject);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_13 = V_2;
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_encodeSubject_55();
		NullCheck(L_13);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_13, _stringLiteralD433298EC09A08A5480542EC27487B2B844B8CBE, L_15, /*hidden argument*/NULL);
		// form1.AddField("Company", encodeCompany);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_16 = V_2;
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_encodeCompany_56();
		NullCheck(L_16);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_16, _stringLiteralC1E403C36178DCB3EA861D044065F99E595D86EF, L_18, /*hidden argument*/NULL);
		// form1.AddField("Ques", totalQuestionFilter);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_19 = V_2;
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_totalQuestionFilter_54();
		NullCheck(L_19);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_19, _stringLiteralBF75A89A51C6347BB081E987C2DCA5529690F3C1, L_21, /*hidden argument*/NULL);
		// WWW www = new WWW(saveload.ServerLink + GetQuestion, form1);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_22 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = L_23->get_GetQuestion_5();
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, L_24, /*hidden argument*/NULL);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_26 = V_2;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_27 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6(L_27, L_25, L_26, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_27);
		// LoadingScreen.SetActive(true);
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_28 = V_1;
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_28->get_LoadingScreen_4();
		NullCheck(L_29);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)1, /*hidden argument*/NULL);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_30 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_30);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// print(www.text);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_31 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_31);
		String_t* L_32;
		L_32 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_31, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_32, /*hidden argument*/NULL);
		// if(www.text!="")
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_33 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_33);
		String_t* L_34;
		L_34 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_33, /*hidden argument*/NULL);
		bool L_35;
		L_35 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_34, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_014d;
		}
	}
	{
		// LoadingScreen.SetActive(false);
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_36 = V_1;
		NullCheck(L_36);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_36->get_LoadingScreen_4();
		NullCheck(L_37);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_37, (bool)0, /*hidden argument*/NULL);
		// revisionTestQuestions = www.text.Split(';');
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_38 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_39 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_39);
		String_t* L_40;
		L_40 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_39, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_41 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		NullCheck(L_40);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43;
		L_43 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_40, L_42, /*hidden argument*/NULL);
		NullCheck(L_38);
		L_38->set_revisionTestQuestions_6(L_43);
		// gameObject.GetComponent<TestContoller>().SetMyDataTest(revisionTestQuestions,canSkip,isNoTimer,timerInputed);
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_44 = V_1;
		NullCheck(L_44);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_46;
		L_46 = GameObject_GetComponent_TisTestContoller_t937C672BED623740089E5DA4F104D6512B230EE1_m78EA412A36A106CF89E7E24E7FEFE2395E81C980(L_45, /*hidden argument*/GameObject_GetComponent_TisTestContoller_t937C672BED623740089E5DA4F104D6512B230EE1_m78EA412A36A106CF89E7E24E7FEFE2395E81C980_RuntimeMethod_var);
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_47 = V_1;
		NullCheck(L_47);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_47->get_revisionTestQuestions_6();
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_49 = V_1;
		NullCheck(L_49);
		bool L_50 = L_49->get_canSkip_15();
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_51 = V_1;
		NullCheck(L_51);
		bool L_52 = L_51->get_isNoTimer_13();
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_53 = V_1;
		NullCheck(L_53);
		String_t* L_54 = L_53->get_timerInputed_14();
		NullCheck(L_46);
		TestContoller_SetMyDataTest_m69AA1E8FD7B820899C94607A1F198AFD7819C4A2(L_46, L_48, L_50, L_52, L_54, /*hidden argument*/NULL);
		// SetDetails();
		LocalTestManager_tEFDF834F0771E864B893D9D067A1084828F218EA * L_55 = V_1;
		NullCheck(L_55);
		LocalTestManager_SetDetails_m784503B6F0200EC8F2B4272011FCAE9BDF764845(L_55, /*hidden argument*/NULL);
	}

IL_014d:
	{
		// }
		return (bool)0;
	}
}
// System.Object LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m899C9981B4D26BC3A5EA653903838D124383B594 (U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_System_Collections_IEnumerator_Reset_m2497C1574EB8E669C42B571B78039296C46F8AA9 (U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_System_Collections_IEnumerator_Reset_m2497C1574EB8E669C42B571B78039296C46F8AA9_RuntimeMethod_var)));
	}
}
// System.Object LocalTestManager/<GetCourseAndItsSubjectWithTotalQuestions>d__86::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_System_Collections_IEnumerator_get_Current_m476B2CB4FFA66FACF21DBAE0A5FF877254427EA3 (U3CGetCourseAndItsSubjectWithTotalQuestionsU3Ed__86_t87F9E70C0D861E240B8523AD96F540404E4722F7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void MainManager/<CreateAccountToServer>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAccountToServerU3Ed__12__ctor_m110BA51BBAEDF4C088AB53E8026F769252CFA5E5 (U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MainManager/<CreateAccountToServer>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAccountToServerU3Ed__12_System_IDisposable_Dispose_m180C39017809EA367E579018AA42C519F65E7B5A (U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MainManager/<CreateAccountToServer>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateAccountToServerU3Ed__12_MoveNext_m9C61964F0E5509EFD4F93655E46511F7E2CB1845 (U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA3ACC59CDD38DB07A306FE6E82DE222538AEE7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * V_1 = NULL;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// saveload.playerName = "Player" + UnityEngine.Random.Range(1111, 99999);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)1111), ((int32_t)99999), /*hidden argument*/NULL);
		V_3 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->set_playerName_23(L_6);
		// saveload.Save();
		saveload_Save_mF289F44A0E648A1E31B96489C770756705779560(/*hidden argument*/NULL);
		// WWWForm form1 = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_7 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_7, /*hidden argument*/NULL);
		V_2 = L_7;
		// form1.AddField("name", saveload.playerName);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_8 = V_2;
		String_t* L_9 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_playerName_23();
		NullCheck(L_8);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_9, /*hidden argument*/NULL);
		// WWW www = new WWW(saveload.ServerLink + saveload.CreateAccount, form1);
		String_t* L_10 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		String_t* L_11 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_CreateAccount_5();
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, L_11, /*hidden argument*/NULL);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_13 = V_2;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_14 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6(L_14, L_12, L_13, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_14);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_15 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.text != "" && www.text!=" " && !www.text.Contains("<"))
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_16 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00fb;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_19 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_19);
		String_t* L_20;
		L_20 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_20, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00fb;
		}
	}
	{
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_22 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_22);
		String_t* L_23;
		L_23 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_24;
		L_24 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_23, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00fb;
		}
	}
	{
		// string ane = GetDataValue(www.text,"Created:");
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_25 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_26 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_26);
		String_t* L_27;
		L_27 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		String_t* L_28;
		L_28 = MainManager_GetDataValue_m06E87267D4E44B99833B5B574CFAC9626D53945B(L_25, L_27, _stringLiteralEA3ACC59CDD38DB07A306FE6E82DE222538AEE7C, /*hidden argument*/NULL);
		// saveload.accountID = ane;
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->set_accountID_22(L_28);
		// saveload.Save();
		saveload_Save_mF289F44A0E648A1E31B96489C770756705779560(/*hidden argument*/NULL);
	}

IL_00fb:
	{
		// }
		return (bool)0;
	}
}
// System.Object MainManager/<CreateAccountToServer>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateAccountToServerU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m978E9C2ADD0D88ECFF7CCCE09B0F978271EBECD6 (U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MainManager/<CreateAccountToServer>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAccountToServerU3Ed__12_System_Collections_IEnumerator_Reset_mC02653AE96BF5EAC06B7618135FA35B80D2B3B35 (U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateAccountToServerU3Ed__12_System_Collections_IEnumerator_Reset_mC02653AE96BF5EAC06B7618135FA35B80D2B3B35_RuntimeMethod_var)));
	}
}
// System.Object MainManager/<CreateAccountToServer>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateAccountToServerU3Ed__12_System_Collections_IEnumerator_get_Current_m61A23E1214D22F510E22E6E5030B325C8E2DD364 (U3CCreateAccountToServerU3Ed__12_t585D927E9EDA0F934EF5D52DBCA2E03D6D84EE02 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void MainManager/<GetAdsFreqValue>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAdsFreqValueU3Ed__22__ctor_m9A426A3E6E821081463ECC6F5BF772AC9A1A73AD (U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MainManager/<GetAdsFreqValue>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAdsFreqValueU3Ed__22_System_IDisposable_Dispose_mD3F351B89A0CD7B25DB1938EA0B6E4F88EA1287A (U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MainManager/<GetAdsFreqValue>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAdsFreqValueU3Ed__22_MoveNext_m094DEAACC71EE61E45C18B6751C67831971A6B73 (U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// defaultValue=500;
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_defaultValue_10(((int32_t)500));
		// WWW www = new WWW(saveload.ServerLink + saveload.AdsFreq);
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_5 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		String_t* L_6 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_AdsFreq_8();
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_6, /*hidden argument*/NULL);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_8 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_8);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_9 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0058:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(www.text!="")
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_10 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b4;
		}
	}
	{
		// if(!www.text.Contains("<"))
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_13 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_14, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00a8;
		}
	}
	{
		// defaultValue=int.Parse(www.text.ToString());
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_16 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_17 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		int32_t L_20;
		L_20 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_defaultValue_10(L_20);
	}

IL_00a8:
	{
		// tempdefaultValue=defaultValue;
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_21 = V_1;
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_defaultValue_10();
		NullCheck(L_21);
		L_21->set_tempdefaultValue_11(L_23);
	}

IL_00b4:
	{
		// }
		return (bool)0;
	}
}
// System.Object MainManager/<GetAdsFreqValue>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAdsFreqValueU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF91CC86FDD6C930C9AF9225354E2F562A28F0D99 (U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MainManager/<GetAdsFreqValue>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAdsFreqValueU3Ed__22_System_Collections_IEnumerator_Reset_m30083B6AD1F5E3C14FDB19FC0E72DF170D469FB5 (U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAdsFreqValueU3Ed__22_System_Collections_IEnumerator_Reset_m30083B6AD1F5E3C14FDB19FC0E72DF170D469FB5_RuntimeMethod_var)));
	}
}
// System.Object MainManager/<GetAdsFreqValue>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAdsFreqValueU3Ed__22_System_Collections_IEnumerator_get_Current_mF933B9D74F19D0FD7D4AFF0EB9B5A5D3B7277F66 (U3CGetAdsFreqValueU3Ed__22_t35E0A0EE18DF3268CE07B01BB6848442B28972F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void MainManager/<IncreaseTimePlayed>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseTimePlayedU3Ed__15__ctor_m50CEF45A7FF9767C19D6458F708716453AAEE0BB (U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MainManager/<IncreaseTimePlayed>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseTimePlayedU3Ed__15_System_IDisposable_Dispose_mF8B1C78709074EE84B7FA1B457B25F40C9AAEBBA (U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MainManager/<IncreaseTimePlayed>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIncreaseTimePlayedU3Ed__15_MoveNext_m9FA130CACF1E093972584C1FD7223E6CF8362072 (U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(15);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (15.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// saveload.totalTime += 15;
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		int32_t L_5 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_totalTime_12();
		((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->set_totalTime_12(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)15))));
		// saveload.Save();
		saveload_Save_mF289F44A0E648A1E31B96489C770756705779560(/*hidden argument*/NULL);
		// CheckTimerIfHaveThenShowAds();
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_6 = V_1;
		NullCheck(L_6);
		MainManager_CheckTimerIfHaveThenShowAds_m8E509D66E49AA3283464E226D33E063CE78B7F9C(L_6, /*hidden argument*/NULL);
		// if (saveload.accountID != " ")
		String_t* L_7 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_accountID_22();
		bool L_8;
		L_8 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		// UpdateStats();
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_9 = V_1;
		NullCheck(L_9);
		MainManager_UpdateStats_mACFC658DBD8CF75841448FFADCA938EC9FA12DA4(L_9, /*hidden argument*/NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object MainManager/<IncreaseTimePlayed>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIncreaseTimePlayedU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB60210FD0DE0B8551758AF882D1BB9462AF8E1B7 (U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MainManager/<IncreaseTimePlayed>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseTimePlayedU3Ed__15_System_Collections_IEnumerator_Reset_m8605349FCCA5D1804F74C3EC35D599A4AD0E55F8 (U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIncreaseTimePlayedU3Ed__15_System_Collections_IEnumerator_Reset_m8605349FCCA5D1804F74C3EC35D599A4AD0E55F8_RuntimeMethod_var)));
	}
}
// System.Object MainManager/<IncreaseTimePlayed>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIncreaseTimePlayedU3Ed__15_System_Collections_IEnumerator_get_Current_mE12B16AF02274BB5878F8485DBC5E1A5FF6993FF (U3CIncreaseTimePlayedU3Ed__15_t0344D9610EFC4AB60C06E45CF8229D4305305560 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void MainManager/<UpdateRepeatToServer>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRepeatToServerU3Ed__14__ctor_m88DE0D3FD38464DA26306657CE313BE6127DE408 (U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MainManager/<UpdateRepeatToServer>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRepeatToServerU3Ed__14_System_IDisposable_Dispose_mA3EE5A96D538517A9280C166BFC371EA7A680771 (U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MainManager/<UpdateRepeatToServer>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateRepeatToServerU3Ed__14_MoveNext_m48B0DC99C9CB4A613BCF0E5B13BE5135CE2D2CD6 (U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22D048524F458D89CC8D755A4F9F030522F8010E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_1 = NULL;
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWWForm form1 = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_3 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		// form1.AddField("id", saveload.accountID);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_5 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_accountID_22();
		NullCheck(L_4);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_4, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, L_5, /*hidden argument*/NULL);
		// form1.AddField("repeat", saveload.repeatUser);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_6 = V_1;
		int32_t L_7 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_repeatUser_17();
		NullCheck(L_6);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_6, _stringLiteral22D048524F458D89CC8D755A4F9F030522F8010E, L_7, /*hidden argument*/NULL);
		// WWW www = new WWW(saveload.ServerLink + saveload.UpdateRepeatUser, form1);
		String_t* L_8 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		String_t* L_9 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_UpdateRepeatUser_6();
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, L_9, /*hidden argument*/NULL);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_11 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_12 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6(L_12, L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_13 = V_2;
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0063:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MainManager/<UpdateRepeatToServer>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateRepeatToServerU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m610037760973F6989FE71263B81D84295D8A2E3E (U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MainManager/<UpdateRepeatToServer>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRepeatToServerU3Ed__14_System_Collections_IEnumerator_Reset_m753B8003CE6A454BE63E169FAA173CE2B2C985E7 (U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateRepeatToServerU3Ed__14_System_Collections_IEnumerator_Reset_m753B8003CE6A454BE63E169FAA173CE2B2C985E7_RuntimeMethod_var)));
	}
}
// System.Object MainManager/<UpdateRepeatToServer>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateRepeatToServerU3Ed__14_System_Collections_IEnumerator_get_Current_m1A8E3004960F29355B2825A89CDE3FE94FA5B312 (U3CUpdateRepeatToServerU3Ed__14_t37F98F569118BA9CB08D8CDDEA66727B49A82C9F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void MainManager/<UpdateStatsServer>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateStatsServerU3Ed__17__ctor_m139EB605A2729556138404B9E565648254E6D3B1 (U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MainManager/<UpdateStatsServer>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateStatsServerU3Ed__17_System_IDisposable_Dispose_mEC78E67EB016BB5E041DE08A87696C0D2FD756D3 (U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MainManager/<UpdateStatsServer>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateStatsServerU3Ed__17_MoveNext_m074372ED5494C30433D9605CC0EBE37B93725E76 (U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21E11D6E5A821EE8A67FB671F552FB4B14259784);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AE45FFE2BBB90A90DA7494CC34F45AA0DFCD5D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30ADF4D36B6CCB9EFC4F08C7D12FCB95829AD91A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4D640CF9D59A4F71FD24C9CD2278A4D71D503E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6C7257B1F9AA5918E1B6EB477D23DC7634170F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD96A978CB229C4E4AEA6473FA5816684CB105B90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD2EF77FA61C59FEF53C32BF28B455CE865089CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_1 = NULL;
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00d6;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWWForm form1 = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_3 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		// form1.AddField("id", saveload.accountID);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var);
		String_t* L_5 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_accountID_22();
		NullCheck(L_4);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_4, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, L_5, /*hidden argument*/NULL);
		// form1.AddField("timegiven", saveload.totalTime);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_6 = V_1;
		int32_t L_7 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_totalTime_12();
		NullCheck(L_6);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_6, _stringLiteralFD2EF77FA61C59FEF53C32BF28B455CE865089CB, L_7, /*hidden argument*/NULL);
		// form1.AddField("correct", saveload.correct);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_8 = V_1;
		int32_t L_9 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_correct_13();
		NullCheck(L_8);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_8, _stringLiteral2AE45FFE2BBB90A90DA7494CC34F45AA0DFCD5D0, L_9, /*hidden argument*/NULL);
		// form1.AddField("wrong", saveload.wrong);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_10 = V_1;
		int32_t L_11 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_wrong_14();
		NullCheck(L_10);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_10, _stringLiteral30ADF4D36B6CCB9EFC4F08C7D12FCB95829AD91A, L_11, /*hidden argument*/NULL);
		// form1.AddField("revision", saveload.revision);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_12 = V_1;
		int32_t L_13 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_revision_15();
		NullCheck(L_12);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_12, _stringLiteralD96A978CB229C4E4AEA6473FA5816684CB105B90, L_13, /*hidden argument*/NULL);
		// form1.AddField("ads", saveload.ads);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_14 = V_1;
		int32_t L_15 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ads_16();
		NullCheck(L_14);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_14, _stringLiteral21E11D6E5A821EE8A67FB671F552FB4B14259784, L_15, /*hidden argument*/NULL);
		// form1.AddField("skills", saveload.allSkills);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_16 = V_1;
		String_t* L_17 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_allSkills_18();
		NullCheck(L_16);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_16, _stringLiteralB6C7257B1F9AA5918E1B6EB477D23DC7634170F7, L_17, /*hidden argument*/NULL);
		// form1.AddField("location", saveload.selectedLocations);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_18 = V_1;
		String_t* L_19 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_selectedLocations_20();
		NullCheck(L_18);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_18, _stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD, L_19, /*hidden argument*/NULL);
		// form1.AddField("apply", saveload.applyCount);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_20 = V_1;
		int32_t L_21 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_applyCount_21();
		NullCheck(L_20);
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_20, _stringLiteral5A4D640CF9D59A4F71FD24C9CD2278A4D71D503E, L_21, /*hidden argument*/NULL);
		// WWW www = new WWW(saveload.ServerLink + saveload.UpdateStats, form1);
		String_t* L_22 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_ServerLink_4();
		String_t* L_23 = ((saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_StaticFields*)il2cpp_codegen_static_fields_for(saveload_tC9A0DA105210457A370AD1C9D6CF17EB5AC3435C_il2cpp_TypeInfo_var))->get_UpdateStats_7();
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, L_23, /*hidden argument*/NULL);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_25 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_26 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_m2F58987EB716A6D1B9B2425464E5C42FB6CF7DE6(L_26, L_24, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_27 = V_2;
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MainManager/<UpdateStatsServer>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateStatsServerU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC9848AEE697381F78CA9DCE1107E9EF4460E5542 (U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MainManager/<UpdateStatsServer>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateStatsServerU3Ed__17_System_Collections_IEnumerator_Reset_mFE058FC2ADACC91DF7A8D22F0B8E53B3EE682865 (U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateStatsServerU3Ed__17_System_Collections_IEnumerator_Reset_mFE058FC2ADACC91DF7A8D22F0B8E53B3EE682865_RuntimeMethod_var)));
	}
}
// System.Object MainManager/<UpdateStatsServer>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateStatsServerU3Ed__17_System_Collections_IEnumerator_get_Current_mA079A0C7D8446D54F45925D805575E3F41461BFF (U3CUpdateStatsServerU3Ed__17_tF320FEDB1698C51FABE98B2A16F4A3C484BB2E41 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestContoller/<Countdown>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__24__ctor_mC46D2E6A952245CAB95165DA4CE8F804FD63E598 (U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TestContoller/<Countdown>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__24_System_IDisposable_Dispose_mE31022C05EDCCA76BFC5D194FED0C90EF2204726 (U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TestContoller/<Countdown>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountdownU3Ed__24_MoveNext_m4046E58583DE4FAAB8D72B7B8E7EBD4B81A32579 (U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// testTime=completeTime;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_4 = V_1;
		int32_t L_5 = __this->get_completeTime_3();
		NullCheck(L_4);
		L_4->set_testTime_21(L_5);
		goto IL_00a8;
	}

IL_002c:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// testTime--;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_7 = V_1;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_testTime_21();
		NullCheck(L_7);
		L_7->set_testTime_21(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		// TimerCountdownText.text=testTime.ToString();
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_10 = V_1;
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = L_10->get_TimerCountdownText_19();
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_12 = V_1;
		NullCheck(L_12);
		int32_t* L_13 = L_12->get_address_of_testTime_21();
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// if(colorChanger){
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = L_15->get_colorChanger_22();
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		// TimerCountdownText.color=Color.red;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_17 = V_1;
		NullCheck(L_17);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = L_17->get_TimerCountdownText_19();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		// colorChanger=false;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_20 = V_1;
		NullCheck(L_20);
		L_20->set_colorChanger_22((bool)0);
		// }
		goto IL_00a8;
	}

IL_0091:
	{
		// TimerCountdownText.color=Color.green;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_21 = V_1;
		NullCheck(L_21);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = L_21->get_TimerCountdownText_19();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
		// colorChanger=true;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_24 = V_1;
		NullCheck(L_24);
		L_24->set_colorChanger_22((bool)1);
	}

IL_00a8:
	{
		// while(testTime>0)
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_testTime_21();
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// TimerCountdownText.text="";
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_27 = V_1;
		NullCheck(L_27);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = L_27->get_TimerCountdownText_19();
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// if(quesid<items.Length)
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_quesid_7();
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_31 = V_1;
		NullCheck(L_31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31->get_items_6();
		NullCheck(L_32);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0102;
		}
	}
	{
		// ShowData();
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_33 = V_1;
		NullCheck(L_33);
		TestContoller_ShowData_m752AFF1CFC104FF9533398726EF9B16257D99AEA(L_33, /*hidden argument*/NULL);
		// quesid++;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_34 = V_1;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_quesid_7();
		NullCheck(L_34);
		L_34->set_quesid_7(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		// int selectedTime=int.Parse(timerInputed);
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = L_37->get_timerInputed_16();
		int32_t L_39;
		L_39 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_38, /*hidden argument*/NULL);
		V_2 = L_39;
		// StartCoroutine(Countdown(selectedTime));
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_40 = V_1;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_41 = V_1;
		int32_t L_42 = V_2;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = TestContoller_Countdown_m4B9CB4C14AD0909BE5FED3EDDD5F5E4873629A55(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_44;
		L_44 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_40, L_43, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return (bool)0;
	}
}
// System.Object TestContoller/<Countdown>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountdownU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BFE3513734F28E1AF2EE52D98D5483AFD169567 (U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TestContoller/<Countdown>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__24_System_Collections_IEnumerator_Reset_m6DE28C10716AF153E601F289F13DD66FC6DB9EC1 (U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountdownU3Ed__24_System_Collections_IEnumerator_Reset_m6DE28C10716AF153E601F289F13DD66FC6DB9EC1_RuntimeMethod_var)));
	}
}
// System.Object TestContoller/<Countdown>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountdownU3Ed__24_System_Collections_IEnumerator_get_Current_m86C408395F536A12712E27AE1D6EFD0CE1EB0527 (U3CCountdownU3Ed__24_t8732B047643DE8B0B9D5AD625F3732554C25786A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TestContoller/<TextAlighByGeometry>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextAlighByGeometryU3Ed__40__ctor_m8C289D9D9DEEAC70CF38C98C3F776EB855D88473 (U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TestContoller/<TextAlighByGeometry>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextAlighByGeometryU3Ed__40_System_IDisposable_Dispose_mB206195723DCF6198D0366B78C343CE83DCB46A8 (U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TestContoller/<TextAlighByGeometry>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTextAlighByGeometryU3Ed__40_MoveNext_m28682664281AFF6CEC3DC29D422C5E2F1DAFD7E5 (U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_006c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_2 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_2, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_2);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textt.GetComponent<ContentSizeFitter>().enabled = false;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_textt_2();
		NullCheck(L_3);
		ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5 * L_4;
		L_4 = Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C(L_3, /*hidden argument*/Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textt.GetComponent<ContentSizeFitter>().enabled = true;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_textt_2();
		NullCheck(L_6);
		ContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5 * L_7;
		L_7 = Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C(L_6, /*hidden argument*/Component_GetComponent_TisContentSizeFitter_t49F1C2D57ADBDB752A275C75C5437E47A55818D5_m12BB8F4F464E91B6794931FCC51512A17CB24A3C_RuntimeMethod_var);
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TestContoller/<TextAlighByGeometry>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTextAlighByGeometryU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m06907E26377B10B0FB1F869CBAA3329DC5C634E9 (U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TestContoller/<TextAlighByGeometry>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextAlighByGeometryU3Ed__40_System_Collections_IEnumerator_Reset_m0310F38B60D0E8BBA688016CBCC034C5470A98C5 (U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTextAlighByGeometryU3Ed__40_System_Collections_IEnumerator_Reset_m0310F38B60D0E8BBA688016CBCC034C5470A98C5_RuntimeMethod_var)));
	}
}
// System.Object TestContoller/<TextAlighByGeometry>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTextAlighByGeometryU3Ed__40_System_Collections_IEnumerator_get_Current_m1566143AC6DA9185485AA878888ECED210030782 (U3CTextAlighByGeometryU3Ed__40_t435AD71F51E39DFE242AD7D66DC5DE2CCA07EAA9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TestContoller/<TimeTakenCounterFU>d__52::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeTakenCounterFUU3Ed__52__ctor_m74239F68CFBF06DE0A487D0C79CE54122747F6A8 (U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TestContoller/<TimeTakenCounterFU>d__52::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeTakenCounterFUU3Ed__52_System_IDisposable_Dispose_m30EF53C212BFE67961E23248CC90ADFEF7F240A9 (U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TestContoller/<TimeTakenCounterFU>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimeTakenCounterFUU3Ed__52_MoveNext_mC7D91F6E82B2CA5A066E0E47EC7944F09CC3352C (U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_004e;
	}

IL_0020:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// timetakenCounter++;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_5 = V_1;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_timetakenCounter_17();
		NullCheck(L_5);
		L_5->set_timetakenCounter_17(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_004e:
	{
		// while(istestOn){
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_istestOn_18();
		if (L_9)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TestContoller/<TimeTakenCounterFU>d__52::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimeTakenCounterFUU3Ed__52_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2C92C8B630668F43FA9728A0B83A22CCCC6D3B8 (U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TestContoller/<TimeTakenCounterFU>d__52::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeTakenCounterFUU3Ed__52_System_Collections_IEnumerator_Reset_m70C2828647D1C15D148D51575F344F1035F4EFD1 (U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimeTakenCounterFUU3Ed__52_System_Collections_IEnumerator_Reset_m70C2828647D1C15D148D51575F344F1035F4EFD1_RuntimeMethod_var)));
	}
}
// System.Object TestContoller/<TimeTakenCounterFU>d__52::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimeTakenCounterFUU3Ed__52_System_Collections_IEnumerator_get_Current_mA946F38E1B9E9D348F3E240B15E4429107AF53D0 (U3CTimeTakenCounterFUU3Ed__52_tE2C97DFB66B38B6512D9FFDF8EB750C8A881049A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TestContoller/<waitAndShowAds>d__51::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitAndShowAdsU3Ed__51__ctor_m4B2519244B5CA5F7355AC8F1EF974C6D709AD67C (U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TestContoller/<waitAndShowAds>d__51::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitAndShowAdsU3Ed__51_System_IDisposable_Dispose_mD5347247BE312214EF002947779319051BEC2A83 (U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TestContoller/<waitAndShowAds>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitAndShowAdsU3Ed__51_MoveNext_mEEDF55DF4A6753ADF590A69F456DEE792228C5F5 (U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F_m0A143C05F728D1FACB70BB193897AE380F99AABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameObject.GetComponent<MainManager>().CheckTimerIfHaveThenShowAds();
		TestContoller_t937C672BED623740089E5DA4F104D6512B230EE1 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		MainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F * L_7;
		L_7 = GameObject_GetComponent_TisMainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F_m0A143C05F728D1FACB70BB193897AE380F99AABB(L_6, /*hidden argument*/GameObject_GetComponent_TisMainManager_t7724856FD454D1506DC9E9ECA4798072CB7E210F_m0A143C05F728D1FACB70BB193897AE380F99AABB_RuntimeMethod_var);
		NullCheck(L_7);
		MainManager_CheckTimerIfHaveThenShowAds_m8E509D66E49AA3283464E226D33E063CE78B7F9C(L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TestContoller/<waitAndShowAds>d__51::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitAndShowAdsU3Ed__51_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E6CBBC5D32F4F4B2D13A568AAA07B56E92319D6 (U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TestContoller/<waitAndShowAds>d__51::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitAndShowAdsU3Ed__51_System_Collections_IEnumerator_Reset_m8673659EBF283412547A6F657EDF77F8FA9E87D7 (U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwaitAndShowAdsU3Ed__51_System_Collections_IEnumerator_Reset_m8673659EBF283412547A6F657EDF77F8FA9E87D7_RuntimeMethod_var)));
	}
}
// System.Object TestContoller/<waitAndShowAds>d__51::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitAndShowAdsU3Ed__51_System_Collections_IEnumerator_get_Current_m5B011A6C01FC9C182C025F22FF7E319599350DC4 (U3CwaitAndShowAdsU3Ed__51_t1E93DB99FF8F817D888C5E8C7BD8AF11187CFC43 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
