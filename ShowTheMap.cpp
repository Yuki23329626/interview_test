#include <iostream>
using namespace std;

struct Position{
	int x;
	int y;
};

void showTheMap(int W, int H, Position arr[]){
	int map[W][H];
	int arr_length = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<W; i++)
		for(int j=0; j<H; j++)
			map[i][j] = 0;
	
	for(int i=0; i<=arr_length; i++){
		
		for(int ii = arr[i].x-1; ii <= arr[i].x+1; ii++)
		{
			for(int jj = arr[i].y-1; jj <= arr[i].y+1; jj++){
				if(ii >= 0 && ii < W)
					if(jj >= 0 && jj < H)
						map[ii][jj] += 1;
			}
		}
	}
	for(int i=0; i<=arr_length; i++){
		map[arr[i].x][arr[i].y] = -1;
	}
	
	for(int i=0; i<W; i++){
		for(int j=0; j<H; j++){
			printf("%2d ", map[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	Position arr[2];
	
	arr[0].x = 1;
	arr[0].y = 1;
	arr[1].x = 2;
	arr[1].y = 2;
	
	showTheMap(5, 5, arr);
	
	return 0;
}

