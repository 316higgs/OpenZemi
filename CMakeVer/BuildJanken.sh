#!/bin/bash

WORKDIR="/Users/sedi/Documents/openprogram/CMakeVer"
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

BIN="${WORKDIR}/bin"
if [ ! -e ${BIN} ]; then
	mkdir ${BIN}
fi
mv ${BUILD}/${EXENAME} ${BIN}/${EXENAME}

source ${WORKDIR}/setup.sh
echo " "
if [ $? -eq 1 ]; then
	echo "App: Janken --- ${BIN}/${EXENAME}"
fi