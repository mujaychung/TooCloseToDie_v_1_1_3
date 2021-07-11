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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.BoxCollider2D[]
struct BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA;
// UnityEngine.CapsuleCollider2D[]
struct CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Count
struct Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4;
// CureControl
struct CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B;
// Flashing
struct Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// FreezeControl
struct FreezeControl_tD1077A47F9C253CBEEE1ABF1439177EFC8684DB5;
// FreezeScreen
struct FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverScreen
struct GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7;
// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1;
// HealthyMan
struct HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089;
// Hero
struct Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// RemainCountUI
struct RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Sneezer
struct Sneezer_tAE476B94989C5E30980673D445224028672F0E60;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// StartScreen
struct StartScreen_t0512CCC3FE265E0F5DFFA0B5DE3189CB934F0369;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Transparent
struct Transparent_tFD27C5CD5B91CD5F8CC71F1B49B87383F78ED2AA;
// TutorialScreen
struct TutorialScreen_t08527FCCCC934167A8DF2D3AA4B1FD808CFB1E14;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WinScreen
struct WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC;
// Flashing/<Flash>d__4
struct U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC;
// FreezeScreen/<CountDownToStart>d__5
struct U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B;
// Hero/<redAMoment>d__28
struct U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01BD520A0571B9A04E63678996E733F443AD32B4;
IL2CPP_EXTERN_C String_t* _stringLiteral01D7AEF4D9531356229FACB631ED8124CA4A7C85;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7305679BF7088B560FABABAEF7538459EE58F4;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D304D6C35DA71CCCA61813D85BB45772EE66A1E;
IL2CPP_EXTERN_C String_t* _stringLiteral0E51C2985BB16B51490D35074DE51E0D5992F39F;
IL2CPP_EXTERN_C String_t* _stringLiteral164468D20E53CEDA73DE1842CD74D791BF9E1524;
IL2CPP_EXTERN_C String_t* _stringLiteral185C0BE1F5E22EC5A91B0131976A591F3B64138A;
IL2CPP_EXTERN_C String_t* _stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D;
IL2CPP_EXTERN_C String_t* _stringLiteral2012CD1D4697552C7653A09FCA6A5112BADCB040;
IL2CPP_EXTERN_C String_t* _stringLiteral246FD2354269B93783757CA6CA680F79F322E378;
IL2CPP_EXTERN_C String_t* _stringLiteral263AD42CB0B3B03911EF54765D4B7C6AF29E8AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74;
IL2CPP_EXTERN_C String_t* _stringLiteral3423A75E0CB1F9C24AD3071DC14FF265A9B1AEE3;
IL2CPP_EXTERN_C String_t* _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F;
IL2CPP_EXTERN_C String_t* _stringLiteral3A2B97FAC29795993EFAD203700ABDF745F54FFB;
IL2CPP_EXTERN_C String_t* _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890;
IL2CPP_EXTERN_C String_t* _stringLiteral520FC3D7DD30CB1ABF7A3E4BAF19B34FA197DAB6;
IL2CPP_EXTERN_C String_t* _stringLiteral61728EAE200F766A4FA68673634F3C01D677726E;
IL2CPP_EXTERN_C String_t* _stringLiteral61D831FB27C3EE64727050A9CE03D79E3053844D;
IL2CPP_EXTERN_C String_t* _stringLiteral67F92B3074C698F2665F4ABD311629F01811A5A3;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7EDDFA014C2B22D6EAD981A2C20AF60763EC56;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral87FC22D6220B4FCFE545B0302B4CE287924997CE;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8;
IL2CPP_EXTERN_C String_t* _stringLiteral88CD27F21A7229AFD6EF695B12660AA1B0AF12E0;
IL2CPP_EXTERN_C String_t* _stringLiteral8BCC8BA7F11412EF1F2FE942C139928CA82F8500;
IL2CPP_EXTERN_C String_t* _stringLiteral927FB77463376857569CF8E7C17F14E05C9D46C4;
IL2CPP_EXTERN_C String_t* _stringLiteral944818ACFD72D371D8AE78CB7EC2A453B12D8165;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA0ADEF462E4FC641D5E83DA767E5AB93D7548E09;
IL2CPP_EXTERN_C String_t* _stringLiteralA7A97233285B07ED746C1FE5EA971E17F1434A0E;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralC60AACA5AB68DE5C8D80D66ECB32F74FB35355CD;
IL2CPP_EXTERN_C String_t* _stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE3C59421CC8262B8F5DF5A641CF7DF683A68B4AF;
IL2CPP_EXTERN_C String_t* _stringLiteralE7CA7BF25ED5D93B932192FF2E34145EC81A78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF5664189349015241CD069F7E006F915758DBD33;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFD18EBBA2AF89EA6388E15BE5DB70F4D911F0FAD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54_m48D6A9A14DDC1D64BA3CC7E6DC39CB781A44A9DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFlashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924_m3E1CE6110DCE0897543F033BD820BA3FB68BD4F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountDownToStartU3Ed__5_System_Collections_IEnumerator_Reset_mA79F6136EC357876DCC29B106374A3CDABF8A892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlashU3Ed__4_System_Collections_IEnumerator_Reset_mF12FCCDE80AFDE7DEB56125CA8272A1254F6FBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CredAMomentU3Ed__28_System_Collections_IEnumerator_Reset_mE3BE26C20940A9A783BA346BFEC0A8E6DB2ABCEC_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA;
struct CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// Flashing/<Flash>d__4
struct U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC  : public RuntimeObject
{
public:
	// System.Int32 Flashing/<Flash>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Flashing/<Flash>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Flashing/<Flash>d__4::sceondsForOneFlash
	float ___sceondsForOneFlash_2;
	// Flashing Flashing/<Flash>d__4::<>4__this
	Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * ___U3CU3E4__this_3;
	// System.Single Flashing/<Flash>d__4::maxAlpha
	float ___maxAlpha_4;
	// System.Single Flashing/<Flash>d__4::<flashInDuration>5__2
	float ___U3CflashInDurationU3E5__2_5;
	// System.Single Flashing/<Flash>d__4::<flashOutDuration>5__3
	float ___U3CflashOutDurationU3E5__3_6;
	// System.Single Flashing/<Flash>d__4::<t>5__4
	float ___U3CtU3E5__4_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sceondsForOneFlash_2() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC, ___sceondsForOneFlash_2)); }
	inline float get_sceondsForOneFlash_2() const { return ___sceondsForOneFlash_2; }
	inline float* get_address_of_sceondsForOneFlash_2() { return &___sceondsForOneFlash_2; }
	inline void set_sceondsForOneFlash_2(float value)
	{
		___sceondsForOneFlash_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC, ___U3CU3E4__this_3)); }
	inline Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_maxAlpha_4() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC, ___maxAlpha_4)); }
	inline float get_maxAlpha_4() const { return ___maxAlpha_4; }
	inline float* get_address_of_maxAlpha_4() { return &___maxAlpha_4; }
	inline void set_maxAlpha_4(float value)
	{
		___maxAlpha_4 = value;
	}

	inline static int32_t get_offset_of_U3CflashInDurationU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC, ___U3CflashInDurationU3E5__2_5)); }
	inline float get_U3CflashInDurationU3E5__2_5() const { return ___U3CflashInDurationU3E5__2_5; }
	inline float* get_address_of_U3CflashInDurationU3E5__2_5() { return &___U3CflashInDurationU3E5__2_5; }
	inline void set_U3CflashInDurationU3E5__2_5(float value)
	{
		___U3CflashInDurationU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CflashOutDurationU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC, ___U3CflashOutDurationU3E5__3_6)); }
	inline float get_U3CflashOutDurationU3E5__3_6() const { return ___U3CflashOutDurationU3E5__3_6; }
	inline float* get_address_of_U3CflashOutDurationU3E5__3_6() { return &___U3CflashOutDurationU3E5__3_6; }
	inline void set_U3CflashOutDurationU3E5__3_6(float value)
	{
		___U3CflashOutDurationU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC, ___U3CtU3E5__4_7)); }
	inline float get_U3CtU3E5__4_7() const { return ___U3CtU3E5__4_7; }
	inline float* get_address_of_U3CtU3E5__4_7() { return &___U3CtU3E5__4_7; }
	inline void set_U3CtU3E5__4_7(float value)
	{
		___U3CtU3E5__4_7 = value;
	}
};


// FreezeScreen/<CountDownToStart>d__5
struct U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B  : public RuntimeObject
{
public:
	// System.Int32 FreezeScreen/<CountDownToStart>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FreezeScreen/<CountDownToStart>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// FreezeScreen FreezeScreen/<CountDownToStart>d__5::<>4__this
	FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B, ___U3CU3E4__this_2)); }
	inline FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Hero/<redAMoment>d__28
struct U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A  : public RuntimeObject
{
public:
	// System.Int32 Hero/<redAMoment>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Hero/<redAMoment>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Hero Hero/<redAMoment>d__28::<>4__this
	Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A, ___U3CU3E4__this_2)); }
	inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Bullet::bullet_speed
	float ___bullet_speed_4;
	// System.Int32 Bullet::direction
	int32_t ___direction_5;
	// UnityEngine.GameObject Bullet::hero
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hero_6;
	// Hero Bullet::hero_script
	Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * ___hero_script_7;
	// System.Boolean Bullet::hero_movable
	bool ___hero_movable_8;

public:
	inline static int32_t get_offset_of_bullet_speed_4() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___bullet_speed_4)); }
	inline float get_bullet_speed_4() const { return ___bullet_speed_4; }
	inline float* get_address_of_bullet_speed_4() { return &___bullet_speed_4; }
	inline void set_bullet_speed_4(float value)
	{
		___bullet_speed_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___direction_5)); }
	inline int32_t get_direction_5() const { return ___direction_5; }
	inline int32_t* get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(int32_t value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_hero_6() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___hero_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hero_6() const { return ___hero_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hero_6() { return &___hero_6; }
	inline void set_hero_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hero_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hero_6), (void*)value);
	}

	inline static int32_t get_offset_of_hero_script_7() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___hero_script_7)); }
	inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * get_hero_script_7() const { return ___hero_script_7; }
	inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C ** get_address_of_hero_script_7() { return &___hero_script_7; }
	inline void set_hero_script_7(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * value)
	{
		___hero_script_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hero_script_7), (void*)value);
	}

	inline static int32_t get_offset_of_hero_movable_8() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___hero_movable_8)); }
	inline bool get_hero_movable_8() const { return ___hero_movable_8; }
	inline bool* get_address_of_hero_movable_8() { return &___hero_movable_8; }
	inline void set_hero_movable_8(bool value)
	{
		___hero_movable_8 = value;
	}
};


// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Count
struct Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Count::sneezerCount
	int32_t ___sneezerCount_4;
	// System.Int32 Count::normalerCount
	int32_t ___normalerCount_5;
	// System.Int32 Count::virusCount
	int32_t ___virusCount_6;
	// GameOverScreen Count::gameOverScreen
	GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * ___gameOverScreen_7;
	// WinScreen Count::winScreen
	WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * ___winScreen_8;

public:
	inline static int32_t get_offset_of_sneezerCount_4() { return static_cast<int32_t>(offsetof(Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4, ___sneezerCount_4)); }
	inline int32_t get_sneezerCount_4() const { return ___sneezerCount_4; }
	inline int32_t* get_address_of_sneezerCount_4() { return &___sneezerCount_4; }
	inline void set_sneezerCount_4(int32_t value)
	{
		___sneezerCount_4 = value;
	}

	inline static int32_t get_offset_of_normalerCount_5() { return static_cast<int32_t>(offsetof(Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4, ___normalerCount_5)); }
	inline int32_t get_normalerCount_5() const { return ___normalerCount_5; }
	inline int32_t* get_address_of_normalerCount_5() { return &___normalerCount_5; }
	inline void set_normalerCount_5(int32_t value)
	{
		___normalerCount_5 = value;
	}

	inline static int32_t get_offset_of_virusCount_6() { return static_cast<int32_t>(offsetof(Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4, ___virusCount_6)); }
	inline int32_t get_virusCount_6() const { return ___virusCount_6; }
	inline int32_t* get_address_of_virusCount_6() { return &___virusCount_6; }
	inline void set_virusCount_6(int32_t value)
	{
		___virusCount_6 = value;
	}

	inline static int32_t get_offset_of_gameOverScreen_7() { return static_cast<int32_t>(offsetof(Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4, ___gameOverScreen_7)); }
	inline GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * get_gameOverScreen_7() const { return ___gameOverScreen_7; }
	inline GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 ** get_address_of_gameOverScreen_7() { return &___gameOverScreen_7; }
	inline void set_gameOverScreen_7(GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * value)
	{
		___gameOverScreen_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverScreen_7), (void*)value);
	}

	inline static int32_t get_offset_of_winScreen_8() { return static_cast<int32_t>(offsetof(Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4, ___winScreen_8)); }
	inline WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * get_winScreen_8() const { return ___winScreen_8; }
	inline WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC ** get_address_of_winScreen_8() { return &___winScreen_8; }
	inline void set_winScreen_8(WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * value)
	{
		___winScreen_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winScreen_8), (void*)value);
	}
};


// CureControl
struct CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CureControl::elapsed
	float ___elapsed_4;
	// UnityEngine.Vector2 CureControl::centerPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___centerPoint_6;
	// UnityEngine.LayerMask CureControl::whatStopMovement
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatStopMovement_7;
	// UnityEngine.GameObject CureControl::syringe
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___syringe_8;
	// System.Int32 CureControl::xGrid
	int32_t ___xGrid_9;
	// System.Int32 CureControl::yGrid
	int32_t ___yGrid_10;

