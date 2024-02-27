/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_sockets_option("TLS_SNI", "0");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

/*Correlation comment - Do not change!  Original value='3af88e7a869e9d2b.T2YmoTMZ9T6lruZsRCq1EWbPxpFLnTyQaPbM7xybYDA.C1Rn0Xp2wFT2-49ZIUP9WwH3l7wI93umAsCr2lr6TQMoAUDgUCqMac3HlQ' Name ='_token' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=_token",
		"LB=quot;",
		"RB=&quot",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/login*",
		LAST);

	web_url("opensource-demo.orangehrmlive.com", 
		"URL=https://opensource-demo.orangehrmlive.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("messages", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/core/i18n/messages", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
