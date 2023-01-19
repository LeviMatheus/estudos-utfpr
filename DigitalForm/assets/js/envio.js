app = angular.module("envioDados",['ngRoute']);
app.directive("fileread", [function () {
    return {
        scope: {
            fileread: "="
        },
        link: function (scope, element, attributes) {
            element.bind("change", function (changeEvent) {
                scope.$apply(function () {
                    scope.fileread = changeEvent.target.files[0];
                    // or all selected files:
                    // scope.fileread = changeEvent.target.files;
                });
            });
        }
    }
}]);
//VARIAVEIS DOS ARQUIVOS E EXTENSAO
var oFile = document.getElementById("input1").files[0];
//alert(fileName);
//AJUSTANDO MENSAGENS DE AVISOS
var modalLoading = document.getElementById('loading');
var modalOK = document.getElementById('ok');
var modalError = document.getElementById('error');
var modalFile = document.getElementById('file');
//FECHANDO MODELS
var span = document.getElementsByClassName("close")[0];
var span1 = document.getElementsByClassName("close")[1];
var span2 = document.getElementsByClassName("close")[2];
var span3 = document.getElementsByClassName("close")[3];

function getFileExtension(filename)
{
    var ext = /^.+\.([^.]+)$/.exec(filename);
    return ext == null ? "" : ext[1];
}

span.onclick = function() {
    modalLoading.style.display = "none";
}
span1.onclick = function() {
    modalOK.style.display = "none";
}
span2.onclick = function() {
    modalError.style.display = "none";
}
span3.onclick = function() {
    modalFile.style.display = "none";
}
app.controller("candidatos", ["$scope", "$http", function($scope, $http, $sce) {
  $scope.candidato = {};
  $scope.arquivo = {};
  $scope.aw = function() {
    return $sce.trustAsResourceUrl("http://localhost:63406/api/Candidatos");    
  }
  $scope.addCandidato = function(){
    //conteudo
    $scope.candidato.nome = $scope.cNome;
    $scope.candidato.sobrenome = $scope.cSobrenome; 
    $scope.candidato.email = $scope.cEmail;  
    $scope.candidato.celular = $scope.cCelular;
    $scope.candidato.facebook = $scope.cFacebook;
    $scope.candidato.twitter = $scope.cTwitter;
    $scope.candidato.linkedin = $scope.cLinkedin;
    $scope.arquivo = $scope.arq;
      
    //extensao
    var ext = getFileExtension($scope.arq.name);
    if(ext !="pdf" && ext != "doc" && ext != "docx" && ext != "txt"){
        modalFile.style.display = "block";
        return;
    }
      
    //enviando
    modalLoading.style.display = "block";
    var fData = new FormData();
    fData.append('candidato', JSON.stringify($scope.candidato));
    fData.append('arquivo', $scope.arquivo);
    //console.log($scope.candidato);
    //console.log($scope.arquivo);
    $http.post('http://localhost:63406/api/Candidatos', fData, {
        transformRequest: angular.identity, 
        headers: {'Content-Type': undefined}
        })
        .then(function(){
            modalLoading.style.display = "none";
            modalOK.style.display = "block";
            return false;
        }, function errorCallback(response) {
            modalLoading.style.display = "none";
            modalError.style.display = "block";
            return true;
        });
    }; 
}]);