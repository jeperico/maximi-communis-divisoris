runmain:
	gcc main.c utils/generate_table.c utils/render_table.c -o app && ./app
