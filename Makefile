runmain:
	gcc main.c utils/generate_table.c utils/render_table.c errors/invalid_input.c -o app && ./app
