class IniPatches
{
	class Innie_Sprays_patch
	{
		author="89th Mod Team";
		requiredVersion=1;
		units[] = {};
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class ACE_SpraypaintBlack;
	class Ini_spraycan: ACE_SpraypaintBlack
	{
		dlc="89thJTF";
		author="89th Mod Team";
		displayName="Innie Spraycan";
	};
};
class ACE_Tags
{
	class PLACEHOLDER
	{
		displayName="PLACEHOLDER";
		requiredItem="Ini_spraycan";
		textures[]=
		{
			"PLACEHOLDER"
		};
		icon="PLACEHOLDER";
	};
