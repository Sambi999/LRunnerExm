Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_url("opensource-demo.orangehrmlive.com", 
		"URL=https://opensource-demo.orangehrmlive.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("messages", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/core/i18n/messages", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=MnAOFDBFR25Voa33oElWlw%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01@\\x00H\\x07:%z00000157-2da7-5740-0000-000057da890cR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x83\\x01\n\\x80\\x01\\x12~Chrome WIN 121.0.6167.189 (060bb2de30fba0f496dd01e06bd9206029758654-refs/branch-heads/6167_184@{#2}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_submit_data("validate", 
		"Action=https://opensource-demo.orangehrmlive.com/web/index.php/auth/validate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_token", "Value=714b63.pcj61892-stgGlvXd7yIhstAx1uxmKkgWfTI6bLBawA.3I-9r5AFsqwmURDnQtS7sZ8WjSr32fljIL6anIv0Il_mgMyPgECWuBJyGg", ENDITEM, 
		"Name=username", "Value=Admin", ENDITEM, 
		"Name=password", "Value=admin123", ENDITEM, 
		LAST);

	web_url("time-at-work", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/time-at-work?timezoneOffset=5.5&currentDate=2024-02-26&currentTime=15:30", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("action-summary", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/action-summary", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortcuts", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/shortcuts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("feed", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/buzz/feed?limit=5&offset=0&sortOrder=DESC&sortField=share.createdAtUtc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("leaves", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/leaves?date=2024-02-26", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("locations", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/locations", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("subunit", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/subunit", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("push", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/events/push", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	/* MyInfo */

	web_url("viewMyDetails", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewMyDetails", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("7", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attachments", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/screen/personal/attachments?limit=50&offset=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("personal-details", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/personal-details", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("employees", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("custom-fields", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/custom-fields?screen=personal", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(8);

	web_custom_request("personal-details_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/personal-details", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body={\"lastName\":\"Tester\",\"firstName\":\"Bob\",\"middleName\":\"\",\"employeeId\":\"0024\",\"otherId\":\"\",\"drivingLicenseNo\":\"\",\"drivingLicenseExpiredDate\":\"2024-02-07\",\"gender\":1,\"maritalStatus\":\"Single\",\"birthday\":\"1988-10-15\",\"nationalityId\":82}", 
		LAST);

	lr_think_time(8);

	web_custom_request("custom-fields_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees/7/custom-fields", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"Body={\"custom1\":\"B+\",\"custom2\":null}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:oIPi17niL6PyUOc3tdvCpXpgwAawhT64HVhJdFE3Tvk&cup2hreq=e8c09f5d2612fcd48eb16105ff77d55d4283981aecbb30abbfcf4045f300fd09", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{1561f32d-b53e-48d9-a2eb-f4ffff4398bf}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{2d83eac8-accc-47f1-a8a0-3a74377c4b8e}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{b9b8dca0-3d70-4f34-8b77-e0b4f9eb60eb}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{23d912f7-e666-412b-bfed-9e9f827d2e91}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.5bdc69c131996e6e6abeeba649e5a21c2f62a0b40bce413f8a728108c0d4fe06\"}]},\"ping\":{\""
		"ping_freshness\":\"{b6b5e7d6-52c7-431f-992e-e62395fc2009}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"435\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\""
		"{e2bb576f-ec2d-4933-abe9-29117d159a2e}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.46b92bf5307e088ea1ef90e34fbf742f96913fceb07874a85814ca16443c1ba2\"}]},\"ping\":{\"ping_freshness\":\"{b11cd280-fe38-4c40-8289-e831cbaadada}\",\"rd\":6265},\""
		"updatecheck\":{},\"version\":\"2024.2.23.0\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{7bf31f6f-1d88-4c79-9cb3-639c9c5e1bef}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\""
		"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{11911d94-9819-4459-9416-4d3cfd37facb}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\","
		"\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{87bbefdd-87b3-4bd1-bebe-fd5a8c48a783}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":["
		"{\"fp\":\"1.2bbe3ea9e0deb819a944af91f663d6b00cd35ac607cbf6aa09aa71683616d39c\"}]},\"ping\":{\"ping_freshness\":\"{8f397d20-5602-4540-a21c-0bad96685e48}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"8570\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{c3f826e4-ddda-4458-b735-be081f5213a7}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{0d5f8414-cff2-4aac-a5d2-200659a135e5}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{281e8399-631f-4e99-aaf1-65e22190a316}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\","
		"\"packages\":{\"package\":[{\"fp\":\"1.1379eef506ab6fba0188245b16a8443df9500ddd8553bfb2f6f3903f4a7c6e1a\"}]},\"ping\":{\"ping_freshness\":\"{df4d916b-c58e-471d-9eca-b2783c4134d4}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"873\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{e8f3b80b-2282-466c-abd5-8c78d3c8b019}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\""
		"ping_freshness\":\"{0353a37f-14c5-49fb-8dcb-b7211d8f3664}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{db120491-e322-4cc2-ae96-7630e35edd26}\",\"rd\":6265},\""
		"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\"ping_freshness\":\"{934552bd-ecea-4356-ba40-fcccbfe3cab1}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3b3032a3bd20c3e81a87097ee894dce4d4d94fa1bc937483353981e48033c4f9\"}]},\"ping\":{\"ping_freshness\":\"{78c702d9-087e-4c0b-94a5-56156451fe9f}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.23.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{21a158ac-2833-4ade-9885-32aabe6be5d1}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.5eb999428f0762c5d05ef5b922c551c2dc27c134c4d10fb57e27c24c28d00c5a\"}]},\"ping\":{\"ping_freshness\":\"{6532471a-c39b-4827-b578-05f270cd4a23}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.21.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.189\",\"protocol\":\"3.1\",\"requestid\":\"{e0feb0c8-ed16-4971-9494-96282211666c}\",\"sessionid\":\"{45b50bf0-7370-4346-91ab-61cf1362707f}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.189\"}}", 
		LAST);

	/* Leave */

	web_url("viewLeaveModule", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveModule", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/pim/viewPersonalDetails/empNumber/7", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("leave-types", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/leave-types?limit=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("leave-requests", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/employees/leave-requests?limit=50&offset=0&includeEmployees=onlyCurrent", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek_3", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("leave-periods", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/leave-periods", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays_3", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek_4", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays_4", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(15);

	web_url("leave-requests_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/employees/leave-requests?limit=50&offset=0&fromDate=2024-01-01&toDate=2024-12-31&includeEmployees=onlyCurrent&statuses[]=1&statuses[]=-1&leaveTypeId=8", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_url("employees_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=e&includeEmployees=onlyCurrent", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("employees_3", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=eH&includeEmployees=onlyCurrent", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_url("leave-requests_3", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/employees/leave-requests?limit=50&offset=0&empNumber=70&fromDate=2024-01-01&toDate=2024-12-31&subunitId=2&includeEmployees=onlyCurrent&statuses[]=1&statuses[]=-1&leaveTypeId=8", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("leave-requests_4", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/employees/leave-requests?limit=50&offset=0&empNumber=70&fromDate=2024-01-01&toDate=2024-12-31&subunitId=2&includeEmployees=currentAndPast&statuses[]=1&statuses[]=-1&leaveTypeId=8", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_url("leave-requests_5", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/employees/leave-requests?limit=50&offset=0&empNumber=70&fromDate=2024-01-01&toDate=2024-12-31&subunitId=2&includeEmployees=currentAndPast&statuses[]=1&statuses[]=-1&leaveTypeId=8", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	/* Performance */

	web_url("viewPerformanceModule", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/performance/viewPerformanceModule", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/leave/viewLeaveList", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("reviews", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/performance/employees/reviews?limit=50&offset=0&sortField=performanceReview.statusId&sortOrder=ASC&fromDate=2024-01-01&toDate=2024-12-31&includeEmployees=onlyCurrent", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("job-titles", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/job-titles?limit=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("subunits", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/subunits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("workweek_5", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays_5", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek_6", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays_6", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("employees_4", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=eH&includeEmployees=onlyCurrent", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(15);

	web_url("reviews_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/performance/employees/reviews?limit=50&offset=0&sortField=performanceReview.statusId&sortOrder=ASC&empNumber=70&jobTitleId=22&subunitId=1&statusId=2&fromDate=2024-01-01&toDate=2024-12-31&includeEmployees=currentAndPast", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	web_url("index", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("subunit_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/subunit", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortcuts_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/shortcuts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("feed_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/buzz/feed?limit=5&offset=0&sortOrder=DESC&sortField=share.createdAtUtc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("leaves_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/leaves?date=2024-02-26", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("push_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/events/push", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("locations_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/locations", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("action-summary_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/action-summary", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("viewAdminModule", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewAdminModule", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("users", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(18);

	web_url("employees_5", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/pim/employees?nameOrId=rahul", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_url("users_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/users?limit=50&offset=0&username=rahul&userRoleId=2&empNumber=99&status=1&sortField=u.userName&sortOrder=ASC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/admin/viewSystemUsers", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}