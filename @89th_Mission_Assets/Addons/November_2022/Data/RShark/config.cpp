class cfgPatches
{
	class RShark_patch
	{
		author="89th Mod Team";
		name="BInnes";
		units[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"V_FZ_Armor",
		};
	};
};
class cfgWeapons
{
	class OPTRE_UNSC_PatrolCap_Marines;
	class VES_M52A_MAR_Rifleman_C;
	class VES_M52A_MAR_Corpsman_A;
	class VES_CH252_MAR_Light;
	class VES_CH252_MAR_Vacuum;
	class ItemInfo;
	class VestItem;
	//Patrol Cap
	class RShark_PatrolCap: OPTRE_UNSC_PatrolCap_Marines
	{
		dlc="89thJTF";
		author="Rojas";
		displayName="Red Sharks Patrol Cap";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\RShark\RShark_PatrolCap_AD.paa"
		};
	};
	//Vests
	class RShark_M52A_Rifleman: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="Red Sharks M52A (Rifleman)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\RShark\RShark_M52_Softvest_AD.paa",
			"November_2022\Data\RShark\RShark_m52_Marine_Chestplate_AD.paa",
			"November_2022\Data\RShark\RShark_B52_underlay_Ad.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\RShark\RShark_M52D_ARMOR_Ad.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
				class Arms: Abdomen {hitpointName="HitArms";};
				class Body: Abdomen {hitpointName="HitBody";};
				class Chest: Abdomen {hitpointName="HitChest";};
				class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
				class Hands: Abdomen {hitpointName="HitHands";};
				class Legs: Abdomen {hitpointName="HitLegs";};
				class Neck: Abdomen {hitpointName="HitNeck";};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			\\	"A_ChestArmor",
				"A_KneesLeft",
				"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
				"A_ODST",
			\\	"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
			\\	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			\\	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
			\\	"AP_Knife",
				"AP_MGThigh",
			\\	"AP_AR",
				"AP_BR",
				"AP_Pack",
			\\	"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			\\	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class RShark_M52A_TeamLeader: VES_M52A_MAR_Rifleman_C
	{	dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="Red Sharks M52A (Team Leader)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\RShark\RShark_M52_Softvest_AD.paa",
			"November_2022\Data\RShark\RShark_m52_Marine_Chestplate_AD.paa",
			"November_2022\Data\RShark\RShark_B52_underlay_Ad.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\RShark\RShark_M52D_ARMOR_Ad.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
				class Arms: Abdomen {hitpointName="HitArms";};
				class Body: Abdomen {hitpointName="HitBody";};
				class Chest: Abdomen {hitpointName="HitChest";};
				class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
				class Hands: Abdomen {hitpointName="HitHands";};
				class Legs: Abdomen {hitpointName="HitLegs";};
				class Neck: Abdomen {hitpointName="HitNeck";};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			\\	"A_ChestArmor",
			\\	"A_KneesLeft",
				"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
				"A_ODST",
			\\	"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
			\\	"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
			\\	"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
			\\	"AP_Canteen",
				"AP_GL",
			\\	"AP_Knife",
				"AP_MGThigh",
			\\	"AP_AR",
				"AP_BR",
			\\	"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
			\\	"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
			\\	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class RShark_M52A_Marksman: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="Red Sharks M52A (Marksman)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\RShark\RShark_M52_Softvest_AD.paa",
			"November_2022\Data\RShark\RShark_m52_Marine_Chestplate_AD.paa",
			"November_2022\Data\RShark\RShark_B52_underlay_Ad.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\RShark\RShark_M52D_ARMOR_Ad.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
				class Arms: Abdomen {hitpointName="HitArms";};
				class Body: Abdomen {hitpointName="HitBody";};
				class Chest: Abdomen {hitpointName="HitChest";};
				class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
				class Hands: Abdomen {hitpointName="HitHands";};
				class Legs: Abdomen {hitpointName="HitLegs";};
				class Neck: Abdomen {hitpointName="HitNeck";};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			\\	"A_ChestArmor",
			\\	"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
			\\	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
			\\	"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			\\	"AS_SmallRight",
			\\	"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
			\\	"AP_Pistol",
			\\	"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
			\\	"AP_Smoke",
				"APO_AR",
				"APO_BR",
			\\	"APO_Knife",
				"APO_SMG",
			\\	"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class RShark_M52A_Assault: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="Red Sharks M52A (Assault)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\RShark\RShark_M52_Softvest_AD.paa",
			"November_2022\Data\RShark\RShark_m52_Marine_Chestplate_AD.paa",
			"November_2022\Data\RShark\RShark_B52_underlay_Ad.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\RShark\RShark_M52D_ARMOR_Ad.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
				class Arms: Abdomen {hitpointName="HitArms";};
				class Body: Abdomen {hitpointName="HitBody";};
				class Chest: Abdomen {hitpointName="HitChest";};
				class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
				class Hands: Abdomen {hitpointName="HitHands";};
				class Legs: Abdomen {hitpointName="HitLegs";};
				class Neck: Abdomen {hitpointName="HitNeck";};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			\\	"A_ChestArmor",
			\\	"A_KneesLeft",
				"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
				"A_ODST",
			\\	"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
			\\	"AS_ODSTLeft",
			\\	"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
			\\	"AP_MGThigh",
				"AP_AR",
				"AP_BR",
			\\	"AP_Pack",
			\\	"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			\\	"AP_Frag",
				"AP_Smoke",
			\\	"APO_AR",
				"APO_BR",
			\\	"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class BInniw_M52A_Security: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="Red Sharks M52A (Security)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\RShark\RShark_M52_Softvest_AD.paa",
			"November_2022\Data\RShark\RShark_m52_Marine_Chestplate_AD.paa",
			"November_2022\Data\RShark\RShark_B52_underlay_Ad.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\RShark\RShark_M52D_ARMOR_Ad.paa"
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
				class Arms: Abdomen {hitpointName="HitArms";};
				class Body: Abdomen {hitpointName="HitBody";};
				class Chest: Abdomen {hitpointName="HitChest";};
				class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
				class Hands: Abdomen {hitpointName="HitHands";};
				class Legs: Abdomen {hitpointName="HitLegs";};
				class Neck: Abdomen {hitpointName="HitNeck";};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			\\	"A_ChestArmor",
			\\	"A_KneesLeft",
				"A_KneesRight",
			\\	"A_KneesMarLeft",
			\\	"A_KneesMarRight",
				"A_ODST",
			\\	"A_ShinArmorLeft",
			\\	"A_ShinArmorRight",
				"A_TacPad",
			\\	"A_ThighArmorLeft",
			\\	"A_ThighArmorRight",
			\\	"AS_BaseLeft",
			\\	"AS_BaseRight",
			\\	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			\\	"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
			\\	"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
			\\	"AP_SG",
			\\	"AP_SMG",
				"AP_Sniper",
			\\	"AP_Thigh",
			\\	"AP_Frag",
			\\	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	//Helmets
	class RShark_CH252_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="Red Sharks CH252 Helmet";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\RShark\RShark_CH252_MARINE_HELMET_AD.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\RShark\RShark_CH252_MARINE_HELMET_AD.paa",
				""
			};
		};
	};
	class RShark_CH252_VAC: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="Red Sharks CH252 Helmet (VAC)";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\RShark\RShark_CH252_MARINE_HELMET_AD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\RShark\RShark_CH252_MARINE_HELMET_AD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
};