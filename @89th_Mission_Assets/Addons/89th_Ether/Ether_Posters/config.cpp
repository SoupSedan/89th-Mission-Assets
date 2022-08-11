class CfgPatches
{
	class 89th_Ether_Objects
	{
		units[]=
		{
		"Land_Bingusganda",
		"Land_Phloppaganda",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_structures_f",
			"89th_Core"
		};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Land_Bingusganda: NonStrategic
	{
		dlc="89th Ether";
		model="\89th_Ether_Assets\Ether_Poster\Bingusganda.p3d";
		vehicleClass="OPTRE_City_Building_class";
		scope=2;
		scopeCurator=2;
		displayName="Poster (Bingusganda)";
		editorCategory="89th_EdCat_Ether";
		editorSubcategory="89th_EdSubCat_Poster";
		destrType="DestructNo";
		icon="iconObject_10x1";
		posterSize=2;
		mapSize=1.66;
	};
	class Land_Phloppaganda: NonStrategic
	{
		dlc="89th Ether";
		model="\89th_Ether_Assets\Ether_Poster\Phloppaganda.p3d";
		vehicleClass="OPTRE_City_Building_class";
		scope=2;
		scopeCurator=2;
		displayName="Poster (Phloppaganda)";
		editorCategory="89th_EdCat_Ether";
		editorSubcategory="89th_EdSubCat_Poster";
		destrType="DestructNo";
		icon="iconObject_10x1";
		posterSize=2;
		mapSize=1.66;
	};
}