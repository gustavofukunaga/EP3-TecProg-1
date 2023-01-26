#!/bin/bash -x

rm -f *.o *.a testa

#compilação e criação da biblioteca estática propriedadesnumericas
gcc -Wall -c -o propriedadesnumericas.o propriedadesnumericas.c
ar -rcv libpropriedadesnumericas.a propriedadesnumericas.o 
ar -t libpropriedadesnumericas.a 
rm propriedadesnumericas.o

if [ $? -ne 0 ]; then
 echo "A compilação de propriedadesnumericas falhou"
 exit 1
fi

#compilação e criação da biblioteca dinâmica vetoraleatorio
gcc -c -fPIC -o vetoraleatorio.o vetoraleatorio.c
gcc -o libvetoraleatorio.so -shared vetoraleatorio.o
rm vetoraleatorio.o

if [ $? -ne 0 ]; then
 echo "A compilação de vetoraleatorio falhou"
 exit 1
fi

#Ligação das bibliotecas propriedadesnumericas e vetoraleatorio ao programa de teste
#teste.c e sua compilação
gcc -o testa testa.c -L${PWD} libpropriedadesnumericas.a -lvetoraleatorio
export LD_LIBRARY_PATH=/path/to/libs:$LD_LIBRARY_PATH
sudo ldconfig
if [ $? -ne 0 ]; then
 echo "Xi, a compilação falhou :-("
 exit 1
fi

#criação do doxygen
doxygen Doxyfile

if [ $? -ne 0 ]; then
 echo "O doxygen falhou"
 exit 1
else
    exit 0
fi