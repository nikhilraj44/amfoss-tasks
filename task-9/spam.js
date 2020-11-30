var message = "Hi"; //spam message 
var interval = 1  ; // in seconds 
var count = 100; //send "Hi" 100 times
var i = 0 ;
//function to send message
var timer = setInterval(function(){
	document.getElementsByClassName('composer_rich_textarea')[0].innerHTML = message;
	$('.im_submit').trigger('mousedown');	 
	i++;
	if( i  == count )
	clearInterval(timer);
} , interval * 1000 ) ;
