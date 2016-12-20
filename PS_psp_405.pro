TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += /usr/local/include/tango \
            /usr/local/include \
            /usr/local/include/omniORB4 \
            /usr/local/include/omnithread \
            /usr/include \
            /usr/include/mysql \
            ./PowerSuppliesAbst \

            
SOURCES += main.cpp \
./PowerSuppliesAbst/*.cpp \
./PowerSuppliesAbst/*.h \
*.cpp \
*.h \
