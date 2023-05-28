class CfgPatches
{
	class 89th_Assets_Decals
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"89th_Land_Decal_Concrete", "89th_Land_Decal_Asphalt"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class House_F;
	class 89th_Land_Decal_Base: House_F
	{
		author = "89thJTF";
		mapSize = 1;
		_generalMacro = "89th_Land_Decal_Base";
		icon = "iconObject_1x1";
		editorCategory = "89th_EdCat_JTF";
		editorSubcategory = "89th_EdSubCat_Decal";
		vehicleClass = "Signs";
		destrType = "DestructNo";
	};
	class 89th_Land_Decal_Concrete: 89th_Land_Decal_Base
	{
		author = "89thJTF";
		_generalMacro = "89th_Land_Decal_Concrete";
		scope = 2;
		scopeCurator = 2;
		displayName = "Concrete";
		model = "\89th_JTF_Assets\Decals\concrete_decal.p3d";
	};
	class 89th_Land_Decal_Asphalt: 89th_Land_Decal_Base
	{
		author = "89thJTF";
		_generalMacro = "89th_Land_Decal_Asphalt";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asphalt";
		model = "\89th_JTF_Assets\Decals\asphalt_decal.p3d";
	};
};