var http = require('http');

http.createServer(function(req,res) {
	res.write ("Hello World");
	res.end();
}).listen(9090);
console.log("Server is started at 9090 port");
