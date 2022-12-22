#include "Game_Engine.h"

class SandBox : public Game_Engine::Application
{
public:
	SandBox()
	{
		
	}
	~SandBox()
	{
		
	}
};

Game_Engine::Application* Game_Engine::CreateApplication()
{
	return new SandBox();
}
