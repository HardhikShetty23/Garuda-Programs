#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>

#define WIDTH 20
#define HEIGHT 20

typedef struct {
    int x, y;
} Point;

typedef struct {
    Point body[100];
    int length;
    Point direction;
} Snake;

void init_game(Snake *snake, Point *food) {
    snake->length = 1;
    snake->body[0].x = WIDTH / 2;
    snake->body[0].y = HEIGHT / 2;
    snake->direction.x = 1;
    snake->direction.y = 0;

    food->x = rand() % WIDTH;
    food->y = rand() % HEIGHT;
}

void draw_game(Snake *snake, Point *food) {
    clear();
    for (int i = 0; i < snake->length; i++) {
        mvprintw(snake->body[i].y, snake->body[i].x, "O");
    }
    mvprintw(food->y, food->x, "X");
    refresh();
}

void update_snake(Snake *snake) {
    for (int i = snake->length - 1; i > 0; i--) {
        snake->body[i] = snake->body[i - 1];
    }
    snake->body[0].x += snake->direction.x;
    snake->body[0].y += snake->direction.y;

    if (snake->body[0].x >= WIDTH) snake->body[0].x = 0;
    if (snake->body[0].x < 0) snake->body[0].x = WIDTH - 1;
    if (snake->body[0].y >= HEIGHT) snake->body[0].y = 0;
    if (snake->body[0].y < 0) snake->body[0].y = HEIGHT - 1;
}

int check_collision(Snake *snake, Point *food) {
    if (snake->body[0].x == food->x && snake->body[0].y == food->y) {
        snake->length++;
        food->x = rand() % WIDTH;
        food->y = rand() % HEIGHT;
        return 1;
    }
    return 0;
}

int main() {
    Snake snake;
    Point food;
    int ch;

    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    timeout(100);

    init_game(&snake, &food);

    while ((ch = getch()) != 'q') {
        switch (ch) {
            case KEY_UP:
                if (snake.direction.y == 0) {
                    snake.direction.x = 0;
                    snake.direction.y = -1;
                }
                break;
            case KEY_DOWN:
                if (snake.direction.y == 0) {
                    snake.direction.x = 0;
                    snake.direction.y = 1;
                }
                break;
            case KEY_LEFT:
                if (snake.direction.x == 0) {
                    snake.direction.x = -1;
                    snake.direction.y = 0;
                }
                break;
            case KEY_RIGHT:
                if (snake.direction.x == 0) {
                    snake.direction.x = 1;
                    snake.direction.y = 0;
                }
                break;
        }

        update_snake(&snake);
        if (check_collision(&snake, &food)) {
            // Snake ate the food
        }
        draw_game(&snake, &food);
    }

    endwin();
    return 0;
}