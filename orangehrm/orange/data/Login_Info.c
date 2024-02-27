Login_Info()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_url("opensource-demo.orangehrmlive.com", 
		"URL=https://opensource-demo.orangehrmlive.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("messages", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/core/i18n/messages", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_submit_data("validate", 
		"Action=https://opensource-demo.orangehrmlive.com/web/index.php/auth/validate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_token", "Value=5d068bb9c806b1e10.0IhT7o5Pcm1Q7ExPNRKxB-BtcI4Ka50wo218J7EZLbs.lPsfivw9IgshgToMQ3yCNbEKROEnKvJJ9Dc3f4RcW4-25xemyQoiORqEIw", ENDITEM, 
		"Name=username", "Value=Admin", ENDITEM, 
		"Name=password", "Value=admin123", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("action-summary", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/action-summary", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_url("time-at-work", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/time-at-work?timezoneOffset=5.5&currentDate=2024-02-27&currentTime=10:01", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("shortcuts", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/shortcuts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_url("feed", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/buzz/feed?limit=5&offset=0&sortOrder=DESC&sortField=share.createdAtUtc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("subunit", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/subunit", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_url("leaves", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/leaves?date=2024-02-27", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_url("locations", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/locations", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("push", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/events/push", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	/* Admin */

	web_url("viewAdminModule", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewAdminModule", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_url("users", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(19);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:2N92eZ2mdsaqI_Hw3GSDFLU1r6C3xr3OGizxQA2xzgs&cup2hreq=01e36d3c243efb3a68a85799918face1354f9a153c518ff865621c7d15e66302", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{91020ffe-55f5-4e0c-a2cf-a150bf254fde}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{ba423cb0-27ae-4f9d-987a-1412d433ad15}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\""
		":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{4132eb47-d263-4a20-a8d4-dac443fa4e48}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887"
		",\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{87447c06-0fcd-47e4-ad58-4440f88b6fb5}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.5bdc69c131996e6e6abeeba649e5a21c2f62a0b40bce413f8a728108c0d4fe06\"}]},\"ping\":{\"ping_freshness\":\"{6fbe3686-0bf8-403b-aded-e930e7481230}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"435\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\""
		"ping_freshness\":\"{8fb3ee5c-41c9-47c4-ba28-01a2041b910c}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.46b92bf5307e088ea1ef90e34fbf742f96913fceb07874a85814ca16443c1ba2\"}]},\"ping\":{\"ping_freshness\":\"{1c42de6e-c94e-40c2-834d-2a83d45cdcf8}\",\"rd\":6265},\""
		"updatecheck\":{},\"version\":\"2024.2.23.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{f7fb5524-8123-4a17-8a4d-27ad224d69a5}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{5bd7760d-f770-47cc-a926-93c2ad2c29ed}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.2bbe3ea9e0deb819a944af91f663d6b00cd35ac607cbf6aa09aa71683616d39c\"}]},\"ping\":{\"ping_freshness\":\"{a9e2c380-7496-4332-8bb0-3ea5db165e48}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"8570\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{ffecd2de-5448-4e43-b489-b260b27e42a3}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{2d7d886a-abcf-4b2f-a3c2-9b1de4efafeb}\",\"rd\":6265},\"updatecheck\":{},\"version\":\""
		"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{0d1a33f4-a76c-42d1-8a05-1e3ed7147172}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\","
		"\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.1379eef506ab6fba0188245b16a8443df9500ddd8553bfb2f6f3903f4a7c6e1a\"}]},\"ping\":{\"ping_freshness\":\"{e21cbb07-f154-48e6-ac8b-1b68df06686e}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"873\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\""
		"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\"ping_freshness\":\"{f0abe513-f64a-4009-8759-e8a1c5287305}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{72cdfede-3367-4c66-ab08-a08d2d61c4df}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\""
		"ping_freshness\":\"{2e60ddb1-8cec-46b4-802e-d1f752072e70}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{bae49a78-51c4-4e03-9f90-346aed0e588d}\",\"rd\":6265},\""
		"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{45c13e70-7144-45a8-b5a2-2e18315aeaff}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,"
		"\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3b3032a3bd20c3e81a87097ee894dce4d4d94fa1bc937483353981e48033c4f9\"}]},\"ping\":{\"ping_freshness\":\"{04dbb336-defc-41fd-89f8-b1b18845974b}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.23.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{9c27f963-e333-4562-a857-c230224d4876}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.5eb999428f0762c5d05ef5b922c551c2dc27c134c4d10fb57e27c24c28d00c5a\"}]},\"ping\":{\""
		"ping_freshness\":\"{1c5eae9c-1d0e-4e0c-9853-8efaff6cd844}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.21.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.189\",\"protocol\":\"3.1\",\""
		"requestid\":\"{fa6d2081-a778-4f39-b601-f111db5cadf4}\",\"sessionid\":\"{c9b7f978-7a12-4d99-9120-5272072e523e}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.189\"}}", 
		LAST);

	lr_think_time(17);

	web_url("employees", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=savi", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(11);

	web_url("users_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&username=savi22dsd&userRoleId=2&empNumber=80&status=0&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}