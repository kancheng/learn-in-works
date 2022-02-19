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
	distance[i] = 0;
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

// 單點全部頂點最短距離
var shortestPath = (vertex1, vertex_total) => {
	let shortest_vertex = 1; // 紀錄最短距離的頂點
	let goal = []; // 用來記錄該缺點是否被錄取
	for (let i = 1; i < vertex_total + 1; i++ ) {
		goal[i] = 0;
		distance[i] = Graph_Matrix[vertex1][i];
	}
	goal[vertex1] = 1;
	distance[vertex1] = 0;
	process.stdout.write('\n');
	for ( let i = 1; i < vertex_total + 1; i++ ) {
		shortest_distance = INFINITE;
		for (let j = 1; j < vertex_total + 1; j++ ) {
			if ( goal[j] == 0 && shortest_distance > distance[j] ) {
				shortest_distance = distance[j];
				shortest_vertex = j;
			}
		}
		goal[shortest_vertex] = 1;
		// 計算開始頂點至個頂點最短距離
		for (let j = 1; j < vertex_total + 1; j++) {
			if (goal[j] == 0 && 
				distance[shortest_vertex] + 
				Graph_Matrix[shortest_vertex][j] < distance[j]) {
				distance[j] = distance[shortest_vertex] +
					Graph_Matrix[shortest_vertex][j];
			}
		}
	}
} 

// Main
Path_Cost = [
		[1, 2, 29],
		[2, 3, 30],
		[2, 4, 35],
		[3, 5, 28],
		[3, 6, 87],
		[4, 5, 42],
		[4, 6, 75],
		[5, 6, 97]];
BuildGraph_Matrix(Path_Cost);
shortestPath(1, NUMBER); // 搜尋最短路徑
process.stdout.write('===========================================\n');
process.stdout.write('頂點 1 到各頂點最短距離的最終結果\n');
process.stdout.write('===========================================\n');
for (let j = 1; j < SIZE; j = j + 1) {
	process.stdout.write('頂點一到頂點 ' + j +
		' 的最短距離 ' + distance[j] + ' \n');
}
process.stdout.write('===========================================\n');
