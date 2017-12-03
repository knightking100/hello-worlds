entity HelloWorld is
end;

architecture HelloWorld of HelloWorld is
begin
	stimulus : PROCESS
	begin
		assert false report "Hello World!"
		severity note;
		wait;
	end PROCESS stimulus;
end HelloWorld;
