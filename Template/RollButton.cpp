#include "RollButton.h"
#include "Game.h"

RollButton::RollButton()
// call super constructor
	:Button(
		"../Assets/textures/rollButton.png",
		"rollButton",
		ROLL_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{

}

RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{

}