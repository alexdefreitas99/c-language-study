//#include <graphics.h>

//int main() {
//
//    initwindow (800, 800);
//
//    int left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
//
//    rectangle(left, top, right, bottom);
//
//    circle(x, y, radius);
//
//    bar(left + 300, top, right + 300, bottom);
//
//    line(left - 10, top + 150, left + 410, top + 150);
//
//    ellipse(x, y + 200, 0, 360, 100, 50);
//
//    outtextxy(left + 100, top + 325, “Meu programa grafico”);
//
//    getch();
//
//}
int main()
{
    int v1=1, v2=0;
    for(v2=v1;v2<5;v2++){
        v1+=3;
    }
    printf("%d e %d",v2,v1);
    return 0;
}
