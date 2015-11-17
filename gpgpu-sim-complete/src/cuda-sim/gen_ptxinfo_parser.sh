#!/bin/bash

bison --name-prefix=ptxinfo_ -d ptxinfo.y --file-prefix=ptxinfo
flex --outfile=lex.ptxinfo_.c ptxinfo.l 
