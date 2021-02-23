class CfgPatches {
    class za_customflashlights {
        units[] = {};
        weapons[] = {
            "za_flashlight_ledwide",
            "za_flashlight_ledfocused",
            "za_flashlight_led",
            "za_flashlight_ledred",
            "za_flashlight_ledir",
            "za_flashlight_pointer",
        };
        requiredVersion = 0.1;
        requiredAddons[] = {"cba_jr"};
        author[] = {"Zulu Alpha Bakkies"};
        authorUrl = "";
    };
};

class cfgWeapons {
    class CUP_acc_ANPEQ_15_Flashlight_Black_L;
    class InventoryFlashLightItem_Base_F;
    class za_flashlight_ledwide: CUP_acc_ANPEQ_15_Flashlight_Black_L {
        author = "Bakkies";
        scope = 2;
        displayName = "Flashlight LED (Wide)";
        descriptionUse = "Heavy duty LED flashlight 6000 Lumen";
        descriptionShort = "Heavy duty LED flashlight 6000 Lumen";
        MRT_SwitchItemNextClass = "za_flashlight_ledfocused";
        MRT_SwitchItemPrevClass = "za_flashlight_pointer";
        MRT_switchItemHintText = "Wide";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Flashlight LED (Wide)";
            class FlashLight {
                ambient[] = {0.58431,0.72941,0.81569};
                color[] = {149,186,208};
                coneFadeCoef = 12;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 300;
                flareSize = 4;
                innerAngle = 40;
                intensity = 250;
                outerAngle = 140;
                position = "flash dir";
                scale[] = {0};
                size = 1;               
                useFlare = 1;
                class Attenuation {
                    constant = 32;
                    hardLimitEnd = 70;
                    hardLimitStart = 1;
                    linear = 1;
                    quadratic = 0.2;
                    start = 0;
                };
            };
        };
    };

    class za_flashlight_ledfocused: CUP_acc_ANPEQ_15_Flashlight_Black_L {
        author = "Bakkies";
        scope = 2;
        displayName = "Flashlight LED (Beam)";
        descriptionUse = "Heavy duty LED flashlight 6000 Lumen";
        descriptionShort = "Heavy duty LED flashlight 6000 Lumen";
        MRT_SwitchItemNextClass = "za_flashlight_led";
        MRT_SwitchItemPrevClass = "za_flashlight_ledwide";
        MRT_switchItemHintText = "Beam";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Flashlight LED (Beam)";
            class FlashLight {
                ambient[] = {0.58431,0.72941,0.81569};
                color[] = {149,186,208};
                coneFadeCoef = 32;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 300;
                flareSize = 4;
                innerAngle = 10;
                intensity = 1200;
                outerAngle = 60;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 8;
                    hardLimitEnd = 400;
                    hardLimitStart = 1;
                    linear = 6;
                    quadratic = 0.01;
                    start = 0;
                };
            };
        };
    };

    class za_flashlight_led: CUP_acc_ANPEQ_15_Flashlight_Black_L {
        author = "Bakkies";
        scope = 2;
        displayName = "Flashlight LED";
        descriptionUse = "Heavy duty LED flashlight 6000 Lumen";
        descriptionShort = "Heavy duty LED flashlight 6000 Lumen";
        MRT_SwitchItemNextClass = "za_flashlight_ledred";
        MRT_SwitchItemPrevClass = "za_flashlight_ledfocused";
        MRT_switchItemHintText = "LED (Standard)";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Flashlight LED";
            class FlashLight {
                ambient[] = {0.58431,0.72941,0.81569};
                color[] = {149,186,208};
                coneFadeCoef = 10;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 200;
                flareSize = 4;
                innerAngle = 10;
                intensity = 200;
                outerAngle = 80;
                position = "flash dir";
                scale[] = {0};
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 32;
                    hardLimitEnd = 155;
                    hardLimitStart = 1;
                    linear = 1;
                    quadratic = 0.05;
                    start = 0;
                };
            };
        };
    };


 // new Addition to Rotation
    class za_flashlight_ledred: CUP_acc_ANPEQ_15_Flashlight_Black_L {
        author = "Bakkies";
        scope = 2;
        displayName = "Tactical RED";
        descriptionUse = "Low Light Red flashlight CQB";
        descriptionShort = "Low Light Red flashlight CQB";
        MRT_SwitchItemNextClass = "za_flashlight_ledir";
        MRT_SwitchItemPrevClass = "za_flashlight_led";
        MRT_switchItemHintText = "Red CQB";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Flashlight LED (Red CQB)";
            class FlashLight {
                ambient[]={0.050000001,0.1,0.050000001};
                color[] = {70,25,25,0};
                coneFadeCoef = 8;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = 0;
                flareSize = 0.1;
                innerAngle = 25;
                intensity = 0.5;
                outerAngle = 80;
                position = "flash dir";
                scale[] = {0};
                size = 0.1;
                useFlare = 1;
                class Attenuation {
                    constant = 0;
                    hardLimitEnd = 35;
                    hardLimitStart = 8;
                    linear = 0;
                    quadratic = 1;
                    start = 0;
                };
            };
        };
    };

    class za_flashlight_ledir: CUP_acc_ANPEQ_15_Flashlight_Black_L {
        author = "Bakkies";
        scope = 2;
        displayName = "IR Flashlight";
        descriptionUse = "Low Light IR Flash light";
        descriptionShort = "Low Light IR Flashlight";
        MRT_SwitchItemNextClass = "za_flashlight_pointer";
        MRT_SwitchItemPrevClass = "za_flashlight_ledred";
        MRT_switchItemHintText = "IR Flashlight";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="IR Flashlight - low light";
            class FlashLight {
                ambient[]={0,0,0};
                color[] = {40,40,70,0.5};
                coneFadeCoef = 0;
                dayLight = 0;
                direction = "flash";
                flareMaxDistance = "0";
                flareSize = 0.1;
                innerAngle = 10;
                intensity = 10;
                outerAngle = 25;
                position = "flash dir";
                scale[] = {0};
                size = 1.5;
                useFlare = 0;
                class Attenuation {
                    constant = 0;
                    hardLimitEnd = 65;
                    hardLimitStart = 4;
                    linear = 10;
                    quadratic = 1;
                    start = 0;
                };
            };
        };
    };

