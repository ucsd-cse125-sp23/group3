#pragma once
#include "soloud/soloud.h"
#include "soloud/soloud_wav.h"
#include "../../shared/GlobalVariables.h"
#include "../../shared/GameData.h"
#include "Cube.h"

class Audio {
public:
	static SoLoud::Soloud gSoloud;
	static SoLoud::Wav gwave;
	static SoLoud::Wav aliceSkill;
	static SoLoud::Wav bobSkill;
	static SoLoud::Wav carolSkill;
	static SoLoud::Wav daveSkill;
	static SoLoud::Wav ah;

	static const char* bgm_wav;
	static const char* win_wav;
	static const char* lose_wav;
	static const char* alice_skill_wav;
	static const char* bob_skill_wav;
	static const char* carol_skill_wav;
	static const char* dave_skill_wav;
	static const char* ah_wav;
	static int assign_id;
	static int level_A;

	static void init(int);

	static void deinit();

	// load wav
	static void loadBgm();
	static void loadWin();
	static void loadLose();

	// player
	static void playBgm();
	static void playEnd(GameState);

	// skill
	static void playSkillAudio(GameData*, const std::vector<Cube*>&);
	static void playHpLow(GameData*);
	static void playskill(glm::mat4);		// offline testing
};
