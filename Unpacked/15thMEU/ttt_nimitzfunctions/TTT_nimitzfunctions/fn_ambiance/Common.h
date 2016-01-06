#define CIRCLEPOS2(p,d,r) CIRCLEPOS((p select 0), (p select 1), d, r)
#define CIRCLEPOS(x,y,d,r) [x+r*sin(d),y+r*cos(d)]
#define SETALT(pos,alt) [(pos select 0), (pos select 1), alt]
