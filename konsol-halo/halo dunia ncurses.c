#include <ncurses.h>
int main()
{
	initscr();
	printw("Halo, dunia!");
	refresh();
	getch();
	endwin();
	return 0;
}