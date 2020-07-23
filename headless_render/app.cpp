#include <QApplication>
#include <QFile>
#include <iostream>

#include "lib.h"

int main(int argc, char **argv)
{
    if (argc < 4) {
        std::cout << "Usage: ./qgis filepath_to_geodata filepath_to_style output_path\n";
        return 1;
    }

    HeadlessRender::init(argc, argv);

    QFile styleFile(argv[2]);
    styleFile.open(QIODevice::ReadOnly);

    auto image = HeadlessRender::renderVector( argv[1], styleFile.readAll().data(), 800, 600, 4326 );

    QFile outFile(argv[3] + QString("/result.png"));
    if (outFile.open(QIODevice::WriteOnly)) {
        outFile.write(reinterpret_cast<const char *>( image->getData() ), image->getSize());
        outFile.close();
    }
}
