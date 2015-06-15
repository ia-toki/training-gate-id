#!/bin/bash

# Install tokitex beamer package
theme_path=`kpsewhich -var-value TEXMFLOCAL`/tex/latex/beamer
mkdir -p $theme_path
cp -R beamer-tokitex/beamerthemetokitex.sty beamer-tokitex/tokitex-asset $theme_path/

# Install lstaddons CTAN package
lstaddons_path=`kpsewhich -var-value TEXMFLOCAL`/tex/latex/lstaddons
if [ ! -d lstaddons_path ]; then
    mkdir -p $lstaddons_path
    wget http://mirrors.ctan.org/install/macros/latex/contrib/lstaddons.tds.zip
    unzip lstaddons.tds.zip -d lstaddons
    cp lstaddons/tex/latex/lstaddons/* $lstaddons_path/
    rm -rf lstaddons
fi

# Reload
texhash
