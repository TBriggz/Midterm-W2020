#pragma once
#ifndef __START_BUTTON__
#define __START_BUTTON__

#include "Button2.h"

class StartButton : public Button
{
public:
	StartButton();
	~StartButton();


	bool ButtonClick() override;
private:
	bool m_isClicked;
};

#endif /* defined (__ROLL_BUTTON__) */