public:
	inline static int32_t get_offset_of_elapsed_4() { return static_cast<int32_t>(offsetof(CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B, ___elapsed_4)); }
	inline float get_elapsed_4() const { return ___elapsed_4; }
	inline float* get_address_of_elapsed_4() { return &___elapsed_4; }
	inline void set_elapsed_4(float value)
	{
		___elapsed_4 = value;
	}

	inline static int32_t get_offset_of_centerPoint_6() { return static_cast<int32_t>(offsetof(CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B, ___centerPoint_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_centerPoint_6() const { return ___centerPoint_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_centerPoint_6() { return &___centerPoint_6; }
	inline void set_centerPoint_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___centerPoint_6 = value;
	}

	inline static int32_t get_offset_of_whatStopMovement_7() { return static_cast<int32_t>(offsetof(CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B, ___whatStopMovement_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatStopMovement_7() const { return ___whatStopMovement_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatStopMovement_7() { return &___whatStopMovement_7; }
	inline void set_whatStopMovement_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatStopMovement_7 = value;
	}

	inline static int32_t get_offset_of_syringe_8() { return static_cast<int32_t>(offsetof(CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B, ___syringe_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_syringe_8() const { return ___syringe_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_syringe_8() { return &___syringe_8; }
	inline void set_syringe_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___syringe_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syringe_8), (void*)value);
	}

	inline static int32_t get_offset_of_xGrid_9() { return static_cast<int32_t>(offsetof(CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B, ___xGrid_9)); }
	inline int32_t get_xGrid_9() const { return ___xGrid_9; }
	inline int32_t* get_address_of_xGrid_9() { return &___xGrid_9; }
	inline void set_xGrid_9(int32_t value)
	{
		___xGrid_9 = value;
	}

	inline static int32_t get_offset_of_yGrid_10() { return static_cast<int32_t>(offsetof(CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B, ___yGrid_10)); }
	inline int32_t get_yGrid_10() const { return ___yGrid_10; }
	inline int32_t* get_address_of_yGrid_10() { return &___yGrid_10; }
	inline void set_yGrid_10(int32_t value)
	{
		___yGrid_10 = value;
	}
};


// Flashing
struct Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer Flashing::image
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___image_4;
	// UnityEngine.Coroutine Flashing::currentFlashRoutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___currentFlashRoutine_5;

public:
	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924, ___image_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_image_4() const { return ___image_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentFlashRoutine_5() { return static_cast<int32_t>(offsetof(Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924, ___currentFlashRoutine_5)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_currentFlashRoutine_5() const { return ___currentFlashRoutine_5; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_currentFlashRoutine_5() { return &___currentFlashRoutine_5; }
	inline void set_currentFlashRoutine_5(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___currentFlashRoutine_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFlashRoutine_5), (void*)value);
	}
};


// FreezeControl
struct FreezeControl_tD1077A47F9C253CBEEE1ABF1439177EFC8684DB5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// FreezeScreen FreezeControl::freezeScreen
	FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * ___freezeScreen_4;
	// UnityEngine.GameObject FreezeControl::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_5;

public:
	inline static int32_t get_offset_of_freezeScreen_4() { return static_cast<int32_t>(offsetof(FreezeControl_tD1077A47F9C253CBEEE1ABF1439177EFC8684DB5, ___freezeScreen_4)); }
	inline FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * get_freezeScreen_4() const { return ___freezeScreen_4; }
	inline FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 ** get_address_of_freezeScreen_4() { return &___freezeScreen_4; }
	inline void set_freezeScreen_4(FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * value)
	{
		___freezeScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freezeScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_5() { return static_cast<int32_t>(offsetof(FreezeControl_tD1077A47F9C253CBEEE1ABF1439177EFC8684DB5, ___bullet_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_5() const { return ___bullet_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_5() { return &___bullet_5; }
	inline void set_bullet_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_5), (void*)value);
	}
};


// FreezeScreen
struct FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Bullet FreezeScreen::bullet
	Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * ___bullet_4;
	// UnityEngine.GameObject FreezeScreen::hero
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hero_5;
	// UnityEngine.UI.Text FreezeScreen::countdownText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___countdownText_6;
	// System.Int32 FreezeScreen::countdownTime
	int32_t ___countdownTime_7;

public:
	inline static int32_t get_offset_of_bullet_4() { return static_cast<int32_t>(offsetof(FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54, ___bullet_4)); }
	inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * get_bullet_4() const { return ___bullet_4; }
	inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 ** get_address_of_bullet_4() { return &___bullet_4; }
	inline void set_bullet_4(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * value)
	{
		___bullet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_4), (void*)value);
	}

	inline static int32_t get_offset_of_hero_5() { return static_cast<int32_t>(offsetof(FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54, ___hero_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hero_5() const { return ___hero_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hero_5() { return &___hero_5; }
	inline void set_hero_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hero_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hero_5), (void*)value);
	}

	inline static int32_t get_offset_of_countdownText_6() { return static_cast<int32_t>(offsetof(FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54, ___countdownText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_countdownText_6() const { return ___countdownText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_countdownText_6() { return &___countdownText_6; }
	inline void set_countdownText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___countdownText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countdownText_6), (void*)value);
	}

	inline static int32_t get_offset_of_countdownTime_7() { return static_cast<int32_t>(offsetof(FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54, ___countdownTime_7)); }
	inline int32_t get_countdownTime_7() const { return ___countdownTime_7; }
	inline int32_t* get_address_of_countdownTime_7() { return &___countdownTime_7; }
	inline void set_countdownTime_7(int32_t value)
	{
		___countdownTime_7 = value;
	}
};


// GameOverScreen
struct GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameOverScreen::hero
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hero_4;
	// FreezeScreen GameOverScreen::freezeScreen
	FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * ___freezeScreen_5;

public:
	inline static int32_t get_offset_of_hero_4() { return static_cast<int32_t>(offsetof(GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7, ___hero_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hero_4() const { return ___hero_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hero_4() { return &___hero_4; }
	inline void set_hero_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hero_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hero_4), (void*)value);
	}

	inline static int32_t get_offset_of_freezeScreen_5() { return static_cast<int32_t>(offsetof(GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7, ___freezeScreen_5)); }
	inline FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * get_freezeScreen_5() const { return ___freezeScreen_5; }
	inline FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 ** get_address_of_freezeScreen_5() { return &___freezeScreen_5; }
	inline void set_freezeScreen_5(FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * value)
	{
		___freezeScreen_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freezeScreen_5), (void*)value);
	}
};


// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single HealthBar::currentHealth
	float ___currentHealth_5;
	// UnityEngine.RectTransform HealthBar::lifePoint
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___lifePoint_6;
	// UnityEngine.RectTransform HealthBar::hurt
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___hurt_7;
	// GameOverScreen HealthBar::gameOverScreen
	GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * ___gameOverScreen_8;
	// UnityEngine.CapsuleCollider2D[] HealthBar::selfColliders
	CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0* ___selfColliders_9;
	// UnityEngine.BoxCollider2D[] HealthBar::distanceColliders
	BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA* ___distanceColliders_10;

public:
	inline static int32_t get_offset_of_currentHealth_5() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___currentHealth_5)); }
	inline float get_currentHealth_5() const { return ___currentHealth_5; }
	inline float* get_address_of_currentHealth_5() { return &___currentHealth_5; }
	inline void set_currentHealth_5(float value)
	{
		___currentHealth_5 = value;
	}

	inline static int32_t get_offset_of_lifePoint_6() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___lifePoint_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_lifePoint_6() const { return ___lifePoint_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_lifePoint_6() { return &___lifePoint_6; }
	inline void set_lifePoint_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___lifePoint_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lifePoint_6), (void*)value);
	}

	inline static int32_t get_offset_of_hurt_7() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___hurt_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_hurt_7() const { return ___hurt_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_hurt_7() { return &___hurt_7; }
	inline void set_hurt_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___hurt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hurt_7), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverScreen_8() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___gameOverScreen_8)); }
	inline GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * get_gameOverScreen_8() const { return ___gameOverScreen_8; }
	inline GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 ** get_address_of_gameOverScreen_8() { return &___gameOverScreen_8; }
	inline void set_gameOverScreen_8(GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * value)
	{
		___gameOverScreen_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverScreen_8), (void*)value);
	}

	inline static int32_t get_offset_of_selfColliders_9() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___selfColliders_9)); }
	inline CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0* get_selfColliders_9() const { return ___selfColliders_9; }
	inline CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0** get_address_of_selfColliders_9() { return &___selfColliders_9; }
	inline void set_selfColliders_9(CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0* value)
	{
		___selfColliders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selfColliders_9), (void*)value);
	}

	inline static int32_t get_offset_of_distanceColliders_10() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___distanceColliders_10)); }
	inline BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA* get_distanceColliders_10() const { return ___distanceColliders_10; }
	inline BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA** get_address_of_distanceColliders_10() { return &___distanceColliders_10; }
	inline void set_distanceColliders_10(BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA* value)
	{
		___distanceColliders_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distanceColliders_10), (void*)value);
	}
};


// HealthyMan
struct HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 HealthyMan::direction
	int32_t ___direction_4;
	// System.Single HealthyMan::moveSpeed
	float ___moveSpeed_5;
	// System.Single HealthyMan::normalMoveSpeed
	float ___normalMoveSpeed_6;
	// UnityEngine.Transform HealthyMan::movePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___movePoint_7;
	// UnityEngine.GameObject HealthyMan::sneezer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sneezer_8;
	// UnityEngine.CapsuleCollider2D HealthyMan::selfCollider
	CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * ___selfCollider_9;
	// UnityEngine.LayerMask HealthyMan::whatStopMovement
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatStopMovement_10;
	// UnityEngine.Animator HealthyMan::m_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___m_animator_11;
	// System.String HealthyMan::currentState
	String_t* ___currentState_12;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_normalMoveSpeed_6() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___normalMoveSpeed_6)); }
	inline float get_normalMoveSpeed_6() const { return ___normalMoveSpeed_6; }
	inline float* get_address_of_normalMoveSpeed_6() { return &___normalMoveSpeed_6; }
	inline void set_normalMoveSpeed_6(float value)
	{
		___normalMoveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_movePoint_7() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___movePoint_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_movePoint_7() const { return ___movePoint_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_movePoint_7() { return &___movePoint_7; }
	inline void set_movePoint_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___movePoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movePoint_7), (void*)value);
	}

	inline static int32_t get_offset_of_sneezer_8() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___sneezer_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sneezer_8() const { return ___sneezer_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sneezer_8() { return &___sneezer_8; }
	inline void set_sneezer_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sneezer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sneezer_8), (void*)value);
	}

	inline static int32_t get_offset_of_selfCollider_9() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___selfCollider_9)); }
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * get_selfCollider_9() const { return ___selfCollider_9; }
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 ** get_address_of_selfCollider_9() { return &___selfCollider_9; }
	inline void set_selfCollider_9(CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * value)
	{
		___selfCollider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selfCollider_9), (void*)value);
	}

	inline static int32_t get_offset_of_whatStopMovement_10() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___whatStopMovement_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatStopMovement_10() const { return ___whatStopMovement_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatStopMovement_10() { return &___whatStopMovement_10; }
	inline void set_whatStopMovement_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatStopMovement_10 = value;
	}

	inline static int32_t get_offset_of_m_animator_11() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___m_animator_11)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_m_animator_11() const { return ___m_animator_11; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_m_animator_11() { return &___m_animator_11; }
	inline void set_m_animator_11(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___m_animator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_animator_11), (void*)value);
	}

	inline static int32_t get_offset_of_currentState_12() { return static_cast<int32_t>(offsetof(HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089, ___currentState_12)); }
	inline String_t* get_currentState_12() const { return ___currentState_12; }
	inline String_t** get_address_of_currentState_12() { return &___currentState_12; }
	inline void set_currentState_12(String_t* value)
	{
		___currentState_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentState_12), (void*)value);
	}
};


