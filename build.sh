courses=(pemrograman-dasar)

exitcode=0
for course in ${courses[@]};
do
	# list all sessions
	sessions=(./$course/*)

	for session in ${sessions[@]};
	do
		# list all materials
		materials=($session/materi/*.tex)

		for material in ${materials[@]};
		do
			# compile each material
			directories=(${material//\// })
			filename=${directories[${#directories[@]} - 1]}

			# "go inside" folder and compile it there
			# compiling outside will cause latex error if it needs to access ./asset/*
			(cd $session/materi/; pdflatex -synctex=1 -interaction=nonstopmode -halt-on-error $filename)

			errorcode=`echo $?`
			let "exitcode = $exitcode | $errorcode"
		done
	done
done

exit $exitcode
