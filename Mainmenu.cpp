#include <conio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

char Menu() {

    char word;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
         << endl;
    cout
        << "                                                                   "
           "                                                                   "
           "                                                                  "
        << endl;
    cout << "   #        #         #           #       #      #        ######  "
            "         #           #       #      #     "
         << endl;
    cout << "   #        #       #   #         #       #             #        "
            "#       #   #         #       #            "
         << endl;
    cout << "   #        #     #       #       #       #      #      #         "
            "     #       #       #       #      #     "
         << endl;
    cout << "   ##########    ###########      #       #      #      #      "
            "###    ###########      #       #      #     "
         << endl;
    cout << "   #        #    #         #      #       #      #      #        "
            "#    #         #      #       #      #     "
         << endl;
    cout << "   #        #    #         #      #       #      #      #        "
            "#    #         #      #       #      #     "
         << endl;
    cout << "   #        #    #         #      #       #      #        ####### "
            "    #         #      #       #      #     "
         << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;

    cout << "                                           Press the button"
         << endl;
    cout << "" << endl;

    cout << "                                              Start:  S" << endl;
    cout << "                                              Exit :  Q" << endl;

    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
         << endl;
    word = _getch(); // ����ġ�� �ʾƵ� �ٷ� �Է� ���� �� �ְ� �ϱ� ���� cin x
    return word;
}
int main() {
    system("mode con cols=108 lines=40 | title Halli Galli");
    cout << "" << endl;
    cout << "" << endl;
    system("color e9"); // e or f is best
    cout << "                                          Let's play  Halli Galli "
         << endl;

    while (1) {
        switch (Menu()) {
        case 'S':
        case 's':
            break;

        case 'Q':
        case 'q':
            return 0;
            break;
        }
    }
    return 0;
}
