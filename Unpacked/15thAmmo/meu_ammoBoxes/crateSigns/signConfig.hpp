	
	class SignAd_SponsorS_F;
	class Flag_NATO_F;
	
	#define SIGNPATH(FILE) __EVAL("\meu_ammoBoxes\crateSigns\" + #FILE)
	#define MEU_CLASS_SIGN(CLASSNAME,NAME,TEXTURE) \
		class CLASSNAME: SignAd_SponsorS_F { \
			displayName = #NAME; \
			vehicleClass = "meu_signs"; \
			hiddenSelectionsTextures[] = {SIGNPATH(TEXTURE)}; \
		};

	// MEU_CLASS_SIGN(classname,displayname,picture)
	MEU_CLASS_SIGN(meu_sign_ace,ACE Box Sign,ACE.paa)
	MEU_CLASS_SIGN(meu_sign_armory,Armory Sign,ARM.paa)
	MEU_CLASS_SIGN(meu_sign_bas,BAS Box Sign,BAS.paa)
	MEU_CLASS_SIGN(meu_sign_empty,Empty Box Sign,EMPTY.paa)
	MEU_CLASS_SIGN(meu_sign_gator,Gator Box Sign,GATOR.paa)
	MEU_CLASS_SIGN(meu_sign_lar,LAR Box Sign,LAR.paa)
	MEU_CLASS_SIGN(meu_sign_hq,HQ Box Sign,MEUHQ.paa)
	MEU_CLASS_SIGN(meu_sign_rifle,Rifle Box Sign,RIFLE.paa)
	MEU_CLASS_SIGN(meu_sign_spectre,Spectre Box Sign,SPECTRE.paa)
	MEU_CLASS_SIGN(meu_sign_titan,Titan Box Sign,TITAN.paa)
	MEU_CLASS_SIGN(meu_sign_weapons,Weapons Box Sign,WEAPONS.paa)
	
	class meu_flag_usmc: Flag_NATO_F
	{
		displayName = "USMC Flag";
		vehicleClass = "meu_signs";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture '\meu_ammoBoxes\crateSigns\USMC_flag.paa';";
		};
	};