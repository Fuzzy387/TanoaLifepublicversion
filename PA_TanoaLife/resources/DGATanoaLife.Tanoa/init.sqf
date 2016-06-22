StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;

life_HC_isActive = false; 
publicVariable "life_HC_isActive";