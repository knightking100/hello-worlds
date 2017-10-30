#lang racket
(define (upcase-all in)
    (for ([l (in-lines in)])
      (display (string-upcase l))
      (newline)))
(upcase-all (open-input-string
               (string-append
                "Hello, World!\n")))