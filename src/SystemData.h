#ifndef _SYSTEMDATA_H_
#define _SYSTEMDATA_H_

#include <vector>
#include <string>

class GameData;

class SystemData
{
public:
	SystemData(std::string name, std::string startPath, std::string extension, std::string command);
	~SystemData();

	unsigned int getGameCount();
	GameData* getGame(unsigned int i);
	std::string getName();

	void buildGameList();
	void launchGame(unsigned int i);
	static void deleteSystems();
	static void loadConfig();
	static void writeExampleConfig();
	static std::string getConfigPath();

	static std::vector<SystemData*> sSystemVector;
private:
	std::string mName;
	std::string mStartPath;
	std::string mSearchExtension;
	std::string mLaunchCommand;

	std::vector<GameData*> mGameVector;

	void deleteGames();
};

#endif
