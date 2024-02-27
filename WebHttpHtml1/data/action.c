Action()
{

	/* Login */

	web_submit_data("validate", 
		"Action=https://opensource-demo.orangehrmlive.com/web/index.php/auth/validate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_token", "Value=3af88e7a869e9d2b.T2YmoTMZ9T6lruZsRCq1EWbPxpFLnTyQaPbM7xybYDA.C1Rn0Xp2wFT2-49ZIUP9WwH3l7wI93umAsCr2lr6TQMoAUDgUCqMac3HlQ", ENDITEM, 
		"Name=username", "Value=Admin", ENDITEM, 
		"Name=password", "Value=admin123", ENDITEM, 
		LAST);

	web_url("time-at-work", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/time-at-work?timezoneOffset=5.5&currentDate=2024-02-27&currentTime=10:23", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("action-summary", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/action-summary", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortcuts", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/shortcuts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("feed", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/buzz/feed?limit=5&offset=0&sortOrder=DESC&sortField=share.createdAtUtc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("leaves", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/leaves?date=2024-02-27", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("locations", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/locations", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("subunit", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/subunit", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("push", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/events/push", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	/* Admin */

	web_url("viewAdminModule", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewAdminModule", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("users", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:RaIGkCLwdD3u_pPbUqf4Y3wu2gPzaYmlwqkqwRC4mf0&cup2hreq=8897f860ef916d91cbcb6605e785e35061131a7d59641fd16cdebedf7a431713", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{05ca17e4-845c-4a2e-bc42-19ffddc9e4ea}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{aa1aad2e-3575-4283-94d9-b670755cae18}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{bee3a802-9525-43d5-a554-7b0757411124}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{936e0830-dbd5-4f1f-8c14-811152602524}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{9954ca1c-2f25-4a7e-90d0-bf6b9bc602a6}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:2959@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.5bdc69c131996e6e6abeeba649e5a21c2f62a0b40bce413f8a728108c0d4fe06\"}]"
		"},\"ping\":{\"ping_freshness\":\"{b00c4476-04f5-47aa-b3a7-ad3f631edbe2}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"435\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{4b37128f-5212-412e-a5b0-3ab481a4b3e9}\",\"rd\":6265},\""
		"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.46b92bf5307e088ea1ef90e34fbf742f96913fceb07874a85814ca16443c1ba2\"}]},\"ping\":{\"ping_freshness\":\"{50e30efa-eb50-4a21-85bb-081747a808fa}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.23.0\"},{\"appid\":\""
		"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{0e278462-30ff-46b9-bfcf-88c8113e90cf}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\","
		"\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{03233833-6071-4a99-ab2b-556d425aa419}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":["
		"{\"fp\":\"1.2bbe3ea9e0deb819a944af91f663d6b00cd35ac607cbf6aa09aa71683616d39c\"}]},\"ping\":{\"ping_freshness\":\"{5c53f8f2-8331-4fa8-af10-622e906e0369}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"8570\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{b366c0ef-659a-40ed-972e-d0d4972a2da9}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{c6ab99ea-da57-41b0-b696-c8c082f9366e}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{37572203-5a55-4051-bec8-95f477478e49}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\","
		"\"packages\":{\"package\":[{\"fp\":\"1.1379eef506ab6fba0188245b16a8443df9500ddd8553bfb2f6f3903f4a7c6e1a\"}]},\"ping\":{\"ping_freshness\":\"{b2d610d4-d343-4345-b0bf-c53fdaf3fbc0}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"873\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\"ping_freshness\":\"{9b811de7-bfaa-4c8e-a3c3-5a008ac9f412}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\""
		"ping\":{\"ping_freshness\":\"{5e69970a-06c7-43f9-babc-f0a30e6ed962}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{fdac1196-b555-4234-8d09-63a74eb72eca}\",\"rd\":6265},\""
		"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{86a6cf32-91cb-4acd-8dbc-588b9e23ee20}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\","
		"\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3b3032a3bd20c3e81a87097ee894dce4d4d94fa1bc937483353981e48033c4f9\"}]},\"ping\":{\"ping_freshness\":\"{198396ce-e2f3-481a-8a95-6cc16a5fe0d0}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.23.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{5dcf7241-e565-4d7e-bdae-721b9b9cc662}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.5eb999428f0762c5d05ef5b922c551c2dc27c134c4d10fb57e27c24c28d00c5a\"}]},\"ping\":{\"ping_freshness\":\"{bbf0a91f-0b6a-4fd4-bfe7-f6778f4b5aec}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.21.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.189\",\"protocol\":\"3.1\",\"requestid\":\"{deeae7f7-132a-404a-b5a9-7613f209bd45}\",\"sessionid\":\"{4db31086-d71b-41b9-9eb7-cb1c727fa586}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.189\"}}", 
		LAST);

	lr_think_time(12);

	web_url("employees", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=test", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(12);

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"event\":[{\"download_time_ms\":24351,\"downloaded\":3692,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.2.26.0\",\"previousversion\":\"2024.2.23.0\",\"total\":3692,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"niikhdgajlphfehepabhhblakbdgeefj/1.e19e4ee6a456b7a340b8c31683061cda8005cd4a1414db5bbf68a8970003c034/1.46b92bf5307e088ea1ef90e34fbf742f96913fceb07874a85814ca16443c1ba2/c9ea1fe5eee198e5bd19191b7ee202f448a71fbe125f86fee55e4bdc421af99d.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.e19e4ee6a456b7a340b8c31683061cda8005cd4a1414db5bbf68a8970003c034\",\"nextversion\":\"2024.2.26.0\",\"previousfp\":\"1.46b92bf5307e088ea1ef90e34fbf742f96913fceb07874a85814ca16443c1ba2\",\""
		"previousversion\":\"2024.2.23.0\"}],\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.e19e4ee6a456b7a340b8c31683061cda8005cd4a1414db5bbf68a8970003c034\"}]},\"version\":\"2024.2.26.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.189\",\"protocol\":\"3.1\",\"requestid\":\"{97af243b-99ca-4890-bfcd-8d1dfb979d99}\",\"sessionid\":\"{4db31086-d71b-41b9-9eb7-cb1c727fa586}\",\"updaterversion\":\"121.0.6167.189\"}}", 
		LAST);

	web_url("employees_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=s", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("employees_3", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=test", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json_3", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"event\":[{\"download_time_ms\":4035,\"downloaded\":2141,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.2.25.1\",\"previousversion\":\"2024.2.23.1\",\"total\":2141,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"jflhchccmppkfebkiaminageehmchikm/1.1eee9613c0e9efbfb5cb4477e87850f87a5d7b7cafa4375273a34c90a4464a89/1.3b3032a3bd20c3e81a87097ee894dce4d4d94fa1bc937483353981e48033c4f9/aa284217461b94e86255f667d40f4caf136cdb4de48d1e6f4212a3d89d1123ba.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.1eee9613c0e9efbfb5cb4477e87850f87a5d7b7cafa4375273a34c90a4464a89\",\"nextversion\":\"2024.2.25.1\",\"previousfp\":\"1.3b3032a3bd20c3e81a87097ee894dce4d4d94fa1bc937483353981e48033c4f9\",\""
		"previousversion\":\"2024.2.23.1\"}],\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.1eee9613c0e9efbfb5cb4477e87850f87a5d7b7cafa4375273a34c90a4464a89\"}]},\"version\":\"2024.2.25.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.189\",\"protocol\":\"3.1\",\"requestid\":\"{a802e0b4-82dd-49a6-8a4c-306ac10fc8fc}\",\"sessionid\":\"{4db31086-d71b-41b9-9eb7-cb1c727fa586}\",\"updaterversion\":\"121.0.6167.189\"}}", 
		LAST);

	web_url("employees_4", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=test+xyz", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("users_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&username=testt&userRoleId=1&empNumber=117&status=1&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_url("employees_5", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=test", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("employees_6", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=test", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("users_3", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&username=testt&userRoleId=1&empNumber=102&status=1&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_url("users_4", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&username=testt&userRoleId=2&empNumber=102&status=1&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(20);

	web_url("employees_7", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=s", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("employees_8", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=es", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("employees_9", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=eh", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("users_5", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&username=admin&userRoleId=1&empNumber=70&status=1&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(20);

	web_url("employees_10", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=zdyzwxmwhzzdyzwxmw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("employees_11", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=z", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_url("users_6", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(30);

	web_url("employees_12", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=Orange+test", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("users_7", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&username=bumpal&userRoleId=1&empNumber=1&status=1&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	/* MyInfo */

	web_url("viewMyDetails", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewMyDetails", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("personal-details", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/personal-details", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("7", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attachments", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/screen/personal/attachments?limit=50&offset=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("custom-fields", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/custom-fields?screen=personal", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("employees_13", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(8);

	web_custom_request("personal-details_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/personal-details", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"Body={\"lastName\":\"ABC\",\"firstName\":\"Test\",\"middleName\":\"\",\"employeeId\":\"0024\",\"otherId\":\"\",\"drivingLicenseNo\":\"\",\"drivingLicenseExpiredDate\":\"2024-02-07\",\"gender\":1,\"maritalStatus\":\"Single\",\"birthday\":\"1988-10-15\",\"nationalityId\":82}", 
		LAST);

	return 0;
}
