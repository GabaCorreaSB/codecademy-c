#
#	Copyright (c) 2023 Gabriel Correa <gabrielcorreasb@protonmail.com>
#

PROJECT?=text_adventure
start_project:
	g++ ${PWD}/${PROJECT}/${PROJECT}.cpp -o ${PROJECT}.out 
	./${PROJECT}.out

POD?=*
clean_project:
	rm -rf ${POD}.out