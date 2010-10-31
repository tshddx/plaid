#include <ncurses.h>

int main (int argc, char *argv[])
{
    WINDOW *w_transcript, *w_info, *w_user0, *w_user1, *w_user2, *w_user3, *w_user4, *w_user5, *w_user6, *w_user7, *w_user8, *w_user9, *w_status, *w_edit;
    int startx, starty, width, height;

    initscr ();
    start_color ();
    noecho ();
    cbreak ();
    init_pair (1, COLOR_WHITE, COLOR_BLACK);
    init_pair (2, COLOR_BLACK, COLOR_CYAN);
    init_pair (3, COLOR_WHITE, COLOR_BLUE);
    init_pair (4, COLOR_BLACK, COLOR_GREEN);
    init_pair (5, COLOR_BLACK, COLOR_WHITE);

    refresh ();

    w_transcript = newwin (23, 40, 0, 0);
    wbkgd (w_transcript, COLOR_PAIR (1));
    wborder(w_transcript, '|', '|', '-', '-', '+', '+', '+', '+');
    wprintw (w_transcript, "Transcript.\nPRESS ANY KEY TO EXIT!");
    wrefresh (w_transcript);

    w_info = newwin (3, 40, 0, 40);
    wbkgd (w_info, COLOR_PAIR (2));
    wprintw (w_info, "Info Bar.");
    wrefresh (w_info);

    w_user0 = newwin (2, 20, 4, 40);
    wbkgd (w_user0, COLOR_PAIR (3));
    wprintw (w_user0, "User 0.");
    wrefresh (w_user0);

    w_user1 = newwin (2, 20, 7, 40);
    wbkgd (w_user1, COLOR_PAIR (3));
    wprintw (w_user1, "User 1.");
    wrefresh (w_user1);

    w_user2 = newwin (2, 20, 10, 40);
    wbkgd (w_user2, COLOR_PAIR (3));
    wprintw (w_user2, "User 2.");
    wrefresh (w_user2);

    w_user3 = newwin (2, 20, 13, 40);
    wbkgd (w_user3, COLOR_PAIR (3));
    wprintw (w_user3, "User 3.");
    wrefresh (w_user3);

    w_user4 = newwin (2, 20, 16, 40);
    wbkgd (w_user4, COLOR_PAIR (3));
    wprintw (w_user4, "User 4.");
    wrefresh (w_user4);

    w_user5 = newwin (2, 20, 5, 60);
    wbkgd (w_user5, COLOR_PAIR (3));
    wprintw (w_user5, "User 5.");
    wrefresh (w_user5);

    w_user6 = newwin (2, 20, 8, 60);
    wbkgd (w_user6, COLOR_PAIR (3));
    wprintw (w_user6, "User 6.");
    wrefresh (w_user6);

    w_user7 = newwin (2, 20, 11, 60);
    wbkgd (w_user7, COLOR_PAIR (3));
    wprintw (w_user7, "User 7.");
    wrefresh (w_user7);

    w_user8 = newwin (2, 20, 14, 60);
    wbkgd (w_user8, COLOR_PAIR (3));
    wprintw (w_user8, "User 8.");
    wrefresh (w_user8);

    w_user9 = newwin (2, 20, 17, 60);
    wbkgd (w_user9, COLOR_PAIR (3));
    wprintw (w_user9, "User 9.");
    wrefresh (w_user9);

    w_status = newwin (3, 40, 20, 40);
    wbkgd (w_status, COLOR_PAIR (4));
    wprintw (w_status, "Status and Help.");
    wrefresh (w_status);

    w_edit = newwin (1, 80, 23, 0);
    wbkgd (w_edit, COLOR_PAIR (5));
    wprintw (w_edit, "Your Edit Line.");
    wrefresh (w_edit);

    refresh ();

    getch ();
    endwin ();
}
