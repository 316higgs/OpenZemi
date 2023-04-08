#!/bin/bash

WORKDIR="/Users/sedi/Documents/openprogram/JankenApp"
EXENAME="Janken"

BUILD="${WORKDIR}/build"
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

BIN="${WORKDIR}/bin"
if [ ! -e ${BIN} ]; then
	mkdir ${BIN}
fi
if [ -e ${BIN} ]; then
	mv ${BUILD}/${EXENAME} ${BIN}/${EXENAME}
fi

RUN="${WORKDIR}/run"
source ${RUN}/setup.sh
if [ $? -eq 0 ]; then
	echo " "
	echo "App: Janken --- ${BIN}/${EXENAME}"
fi