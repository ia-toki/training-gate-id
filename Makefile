mkfile_path = $(abspath $(lastword $(MAKEFILE_LIST)))
mkfile_dir = $(dir $(mkfile_path))

SRC = $(wildcard ./*/*/*/*.tex)
LATEXMAKE = latexmk -pdf -pdflatex="pdflatex -interaction=nonstopmode -halt-on-error" -outdir=$(mkfile_dir)pdf

all: $(SRC)
	$(foreach path, $?, cd $(dir $(path)) && $(LATEXMAKE) $(notdir $(path)) > /dev/null && cd $(mkfile_dir) && ) \
 	echo "END"; \
