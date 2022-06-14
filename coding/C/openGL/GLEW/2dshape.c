#include <GL/glu.h>
#include <GL/glut.h>

void MyInit(){

    glClearColor(0,0,0,1); 
    glColor3f(0,0,1);


}
void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);
 
 glBegin(GL_POLYGON);
 glVertex2f(-0.5,0.5);
 glVertex2f(0.5,0.5);
 glVertex2f(0.5,-0.5);
 glVertex2f(-0.5,-0.5);
 glEnd();
 
 glFlush();
}


int main(int C, char *V[])
{
    glutInit(&C,V); 				//init glut
						

    glutInitWindowPosition(200,100);		//set window position
    glutInitWindowSize(600,600);		//set window size
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);//set display mode
    glutCreateWindow("Window");			//create window with name "window"

    MyInit();					//set defaults
    
    glutDisplayFunc(Draw);			//draw shape

    glutMainLoop();				//do stuff


    return 0;
}
