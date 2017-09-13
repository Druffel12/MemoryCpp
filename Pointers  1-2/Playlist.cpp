#include "Playlist.h"
#include <iostream>


void printPlaylist(const Playlist & pl)
{

	for (int i = 0; i < pl.trackCount; i++)
	{
		std::cout << pl.tracklist[i].TrackName << std::endl;
	}

}

void shufflePlaylist(Playlist & pl)
{
	
}
