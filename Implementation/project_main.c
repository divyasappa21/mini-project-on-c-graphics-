#include<graphics.h>  
#include<stdio.h>  
void main()  
{  
    int gd=DETECT,gm,x,y,r=20;  
    char ch;  
    initgraph(&gd,&gm,"C:/TURBOC3/BGI");  
    setbkcolor(4);  
    x=getmaxx()/2;  
    y=getmaxy()/2;  
    setfillstyle(1,YELLOW);  
    circle(x,y,r);  
    floodfill(x,y,getmaxcolor());  
    while((ch=getch())!=13)  
      {  
        switch(ch)  
                     {  
            case 75:    if(x>=r+1)  
                                {  
                    cleardevice();  
                    circle(x-=4,y,r);  
                    floodfill(x,y,getmaxcolor());  
                          }  
                break;  
            case 72:    if(y>=r+1)  
                                {  
                    cleardevice();  
                    circle(x,y-=4,r);  
                    floodfill(x,y,getmaxcolor());  
                                  }  
                break;  
            case 77:    if(x<=(getmaxx()-r-4))  
                               {  
                    cleardevice();  
                    circle(x+=4,y,r);  
                    floodfill(x,y,getmaxcolor());  
                                }  
                break;  
            case 80:    if(y<=(getmaxy()-r-4))  
                               {  
                    cleardevice();  
                    circle(x,y+=4,r);  
                    floodfill(x,y,getmaxcolor());  
                 }  
        }  
    }  
    getch();  
}  
