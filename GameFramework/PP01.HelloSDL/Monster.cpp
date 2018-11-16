#include "Monster.h"

Monster::Monster(const LoaderParams* pParams) : SDLGameObject(pParams)
{
}

void Monster::draw()
{
	SDLGameObject::draw();
}

void Monster::update()
{
}

void Monster::clean()
{
}

void Monster::control(float m_x, float m_y, int currentFrame)
{
	//몬스터 왕복코드
	if (this->m_position.getX() >= 0 && this->m_position.getX() < 100 && goR == true)
	{
		this->m_position.setX(m_position.getX() + m_x);

		if (this->m_position.getX() == 100)
		{
			goR = false;
		}
	}
	else if (goR == false)
	{
		this->m_position.setX(m_position.getX() - m_x);

		if (this->m_position.getX() == 0)
		{
			goR = true;
		}
	}

	//프레임 수 제어
	m_currentFrame = currentFrame;
}