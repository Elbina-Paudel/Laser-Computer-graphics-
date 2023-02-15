void projectwork1()                  // AMPLIFICATION

  {

    setbkcolor(BLUE);

    setcolor(WHITE);

    circle(170,230,8);



    setfillstyle(1,YELLOW);

    floodfill(170,230,WHITE);

    setcolor(GREEN);

    settextstyle(11,0,2);

    outtextxy(150,250,"PHOTON");

    delay(2000);



    settextstyle(7,0,4);

    setcolor(WHITE);

    outtextxy(110,380,"Amplification of Photons");

    delay(1000);



    setcolor(WHITE);

    circle(250,180,8);     //SECOND_UP

    circle(250,280,8);

    floodfill(250,180,WHITE);

    floodfill(250,280,WHITE);

    delay(500);



    circle(330,120,8);     //THIRD_UP

    circle(330,195,8);



    circle(330,265,8);

    circle(330,340,8);     //THIRD_DOWN



    floodfill(330,120,WHITE);

    floodfill(330,195,WHITE);

    floodfill(330,265,WHITE);

    floodfill(330,340,WHITE);

    delay(500);



    circle(410,80,8);

    circle(410,125,8);

    circle(410,165,8);

    circle(410,210,8);



    circle(410,245,8);

    circle(410,285,8);

    circle(410,325,8);

    circle(410,370,8);



    floodfill(410,80,WHITE);

    floodfill(410,125,WHITE);

    floodfill(410,165,WHITE);

    floodfill(410,210,WHITE);

    floodfill(410,245,WHITE);

    floodfill(410,285,WHITE);

    floodfill(410,325,WHITE);

    floodfill(410,370,WHITE);





    delay(3000);

    cleardevice();

    }
