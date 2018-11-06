class CfgPatches
{
	class weapon_holster_maximili
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
		author[]=
		{
			"MAXIMILI"
		};
	};
};

class CfgFunctions
{
	class WpnHr
	{
		class Actions
		{
			class _weaponHolster
			{
				file = "WeaponHolster\w_h\fn\fn_WeaponHolster.sqf";
			};
/*
			class _WHCalled
			{
				file = "WeaponHolster\w_h\fn\fn_WHCalled.sqf";
			};
*/
		};
	};
};

class CfgVehicles
{
	class Land;
	class Man: Land {};
	class CAManBase: Man
	{
		class EventHandlers
		{
			class MXML_WeaponHolsterOnUnit
			{
				init = "call wpnhr_fnc_weaponHolster;“;
			};
		};
	};
};
