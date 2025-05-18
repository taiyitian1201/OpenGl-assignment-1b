/*
* TAI YI TIAN
* A23CS0272
* SECTION 1
*/

#include <GL/glut.h>
#include <stdlib.h>

//set the color that I will use
GLfloat black[3] = { 0.0, 0.0, 0.0 };
GLfloat white[3] = { 1.0, 1.0, 1.0 };
GLfloat purple[3] = { 1.0, 0.23, 0.93 };
GLfloat lightGreen[3] = { 0.59, 0.82, 0.84 };
GLfloat darkGreen[3] = { 0.16, 0.61, 0.65 };
GLfloat skinColor[3] = { 1.0, 0.95, 0.92 };
GLfloat accessoriesGray[3] = { 0.31, 0.29, 0.36 };
GLfloat lightRed[3] = { 1.0, 0.68, 0.68 };
GLfloat darkRed[3] = { 0.79, 0.44, 0.45 };
GLfloat clothesGray[3] = { 0.51, 0.53, 0.57 };
GLfloat clothesWhite[3] = { 0.89, 0.91, 0.92 };
GLfloat shoesBlack[3] = { 0.28,0.29,0.36 };
GLfloat onionGreen[3] = { 0.18, 0.78, 0.11 };
GLfloat onionWhite[3] = { 0.85,0.82,0.79 };

//set the initial condition function
void init(void)
{
    glClearColor(0.27, 0.78, 0.87, 1.0);  //Clear the background of our window to blue
    glEnable(GL_POINT_SMOOTH);  //Enable the points becomes circle
    glMatrixMode(GL_PROJECTION);  //Use the Projection Matrix
    gluOrtho2D(0.0, 1600.0, 0.0, 800.0);  //Sets up a two-dimensional orthographic viewing region
}

//Draw character 'H'
void write_H(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[]) 
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left l
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw middle -
    glVertex2f(topLeftX + 0.04, topLeftY - 0.15);
    glVertex2f(topLeftX + 0.11, topLeftY - 0.15);
    glVertex2f(topLeftX + 0.11, topLeftY - 0.25);
    glVertex2f(topLeftX + 0.04, topLeftY - 0.25);
    //Drwa right l
    glVertex2f(topLeftX + 0.1, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY -0.4);
    glVertex2f(topLeftX + 0.1, topLeftY -0.4);
    glEnd();
}

//Draw character 'A'
void write_A(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[]) 
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left /
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.09, topLeftY);
    glVertex2f(topLeftX + 0.04, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw right '\'
    glVertex2f(topLeftX + 0.06, topLeftY);
    glVertex2f(topLeftX + 0.1, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX + 0.11, topLeftY - 0.4);
    //Draw middle -
    glVertex2f(topLeftX + 0.06, topLeftY - 0.22);
    glVertex2f(topLeftX + 0.12, topLeftY - 0.22);
    glVertex2f(topLeftX + 0.12, topLeftY - 0.3);
    glVertex2f(topLeftX + 0.04, topLeftY - 0.3);
    glEnd();
}

//Draw character 'P'
void write_P(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[])
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left l
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw top -
    glVertex2f(topLeftX + 0.04, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.07);
    glVertex2f(topLeftX + 0.04, topLeftY - 0.07);
    //Draw right l
    glVertex2f(topLeftX + 0.11, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.23);
    glVertex2f(topLeftX + 0.11, topLeftY - 0.23);
    //Draw bottom -
    glVertex2f(topLeftX + 0.04, topLeftY - 0.18);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.18);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.25);
    glVertex2f(topLeftX + 0.04, topLeftY - 0.25);
    glEnd();
}

//Draw character 'Y'
void write_Y(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[])
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left '\'
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.09, topLeftY - 0.2);
    glVertex2f(topLeftX + 0.04, topLeftY - 0.22);
    //Draw right /
    glVertex2f(topLeftX + 0.1, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    glEnd();
}

//Draw character 'L'
void write_L(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[])
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left l
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.04, topLeftY);
    glVertex2f(topLeftX + 0.04, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw bottom -
    glVertex2f(topLeftX, topLeftY - 0.35);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.35);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    glEnd();
}

//Draw character 'B'
void write_B(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[])
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left l
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw top -
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.11, topLeftY);
    glVertex2f(topLeftX + 0.11, topLeftY - 0.05);
    glVertex2f(topLeftX, topLeftY - 0.05);
    //Draw top right l
    glVertex2f(topLeftX + 0.1, topLeftY);
    glVertex2f(topLeftX + 0.13, topLeftY);
    glVertex2f(topLeftX + 0.13, topLeftY - 0.2);
    glVertex2f(topLeftX + 0.1, topLeftY - 0.2);
    //Draw middle -
    glVertex2f(topLeftX, topLeftY - 0.18);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.18);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.22);
    glVertex2f(topLeftX, topLeftY - 0.22);
    //Draw bottom right l
    glVertex2f(topLeftX + 0.11, topLeftY - 0.22);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.22);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX + 0.11, topLeftY - 0.4);
    //Draw bottom -
    glVertex2f(topLeftX, topLeftY - 0.35);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.35);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    glEnd();
}

//Draw character 'O'
void write_O(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[])
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left l
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw top -
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.06);
    glVertex2f(topLeftX, topLeftY - 0.06);
    //Draw right l
    glVertex2f(topLeftX + 0.1, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX + 0.1, topLeftY - 0.4);
    //Draw bottom -
    glVertex2f(topLeftX, topLeftY - 0.34);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.34);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    glEnd();
}

//Draw character 'U'
void write_U(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[])
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left l
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw bottom -
    glVertex2f(topLeftX, topLeftY - 0.34);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.34);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw right l
    glVertex2f(topLeftX + 0.1, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX + 0.1, topLeftY - 0.4);
    glEnd();
}

