require("http").createServer((inRequest, inResponse) => { 
  inResponse.end("Hello from my first tu vieja") 
}).listen(8000, () => console.log("Tu vieja está corriendo... ejecutandose"));
