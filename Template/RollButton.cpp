#include "RollButton.h"
#include "Game.h"

StartButton::StartButton()
// call super constructor
	:Button(
		"../Assets/textures/StartButton.png",
		"startButton",
		ROLL_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{

}

StartButton::~StartButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{

		srand(time(0));
		std::cout << (rand() % 6 + 1) << std::endl;
		return 0;
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}