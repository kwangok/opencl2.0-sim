#!/bin/bash

export PARBOIL_ROOT=`pwd`

cd common; make; cd ..

for i in fft histo lbm mm stencil; do cd $i; make gem5-fusion; cd ..; done
