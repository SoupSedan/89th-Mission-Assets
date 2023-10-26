class CfgPatches
{
	class 89th_JTF_Flags
	{
		author="89th JTF Mod Team";
		units[]=
		{
			"89th_Flag_89thJTF",
			"89th_Flag_Goliath",
			"89th_Flag_Legion",
			"89th_Flag_Thor",
			"89th_Flag_Bastard",
			"89th_Flag_Spades",
			"89th_Flag_Platoon1",
			"89th_Flag_Platoon2",
			"89th_Flag_Platoon3",
			"89th_Flag_Pig",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_structures_f",
			"A3_structures_f_mil",
			"OPTRE_Core",
			
		};
	};
};
class CfgVehicles
{
	//Dependency Classes
	class OPTRE_CTF_Flag_Base;
	class Flag_White_F;
	//CTF Flags
	class 89th_Flag_89thJTF: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] JTF Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\89th_flag_JTF.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_Goliath: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] Goliath Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\89th_flag_Goliath.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_Legion: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] Legion Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\89th_flag_Legion.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_Thor: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] Thor Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\89th_flag_Thor.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};class 89th_Flag_Bastard: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] Bastard Company Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\BastardCompanyFlag.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_Spades: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] Spades Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\89th_flag_spades.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_Platoon1: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 1st Platoon Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\89th_flag_Platoon1.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_Platoon2: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 2nd Platoon Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\89th_flag_Platoon2.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_Platoon3: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 3rd Platoon Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\89th_flag_Platoon3.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_Pig: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] Pig Team Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\PigTeamFlag.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
		class 89th_Flag_1_1Flag: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 1-1 Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\squadflags\1stplatoon1stsquad.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
			class 89th_Flag_1_2Flag: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 1-2 Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\squadflags\1stplatoon2ndsquad.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
			class 89th_Flag_2_1Flag: OPTRE_CTF_Flag_Base
	{
		author="Flips";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 2-1 Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\squadflags\2ndplatoon1stsquad.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};	
	class 89th_Flag_2_2Flag: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 2-2 Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\squadflags\2ndPlatoon2ndSquad.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};	
	class 89th_Flag_2_3Flag: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 2-3 Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\squadflags\2ndplatoon3rdsquad.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	class 89th_Flag_3_1Flag: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 3-1 Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\squadflags\3rdplatoon1stsquad.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};			
	class 89th_Flag_3_2Flag: OPTRE_CTF_Flag_Base
	{
		author="Soup";
		scope=2;
		scopeCurator=2;
		displayName="[89th] 3-2 Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"89th_JTF_Assets\Flags\Data\squadflags\3rdplatoon2ndsquad.paa"
		};
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
	};
	//Flagpole Flags
	class 89th_Flagpole_JTF: Flag_White_F
	{
		dlc="89thJTF";
		author="SOUP";
		scope=2;
		scopeCurator=0;
		displayName="[89th]  JTF Flagpole";
		editorCategory="89th_EdCat_JTF";
		editorSubcategory="89th_EdSubCat_Flags";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\89th_JTF_Assets\Flags\Data\89th_flagpole_JTF.paa""";
		};
	};
};
