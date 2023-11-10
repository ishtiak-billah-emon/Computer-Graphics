#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void green (float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(34, 153, 84);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();
}

void yellow(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(241, 196, 15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();
}

void red(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(192, 57, 43);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
    glEnd();
}

void TrafficLight_Left(){

    glBegin(GL_POLYGON);
    glColor3ub(27, 38, 49);
    glVertex2f(-18,-4);
    glVertex2f(-17,-4);
    glVertex2f(-17,15);
    glVertex2f(-18,15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(44, 62, 80);
    glVertex2f(-17,-4);
    glVertex2f(-16,-2);
    glVertex2f(-16,11);
    glVertex2f(-17,11);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(27, 38, 49);
    glVertex2f(-18,15);
    glVertex2f(-17,15);
    glVertex2f(-16,16);
    glVertex2f(-17,16);
    glEnd();

    // line
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-18,15);
    glVertex2f(-17,15);
    glEnd();

    //box
    glBegin(GL_POLYGON);
    glColor3ub(39, 55, 70);
    glVertex2f(-17,11);
    glVertex2f(-9,11);
    glVertex2f(-9,15);
    glVertex2f(-17,15);
    glEnd();

    // 3d effect
    // side
    glBegin(GL_POLYGON);
    glColor3ub(128, 139, 150);
    glVertex2f(-9,11);
    glVertex2f(-8,12);
    glVertex2f(-8,16);
    glVertex2f(-9,15);
    glEnd();

    // top
    glBegin(GL_POLYGON);
    glColor3ub(171, 178, 185);
    glVertex2f(-9,15);
    glVertex2f(-8,16);
    glVertex2f(-16,16);
    glVertex2f(-17,15);
    glEnd();



    // Lights

    // green

    green(1,-15,13);
    yellow(1,-13,13);
    red(1,-11,13);



}

void TrafficLight_Right(){


    glBegin(GL_POLYGON);
    glColor3ub(27, 38, 49);
    glVertex2f(18,-4);
    glVertex2f(17,-4);
    glVertex2f(17,15);
    glVertex2f(18,15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(44, 62, 80);
    glVertex2f(17,-4);
    glVertex2f(16,-2);
    glVertex2f(16,11);
    glVertex2f(17,11);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(27, 38, 49);
    glVertex2f(18,15);
    glVertex2f(17,15);
    glVertex2f(16,16);
    glVertex2f(17,16);
    glEnd();

    // line
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(18,15);
    glVertex2f(17,15);
    glEnd();

    //box
    glBegin(GL_POLYGON);
    glColor3ub(39, 55, 70);
    glVertex2f(17,11);
    glVertex2f(9,11);
    glVertex2f(9,15);
    glVertex2f(17,15);
    glEnd();

    // 3d effect
    // side
    glBegin(GL_POLYGON);
    glColor3ub(128, 139, 150);
    glVertex2f(9,11);
    glVertex2f(8,12);
    glVertex2f(8,16);
    glVertex2f(9,15);
    glEnd();

    // top
    glBegin(GL_POLYGON);
    glColor3ub(171, 178, 185);
    glVertex2f(9,15);
    glVertex2f(8,16);
    glVertex2f(16,16);
    glVertex2f(17,15);
    glEnd();

    green(1,11,13);
    yellow(1,13,13);
    red(1,15,13);

}


void ZebraCrossing(){
    // Left to right
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-12,-12);
    glVertex2f(-9,-12);
    glVertex2f(-6,-4);
    glVertex2f(-7,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-8,-12);
    glVertex2f(-5,-12);
    glVertex2f(-3,-4);
    glVertex2f(-4,-4);
    glEnd();

    //dhuasdflZ
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-3,-12);
    glVertex2f(0,-12);
    glVertex2f(0,-4);
    glVertex2f(-1,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(1,-12);
    glVertex2f(4,-12);
    glVertex2f(2,-4);
    glVertex2f(1,-4);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(12,-12);
    glVertex2f(9,-12);
    glVertex2f(6,-4);
    glVertex2f(7,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(8,-12);
    glVertex2f(5,-12);
    glVertex2f(3,-4);
    glVertex2f(4,-4);
    glEnd();
}

void road2(){



    glBegin(GL_POLYGON);
   // glColor3ub(112, 123, 124);
    glColor3ub(66, 73, 73);
    glVertex2f(-20,0);
    glVertex2f(20,0);
    glVertex2f(20,5);
    glVertex2f(-20,5);
    glEnd();


// Missing part of Main road
    glBegin(GL_POLYGON);
    glColor3ub(66, 73, 73);
    glVertex2f(-8,-2);
    glVertex2f(8,-2);
    glVertex2f(8,0);
    glVertex2f(-8,0);
    glEnd();

    // White Line
    glBegin(GL_LINES);
    glLineWidth(6);
    glColor3ub(255,255,255);

    glVertex2f(-20,4);
    glVertex2f(20,4);

    glEnd();

    // top white part

    glBegin(GL_POLYGON);
    glColor3ub(191, 201, 202);
    glVertex2f(-20,5);
    glVertex2f(20,5);
    glVertex2f(20,6);
    glVertex2f(-20,6);
    glEnd();

}

void MainRoad(){

// LEFT SIDE
//---------------------------------
    // light color outer part
    glBegin(GL_POLYGON);
    glColor3ub(242, 243, 244);
    glVertex2f(-20,-20);
    glVertex2f(-8,0);
    glVertex2f(-20,0);
    glEnd();

    // deep color inner
    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2f(-20,-16);
    glVertex2f(-11,-2);
    glVertex2f(-20,-2);
    glEnd();

    // road border

    glBegin(GL_POLYGON);
    glColor3ub(202, 207, 210);
    glVertex2f(-20,-20);
    glVertex2f(-18,-20);
    glVertex2f(-8,-2);
    glVertex2f(-8 ,0);
    glEnd();



//-------------------------------------

//--------------RIGHT -------------------
    // light color outer part
    glBegin(GL_POLYGON);
    glColor3ub(242, 243, 244);
    glVertex2f(20,-20);
    glVertex2f(8,0);
    glVertex2f(20,0);
    glEnd();

    // deep color inner
    glBegin(GL_POLYGON);
    glColor3ub(229, 231, 233);
    glVertex2f(20,-16);
    glVertex2f(11,-2);
    glVertex2f(20,-2);
    glEnd();

    // road border

    glBegin(GL_POLYGON);
    glColor3ub(202, 207, 210);
    glVertex2f(20,-20);
    glVertex2f(18,-20);
    glVertex2f(8,-2);
    glVertex2f(8 ,0);
    glEnd();

//-------------------------------------

    // middle black

    glBegin(GL_POLYGON);
    glColor3ub(66, 73, 73);
    glVertex2f(-18,-20);
    glVertex2f(18,-20);
    glVertex2f(8,-2);
    glVertex2f(-8 ,- 2);
    glEnd();

    ZebraCrossing();
}

void Grass(){

// Border
//    glBegin(GL_POLYGON);
//    glColor3ub(157, 172, 90);
//    glVertex2f(-20,6);
//    glVertex2f(20,6);
//    glVertex2f(20,7);
//    glVertex2f(-20,7);
//    glEnd();
//
//    glBegin(GL_POLYGON);
//    glColor3ub(181, 197, 109);
//    glVertex2f(20,7);
//    glVertex2f(-20,7);
//    glVertex2f(-20,8);
//    glVertex2f(20,8);
//    glEnd();
//
//
//    glBegin(GL_POLYGON);
//    glColor3ub(208, 233, 96);
//    glVertex2f(-20,8);
//    glVertex2f(20,8);
//    glVertex2f(20,9);
//    glVertex2f(-20,9);
//    glEnd();

//---------------------------------------

    glBegin(GL_POLYGON);
    //94, 107, 35

    glColor3f(94/255.0, 107/255.0, 35/255.0);
    glVertex2f(-20, 6);
    glColor3f(94/255.0 + (1 - (94/255.0)) * (6 - (-1)) / (9 - (-1)),
              107/255.0 + (1 - (107/255.0)) * (6 - (-1)) / (9 - (-1)),
              35/255.0 + (1 - (35/255.0)) * (6 - (-1)) / (9 - (-1)));
    glVertex2f(-20, 9);
    glColor3f(94/255.0 + (1 - (94/255.0)) * (9 - (-1)) / (9 - (-1)),
              107/255.0 + (1 - (107/255.0)) * (9 - (-1)) / (9 - (-1)),
              35/255.0 + (1 - (35/255.0)) * (9 - (-1)) / (9 - (-1)));
    glVertex2f(20, 9);
    glColor3f(94/255.0 + (1 - (94/255.0)) * (9 - (-1)) / (9 - (-1)),
              107/255.0 + (1 - (107/255.0)) * (9 - (-1)) / (9 - (-1)),
              35/255.0 + (1 - (35/255.0)) * (6 - (-1)) / (9 - (-1)));
    glVertex2f(20, 6);
    glEnd();


}

void background(){

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);
    glVertex2f(20,7);
    glVertex2f(12,7);
    glVertex2f(12,18);
    glVertex2f(20,18);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);
    glVertex2f(12,7);
    glVertex2f(6,7);
    glVertex2f(6,19);
    glVertex2f(12,19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);

    glVertex2f(6,7);
    glVertex2f(0,7);
    glVertex2f(0,19.5);
    glVertex2f(6,19.5);
    glEnd();
    //neg
    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);
    glVertex2f(-20,7);
    glVertex2f(-12,7);
    glVertex2f(-12,18);
    glVertex2f(-20,18);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);
    glVertex2f(-12,7);
    glVertex2f(-6,7);
    glVertex2f(-6,19);
    glVertex2f(-12,19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 189, 189);

    glVertex2f(-6,7);
    glVertex2f(0,7);
    glVertex2f(0,20);
    glVertex2f(-6,20);
    glEnd();



    //---------------------
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);
    glVertex2f(20,7);
    glVertex2f(14,7);
    glVertex2f(14,16);
    glVertex2f(20,16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);
    glVertex2f(14,7);
    glVertex2f(8,7);
    glVertex2f(8,15);
    glVertex2f(14,15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);
    glVertex2f(8,7);
    glVertex2f(4,7);
    glVertex2f(4,17);
    glVertex2f(8,17);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);
    glVertex2f(4,7);
    glVertex2f(0,7);
    glVertex2f(0,17.5);
    glVertex2f(4,17.5);
    glEnd();
    //------------------------------
    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);
    glVertex2f(-20,7);
    glVertex2f(-14,7);
    glVertex2f(-14,16);
    glVertex2f(-20,16);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);
    glVertex2f(-14,7);
    glVertex2f(-8,7);
    glVertex2f(-8,15);
    glVertex2f(-14,15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);
    glVertex2f(-8,7);
    glVertex2f(-4,7);
    glVertex2f(-4,17);
    glVertex2f(-8,17);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(158, 158, 158);
    glVertex2f(-4,7);
    glVertex2f(0,7);
    glVertex2f(0,18);
    glVertex2f(-4,18);
    glEnd();

    //----------------------

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(-20,7);
    glVertex2f(-16,7);
    glVertex2f(-16,12);
    glVertex2f(-20,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(-16,7);
    glVertex2f(-12,7);
    glVertex2f(-12,10);
    glVertex2f(-16,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(-12,7);
    glVertex2f(-9,7);
    glVertex2f(-9,14);
    glVertex2f(-12,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(-9,7);
    glVertex2f(-5,7);
    glVertex2f(-5,12);
    glVertex2f(-9,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(-5,7);
    glVertex2f(0,7);
    glVertex2f(0,13);
    glVertex2f(-5,13);
    glEnd();





    //
    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(20,7);
    glVertex2f(16,7);
    glVertex2f(16,12);
    glVertex2f(20,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(16,7);
    glVertex2f(12,7);
    glVertex2f(12,10);
    glVertex2f(16,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(12,7);
    glVertex2f(9,7);
    glVertex2f(9,14);
    glVertex2f(12,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(9,7);
    glVertex2f(5,7);
    glVertex2f(5,12);
    glVertex2f(9,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(117, 117, 117);
    glVertex2f(5,7);
    glVertex2f(0,7);
    glVertex2f(0,16);
    glVertex2f(5,16);
    glEnd();

}
void circle(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
        glEnd();
}

void circle2(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(52, 73, 94);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
        glEnd();
}


void car(){



    // front body
    glBegin(GL_POLYGON);
    glColor3ub(41, 128, 185);
    glVertex2f(-9,3);
    glVertex2f(-2,3);
    glVertex2f(-2,5);
    glVertex2f(-4,5);
    glVertex2f(-6,7);
    glVertex2f(-9,7);
    glEnd();

    //back body

    glBegin(GL_POLYGON);
    glColor3ub(41, 128, 185);
    glVertex2f(-15,3);
    glVertex2f(-9,3);
    glVertex2f(-9,6);
    glVertex2f(-15,6);
    glEnd();

    //glass


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-8,5);
    glVertex2f(-5,5);
    glVertex2f(-6,6);
    glVertex2f(-8,6);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-6.75,6);
    glVertex2f(-6.75,5);

    glEnd();


    // big line

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3ub(21, 67, 96);
    glVertex2f(-15,3);
    glVertex2f(-2,3);
    glEnd();



    // tire
    circle(1,-12,3);
    circle2(0.60,-12,3);

    circle(1,-4,3);
    circle2(0.60,-4,3);

    // details

    // back body strip

    glBegin(GL_POLYGON);
    glColor3ub(31, 97, 141);
    glVertex2f(-15,4);
    glVertex2f(-9,4);
    glVertex2f(-9,5);
    glVertex2f(-15,5);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(21, 67, 96);
    glVertex2f(-9,3);
    glVertex2f(-9,7);
    glEnd();

    //  back light

    glBegin(GL_POLYGON);
    glColor3ub(169, 50, 38);
    glVertex2f(-15,3);
    glVertex2f(-14,3);
    glVertex2f(-14,4);
    glVertex2f(-15,4);
    glEnd();

    // front light

    glBegin(GL_POLYGON);
    glColor3ub(169, 50, 38);
    glVertex2f(-2.5,3);
    glVertex2f(-2,3);
    glVertex2f(-2,4);
    glVertex2f(-2.5,4);
    glEnd();


    // front line

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(21, 67, 96);
    glVertex2f(-9,4.5);
    glVertex2f(-2,4.5);
    glEnd();





}

void sky(){

    glBegin(GL_POLYGON);
    glColor3ub(174, 214, 241);
    glVertex2f(-20,0);
    glVertex2f(20,0);
    glVertex2f(20,20);
    glVertex2f(-20,20);
    glEnd();

}

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

sky();
background();
MainRoad();
road2();
Grass();
car();
TrafficLight_Left();
TrafficLight_Right();


glFlush(); // Render now

}



int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT

glutInitWindowSize(720, 720);

glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title

gluOrtho2D(-20,20,-20,20);
 // Set the window's initial width & height

glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop(); // Enter the event-processing loop

return 0;

}
