class CfgPatches
{
	class Doc_Weapons
	{
		name = "Doc-OPTRE-Fix-Weapons";
		author = "Doc";
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"Doc_Core",
			"A3_Weapons_F",
			"OPTRE_Weapons",
			"OPTRE_Weapons_Rockets",
			"ace_missileguidance",
			"ace_metis"
		};
		weapons[] = 
		{
			"Doc_M41"
		};
		units[] = {};
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"