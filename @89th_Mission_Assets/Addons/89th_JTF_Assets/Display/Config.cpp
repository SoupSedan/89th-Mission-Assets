class CfgPatches
{
	class 89th_JTF_Display
	{
		author="Flips";
		units[]=
		{
			"89th_EpsilonHelmet_Object"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_structures_f",
			"OPTRE_Core",
		};
	};
};
class CfgVehicles
{	
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class 89th_EpsilonHelmet_Object: House_F
	{
		dlc="89thJTF";
		scope=2;
		scopeCurator=0;
		displayName="CH252 Helmet (Epsilon)";
		icon="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model="\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Neck",
			"H_UNSCVacLower",
			"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Epsi\89th_CH252A_Epsi_WDL.paa",
			"\optre_unsc_units\army\data\helmet_visor_ca.paa",
			"\optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		author="Tas, Geek, and Vespade";
		armor=999999;
		armorStructural=999;
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Display";
	};

};