// Hero
struct Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Hero::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Transform Hero::movePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___movePoint_5;
	// System.Int32 Hero::direction
	int32_t ___direction_6;
	// UnityEngine.LayerMask Hero::whatStopMovement
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatStopMovement_7;
	// UnityEngine.GameObject Hero::bullet_prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_prefab_8;
	// UnityEngine.RectTransform Hero::Cure_0
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___Cure_0_9;
	// UnityEngine.RectTransform Hero::Cure_1
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___Cure_1_10;
	// UnityEngine.RectTransform Hero::Cure_2
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___Cure_2_11;
	// System.Single Hero::bulletCount
	float ___bulletCount_12;
	// UnityEngine.Vector2 Hero::CURE_SIZE
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___CURE_SIZE_17;
	// System.String Hero::currentState
	String_t* ___currentState_18;
	// UnityEngine.Animator Hero::m_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___m_animator_19;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_movePoint_5() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___movePoint_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_movePoint_5() const { return ___movePoint_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_movePoint_5() { return &___movePoint_5; }
	inline void set_movePoint_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___movePoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movePoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___direction_6)); }
	inline int32_t get_direction_6() const { return ___direction_6; }
	inline int32_t* get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(int32_t value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_whatStopMovement_7() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___whatStopMovement_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatStopMovement_7() const { return ___whatStopMovement_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatStopMovement_7() { return &___whatStopMovement_7; }
	inline void set_whatStopMovement_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatStopMovement_7 = value;
	}

	inline static int32_t get_offset_of_bullet_prefab_8() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___bullet_prefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_prefab_8() const { return ___bullet_prefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_prefab_8() { return &___bullet_prefab_8; }
	inline void set_bullet_prefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_prefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_prefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_Cure_0_9() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___Cure_0_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_Cure_0_9() const { return ___Cure_0_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_Cure_0_9() { return &___Cure_0_9; }
	inline void set_Cure_0_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___Cure_0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cure_0_9), (void*)value);
	}

	inline static int32_t get_offset_of_Cure_1_10() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___Cure_1_10)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_Cure_1_10() const { return ___Cure_1_10; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_Cure_1_10() { return &___Cure_1_10; }
	inline void set_Cure_1_10(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___Cure_1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cure_1_10), (void*)value);
	}

	inline static int32_t get_offset_of_Cure_2_11() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___Cure_2_11)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_Cure_2_11() const { return ___Cure_2_11; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_Cure_2_11() { return &___Cure_2_11; }
	inline void set_Cure_2_11(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___Cure_2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cure_2_11), (void*)value);
	}

	inline static int32_t get_offset_of_bulletCount_12() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___bulletCount_12)); }
	inline float get_bulletCount_12() const { return ___bulletCount_12; }
	inline float* get_address_of_bulletCount_12() { return &___bulletCount_12; }
	inline void set_bulletCount_12(float value)
	{
		___bulletCount_12 = value;
	}

	inline static int32_t get_offset_of_CURE_SIZE_17() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___CURE_SIZE_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_CURE_SIZE_17() const { return ___CURE_SIZE_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_CURE_SIZE_17() { return &___CURE_SIZE_17; }
	inline void set_CURE_SIZE_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___CURE_SIZE_17 = value;
	}

	inline static int32_t get_offset_of_currentState_18() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___currentState_18)); }
	inline String_t* get_currentState_18() const { return ___currentState_18; }
	inline String_t** get_address_of_currentState_18() { return &___currentState_18; }
	inline void set_currentState_18(String_t* value)
	{
		___currentState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentState_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_animator_19() { return static_cast<int32_t>(offsetof(Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C, ___m_animator_19)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_m_animator_19() const { return ___m_animator_19; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_m_animator_19() { return &___m_animator_19; }
	inline void set_m_animator_19(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___m_animator_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_animator_19), (void*)value);
	}
};


// RemainCountUI
struct RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Count RemainCountUI::countController
	Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 * ___countController_4;
	// System.Single RemainCountUI::elapsed
	float ___elapsed_5;
	// UnityEngine.Color RemainCountUI::originalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___originalColor_6;

public:
	inline static int32_t get_offset_of_countController_4() { return static_cast<int32_t>(offsetof(RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280, ___countController_4)); }
	inline Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 * get_countController_4() const { return ___countController_4; }
	inline Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 ** get_address_of_countController_4() { return &___countController_4; }
	inline void set_countController_4(Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 * value)
	{
		___countController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countController_4), (void*)value);
	}

	inline static int32_t get_offset_of_elapsed_5() { return static_cast<int32_t>(offsetof(RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280, ___elapsed_5)); }
	inline float get_elapsed_5() const { return ___elapsed_5; }
	inline float* get_address_of_elapsed_5() { return &___elapsed_5; }
	inline void set_elapsed_5(float value)
	{
		___elapsed_5 = value;
	}

	inline static int32_t get_offset_of_originalColor_6() { return static_cast<int32_t>(offsetof(RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280, ___originalColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_originalColor_6() const { return ___originalColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_originalColor_6() { return &___originalColor_6; }
	inline void set_originalColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___originalColor_6 = value;
	}
};


// Sneezer
struct Sneezer_tAE476B94989C5E30980673D445224028672F0E60  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Sneezer::verticalOrHorizontal
	int32_t ___verticalOrHorizontal_4;
	// System.Int32 Sneezer::moveOrSneeze
	int32_t ___moveOrSneeze_5;
	// System.Single Sneezer::moveSpeed
	float ___moveSpeed_6;
	// System.Single Sneezer::normalMoveSpeed
	float ___normalMoveSpeed_7;
	// UnityEngine.Transform Sneezer::movePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___movePoint_8;
	// UnityEngine.LayerMask Sneezer::whatStopsMovement
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatStopsMovement_9;
	// UnityEngine.LayerMask Sneezer::virus_prefab
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___virus_prefab_10;
	// UnityEngine.GameObject Sneezer::virus
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___virus_11;
	// UnityEngine.Animator Sneezer::m_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___m_animator_12;
	// System.String Sneezer::currentState
	String_t* ___currentState_13;

public:
	inline static int32_t get_offset_of_verticalOrHorizontal_4() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___verticalOrHorizontal_4)); }
	inline int32_t get_verticalOrHorizontal_4() const { return ___verticalOrHorizontal_4; }
	inline int32_t* get_address_of_verticalOrHorizontal_4() { return &___verticalOrHorizontal_4; }
	inline void set_verticalOrHorizontal_4(int32_t value)
	{
		___verticalOrHorizontal_4 = value;
	}

	inline static int32_t get_offset_of_moveOrSneeze_5() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___moveOrSneeze_5)); }
	inline int32_t get_moveOrSneeze_5() const { return ___moveOrSneeze_5; }
	inline int32_t* get_address_of_moveOrSneeze_5() { return &___moveOrSneeze_5; }
	inline void set_moveOrSneeze_5(int32_t value)
	{
		___moveOrSneeze_5 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_normalMoveSpeed_7() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___normalMoveSpeed_7)); }
	inline float get_normalMoveSpeed_7() const { return ___normalMoveSpeed_7; }
	inline float* get_address_of_normalMoveSpeed_7() { return &___normalMoveSpeed_7; }
	inline void set_normalMoveSpeed_7(float value)
	{
		___normalMoveSpeed_7 = value;
	}

	inline static int32_t get_offset_of_movePoint_8() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___movePoint_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_movePoint_8() const { return ___movePoint_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_movePoint_8() { return &___movePoint_8; }
	inline void set_movePoint_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___movePoint_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movePoint_8), (void*)value);
	}

	inline static int32_t get_offset_of_whatStopsMovement_9() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___whatStopsMovement_9)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatStopsMovement_9() const { return ___whatStopsMovement_9; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatStopsMovement_9() { return &___whatStopsMovement_9; }
	inline void set_whatStopsMovement_9(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatStopsMovement_9 = value;
	}

	inline static int32_t get_offset_of_virus_prefab_10() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___virus_prefab_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_virus_prefab_10() const { return ___virus_prefab_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_virus_prefab_10() { return &___virus_prefab_10; }
	inline void set_virus_prefab_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___virus_prefab_10 = value;
	}

	inline static int32_t get_offset_of_virus_11() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___virus_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_virus_11() const { return ___virus_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_virus_11() { return &___virus_11; }
	inline void set_virus_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___virus_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___virus_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_animator_12() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___m_animator_12)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_m_animator_12() const { return ___m_animator_12; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_m_animator_12() { return &___m_animator_12; }
	inline void set_m_animator_12(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___m_animator_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_animator_12), (void*)value);
	}

	inline static int32_t get_offset_of_currentState_13() { return static_cast<int32_t>(offsetof(Sneezer_tAE476B94989C5E30980673D445224028672F0E60, ___currentState_13)); }
	inline String_t* get_currentState_13() const { return ___currentState_13; }
	inline String_t** get_address_of_currentState_13() { return &___currentState_13; }
	inline void set_currentState_13(String_t* value)
	{
		___currentState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentState_13), (void*)value);
	}
};


// StartScreen
struct StartScreen_t0512CCC3FE265E0F5DFFA0B5DE3189CB934F0369  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Transparent
struct Transparent_tFD27C5CD5B91CD5F8CC71F1B49B87383F78ED2AA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer Transparent::s
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___s_4;

public:
	inline static int32_t get_offset_of_s_4() { return static_cast<int32_t>(offsetof(Transparent_tFD27C5CD5B91CD5F8CC71F1B49B87383F78ED2AA, ___s_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_s_4() const { return ___s_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_s_4() { return &___s_4; }
	inline void set_s_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_4), (void*)value);
	}
};


// TutorialScreen
struct TutorialScreen_t08527FCCCC934167A8DF2D3AA4B1FD808CFB1E14  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WinScreen
struct WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WinScreen::hero
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hero_4;
	// UnityEngine.UI.Text WinScreen::pointsText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pointsText_5;

