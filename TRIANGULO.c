#include <GL/glut.h>

void inicio(void);
void desenha(void);

int main (int argc, char** argv){

    glutInit(&argc, argv); //como vai exibir a visualizacao
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA); //ta usando um buffer para desenhar e as cores utilizadas serao rgba - vermelho, verde, azul, alfa transparente
    glutInitWiindowPosition(100,100); //posicao da janela - 100 pixels por 100 pixels em relacao ao  canto superior esquerdo
    glutInitWindowSize(640,480); //tamanho da janela 
    glutCreateWindow("Meu primeiro triangulo"); //cria a janela com o titulo

    inicio(); //funcao para colocar configuracoes iniciais, 
    //habilitar algumas coisas da opengl
    //tipo uma funcao de construcao
    glutDisplayFunc(desenha); //desenhar alguma coisa.passar para  displayfunc uma
    //unica funcao... criamos a funcao desenha...

    glutMainLoop();
    }
    void inicio(){ 
        glClearColor(0,0,0,0);
    }
    void desenha(){ //passa a tela (limpa cores e profundidade) 
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glBegin(GL_TRIANGLES); //desenhe triangulos

        glVertex2f-0.5,-0.5); //esses sao os tres vertices do meu triangulo
        glVertex2f(0.5,-0.5);
        glVertex2f(0.0,0.5);

        glEnd();

        glFlush();
    } 
}
