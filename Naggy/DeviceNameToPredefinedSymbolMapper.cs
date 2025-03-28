using System;
using System.Collections.Generic;
using System.Linq;

namespace Naggy
{
    internal static class DeviceNameToPredefinedSymbolMapper
    {
        private static Dictionary<string, string> map = new Dictionary<string, string>
		{
			
			{
				"at90s2313", 
				"__AVR_AT90S2313__"
			}, 
			
			{
				"at90s2323", 
				"__AVR_AT90S2323__"
			}, 
			
			{
				"at90s2333", 
				"__AVR_AT90S2333__"
			}, 
			
			{
				"at90s2343", 
				"__AVR_AT90S2343__"
			}, 
			
			{
				"attiny22", 
				"__AVR_ATtiny22__"
			}, 
			
			{
				"attiny26", 
				"__AVR_ATtiny26__"
			}, 
			
			{
				"at90s4414", 
				"__AVR_AT90S4414__"
			}, 
			
			{
				"at90s4433", 
				"__AVR_AT90S4433__"
			}, 
			
			{
				"at90s4434", 
				"__AVR_AT90S4434__"
			}, 
			
			{
				"at90s8515", 
				"__AVR_AT90S8515__"
			}, 
			
			{
				"at90c8534", 
				"__AVR_AT90C8534__"
			}, 
			
			{
				"at90s8535", 
				"__AVR_AT90S8535__"
			}, 
			
			{
				"ata6289", 
				"__AVR_ATA6289__"
			}, 
			
			{
				"attiny13", 
				"__AVR_ATtiny13__"
			}, 
			
			{
				"attiny13a", 
				"__AVR_ATtiny13A__"
			}, 
			
			{
				"attiny2313", 
				"__AVR_ATtiny2313__"
			}, 
			
			{
				"attiny2313a", 
				"__AVR_ATtiny2313A__"
			}, 
			
			{
				"attiny24", 
				"__AVR_ATtiny24__"
			}, 
			
			{
				"attiny24a", 
				"__AVR_ATtiny24A__"
			}, 
			
			{
				"attiny4313", 
				"__AVR_ATtiny4313__"
			}, 
			
			{
				"attiny44", 
				"__AVR_ATtiny44__"
			}, 
			
			{
				"attiny44a", 
				"__AVR_ATtiny44A__"
			}, 
			
			{
				"attiny84", 
				"__AVR_ATtiny84__"
			}, 
			
			{
				"attiny84a", 
				"__AVR_ATtiny84A__"
			}, 
			
			{
				"attiny25", 
				"__AVR_ATtiny25__"
			}, 
			
			{
				"attiny45", 
				"__AVR_ATtiny45__"
			}, 
			
			{
				"attiny85", 
				"__AVR_ATtiny85__"
			}, 
			
			{
				"attiny261", 
				"__AVR_ATtiny261__"
			}, 
			
			{
				"attiny261a", 
				"__AVR_ATtiny261A__"
			}, 
			
			{
				"attiny461", 
				"__AVR_ATtiny461__"
			}, 
			
			{
				"attiny461a", 
				"__AVR_ATtiny461A__"
			}, 
			
			{
				"attiny861", 
				"__AVR_ATtiny861__"
			}, 
			
			{
				"attiny861a", 
				"__AVR_ATtiny861A__"
			}, 
			
			{
				"attiny43u", 
				"__AVR_ATtiny43U__"
			}, 
			
			{
				"attiny87", 
				"__AVR_ATtiny87__"
			}, 
			
			{
				"attiny48", 
				"__AVR_ATtiny48__"
			}, 
			
			{
				"attiny88", 
				"__AVR_ATtiny88__"
			}, 
			
			{
				"at86rf401", 
				"__AVR_AT86RF401__"
			}, 
			
			{
				"at43usb355", 
				"__AVR_AT43USB355__"
			}, 
			
			{
				"at76c711", 
				"__AVR_AT76C711__"
			}, 
			
			{
				"atmega103", 
				"__AVR_ATmega103__"
			}, 
			
			{
				"at43usb320", 
				"__AVR_AT43USB320__"
			}, 
			
			{
				"at90usb82", 
				"__AVR_AT90USB82__"
			}, 
			
			{
				"at90usb162", 
				"__AVR_AT90USB162__"
			}, 
			
			{
				"atmega8u2", 
				"__AVR_ATmega8U2__"
			}, 
			
			{
				"atmega16u2", 
				"__AVR_ATmega16U2__"
			}, 
			
			{
				"atmega32u2", 
				"__AVR_ATmega32U2__"
			}, 
			
			{
				"attiny167", 
				"__AVR_ATtiny167__"
			}, 
			
			{
				"atmega8", 
				"__AVR_ATmega8__"
			}, 
			
			{
				"atmega48", 
				"__AVR_ATmega48__"
			}, 
			
			{
				"atmega48a", 
				"__AVR_ATmega48A__"
			}, 
			
			{
				"atmega48p", 
				"__AVR_ATmega48P__"
			}, 
			
			{
				"atmega88", 
				"__AVR_ATmega88__"
			}, 
			
			{
				"atmega88a", 
				"__AVR_ATmega88A__"
			}, 
			
			{
				"atmega88p", 
				"__AVR_ATmega88P__"
			}, 
			
			{
				"atmega88pa", 
				"__AVR_ATmega88PA__"
			}, 
			
			{
				"atmega8515", 
				"__AVR_ATmega8515__"
			}, 
			
			{
				"atmega8535", 
				"__AVR_ATmega8535__"
			}, 
			
			{
				"atmega8hva", 
				"__AVR_ATmega8HVA__"
			}, 
			
			{
				"at90pwm1", 
				"__AVR_AT90PWM1__"
			}, 
			
			{
				"at90pwm2", 
				"__AVR_AT90PWM2__"
			}, 
			
			{
				"at90pwm2b", 
				"__AVR_AT90PWM2B__"
			}, 
			
			{
				"at90pwm3", 
				"__AVR_AT90PWM3__"
			}, 
			
			{
				"at90pwm3b", 
				"__AVR_AT90PWM3B__"
			}, 
			
			{
				"at90pwm81", 
				"__AVR_AT90PWM81__"
			}, 
			
			{
				"at90pwm161", 
				"__AVR_AT90PWM161__"
			}, 
			
			{
				"atmega16", 
				"__AVR_ATmega16__"
			}, 
			
			{
				"atmega16a", 
				"__AVR_ATmega16A__"
			}, 
			
			{
				"atmega161", 
				"__AVR_ATmega161__"
			}, 
			
			{
				"atmega162", 
				"__AVR_ATmega162__"
			}, 
			
			{
				"atmega163", 
				"__AVR_ATmega163__"
			}, 
			
			{
				"atmega164a", 
				"__AVR_ATmega164A__"
			}, 
			
			{
				"atmega164p", 
				"__AVR_ATmega164P__"
			}, 
			
			{
				"atmega165", 
				"__AVR_ATmega165__"
			}, 
			
			{
				"atmega165a", 
				"__AVR_ATmega165A__"
			}, 
			
			{
				"atmega165p", 
				"__AVR_ATmega165P__"
			}, 
			
			{
				"atmega168", 
				"__AVR_ATmega168__"
			}, 
			
			{
				"atmega168a", 
				"__AVR_ATmega168A__"
			}, 
			
			{
				"atmega168p", 
				"__AVR_ATmega168P__"
			}, 
			
			{
				"atmega169", 
				"__AVR_ATmega169__"
			}, 
			
			{
				"atmega169a", 
				"__AVR_ATmega169A__"
			}, 
			
			{
				"atmega169p", 
				"__AVR_ATmega169P__"
			}, 
			
			{
				"atmega169pa", 
				"__AVR_ATmega169PA__"
			}, 
			
			{
				"atmega16hva", 
				"__AVR_ATmega16HVA__"
			}, 
			
			{
				"atmega16hva2", 
				"__AVR_ATmega16HVA2__"
			}, 
			
			{
				"atmega16hvb", 
				"__AVR_ATmega16HVB__"
			}, 
			
			{
				"atmega16hvbrevb", 
				"__AVR_ATmega16HVBREVB__"
			}, 
			
			{
				"atmega16u4", 
				"__AVR_ATmega16U4__"
			}, 
			
			{
				"atmega32", 
				"__AVR_ATmega32__"
			}, 
			
			{
				"atmega323", 
				"__AVR_ATmega323__"
			}, 
			
			{
				"atmega324a", 
				"__AVR_ATmega324A__"
			}, 
			
			{
				"atmega324p", 
				"__AVR_ATmega324P__"
			}, 
			
			{
				"atmega324pa", 
				"__AVR_ATmega324PA__"
			}, 
			
			{
				"atmega325", 
				"__AVR_ATmega325__"
			}, 
			
			{
				"atmega325a", 
				"__AVR_ATmega325A__"
			}, 
			
			{
				"atmega325p", 
				"__AVR_ATmega325P__"
			}, 
			
			{
				"atmega3250", 
				"__AVR_ATmega3250__"
			}, 
			
			{
				"atmega3250a", 
				"__AVR_ATmega3250A__"
			}, 
			
			{
				"atmega3250p", 
				"__AVR_ATmega3250P__"
			}, 
			
			{
				"atmega328", 
				"__AVR_ATmega328__"
			}, 
			
			{
				"atmega328p", 
				"__AVR_ATmega328P__"
			}, 
			
			{
				"atmega329", 
				"__AVR_ATmega329__"
			}, 
			
			{
				"atmega329a", 
				"__AVR_ATmega329A__"
			}, 
			
			{
				"atmega329p", 
				"__AVR_ATmega329P__"
			}, 
			
			{
				"atmega329pa", 
				"__AVR_ATmega329PA__"
			}, 
			
			{
				"atmega3290", 
				"__AVR_ATmega3290__"
			}, 
			
			{
				"atmega3290a", 
				"__AVR_ATmega3290A__"
			}, 
			
			{
				"atmega3290p", 
				"__AVR_ATmega3290P__"
			}, 
			
			{
				"atmega32c1", 
				"__AVR_ATmega32C1__"
			}, 
			
			{
				"atmega32m1", 
				"__AVR_ATmega32M1__"
			}, 
			
			{
				"atmega32u6", 
				"__AVR_ATmega32U6__"
			}, 
			
			{
				"atmega406", 
				"__AVR_ATmega406__"
			}, 
			
			{
				"atmega64", 
				"__AVR_ATmega64__"
			}, 
			
			{
				"atmega640", 
				"__AVR_ATmega640__"
			}, 
			
			{
				"atmega644", 
				"__AVR_ATmega644__"
			}, 
			
			{
				"atmega644a", 
				"__AVR_ATmega644A__"
			}, 
			
			{
				"atmega644p", 
				"__AVR_ATmega644P__"
			}, 
			
			{
				"atmega644pa", 
				"__AVR_ATmega644PA__"
			}, 
			
			{
				"atmega645a", 
				"__AVR_ATmega645A__"
			}, 
			
			{
				"atmega645p", 
				"__AVR_ATmega645P__"
			}, 
			
			{
				"atmega645", 
				"__AVR_ATmega645__"
			}, 
			
			{
				"atmega6450", 
				"__AVR_ATmega6450__"
			}, 
			
			{
				"atmega6450a", 
				"__AVR_ATmega6450A__"
			}, 
			
			{
				"atmega6450p", 
				"__AVR_ATmega6450P__"
			}, 
			
			{
				"atmega649", 
				"__AVR_ATmega649__"
			}, 
			
			{
				"atmega649a", 
				"__AVR_ATmega649A__"
			}, 
			
			{
				"atmega649p", 
				"__AVR_ATmega649P__"
			}, 
			
			{
				"atmega6490", 
				"__AVR_ATmega6490__"
			}, 
			
			{
				"atmega6490a", 
				"__AVR_ATmega6490A__"
			}, 
			
			{
				"atmega6490p", 
				"__AVR_ATmega6490P__"
			}, 
			
			{
				"atmega64c1", 
				"__AVR_ATmega64C1__"
			}, 
			
			{
				"atmega64hve", 
				"__AVR_ATmega64HVE__"
			}, 
			
			{
				"atmega32hvb", 
				"__AVR_ATmega32HVB__"
			}, 
			
			{
				"atmega32hvbrevb", 
				"__AVR_ATmega32HVBREVB__"
			}, 
			
			{
				"at90can32", 
				"__AVR_AT90CAN32__"
			}, 
			
			{
				"at90can64", 
				"__AVR_AT90CAN64__"
			}, 
			
			{
				"at90pwm216", 
				"__AVR_AT90PWM216__"
			}, 
			
			{
				"at90pwm316", 
				"__AVR_AT90PWM316__"
			}, 
			
			{
				"atmega16c1", 
				"__AVR_ATmega16C1__"
			}, 
			
			{
				"atmega16m1", 
				"__AVR_ATmega16M1__"
			}, 
			
			{
				"atmega64m1", 
				"__AVR_ATmega64M1__"
			}, 
			
			{
				"atmega32u4", 
				"__AVR_ATmega32U4__"
			}, 
			
			{
				"at90scr100", 
				"__AVR_AT90SCR100__"
			}, 
			
			{
				"at90usb646", 
				"__AVR_AT90USB646__"
			}, 
			
			{
				"at90usb647", 
				"__AVR_AT90USB647__"
			}, 
			
			{
				"at94k", 
				"__AVR_AT94K__"
			}, 
			
			{
				"m3000", 
				"__AVR_M3000__"
			}, 
			
			{
				"atmega128", 
				"__AVR_ATmega128__"
			}, 
			
			{
				"atmega1280", 
				"__AVR_ATmega1280__"
			}, 
			
			{
				"atmega1281", 
				"__AVR_ATmega1281__"
			}, 
			
			{
				"atmega1284p", 
				"__AVR_ATmega1284P__"
			}, 
			
			{
				"atmega128rfa1", 
				"__AVR_ATmega128RFA1__"
			}, 
			
			{
				"at90can128", 
				"__AVR_AT90CAN128__"
			}, 
			
			{
				"at90usb1286", 
				"__AVR_AT90USB1286__"
			}, 
			
			{
				"at90usb1287", 
				"__AVR_AT90USB1287__"
			}, 
			
			{
				"atmega2560", 
				"__AVR_ATmega2560__"
			}, 
			
			{
				"atmega2561", 
				"__AVR_ATmega2561__"
			}, 
			
			{
				"atxmega16a4", 
				"__AVR_ATxmega16A4__"
			}, 
			
			{
				"atxmega16d4", 
				"__AVR_ATxmega16D4__"
			}, 
			
			{
				"atxmega16x1", 
				"__AVR_ATxmega16X1__"
			}, 
			
			{
				"atxmega32a4", 
				"__AVR_ATxmega32A4__"
			}, 
			
			{
				"atxmega32d4", 
				"__AVR_ATxmega32D4__"
			}, 
			
			{
				"atxmega32x1", 
				"__AVR_ATxmega32X1__"
			}, 
			
			{
				"atxmega64a3", 
				"__AVR_ATxmega64A3__"
			}, 
			
			{
				"atxmega64d3", 
				"__AVR_ATxmega64D3__"
			}, 
			
			{
				"atxmega64a1", 
				"__AVR_ATxmega64A1__"
			}, 
			
			{
				"atxmega64a1u", 
				"__AVR_ATxmega64A1U__"
			}, 
			
			{
				"atxmega128a3", 
				"__AVR_ATxmega128A3__"
			}, 
			
			{
				"atxmega128b1", 
				"__AVR_ATxmega128B1__"
			}, 
			
			{
				"atxmega128d3", 
				"__AVR_ATxmega128D3__"
			}, 
			
			{
				"atxmega192a3", 
				"__AVR_ATxmega192A3__"
			}, 
			
			{
				"atxmega192d3", 
				"__AVR_ATxmega192D3__"
			}, 
			
			{
				"atxmega256a3", 
				"__AVR_ATxmega256A3__"
			}, 
			
			{
				"atxmega256a3b", 
				"__AVR_ATxmega256A3B__"
			}, 
			
			{
				"atxmega256a3bu", 
				"__AVR_ATxmega256A3BU"
			}, 
			
			{
				"atxmega256d3", 
				"__AVR_ATxmega256D3__"
			}, 
			
			{
				"atxmega128a1", 
				"__AVR_ATxmega128A1__"
			}, 
			
			{
				"atxmega128a1u", 
				"__AVR_ATxmega128A1U__"
			}, 
			
			{
				"attiny4", 
				"__AVR_ATtiny4__"
			}, 
			
			{
				"attiny5", 
				"__AVR_ATtiny5__"
			}, 
			
			{
				"attiny9", 
				"__AVR_ATtiny9__"
			}, 
			
			{
				"attiny10", 
				"__AVR_ATtiny10__"
			}, 
			
			{
				"attiny20", 
				"__AVR_ATtiny20__"
			}, 
			
			{
				"attiny40", 
				"__AVR_ATtiny40__"
			}, 
			
			{
				"at90s1200", 
				"__AVR_AT90S1200__"
			}, 
			
			{
				"attiny11", 
				"__AVR_ATtiny11__"
			}, 
			
			{
				"attiny12", 
				"__AVR_ATtiny12__"
			}, 
			
			{
				"attiny15", 
				"__AVR_ATtiny15__"
			}, 
			
			{
				"ap7000", 
				"__AVR32_AP7000__"
			}, 
			
			{
				"ap7001", 
				"__AVR32_AP7001__"
			}, 
			
			{
				"ap7002", 
				"__AVR32_AP7002__"
			}, 
			
			{
				"ap7200", 
				"__AVR32_AP7200__"
			}, 
			
			{
				"uc3a0128", 
				"__AVR32_UC3A0128__"
			}, 
			
			{
				"uc3a0256", 
				"__AVR32_UC3A0256__"
			}, 
			
			{
				"uc3a0512", 
				"__AVR32_UC3A0512__"
			}, 
			
			{
				"uc3a0512es", 
				"__AVR32_UC3A0512ES__"
			}, 
			
			{
				"uc3a1128", 
				"__AVR32_UC3A1128__"
			}, 
			
			{
				"uc3a1256", 
				"__AVR32_UC3A1256__"
			}, 
			
			{
				"uc3a1512", 
				"__AVR32_UC3A1512__"
			}, 
			
			{
				"uc3a1512es", 
				"__AVR32_UC3A1512ES__"
			}, 
			
			{
				"uc3a3revd", 
				"__AVR32_UC3A3256S__"
			}, 
			
			{
				"uc3a364", 
				"__AVR32_UC3A364__"
			}, 
			
			{
				"uc3a364s", 
				"__AVR32_UC3A364S__"
			}, 
			
			{
				"uc3a3128", 
				"__AVR32_UC3A3128__"
			}, 
			
			{
				"uc3a3128s", 
				"__AVR32_UC3A3128S__"
			}, 
			
			{
				"uc3a3256", 
				"__AVR32_UC3A3256__"
			}, 
			
			{
				"uc3a3256s", 
				"__AVR32_UC3A3256S__"
			}, 
			
			{
				"uc3a464", 
				"__AVR32_UC3A464__"
			}, 
			
			{
				"uc3a464s", 
				"__AVR32_UC3A464S__"
			}, 
			
			{
				"uc3a4128", 
				"__AVR32_UC3A4128__"
			}, 
			
			{
				"uc3a4128s", 
				"__AVR32_UC3A4128S__"
			}, 
			
			{
				"uc3a4256", 
				"__AVR32_UC3A4256__"
			}, 
			
			{
				"uc3a4256s", 
				"__AVR32_UC3A4256S__"
			}, 
			
			{
				"uc3b064", 
				"__AVR32_UC3B064__"
			}, 
			
			{
				"uc3b0128", 
				"__AVR32_UC3B0128__"
			}, 
			
			{
				"uc3b0256", 
				"__AVR32_UC3B0256__"
			}, 
			
			{
				"uc3b0256es", 
				"__AVR32_UC3B0256ES__"
			}, 
			
			{
				"uc3b0512", 
				"__AVR32_UC3B0512__"
			}, 
			
			{
				"uc3b0512revc", 
				"__AVR32_UC3B0512REVC__"
			}, 
			
			{
				"uc3b164", 
				"__AVR32_UC3B164__"
			}, 
			
			{
				"uc3b1128", 
				"__AVR32_UC3B1128__"
			}, 
			
			{
				"uc3b1256", 
				"__AVR32_UC3B1256__"
			}, 
			
			{
				"uc3b1256es", 
				"__AVR32_UC3B1256ES__"
			}, 
			
			{
				"uc3b1512", 
				"__AVR32_UC3B1512__"
			}, 
			
			{
				"uc3b1512revc", 
				"__AVR32_UC3B1512REVC__"
			}, 
			
			{
				"uc64d3", 
				"__AVR32_UC64D3__"
			}, 
			
			{
				"uc128d3", 
				"__AVR32_UC128D3__"
			}, 
			
			{
				"uc64d4", 
				"__AVR32_UC64D4__"
			}, 
			
			{
				"uc128d4", 
				"__AVR32_UC128D4__"
			}, 
			
			{
				"uc3c0512crevc", 
				"__AVR32_UC3C0512CREVC__"
			}, 
			
			{
				"uc3c1512crevc", 
				"__AVR32_UC3C1512CREVC__"
			}, 
			
			{
				"uc3c2512crevc", 
				"__AVR32_UC3C2512CREVC__"
			}, 
			
			{
				"uc3l0256", 
				"__AVR32_UC3L0256__"
			}, 
			
			{
				"uc3l0128", 
				"__AVR32_UC3L0128__"
			}, 
			
			{
				"uc3l064", 
				"__AVR32_UC3L064__"
			}, 
			
			{
				"uc3l032", 
				"__AVR32_UC3L032__"
			}, 
			
			{
				"uc3l016", 
				"__AVR32_UC3L016__"
			}, 
			
			{
				"uc3l064revb", 
				"__AVR32_UC3L064REVB__"
			}, 
			
			{
				"uc64l3u", 
				"__AVR32_UC64L3U__"
			}, 
			
			{
				"uc128l3u", 
				"__AVR32_UC128L3U__"
			}, 
			
			{
				"uc256l3u", 
				"__AVR32_UC256L3U__"
			}, 
			
			{
				"uc64l4u", 
				"__AVR32_UC64L4U__"
			}, 
			
			{
				"uc128l4u", 
				"__AVR32_UC128L4U__"
			}, 
			
			{
				"uc256l4u", 
				"__AVR32_UC256L4U__"
			}, 
			
			{
				"uc3c064c", 
				"__AVR32_UC3C064C__"
			}, 
			
			{
				"uc3c0128c", 
				"__AVR32_UC3C0128C__"
			}, 
			
			{
				"uc3c0256c", 
				"__AVR32_UC3C0256C__"
			}, 
			
			{
				"uc3c0512c", 
				"__AVR32_UC3C0512C__"
			}, 
			
			{
				"uc3c164c", 
				"__AVR32_UC3C164C__"
			}, 
			
			{
				"uc3c1128c", 
				"__AVR32_UC3C1128C__"
			}, 
			
			{
				"uc3c1256c", 
				"__AVR32_UC3C1256C__"
			}, 
			
			{
				"uc3c1512c", 
				"__AVR32_UC3C1512C__"
			}, 
			
			{
				"uc3c264c", 
				"__AVR32_UC3C264C__"
			}, 
			
			{
				"uc3c2128c", 
				"__AVR32_UC3C2128C__"
			}, 
			
			{
				"uc3c2256c", 
				"__AVR32_UC3C2256C__"
			}, 
			
			{
				"uc3c2512c", 
				"__AVR32_UC3C2512C__"
			}, 
			
			{
				"mxt768e", 
				"__AVR32_MXT768E__"
			}
		};
        public static IEnumerable<string> GetSymbol(string deviceName)
        {
            string text;
            map.TryGetValue(deviceName.ToLowerInvariant(), out text);

            if (string.IsNullOrEmpty(text) == false)
                return new[] { text, Get8Or32BitImplicitSymbol(text) };

            if (deviceName.Length < 4)
                return Enumerable.Empty<string>();

            deviceName = deviceName.Substring(4); //strip out the AT32 and retry

            map.TryGetValue(deviceName.ToLowerInvariant(), out text);
            return string.IsNullOrEmpty(text) ? Enumerable.Empty<string>() : new [] {text, Get8Or32BitImplicitSymbol(text)};
        }

        private static string Get8Or32BitImplicitSymbol(string define)
        {
            return define.StartsWith("__AVR32_") ? "__AVR32__" : "__AVR__";
        }
    }
}
