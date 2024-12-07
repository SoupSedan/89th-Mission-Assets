class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
	class OPTRE_M41_SSR;
	class Doc_M41: OPTRE_M41_SSR
	{
		author = "Doc";
		displayname = "M41 SSR Mk2";
		scopeCurator = 2;
		baseWeapon = "M41 SSR MK2";
		magazines[] = {
			"Doc_M41_SALCOS_Mag",
			"Doc_M41_SALH_Mag"
		};
		// magazineWell[] = {"Doc_M41_Mag"};
	};
};