vuser_end()
{

	/* LogOut */

	web_url("logout", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/auth/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}