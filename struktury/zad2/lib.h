struct point makepoint(int x, int y);

struct rect makerect(struct point ll, struct point ur);

int ptinrect(struct point p, struct rect r);

int disjointrect(struct rect r1, struct rect r2);

void scanrect (char *prompt,struct rect *r);
