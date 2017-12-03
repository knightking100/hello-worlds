#!/bin/sh
echo '{"Hello": "World"}' | jq 'keys[0] +" " + .[keys[0]]'
