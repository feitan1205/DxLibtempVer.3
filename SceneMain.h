#pragma once

#include <vector>
#include "SceneBase.h"
#include "SceneMenuWindow.h"

class SceneMain : public SceneBase
{
public:
	SceneMain();
	virtual ~SceneMain();

	// ������
	void init();
	// �I������
	void end();

	// ���t���[���̏���
	void update();
	// ���t���[���̕`��
	void draw();

	bool isMenuOpen() { return m_isMenu; }
	bool getisGameEnd() { return m_isGameEnd; }

private:

	bool m_isMenu;

	bool m_isPlayerHit;

	bool m_isEnemyHit;

	bool m_isOpenWindow;

	bool m_isGameEnd;

	SceneMenuWindow m_menuWindow;


};