public:
	inline static int32_t get_offset_of_hero_4() { return static_cast<int32_t>(offsetof(WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC, ___hero_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hero_4() const { return ___hero_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hero_4() { return &___hero_4; }
	inline void set_hero_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hero_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hero_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointsText_5() { return static_cast<int32_t>(offsetof(WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC, ___pointsText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pointsText_5() const { return ___pointsText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pointsText_5() { return &___pointsText_5; }
	inline void set_pointsText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pointsText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointsText_5), (void*)value);
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.CapsuleCollider2D[]
struct CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * m_Items[1];

public:
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.BoxCollider2D[]
struct BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * m_Items[1];

public:
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Hero>()
inline Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<FreezeScreen>()
inline FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * Component_GetComponent_TisFreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54_m48D6A9A14DDC1D64BA3CC7E6DC39CB781A44A9DE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void FreezeScreen::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeScreen_Setup_mD731D728311B82D660B1987C7779A4E9FA35840B (FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void GameOverScreen::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_Setup_m60403B88C0C4EAA94E764F4088E58222C321CF34 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method);
// System.Void WinScreen::Setup(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_Setup_m423C56EB8F7AFA4B58B5601E9C78A7611D8B30D7 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, int32_t ___score0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator Flashing::Flash(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Flashing_Flash_mDDC6C15C9A78F123EB5991278EB7707451C8D95B (Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * __this, float ___sceondsForOneFlash0, float ___maxAlpha1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Flashing/<Flash>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashU3Ed__4__ctor_m30FE617D2820D23508BF2899F35BB7E45F8DB9CB (U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator FreezeScreen::CountDownToStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FreezeScreen_CountDownToStart_mB8994855DF7D4FD7F66751AD4796F2EFED671030 (FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * __this, const RuntimeMethod* method);
// System.Void FreezeScreen/<CountDownToStart>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownToStartU3Ed__5__ctor_mA87D67C7FF8FD7A8041EA3FB2E8ACE15BA0526A4 (U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CapsuleCollider2D>()
inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Flashing>()
inline Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * GameObject_GetComponent_TisFlashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924_m3E1CE6110DCE0897543F033BD820BA3FB68BD4F1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Flashing::StartFlash(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashing_StartFlash_m6339EC924F006002F9F647A86F8663D9311B3EE0 (Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * __this, float ___sceondsForOneFlash0, float ___maxAlpha1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void HealthyMan::Wander()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_Wander_m727146A19260FB2E7DB442011B44D74E1DAE4C62 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void HealthyMan::ChangeAnimationState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_ChangeAnimationState_m562BB3CB812F856419815215227420723BE22BE8 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, String_t* ___newState0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void HealthyMan::sick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_sick_m8516D7D2F9E1DE1ACCD1E238B5D4999F45131F15 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Hero::ChangeAnimationState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, String_t* ___newState0, const RuntimeMethod* method);
// System.Void Hero::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Shoot_mCFF92564DEB5F0B978AD19D7BAC9700B41D7B244 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Hero::redAMoment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hero_redAMoment_m35424717BA0498F0029E7FE47647288E3B297745 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method);
// System.Void Hero/<redAMoment>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CredAMomentU3Ed__28__ctor_m83EB80572737A35B8FC6E8FA6CBD8B18A972A208 (U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void RemainCountUI::ChangeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemainCountUI_ChangeColor_m43B044D43F848D728CA635A99D5A9619BBC15A6E (RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// System.Void Sneezer::Wander()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_Wander_mCED2C1ABC7282B1D703C58920AD5D2940EFAF908 (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method);
// System.Void Sneezer::Sneeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_Sneeze_m1607D8297D8A19BC13E39AC47ACE252399A82363 (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method);
// System.Void Sneezer::ChangeAnimationState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_ChangeAnimationState_m355AA76CF0E590BC0054FE24A979E017CD6BA9DE (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, String_t* ___newState0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Color::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Color_get_Item_mC494D8DA970140B064D80BA83B41A5982EED03AD (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
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
// System.Void Bullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Start_m58181B46F80FE1ABECE1AFF455C253B51B7EB0E4 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61728EAE200F766A4FA68673634F3C01D677726E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hero = GameObject.Find("Hero");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral61728EAE200F766A4FA68673634F3C01D677726E, /*hidden argument*/NULL);
		__this->set_hero_6(L_0);
		// hero_script = hero.GetComponent<Hero>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_hero_6();
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_2;
		L_2 = GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A(L_1, /*hidden argument*/GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A_RuntimeMethod_var);
		__this->set_hero_script_7(L_2);
		// direction = hero_script.direction;
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_3 = __this->get_hero_script_7();
		int32_t L_4 = L_3->get_direction_6();
		__this->set_direction_5(L_4);
		// }
		return;
	}
}
// System.Void Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_mB82408CA535D8533168045E7C0321090448B596B (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// if (direction == 0)
		int32_t L_0 = __this->get_direction_5();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// this.transform.Translate(Vector3.right * bullet_speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		float L_3 = __this->get_bullet_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_1, L_6, /*hidden argument*/NULL);
		return;
	}

IL_002e:
	{
		// else if (direction == 1)
		int32_t L_7 = __this->get_direction_5();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		// this.transform.Translate(Vector3.left * bullet_speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_10 = __this->get_bullet_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_8, L_13, /*hidden argument*/NULL);
		return;
	}

IL_005d:
	{
		// else if (direction == 2)
		int32_t L_14 = __this->get_direction_5();
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		// this.transform.Translate(Vector3.up * bullet_speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_17 = __this->get_bullet_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_15, L_20, /*hidden argument*/NULL);
		return;
	}

IL_008c:
	{
		// this.transform.Translate(Vector3.down * bullet_speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_23 = __this->get_bullet_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_23, /*hidden argument*/NULL);
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, L_25, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_21, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnTriggerEnter2D_m9D34F5DCB36704FBF573BD78A9181790DD6C3B86 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54_m48D6A9A14DDC1D64BA3CC7E6DC39CB781A44A9DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7A97233285B07ED746C1FE5EA971E17F1434A0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.layer == 8) // Layer 8: StopMovement
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (collision.gameObject.tag == "Sneezer" || collision.gameObject.layer == 9)// Layer 9: Virus
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0055;
		}
	}

IL_003f:
	{
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// if (collision.gameObject.tag == "Normaler")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteralA7A97233285B07ED746C1FE5EA971E17F1434A0E, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a1;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_18, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_20, /*hidden argument*/NULL);
		// GameObject.Find("Canvas").transform.GetChild(3).GetComponent<FreezeScreen>().Setup();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_22, 3, /*hidden argument*/NULL);
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_24;
		L_24 = Component_GetComponent_TisFreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54_m48D6A9A14DDC1D64BA3CC7E6DC39CB781A44A9DE(L_23, /*hidden argument*/Component_GetComponent_TisFreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54_m48D6A9A14DDC1D64BA3CC7E6DC39CB781A44A9DE_RuntimeMethod_var);
		FreezeScreen_Setup_mD731D728311B82D660B1987C7779A4E9FA35840B(L_24, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mC7D931FE508342F413FBA79525A4819D4114B3EC (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// float bullet_speed = 6f;
		__this->set_bullet_speed_4((6.0f));
		// public bool hero_movable = true;
		__this->set_hero_movable_8((bool)1);
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
// System.Void Count::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count_Start_mFBCE85A04404CCE816152D8F9A5B3E5E2FCB70A3 (Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Count::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count_Update_mE349D140955A5A71BAE6F076C1A172CC1D764D14 (Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7A97233285B07ED746C1FE5EA971E17F1434A0E);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_2 = NULL;
	{
		// GameObject[] sneezers = GameObject.FindGameObjectsWithTag("Sneezer");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C, /*hidden argument*/NULL);
		V_0 = L_0;
		// sneezerCount = sneezers.Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		__this->set_sneezerCount_4(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		// GameObject[] normalers = GameObject.FindGameObjectsWithTag("Normaler");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralA7A97233285B07ED746C1FE5EA971E17F1434A0E, /*hidden argument*/NULL);
		V_1 = L_2;
		// normalerCount = normalers.Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_1;
		__this->set_normalerCount_5(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		// GameObject[] viruses = GameObject.FindGameObjectsWithTag("Virus");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4;
		L_4 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8, /*hidden argument*/NULL);
		V_2 = L_4;
		// virusCount = viruses.Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = V_2;
		__this->set_virusCount_6(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))));
		// if (normalerCount == 0) // Lose (no more healthyman)
		int32_t L_6 = __this->get_normalerCount_5();
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		// gameOverScreen.Setup();
		GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * L_7 = __this->get_gameOverScreen_7();
		GameOverScreen_Setup_m60403B88C0C4EAA94E764F4088E58222C321CF34(L_7, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// if(sneezerCount == 0) // Win (no more sneezer)
		int32_t L_8 = __this->get_sneezerCount_4();
		if (L_8)
		{
			goto IL_0068;
		}
	}
	{
		// winScreen.Setup(normalerCount);
		WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * L_9 = __this->get_winScreen_8();
		int32_t L_10 = __this->get_normalerCount_5();
		WinScreen_Setup_m423C56EB8F7AFA4B58B5601E9C78A7611D8B30D7(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Count::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m1114A0357529F0F6A0EFB4077228182311FAA472 (Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 * __this, const RuntimeMethod* method)
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
// System.Void CureControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CureControl_Start_m517C984C6C2B793DC07D1015E65F34513237CDC6 (CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B * __this, const RuntimeMethod* method)
{
	{
		// centerPoint = this.gameObject.transform.position;//cureController need to be placed on center
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		__this->set_centerPoint_6(L_3);
		// }
		return;
	}
}
// System.Void CureControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CureControl_Update_m38F1F2B3C0F9A6AC99721D79A3329EFBA43D1322 (CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// xGrid = Random.Range(-4, 5);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-4), 5, /*hidden argument*/NULL);
		__this->set_xGrid_9(L_0);
		// yGrid = Random.Range(-4, 5);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-4), 5, /*hidden argument*/NULL);
		__this->set_yGrid_10(L_1);
		// Vector2 randomPlace = new Vector2(centerPoint.x + xGrid, centerPoint.y + yGrid);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_centerPoint_6();
		float L_3 = L_2->get_x_0();
		int32_t L_4 = __this->get_xGrid_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_centerPoint_6();
		float L_6 = L_5->get_y_1();
		int32_t L_7 = __this->get_yGrid_10();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), ((float)il2cpp_codegen_add((float)L_3, (float)((float)((float)L_4)))), ((float)il2cpp_codegen_add((float)L_6, (float)((float)((float)L_7)))), /*hidden argument*/NULL);
		// elapsed += Time.deltaTime;
		float L_8 = __this->get_elapsed_4();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_elapsed_4(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		// if(elapsed >= ELAPSED_TIME && !Physics2D.OverlapCircle(randomPlace, 0.5f, whatStopMovement))
		float L_10 = __this->get_elapsed_4();
		if ((!(((float)L_10) >= ((float)(10.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_12 = __this->get_whatStopMovement_7();
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14;
		L_14 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_11, (0.5f), L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00bd;
		}
	}
	{
		// Instantiate(syringe, randomPlace, Quaternion.Euler(0f, 0f, 0f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_syringe_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_17, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_16, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// elapsed %= ELAPSED_TIME;
		float L_21 = __this->get_elapsed_4();
		__this->set_elapsed_4((fmodf(L_21, (10.0f))));
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void CureControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CureControl__ctor_m563C8736F082F7F28F0DA85A278BE9C8C63BE05D (CureControl_t8FFA5D3329C0645B6EBAB441F34E6429DA53D12B * __this, const RuntimeMethod* method)
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
// System.Void Flashing::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashing_Awake_m263D390A7A66396C3BB9508D9D11DDC8C7EA9912 (Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = this.GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_image_4(L_0);
		// image.color = new Color(1, 0, 0, 0);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_image_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Flashing::StartFlash(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashing_StartFlash_m6339EC924F006002F9F647A86F8663D9311B3EE0 (Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * __this, float ___sceondsForOneFlash0, float ___maxAlpha1, const RuntimeMethod* method)
{
	{
		// maxAlpha = Mathf.Clamp(maxAlpha, 0, 1);
		float L_0 = ___maxAlpha1;
		float L_1;
		L_1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		___maxAlpha1 = L_1;
		// if(currentFlashRoutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2 = __this->get_currentFlashRoutine_5();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// StopCoroutine(currentFlashRoutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3 = __this->get_currentFlashRoutine_5();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// currentFlashRoutine = StartCoroutine(Flash(sceondsForOneFlash, maxAlpha));
		float L_4 = ___sceondsForOneFlash0;
		float L_5 = ___maxAlpha1;
		RuntimeObject* L_6;
		L_6 = Flashing_Flash_mDDC6C15C9A78F123EB5991278EB7707451C8D95B(__this, L_4, L_5, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		__this->set_currentFlashRoutine_5(L_7);
		// }
		return;
	}
}
// System.Collections.IEnumerator Flashing::Flash(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Flashing_Flash_mDDC6C15C9A78F123EB5991278EB7707451C8D95B (Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * __this, float ___sceondsForOneFlash0, float ___maxAlpha1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * L_0 = (U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC *)il2cpp_codegen_object_new(U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC_il2cpp_TypeInfo_var);
		U3CFlashU3Ed__4__ctor_m30FE617D2820D23508BF2899F35BB7E45F8DB9CB(L_0, 0, /*hidden argument*/NULL);
		U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * L_1 = L_0;
		L_1->set_U3CU3E4__this_3(__this);
		U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * L_2 = L_1;
		float L_3 = ___sceondsForOneFlash0;
		L_2->set_sceondsForOneFlash_2(L_3);
		U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * L_4 = L_2;
		float L_5 = ___maxAlpha1;
		L_4->set_maxAlpha_4(L_5);
		return L_4;
	}
}
// System.Void Flashing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flashing__ctor_m0EE9F684128F244CAD8BAA0846A196A3F456D275 (Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * __this, const RuntimeMethod* method)
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
// System.Void FreezeControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeControl_Update_m19BED4E5D1746DC5B6C4D9F4AE60C7ACAF2EBA2B (FreezeControl_tD1077A47F9C253CBEEE1ABF1439177EFC8684DB5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FreezeControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeControl__ctor_m857A4A3109DF5CB529936795D2D293B8A7E51AA9 (FreezeControl_tD1077A47F9C253CBEEE1ABF1439177EFC8684DB5 * __this, const RuntimeMethod* method)
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
// System.Void FreezeScreen::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeScreen_Setup_mD731D728311B82D660B1987C7779A4E9FA35840B (FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * __this, const RuntimeMethod* method)
{
	{
		// this.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(CountDownToStart());
		RuntimeObject* L_1;
		L_1 = FreezeScreen_CountDownToStart_mB8994855DF7D4FD7F66751AD4796F2EFED671030(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FreezeScreen::CountDownToStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FreezeScreen_CountDownToStart_mB8994855DF7D4FD7F66751AD4796F2EFED671030 (FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * L_0 = (U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B *)il2cpp_codegen_object_new(U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B_il2cpp_TypeInfo_var);
		U3CCountDownToStartU3Ed__5__ctor_mA87D67C7FF8FD7A8041EA3FB2E8ACE15BA0526A4(L_0, 0, /*hidden argument*/NULL);
		U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void FreezeScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreezeScreen__ctor_m59D445D7336F95DF1E90206AC6788ED43F5FD8F0 (FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * __this, const RuntimeMethod* method)
{
	{
		// int countdownTime = 3;
		__this->set_countdownTime_7(3);
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
// System.Void GameOverScreen::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_Setup_m60403B88C0C4EAA94E764F4088E58222C321CF34 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Destroy(hero);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_hero_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// if (freezeScreen.gameObject.activeSelf)
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_2 = __this->get_freezeScreen_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// freezeScreen.gameObject.SetActive(false);
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_5 = __this->get_freezeScreen_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void GameOverScreen::RestartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_RestartButton_mAF5DEEBAA0BD356793B08E1388ED7A079BD461DA (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverScreen::ExitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen_ExitButton_mC3D02993DED447ACD28FF4B8FCD2B6A9F07D0246 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen__ctor_mE9F89EF0E4A9BFE845256528F4FDE19F075BCD95 (GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * __this, const RuntimeMethod* method)
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
// System.Void HealthBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Awake_m381A097E74C02E1B8271592317BEAA7332105B5C (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	{
		// currentHealth = maxHealth;
		__this->set_currentHealth_5((200.0f));
		// }
		return;
	}
}
// System.Void HealthBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Start_mB10AF30B9000AC79352D4B0F9027D24C38D9AB98 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void HealthBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Update_m32757C89878259F331EE8A965C10360028EF6258 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject[] sneezers = GameObject.FindGameObjectsWithTag("Sneezer");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C, /*hidden argument*/NULL);
		V_0 = L_0;
		// selfColliders = new CapsuleCollider2D[sneezers.Length];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0* L_2 = (CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0*)(CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0*)SZArrayNew(CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		__this->set_selfColliders_9(L_2);
		// distanceColliders = new BoxCollider2D[sneezers.Length];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_0;
		BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA* L_4 = (BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA*)(BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA*)SZArrayNew(BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		__this->set_distanceColliders_10(L_4);
		// for (var i = 0; i < sneezers.Length; i++)
		V_1 = 0;
		goto IL_005a;
	}

IL_002b:
	{
		// selfColliders[i] = sneezers[i].GetComponent<CapsuleCollider2D>();
		CapsuleCollider2DU5BU5D_tA8FF8BE228D6061A94D40E5E572DBA07C28762C0* L_5 = __this->get_selfColliders_9();
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_11;
		L_11 = GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A(L_10, /*hidden argument*/GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		ArrayElementTypeCheck (L_5, L_11);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 *)L_11);
		// distanceColliders[i] = sneezers[i].transform.GetChild(0).GetComponent<BoxCollider2D>();
		BoxCollider2DU5BU5D_tE8C349B42DA753DD7E1A7D9B5846F659119463EA* L_12 = __this->get_distanceColliders_10();
		int32_t L_13 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_18, 0, /*hidden argument*/NULL);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_20;
		L_20 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_19, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		ArrayElementTypeCheck (L_12, L_20);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 *)L_20);
		// for (var i = 0; i < sneezers.Length; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_005a:
	{
		// for (var i = 0; i < sneezers.Length; i++)
		int32_t L_22 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		// lifePoint.sizeDelta = new Vector2(currentHealth, lifePoint.sizeDelta.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_24 = __this->get_lifePoint_6();
		float L_25 = __this->get_currentHealth_5();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_26 = __this->get_lifePoint_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_29), L_25, L_28, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_24, L_29, /*hidden argument*/NULL);
		// if (hurt.sizeDelta.x > lifePoint.sizeDelta.x)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_30 = __this->get_hurt_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33 = __this->get_lifePoint_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_x_0();
		if ((!(((float)L_32) > ((float)L_35))))
		{
			goto IL_00e3;
		}
	}
	{
		// hurt.sizeDelta += new Vector2(-5f, 0) * Time.deltaTime * 2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_36 = __this->get_hurt_7();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_37 = L_36;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_37, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_39), (-5.0f), (0.0f), /*hidden argument*/NULL);
		float L_40;
		L_40 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		L_41 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_39, L_40, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		L_42 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_41, (2.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		L_43 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_38, L_42, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_37, L_43, /*hidden argument*/NULL);
		// } else if(hurt.sizeDelta.x < lifePoint.sizeDelta.x)
		goto IL_011b;
	}

IL_00e3:
	{
		// } else if(hurt.sizeDelta.x < lifePoint.sizeDelta.x)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_44 = __this->get_hurt_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_47 = __this->get_lifePoint_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_x_0();
		if ((!(((float)L_46) < ((float)L_49))))
		{
			goto IL_011b;
		}
	}
	{
		// hurt.sizeDelta = lifePoint.sizeDelta;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_50 = __this->get_hurt_7();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_51 = __this->get_lifePoint_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52;
		L_52 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_51, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_50, L_52, /*hidden argument*/NULL);
	}

IL_011b:
	{
		// if (currentHealth < maxHealth)
		float L_53 = __this->get_currentHealth_5();
		if ((!(((float)L_53) < ((float)(200.0f)))))
		{
			goto IL_0140;
		}
	}
	{
		// currentHealth += 10f * Time.deltaTime;
		float L_54 = __this->get_currentHealth_5();
		float L_55;
		L_55 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_currentHealth_5(((float)il2cpp_codegen_add((float)L_54, (float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_55)))));
	}

IL_0140:
	{
		// if (currentHealth <= 0)
		float L_56 = __this->get_currentHealth_5();
		if ((!(((float)L_56) <= ((float)(0.0f)))))
		{
			goto IL_0158;
		}
	}
	{
		// gameOverScreen.Setup();
		GameOverScreen_t66B7C93D73D16C603457FEA3A5424F7DDB6B68A7 * L_57 = __this->get_gameOverScreen_8();
		GameOverScreen_Setup_m60403B88C0C4EAA94E764F4088E58222C321CF34(L_57, /*hidden argument*/NULL);
	}

IL_0158:
	{
		// }
		return;
	}
}
// System.Void HealthBar::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_OnTriggerEnter2D_m7FDECEA4D4D3858F2DF52F0432C9E6647C20E70D (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFlashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924_m3E1CE6110DCE0897543F033BD820BA3FB68BD4F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral164468D20E53CEDA73DE1842CD74D791BF9E1524);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61D831FB27C3EE64727050A9CE03D79E3053844D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Virus")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// currentHealth = currentHealth - 50f;
		float L_4 = __this->get_currentHealth_5();
		__this->set_currentHealth_5(((float)il2cpp_codegen_subtract((float)L_4, (float)(50.0f))));
		// Debug.Log("virus!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral164468D20E53CEDA73DE1842CD74D791BF9E1524, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// if (other.gameObject.tag == "Sneezer")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral9C3BD08CF515218453EA4D84246C6232BC225F4C, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// currentHealth = 0f;
		__this->set_currentHealth_5((0.0f));
		// Debug.Log("You die!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral61D831FB27C3EE64727050A9CE03D79E3053844D, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// if (other.gameObject.tag == "red")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		// Flashing flashImage = other.gameObject.GetComponent<Flashing>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * L_15;
		L_15 = GameObject_GetComponent_TisFlashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924_m3E1CE6110DCE0897543F033BD820BA3FB68BD4F1(L_14, /*hidden argument*/GameObject_GetComponent_TisFlashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924_m3E1CE6110DCE0897543F033BD820BA3FB68BD4F1_RuntimeMethod_var);
		// flashImage.StartFlash(1.5f, 0.5f);
		Flashing_StartFlash_m6339EC924F006002F9F647A86F8663D9311B3EE0(L_15, (1.5f), (0.5f), /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void HealthBar::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_OnTriggerStay2D_mB2E86438AECA9D80380FF70A87C7323EC67CB6F4 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A2B97FAC29795993EFAD203700ABDF745F54FFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "red")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// currentHealth -= 1.2f ;
		float L_4 = __this->get_currentHealth_5();
		__this->set_currentHealth_5(((float)il2cpp_codegen_subtract((float)L_4, (float)(1.20000005f))));
		// Debug.Log("Too close!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3A2B97FAC29795993EFAD203700ABDF745F54FFB, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m0D26699B0FC0E360EE6F5D4B80FE0D2622F0AA48 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
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
// System.Void HealthyMan::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_Start_mD2E642FD262A2624EE20938485EB2F628A248298 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movePoint.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_movePoint_7();
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// moveSpeed = normalMoveSpeed;
		float L_1 = __this->get_normalMoveSpeed_6();
		__this->set_moveSpeed_5(L_1);
		// m_animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2;
		L_2 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_m_animator_11(L_2);
		// selfCollider = sneezer.GetComponent<CapsuleCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_sneezer_8();
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_4;
		L_4 = GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A(L_3, /*hidden argument*/GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		__this->set_selfCollider_9(L_4);
		// }
		return;
	}
}
// System.Void HealthyMan::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_FixedUpdate_m9C9C9B67A97479962009945D3017ADE2021896B6 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D304D6C35DA71CCCA61813D85BB45772EE66A1E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(!m_animator.GetCurrentAnimatorStateInfo(0).IsName("sick"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_m_animator_11();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), _stringLiteral0D304D6C35DA71CCCA61813D85BB45772EE66A1E, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		// moveSpeed = normalMoveSpeed;
		float L_3 = __this->get_normalMoveSpeed_6();
		__this->set_moveSpeed_5(L_3);
		// Wander();
		HealthyMan_Wander_m727146A19260FB2E7DB442011B44D74E1DAE4C62(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void HealthyMan::ChangeAnimationState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_ChangeAnimationState_m562BB3CB812F856419815215227420723BE22BE8 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, String_t* ___newState0, const RuntimeMethod* method)
{
	{
		// if (currentState == newState) return;
		String_t* L_0 = __this->get_currentState_12();
		String_t* L_1 = ___newState0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (currentState == newState) return;
		return;
	}

IL_000f:
	{
		// m_animator.Play(newState);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_m_animator_11();
		String_t* L_4 = ___newState0;
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_3, L_4, /*hidden argument*/NULL);
		// currentState = newState;
		String_t* L_5 = ___newState0;
		__this->set_currentState_12(L_5);
		// }
		return;
	}
}
// System.Void HealthyMan::Wander()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_Wander_m727146A19260FB2E7DB442011B44D74E1DAE4C62 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_movePoint_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_moveSpeed_5();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_2, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_7, /*hidden argument*/NULL);
		// if (Vector3.Distance(this.transform.position, movePoint.position) <= 0.05f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_movePoint_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_9, L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) <= ((float)(0.0500000007f)))))
		{
			goto IL_0151;
		}
	}
	{
		// direction = Random.Range(0, 4);
		int32_t L_13;
		L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		__this->set_direction_4(L_13);
		// if (direction == 0)//right
		int32_t L_14 = __this->get_direction_4();
		if (L_14)
		{
			goto IL_008f;
		}
	}
	{
		// deltaPos = new Vector3(1, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// ChangeAnimationState(RIGHT);
		HealthyMan_ChangeAnimationState_m562BB3CB812F856419815215227420723BE22BE8(__this, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, /*hidden argument*/NULL);
		// }
		goto IL_0108;
	}

IL_008f:
	{
		// else if (direction == 1)//left
		int32_t L_15 = __this->get_direction_4();
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_00bb;
		}
	}
	{
		// deltaPos = new Vector3(-1, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// ChangeAnimationState(LEFT);
		HealthyMan_ChangeAnimationState_m562BB3CB812F856419815215227420723BE22BE8(__this, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, /*hidden argument*/NULL);
		// }
		goto IL_0108;
	}

