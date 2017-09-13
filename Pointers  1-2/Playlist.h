#pragma once
#include <string>
struct Track
{
	std::string TrackName;
	float playTime;
};

struct Playlist
{
	std::string name;
	
	Track * tracklist;
	int trackCount;
};

void printPlaylist(const Playlist& pl);
void shufflePlaylist(Playlist& pl);



