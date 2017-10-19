//HELLOW 	 	JOB
//* The IEBGENER program copies data
//S1    	 	EXEC PGM=IEBGENER
//* Data to be copied
//SYSUT1	 	DD *
Hello, world!
//* Tells IEBGENER to copy data to the system output
//SYSUT2	 	DD SYSOUT=A
//SYSPRINT	 	DD SYSOUT=A
//SYSIN	 	        DD DUMMY
//* Null statement ends job
//