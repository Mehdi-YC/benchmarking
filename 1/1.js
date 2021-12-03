let s = 0
for (let i=0;i<=process.argv.slice(2)[0];i++){
    //console.log(i,"->",s)
    s=s+(i+i*i^i)%(i+1)
}
console.log(s)