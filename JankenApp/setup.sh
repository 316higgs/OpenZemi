#!/bin/bash

#### Set commands ####
WORKDIR=`pwd`
BIN=${WORKDIR}/bin
export PATH=$PATH:${BIN}


#### My config ####
MY_APP="/Users/sedi/Documents/openprogram/JankenApp"

#MY_ROOT="/Users/sedi/root_install"
#export PATH=$PATH:${MY_ROOT}

#### Alias for build ####
shopt -s expand_aliases
alias BuildJanken='./run/BuildJanken.sh'