#!/bin/bash
# Hello World
echo $(head -n 2 $0 | tail -n +2 | sed 's/# //')
