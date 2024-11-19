#include <Graphics.h>
void paintTree(int x,int y){
line(x,y,x+50,y+50);
line(x,y,x-50,y+50);
line(x-50,y+50,x+50,y+50);
y+=50;
line(x,y,x+50,y+50);
line(x,y,x-50,y+50);
line(x-50,y+50,x+50,y+50);
y+=50;
line(x-10,y,x-10,y+25);
line(x+10,y,x+10,y+25);
line(x+10,y+25,x-10,y+25);
}
void paintDom(int x,int y){
line(x,y,x+50,y+50);
line(x,y,x-50,y+50);
line(x-50,y+50,x+50,y+50);
y+=50;
line(x+50,y,x+50,y+75);
line(x-50,y,x-50,y+75);
line(x-50,y+75,x+50,y+75);
}
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\BGI");
paintTree(100,100);
getch();
closegraph();
initgraph(&gd,&gm,"C:\\BGI");
paintDom(100,100);
getch();
closegraph();
return 0;
}