//Draw character 'R'
void write_R(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[])
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left l
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw top -
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.04);
    glVertex2f(topLeftX, topLeftY - 0.04);
    //Draw right l
    glVertex2f(topLeftX + 0.12, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.20);
    glVertex2f(topLeftX + 0.12, topLeftY - 0.20);
    //Draw bottom -
    glVertex2f(topLeftX + 0.04, topLeftY - 0.16);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.16);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.20);
    glVertex2f(topLeftX + 0.04, topLeftY - 0.20);
    //Draw right '\'
    glVertex2f(topLeftX + 0.05, topLeftY - 0.20);
    glVertex2f(topLeftX + 0.09, topLeftY - 0.20);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.4);
    glVertex2f(topLeftX + 0.11, topLeftY - 0.4);
    glEnd();
}

//Draw character 'D'
void write_D(GLfloat topLeftX, GLfloat topLeftY, GLfloat color[])
{
    glBegin(GL_QUADS);
    glColor3f(color[0], color[1], color[2]);
    //Draw left l
    glVertex2f(topLeftX, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glVertex2f(topLeftX, topLeftY - 0.4);
    //Draw top -
    glVertex2f(topLeftX + 0.05, topLeftY);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.05);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.1);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.05);
    //Draw right l
    glVertex2f(topLeftX + 0.11, topLeftY - 0.05);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.05);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.35);
    glVertex2f(topLeftX + 0.11, topLeftY - 0.35);
    //Draw bottom -
    glVertex2f(topLeftX + 0.05, topLeftY - 0.35);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.3);
    glVertex2f(topLeftX + 0.15, topLeftY - 0.35);
    glVertex2f(topLeftX + 0.05, topLeftY - 0.4);
    glEnd();
}

void HappyLabourDay(void)
{
    write_H(-0.9, 0.8, black);
    write_A(-0.7, 0.8, black);
    write_P(-0.5, 0.8, black);
    write_P(-0.3, 0.8, black);
    write_Y(-0.1, 0.8, black);

    write_L(-0.9, 0.3, black);
    write_A(-0.7, 0.3, black);
    write_B(-0.5, 0.3, black);
    write_O(-0.3, 0.3, black);
    write_U(-0.1, 0.3, black);
    write_R(0.1, 0.3, black);

    write_D(-0.9, -0.2, black);
    write_A(-0.7, -0.2, black);
    write_Y(-0.5, -0.2, black);
}

//Draw Quadratic Bézier Curve
void drawCurveOutline(GLfloat pointStartX, GLfloat pointStartY, GLfloat pointEndX, GLfloat pointEndY, GLfloat controlPointX, GLfloat controlPointY, GLfloat color[], GLfloat lineWidth = 1.5)
{
    //more segments will produce a smoother curve
    const int segments = 50;
    //set the line color
    glColor3f(color[0], color[1], color[2]);
    //set line width
    glLineWidth(lineWidth);

    glBegin(GL_LINE_STRIP);
    for (int i = 0; i <= segments; ++i) 
    {
        GLfloat t = (GLfloat)i / segments;
        //Quadratic Bézier Curve formula
        GLfloat x = (1 - t) * (1 - t) * pointStartX + 2 * (1 - t) * t * controlPointX + t * t * pointEndX;
        GLfloat y = (1 - t) * (1 - t) * pointStartY + 2 * (1 - t) * t * controlPointY + t * t * pointEndY;

        glVertex2f(x, y);
    }
    glEnd();
}

//Draw straight line
void drawStraightline(GLfloat pointStartX, GLfloat pointStartY, GLfloat pointEndX, GLfloat pointEndY, GLfloat color[], GLfloat lineWidth)
{
    glColor3f(color[0], color[1], color[2]);
    glLineWidth(lineWidth);

    glBegin(GL_LINES);
    glVertex2f(pointStartX, pointStartY);
    glVertex2f(pointEndX, pointEndY);
    glEnd();
}

