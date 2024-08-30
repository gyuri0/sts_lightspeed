#include "sim/search/SimpleAgent.h"

using namespace sts;

int main(int argc, const char* argv[]) {
    GameContext gc(CharacterClass::IRONCLAD, 0, 0);

    search::SimpleAgent agent;
    agent.print = true;
    agent.playout(gc);
}