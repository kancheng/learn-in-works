/*
* Maze Solving Algorithm
* MAZE [i][j] = 1 
* 表示 [i][j] 處有牆，無法通過。
* MAZE [i][j] = 0
* 表示 [i][j] 處無牆，可以通行。
* MAZE [1][1] 是入口
* MAZE [m][n] 是出口
*
* 老鼠走迷宮 <:3 )~~~~
*
if (上一格可走) {
    加入方格編號到堆疊;
    往上走;
    判斷是否為出口;
}
else if (下一格可走) {
    加入方格編號到堆疊;
    往下走;
    判斷是否為出口;
}
else if (左一格可走) {
    加入方格編號到堆疊;
    往左走;
    判斷是否為出口;
}
else if (右一格可走) {
    加入方格編號到堆疊;
    往右走;
    判斷是否為出口;
}
else {
    從堆疊刪除一方格編號;
    從堆疊中取出一方格編號;
    往回走;   
}

*
*
*
*/

class Node {
    constructor( x, y) {
        this.x = x;
        this.y = y;
        this.next = null;
    }
}

class TraceRecord {
    constructor() {
        this.first = null;
        this.last = null;
    }
    isEmpty = () => {
        return this.first == null;
    }
    insert = (x, y) => {
        let newNode = new Node(x, y);
        if (this.first == null){
            this.first = newNode;
            this.last = newNode;
        } else {
            this.last.next = newNode;
            this.last = newNode;
        }
    }
    delete = () => {
        if (this.first == null) {
            process.stdout.write('佇列已經為空 \n');
            return;
        }
        let newNode = this.first;
        while (newNode.next != this.last)
            newNode = newNode.next;
        newNode.next = this.last.next;
        this.last = newNode;
    }
}

/* 定義出口 X 座標在第 8 列 */
const ExitX = 8;

/* 定義出口 Y 座標在第 10 行 */
const ExitY = 10;

/* 宣告迷宮陣列 */

MAZE = [[1,1,1,1,1,1,1,1,1,1,1,1], // 1
        [1,0,0,0,1,1,1,1,1,1,1,1],// 2
        [1,1,1,0,1,1,0,0,0,0,1,1],// 3
        [1,1,1,0,1,1,0,1,1,0,1,1],// 4
        [1,1,1,0,0,0,0,1,1,0,1,1],// 5
        [1,1,1,0,1,1,0,1,1,0,1,1],// 6
        [1,1,1,0,1,1,0,1,1,0,1,1],// 7
        [1,1,1,1,1,1,0,1,1,0,1,1],// 8
        [1,1,0,0,0,0,0,0,1,0,0,1],// 9
        [1,1,1,1,1,1,1,1,1,1,1,1]];// 10

var chkExit = (x,y,ex,ey) => {
    if ( x == ex && y == ey) {
        if ( MAZE[x-1][y] == 1 || MAZE[x+1][y] == 1 || MAZE[x][y-1] == 1 || MAZE[x][y+1] == 2 ) {
            return 1;
        }
        if ( MAZE[x-1][y] == 1 || MAZE[x+1][y] == 1 || MAZE[x][y-1] == 2 || MAZE[x][y+1] == 1 ) {
            return 1;
        }
        if ( MAZE[x-1][y] == 1 || MAZE[x+1][y] == 2 || MAZE[x][y-1] == 1 || MAZE[x][y+1] == 1) {
            return 1;
        }
        if ( MAZE[x-1][y] == 2 || MAZE[x+1][y] == 1 || MAZE[x][y-1] == 1 || MAZE[x][y+1] == 1) {
            return 1;
        }
    }
    return 0;
}

/* Main */

path = new TraceRecord();
x = 1;
y = 1;

process.stdout.write('迷宮路徑(0 的部分) \n');

for ( i = 0; i < 10; i++) {
    for ( j = 0; j < 12; j++ )
        process.stdout.write(MAZE[i][j].toString());
    process.stdout.write('\n');
}

while ( x <= ExitX && y <= ExitY) {
    MAZE[x][y] = 2;
    if (MAZE[x-1][y] == 0) {
        x -= 1;
        path.insert(x,y);
    }
    else if (MAZE[x+1][y] == 0) {
        x += 1;
        path.insert(x,y);
    }
    else if (MAZE[x][y-1] == 0) {
        y -= 1;
        path.insert(x,y);
    }
    else if (MAZE[x][y+1] == 0) {
        y += 1;
        path.insert(x,y);
    }
    else if (chkExit( x, y, ExitX, ExitY) == 1) {
        break;
    }
    else {
        MAZE[x][y] = 2;
        path.delete();
        x = path.last.x;
        y = path.last.y;
    }
}
    process.stdout.write('老鼠走過得路徑(2 的部分) \n');
    for ( i = 0; i < 10; i++){
        for (j = 0; j < 12; j++) {
            process.stdout.write(MAZE[i][j].toString());
        }
        process.stdout.write('\n');        
    }