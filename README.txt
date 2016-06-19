-- SUMMARY --

This module provides integration with Postmark inbound parse email processing.

-- FEATURES --

The main module provides 'Incoming message is received' event for Rules module 
with related variables.

Also it has integration with some modules:
  * Privatemsg - Users will be able reply to private messages by email.

-- REQUIREMENTS --

* Rules

-- INSTALLATION --

1. Enable 'Postmark Inbound' module.
2. Go to 'admin/config/services/postmark/inbound' page and add email domain. 
 (e.g. in.example.com)
3. Go to the Settings tab of you Postmark server, and the "Inbound" subtab. 
Set the Inbound Webhook to be the URL of your domain + 
 /postmark/webhook/inbound, 
 e.g.  http://www.example.com/postmark/webhook/inbound

 NOTE: It is important that your webhook URL be the exact url that your 
 website will locate the hook at, i.e. if you redirect http://example.com to
 https://www.example.com, then you need to use the latter, otherwise your
 calls will fail with a 301 permanently moved response code.

-- FEATURES --
There is a hook_postmark_inbound_alter API which allows you to change the 
message before rules are triggered. postmark_inbound itself implements this 
and strips out all of the quoted text in the message.
