class CfgMagazines
{
	class OPTRE_M41_Twin_HEAT_SACLOS;
	class OPTRE_M41_Twin_HEAT_SALH;
    class Doc_M41_SALCOS_Mag: OPTRE_M41_Twin_HEAT_SACLOS
	{
		author = "Doc";
		displayname = "M19 HEAT (SACLOS) Mk2";
		ammo = "Vorona_HEAT";
	};
	class Doc_M41_SALH_Mag: OPTRE_M41_Twin_HEAT_SALH
	{
		author = "Doc";
		displayname = "M19 HEAT (SALH) Mk2";
		ammo = "Vorona_HEAT_SALH";
	};
};

class cfgMagazineWells
{
	//The SPNKR and explosives.
	class Doc_M41_Mag {
		//Old OPTRE mags. Work without ace.	
		OPTRE_Outdated[] = {
			"OPTRE_M41_Twin_HEAT", 
			"OPTRE_M41_Twin_HEAP", 
			"OPTRE_M41_Twin_HEAT_G"
		}; 	
		//OPAEX Conventional mags
		OPTRE_Conventional[] = {
			"OPTRE_M41_Twin_HE",
			"OPTRE_M41_Twin_HEAT_SALH",
			"OPTRE_M41_Twin_HEAT_SACLOS",
			"OPTRE_M41_Twin_HEAT_Thermal",
			"Doc_M41_SALCOS_Mag", //My own MK2 versions
			"Doc_M41_SALH_Mag"
		};		
		//OPAEX Proximity fuse
		OPTRE_Proximity[] = {
			"OPTRE_M41_Twin_HE_SALH_ProximityFuse",
			"OPTRE_M41_Twin_HE_SACLOS_ProximityFuse",
			"OPTRE_M41_Twin_HE_Thermal_ProximityFuse"
		};		
		OPTRE_Smoke[] = {
			"OPTRE_M41_Twin_Smoke_W",
			"OPTRE_M41_Twin_Smoke_B",
			"OPTRE_M41_Twin_Smoke_R",
			"OPTRE_M41_Twin_Smoke_G",
			"OPTRE_M41_Twin_Smoke_O",
			"OPTRE_M41_Twin_Smoke_P",
			"OPTRE_M41_Twin_Smoke_Y"
		};
	};
};