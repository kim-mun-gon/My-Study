function getGCD(num1, num2)
{
    let cnt = num1 > num2 ? num1 : num2;
    let gcd = 0;
    for(let i = 0; i < cnt; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    return gcd;
}

console.log(`308과 20의 최대공약수 : ${getGCD(308, 20)}`);
console.log(`45과 38의 최대공약수 : ${getGCD(45, 38)}`);