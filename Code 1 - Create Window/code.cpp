#include <glut.h>

void display(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); // Background
    glClear(GL_COLOR_BUFFER_BIT);     // Clear Cache Color
    glColor3f(1.0, 0.3, 1.0);         //(R, G, B) float
    glBegin(GL_POLYGON);              // typenya
    glVertex2f(-0.5, -0.5);           // koordinat pertama
    glVertex2f(-0.5, 0.5);            // koordinat kedua
    glVertex2f(0.5, 0.5);             // koordinat ketiga
    glVertex2f(0.5, -0.5);            // koordinat keempat
    glEnd();                          // penutup
    glFlush();                        // render
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("kiplinyu"); // membuat windows dengan nama "kiplinyu"
    glutDisplayFunc(display);     // menampilkan gambar yang ada di function "display"
    glutMainLoop();               // looping agar windows tidak ke close
    return 0;
}