IL_00bb:
	{
		// else if (direction == 2)//up
		int32_t L_16 = __this->get_direction_4();
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_00e7;
		}
	}
	{
		// deltaPos = new Vector3(0, 1, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		// ChangeAnimationState(BACK);
		HealthyMan_ChangeAnimationState_m562BB3CB812F856419815215227420723BE22BE8(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/NULL);
		// }
		goto IL_0108;
	}

IL_00e7:
	{
		// deltaPos = new Vector3(0, -1, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		// ChangeAnimationState(FRONT);
		HealthyMan_ChangeAnimationState_m562BB3CB812F856419815215227420723BE22BE8(__this, _stringLiteral19209A8C4F49219A7E67DA4797FBF05AB308F21D, /*hidden argument*/NULL);
	}

IL_0108:
	{
		// if (!Physics2D.OverlapCircle(movePoint.position + deltaPos, 0.2f, whatStopMovement))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_movePoint_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_22 = __this->get_whatStopMovement_10();
		int32_t L_23;
		L_23 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24;
		L_24 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_21, (0.200000003f), L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0151;
		}
	}
	{
		// movePoint.position += deltaPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = __this->get_movePoint_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = L_26;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_28, L_29, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_27, L_30, /*hidden argument*/NULL);
	}

IL_0151:
	{
		// }
		return;
	}
}
// System.Void HealthyMan::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_OnTriggerEnter2D_m2FBAA89CB2511D7A011426989ED91676226F15FF (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral164468D20E53CEDA73DE1842CD74D791BF9E1524);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0ADEF462E4FC641D5E83DA767E5AB93D7548E09);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Virus")//virus
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// Debug.Log("virus!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral164468D20E53CEDA73DE1842CD74D791BF9E1524, /*hidden argument*/NULL);
		// sick();
		HealthyMan_sick_m8516D7D2F9E1DE1ACCD1E238B5D4999F45131F15(__this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (collision == selfCollider)//sneezer
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___collision0;
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_7 = __this->get_selfCollider_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.Log("Sneezer!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA0ADEF462E4FC641D5E83DA767E5AB93D7548E09, /*hidden argument*/NULL);
		// sick();
		HealthyMan_sick_m8516D7D2F9E1DE1ACCD1E238B5D4999F45131F15(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void HealthyMan::sick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_sick_m8516D7D2F9E1DE1ACCD1E238B5D4999F45131F15 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D304D6C35DA71CCCA61813D85BB45772EE66A1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral944818ACFD72D371D8AE78CB7EC2A453B12D8165);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangeAnimationState(SICK);
		HealthyMan_ChangeAnimationState_m562BB3CB812F856419815215227420723BE22BE8(__this, _stringLiteral0D304D6C35DA71CCCA61813D85BB45772EE66A1E, /*hidden argument*/NULL);
		// Invoke("sickCompleted", 1.3f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral944818ACFD72D371D8AE78CB7EC2A453B12D8165, (1.29999995f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HealthyMan::sickCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan_sickCompleted_mA1C0591D89C096B3471E5CE91A9E117360A1E5A7 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// Instantiate(sneezer, movePoint.position, movePoint.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_sneezer_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_movePoint_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_movePoint_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HealthyMan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthyMan__ctor_m5716B176FD6DF0C4AE36BF6FE028AC8D9709A5E5 (HealthyMan_t861DFAC5A32EE80EC9491D4A362DB55671583089 * __this, const RuntimeMethod* method)
{
	{
		// public float normalMoveSpeed = 0.5f;
		__this->set_normalMoveSpeed_6((0.5f));
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
// System.Void Hero::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Awake_m405A38D0D7A8E8DCB9CF0EF6B66E0FD933FD10EB (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_m_animator_19(L_0);
		// }
		return;
	}
}
// System.Void Hero::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Start_mD908DB6FB0BC6849D6B29A2996F29988FC43B182 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// movePoint.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_movePoint_5();
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hero::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Update_mF0AC6E2FE7210FABB9F1129E79669EA4D60E869E (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01D7AEF4D9531356229FACB631ED8124CA4A7C85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7305679BF7088B560FABABAEF7538459EE58F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral185C0BE1F5E22EC5A91B0131976A591F3B64138A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2012CD1D4697552C7653A09FCA6A5112BADCB040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3423A75E0CB1F9C24AD3071DC14FF265A9B1AEE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral520FC3D7DD30CB1ABF7A3E4BAF19B34FA197DAB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7EDDFA014C2B22D6EAD981A2C20AF60763EC56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927FB77463376857569CF8E7C17F14E05C9D46C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5664189349015241CD069F7E006F915758DBD33);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_moveSpeed_4();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_2, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_7, /*hidden argument*/NULL);
		// if (Vector3.Distance(this.transform.position, movePoint.position) <= 0.05f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_9, L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) <= ((float)(0.0500000007f)))))
		{
			goto IL_04a4;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow)) // Press right button
		bool L_13;
		L_13 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_010f;
		}
	}
	{
		// if (direction == 0) // Already facing right
		int32_t L_14 = __this->get_direction_6();
		if (L_14)
		{
			goto IL_00fd;
		}
	}
	{
		// if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(1f, 0f, 0f), 0.2f, whatStopMovement)) // Collider detection
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_16, L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_18, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_20 = __this->get_whatStopMovement_7();
		int32_t L_21;
		L_21 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_22;
		L_22 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_19, (0.200000003f), L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_010f;
		}
	}
	{
		// movePoint.position += new Vector3(1f, 0f, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = L_24;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_27, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_28, /*hidden argument*/NULL);
		// ChangeAnimationState(RIGHT_MOVE);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral927FB77463376857569CF8E7C17F14E05C9D46C4, /*hidden argument*/NULL);
		// Invoke("WalkCompleted", ANI_TIME);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral2012CD1D4697552C7653A09FCA6A5112BADCB040, (0.850000024f), /*hidden argument*/NULL);
		// }
		goto IL_010f;
	}

