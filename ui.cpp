#include "ui.h"

void gameUI()
{
	for(int i = 0; i < 108; ++i) cout << " ";
	cout << "                                                " << "������������������������" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "    Player 1                                    " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "    ī�� �ѱ�� : a                             " << endl;
	cout << "                                                " << "��          ��" << "    �� ġ�� : d                                 " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "������������������������" << "                                                " << endl;
	cout << "                                                " << "������������������������" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "������������������������" << "                                                " << endl;
	for (int i = 0; i < 108; ++i) cout << " ";
	for (int i = 0; i < 108; ++i) cout << " ";
	cout << "                                                " << "������������������������" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "������������������������" << "                                                " << endl;
	cout << "                                                " << "������������������������" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "     Player 2                                   " << endl;
	cout << "                                                " << "��          ��" << "                                                " << endl;
	cout << "                                                " << "��          ��" << "     ī�� �ѱ�� : j                            " << endl;
	cout << "                                                " << "��          ��" << "     �� ġ�� : l                                " << endl;
	cout << "                                                " << "������������������������" << "                                                " << endl;

}

void cardPrint(int player, char type, int num)
{
	if (num == 1)
	{
		cout << "     " << type << "     ";
	}
	// �̿ϼ�
}


void gotoxy(int x, int y) {
	printf("\033[%d;%df", y, x);
	fflush(stdout);
}