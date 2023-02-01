class CfgPatches
{
	class 89th_M247H_patch
	{
		author="89th JTF Mod Team";
		name="89th JTF";
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		version=0.2;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class OPTRE_M247H;
	class OPTRE_M247H_proxy: OPTRE_M247H
	{
		magazineReloadTime = 0.5;
	};
    class Launcher;
    class Launcher_Base_F: Launcher
	{
        class WeaponSlotsInfo;
    };
    class 89th_CSW_M247H_carry: Launcher_Base_F
	{
        displayName = "M247H Turret";
		author = "Bler, Flips";
		picture = "\OPTRE_weapons\MG\icons\M73_1.paa";
        scope = 2;
        modes[] = {};
        class ACE_CSW
		{
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo
			{
                ace_csw_m3Tripod = "OPTRE_Static_M247H_Tripod";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
            class MuzzleSlot
			{
                iconScale = 0.1;
            };
            mass = 900;
        };
    };
	class 89th_CSW_M247H_Shielded_carry: Launcher_Base_F
	{
        displayName = "M247H Turret (Shielded)";
		author = "Bler, Flips";
		picture = "\OPTRE_weapons\MG\icons\M73_1.paa";
        scope = 2;
        modes[] = {};
        class ACE_CSW
		{
            type = "weapon";
            deployTime = 4;
            pickupTime = 4;
            class assembleTo
			{
                ace_csw_m3Tripod = "OPTRE_Static_M247H_Shielded_Tripod";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
            class MuzzleSlot
			{
                iconScale = 0.1;
            };
            mass = 950;
        };
    };
};
class CfgMagazines
{
    class OPTRE_200Rnd_127x99_M247H;
	class 89th_200Rnd_127x99_M247H_csw_mag: OPTRE_200Rnd_127x99_M247H
	{
        scope = 2;
        type = 256;
        count = 200;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
        model = "\OPTRE_Weapons\MG\magazine_1.p3d";
        ACE_isBelt = 1;
		mass = 34;
	};
};
class ACE_CSW_Groups
{
	class 89th_200Rnd_127x99_M247H_csw_mag
	{
		OPTRE_200Rnd_127x99_M247H = 1;
    };
};
class CfgVehicles
{
    class StaticMGWeapon;
    class OPTRE_Static_M247H_Tripod: StaticMGWeapon
	{
        class ACE_CSW
		{
            enabled = 1;    
            proxyWeapon = "OPTRE_M247H_proxy";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = "89th_CSW_M247H_carry";
            disassembleTurret = "ace_csw_m3Tripod";
            ammoLoadTime = 5;
            ammoUnloadTime = 5;
            desiredAmmo = 200;
            // Optional callback function for when the CSW gets disassembled, called with [tripod, staticWeapon]
            disassembleFunc = "prefix_fnc_handleDisassembly";
        };
    };
	class OPTRE_Static_M247H_Shielded_Tripod: StaticMGWeapon
	{
        class ACE_CSW
		{
            enabled = 1;           
            proxyWeapon = "OPTRE_M247H_proxy";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = "89th_CSW_M247H_Shielded_carry";
            disassembleTurret = "ace_csw_m3Tripod";
            ammoLoadTime = 5;
            ammoUnloadTime = 5;
            desiredAmmo = 200;
            // Optional callback function for when the CSW gets disassembled, called with [tripod, staticWeapon]
            disassembleFunc = "prefix_fnc_handleDisassembly";
        };
    };
};