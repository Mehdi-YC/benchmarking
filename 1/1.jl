s = 0
for i in 0:parse(Int64,ARGS[1])
    #rintln(i,"->",s)
    global s+=(i+i*i^i)%(i+1)
end
println(s)