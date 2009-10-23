/****************************************************************************
			 _             _                             
			| |           | |                            
		  _ | | ___  _   _| | _   ____ ____   ____  ___  
		 / || |/ _ \| | | | || \ / _  |  _ \ / _  |/ _ \ 
		( (_| | |_| | |_| | |_) | ( | | | | ( ( | | |_| |
		 \____|\___/ \____|____/ \_||_|_| |_|\_|| |\___/ 
											(_____|   
	
	Copyright (C) 2009 xxxyyyzzz <imsframework(at)gmail.com>

	This file is part of Open Source Doubango IMS Client Framework project.

    DOUBANGO is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
	
    DOUBANGO is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.
	
    You should have received a copy of the GNU General Public License
    along with DOUBANGO.
****************************************************************************/
#ifndef _DOUBANGO_API_SIP_REGISTRATION_H_
#define _DOUBANGO_API_SIP_REGISTRATION_H_

#include "pref.h"
#include "api_errors.h"

PREF_NAMESPACE_START

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// sip REGISTER
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR sip_register(int stack_id);
DOUBANGO_API_C ERR sip_unregister(int stack_id);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// sip MESSAGE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR sip_message(int stack_id, const char* dest_address, const char* content_type, const char* content);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// sip PUBLISH
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR sip_publish(int stack_id);
DOUBANGO_API_C ERR sip_unpublish(int stack_id);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// sip SUBSCRIBE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR sip_subscribe(int stack_id, const char* dest_address, const char* eventpackg, const char* allow, int eventlist, unsigned int* dialog_id);
DOUBANGO_API_C ERR sip_unsubscribe(int stack_id, unsigned int dialog_id);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// authentication
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR auth_set(int stack_id, const char* public_id, const char* private_id, const char* password, const char* realm);
DOUBANGO_API_C ERR auth_set_displayname(int stack_id, const char* displayname);
DOUBANGO_API_C ERR auth_set_public_id(int stack_id, const char* public_id);
DOUBANGO_API_C ERR auth_set_private_id(int stack_id, const char* private_id);
DOUBANGO_API_C ERR auth_set_preferred_id(int stack_id, const char* preferred_id);
DOUBANGO_API_C ERR auth_set_password(int stack_id, const char* password);
DOUBANGO_API_C ERR auth_set_realm(int stack_id, const char* realm);
DOUBANGO_API_C ERR auth_set_operator_id(int stack_id, const char* operator_id);
DOUBANGO_API_C ERR auth_set_amf(int stack_id, const char* amf);
DOUBANGO_API_C ERR auth_set_privacy(int stack_id, const char* privacy);
DOUBANGO_API_C ERR auth_set_security_mechanism(int stack_id, const char* security_mechanism);
DOUBANGO_API_C ERR auth_set_early_ims(int stack_id, bool early_ims);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// network
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR network_set(int stack_id, const char* pcscf, int pcscf_port, const char* transport);
DOUBANGO_API_C ERR network_set_pcscf(int stack_id, const char* pcscf, int pcscf_port);
DOUBANGO_API_C ERR network_set_transport(int stack_id, const char* transport);
DOUBANGO_API_C ERR network_set_net_info(int stack_id, const char* net_info);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// qos
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR qos_set_audio_bandwith(int stack_id, int audio_bandwith);
DOUBANGO_API_C ERR qos_set_audio_dscp(int stack_id, int audio_dscp);
DOUBANGO_API_C ERR qos_set_video_bandwith(int stack_id, int video_bandwith);
DOUBANGO_API_C ERR qos_set_video_dscp(int stack_id, int video_dscp);
DOUBANGO_API_C ERR qos_set_msrp_bandwith(int stack_id, int msrp_bandwith);
DOUBANGO_API_C ERR qos_set_msrp_dscp(int stack_id, int msrp_dscp);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ipsec
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR ipsec_set(int stack_id, const char* mode, const char* protocol, const char* auth_algo, const char* enc_algo);
DOUBANGO_API_C ERR ipsec_set_mode(int stack_id, const char* mode);
DOUBANGO_API_C ERR ipsec_set_protocol(int stack_id, const char* protocol);
DOUBANGO_API_C ERR ipsec_set_auth_algo(int stack_id, const char* auth_algo);
DOUBANGO_API_C ERR ipsec_set_enc_algo(int stack_id, const char* enc_algo);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// tls
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR tls_set_priv_key_path(int stack_id, const char* priv_key_path);
DOUBANGO_API_C ERR tls_set_pub_key_path(int stack_id, const char* pub_key_path);
DOUBANGO_API_C ERR tls_set_cert_path(int stack_id, const char* cert_path);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// sigcomp
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DOUBANGO_API_C ERR sigcomp_set_comp_id(int stack_id, const char* comp_id);
DOUBANGO_API_C ERR sigcomp_enable_sipdict(int stack_id, bool enable);
DOUBANGO_API_C ERR sigcomp_enable_presdict(int stack_id, bool enable);
DOUBANGO_API_C ERR sigcomp_set_dms(int stack_id, int dms);
DOUBANGO_API_C ERR sigcomp_set_sms(int stack_id, int sms);
DOUBANGO_API_C ERR sigcomp_set_cpb(int stack_id, int cpb);

PREF_NAMESPACE_END

#endif /* _DOUBANGO_API_SIP_REGISTRATION_H_ */