#include<stdio.h>
#include<math.h>
typedef struct 
{
    int x;
    int y;
}point;
point midpoint(point,point);
int distance(point,point);
void display(point);
void main()
{
    point p1,p2,mp;
    int dist;
    printf("Enter the x and y coordinates of the first point");
    scanf("%d",&p1.x);
    scanf("%d",&p1.y);
    printf("Enter the x and y coordinates of the second point");
    scanf("%d",&p2.x);
    scanf("%d",&p2.y);
    mp=midpoint(p1,p2);
    printf("Mid- points of (%d,%d) and (%d,%d) is: \n",p1.x,p1.y,p2.x,p2.y);
    display(mp);
    dist=distance(p1,p2); 
    printf("\nDistance= %d",dist);
}
point midpoint(point p1,point p2)
{
    point mid;
    mid.x=(p1.x+p2.x)/2;
    mid.y=(p1.y+p2.y)/2;
    return mid;
}
int distance(point p1,point p2)
{
    int xx,yy,d;
    xx=(p2.x-p1.x)*(p2.x-p1.x);
    yy=(p2.y-p1.y)*(p2.y-p1.y);
    d=sqrt(xx+yy);
    return d;  
}
void display(point m)
{
    printf("--> (%d,%d)",m.x,m.y);
}