#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <string.h>



typedef struct song Song;
typedef struct artist Artist;
typedef struct snode SNode;

struct song {
	Artist *artist;
	char *title;
	char *path;
	int index;
};

struct snode {
	Song *song;
	SNode *prev, *next;
};

struct artist {
	char *name;
	Artist *next;
	SNode *head, *tail;
};


void initialize();
void search_song(char *artist);
void search_song(char* artist, char* title);
void add_song(char *artist, char *title, char *path);
void remove(int index);
void play(int index);
void status();
void load(FILE *fp);
void save(FILE *fp);
#endif


