#include <stdio.h>
#include <math.h>
struct point


 {
  int x,y ;
 };
  
    float distance(struct point a,struct point b)
    {
      float distance;
      distance=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
      return distance;
    }
int main()
{
  struct point a,b;
  printf("enter a cordinates");
  scanf("%d %d",&a.x,&a.y);
  printf("enter b cordinates");
  scanf("%d %d",&b.x,&b.y);
  printf(" The Distace Between points is: %f",distance(a,b));
  
}