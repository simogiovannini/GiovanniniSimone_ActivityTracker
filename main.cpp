#include <ncurses.h>
#include <iostream>
#include <unistd.h>

int main() {

    initscr();
    noecho();
    curs_set(FALSE);

    mvprintw(3, 5, "Hello, world!");
    refresh();

    sleep(1);
    getch();
    endwin();


}
