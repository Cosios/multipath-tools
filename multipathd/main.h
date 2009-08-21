#ifndef MAIN_H
#define MAIN_H

#define MAPGCINT 5

int exit_daemon(int);
int reconfigure (struct vectors *);
int ev_add_path (char *, struct vectors *);
int ev_remove_path (char *, struct vectors *);
int ev_add_map (char *, int, int, struct vectors *);
int ev_remove_map (char *, struct vectors *);
void sync_map_state (struct multipath *);

#endif /* MAIN_H */
