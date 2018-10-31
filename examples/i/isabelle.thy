theory isabelle
imports Main

begin
theorem HelloWorld:
assumes 1: "Meeting \<and> Greeting \<longrightarrow> Hello"
assumes 2: "Greeting \<longrightarrow> Meeting"
assumes 3: "Greeting"
shows "Hello"
proof - 
{
  from 2 3 have 4: "Meeting" by (rule mp)
  from 4 3 have 5: "Meeting \<and> Greeting" by (rule conjI)
  from 1 5 have 6: "Hello" by (rule mp)
}
thus ?thesis .
qed
end