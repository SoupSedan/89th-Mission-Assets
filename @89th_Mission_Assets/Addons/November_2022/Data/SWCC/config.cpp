class cfgPatches
{
	class SWCC_patch
	{
		author="89th Mod Team";
		name="SWCC";
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
	class VES_M52A_MAR_Rifleman_C;
	class VES_M52A_MAR_Corpsman_A;
	class VES_CH252_MAR_Light;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class ItemInfo;
	class VestItem;
	//Vests
	class SWCC_M52A_Rifleman: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] UNSC Army SWCC M52A (Rifleman)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\SWCC\M52_SoftVest_SWCC.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_SWCC_CO.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_Underlay_SWCC.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\SWCC\M52D_SWCC.paa"
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
	class SWCC_M52A_TeamLeader: VES_M52A_MAR_Rifleman_C
	{	dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] UNSC Army SWCC M52A (Team Leader)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\SWCC\M52_SoftVest_SWCC.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_SWCC_CO.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_Underlay_SWCC.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\SWCC\M52D_SWCC.paa"
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
	class SWCC_M52A_Marksman: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] UNSC Army SWCC M52A (Marksman)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\SWCC\M52_SoftVest_SWCC.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_SWCC_CO.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_Underlay_SWCC.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\SWCC\M52D_SWCC.paa"
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
	class SWCC_M52A_Assault: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] UNSC Army SWCC M52A (Assault)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\SWCC\M52_SoftVest_SWCC.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_SWCC_CO.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_Underlay_SWCC.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\SWCC\M52D_SWCC.paa"
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
	class SWCC_M52A_Security: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] UNSC Army SWCC M52A (Security)";
		hiddenSelectionsTextures[]=
		{	
			"November_2022\Data\SWCC\M52_SoftVest_SWCC.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_SWCC_CO.paa",
			"November_2022\Data\SWCC\M52_UNSC_A_Underlay_SWCC.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\SWCC\M52D_SWCC.paa"
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
	class SWCC_CH252_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] UNSC Army SWCC CH252 Helmet";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\SWCC\CH252_UNSC_A_SWCC.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\SWCC\CH252_UNSC_A_SWCC.paa",
				""
			};
		};
	};
	class SWCC_CH252_VAC: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] UNSC Army SWCC CH252 Helmet (VAC)";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\SWCC\CH252_UNSC_A_SWCC.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\SWCC\CH252_UNSC_A_SWCC.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class SWCC_CH252_VAC_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] UNSC Army SWCC CH252 Helmet (VAC)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\SWCC\CH252_UNSC_A_SWCC.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\SWCC\CH252_UNSC_A_SWCC.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_SWCC_M52
		{
			label="[89M] SWCC M52";
			author="89th Mod Team";
			options[]=
			{
				"special"
			};
			class special
			{
				label="Specialization";
				alwaysSelectable=1;
				values[]=
				{
					"rifle",
					"teamlead",
					"marksman",
					"assault",
					"security"
				};
				class rifle
				{
					label="Rifleman";
				};
				class teamlead
				{
					label="Team Lead";
				};
				class marksman
				{
					label="Marksman";
				};
				class assault
				{
					label="Assault";
				};
				class security
				{
					label="Security";
				};
			};
		};
		class 89th_SWCC_CH252
		{
			label="[89M] SWCC CH252";
			author="89th Mod Team";
			options[]=
			{
				"seal",
				"visor"
			};
			class seal
			{
				label="Vaccum Seal";
				alwaysSelectable=1;
				values[]=
				{
					"open",
					"vac"
				};
				class open
				{
					label="Open-faced";
				};
				class vac
				{
					label="Vac Sealed";
				};
			};
			class visor
			{
				label="Visor";
				alwaysSelectable=1;
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
				};
				class off
				{
					label="Off";
				};
			};
		};		
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class SWCC_M52A_Rifleman
		{
			model="89th_SWCC_M52";
			special="rifle";
		};
		class SWCC_M52A_TeamLeader
		{
			model="89th_SWCC_M52";
			special="teamlead";
		};
		class SWCC_M52A_Marksman
		{
			model="89th_SWCC_M52";
			special="marksman";
		};
		class SWCC_M52A_Assault
		{
			model="89th_SWCC_M52";
			special="assault";
		};
		class SWCC_M52A_Security
		{
			model="89th_SWCC_M52";
			special="security";
		};
		class SWCC_CH252_Light
		{
			model="89th_SWCC_CH252";
			seal="open";
		};
		class SWCC_CH252_VAC
		{
			model="89th_SWCC_CH252";
			seal="vac";
			visor="on";
		};
		class SWCC_CH252_VAC_dp
		{
			model="89th_SWCC_CH252";
			seal="vac";
			visor="off";
		};
	};
};
