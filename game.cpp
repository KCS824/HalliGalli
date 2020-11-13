#include "game.h"
#include <random>
#include <time.h>

Card initDeck[56] = {
	Card('@', 1), Card('@', 1), Card('@', 1), Card('@', 1), Card('@', 1),
	Card('@', 2), Card('@', 2), Card('@', 2),
	Card('@', 3), Card('@', 3), Card('@', 3),
	Card('@', 4), Card('@', 4),
	Card('@', 5),

	Card('#', 1), Card('#', 1), Card('#', 1), Card('#', 1), Card('#', 1),
	Card('#', 2), Card('#', 2), Card('#', 2),
	Card('#', 3), Card('#', 3), Card('#', 3),
	Card('#', 4), Card('#', 4),
	Card('#', 5),

	Card('&', 1), Card('&', 1), Card('&', 1), Card('&', 1), Card('&', 1),
	Card('&', 2), Card('&', 2), Card('&', 2),
	Card('&', 3), Card('&', 3), Card('&', 3),
	Card('&', 4), Card('&', 4),
	Card('&', 5),

	Card('$', 1), Card('$', 1), Card('$', 1), Card('$', 1), Card('$', 1),
	Card('$', 2), Card('$', 2), Card('$', 2),
	Card('$', 3), Card('$', 3), Card('$', 3),
	Card('$', 4), Card('$', 4),
	Card('$', 5)
};

void card_dispense() {  // ���� ī�� �й�
	int shuffle[56] = { 0, }, chk[56] = { 0, };
	int cnt = 0, r;

	srand((unsigned int)time(NULL));

	while (cnt < 56)
	{
		r = rand() % 56; // 0 ~ 55 ���� ����
		if (!chk[r]) { // �̹� ���� ���� ���� ���ڸ�
			++chk[r], shuffle[cnt] = r; // üũ �� shuffle �迭�� �߰�
			++cnt;
		}
	}

	for (int i = 0; i < 28; ++i)
		p1.pushDeck(initDeck[shuffle[i]]);

	for(int i = 28; i < 56; ++i)
		p2.pushDeck(initDeck[shuffle[i]]);
}

bool isSum5()
{
	Card c1 = p1.getOpenedTop(), c2 = p2.getOpenedTop();

	if (c1.getType() == c2.getType()) {  // �� ī���� Ÿ���� ������
		if (c1.getNumber() + c2.getNumber() == 5)  // �� ī���� ���� ���� 5�� true
			return true;
	}

	else {  // �� ī���� Ÿ���� �ٸ���
		if (c1.getNumber() == 5 || c2.getNumber() == 5)  // �� �� �ϳ��� ���ڰ� 5�� true
			return true;
	}

	return false;
}

int bellPressed(int player)
{
	if (isSum5()) {
		// if (pressed(p1) p1 win;
		// else if (pressed(p2) p2 win;
	}
	return 1;
}


int game() 
{
	int turn = 1; // � �÷��̾��� ������ ��Ÿ��
	
	card_dispense();

	// �̿ϼ�
	return 0; // �¸� �÷��̾ ��ȯ
}
