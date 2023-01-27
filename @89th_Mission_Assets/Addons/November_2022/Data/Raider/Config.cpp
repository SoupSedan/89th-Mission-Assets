class cfgPatches
{
	class Raider_patches
	{
		author="89th Mod Team";
		name="Raiders";
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
	class VES_M52D_Rifleman;
	class VES_M52D_Scout;
	class VES_M52D_Sniper;
	class VES_M52D_Demolitions;
	class VES_M52D_Marksman;
	class VES_CH252D;
	class VES_CH252D_dp;
	class VES_CH252_MAR_Light;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class ItemInfo;
	class VestItem;
	//Patrol Cap
	class 89th_PatrolCap_ARD: OPTRE_UNSC_PatrolCap_Marines
	{
		dlc="89thJTF";
		author="Rojas";
		displayName="[89M] Raider Patrol Cap";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\RAIDERS_patrolcap_desertnight.paa"
		};
	};
	//Marine Vests
	class Raider_M52A_Rifleman: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider M52A (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_m52blank_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52D_CO_desertnight.paa"
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
	class Radier_M52A_TeamLeader: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider M52A (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_m52blank_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52D_CO_desertnight.paa"
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
	class Raider_M52A_Marksman: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider M52A (Marksman)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_m52blank_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52D_CO_desertnight.paa"
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
	class Raider_M52A_Assault: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider M52A (Assault)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_m52blank_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52D_CO_desertnight.paa"
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
	class Raider_M52A_Security: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider M52A (Security)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_m52blank_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52D_CO_desertnight.paa"
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
	class Raider_M52A_Medic: VES_M52A_MAR_Corpsman_A
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider M52A (Medic)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_m52blankmed_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52D_CO_desertnight.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
		};
	};
	//ODST Vests
	class Radier_M52D_Rifleman: VES_M52D_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider M52D (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52d_co_desertnight.paa"
		};
	};
	class Raider_M52D_Scout: VES_M52D_Scout
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider M52D (Scout)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52d_co_desertnight.paa"
		};
	};
	class Raider_M52D_Sniper: VES_M52D_Sniper
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider M52D (Sniper)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52d_co_desertnight.paa"
		};
	};
	class Raider_M52D_Demo: VES_M52D_Demolitions
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider M52D (Demolition)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52d_co_desertnight.paa"
		};
	};
	class Raider_M52D_Marksman: VES_M52D_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider M52D (Marksman)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_softvest_desertnight.paa",
			"November_2022\Data\Raider\raiders_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\raiders_M52d_co_desertnight.paa"
		};
	};
	//ODST Helmet
	class Raider_CH252D: VES_CH252D
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252D Helmet";
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_odsthelmet_co_desertnight.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\raiders_odsthelmet_co_desertnight.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
			};
		};
	};
	class Raider_CH252D_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252D Helmet [OFF]";
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_odsthelmet_co_desertnight.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\raiders_odsthelmet_co_desertnight.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//Marine Helmets
	class Raider_CH252_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_MARINEHELMET_CO_DESERTNIGHT.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\raiders_MARINEHELMET_CO_DESERTNIGHT.paa",
				""
			};
		};
	};
	class Raider_CH252_M_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 (Medic)";
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_MEDICHELMET_CO_DESERTNIGHT.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\raiders_MEDICHELMET_CO_DESERTNIGHT.paa",
			};
		};
	};
	class Raider_CH252_M_VAC: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet (VAC)(Medic)";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_MEDICHELMET_CO_DESERTNIGHT.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\raiders_MEDICHELMET_CO_DESERTNIGHT.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class Raider_CH252_M_VAC_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet (VAC)(Medic)[OFF]";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_MEDICHELMET_CO_DESERTNIGHT.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\raiders_MEDICHELMET_CO_DESERTNIGHT.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class Raider_CH252_VAC: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet (VAC)";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_MARINEHELMET_CO_DESERTNIGHT.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\raiders_MARINEHELMET_CO_DESERTNIGHT.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class Raider_CH252_VAC_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet (VAC)[OFF]";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\raiders_MARINEHELMET_CO_DESERTNIGHT.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\raiders_MARINEHELMET_CO_DESERTNIGHT.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_SPMAGTF_M52
		{
			label="[89M] SPMAGTF M52";
			author="89th Mod Team";
			options[]=
			{
				"m52"
				"special"
			};
			class m52
			{
				label="Armor Model";
				alwaysSelectable=1;
				values[]=
				{
					"m52a",
					"m52d"
				};
				class m52a
				{
					label="M52A";
				};
				class m52d
				{
					label="M52D";
				};
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
		class 89th_SPMAGTF_CH252
		{
			label="[89M] SPMAGTF CH252";
			author="89th Mod Team";
			options[]=
			{
				"ch252",
				"seal",
				"visor"
			};
			class ch252
			{
				label="Helmet Model";
				alwaysSelectable=1l
				values[]=
				{
					"ch252a",
					"ch252d"
				};
				class ch252a
				{
					label="CH252A";
				};
				class ch252d
				{
					label="CH252D";
				};
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
		class Raider_M52A_Rifleman
		{
			model="89th_SPMAGTF_M52";
			m52="m52a";
			special="rifle";
		};
		class Raider_M52A_TeamLeader
		{
			model="89th_SPMAGTF_M52";
			m52="m52a";
			special="teamlead";
		};
		class Raider_M52A_Marksman
		{
			model="89th_SPMAGTF_M52";
			m52="m52a";
			special="marksman";
		};
		class Raider_M52A_Assault
		{
			model="89th_SPMAGTF_M52";
			m52="m52a";
			special="assault";
		};
		class Raider_M52A_Security
		{
			model="89th_SPMAGTF_M52";
			m52="m52a";
			special="security";
		};
		class Raider_CH252_Light
		{
			model="89th_SPMAGTF_CH252";
			ch252="ch252a"
			seal="open";
		};
		class Raider_CH252_VAC
		{
			model="89th_SPMAGTF_CH252";
			ch252="ch252a"
			seal="vac";
			visor="on";
		};
		class Raider_CH252_VAC_dp
		{
			model="89th_SPMAGTF_CH252";
			ch252="ch252a"
			seal="vac";
			visor="off";
		};
	};
};
