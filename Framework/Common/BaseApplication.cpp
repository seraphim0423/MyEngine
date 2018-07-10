#include"BaseApplication.hpp"

int Game::BaseApplication::Initialize() {
    m_bQuit = false;
    return 0;
}

void Game::BaseApplication::Finalize() {

}

void Game::BaseApplication::Tick() {

}

bool Game::BaseApplication::IsQuit() {
    return m_bQuit;
}
