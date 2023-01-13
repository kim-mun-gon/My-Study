let button = document.querySelector("button");

button.addEventListener("click", () => {
    let newp = document.createElement("p");
    let TextNode = document.createTextNode("Typescript");
    newp.appendChild(TextNode);

    let basis = document.querySelectorAll("p")[2];
    document.body.insertBefore(newp, basis);
}, {once : true});
