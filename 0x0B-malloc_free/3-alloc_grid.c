#include &lt;stdlib.h&gt;

int **alloc_grid(int width, int height) {
	if (width &lt;= 0 || height &lt;= 0) {
	return NULL;
	}

	int **grid = malloc(height * sizeof(int *));
	if (grid == NULL) {
	return NULL;
	}

	for (int i = 0; i &lt; height; i++) {
	grid[i] = calloc(width, sizeof(int));
	if (grid[i] == NULL) {
	for (int j = 0; j &lt; i; j++) {
	free(grid[j]);
	}
		free(grid);
		return NULL;
        }
	
		}

	return grid;
}
