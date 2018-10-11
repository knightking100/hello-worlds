{\rtf1\ansi\ansicpg1252\cocoartf1561
{\fonttbl\f0\fmodern\fcharset0 Courier;\f1\froman\fcharset0 Times-Roman;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww16480\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf0 \expnd0\expndtw0\kerning0
section     .text\
global      _start                              ;must be declared for linker (ld)\
\
_start:                                         ;tell linker entry point\
\
    mov     edx,len                             ;message length\
    mov     ecx,msg                             ;message to write\
    mov     ebx,1                               ;file descriptor (stdout)\
    mov     eax,4                               ;system call number (sys_write)\
    int     0x80                                ;call kernel\
\
    mov     eax,1                               ;system call number (sys_exit)\
    int     0x80                                ;call kernel\
\
section     .data\
\
msg     db  'Hello, world!',0xa                 ;our dear string\
len     equ $ - msg                             ;length of our dear string\
\pard\pardeftab720\partightenfactor0

\f1\fs32 \cf0 \
}