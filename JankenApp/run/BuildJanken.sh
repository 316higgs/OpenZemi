#!/bin/bash

MY_APP="/Users/sedi/Documents/openprogram/JankenApp"
EXENAME="Janken"

echo ${MY_APP}
source ${MY_APP}/setup.sh
BUILD="${MY_APP}/build"
if [ -e ${BUILD} ]; then
	rm -rf ${BUILD}
fi
if [ ! -e ${BUILD} ]; then
	mkdir ${BUILD}
fi
cd ${BUILD}

cmake ..
make
cd ..

BIN="${MY_APP}/bin"
if [ ! -e ${BIN} ]; then
	mkdir ${BIN}
fi
if [ -e ${BIN} ]; then
	mv ${BUILD}/${EXENAME} ${BIN}/${EXENAME}
fi

if [ $? -eq 0 ]; then
	echo " "
	echo "App: Janken --- ${BIN}/${EXENAME}"
fi