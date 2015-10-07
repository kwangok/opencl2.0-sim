#!/bin/bash

export PARBOIL_ROOT=`pwd`

cd common; make; cd ..

for i in bfs cutcp fft histo lbm mm mri-gridding mri-q sad spmv stencil tpacf; do cd $i; make gem5-fusion; cd ..; done
