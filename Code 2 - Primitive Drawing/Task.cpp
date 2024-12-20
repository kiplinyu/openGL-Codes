#include <glut.h>

void threeLines()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.0);
    glBegin(GL_LINES);

    // Notes: glColor3ub() = is for rgb color in range 0-255

    // Garis 1
    glColor3ub(237, 207, 169);
    glVertex2f(-4, 0); // titik satu
    glColor3ub(170, 74, 48);
    glVertex2f(4, 0); // titik dua

    // Garis 2
    glColor3ub(73, 36, 62);
    glVertex2f(-4, 2); // titik satu
    glColor3ub(219, 175, 160);
    glVertex2f(4, 2); // titik dua

    // Garis 3
    glColor3ub(210, 250, 251);
    glVertex2f(-4, -2); // titik satu
    glColor3ub(210, 250, 251);
    glVertex2f(4, -2); // titik dua

    glEnd();
    glFinish();
    // glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    int windowWidth = 600;
    int windowHeight = 450;

    // Mengambil ukuran layar
    int screenWidth = glutGet(GLUT_SCREEN_WIDTH);
    int screenHeight = glutGet(GLUT_SCREEN_HEIGHT);

    // Menghitung posisi jendela di tengah layar
    int windowPosX = (screenWidth - windowWidth) / 2;
    int windowPosY = (screenHeight - windowHeight) / 2;

    // Mengatur ukuran dan posisi jendela
    glutInitWindowSize(windowWidth, windowHeight);
    glutInitWindowPosition(windowPosX, windowPosY);
    glutCreateWindow("Kiplinyu - 3 Lines");
    glClearColor(0 / 255.0, 60 / 255.0, 67 / 255.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-10, 10, -10, 10, -1, 1); // (-x, x, -y, y, -z, z)
    glutDisplayFunc(threeLines);
    glutMainLoop();
    return 0;
}
