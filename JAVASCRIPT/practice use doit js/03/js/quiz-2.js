let num = parseInt(prompt("1보다 큰 숫자를 입력하세여."));
let sum = 0
if(num == null){
    document.write("입력을 안함");
}
else{
    for(let i = 2; i <= num; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
            document.write(`${i} ----- ${sum} <br>`);
        }
    }
}