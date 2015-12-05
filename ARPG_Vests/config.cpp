class cfgWeapons

{

    class Vest_Camo_Base;

	class ItemInfo;

    class VestItem;

    

    class statepolice : Vest_Camo_Base

	{

        scope = 2;

        displayName = "[ARPG] State Police Vest";

        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";

        model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";

        hiddenSelections[] = {"camo"};

        hiddenSelectionsTextures[] = {"\data\example.paa"};

        

        class ItemInfo : VestItem

		{

            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";

            containerClass = "Supply100";

            mass = 50;

            armor = 5*0.5;

            passThrough = 0.7;

            hiddenSelections[] = {"camo"};

        };

    };

};