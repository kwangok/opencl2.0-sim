#!/bin/bash

cd common; make clean; cd ..

for i in fft histo lbm mm stencil; do cd $i; make clean-gem5-fusion; cd ..; done
