document.addEventListener("DOMContentLoaded", () => {
    const galeria = document.querySelector(".galeria");
    const produtos = document.querySelectorAll(".produto");
    const prevBtn = document.getElementById("prev");
    const nextBtn = document.getElementById("next");

    let index = 0;
    const totalProdutos = produtos.length;

    // Ajusta a largura da galeria dinamicamente
    galeria.style.width = $;{ totalProdutos * 300 } px;

    function updateCarrossel() {
        galeria.style.transform = 'translateX(${-index * 300}px)';
    }

    nextBtn.addEventListener("click", () => {
        index = (index + 1) % totalProdutos;
        updateCarrossel();
    });

    prevBtn.addEventListener("click", () => {
        index = (index - 1 + totalProdutos) % totalProdutos;
        updateCarrossel();
    });

    // Muda automaticamente a cada 3 segundos
    setInterval(() => {
        index = (index + 1) % totalProdutos;
        updateCarrossel();
    }, 3000);
});