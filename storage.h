#ifndef STORAGE_H
#define STORAGE_H

#include "logic.h"

int load_cards(const char *path, problem *list, int max);
int save_cards(const char *path, problem *list, int count);

#endif