#include "BIS_AddonInfo.hpp"

class CfgPatches {
	class RomeMusic {
		name = "Rome's Music";
		author = "Rome";
		requiredVersion = 1.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
      	worlds[] = {};
	};
};

class CfgMusic {
	#include "class\Anime.hpp"
	#include "class\Classical.hpp"
	#include "class\Country.hpp"
	#include "class\Darksynth.hpp"
	#include "class\Metal.hpp"
	#include "class\Military.hpp"
	#include "class\Pop.hpp"
	#include "class\Rock.hpp"
	#include "class\Tv.hpp"
	#include "class\Videogames.hpp"
};

class CfgMusicClasses {

	class Anime {
		displayName = "[RM] Anime";
	};

	class Classical {
		displayName = "[RM] Classical";
	};

	class Country {
		displayName = "[RM] Country";
	};

	class Darksynth {
		displayName = "[RM] Darksynth";
	};

	class Metal {
		displayName = "[RM] Metal";
	};
	
	class Military {
		displayName = "[RM] Military";
	};

	class Pop {
		displayName = "[RM] Pop";
	};

	class Rock {
		displayName = "[RM] Rock";
	};

	class Tv {
		displayName = "[RM] Tv";
	};

	class Videogames {
		displayName = "[RM] Videogames";
	};
};