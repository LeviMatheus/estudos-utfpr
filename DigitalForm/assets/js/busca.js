//APP
var items = angular.module('buscarCandidatos', []);
var text = angular.module('download', []);
var del = angular.module('deleteCandidatos', []);
var pag = angular.module('angularTable', ['angularUtils.directives.dirPagination']);
var app = angular.module('candidatos', ['buscarCandidatos','download','deleteCandidatos','angularTable']);
//AJUSTANDO MENSAGENS DE AVISOS
var modalLoading = document.getElementById('loading');
var modalError = document.getElementById('error');
var modalDownload = document.getElementById('download');
//FECHANDO MODELS
var span = document.getElementsByClassName("close")[0];
var span1 = document.getElementsByClassName("close")[1];
var span2 = document.getElementsByClassName("close")[2];
//FECHANDO
span.onclick = function() {
    modalLoading.style.display = "none";
}
span1.onclick = function() {
    modalError.style.display = "none";
    location.reload();
}
span2.onclick = function() {
    modalDownload.style.display = "none";
}

//BUSCANDO
app.controller('buscarCandidatos', function($scope, $http) {
    modalLoading.style.display = "block";
    $http.get("http://localhost:63406/api/Candidatos")
    .then(function(response) {
        modalLoading.style.display = "none";
        $scope.candidatos = response.data;
    }, function errorCallback(response) {
        modalLoading.style.display = "none";
        modalError.style.display = "block";
    });
    $scope.sort = function(keyname){
        $scope.sortKey = keyname;   //set the sortKey to the param passed
        $scope.reverse = !$scope.reverse; //if true make it false and vice versa
    }
});

//DELETE
app.controller('deleteCandidatos', function($scope, $http, $window) {
    $scope.deletar = function(){
        //window.alert($scope.candidato);
        console.log($scope.candidato.id);
        modalLoading.style.display = "block";
        $http.delete("http://localhost:63406/api/Candidatos/" + $scope.candidato.id)
        .then(function(response) {
            modalLoading.style.display = "none";
            location.reload();
        }, function errorCallback(response) {
            modalError.style.display = "block";
        });
    };
    $scope.reloadRoute = function() {
        $window.location.reload();
    }
});

//DOWNLOAD
app.controller('download', function($scope, $http) {
    $scope.downloadFiles = function(file){
        modalDownload.style.display = "block";
        $http.get("http://localhost:63406/api/Candidatos/Download", {
            cache: false,
            responseType:'arraybuffer',
            headers: {
                'Content-Type': 'application/json; charset=utf-8',
                'id': file.id
            }
        }).then(function(response) {
            //modalDownload.style.display = "none";
            var arq = file.fname + '.' + file.fext;
            var fl = new Blob([response.data], {type: 'application/' + file.fext});
            var isChrome = !!window.chrome && !!window.chrome.webstore;
            var isIE = /*@cc_on!@*/false || !!document.documentMode;
            var isEdge = !isIE && !!window.StyleMedia;
            if (isChrome){
                var url = window.URL || window.webkitURL;
                var downloadLink = angular.element('<a></a>');
                downloadLink.attr('href',url.createObjectURL(fl));
                downloadLink.attr('target','_self');
                downloadLink.attr('download', arq);
                downloadLink[0].click();
            }
            else if(isEdge || isIE){
                window.navigator.msSaveOrOpenBlob(arq);

            }
            else {
                var fileURL = URL.createObjectURL(fl);
                window.open(fileURL);
            }
            console.log(response);
            //window.open(response, '_blank', '');
        }, function errorCallback(response) {
            modalDownload.style.display = "none";
            modalError.style.display = "block";
            console.log(response);
        });
    };
});