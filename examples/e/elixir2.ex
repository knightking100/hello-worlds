first = fn -> "Hello" end
last = fn a -> "#{a} World!" end

first.() |> last.()