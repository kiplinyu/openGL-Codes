#include <glut.h>

void titik()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10.5);
    glBegin(GL_POINTS);

    glColor3ub(227, 254, 247);
    glVertex2f(0, 0);

    glColor3ub(253, 139, 81);
    glVertex2f(0, 1.5);

    glColor3ub(37, 113, 128);
    glVertex2f(0, 3);

    glColor3ub(242, 229, 191);
    glVertex2f(0, 4.5);

    glColor3ub(255, 241, 0);
    glVertex2f(0, 6);

    glEnd();
    glFinish();
    // glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Latihan 2 - Membuat Banyak Titik");
    glClearColor(0 / 255.0, 60 / 255.0, 67 / 255.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-10, 10, -10, 10, -10, 10); // (-x, x, -y, y, -z, z)
    glutDisplayFunc(titik);
    glutMainLoop();
    return 0;
}
