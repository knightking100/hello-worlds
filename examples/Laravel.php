<?php

// routes/web.php
$route::get('/', function() {
  $hello = "Hello World";
  return view('hello')->with('helloWorld', $hello);
});


// resources/views/hello.blade.php
<html>
  <head>
    <title>{{ $helloWorld }}</title>
  </head>
  <body>
    {{ $helloWorld }}    
  </body>
</html>
