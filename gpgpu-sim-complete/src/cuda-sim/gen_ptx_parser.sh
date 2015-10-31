#!/bin/bash

bison --name-prefix=ptx_ -d ptx.y --file-prefix=ptx
flex --outfile=lex.ptx_.c ptx.l 