IL_00fd:
	{
		// direction = 0;
		__this->set_direction_6(0);
		// ChangeAnimationState(RIGHT_STANDING);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral0A7305679BF7088B560FABABAEF7538459EE58F4, /*hidden argument*/NULL);
	}

IL_010f:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow)) // Press left button
		bool L_29;
		L_29 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01c8;
		}
	}
	{
		// if (direction == 1) // Already facing left
		int32_t L_30 = __this->get_direction_6();
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_01b6;
		}
	}
	{
		// if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(-1f, 0f, 0f), 0.2f, whatStopMovement)) // Collider detection
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_34, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_36 = __this->get_whatStopMovement_7();
		int32_t L_37;
		L_37 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_38;
		L_38 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_35, (0.200000003f), L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_38, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_01c8;
		}
	}
	{
		// movePoint.position += new Vector3(-1f, 0f, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = __this->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = L_40;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_43), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_42, L_43, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_41, L_44, /*hidden argument*/NULL);
		// ChangeAnimationState(LEFT_MOVE);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral3423A75E0CB1F9C24AD3071DC14FF265A9B1AEE3, /*hidden argument*/NULL);
		// Invoke("WalkCompleted", ANI_TIME);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral2012CD1D4697552C7653A09FCA6A5112BADCB040, (0.850000024f), /*hidden argument*/NULL);
		// }
		goto IL_01c8;
	}

IL_01b6:
	{
		// direction = 1;
		__this->set_direction_6(1);
		// ChangeAnimationState(LEFT_STANDING);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteralF5664189349015241CD069F7E006F915758DBD33, /*hidden argument*/NULL);
	}

IL_01c8:
	{
		// if (Input.GetKeyDown(KeyCode.UpArrow)) // Press left button
		bool L_45;
		L_45 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)273), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0281;
		}
	}
	{
		// if (direction == 2) // Already facing left
		int32_t L_46 = __this->get_direction_6();
		if ((!(((uint32_t)L_46) == ((uint32_t)2))))
		{
			goto IL_026f;
		}
	}
	{
		// if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(0f, 1f, 0f), 0.2f, whatStopMovement)) // Collider detection
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_49), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_48, L_49, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		L_51 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_50, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_52 = __this->get_whatStopMovement_7();
		int32_t L_53;
		L_53 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_54;
		L_54 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_51, (0.200000003f), L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_0281;
		}
	}
	{
		// movePoint.position += new Vector3(0f, 1f, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = __this->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57 = L_56;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_59), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_58, L_59, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_57, L_60, /*hidden argument*/NULL);
		// ChangeAnimationState(BACK_MOVE);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral520FC3D7DD30CB1ABF7A3E4BAF19B34FA197DAB6, /*hidden argument*/NULL);
		// Invoke("WalkCompleted", ANI_TIME);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral2012CD1D4697552C7653A09FCA6A5112BADCB040, (0.850000024f), /*hidden argument*/NULL);
		// }
		goto IL_0281;
	}

IL_026f:
	{
		// direction = 2;
		__this->set_direction_6(2);
		// ChangeAnimationState(BACK_STANDING);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral01D7AEF4D9531356229FACB631ED8124CA4A7C85, /*hidden argument*/NULL);
	}

IL_0281:
	{
		// if (Input.GetKeyDown(KeyCode.DownArrow)) // Press down button
		bool L_61;
		L_61 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)274), /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_033a;
		}
	}
	{
		// if (direction == 3) // Already facing down
		int32_t L_62 = __this->get_direction_6();
		if ((!(((uint32_t)L_62) == ((uint32_t)3))))
		{
			goto IL_0328;
		}
	}
	{
		// if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(0f, -1f, 0f), 0.2f, whatStopMovement)) // Collider detection
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_65), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_64, L_65, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		L_67 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_66, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_68 = __this->get_whatStopMovement_7();
		int32_t L_69;
		L_69 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_70;
		L_70 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_67, (0.200000003f), L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_70, /*hidden argument*/NULL);
		if (L_71)
		{
			goto IL_033a;
		}
	}
	{
		// movePoint.position += new Vector3(0f, -1f, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72 = __this->get_movePoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73 = L_72;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_75), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_74, L_75, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_73, L_76, /*hidden argument*/NULL);
		// ChangeAnimationState(FRONT_MOVE);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral6F7EDDFA014C2B22D6EAD981A2C20AF60763EC56, /*hidden argument*/NULL);
		// Invoke("WalkCompleted",ANI_TIME);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral2012CD1D4697552C7653A09FCA6A5112BADCB040, (0.850000024f), /*hidden argument*/NULL);
		// }
		goto IL_033a;
	}

IL_0328:
	{
		// direction = 3;
		__this->set_direction_6(3);
		// ChangeAnimationState(FRONT_STANDING);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral185C0BE1F5E22EC5A91B0131976A591F3B64138A, /*hidden argument*/NULL);
	}

IL_033a:
	{
		// bulletCount = Mathf.Clamp(bulletCount + Time.deltaTime * BULLET_PER_SECOND , 0f, MAX_BULLET);
		float L_77 = __this->get_bulletCount_12();
		float L_78;
		L_78 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_79;
		L_79 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)L_77, (float)((float)il2cpp_codegen_multiply((float)L_78, (float)(0.200000003f))))), (0.0f), (3.0f), /*hidden argument*/NULL);
		__this->set_bulletCount_12(L_79);
		// if (bulletCount >= 2)
		float L_80 = __this->get_bulletCount_12();
		if ((!(((float)L_80) >= ((float)(2.0f)))))
		{
			goto IL_03b6;
		}
	}
	{
		// Cure_0.sizeDelta = new Vector2(bulletCount - 2f, CURE_HEIGHT);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_81 = __this->get_Cure_0_9();
		float L_82 = __this->get_bulletCount_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_83), ((float)il2cpp_codegen_subtract((float)L_82, (float)(2.0f))), (0.300000012f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_81, L_83, /*hidden argument*/NULL);
		// Cure_1.sizeDelta = CURE_SIZE;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_84 = __this->get_Cure_1_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85 = __this->get_CURE_SIZE_17();
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_84, L_85, /*hidden argument*/NULL);
		// Cure_2.sizeDelta = CURE_SIZE;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_86 = __this->get_Cure_2_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_87 = __this->get_CURE_SIZE_17();
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_86, L_87, /*hidden argument*/NULL);
		// }
		goto IL_047a;
	}

IL_03b6:
	{
		// else if (bulletCount < 2 && bulletCount >= 1)
		float L_88 = __this->get_bulletCount_12();
		if ((!(((float)L_88) < ((float)(2.0f)))))
		{
			goto IL_041e;
		}
	}
	{
		float L_89 = __this->get_bulletCount_12();
		if ((!(((float)L_89) >= ((float)(1.0f)))))
		{
			goto IL_041e;
		}
	}
	{
		// Cure_0.sizeDelta = new Vector2(0f, CURE_HEIGHT);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_90 = __this->get_Cure_0_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_91), (0.0f), (0.300000012f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_90, L_91, /*hidden argument*/NULL);
		// Cure_1.sizeDelta = new Vector2(bulletCount - 1f, 0.3f);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_92 = __this->get_Cure_1_10();
		float L_93 = __this->get_bulletCount_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_94), ((float)il2cpp_codegen_subtract((float)L_93, (float)(1.0f))), (0.300000012f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_92, L_94, /*hidden argument*/NULL);
		// Cure_2.sizeDelta = CURE_SIZE;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_95 = __this->get_Cure_2_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_96 = __this->get_CURE_SIZE_17();
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_95, L_96, /*hidden argument*/NULL);
		// }
		goto IL_047a;
	}

IL_041e:
	{
		// else if (bulletCount <= 1)
		float L_97 = __this->get_bulletCount_12();
		if ((!(((float)L_97) <= ((float)(1.0f)))))
		{
			goto IL_047a;
		}
	}
	{
		// Cure_0.sizeDelta = new Vector2(0f, CURE_HEIGHT);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_98 = __this->get_Cure_0_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_99;
		memset((&L_99), 0, sizeof(L_99));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_99), (0.0f), (0.300000012f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_98, L_99, /*hidden argument*/NULL);
		// Cure_1.sizeDelta = new Vector2(0f, CURE_HEIGHT);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_100 = __this->get_Cure_1_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_101;
		memset((&L_101), 0, sizeof(L_101));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_101), (0.0f), (0.300000012f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_100, L_101, /*hidden argument*/NULL);
		// Cure_2.sizeDelta = new Vector2(bulletCount, CURE_HEIGHT);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_102 = __this->get_Cure_2_11();
		float L_103 = __this->get_bulletCount_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_104), L_103, (0.300000012f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_102, L_104, /*hidden argument*/NULL);
	}

