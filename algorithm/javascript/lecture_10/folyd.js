


const SIZE = 7;
const NUMBER = 6;
const INFINITE = 99999;

var Graph_Matrix = [[0,0,0,0,0,0,0],
					[0,0,0,0,0,0,0],
					[0,0,0,0,0,0,0],
					[0,0,0,0,0,0,0],
					[0,0,0,0,0,0,0],
					[0,0,0,0,0,0,0],
					[0,0,0,0,0,0,0]];

var distance = []; // 路徑長度

for (let i = 0; i < SIZE; i++) {
	distance[i] =  new Array();
	for (let j = 0; j < SIZE; j++) {
		distance[i][j] = 0;
	}
}

// 建立圖形
var BuildGraph_Matrix = (Path_Cost) => {
	for (let i = 1; i < SIZE; i++) {
		for (let j = 1; j < SIZE; j++) {
			if ( i == j) {
				Graph_Matrix[i][j] = 0; // 對角線設為 0
			} else {
				Graph_Matrix[i][j] = INFINITE;
			}
		}
	}
	// 存入圖形的邊線
	i = 0;
	while (i < SIZE) {
		Start_Point = Path_Cost[i][0];
		End_Point = Path_Cost[i][1];
		Graph_Matrix[Start_Point][End_Point] = Path_Cost[i][2];
		i += 1;
	}
}

var shortestPath = (vertex_total) => {
	// 圖形長度陣列初始化
	for ( let i = 1; i < vertex_total + 1; i++ ) {
		for (let j = i; j < vertex_total + 1; j++ ) {
			distance[i][j] = Graph_Matrix[i][j];
			distance[j][i] = Graph_Matrix[i][j];
		}
	}

	// 利用 Floyd 演算法找出所有頂點兩兩之間的最短距離
	for (let k = 1; k < vertex_total + 1; k++){
		for (let i = 1; i< vertex_total + 1; i++){
			for(let j = 1; j < vertex_total + 1; j++){
				if (distance[i][k] + distance[k][j] < distance[i][j]) {
					distance[i][j] = distance[i][k] + distance[k][j];
				}
			}
		}
	}
} 

// Main
Path_Cost = [
		[1, 2, 20],
		[2, 3, 30],
		[2, 4, 25],
		[3, 5, 28],
		[4, 5, 32],
		[4, 6, 95],
		[5, 6, 67]];
BuildGraph_Matrix(Path_Cost);
shortestPath(1, NUMBER); // 搜尋最短路徑
process.stdout.write('===========================================\n');
process.stdout.write('所有頂點兩兩之間的最短距離 \n');
process.stdout.write('===========================================\n');
shortestPath(NUMBER); // 計算所有頂點之間的最短路徑
process.stdout.write('\t頂點 1 \t頂點 2 \t頂點 3 \t頂點 4 \t頂點 5 \t頂點 6 \n');
for (let i = 1; i < NUMBER + 1; i++) {
	process.stdout.write('頂點 ' + i + ' \t');
	for (let j = 1; j < NUMBER + 1; j++) {
		process.stdout.write(distance[i][j] + '\t');
	}
	process.stdout.write('\n');
}
process.stdout.write('===========================================\n');


