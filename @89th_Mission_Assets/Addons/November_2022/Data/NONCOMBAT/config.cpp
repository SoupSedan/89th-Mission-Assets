class cfgPatches
{
	class Mission_Armor_Uniform
	{
		author="89th Mod Team";
		name="89th JTF Mod";
		units[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Armor",
		};
	};
};
class cfgWeapons
{
	class VES_BDU_R_Evolved_Slim;
	class VES_BDU_Evolved_Slim;
	class B_Soldier_base_F;
	class UniformItem;
	class UniformBase;
	class 19th_U: B_Soldier_base_F
	{
		scope=2;
		model="halo_marine\Halo_marine_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Armor\Data\Uniform\Uni_89th_co.paa"
		};
	};
	class 89thu_U: UniformBase
	{
		scope=2;
		displayName="[89th] H2A Armor Urban";
		picture="\halo_marine\data\UniformIcon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="19th_U";
			containerClass="Supply200";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=1;
		};
	};
	class BDU_SLIM_DN: VES_BDU_Evolved_Slim
	{
		displayName="[89M] Raiders BDU (Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="BDU_V_SLIM_DN";
		};
	};
	class BDU_R_SLIM_DN: VES_BDU_R_Evolved_Slim
	{
		displayName="[89M] Raiders BDU (Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="BDU_V_R_SLIM_DN";
		};
	};
	class BDU_SLIM_ANA: VES_BDU_Evolved_Slim
	{
		displayName="[89M] Red Sharks BDU (Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="BDU_V_SLIM_ANA";
		};
	};
	class BDU_R_SLIM_ANA: VES_BDU_R_Evolved_Slim
	{
		displayName="[89M] Red Sharks BDU (Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="BDU_R_V_SLIM_ANA";
		};
	};
	class BDU_SLIM_COY: VES_BDU_Evolved_Slim
	{
		displayName="[89M] Coyotes BDU (Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="BDU_V_SLIM_COY";
		};
	};
	class BDU_R_SLIM_COY: VES_BDU_R_Evolved_Slim
	{
		displayName="[89M] Coyotes BDU (Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="BDU_R_V_SLIM_COY";
		};
	};
};
class cfgVehicles
{
	class VES_BDU_V_Evolved_Slim;
	class VES_BDU_R_V_Evolved_SLIM;
	class BDU_V_SLIM_DN: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\NONCOMBAT\raiders_uniform_desertnight.paa",
			"November_2022\Data\NONCOMBAT\raiders_uniform_desertnight.paa"
		};
		uniformClass="BDU_SLIM_DN";
	};
	class BDU_V_R_SLIM_DN: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\NONCOMBAT\raiders_uniform_desertnight.paa",
			"November_2022\Data\NONCOMBAT\raiders_uniform_desertnight.paa"
		};
		uniformClass="BDU_R_SLIM_DN";
	};
	class BDU_V_SLIM_ANA: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\NONCOMBAT\INNIE_BDU_ANADIGITAL.paa",
			"November_2022\Data\NONCOMBAT\INNIE_BDU_ANADIGITAL.paa"
		};
		uniformClass="BDU_SLIM_ANA";
	};		
	class BDU_R_V_SLIM_ANA: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\NONCOMBAT\INNIE_BDU_ANADIGITAL.paa",
			"November_2022\Data\NONCOMBAT\INNIE_BDU_ANADIGITAL.paa"
		};
		uniformClass="BDU_R_SLIM_ANA";
	};
	class BDU_V_SLIM_COY: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\NONCOMBAT\COYOTE_BDU_CO.paa",
			"November_2022\Data\NONCOMBAT\COYOTE_BDU_CO.paa"
		};
		uniformClass="BDU_SLIM_COY";
	};		
	class BDU_R_V_SLIM_COY: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"November_2022\Data\NONCOMBAT\COYOTE_BDU_CO.paa",
			"November_2022\Data\NONCOMBAT\COYOTE_BDU_CO.paa"
		};
		uniformClass="BDU_R_SLIM_COY";
		};
	};
};