class za_flashlight_pointer: CUP_acc_ANPEQ_15_Flashlight_Black_L {
        author = "Bakkies";
        scope = 2;
        displayName = "Pointer";
        descriptionUse = "Pointer";
        descriptionShort = "Pointer";
        MRT_SwitchItemNextClass = "za_flashlight_led";
        MRT_SwitchItemPrevClass = "za_flashlight_ledir";
        MRT_switchItemHintText = "Pointer";
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass=6;
            RMBhint="Pointer";

            class Pointer {
                irLaserPos = "laser pos";
                irLaserEnd = "laser dir";
                irDistance = 5;
            };

            class FlashLight {
				color[]={0,0,0};
				ambient[]={0,0,0};
				intensity=0;
				size=0;
				innerAngle=0;
				outerAngle=0;
				coneFadeCoef=0;
				position="flash dir";
				direction="flash";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=100;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=0;
					hardLimitEnd=0;
				};
				scale[]={0};
			};
		};
		ACE_laserpointer=1;
	};

};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        za_flashlight_ledwide = 1;
        za_flashlight_ledfocused = 1;
        za_flashlight_led = 1;
        za_flashlight_ledred = 1;
        za_flashlight_ledir = 1;
        za_flashlight_pointer = 1;
    };
};

class PointerSlot;
class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        za_flashlight_ledwide = 1;
        za_flashlight_ledfocused = 1;
        za_flashlight_led = 1;
        za_flashlight_ledred = 1;
        za_flashlight_ledir = 1;
        za_flashlight_pointer = 1;
    };
};
