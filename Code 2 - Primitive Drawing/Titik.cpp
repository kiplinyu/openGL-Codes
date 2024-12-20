#include <glut.h>

void titik()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(15.0);
    glBegin(GL_POINTS);

    glColor3ub(232, 197, 229);
    glVertex2f(0, 0);

    glEnd();
    glFinish();
    // glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Latihan 1 - Membuat Objek Titik");
    glClearColor(0 / 255.0, 60 / 255.0, 67 / 255.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-10, 10, -10, 10, -10, 10); // (-x, x, -y, y, -z, z)
    glutDisplayFunc(titik);
    glutMainLoop();
    return 0;
}
