class CfgPatches
{
	class 89th_JTF_Furniture
	{
		author="Flips";
		units[]=
		{
			"89th_Breadcouch"
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
	class 89th_Breadcouch: House_F
	{
		dlc="89thJTF";
		scope=2;
		scopeCurator=2;
		displayName="BreadCouch";
		icon="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model = "\89th_JTF_Assets\Furniture\breadCouch.p3d";
		author = "EpsilonS";
		armor = 999999;
		armorStructural = 999;
		editorCategory = "89th_EdCat_JTF";
		editorSubcategory = "89th_EdSubCat_Furniture";
		hiddenSelections[] =
		{
			"camo",
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Furniture\Data\breadCouch_CO.paa",
		};
	};
};