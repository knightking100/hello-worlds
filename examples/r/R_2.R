library(tidyverse)# Load library
library(tokenizers)# Load library
text <- paste("Hello, World! This is a hello world R script that implements two libraries, tidyverse and tokenizers to interact with data sets, in this case it will be the sentense you are reading, enjoy.")
hello <- tokenize_words(text)# The sentense stored in "text" will be broken up into the individual words that it contains
hello # Displays individual words that make up the hello world sentense. 
