#include <stdio.h>
#include <string.h>

typedef struct {
	char performersName[30];
	char songName[30];
	int yearReleased;
	int totalPlayingTime; // in seconds
} Songs;

int main() {
	int totalSongsPlayingTime = 0;

	Songs songList[5] = {
		{ "PuniPuni Denki", "My Queen", 2019, 298 },
		{ "*Luna", "8.32", 2019, 250 },
		{ "Animals As Leaders", "Red Miso", 2022, 271 },
		{ "Frums", "Aegleseeker", 2020, 696 },
		{ "songgg", "f323", 2015, 420},
	};

	// b
	printf(
		"MY COLLECTION OF SONGS\n"
		"Performer                      Song                           Year   Playing Time\n"
		"---------------------------------------------------------------------------------\n"
	);
	for (int i = 0; i < 5; i++) {
		printf("%-30s %-30s %-6d %d\n",
			songList[i].performersName,
			songList[i].songName,
			songList[i].yearReleased,
			songList[i].totalPlayingTime
		);
		totalSongsPlayingTime += songList[i].totalPlayingTime;
	}

	printf(
		"--------------------------------------------------------------------------------\n"
		"Total Playing Time = %d seconds ( = %d min %d sec)\n",
		totalSongsPlayingTime,
		totalSongsPlayingTime / 60 % 60,
		totalSongsPlayingTime % 60
	);

	// c
	int numOfSongsListed = 0;
	printf(
		"\nList of songs - 2015 and earlier\n"
		"Performer                      Song                           Year   Playing Time\n"
		"---------------------------------------------------------------------------------\n"
	);
	for (int i = 0; i < 5; i++) {
		if (songList[i].yearReleased > 2015) continue;

		printf("%-30s %-30s %-6d %d\n",
			songList[i].performersName,
			songList[i].songName,
			songList[i].yearReleased,
			songList[i].totalPlayingTime
		);
		numOfSongsListed++;
	}

	printf(
		"--------------------------------------------------------------------------------\n"
		"%d songs listed\n", 
		numOfSongsListed
	);
	
	// d
	int numOfSongsSearched = 0;
	char searchString[30];

	printf("\nPerformer's Name to search > ");
	scanf("%[^\n]%*c", searchString);

	printf(
		"\nSong                           Year   Playing Time\n"
		"--------------------------------------------------\n"
	);
	for (int i = 0; i < 5; i++) {
		if (strcmp(songList[i].performersName, searchString)) continue;
	
		printf("%-30s %-6d %d\n",
			songList[i].songName,
			songList[i].yearReleased,
			songList[i].totalPlayingTime
		);
		numOfSongsSearched++;
	}

	printf(
		"------------------------------------------------\n"
		"%d songs listed\n",
		numOfSongsSearched
	);
}