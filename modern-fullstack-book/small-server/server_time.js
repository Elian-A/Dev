require("http").createServer((inRequest, inResponse) => {
  const requestModule = require("request")
  requestModule("http://worldtimeapi.org/api/timezone/America/New_York",
    (inErr, inRes, inBody) => {
      inResponse.end(`Hello from my first web server ${inBody}`)
    }
  )
}).listen(8000, () => console.log("Tu vieja está corriendo... ejecutandose"));
