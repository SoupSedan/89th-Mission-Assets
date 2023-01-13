class CfgPatches
{
	class 89th_Sprays_patch
	{
		author="89th Mod Team";
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class ACE_SpraypaintBlack;
	class 89th_Spraycan: ACE_SpraypaintBlack
	{
		dlc="89thJTF";
		author="89th Mod Team";
		displayName="89th Spraycan";
	};
};
class ACE_Tags
{
	class 89th1_1
	{
		displayName="1-1";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_JTF_Assets\Sprays\1_1_ca"
		};
		icon="89th_JTF_Assets\Sprays\1_1_ca";
	};
	class 89th1_2
	{
		displayName="1-2";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_JTF_Assets\Sprays\1_2_ca"
		};
		icon="89th_JTF_Assets\Sprays\1_2_ca";
	};
	class 89th1_3
	{
		displayName="1-3";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_JTF_Assets\Sprays\1_3_ca"
		};
		icon="89th_JTF_Assets\Sprays\1_3_ca";
	};
	class 89th2_1
	{
		displayName="2-1";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_JTF_Assets\Sprays\2_1_ca"
		};
		icon="89th_JTF_Assets\Sprays\2_1_ca";
	};
	class 89thAnvil
	{
		displayName="Anvil";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_JTF_Assets\Sprays\Anvil_ca"
		};
		icon="89th_JTF_Assets\Sprays\Anvil_ca";
	};
	class 89thGoliath
	{
		displayName="Goliath";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_JTF_Assets\Sprays\Goliath_Spray_ca"
		};
		icon="89th_JTF_Assets\Sprays\Goliath_Spray_ca";
	};
	class 89thMonker
	{
		displayName="Monker";
		requiredItem="89th_Spraycan";
		textures[]=
		{
			"89th_JTF_Assets\Sprays\monker_ca"
		};
		icon="89th_JTF_Assets\Sprays\1_2_ca";
	};
};