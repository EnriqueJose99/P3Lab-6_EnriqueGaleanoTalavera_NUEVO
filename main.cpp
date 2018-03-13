#include "bombas.h"
#include "normal.h"
#include "espina.h"
#include "jugador.h"
#include "items.h"
#include "escenario.h"
#include "invisible.h"
#include "tren.h"
#include "v.h"
#include <ncurses.h>
#include <iostream>
using namespace std;


int main(){
  initscr();
  do{
    printw("Hola Mundo, ");
    printw("Como estas?, ");
    printw("Hay herencia, ");
    printw("Estan las clase y la matriz.");
    printw("Presione q para salir del programa y luego enter!");
  }while(getch() != 'q');
  refresh();
  getch();
  endwin();
  return 0;
}
