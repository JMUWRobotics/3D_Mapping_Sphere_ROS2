PDF=Manuscript.pdf
TEX=Manuscript.tex
OUT=Manuscript_print.pdf

all: $(PDF) $(OUT)

$(PDF): $(TEX)
	latexmk -pdf $(TEX)

$(OUT): $(PDF)
	gs -sDEVICE=pdfwrite -dCompatibilityLevel=1.4 -dPDFSETTINGS=/printer -dDownsampleColorImages=true -dColorImageResolution=300 -dNOPAUSE -dQUIET -dBATCH -sOutputFile=$(OUT) $(PDF)

clean:
	latexmk -C
	rm -f $(OUT)