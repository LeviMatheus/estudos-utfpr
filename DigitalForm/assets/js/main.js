"use strict";

document.addEventListener('DOMContentLoaded', function () {
    $('#input1').filestyle({
        text : 'Selecionar',
        'placeholder' : '(.doc, .docx, .pdf, .txt)',
        btnClass: "btn-success",
        size: "lg"
    });
});

function validate(evt) {
  var theEvent = evt || window.event;
  var key = theEvent.keyCode || theEvent.which;
  key = String.fromCharCode( key );
  var regex = /[a-z,A-Z,' ']|\./;
  if( !regex.test(key) ) {
    theEvent.returnValue = false;
    if(theEvent.preventDefault) theEvent.preventDefault();
  }
}

function getFileExtension(filename)
{
    var ext = /^.+\.([^.]+)$/.exec(filename);
    return ext == null ? "" : ext[1];
}

function update(){
    var id,name,last,mail,phone,face,twitter,linkedin,curriculo;
    id = '2';
    name = document.getElementById("f1-first-name").value;
    last = document.getElementById("f1-last-name").value;
    mail = document.getElementById("f1-email").value;
    phone = document.getElementById("f1-phone").value;
    face = document.getElementById("f1-facebook").value;
    twitter = document.getElementById("f1-twitter").value;
    linkedin = document.getElementById("f1-linkedin").value;
    curriculo = document.getElementById("input1").value;
    $.ajax({
       type: 'PUT',    
        url:'http://localhost:63406/api/Candidatoes/Atualizar',
        data:'ID='+ id +'&Nome='+ name +'&Sobrenome='+ last
        +'&Email=' + mail + '&Celular=' + phone +
        '&Facebook=' + face + '&Twitter=' + twitter +
        '&Linkedin=' + linkedin + '&Curriculo=' + curriculo,
        success: function(msg){
        alert('wow' + msg);
             }
         });
}

function ocultar(){
    var dv_social = document.getElementById("menusociais");
    if(dv_social.classList.contains("collapse")){
        dv_social.classList.remove("collapse");
    }else{
        dv_social.classList.add("collapse");
    }
}

document.getElementById("f1-phone")
    .addEventListener("keyup", function(event) {
    event.preventDefault();
    if (event.keyCode == 13) {
        document.getElementById("nextEnter1").click();
    }
});

document.getElementById("f1-linkedin")
    .addEventListener("keyup", function(event) {
    event.preventDefault();
    if (event.keyCode == 13) {
        document.getElementById("nextEnter2").click();
    }
});