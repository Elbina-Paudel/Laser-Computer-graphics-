void projectwork3()

   {



     setbkcolor(BLACK);

     setcolor(WHITE);



     rectangle(200,150,460,160);

     rectangle(200,300,460,310);

     setfillstyle(1,GREEN);

     floodfill(250,155,WHITE);

     floodfill(250,305,WHITE);

     ellipse(200,230,90,89,15,70);      //MIRROR

     setfillstyle(1,BLUE);

     floodfill(205,232,WHITE);

     ellipse(460,230,90,89,15,70);      // SEMI SILVERED MIRROR

     setfillstyle(1,CYAN);

     floodfill(465,232,WHITE);



     rectangle(300,365,360,380);       //  POWER SOURCE

     setfillstyle(1,RED);

     floodfill(305,370,WHITE);



     moveto(300,365);

     lineto(310,355);

     lineto(370,355);

     lineto(360,365);

     moveto(360,380);

     lineto(370,370);

     lineto(370,355);

     floodfill(305,362,WHITE);

     floodfill(366,370,WHITE);

     setcolor(YELLOW);

     settextstyle(11,0,2);

     outtextxy(288,390,"POWER SOURCE");

     outtextxy(300,120,"ELECTRODES");

     outtextxy(130,230,"MIRROR");

     outtextxy(480,175,"SEMI SILVERED");

     outtextxy(510,190,"MIRROR");

     setcolor(WHITE);

     moveto(370,363);

     lineto(411,363);

     lineto(411,265);

     moveto(370,366);

     lineto(413,366);

     lineto(413,265);



     rectangle(395,260,428,265);

     floodfill(396,261,WHITE);

     rectangle(395,200,428,205);

     floodfill(396,201,WHITE);

     rectangle(240,260,273,265);

     floodfill(241,261,WHITE);

     rectangle(240,200,273,205);

     floodfill(241,201,WHITE);





     moveto(255,265);

     lineto(255,376);

     lineto(300,376);

     moveto(257,265);

     lineto(257,373);

     lineto(300,373);



     setcolor(RED);



     moveto(280,205);

     lineto(280,260);

     lineto(273,260);

     moveto(273,205);

     lineto(280,205);



     moveto(435,205);

     lineto(435,260);

     lineto(428,260);

     moveto(428,205);

     lineto(435,205);



     setcolor(WHITE);

     circle(100,50,8);

     setfillstyle(1,RED);

     floodfill(100,50,WHITE);

     circle(100,85,3);

     setfillstyle(1,YELLOW);

     floodfill(100,85,WHITE);

     setcolor(YELLOW);

     outtextxy(128,47,"ATOM");

     outtextxy(128,82,"PHOTON");





//  ATOM AND PHOTON MOVEMENT



     setcolor(WHITE);

     setfillstyle(1,RED);    //ATOM

     circle(365,205,8);

     floodfill(365,205,WHITE);



     circle(325,285,8);

     floodfill(325,285,WHITE);

     delay(3000);



     circle(325,260,8);

     floodfill(325,260,WHITE);



     setfillstyle(1,BLACK);

     floodfill(325,285,WHITE);

     setcolor(BLACK);

     circle(325,285,8);



     setcolor(WHITE);



     setfillstyle(1,RED);

     circle(345,190,8);

     floodfill(345,190,WHITE);

     setfillstyle(1,BLACK);

     floodfill(365,205,WHITE);

     setcolor(BLACK);

     circle(365,205,8);

     delay(500);





     setfillstyle(1,RED);

     setcolor(WHITE);

     circle(325,170,8);

     floodfill(325,170,WHITE);

     setfillstyle(1,BLACK);

     floodfill(345,190,WHITE);

     setcolor(BLACK);

     circle(345,190,8);





     setcolor(WHITE);

     setfillstyle(1,YELLOW);

     circle(250,250,3);

     floodfill(250,250,WHITE);

     delay(100);

     circle(275,225,3);

     floodfill(275,225,WHITE);

     delay(100);

     circle(295,205,3);

     floodfill(295,205,WHITE);

     delay(100);

     circle(315,185,3);

     floodfill(315,185,WHITE);

     delay(100);

     circle(320,205,3);

     floodfill(320,205,WHITE);

     delay(100);

     circle(345,205,3);

     floodfill(345,205,WHITE);

     circle(365,205,3);

     floodfill(365,205,WHITE);

     delay(100);

     circle(385,210,3);

     floodfill(385,210,WHITE);



     circle(395,220,3);

     floodfill(395,220,WHITE);

     circle(305,225,3);

     floodfill(305,225,WHITE);



     circle(325,245,3);

     floodfill(325,245,WHITE);

     delay(100);

     circle(345,265,3);

     floodfill(345,265,WHITE);

     delay(100);

     circle(345,235,3);

     floodfill(345,235,WHITE);

     delay(100);

     circle(365,285,3);

     floodfill(365,285,WHITE);

     circle(365,230,3);

     floodfill(365,230,WHITE);

     delay(100);

     circle(395,245,3);

     floodfill(395,245,WHITE);

     delay(100);

     circle(415,225,3);

     floodfill(415,225,WHITE);

     delay(100);

     circle(425,245,3);

     floodfill(425,245,WHITE);

     delay(300);



     setlinestyle(SOLID_LINE,1,3);

     setcolor(YELLOW);

     moveto(460,230);

     lineto(600,230);      //LASER

     setcolor(YELLOW);

     outtextxy(510,240,"LASER");

     moveto(540,230);

     lineto(535,225);

     moveto(540,230);

     lineto(535,235);

     delay(3000);

     cleardevice();

}