//Draw Hatsune Miku
void Miku(void) 
{
    //left ponytail
    drawCurveOutline(0.386, 0.23, 0.398, 0.23, 0.39, 0.23, black);
    drawCurveOutline(0.38, 0.19, 0.386, 0.23, 0.38, 0.2, black);
    drawCurveOutline(0.38, 0.13, 0.36, 0.03, 0.378, 0.07, black);
    drawCurveOutline(0.34, -0.03, 0.21, -0.51, 0.15, -0.38, black);
    drawCurveOutline(0.21, -0.51, 0.25, -0.31, 0.21, -0.4 ,black);
    drawCurveOutline(0.25, -0.31, 0.32, -0.63, 0.2, -0.5, black);
    drawCurveOutline(0.32, -0.63, 0.32, -0.39, 0.3, -0.58, black);
    drawCurveOutline(0.32, -0.39, 0.34, -0.51, 0.31, -0.45, black);
    drawCurveOutline(0.34, -0.51, 0.4, -0.15, 0.32, -0.38, black);
    drawCurveOutline(0.392, 0.14, 0.367, -0.02, 0.38, 0.02, darkGreen, 1);
    drawCurveOutline(0.35, -0.052, 0.285, -0.584, 0.23, -0.3, darkGreen, 1);
    //left hair accessories
    drawCurveOutline(0.398, 0.23, 0.403, 0.29, 0.398, 0.23, black);
    drawCurveOutline(0.394, 0.164, 0.40, 0.12, 0.394, 0.17, black);
    drawCurveOutline(0.413, 0.24, 0.418, 0.28, 0.413, 0.24, purple);
    //middle hair
    drawCurveOutline(0.466, -0.12, 0.452, 0.22, 0.4, 0, black);
    drawCurveOutline(0.51, 0.24, 0.466, -0.12, 0.45, -0.09, black);
    drawCurveOutline(0.603, -0.043, 0.51, 0.24, 0.525, -0.02, black);
    drawCurveOutline(0.582, 0.26, 0.603, -0.043, 0.595, -0.068, black);
    drawCurveOutline(0.684, -0.084, 0.584, 0.26, 0.68, -0.01, black);
    drawCurveOutline(0.703, 0.15, 0.684, -0.084, 0.71, 0, black);
    drawCurveOutline(0.725, 0.05, 0.658, 0.275, 0.7, 0.2, black);
    drawCurveOutline(0.725, 0.21, 0.725, 0.05, 0.725, 0.17, black);
    drawCurveOutline(0.47, 0.32, 0.725, 0.21, 0.65, 0.46, black);
    drawCurveOutline(0.382, 0.346, 0.47, 0.32, 0.4, 0.33, black);
    drawCurveOutline(0.44, 0.26, 0.382, 0.346, 0.4, 0.28, black);
    drawCurveOutline(0.35, 0.1, 0.44, 0.26, 0.38, 0.22, black);
    drawCurveOutline(0.35, 0.1, 0.42, 0.19, 0.38, 0.15, black);
    drawCurveOutline(0.42, 0.19, 0.4, -0.04, 0.38, 0.1, black);
    drawCurveOutline(0.4, -0.04, 0.42, 0.05, 0.42, -0.01, black);
    drawCurveOutline(0.42, 0.05, 0.436, -0.06, 0.42, -0.04, black);
    drawCurveOutline(0.436, -0.06, 0.439, -0.03, 0.437, -0.05, black);
    drawCurveOutline(0.677, -0.04, 0.66, -0.13, 0.674, -0.1, black);
    drawCurveOutline(0.66, -0.13, 0.665, 0.01, 0.66, -0.13, black);
    drawCurveOutline(0.398, 0.01, 0.44, 0.17, 0.41, 0.1, darkGreen, 1);
    drawCurveOutline(0.435, 0.1, 0.45, 0, 0.441, 0.05, darkGreen, 1);
    drawCurveOutline(0.45, 0, 0.5, 0.2, 0.465, 0.1, darkGreen, 1);
    drawCurveOutline(0.676, -0.02, 0.685, 0.21, 0.682, 0.1, darkGreen, 1);
    drawCurveOutline(0.705, 0.24, 0.705, 0.16, 0.7, 0.2, darkGreen, 1);
    //right ponytail
    drawCurveOutline(0.739, 0.277, 0.754, 0.28, 0.745, 0.28, black);
    drawCurveOutline(0.754, 0.28, 0.8, 0.07, 0.79, 0.1, black);
    drawCurveOutline(0.822, 0.01, 0.878, -0.625, 0.97, -0.4, black);
    drawCurveOutline(0.878, -0.625, 0.887, -0.38, 0.898, -0.57, black);
    drawCurveOutline(0.887, -0.38, 0.79, -0.66, 0.91, -0.43, black);
    drawCurveOutline(0.79, -0.66, 0.803, -0.394, 0.788, -0.5, black);
    drawCurveOutline(0.803, -0.394, 0.75, -0.62, 0.74, -0.64, black);
    drawCurveOutline(0.75, -0.62, 0.77, -0.11, 0.82, -0.27, black);
    drawCurveOutline(0.82, -0.015, 0.869, -0.48, 0.89, -0.35, darkGreen, 1);
    //right hair accessories
    drawStraightline(0.725, 0.21, 0.686, 0.353, black, 1.5);
    drawStraightline(0.686, 0.353, 0.686, 0.302, black, 1.5);
    drawStraightline(0.686, 0.353, 0.715, 0.368, black, 1.5);
    drawCurveOutline(0.715, 0.368, 0.754, 0.2, 0.738, 0.3, black);
    drawCurveOutline(0.754, 0.2, 0.745, 0.05, 0.76, 0.19, black);
    drawStraightline(0.725, 0.05, 0.745, 0.05, black, 1.5);
    drawStraightline(0.704, 0.358, 0.745, 0.19, purple, 1.5);
    drawStraightline(0.745, 0.19, 0.735, 0.05, purple, 1.5);
    //head
    drawCurveOutline(0.665, -0.09, 0.474, -0.11, 0.57, -0.19, black);
    drawStraightline(0.474, -0.11, 0.47, -0.04, black, 1.5);
    //mouth
    drawCurveOutline(0.638, -0.11, 0.617, -0.03, 0.63, -0.06, black);
    drawCurveOutline(0.617, -0.03, 0.546, -0.05, 0.6, -0.05, black);
    drawCurveOutline(0.546, -0.05, 0.548, -0.14, 0.538, -0.09, black);
    drawCurveOutline(0.546, -0.09, 0.633, -0.07, 0.57, -0.05, black);
    //left eye
    drawStraightline(0.53, 0.012, 0.48, 0.052, black, 3);
    drawStraightline(0.53, 0.012, 0.487, -0.037, black, 3);
    drawStraightline(0.52, 0.133, 0.46, 0.185, black, 1);
    //right eye
    drawStraightline(0.602, 0.02, 0.657, 0.094, black, 3);
    drawStraightline(0.602, 0.02, 0.657, -0.013, black, 3);
    drawStraightline(0.6, 0.14, 0.66, 0.23, black, 1);
    //body
    drawStraightline(0.565, -0.158, 0.557, -0.18, black, 1);
    drawCurveOutline(0.557, -0.18, 0.514, -0.267, 0.558, -0.237, black);
    drawStraightline(0.514, -0.267, 0.525, -0.355, black, 1);
    drawStraightline(0.525, -0.355, 0.557, -0.336, black, 1);
    drawStraightline(0.557, -0.336, 0.592, -0.395, black, 1);
    drawStraightline(0.592, -0.395, 0.646, -0.32, black, 1);
    drawCurveOutline(0.646, -0.32, 0.625, -0.18, 0.63, -0.28, black);
    drawStraightline(0.625, -0.18, 0.62, -0.156, black, 1);
    drawStraightline(0.565, -0.158, 0.569, -0.19, black, 1);
    drawStraightline(0.569, -0.19, 0.586, -0.17, black, 1);
    drawStraightline(0.586, -0.17, 0.58, -0.148, black, 1);
    drawStraightline(0.594, -0.17, 0.602, -0.144, black, 1);
    drawStraightline(0.594, -0.17, 0.606, -0.188, black, 1);
    drawStraightline(0.606, -0.188, 0.62, -0.138, black, 1);
    drawStraightline(0.586, -0.17, 0.594, -0.17, black, 1);
    drawStraightline(0.58, -0.176, 0.58, -0.207, black, 1);
    drawStraightline(0.58, -0.207, 0.598, -0.198, black, 1);
    drawStraightline(0.598, -0.198, 0.6, -0.176, black, 1);
    drawStraightline(0.58, -0.207, 0.557, -0.27, black, 1);
    drawStraightline(0.557, -0.27, 0.568, -0.312, black, 1);
    drawStraightline(0.568, -0.312, 0.598, -0.27, black, 1);
    drawStraightline(0.598, -0.27, 0.596, -0.198, black, 1);
    //skirt
    drawStraightline(0.646, -0.32, 0.67, -0.32, black, 1);
    drawCurveOutline(0.67, -0.32, 0.668, -0.39, 0.69, -0.37, black);
    drawCurveOutline(0.635, -0.34, 0.668, -0.36, 0.64, -0.36, black);
    drawStraightline(0.668, -0.36, 0.668, -0.39, black, 1);
    drawStraightline(0.668, -0.32, 0.665, -0.36, lightGreen, 2);
    drawCurveOutline(0.668, -0.37, 0.633, -0.415, 0.66, -0.41, black);
    drawStraightline(0.658, -0.36, 0.64, -0.395, lightGreen, 2);
    drawStraightline(0.624, -0.348, 0.64, -0.41, black, 1);
    drawCurveOutline(0.64, -0.417, 0.608, -0.415, 0.635, -0.39, black);
    drawStraightline(0.608, -0.415, 0.61, -0.38, black, 1);
    drawStraightline(0.609, -0.398, 0.63, -0.387, lightGreen, 2);
    drawCurveOutline(0.615, -0.417, 0.558, -0.42, 0.57, -0.455, black);
    drawCurveOutline(0.609, -0.415, 0.567, -0.42, 0.58, -0.443, lightGreen, 2);
    drawStraightline(0.567, -0.423, 0.572, -0.364, black, 1);
    drawStraightline(0.568, -0.412, 0.532, -0.416, black, 1.5);
    drawStraightline(0.532, -0.412, 0.515, -0.376, black, 1);
    drawStraightline(0.515, -0.376, 0.525, -0.376, black, 1);
    drawStraightline(0.525, -0.376, 0.535, -0.35, black, 1);
    drawStraightline(0.525, -0.376, 0.536, -0.398, lightGreen, 2);
    drawStraightline(0.536, -0.398, 0.568, -0.394, lightGreen, 2);
    drawStraightline(0.514, -0.273, 0.497, -0.264, black, 1.5);
    drawStraightline(0.497, -0.262, 0.476, -0.284, black, 1.5);
    drawStraightline(0.497, -0.264, 0.5, -0.315, black, 1);
    drawStraightline(0.505, -0.264, 0.507, -0.31, lightGreen, 2);
    drawStraightline(0.5, -0.315, 0.507, -0.31, black, 1);
    drawStraightline(0.507, -0.31, 0.507, -0.326, black, 1);
    drawStraightline(0.507, -0.326, 0.5, -0.35, black, 1);
    drawStraightline(0.5, -0.35, 0.51, -0.392, black, 1);
    drawStraightline(0.51, -0.392, 0.517, -0.386, black, 1);
    drawStraightline(0.517, -0.37, 0.511, -0.35, lightGreen, 2);
    drawStraightline(0.511, -0.35, 0.513, -0.33, lightGreen, 2);
    drawStraightline(0.513, -0.33, 0.508, -0.31, lightGreen, 2);
    drawStraightline(0.476, -0.284, 0.48, -0.32, black, 1);
    drawStraightline(0.48, -0.32, 0.486, -0.33, black, 1);
    drawStraightline(0.486, -0.33, 0.482, -0.35, black, 1);
    drawStraightline(0.482, -0.35, 0.5, -0.365, black, 1);
    //left leg
    drawCurveOutline(0.5, -0.365, 0.41, -0.42, 0.43, -0.42, black);
    drawCurveOutline(0.41, -0.42, 0.424, -0.485, 0.4, -0.45, black);
    drawCurveOutline(0.41, -0.42, 0.39, -0.46, 0.38, -0.42,black);
    drawCurveOutline(0.39, -0.46, 0.424, -0.485, 0.41, -0.52, black);
    drawCurveOutline(0.424, -0.485, 0.525, -0.4, 0.48, -0.45, black);
    drawStraightline(0.488, -0.37, 0.506, -0.42, black, 1);
    //right leg
    drawCurveOutline(0.576, -0.44, 0.558, -0.63, 0.57, -0.55, black);
    drawCurveOutline(0.56, -0.6, 0.604, -0.62, 0.57, -0.63, black);
    drawCurveOutline(0.558, -0.63, 0.604, -0.62, 0.577, -0.7, black);
    drawCurveOutline(0.604, -0.62, 0.614, -0.422, 0.61, -0.63, black);
    drawCurveOutline(0.573, -0.47, 0.61, -0.47, 0.596, -0.49, black);
    //left hand
    drawStraightline(0.557, -0.18, 0.53, -0.167, black, 1.5);
    drawStraightline(0.534, -0.15, 0.528, -0.179, black, 1);
    drawStraightline(0.528, -0.179, 0.516, -0.173, black, 1);
    drawStraightline(0.516, -0.173, 0.522, -0.147, black, 1);
    drawStraightline(0.516, -0.173, 0.37, -0.14, black, 1.5);
    drawCurveOutline(0.37, -0.14, 0.39, 0.02, 0.37, -0.07, black);
    drawCurveOutline(0.385, -0.14, 0.396, -0.03, 0.39, -0.085, black);
    drawCurveOutline(0.366, -0.09, 0.31, 0.15, 0.3, 0.03, black, 1);
    drawStraightline(0.31, 0.15, 0.275, 0.22, black, 1);
    drawStraightline(0.275, 0.22, 0.293, 0.253, black, 1);
    drawStraightline(0.293, 0.253, 0.31, 0.21, black, 1);
    drawCurveOutline(0.377, -0.04, 0.34, 0.25, 0.31, 0.06, black, 1);
    drawStraightline(0.31, 0.21, 0.315, 0.26, black, 1);
    drawStraightline(0.315, 0.26, 0.34, 0.25, black, 1);
    drawCurveOutline(0.377, -0.04, 0.358, -0.07, 0.36, -0.05, black, 1);
    //right hand
    drawStraightline(0.625, -0.18, 0.656, -0.155, black, 1.5);
    drawStraightline(0.648, -0.1, 0.656, -0.17, black, 1);
    drawStraightline(0.67, -0.16, 0.667, -0.126, black, 1);
    drawStraightline(0.656, -0.17, 0.818, -0.1, black, 1.5);
    drawStraightline(0.797, -0.1, 0.784, 0.07, black, 1);
    drawStraightline(0.818, -0.1, 0.8, 0.08, black, 1);
    drawStraightline(0.8, 0.08, 0.7, 0, black, 1.5);
    drawStraightline(0.812, -0.02, 0.85, 0.16, black, 1);
    drawStraightline(0.81, 0.07, 0.855, 0.31, black, 1);
    drawStraightline(0.855, 0.31, 0.87, 0.296, black, 1);
    drawStraightline(0.85, 0.16, 0.91, 0.18, black, 1);
    drawStraightline(0.91, 0.18, 0.905, 0.21, black, 1);
    drawStraightline(0.905, 0.21, 0.853, 0.19, black, 1);
    drawStraightline(0.87, 0.296, 0.853, 0.19, black, 1);
    drawCurveOutline(0.8, 0.05, 0.812, -0.02, 0.83, 0.1, black, 1);
}

