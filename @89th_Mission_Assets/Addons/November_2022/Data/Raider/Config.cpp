class cfgPatches
{
	class Raider_patches
	{
		author="89th Mod Team";
		name="Raider";
		weapons[]=
		{
			"PatrolCap_Raider", "Raider_M52A_Rifleman", "Raider_M52A_TeamLeader",
			"Raider_M52A_Marksman", "Raider_M52A_Assault", "Raider_M52A_Security",
			"Raider_M52A_Medic", "Raider_M52D_Rifleman", "Raider_M52D_Scout",
			"Raider_M52D_Sniper", "Raider_M52D_Demo", "Raider_M52D_Marksman",
			"Raider_CH252D", "Raider_CH252D_dp", "Raider_CH252A_Light",
			"Raider_CH252A_M_Light", "Raider_CH252A_M_VAC", "Raider_CH252A_M_VAC_dp",
			"Raider_CH252A_VAC", "Raider_CH252A_VAC_dp"
		};
		requiredVersion=0.1;
		units[] = {};
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
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class VES_CH252_MAR_Light;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class ItemInfo;
	class VestItem;
	//Patrol Cap
	class PatrolCap_Raider: OPTRE_UNSC_PatrolCap_Marines
	{
		dlc="89thJTF";
		author="Rojas";
		displayName="[89M] Raider Patrol Cap";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_patrolcap_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_m52blank_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52D_CO_desertnight.paa"
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
	class Raider_M52A_TeamLeader: VES_M52A_MAR_Rifleman_C
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider M52A (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_m52blank_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52D_CO_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_m52blank_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52D_CO_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_m52blank_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52D_CO_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_m52blank_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52D_CO_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_m52blankmed_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52D_CO_desertnight.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
		};
	};
	//ODST Vests
	class Raider_M52D_Rifleman: VES_M52D_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider M52D (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52d_co_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52d_co_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52d_co_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52d_co_desertnight.paa"
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
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_softvest_desertnight.paa",
			"November_2022\Data\Raider\Raider_M52underlay_co_desertnight.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"November_2022\Data\Raider\Raider_M52d_co_desertnight.paa"
		};
	};
	//ODST Helmet
	class Raider_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252D Helmet";
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_odsthelmet_co_desertnight.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\Raider_odsthelmet_co_desertnight.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"
			};
		};
	};
	class Raider_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252D Helmet [OFF]";
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_odsthelmet_co_desertnight.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\Raider_odsthelmet_co_desertnight.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//Marine Helmets
	class Raider_CH252A_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_MARINEHELMET_CO_DESERTNIGHT.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\Raider_MARINEHELMET_CO_DESERTNIGHT.paa",
				""
			};
		};
	};
	class Raider_CH252A_M_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 (Medic)";
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_MEDICHELMET_CO_DESERTNIGHT.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\Raider_MEDICHELMET_CO_DESERTNIGHT.paa",
			};
		};
	};
	class Raider_CH252A_M_VAC: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet (VAC)(Medic)";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_MEDICHELMET_CO_DESERTNIGHT.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\Raider_MEDICHELMET_CO_DESERTNIGHT.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class Raider_CH252A_M_VAC_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet (VAC)(Medic)[OFF]";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_MEDICHELMET_CO_DESERTNIGHT.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\Raider_MEDICHELMET_CO_DESERTNIGHT.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class Raider_CH252A_VAC: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet (VAC)";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_MARINEHELMET_CO_DESERTNIGHT.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\Raider_MARINEHELMET_CO_DESERTNIGHT.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class Raider_CH252A_VAC_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Rojas and Vespade";
		displayName="[89M] Raider CH252 Helmet (VAC)[OFF]";
		scope=2;
		CTAB_Camera="false";
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\Raider\Raider_MARINEHELMET_CO_DESERTNIGHT.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"November_2022\Data\Raider\Raider_MARINEHELMET_CO_DESERTNIGHT.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_Raider_CH252
		{
			label="[89M] Raider CH252";
			author="89th Mod Team";
			options[]=
			{
				"seal",
				"visor"
			};
			class seal
			{
				label="Seal";
				alwaysSelectable=1;
				values[]=
				{
					"vac",
					"open"
				};
				class vac
				{
					label="Vac Sealed";
				};
				class open
				{
					label="Open Face";
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
		class 89th_Raider_M52
		{
			label="89th Raider M52";
			author="89th Mod Team";
			options[]=
			{
				"type",
				"special"
			};
			class type
			{
				label="Model";
				alwaysSelectable=1;
				values[]=
				{
					"mar",
					"odst"
				};
				class mar
				{
					label="Marine";
				};
				class odst
				{
					label="ODST";
				};
			};
			class special
			{
				label="Specialization";
				alwaysSelectable=1;
				values[]=
				{
					"rifle", "tl", "mark",
					"ass", "sec", "med",
					"demo", "sct", "snpr"
				};
				class rifle
				{
					label="Rifleman";
				};
				class tl
				{
					label="Team lead";
				};
				class mark
				{
					label="Marksman";
				};
				class ass
				{
					label="Assault";
				};
				class sec
				{
					label="Security";
				};
				class med
				{
					label="Medic";
				};
				class demo
				{
					label="Demolitons";
				};
				class sct
				{
					label="Scout";
				};
				class snpr
				{
					label="Sniper";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		//Marine Vests
		class Raider_M52A_Rifleman
		{
			model="89th_Raider_M52";
			type="mar";
			special="rifle";
		};
		class Raider_M52A_TeamLeader
		{
			model="89th_Raider_M52";
			type="mar";
			special="tl";
		};
		class Raider_M52A_Marksman
		{
			model="89th_Raider_M52";
			type="mar";
			special="mark";
		};
		class Raider_M52A_Assault
		{
			model="89th_Raider_M52";
			type="mar";
			special="ass";
		};
		class Raider_M52A_Security
		{
			model="89th_Raider_M52";
			type="mar";
			special="sec";
		};
		class Raider_M52A_Medic
		{
			model="89th_Raider_M52";
			type="mar";
			special="med";
		};
		//ODST Vests
		class Raider_M52D_Rifleman
		{
			model="89th_Raider_M52";
			type="odst";
			special="rifle";
		};
		class Raider_M52D_Scout
		{
			model="89th_Raider_M52";
			type="odst";
			special="sct";
		};
		class Raider_M52D_Sniper
		{
			model="89th_Raider_M52";
			type="odst";
			special="snpr";
		};
		class Raider_M52D_Demo
		{
			model="89th_Raider_M52";
			type="odst";
			special="demo";
		};
		class Raider_M52D_Marksman
		{
			model="89th_Raider_M52";
			type="odst";
			special="mark";
		};
		//Vac Helmets
		class Raider_CH252D
		{
			model="89th_Raider_CH252";
			seal="vac";
			visor="on";
		};
		class Raider_CH252D_dp
		{
			model="89th_Raider_CH252";
			seal="vac";
			visor="off";
		};
		class Raider_CH252A_M_VAC
		{
			model="89th_Raider_CH252";
			seal="vac";
			visor="on";
		};
		class Raider_CH252A_M_VAC_dp
		{
			model="89th_Raider_CH252";
			seal="vac";
			visor="off";
		};
		class Raider_CH252A_VAC
		{
			model="89th_Raider_CH252";
			seal="vac";
			visor="on";
		};
		class Raider_CH252A_VAC_dp
		{
			model="89th_Raider_CH252";
			seal="vac";
			visor="off";
		};
		//Open Faced Helmets
		class Raider_CH252A_Light
		{
			model="89th_Raider_CH252";
			seal="open";
		};
		class Raider_CH252A_M_Light
		{
			model="89th_Raider_CH252";
			seal="open";
		};
	};
};
