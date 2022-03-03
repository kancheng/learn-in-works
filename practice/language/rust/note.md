# Rust

1. https://rust-lang.tw/book-tw/

## 安裝

```
$ curl --proto '=https' --tlsv1.2 https://sh.rustup.rs -sSf | sh
```

## 編譯與執行


```
$ rustc main.rs
```

main.rs

```
fn main() {
    println!("Hello, world!");
}
```

## Cargo

Cargo 是 Rust 的建構系統與套件管理工具。

1. 版本

```
cargo --version
```

2. 建立專案

```
$ cargo new hello_cargo
$ cd hello_cargo
```


```
(base) HaoyeMacBookPro:cargo_1-2 kancheng$ cargo new hello_cargo
     Created binary (application) `hello_cargo` package
(base) HaoyeMacBookPro:cargo_1-2 kancheng$ cd hello_cargo/
(base) HaoyeMacBookPro:hello_cargo kancheng$ tree
.
├── Cargo.toml
└── src
    └── main.rs

1 directory, 2 files
(base) HaoyeMacBookPro:hello_cargo kancheng$ 

```

3. Cargo.toml

```
[package]
name = "hello_cargo"
version = "0.1.0"
edition = "2021"

# See more keys and their definitions at https://doc.rust-lang.org/cargo/reference/manifest.html
```

4. 我們可以用 cargo build 建構專案。

5. 我們可以用 cargo run 同時建構並執行專案。

6. 我們可以用 cargo check 建構專案來檢查錯誤，但不會產生執行檔。

## Guessing Game

1. main.rs

```
use std::io; // input/output

fn main() {
    println!("請猜測一個數字!");
    println!("請輸入所猜的數字");
    let mut guess = String::new();
    io::stdin()
        .read_line(&mut guess)
        .expect(" 讀取失效");
    println!("你所猜測的數字 : {}", guess);
}

 // 不可變的
 //let apple = 5;
 // 可變的
 // let mut banana = 5;

```

### 加入隨機值

1. main.rs

```
use std::io;
use rand::Rng;

fn main() {
    println!("請猜測一個數字！");
    let secret_number = rand::thread_rng().gen_range(1..101);
    println!("祕密數字為：{}", secret_number);
    println!("請輸入你的猜測數字。");
    let mut guess = String::new();
    io::stdin()
        .read_line(&mut guess)
        .expect("讀取該行失敗");
    println!("你的猜測數字：{}", guess);
}
```

2. Cargo.toml

```
[package]
name = "guessing_game"
version = "0.1.0"
edition = "2021"

# See more keys and their definitions at https://doc.rust-lang.org/cargo/reference/manifest.html

[dependencies]
rand = "0.8.3"
```

### 建構所有本地端依賴函式庫的技術文件

```
cargo doc --open
```

### Match & shadow & loop

1. main.rs

```
use std::io;
use rand::Rng;
use std::cmp::Ordering;

fn main() {
    println!("請猜測一個數字！");
    let secret_number = rand::thread_rng().gen_range(1..101);
    println!("祕密數字為：{}", secret_number);
    loop {    
        println!("請輸入你的猜測數字。");
        let mut guess = String::new();
        io::stdin()
            .read_line(&mut guess)
            .expect("讀取該行失敗");
        let guess: u32 = guess.trim().parse().expect("請輸入一個數字！");
        println!("你的猜測數字：{}", guess);
        match guess.cmp(&secret_number) {
            Ordering::Less => println!("太小了！"),
            Ordering::Greater => println!("太大了！"),
            Ordering::Equal => println!("獲勝！"),
        }        
    }
}
```

2. Rust 會用 match 得到的數值依序遍歷每個分支中的模式。

3. Rust 允許我們遮蔽（shadow）之前的 guess 數值成新的數值。此功能常用於當你想將一個數值從一個型別轉換成另一個型別的場合中。遮蔽讓我們可以重複使用 guess 變數名稱，而不必強迫我們得建立兩個不同的變數，舉例來說像是 guess_str 和 guess。

```
let guess: u32 = guess.trim().parse().expect("請輸入一個數字！");
```

> 32 位元數字 i32
> 非帶號（unsigned) - 32 位元數字 u32、
> 64 位元數字 i64
> Rust 預設的數字型別為 i32

4. loop 關鍵字會產生無限迴圈。

```
loop {}
```





