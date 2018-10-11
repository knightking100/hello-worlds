
extends SceneTree

func _init():
	print("Hello World!")
	quit()

#  //INSTALLATION
#  To prepare your system for executing GDScript programs, you must download the
#   self contained binary appropriate for your system from godotengine.org. Add
#   this binary to your path. These instructions assumes "godot" references it.
#
#  //EXECUTION
#  Executing a script (ie helloworld.gd) is done using
#   the command "$ godot -s helloworld.gd"[1]

#  NOTE: GDScript is executed using the Godot Engine. The intended usecase of
#   the Godot Engine means that it expects a display and audio output. Using ssh
#   with the -Y flag allows a remote user to execute the scripts, but unless the
#   user also forwards PulseAudio in their own way, a harmless(probably) error
#   will be printed before the script is executed. This may be ignored unless
#   otherwise stated in the project's execution documentation.
#
#  works cited:
#  [1]Godot Docs, "docs.godotengine.org/en/latest/reference/command_line_tutorial.html"
