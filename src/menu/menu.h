#include<stdio.h>
#include<SDL.h>

extern SDL_Surface *prSDLScreen;

#define MENU_FILE_SPLASH DATA_PREFIX "splash.bmp"
#define MENU_FILE_BACKGROUND DATA_PREFIX "background.bmp"
#define MENU_FILE_WINDOW DATA_PREFIX "window.bmp"
#define MENU_FILE_TEXT DATA_PREFIX "text.bmp"
#ifdef DREAMCAST
#ifdef AUTO_RUN
#define MENU_DIR_DEFAULT "/cd/"
#else
#define MENU_DIR_DEFAULT "/"
#endif
#else
#define MENU_DIR_DEFAULT "."
#endif

void text_draw_background();
void init_text(int splash);
void quit_text(void);
void write_text(int x, int y, char * str);
void write_text_inv(int x, int y, char * str);
void write_text_inv_n(int x, int y, int n, char * str);
void write_centered_text(int y, char * str);
void write_num(int x, int y, int v);
void write_num_inv(int x, int y, int v);
void text_draw_window(int x, int y, int w, int h, char *title);
void text_draw_barra(int x, int y, int w, int h, int per, int max);
void text_draw_window_bar(int x, int y, int w, int h, int per, int max, char *title);
void _write_text(SDL_Surface *sf, int x, int y, char * str);
void _write_text_inv(SDL_Surface *sf, int x, int y, char * str);
void _write_text_inv_n(SDL_Surface *sf, int x, int y, int n, char * str);
void _write_centered_text(SDL_Surface *sf, int y, char * str);
void _write_num(SDL_Surface *sf, int x, int y, int v);
void _write_num_inv(SDL_Surface *sf, int x, int y, int v);
void _text_draw_window(SDL_Surface *sf, int x, int y, int w, int h, char *title);
void _text_draw_window_bar(SDL_Surface *sf, int x, int y, int w, int h, int per, int max, char *title);
// void text_draw_menu_msg();
void text_flip(void);

void drawPleaseWait(void);
void menu_raise(void);
void menu_unraise(void);

int run_mainMenu();
int run_menuLoad();
int run_menuSave();
int run_menuGame();
int run_menuControl();

