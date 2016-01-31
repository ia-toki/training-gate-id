#!/bin/bash

# Install tokitex beamer package
theme_path=`kpsewhich -var-value TEXMFLOCAL`/tex/latex/beamer
mkdir -p $theme_path
cp -R beamer-tokitex/beamerthemetokitex.sty beamer-tokitex/tokitex-asset $theme_path/

/usr/share/texlive/texmf-dist/tex/latex/qtree/

# Install lstaddons CTAN package
lstaddons_path=`kpsewhich -var-value TEXMFLOCAL`/tex/latex/lstaddons
if [ ! -d $lstaddons_path ]; then
    mkdir -p $lstaddons_path

    wget http://mirrors.ctan.org/install/macros/latex/contrib/lstaddons.tds.zip
    unzip lstaddons.tds.zip -d lstaddons
    cp lstaddons/tex/latex/lstaddons/* $lstaddons_path/
    rm -rf lstaddons*
fi

# Install qtree package
qtree_path=`kpsewhich -var-value TEXMFLOCAL`/tex/latex/qtree/o
echo $qtree_path
if [ ! -d $qtree_path ]; then
    mkdir -p $qtree_path

    wget http://mirrors.ctan.org/macros/latex/contrib/qtree.zip
    unzip qtree.zip
    cp qtree/* $qtree_path/
    rm -rf qtree*
fi

# Reload
texhash
