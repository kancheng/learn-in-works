const js = import("./node_modules/@kancheng/hello-wasm/hello_wasm.js");
js.then(js => {
  js.greet("WebAssembly");
});
