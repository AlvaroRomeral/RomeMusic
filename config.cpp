#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class RomeMusic
	{
		name = "Rome's Music";
		author = "Rome";
		requiredVersion = 1.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
      	worlds[] = {};
	};
};
class CfgMusic
{
	#include "Military.hpp"
	#include "HeavyMetal.hpp"
	#include "RockClassic.hpp"
	#include "Movies.hpp"
	#include "ModernPOP.hpp"
	#include "Country.hpp"
	#include "ACDC.hpp"
	#include "ClassicalEpic.hpp"
	#include "Games.hpp"
	#include "Darksynth.hpp"
	#include "Anime.hpp"
};
class CfgMusicClasses
{
	class Military
	{
		displayName = "RM - Military";
	};
	class HeavyMetal
	{
		displayName = "RM - Heavy Metal";
	};
	class RockClassic
	{
		displayName = "RM - Rock Classic";
	};
	class Movies
	{
		displayName = "RM - Movies & Series";
	};
	class ModernPOP
	{
		displayName = "RM - POP/Modern";
	};
	class Country
	{
		displayName = "RM - Country";
	};
	class ACDC
	{
		displayName = "RM - AC/DC";
	};
	class ClassicalEpic
	{
		displayName = "RM - Classical/Epic";
	};
	class Games
	{
		displayName = "RM - Videogames";
	};
	class Darksynth
	{
		displayName = "RM - Darksynth";
	};
	class Anime
	{
		displayName = "RM - Anime";
	};
};