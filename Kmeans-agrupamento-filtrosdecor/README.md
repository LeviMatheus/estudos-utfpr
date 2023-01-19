<h1>Kmeans-agrupamento-filtrosdecor</h1>

![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)

<h4>Algoritmo K-means utilizando técnicas de Processamento de imagem aplicado sobre a imagem da Lena</h4>
<h5>Este código apresenta o histograma da imagem infomada</h5>

<p>É um algoritmo de aprendizado não supervisionado (ou seja, que não precisa de inputs de confirmação externos) que avalia e clusteriza os dados de acordo com suas características.</p>

<p>Como funciona?
Primeiro, preciso definir um ‘K’, ou seja, um número de clusters (ou agrupamentos).
Depois, preciso definir, aleatoriamente, um centroide para cada cluster.
O próximo passo é calcular, para cada ponto, o centroide de menor distância. Cada ponto pertencerá ao centroide mais próximo (lembrar do exemplo do CD logístico e das lojas: cada loja (ponto) deve ser atendida pelo CD (centróide) mais próximo)
Agora, devo reposicionar o centróide. A nova posição do centroide deve ser a média da posição de todos os pontos do cluster.
Os dois ultimos passos são repetidos, iterativamente, até obtermos a posição ideal dos centróides.</p>