IL_047a:
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_105;
		L_105 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_105)
		{
			goto IL_04a4;
		}
	}
	{
		// if (bulletCount >= 1f)
		float L_106 = __this->get_bulletCount_12();
		if ((!(((float)L_106) >= ((float)(1.0f)))))
		{
			goto IL_0497;
		}
	}
	{
		// Shoot();
		Hero_Shoot_mCFF92564DEB5F0B978AD19D7BAC9700B41D7B244(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0497:
	{
		// StartCoroutine(redAMoment());
		RuntimeObject* L_107;
		L_107 = Hero_redAMoment_m35424717BA0498F0029E7FE47647288E3B297745(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_108;
		L_108 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_107, /*hidden argument*/NULL);
	}

IL_04a4:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Hero::redAMoment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hero_redAMoment_m35424717BA0498F0029E7FE47647288E3B297745 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * L_0 = (U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A *)il2cpp_codegen_object_new(U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A_il2cpp_TypeInfo_var);
		U3CredAMomentU3Ed__28__ctor_m83EB80572737A35B8FC6E8FA6CBD8B18A972A208(L_0, 0, /*hidden argument*/NULL);
		U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Hero::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Shoot_mCFF92564DEB5F0B978AD19D7BAC9700B41D7B244 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(bullet_prefab, movePoint.position, movePoint.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_bullet_prefab_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_movePoint_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_movePoint_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// bulletCount -= 1f;
		float L_6 = __this->get_bulletCount_12();
		__this->set_bulletCount_12(((float)il2cpp_codegen_subtract((float)L_6, (float)(1.0f))));
		// }
		return;
	}
}
// System.Void Hero::ChangeAnimationState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, String_t* ___newState0, const RuntimeMethod* method)
{
	{
		// if (currentState == newState) return;
		String_t* L_0 = __this->get_currentState_18();
		String_t* L_1 = ___newState0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (currentState == newState) return;
		return;
	}

IL_000f:
	{
		// m_animator.Play(newState);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_m_animator_19();
		String_t* L_4 = ___newState0;
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_3, L_4, /*hidden argument*/NULL);
		// currentState = newState;
		String_t* L_5 = ___newState0;
		__this->set_currentState_18(L_5);
		// }
		return;
	}
}
// System.Void Hero::WalkCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_WalkCompleted_mFA6E7E54CD1478CA66657E1A0868402D6D050328 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01D7AEF4D9531356229FACB631ED8124CA4A7C85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7305679BF7088B560FABABAEF7538459EE58F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral185C0BE1F5E22EC5A91B0131976A591F3B64138A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3423A75E0CB1F9C24AD3071DC14FF265A9B1AEE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral520FC3D7DD30CB1ABF7A3E4BAF19B34FA197DAB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7EDDFA014C2B22D6EAD981A2C20AF60763EC56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927FB77463376857569CF8E7C17F14E05C9D46C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5664189349015241CD069F7E006F915758DBD33);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_animator.GetCurrentAnimatorStateInfo(0).IsName("front_move"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_m_animator_19();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), _stringLiteral6F7EDDFA014C2B22D6EAD981A2C20AF60763EC56, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// ChangeAnimationState(FRONT_STANDING);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral185C0BE1F5E22EC5A91B0131976A591F3B64138A, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if (m_animator.GetCurrentAnimatorStateInfo(0).IsName("back_move"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_m_animator_19();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), _stringLiteral520FC3D7DD30CB1ABF7A3E4BAF19B34FA197DAB6, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// ChangeAnimationState(BACK_STANDING);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral01D7AEF4D9531356229FACB631ED8124CA4A7C85, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (m_animator.GetCurrentAnimatorStateInfo(0).IsName("left_move"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_m_animator_19();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_7;
		L_7 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_6, 0, /*hidden argument*/NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), _stringLiteral3423A75E0CB1F9C24AD3071DC14FF265A9B1AEE3, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0072;
		}
	}
	{
		// ChangeAnimationState(LEFT_STANDING);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteralF5664189349015241CD069F7E006F915758DBD33, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// if (m_animator.GetCurrentAnimatorStateInfo(0).IsName("right_move"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_m_animator_19();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_10;
		L_10 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_9, 0, /*hidden argument*/NULL);
		V_0 = L_10;
		bool L_11;
		L_11 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), _stringLiteral927FB77463376857569CF8E7C17F14E05C9D46C4, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0098;
		}
	}
	{
		// ChangeAnimationState(RIGHT_STANDING);
		Hero_ChangeAnimationState_mB93CD54222242ED95D67010CD936831C42DB0738(__this, _stringLiteral0A7305679BF7088B560FABABAEF7538459EE58F4, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void Hero::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_OnTriggerEnter2D_m91E39B55927273C0CA663B61D647E6F1444018C0 (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01BD520A0571B9A04E63678996E733F443AD32B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87FC22D6220B4FCFE545B0302B4CE287924997CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Syringe")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral87FC22D6220B4FCFE545B0302B4CE287924997CE, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.Log("syringe!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral01BD520A0571B9A04E63678996E733F443AD32B4, /*hidden argument*/NULL);
		// bulletCount = 3;
		__this->set_bulletCount_12((3.0f));
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Hero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero__ctor_m3CB5FC229DA961BA568F2F9E95769A890C3C819C (Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * __this, const RuntimeMethod* method)
{
	{
		// float moveSpeed = 2f;
		__this->set_moveSpeed_4((2.0f));
		// public int direction = 1; // 0: right, 1: left, 2: up, 3: down
		__this->set_direction_6(1);
		// float bulletCount = 3f;
		__this->set_bulletCount_12((3.0f));
		// Vector2 CURE_SIZE = new Vector2(CURE_WEIGHT, CURE_HEIGHT);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (1.0f), (0.300000012f), /*hidden argument*/NULL);
		__this->set_CURE_SIZE_17(L_0);
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
// System.Void RemainCountUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemainCountUI_Start_m3D6B5D7C5D030C4F695ED463F6C76E07513CB63E (RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// originalColor = this.gameObject.GetComponent<Text>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		__this->set_originalColor_6(L_2);
		// }
		return;
	}
}
// System.Void RemainCountUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemainCountUI_Update_m783184E4055E1B3630ED7685C180C4009BF26E5B (RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObject.GetComponent<Text>().text = countController.normalerCount.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 * L_2 = __this->get_countController_4();
		int32_t* L_3 = L_2->get_address_of_normalerCount_5();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// if (countController.normalerCount == 1)
		Count_tB08B9A28519F1A14D2AAD0E9C2B25F6E51107AF4 * L_5 = __this->get_countController_4();
		int32_t L_6 = L_5->get_normalerCount_5();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0085;
		}
	}
	{
		// elapsed += Time.deltaTime;
		float L_7 = __this->get_elapsed_5();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_elapsed_5(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// if (elapsed <= 0.5f) ChangeColor(Color.red);
		float L_9 = __this->get_elapsed_5();
		if ((!(((float)L_9) <= ((float)(0.5f)))))
		{
			goto IL_0059;
		}
	}
	{
		// if (elapsed <= 0.5f) ChangeColor(Color.red);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		RemainCountUI_ChangeColor_m43B044D43F848D728CA635A99D5A9619BBC15A6E(__this, L_10, /*hidden argument*/NULL);
		return;
	}

IL_0059:
	{
		// else if (elapsed <= 1) ChangeColor(originalColor);
		float L_11 = __this->get_elapsed_5();
		if ((!(((float)L_11) <= ((float)(1.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		// else if (elapsed <= 1) ChangeColor(originalColor);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = __this->get_originalColor_6();
		RemainCountUI_ChangeColor_m43B044D43F848D728CA635A99D5A9619BBC15A6E(__this, L_12, /*hidden argument*/NULL);
		return;
	}

IL_0073:
	{
		// else elapsed %= 1; // back to 0
		float L_13 = __this->get_elapsed_5();
		__this->set_elapsed_5((fmodf(L_13, (1.0f))));
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void RemainCountUI::ChangeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemainCountUI_ChangeColor_m43B044D43F848D728CA635A99D5A9619BBC15A6E (RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObject.GetComponent<Text>().color = color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color0;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void RemainCountUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemainCountUI__ctor_m11254887DB93E7C74EFFA67903AFF3442D4536DA (RemainCountUI_t7B07DE826691DD6C5DF908E5868BCB9EF5ED9280 * __this, const RuntimeMethod* method)
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
// System.Void Sneezer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_Start_m8DCA3C0909D407D08B296E82D12E5E3FC72C48FD (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movePoint.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_movePoint_8();
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// m_animator=GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_m_animator_12(L_1);
		// moveSpeed = normalMoveSpeed;
		float L_2 = __this->get_normalMoveSpeed_7();
		__this->set_moveSpeed_6(L_2);
		// }
		return;
	}
}
// System.Void Sneezer::ChangeAnimationState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_ChangeAnimationState_m355AA76CF0E590BC0054FE24A979E017CD6BA9DE (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, String_t* ___newState0, const RuntimeMethod* method)
{
	{
		// if (currentState == newState) return;
		String_t* L_0 = __this->get_currentState_13();
		String_t* L_1 = ___newState0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (currentState == newState) return;
		return;
	}

IL_000f:
	{
		// m_animator.Play(newState);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_m_animator_12();
		String_t* L_4 = ___newState0;
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_3, L_4, /*hidden argument*/NULL);
		// currentState = newState;
		String_t* L_5 = ___newState0;
		__this->set_currentState_13(L_5);
		// }
		return;
	}
}
// System.Void Sneezer::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_LateUpdate_m4D0E7E0C6546203BE84C701BFDDCB55BA13D6491 (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Sneezer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_FixedUpdate_mB2091DB45C01D5B9273ABAEECD770A599977D146 (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7BF25ED5D93B932192FF2E34145EC81A78A2);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName("Sneeze"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_m_animator_12();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), _stringLiteralE7CA7BF25ED5D93B932192FF2E34145EC81A78A2, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		// moveSpeed = normalMoveSpeed;
		float L_3 = __this->get_normalMoveSpeed_7();
		__this->set_moveSpeed_6(L_3);
		// Wander();
		Sneezer_Wander_mCED2C1ABC7282B1D703C58920AD5D2940EFAF908(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Sneezer::Wander()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_Wander_mCED2C1ABC7282B1D703C58920AD5D2940EFAF908 (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E51C2985BB16B51490D35074DE51E0D5992F39F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral246FD2354269B93783757CA6CA680F79F322E378);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88CD27F21A7229AFD6EF695B12660AA1B0AF12E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3C59421CC8262B8F5DF5A641CF7DF683A68B4AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.transform.position = Vector3.MoveTowards(transform.position, movePoint.position, moveSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_movePoint_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_moveSpeed_6();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_2, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_7, /*hidden argument*/NULL);
		// if (Vector3.Distance(this.transform.position, movePoint.position) <= 0.05f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_movePoint_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_9, L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) <= ((float)(0.0500000007f)))))
		{
			goto IL_023e;
		}
	}
	{
		// verticalOrHorizontal = Random.Range(0, 2); // 0 -> horizontal, 1 -> vertical
		int32_t L_13;
		L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		__this->set_verticalOrHorizontal_4(L_13);
		// moveOrSneeze = Random.Range(-1, 2); // 0 -> sneeze, 1 or -1 -> move
		int32_t L_14;
		L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A((-1), 2, /*hidden argument*/NULL);
		__this->set_moveOrSneeze_5(L_14);
		// if (verticalOrHorizontal == 0) // left and right
		int32_t L_15 = __this->get_verticalOrHorizontal_4();
		if (L_15)
		{
			goto IL_0159;
		}
	}
	{
		// if (moveOrSneeze == 0) // sneeze
		int32_t L_16 = __this->get_moveOrSneeze_5();
		if (L_16)
		{
			goto IL_00c2;
		}
	}
	{
		// if (!Physics2D.OverlapCircle(this.transform.position, 0.5f, virus_prefab))//there is no virus
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_18, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_20 = __this->get_virus_prefab_10();
		int32_t L_21;
		L_21 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_22;
		L_22 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_19, (0.5f), L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00b7;
		}
	}
	{
		// Sneeze();
		Sneezer_Sneeze_m1607D8297D8A19BC13E39AC47ACE252399A82363(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b7:
	{
		// else Debug.Log("virus detected, no sneeze");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0E51C2985BB16B51490D35074DE51E0D5992F39F, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c2:
	{
		// if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(moveOrSneeze, 0f, 0f), 0.2f, whatStopsMovement))//accessible
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get_movePoint_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		int32_t L_26 = __this->get_moveOrSneeze_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), ((float)((float)L_26)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_25, L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_28, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_30 = __this->get_whatStopsMovement_9();
		int32_t L_31;
		L_31 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_32;
		L_32 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_29, (0.200000003f), L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023e;
		}
	}
	{
		// movePoint.position += new Vector3(moveOrSneeze, 0f, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_movePoint_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = L_34;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		int32_t L_37 = __this->get_moveOrSneeze_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_38), ((float)((float)L_37)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_36, L_38, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_39, /*hidden argument*/NULL);
		// if (moveOrSneeze == 1) ChangeAnimationState(RIGHTMOVE);
		int32_t L_40 = __this->get_moveOrSneeze_5();
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_014d;
		}
	}
	{
		// if (moveOrSneeze == 1) ChangeAnimationState(RIGHTMOVE);
		Sneezer_ChangeAnimationState_m355AA76CF0E590BC0054FE24A979E017CD6BA9DE(__this, _stringLiteral88CD27F21A7229AFD6EF695B12660AA1B0AF12E0, /*hidden argument*/NULL);
		return;
	}

IL_014d:
	{
		// else ChangeAnimationState(LEFTMOVE);
		Sneezer_ChangeAnimationState_m355AA76CF0E590BC0054FE24A979E017CD6BA9DE(__this, _stringLiteralE3C59421CC8262B8F5DF5A641CF7DF683A68B4AF, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0159:
	{
		// else if (verticalOrHorizontal == 1) // up and down
		int32_t L_41 = __this->get_verticalOrHorizontal_4();
		if ((!(((uint32_t)L_41) == ((uint32_t)1))))
		{
			goto IL_023e;
		}
	}
	{
		// if (moveOrSneeze == 0) // sneeze
		int32_t L_42 = __this->get_moveOrSneeze_5();
		if (L_42)
		{
			goto IL_01ab;
		}
	}
	{
		// if (!Physics2D.OverlapCircle(this.transform.position, 0.5f, virus_prefab))//there is no virus
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_44, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_46 = __this->get_virus_prefab_10();
		int32_t L_47;
		L_47 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_48;
		L_48 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_45, (0.5f), L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_01a0;
		}
	}
	{
		// Sneeze();
		Sneezer_Sneeze_m1607D8297D8A19BC13E39AC47ACE252399A82363(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01a0:
	{
		// else Debug.Log("virus detected, no sneeze");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0E51C2985BB16B51490D35074DE51E0D5992F39F, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01ab:
	{
		// if (!Physics2D.OverlapCircle(movePoint.position + new Vector3(0f, moveOrSneeze, 0f), 0.2f, whatStopsMovement))//accessible
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = __this->get_movePoint_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		int32_t L_52 = __this->get_moveOrSneeze_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_53), (0.0f), ((float)((float)L_52)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_51, L_53, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55;
		L_55 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_54, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_56 = __this->get_whatStopsMovement_9();
		int32_t L_57;
		L_57 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_58;
		L_58 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_55, (0.200000003f), L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_58, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_023e;
		}
	}
	{
		// movePoint.position += new Vector3(0f, moveOrSneeze, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = __this->get_movePoint_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61 = L_60;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_61, /*hidden argument*/NULL);
		int32_t L_63 = __this->get_moveOrSneeze_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_64), (0.0f), ((float)((float)L_63)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_62, L_64, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_61, L_65, /*hidden argument*/NULL);
		// if (moveOrSneeze == 1) ChangeAnimationState(BACK);
		int32_t L_66 = __this->get_moveOrSneeze_5();
		if ((!(((uint32_t)L_66) == ((uint32_t)1))))
		{
			goto IL_0233;
		}
	}
	{
		// if (moveOrSneeze == 1) ChangeAnimationState(BACK);
		Sneezer_ChangeAnimationState_m355AA76CF0E590BC0054FE24A979E017CD6BA9DE(__this, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, /*hidden argument*/NULL);
		return;
	}

IL_0233:
	{
		// else ChangeAnimationState(FRONT);
		Sneezer_ChangeAnimationState_m355AA76CF0E590BC0054FE24A979E017CD6BA9DE(__this, _stringLiteral246FD2354269B93783757CA6CA680F79F322E378, /*hidden argument*/NULL);
	}

IL_023e:
	{
		// }
		return;
	}
}
// System.Void Sneezer::Sneeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_Sneeze_m1607D8297D8A19BC13E39AC47ACE252399A82363 (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BCC8BA7F11412EF1F2FE942C139928CA82F8500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7BF25ED5D93B932192FF2E34145EC81A78A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangeAnimationState(SNEEZE);
		Sneezer_ChangeAnimationState_m355AA76CF0E590BC0054FE24A979E017CD6BA9DE(__this, _stringLiteralE7CA7BF25ED5D93B932192FF2E34145EC81A78A2, /*hidden argument*/NULL);
		// Invoke("SneezeCompleted", 1f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral8BCC8BA7F11412EF1F2FE942C139928CA82F8500, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Sneezer::SneezeCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer_SneezeCompleted_m893AD36944A7FA820F9C7BE7FE169009247E180F (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67F92B3074C698F2665F4ABD311629F01811A5A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(virus, this.transform.position-new Vector3(0f,0.3f,0f), movePoint.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_virus_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), (0.300000012f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_movePoint_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_4, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// ChangeAnimationState(STANDING);
		Sneezer_ChangeAnimationState_m355AA76CF0E590BC0054FE24A979E017CD6BA9DE(__this, _stringLiteral67F92B3074C698F2665F4ABD311629F01811A5A3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Sneezer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sneezer__ctor_mE69DEFA772D1D3C349136130176A1EFC446476E7 (Sneezer_tAE476B94989C5E30980673D445224028672F0E60 * __this, const RuntimeMethod* method)
{
	{
		// public float normalMoveSpeed = 0.5f;
		__this->set_normalMoveSpeed_7((0.5f));
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
// System.Void StartScreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScreen_Update_m77C76338EB0D4664F6BD1C8EB5C56EF9A3ED7089 (StartScreen_t0512CCC3FE265E0F5DFFA0B5DE3189CB934F0369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("Tutorial");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void StartScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScreen__ctor_m9B7B6DB6BF2334D24CA9804AFD0AEE80D6354F1D (StartScreen_t0512CCC3FE265E0F5DFFA0B5DE3189CB934F0369 * __this, const RuntimeMethod* method)
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
// System.Void Transparent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transparent_Start_m63F93AAD0935A2A4CC015E9563E654D83FAD7315 (Transparent_tFD27C5CD5B91CD5F8CC71F1B49B87383F78ED2AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s = this.gameObject.GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_s_4(L_1);
		// s.color = Color.red;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_s_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Transparent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transparent_Update_m9EF05DD58A7AE6C8C5F9C4DE7D61C17626292C44 (Transparent_tFD27C5CD5B91CD5F8CC71F1B49B87383F78ED2AA * __this, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (s.color[3] > 0.02f)
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_s_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Color_get_Item_mC494D8DA970140B064D80BA83B41A5982EED03AD((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), 3, /*hidden argument*/NULL);
		if ((!(((float)L_2) > ((float)(0.0199999996f)))))
		{
			goto IL_004b;
		}
	}
	{
		// s.color -= new Color(0, 0, 0, 0.004f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3 = __this->get_s_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = L_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_4, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (0.0f), (0.0f), (0.0f), (0.00400000019f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F(L_5, L_6, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// s.color += new Color(0, 0, 0, 0.5f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8 = __this->get_s_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_9 = L_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_9, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (0.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_10, L_11, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_9, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Transparent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transparent__ctor_m72E319B9855EBAE47FCAD854A5697DA083969A4C (Transparent_tFD27C5CD5B91CD5F8CC71F1B49B87383F78ED2AA * __this, const RuntimeMethod* method)
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
// System.Void TutorialScreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialScreen_Update_m1BE9F07DBB08657A4D4C2A075FE764634A1E09E6 (TutorialScreen_t08527FCCCC934167A8DF2D3AA4B1FD808CFB1E14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("MainScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TutorialScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialScreen__ctor_mBBA6B2429AC563948A1050C46046E03E5DDFF713 (TutorialScreen_t08527FCCCC934167A8DF2D3AA4B1FD808CFB1E14 * __this, const RuntimeMethod* method)
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
// System.Void WinScreen::Setup(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_Setup_m423C56EB8F7AFA4B58B5601E9C78A7611D8B30D7 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, int32_t ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral263AD42CB0B3B03911EF54765D4B7C6AF29E8AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC60AACA5AB68DE5C8D80D66ECB32F74FB35355CD);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// hero.GetComponent<Hero>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_hero_4();
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_1;
		L_1 = GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A(L_0, /*hidden argument*/GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// GameObject[] viruses = GameObject.FindGameObjectsWithTag("Virus");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral885E34073EED1363DAC9441BD07118D9CF0197B8, /*hidden argument*/NULL);
		// foreach (GameObject virus in viruses)
		V_0 = L_2;
		V_1 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (GameObject virus in viruses)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		// Destroy(virus);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002c:
	{
		// foreach (GameObject virus in viruses)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// pointsText.text = "You Save "+score.ToString() + " Resident(s) !";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_pointsText_5();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___score0), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral263AD42CB0B3B03911EF54765D4B7C6AF29E8AF8, L_12, _stringLiteralC60AACA5AB68DE5C8D80D66ECB32F74FB35355CD, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void WinScreen::RestartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_RestartButton_m57D339DD5F8497D6D346C585C8A58954E244F4D3 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinScreen::ExitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen_ExitButton_m1EF7F130E83A9CCBB077895A4275C8B8CDE3F4A5 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinScreen__ctor_m6D01D26820E170F5597F514EA1236B4ED50AB005 (WinScreen_t412A66A3B344AA9DCDF217C2908A7C67435B17BC * __this, const RuntimeMethod* method)
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
// System.Void Flashing/<Flash>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashU3Ed__4__ctor_m30FE617D2820D23508BF2899F35BB7E45F8DB9CB (U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Flashing/<Flash>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashU3Ed__4_System_IDisposable_Dispose_mD01A0FA6818BC66171E1AE2BD14AAE44090E1F04 (U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Flashing/<Flash>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFlashU3Ed__4_MoveNext_m7F8D65B74E2EAA17F92C25859A8639375F0B1EA8 (U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * V_1 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_0126;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float flashInDuration = sceondsForOneFlash / 2;
		float L_3 = __this->get_sceondsForOneFlash_2();
		__this->set_U3CflashInDurationU3E5__2_5(((float)((float)L_3/(float)(2.0f))));
		// for(float t = 0; t <= flashInDuration; t += Time.deltaTime)
		__this->set_U3CtU3E5__4_7((0.0f));
		goto IL_00ad;
	}

IL_0048:
	{
		// Color colorThisFrame = image.color;
		Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * L_4 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = L_4->get_image_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// colorThisFrame.a = Mathf.Lerp(0, maxAlpha, t / flashInDuration);
		float L_7 = __this->get_maxAlpha_4();
		float L_8 = __this->get_U3CtU3E5__4_7();
		float L_9 = __this->get_U3CflashInDurationU3E5__2_5();
		float L_10;
		L_10 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), L_7, ((float)((float)L_8/(float)L_9)), /*hidden argument*/NULL);
		(&V_2)->set_a_3(L_10);
		// image.color = colorThisFrame;
		Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * L_11 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12 = L_11->get_image_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = V_2;
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_12, L_13, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0094:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(float t = 0; t <= flashInDuration; t += Time.deltaTime)
		float L_14 = __this->get_U3CtU3E5__4_7();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__4_7(((float)il2cpp_codegen_add((float)L_14, (float)L_15)));
	}

IL_00ad:
	{
		// for(float t = 0; t <= flashInDuration; t += Time.deltaTime)
		float L_16 = __this->get_U3CtU3E5__4_7();
		float L_17 = __this->get_U3CflashInDurationU3E5__2_5();
		if ((((float)L_16) <= ((float)L_17)))
		{
			goto IL_0048;
		}
	}
	{
		// float flashOutDuration = sceondsForOneFlash / 2;
		float L_18 = __this->get_sceondsForOneFlash_2();
		__this->set_U3CflashOutDurationU3E5__3_6(((float)((float)L_18/(float)(2.0f))));
		// for(float t = 0; t <= flashOutDuration; t += Time.deltaTime)
		__this->set_U3CtU3E5__4_7((0.0f));
		goto IL_013f;
	}

IL_00da:
	{
		// Color colorThisFrame = image.color;
		Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * L_19 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_20 = L_19->get_image_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		L_21 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// colorThisFrame.a = Mathf.Lerp(maxAlpha, 0, t / flashOutDuration);
		float L_22 = __this->get_maxAlpha_4();
		float L_23 = __this->get_U3CtU3E5__4_7();
		float L_24 = __this->get_U3CflashOutDurationU3E5__3_6();
		float L_25;
		L_25 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_22, (0.0f), ((float)((float)L_23/(float)L_24)), /*hidden argument*/NULL);
		(&V_3)->set_a_3(L_25);
		// image.color = colorThisFrame;
		Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * L_26 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_27 = L_26->get_image_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = V_3;
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_27, L_28, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0126:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(float t = 0; t <= flashOutDuration; t += Time.deltaTime)
		float L_29 = __this->get_U3CtU3E5__4_7();
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtU3E5__4_7(((float)il2cpp_codegen_add((float)L_29, (float)L_30)));
	}

IL_013f:
	{
		// for(float t = 0; t <= flashOutDuration; t += Time.deltaTime)
		float L_31 = __this->get_U3CtU3E5__4_7();
		float L_32 = __this->get_U3CflashOutDurationU3E5__3_6();
		if ((((float)L_31) <= ((float)L_32)))
		{
			goto IL_00da;
		}
	}
	{
		// image.color = new Color(1, 0, 0, 0);
		Flashing_t11BE2FF551D5A8648AD0CE14B4EFDC2ECB26C924 * L_33 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_34 = L_33->get_image_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_35), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_34, L_35, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Flashing/<Flash>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFlashU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBD9AAF481794710575BEDD2E886C869B0BCCE03B (U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Flashing/<Flash>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashU3Ed__4_System_Collections_IEnumerator_Reset_mF12FCCDE80AFDE7DEB56125CA8272A1254F6FBDE (U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlashU3Ed__4_System_Collections_IEnumerator_Reset_mF12FCCDE80AFDE7DEB56125CA8272A1254F6FBDE_RuntimeMethod_var)));
	}
}
// System.Object Flashing/<Flash>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFlashU3Ed__4_System_Collections_IEnumerator_get_Current_mAB7C432DAAFDC5BD103AF2953DE9D8E7FA4AB06C (U3CFlashU3Ed__4_tD6953855579C11437D65FA021D844E33693453BC * __this, const RuntimeMethod* method)
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
// System.Void FreezeScreen/<CountDownToStart>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownToStartU3Ed__5__ctor_mA87D67C7FF8FD7A8041EA3FB2E8ACE15BA0526A4 (U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void FreezeScreen/<CountDownToStart>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownToStartU3Ed__5_System_IDisposable_Dispose_m6179E2FD1C81DD4FDFB6840047C2A7BEF31D5484 (U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean FreezeScreen/<CountDownToStart>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountDownToStartU3Ed__5_MoveNext_m33CD5C2C601E002AA4544ABAB266115034EE5D9A (U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD18EBBA2AF89EA6388E15BE5DB70F4D911F0FAD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// countdownTime = 3;
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_4 = V_1;
		L_4->set_countdownTime_7(3);
		// hero.GetComponent<Hero>().enabled = false;
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_hero_5();
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_7;
		L_7 = GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A(L_6, /*hidden argument*/GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_0038:
	{
		// countdownText.text = "Freezed until  " + countdownTime.ToString() + "s";
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_8 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = L_8->get_countdownText_6();
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_10 = V_1;
		int32_t* L_11 = L_10->get_address_of_countdownTime_7();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralFD18EBBA2AF89EA6388E15BE5DB70F4D911F0FAD, L_12, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_13);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_14, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0076:
	{
		__this->set_U3CU3E1__state_0((-1));
		// countdownTime -= 1;
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_15 = V_1;
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_16 = V_1;
		int32_t L_17 = L_16->get_countdownTime_7();
		L_15->set_countdownTime_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
	}

IL_008b:
	{
		// while (countdownTime > 0)
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_18 = V_1;
		int32_t L_19 = L_18->get_countdownTime_7();
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		// hero.GetComponent<Hero>().enabled = true;
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_hero_5();
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_22;
		L_22 = GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A(L_21, /*hidden argument*/GameObject_GetComponent_TisHero_t16A1E1C16C807818D862612A955C5FFB6C878D0C_m48CC480F16D1251203FA9B2C58AFAE013A0D511A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_22, (bool)1, /*hidden argument*/NULL);
		// this.gameObject.SetActive(false);
		FreezeScreen_t3F2E60E23BE27AC3DDC824DF44C6C77BED779C54 * L_23 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object FreezeScreen/<CountDownToStart>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountDownToStartU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF4873760A5BED41AA478540C414DCF07EDA8CE04 (U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void FreezeScreen/<CountDownToStart>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownToStartU3Ed__5_System_Collections_IEnumerator_Reset_mA79F6136EC357876DCC29B106374A3CDABF8A892 (U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountDownToStartU3Ed__5_System_Collections_IEnumerator_Reset_mA79F6136EC357876DCC29B106374A3CDABF8A892_RuntimeMethod_var)));
	}
}
// System.Object FreezeScreen/<CountDownToStart>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountDownToStartU3Ed__5_System_Collections_IEnumerator_get_Current_m1E33F36A0DD97041987C304DB0B630C403AF9161 (U3CCountDownToStartU3Ed__5_t39706AD06FBC0F567A92A6590566489078C9419B * __this, const RuntimeMethod* method)
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
// System.Void Hero/<redAMoment>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CredAMomentU3Ed__28__ctor_m83EB80572737A35B8FC6E8FA6CBD8B18A972A208 (U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Hero/<redAMoment>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CredAMomentU3Ed__28_System_IDisposable_Dispose_mAB3714D2ECCA00FA92DEE2F53D8F777B82A3AAA8 (U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Hero/<redAMoment>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CredAMomentU3Ed__28_MoveNext_m419D707C4BD7F4D37974AB41212E8A7A1BEEF9D1 (U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Cure_2.GetComponent<Image>().color = Color.red;
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_4 = V_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = L_4->get_Cure_2_11();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6;
		L_6 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_5, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Cure_2.GetComponent<Image>().color = new Color(0.3f, 0.9f, 1f, 1);
		Hero_t16A1E1C16C807818D862612A955C5FFB6C878D0C * L_9 = V_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = L_9->get_Cure_2_11();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11;
		L_11 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_10, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), (0.300000012f), (0.899999976f), (1.0f), (1.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// }
		return (bool)0;
	}
}
// System.Object Hero/<redAMoment>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CredAMomentU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m484FA840E4D9B01885D24F36BB5CBC5CD1F7A83F (U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Hero/<redAMoment>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CredAMomentU3Ed__28_System_Collections_IEnumerator_Reset_mE3BE26C20940A9A783BA346BFEC0A8E6DB2ABCEC (U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CredAMomentU3Ed__28_System_Collections_IEnumerator_Reset_mE3BE26C20940A9A783BA346BFEC0A8E6DB2ABCEC_RuntimeMethod_var)));
	}
}
// System.Object Hero/<redAMoment>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CredAMomentU3Ed__28_System_Collections_IEnumerator_get_Current_mD7222050AF68B22C4BCB9D90858322E57EC1C0C8 (U3CredAMomentU3Ed__28_t31B1F8587FC8203D6F3DDCC71FAA94275E71B12A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
