#include "tile_description.h"
#include <map>
#include <boost/assign.hpp>

using namespace boost::assign;

//defaults to previous area if not defined
static std::map<char, std::map<AreaRenderMode, std::string>> descriptions = map_list_of
	('!', map_list_of
		(TUTORIAL, "Tutorial background billboard")
		(MINES, "Unused"))
	('#', map_list_of
		(TUTORIAL, "TNT")
		(JUNGLE, "Hell bible"))
	('$', map_list_of
		(TUTORIAL, "Roulette item"))
	('%', map_list_of
		(TUTORIAL, "Roulette item barricade"))
	('&', map_list_of
		(TUTORIAL, "Waterfall")
		(TEMPLE, "Lavafall"))
	('*', map_list_of
		(TUTORIAL, "Spinning spike ball"))
	('+', map_list_of
		(TUTORIAL, "TODO"))
	(',', map_list_of
		(TUTORIAL, "TODO"))
	('-', map_list_of
		(TUTORIAL, "Cracking ice platform"))
	('.', map_list_of
		(TUTORIAL, "Unmorphed terrain tile"))
	('0', map_list_of
		(TUTORIAL, "Empty tile"))
	('1', map_list_of
		(TUTORIAL, "Regular terrain tile"))
	('2', map_list_of
		(TUTORIAL, "Probablistic terrain tile"))
	('3', map_list_of
		(TUTORIAL, "TODO"))
	('4', map_list_of
		(TUTORIAL, "Push block with physics"))
	('5', map_list_of
		(TUTORIAL, "Obstacle marker tile 1"))
	('6', map_list_of
		(TUTORIAL, "Obstacle marker tile 2"))
	('7', map_list_of
		(TUTORIAL, "TODO"))
	('8', map_list_of
		(TUTORIAL, "Terrain-generating entrance/exit with platform"))
	('9', map_list_of
		(TUTORIAL, "Static platformless entrance/exit"))
	(':', map_list_of
		(TUTORIAL, "Scorpion spawn tile")
		(JUNGLE, "Tikiman/caveman spawn tile"))
	(';', map_list_of
		(TUTORIAL, "TODO"))
	('=', map_list_of
		(TUTORIAL, "Wooden platform"))
	('?', map_list_of
		(TUTORIAL, "TODO"))
	('A', map_list_of
		(TUTORIAL, "Idol altar tile"))
	('B', map_list_of
		(TUTORIAL, "TODO"))
	('C', map_list_of
		(TUTORIAL, "Non-movable push block"))
	('D', map_list_of
		(TUTORIAL, "Closing castle door tile"))
	('E', map_list_of
		(TUTORIAL, "Chest spawn tile"))
	('F', map_list_of
		(TUTORIAL, "TODO"))
	('G', map_list_of
		(TUTORIAL, "Ladder tile"))
	('I', map_list_of
		(TUTORIAL, "Idol spawn tile")
		(HELL, "Tiki spawn"))
	('J', map_list_of
		(TUTORIAL, "Ol' Bitey spawn")
		(HELL, "TODO"))
	('K', map_list_of
		(TUTORIAL, "Shopkeeper spawn"))
	('L', map_list_of
		(TUTORIAL, "Ladder tile")
		(JUNGLE, "Vine tile")
		(TEMPLE, "TODO")
		(HELL, "Chain tile"))
	('M', map_list_of
		(TUTORIAL, "Terrain block containing mattock"))
	('N', map_list_of
		(TUTORIAL, "Snake spawn tile"))
	('O', map_list_of
		(TUTORIAL, "Moai head spawn"))
	('P', map_list_of
		(TUTORIAL, "Ladder platform junction"))
	('Q', map_list_of
		(TUTORIAL, "TODO")
		(JUNGLE, "Variable-length vine spawn")
		(HELL, "Variable-length chain spawn"))
	('R', map_list_of
		(TUTORIAL, "Ruby tile"))
	('S', map_list_of
		(TUTORIAL, "Shop contents spawn"))
	('T', map_list_of
		(TUTORIAL, "Tree spawn"))
	('U', map_list_of
		(TUTORIAL, "Vlad spawn")
		(HAUNTED_CASTLE, "Black knight spawn")
		(WORM, "TODO"))
	('V', map_list_of
		(TUTORIAL, "TODO"))
	('W', map_list_of
		(TUTORIAL, "TODO"))
	('X', map_list_of
		(TUTORIAL, "TODO")
		(MINES, "Giant spider spawn")
		(JUNGLE, "'Psychic presence' alien spawn")
		(HELL, "TODO"))
	('Y', map_list_of
		(TUTORIAL, "Yeti King spawn")
		(HELL, "King Yama spawn"))
	('a', map_list_of
		(TUTORIAL, "Ankh spawn tile"))
	('b', map_list_of
		(TUTORIAL, "Shop floor tile"))
	('c', map_list_of
		(TUTORIAL, "Crystal skull spawn tile")
		(WORM, "Crysknife spawn tile")
		(ICE_CAVES, "Crystal skull spawn tile"))
	('d', map_list_of
		(TUTORIAL, "Jungle terrain tile"))
	('e', map_list_of
		(TUTORIAL, "Crate spawn")
		(MINES, "Beehive terrain tile"))
	('f', map_list_of
		(TUTORIAL, "Blue falling platform")
		(HELL, "Red falling platform"))
	('g', map_list_of
		(TUTORIAL, "Unlockable character / hired help coffin spawn"))
	('h', map_list_of
		(TUTORIAL, "Hell terrain tile")
		(JUNGLE, "Gravestone tile")
		(WORM, "Hell terrain tile"))
	('i', map_list_of
		(TUTORIAL, "Ice block tile")
		(JUNGLE, "Tiki village fireplace")
		(WORM, "Ice block tile"))
	('j', map_list_of
		(TUTORIAL, "TODO"))
	('k', map_list_of
		(TUTORIAL, "Shop type sign tile"))
	('l', map_list_of
		(TUTORIAL, "Lantern tile"))
	('m', map_list_of
		(TUTORIAL, "Unbreakable terrain tile"))
	('n', map_list_of
		(TUTORIAL, "TODO"))
	('o', map_list_of
		(TUTORIAL, "TODO"))
	('p', map_list_of
		(TUTORIAL, "TODO"))
	('q', map_list_of
		(TUTORIAL, "TODO"))
	('r', map_list_of
		(TUTORIAL, "TODO"))
	('s', map_list_of
		(TUTORIAL, "Spikes tile"))
	('t', map_list_of
		(TUTORIAL, "Temple/castle tile"))
	('u', map_list_of
		(TUTORIAL, "Bat spawn tile"))
	('v', map_list_of
		(TUTORIAL, "Wooden platform tile"))
	('w', map_list_of
		(TUTORIAL, "Water tile")
		(TEMPLE, "Lava tile"))
	('x', map_list_of
		(TUTORIAL, "Kali sacrifice altar spawn"))
	('y', map_list_of
		(TUTORIAL, "Block containing ruby"))
	('z', map_list_of
		(TUTORIAL, "TODO")
		(JUNGLE, "Bee spawn"))
	('|', map_list_of
		(TUTORIAL, "Vault spawn tile"))
	('~', map_list_of
		(TUTORIAL, "Alien bounce trap"));

namespace Description {
	std::string ChunkDescription(Chunk* cnk) {
		return cnk->get_name();
	}

	std::string TileDescription(char tile, AreaRenderMode mode) {
		auto& areas = descriptions[tile];

		const std::string* desc = nullptr;
		for(unsigned p = TUTORIAL; p != INVALID; ++p) {
			AreaRenderMode arm = static_cast<AreaRenderMode>(p);
			auto it = areas.find(arm);
			if(it != areas.end()) {
				desc = &it->second;
			}

			if(arm == mode) {
				break;
			}
		}

		if(desc != nullptr)
			return *desc;
		else
			return std::string("'") + tile + "'";
	}

	std::string TileDescription(char tile, Chunk* parent) {
		return TileDescription(tile, mode_from_chunk(parent));
	}
}