//Fill the color for Hatsune Miku
void MikuColor(void)
{   
    //left ponytail
    glColor3f(darkGreen[0], darkGreen[1], darkGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.315, -0.63);
    glVertex2f(0.28, -0.58);
    glVertex2f(0.31, -0.57);
    glVertex2f(0.27, -0.5);
    glVertex2f(0.32, -0.38);
    glVertex2f(0.24, -0.24);
    glVertex2f(0.37, -0.14);
    glVertex2f(0.3, -0.14);
    glVertex2f(0.34, -0.03);
    glVertex2f(0.37, -0.1);
    glVertex2f(0.37, -0.15);
    glVertex2f(0.4, -0.15);
    glVertex2f(0.38, -0.2);
    glVertex2f(0.35, -0.15);
    glVertex2f(0.36, -0.28);
    glVertex2f(0.32, -0.36);
    glVertex2f(0.34, -0.4);
    glVertex2f(0.32, -0.46);
    glVertex2f(0.335, -0.51);
    glEnd();
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.378, -0.05);
    glVertex2f(0.365, -0.02);
    glVertex2f(0.39, 0);
    glVertex2f(0.39, 0.19);
    glVertex2f(0.4, 0.13);
    glEnd();
    glColor3f(lightGreen[0], lightGreen[1], lightGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.21, -0.51);
    glVertex2f(0.21, -0.47);
    glVertex2f(0.20, -0.47);
    glVertex2f(0.225, -0.37);
    glVertex2f(0.195, -0.41);
    glVertex2f(0.2, -0.37);
    glVertex2f(0.237, -0.25);
    glVertex2f(0.225, -0.37);
    glVertex2f(0.28, -0.25);
    glVertex2f(0.24, -0.25);
    glVertex2f(0.27, -0.17);
    glVertex2f(0.28, -0.25);
    glVertex2f(0.31, -0.15);
    glVertex2f(0.274, -0.16);
    glVertex2f(0.33, -0.1);
    glVertex2f(0.306, -0.1);
    glVertex2f(0.338, -0.03);
    glVertex2f(0.35, -0.06);
    glVertex2f(0.33, -0.1);
    glEnd();
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.25, -0.31);
    glVertex2f(0.285, -0.23);
    glVertex2f(0.273, -0.31);
    glVertex2f(0.24, -0.37);
    glVertex2f(0.25, -0.31);
    glVertex2f(0.268, -0.42);
    glVertex2f(0.273, -0.31);
    glVertex2f(0.25, -0.5);
    glVertex2f(0.24, -0.37);
    glVertex2f(0.235, -0.43);
    glVertex2f(0.28, -0.54);
    glVertex2f(0.25, -0.52);
    glVertex2f(0.282, -0.58);
    glVertex2f(0.25, -0.3);
    glEnd();
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.355, 0.008);
    glVertex2f(0.37, -0.026);
    glVertex2f(0.36, 0.035);
    glVertex2f(0.385, 0.08);
    glVertex2f(0.378, 0.08);
    glVertex2f(0.392, 0.154);
    glVertex2f(0.38, 0.18);
    glVertex2f(0.393, 0.18);
    glVertex2f(0.388, 0.23);
    glVertex2f(0.397, 0.23);
    glEnd();
    //left hand clothes
    glColor3f(clothesGray[0], clothesGray[1], clothesGray[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.4, 0.05);
    glVertex2f(0.538, -0.08);
    glVertex2f(0.38, -0.15);
    glVertex2f(0.516, -0.17);
    glEnd();
    glColor3f(lightGreen[0], lightGreen[1], lightGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.40, 0.0);
    glVertex2f(0.385, -0.15);
    glVertex2f(0.387, 0.02);
    glVertex2f(0.368, -0.13);
    glEnd();
    glColor3f(lightGreen[0], lightGreen[1], lightGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.524, -0.133);
    glVertex2f(0.535, -0.15);
    glVertex2f(0.516, -0.17);
    glVertex2f(0.53, -0.18);
    glEnd();
    //head
    glColor3f(skinColor[0], skinColor[1], skinColor[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.45, 0.3);
    glVertex2f(0.68, 0.3);
    glVertex2f(0.67, -0.09);
    glVertex2f(0.476, -0.11);
    glVertex2f(0.45, 0.3);
    glVertex2f(0.52, -0.14);
    glVertex2f(0.57, -0.15);
    glVertex2f(0.65, -0.11);
    glVertex2f(0.68, -0.02);
    glEnd();
    //body skin
    glColor3f(skinColor[0], skinColor[1], skinColor[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.578, -0.14);
    glVertex2f(0.605, -0.14);
    glVertex2f(0.59, -0.18);
    glEnd();
    //mouth
    glColor3f(darkRed[0], darkRed[1], darkRed[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.545, -0.05);
    glVertex2f(0.623, -0.035);
    glVertex2f(0.54, -0.1);
    glVertex2f(0.63, -0.1);
    glEnd();
    glColor3f(lightRed[0], lightRed[1], lightRed[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.54, -0.1);
    glVertex2f(0.63, -0.07);
    glVertex2f(0.55, -0.15);
    glVertex2f(0.6, -0.142);
    glVertex2f(0.64, -0.115);
    glVertex2f(0.545, -0.09);
    glVertex2f(0.58, -0.066);
    glVertex2f(0.63, -0.07);
    glVertex2f(0.56, -0.1);
    glVertex2f(0.64, -0.115);
    glEnd();
    //right ponytail
    glColor3f(darkGreen[0], darkGreen[1], darkGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.793, -0.65);
    glVertex2f(0.82, -0.6);
    glVertex2f(0.79, -0.6);
    glVertex2f(0.79, -0.5);
    glVertex2f(0.82, -0.6);
    glVertex2f(0.885, -0.45);
    glVertex2f(0.79, -0.2);
    glVertex2f(0.843, -0.06);
    glVertex2f(0.745, 0.04);
    glVertex2f(0.78, 0.14);
    glVertex2f(0.755, 0.15);
    glVertex2f(0.765, 0.24);
    glVertex2f(0.74, 0.28);
    glVertex2f(0.75, 0.28);
    glEnd();
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.775, -0.5);
    glVertex2f(0.82, -0.35);
    glVertex2f(0.788, -0.35);
    glVertex2f(0.787, -0.22);
    glVertex2f(0.85, -0.3);
    glVertex2f(0.81, -0.35);
    glVertex2f(0.79, -0.5);
    glVertex2f(0.82, -0.52);
    glEnd();
    glColor3f(lightGreen[0], lightGreen[1], lightGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.888, -0.6);
    glVertex2f(0.89, -0.5);
    glVertex2f(0.91, -0.5);
    glVertex2f(0.89, -0.4);
    glVertex2f(0.915, -0.38);
    glVertex2f(0.89, -0.35);
    glVertex2f(0.871, -0.47);
    glVertex2f(0.875, -0.37);
    glVertex2f(0.89, -0.35);
    glVertex2f(0.868, -0.3);
    glVertex2f(0.91, -0.38);
    glVertex2f(0.863, -0.25);
    glVertex2f(0.898, -0.25);
    glVertex2f(0.852, -0.18);
    glVertex2f(0.868, -0.14);
    glVertex2f(0.828, -0.05);
    glVertex2f(0.832, -0.02);
    glVertex2f(0.818, -0.006);
    glVertex2f(0.822, 0.005);
    glEnd();
    //right hand clothes
    glColor3f(clothesGray[0], clothesGray[1], clothesGray[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.66, -0.02);
    glVertex2f(0.785, 0.07);
    glVertex2f(0.67, -0.17);
    glVertex2f(0.8, -0.11);
    glEnd();
    glColor3f(lightGreen[0], lightGreen[1], lightGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.65, -0.1);
    glVertex2f(0.665,-0.1);
    glVertex2f(0.655, -0.17);
    glVertex2f(0.67, -0.16);
    glEnd();
    glColor3f(lightGreen[0], lightGreen[1], lightGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.785, 0.07);
    glVertex2f(0.798, 0.08);
    glVertex2f(0.8, -0.11);
    glVertex2f(0.816, -0.1);
    glEnd();
    //middle hair
    glColor3f(lightGreen[0], lightGreen[1], lightGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.71, 0.26);
    glVertex2f(0.71, 0.15);
    glVertex2f(0.67, 0.33);
    glVertex2f(0.635, 0.1);
    glVertex2f(0.68, -0.05);
    glVertex2f(0.7, 0.25);
    glVertex2f(0.66, 0.34);
    glVertex2f(0.635, 0.1);
    glVertex2f(0.583, 0.27);
    glVertex2f(0.6, 0.372);
    glVertex2f(0.66, 0.34);
    glVertex2f(0.57, 0.365);
    glVertex2f(0.52, 0.18);
    glVertex2f(0.584, 0.21);
    glVertex2f(0.6, -0.05);
    glVertex2f(0.557, -0.007);
    glVertex2f(0.528, 0.08);
    glVertex2f(0.58, 0.1);
    glVertex2f(0.51, 0.2);
    glVertex2f(0.57, 0.37);
    glVertex2f(0.51, 0.35);
    glVertex2f(0.485, 0.15);
    glVertex2f(0.47, 0.32);
    glVertex2f(0.44, 0.26);
    glVertex2f(0.381, 0.339);
    glVertex2f(0.41, 0.286);
    glVertex2f(0.52, 0.3);
    glVertex2f(0.45, 0.0);
    glVertex2f(0.42, 0.18);
    glVertex2f(0.395, 0.0);
    glVertex2f(0.394, 0.1);
    glVertex2f(0.44, 0.27);
    glVertex2f(0.43, 0.2);
    glVertex2f(0.39, 0.22);
    glVertex2f(0.38, 0.14);
    glVertex2f(0.35, 0.1);
    glEnd();
    glColor3f(darkGreen[0], darkGreen[1], darkGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.4, -0.04);
    glVertex2f(0.4, 0.02);
    glVertex2f(0.43, 0.05);
    glVertex2f(0.415, 0.1);
    glVertex2f(0.436, 0.16);
    glVertex2f(0.42, 0.05);
    glVertex2f(0.428, 0);
    glVertex2f(0.43, -0.06);
    glVertex2f(0.435, 0.1);
    glVertex2f(0.445, 0.02);
    glVertex2f(0.42, 0.03);
    glVertex2f(0.465, -0.05);
    glVertex2f(0.46, -0.12);
    glVertex2f(0.435, -0.03);
    glVertex2f(0.5, 0.21);
    glEnd();
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.665, -0.12);
    glVertex2f(0.665, 0.01);
    glVertex2f(0.68, -0.05);
    glVertex2f(0.69, -0.074);
    glVertex2f(0.7, 0);
    glVertex2f(0.673, -0.01);
    glVertex2f(0.71, 0.15);
    glVertex2f(0.686, 0.2);
    glVertex2f(0.725, 0.08);
    glVertex2f(0.7, 0.15);
    glVertex2f(0.725, 0.2);
    glVertex2f(0.705, 0.28);
    glEnd();
    //left hair accessories
    glColor3f(accessoriesGray[0], accessoriesGray[1], accessoriesGray[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.404, 0.29);
    glVertex2f(0.44, 0.26);
    glVertex2f(0.392, 0.21);
    glEnd();
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.39, 0.16);
    glVertex2f(0.42, 0.185);
    glVertex2f(0.4, 0.12);
    glEnd();
    //right hair accessories
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.682, 0.303);
    glVertex2f(0.71, 0.26);
    glVertex2f(0.69, 0.34);
    glVertex2f(0.687, 0.36);
    glVertex2f(0.718, 0.363);
    glVertex2f(0.719, 0.22);
    glVertex2f(0.757, 0.2);
    glVertex2f(0.725, 0.05);
    glVertex2f(0.745, 0.05);
    glEnd();
    //left green onion
    glColor3f(onionGreen[0], onionGreen[1], onionGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.275, 0.219);
    glVertex2f(0.295, 0.255);
    glVertex2f(0.305, 0.155);
    glVertex2f(0.33, 0.17);
    glVertex2f(0.316, 0.26);
    glVertex2f(0.342, 0.25);
    glVertex2f(0.31, 0.15);
    glVertex2f(0.33, 0.17);
    glColor3f(onionWhite[0], onionWhite[1], onionWhite[2]);
    glVertex2f(0.311, 0.058);
    glVertex2f(0.333, 0.09);
    glVertex2f(0.33, -0.02);
    glVertex2f(0.352, 0.005);
    glVertex2f(0.37, -0.1);
    glVertex2f(0.38, -0.057);
    glEnd();
    //right green onion
    glColor3f(onionGreen[0], onionGreen[1], onionGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.855, 0.308);
    glVertex2f(0.87, 0.295);
    glVertex2f(0.831, 0.18);
    glVertex2f(0.848, 0.158);
    glVertex2f(0.905, 0.213);
    glVertex2f(0.91, 0.18);
    glVertex2f(0.831, 0.18);
    glVertex2f(0.848, 0.158);
    glColor3f(onionWhite[0], onionWhite[1], onionWhite[2]);
    glVertex2f(0.82, 0.13);
    glVertex2f(0.84, 0.1);
    glVertex2f(0.805, 0.04);
    glVertex2f(0.815, 0.0);
    glEnd();
    //skin left hand
    glColor3f(skinColor[0], skinColor[1], skinColor[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.536, -0.145);
    glVertex2f(0.565, -0.15);
    glVertex2f(0.53, -0.17);
    glVertex2f(0.56, -0.177);
    glEnd();
    glColor3f(skinColor[0], skinColor[1], skinColor[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.37, -0.09);
    glVertex2f(0.36, -0.08);
    glVertex2f(0.378, -0.035);
    glVertex2f(0.36, -0.06);
    glEnd();
    //skin right hand
    glColor3f(skinColor[0], skinColor[1], skinColor[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.62, -0.13);
    glVertex2f(0.65, -0.1);
    glVertex2f(0.625, -0.18);
    glVertex2f(0.653, -0.16);
    glEnd();
    glColor3f(skinColor[0], skinColor[1], skinColor[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.802, 0.058);
    glVertex2f(0.814, 0.065);
    glVertex2f(0.813, -0.02);
    glVertex2f(0.818, 0.05);
    glEnd();
    //skin left leg
    glColor3f(skinColor[0], skinColor[1], skinColor[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.5, -0.36);
    glVertex2f(0.491, -0.38);
    glVertex2f(0.507, -0.39);
    glVertex2f(0.507, -0.413);
    glVertex2f(0.518, -0.392);
    glVertex2f(0.524, -0.402);
    glEnd();
    //skin right leg
    glColor3f(skinColor[0], skinColor[1], skinColor[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.58, -0.44);
    glVertex2f(0.575, -0.47);
    glVertex2f(0.614, -0.42);
    glVertex2f(0.616, -0.46);
    glVertex2f(0.59, -0.47);
    glVertex2f(0.605, -0.48);
    glVertex2f(0.59, -0.48);
    glVertex2f(0.578, -0.46);
    glEnd();
    //clothes
    glColor3f(clothesWhite[0], clothesWhite[1], clothesWhite[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.568, -0.15);
    glVertex2f(0.578, -0.145);
    glVertex2f(0.553, -0.2);
    glVertex2f(0.585, -0.18);
    glVertex2f(0.558, -0.335);
    glVertex2f(0.515, -0.27);
    glVertex2f(0.525, -0.355);
    glVertex2f(0.628, -0.18);
    glVertex2f(0.59, -0.165);
    glVertex2f(0.615, -0.128);
    glVertex2f(0.643, -0.323);
    glVertex2f(0.593, -0.388);
    glVertex2f(0.558, -0.335);
    glVertex2f(0.62, -0.17);
    glVertex2f(0.54, -0.34);
    glEnd();
    //tie
    glColor3f(lightGreen[0], lightGreen[1], lightGreen[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.58, -0.175);
    glVertex2f(0.6, -0.18);
    glVertex2f(0.58, -0.205);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.598, -0.178);
    glVertex2f(0.582, -0.173);
    glVertex2f(0.59, -0.168);
    glVertex2f(0.58, -0.205);
    glVertex2f(0.597, -0.276);
    glVertex2f(0.568, -0.31);
    glVertex2f(0.558, -0.265);
    glVertex2f(0.58, -0.205);
    glVertex2f(0.598, -0.2);
    glVertex2f(0.597, -0.276);
    glEnd();
    //skirt
    glColor3f(clothesGray[0], clothesGray[1], clothesGray[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.475, -0.283);
    glVertex2f(0.5, -0.2646);
    glVertex2f(0.48, -0.32);
    glVertex2f(0.51, -0.34);
    glVertex2f(0.5, -0.365);
    glVertex2f(0.48, -0.35);
    glVertex2f(0.49, -0.32);
    glVertex2f(0.525, -0.355);
    glVertex2f(0.515, -0.27);
    glVertex2f(0.495, -0.26);
    glVertex2f(0.525, -0.355);
    glVertex2f(0.5, -0.37);
    glVertex2f(0.51, -0.395);
    glVertex2f(0.515, -0.358);
    glVertex2f(0.558, -0.335);
    glVertex2f(0.596, -0.403);
    glVertex2f(0.533, -0.415);
    glVertex2f(0.515, -0.375);
    glVertex2f(0.553, -0.36);
    glVertex2f(0.61, -0.42);
    glVertex2f(0.565, -0.435);
    glVertex2f(0.647, -0.32);
    glVertex2f(0.64, -0.4);
    glVertex2f(0.672, -0.32);
    glVertex2f(0.679, -0.367);
    glVertex2f(0.668, -0.389);
    glVertex2f(0.67, -0.367);
    glVertex2f(0.651, -0.32);
    glVertex2f(0.635, -0.42);
    glVertex2f(0.666, -0.39);
    glEnd();
    //left stocking
    glColor3f(clothesGray[0], clothesGray[1], clothesGray[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.489, -0.376);
    glVertex2f(0.506, -0.418);
    glVertex2f(0.41, -0.425);
    glVertex2f(0.425, -0.485);
    glVertex2f(0.415, -0.474);
    glVertex2f(0.41, -0.43);
    glVertex2f(0.408, -0.435);
    glEnd();
    //right stocking
    glColor3f(clothesGray[0], clothesGray[1], clothesGray[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.573, -0.477);
    glVertex2f(0.615, -0.476);
    glVertex2f(0.56395, -0.61);
    glVertex2f(0.605, -0.615);
    glVertex2f(0.59, -0.625);
    glEnd();
    //left shoes
    glColor3f(shoesBlack[0], shoesBlack[1], shoesBlack[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.39, -0.425);
    glVertex2f(0.41, -0.425);
    glVertex2f(0.39, -0.47);
    glVertex2f(0.41, -0.46);
    glVertex2f(0.41, -0.5);
    glVertex2f(0.425, -0.485);
    glEnd();
    //right shoes
    glColor3f(shoesBlack[0], shoesBlack[1], shoesBlack[2]);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.56, -0.61);
    glVertex2f(0.605, -0.624);
    glVertex2f(0.56, -0.63);
    glVertex2f(0.585, -0.66);
    glVertex2f(0.567, -0.658);
    glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  //Clear the color buffer and depth buffer
    glLoadIdentity();  //Load the Identity Matrix to reset our drawing locations
    glMatrixMode(GL_MODELVIEW);  //Use the Modelview Matrix

    HappyLabourDay();
    MikuColor();
    Miku();
    
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);  //Initialize GLUT
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1000, 600);  //Set the width and height of the window
    glutInitWindowPosition(0, 0); //Set the position of the window
    glutCreateWindow("Labour Day");  //Set the title for the window

    init();  //Call the initial condition function
    glutDisplayFunc(display);  //Tell GLUT to use the method "display" for rendering
    glutMainLoop();  //Enter GLUT's main loop

    return 0;
}