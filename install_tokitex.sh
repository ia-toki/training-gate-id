#!/bin/bash

theme_path=`kpsewhich -var-value TEXMFLOCAL`/tex/latex/beamer
mkdir -p $theme_path
cp -R beamer-tokitex/beamerthemetokitex.sty beamer-tokitex/tokitex-asset $theme_path/
texhash