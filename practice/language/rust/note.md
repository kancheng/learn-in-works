# Rust

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



