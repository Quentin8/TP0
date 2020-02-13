#include <QApplication>
#include <QPushButton>
#include <QFileDialog>
#include <QLineEdit>
#include <QFont>
#include <QProgressBar>
#include <QColor>
int main(int argc, char **argv)
{
      QApplication app (argc, argv);
      /*QPushButton button ("Hello world !");
      button.setToolTip("Click ici !");
      QFont maPolice("Courier");
      button.setFont(maPolice);
      button.setCursor(Qt::WaitCursor);
      QProgressBar charg;
      charg.setMaximum(100);
      charg.setMinimum(0);
      charg.setValue(12);
      charg.show();*/
      QWidget Fenetre;
      Fenetre.setFixedSize(300,150);
      QPushButton bouton("Hit me nigga !", &Fenetre);
      bouton.setFixedSize(150,50);
      QPushButton inButton("I'm in", &bouton);
      Fenetre.show();


      return app.exec();
}