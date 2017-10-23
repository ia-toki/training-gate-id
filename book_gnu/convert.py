import sys
import re


file_list = [
	"../topik/pemrograman-dasar/01-perkenalan/pemrograman-dasar_01-perkenalan.tex",
	"../topik/pemrograman-dasar/02-variabel-tipe-data/pemrograman-dasar_02-variabel-tipe-data.tex",
	"../topik/pemrograman-dasar/03-ekspresi-masukan-keluaran/pemrograman-dasar_03-ekspresi-masukan-keluaran.tex",
	"../topik/pemrograman-dasar/04-penunjang-pemrograman-dasar/pemrograman-dasar_04-penunjang-pemrograman-dasar.tex",
	"../topik/pemrograman-dasar/05-percabangan/pemrograman-dasar_05-percabangan.tex",
	"../topik/pemrograman-dasar/06-perulangan/pemrograman-dasar_06-perulangan.tex",
	"../topik/pemrograman-dasar/07-perulangan-lanjut/pemrograman-dasar_07-perulangan-lanjut.tex",
	"../topik/pemrograman-dasar/08-analisis-kompleksitas/pemrograman-dasar_08-analisis-kompleksitas.tex",
	"../topik/pemrograman-dasar/09-array/pemrograman-dasar_09-array.tex",
	"../topik/pemrograman-dasar/10-fungsi-prosedur/pemrograman-dasar_10-fungsi-prosedur.tex",
	"../topik/pemrograman-dasar/11-pendalaman-string/pemrograman-dasar_11-pendalaman-string.tex",
	"../topik/pemrograman-dasar/12-pencarian/pemrograman-dasar_12-pencarian.tex",
	"../topik/pemrograman-dasar/13-pengurutan/pemrograman-dasar_13-pengurutan.tex",
	"../topik/pemrograman-dasar/15-rekursi-lanjut/pemrograman-dasar_15-rekursi-lanjut.tex",
	"../topik/pemrograman-kompetitif-dasar/01-perkenalan/pemrograman-kompetitif-dasar_01-perkenalan.tex",
	"../topik/pemrograman-kompetitif-dasar/02-matematika-diskret-dasar/pemrograman-kompetitif-dasar_02-matematika-diskret-dasar-kombinatorik.tex",
	"../topik/pemrograman-kompetitif-dasar/02-matematika-diskret-dasar/pemrograman-kompetitif-dasar_02-matematika-diskret-dasar.tex",
	"../topik/pemrograman-kompetitif-dasar/03-brute-force/pemrograman-kompetitif-dasar_03-brute-force.tex",
	"../topik/pemrograman-kompetitif-dasar/04-divide-and-conquer/pemrograman-kompetitif-dasar_04-divide-and-conquer-quicksort.tex",
	"../topik/pemrograman-kompetitif-dasar/04-divide-and-conquer/pemrograman-kompetitif-dasar_04-divide-and-conquer.tex",
	"../topik/pemrograman-kompetitif-dasar/05-greedy/pemrograman-kompetitif-dasar_05-greedy.tex",
	"../topik/pemrograman-kompetitif-dasar/06-dynamic-programming/pemrograman-kompetitif-dasar_06-dynamic-programming-examples.tex",
	"../topik/pemrograman-kompetitif-dasar/06-dynamic-programming/pemrograman-kompetitif-dasar_06-dynamic-programming.tex",
	"../topik/pemrograman-kompetitif-dasar/07-struktur-data-dasar/pemrograman-kompetitif-dasar_07-struktur-data-dasar.tex",
	"../topik/pemrograman-kompetitif-dasar/08-perkenalan-graph/pemrograman-kompetitif-dasar_08-perkenalan-graph.tex",
	"../topik/pemrograman-kompetitif-dasar/09-struktur-data-non-linear/pemrograman-kompetitif-dasar_09-disjoint-set.tex",
	"../topik/pemrograman-kompetitif-dasar/09-struktur-data-non-linear/pemrograman-kompetitif-dasar_09-heap-sort.tex",
	"../topik/pemrograman-kompetitif-dasar/09-struktur-data-non-linear/pemrograman-kompetitif-dasar_09-heap.tex",
	"../topik/pemrograman-kompetitif-dasar/10-komputasi-geometri-dasar/pemrograman-kompetitif-dasar_10-komputasi-geometri-dasar.tex",
	"../topik/pemrograman-kompetitif-dasar/11-berkompetisi/pemrograman-kompetitif-dasar_11-memenangkan-kompetisi.tex"
]

rmlist = [
	"\\par", "\\author", "\\input","\\date", "\\titlepage", "\\begin{frame}" , "\\end{frame}", "\\begin{document}", "\\end{document}", "\\frame{",
	"\{columns\}", "\\column", "\\usepackage", "\\tiny", "\\frametitle{Pendahuluan}"
	]


def process(filename, book_filename):
	fin = open(filename, 'r')
	fout = open(book_filename, 'w')

	for line in fin:
		line = line.rstrip()
		skip = 0
		for rm in rmlist:
			if rm in line:
				skip = 1
				break
		if skip:
			continue

		line = re.sub(r'\\title', '\chapter', line)
		if "chapter" in line:
			line = re.sub(r'\\newline', "", line)
			line = line + "\n" + "\dictum[Fuadi, Ashar]{Sapu apa yang nempel terus? \\newline Sapu yang tak bisa lepas\\dots}"
		line = re.sub(r'\\frametitle', '\subsection', line)
		line = re.sub(r'\\newTerm', '\\textbf', line)
		line = re.sub(r'\\progTerm', '\\textbf', line)
		line = re.sub(r'\\foreignTerm', '\\textit', line)
		line = re.sub(r'\\emp', '\\textit', line)



		

		filedir = re.search("{asset", line)
		if filedir is not None:
			filedir = filedir.start()
			line = line[:filedir] + "{" + filename.rsplit('/',1)[0] + '/' + line[filedir + 1:]

		line = re.sub(r"\{block\}", "{statement}", line)
		line = re.sub(r"\{columns\}", "{minipage}", line)
		line = re.sub(r"\{comment\}", "{statement}", line)


		fout.write(line+"\n")



fout = open("chapterlist.tex", "w")
for filename in file_list:
	book_filename = filename[:-4] + "_book.tex"
	book_filename = re.sub(r"_","-", book_filename)
	process(filename, book_filename)
	fout.write("\input{" + book_filename[:-4] + "}\n")

