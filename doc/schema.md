 ```
 |-- complete: string (nullable = true)
 |-- dhcp: struct (nullable = true)
 |    |-- client_id: struct (nullable = true)
 |    |    |-- address: string (nullable = true)
 |    |    |-- hw_type: string (nullable = true)
 |    |    |-- oui: string (nullable = true)
 |    |-- hostname: string (nullable = true)
 |    |-- msg_type: string (nullable = true)
 |    |-- requested_address: string (nullable = true)
 |    |-- vendor_class_id: string (nullable = true)
 |-- dns: struct (nullable = true)
 |    |-- base64: string (nullable = true)
 |-- dst_ip: string (nullable = true)
 |-- dst_port: long (nullable = true)
 |-- dtls: struct (nullable = true)
 |    |-- client: struct (nullable = true)
 |    |    |-- cipher_suites: string (nullable = true)
 |    |    |-- compression_methods: string (nullable = true)
 |    |    |-- random: string (nullable = true)
 |    |    |-- server_name: string (nullable = true)
 |    |    |-- session_id: string (nullable = true)
 |    |    |-- session_ticket: string (nullable = true)
 |    |    |-- version: string (nullable = true)
 |-- event_start: double (nullable = true)
 |-- fingerprints: struct (nullable = true)
 |    |-- dhcp: string (nullable = true)
 |    |-- dtls: string (nullable = true)
 |    |-- dtls_server: string (nullable = true)
 |    |-- http: string (nullable = true)
 |    |-- http_server: string (nullable = true)
 |    |-- quic: string (nullable = true)
 |    |-- ssh: string (nullable = true)
 |    |-- ssh_kex: string (nullable = true)
 |    |-- tcp: string (nullable = true)
 |    |-- tls: string (nullable = true)
 |    |-- tls_server: string (nullable = true)
 |-- http: struct (nullable = true)
 |    |-- request: struct (nullable = true)
 |    |    |-- host: string (nullable = true)
 |    |    |-- method: string (nullable = true)
 |    |    |-- protocol: string (nullable = true)
 |    |    |-- upgrade: string (nullable = true)
 |    |    |-- uri: string (nullable = true)
 |    |    |-- user_agent: string (nullable = true)
 |    |    |-- via: string (nullable = true)
 |    |    |-- x_forwarded_for: string (nullable = true)
 |    |-- response: struct (nullable = true)
 |    |    |-- content_length: string (nullable = true)
 |    |    |-- content_type: string (nullable = true)
 |    |    |-- server: string (nullable = true)
 |    |    |-- status_code: string (nullable = true)
 |    |    |-- status_reason: string (nullable = true)
 |    |    |-- version: string (nullable = true)
 |    |    |-- via: string (nullable = true)
 |-- protocol: long (nullable = true)
 |-- quic: struct (nullable = true)
 |    |-- connection_info: string (nullable = true)
 |    |-- version: string (nullable = true)
 |    |-- dcid: string (nullable = true)
 |    |-- scid: string (nullable = true)
 |    |-- token: string (nullable = true)
 |    |-- data: string (nullable = true)
 |-- src_ip: string (nullable = true)
 |-- src_port: long (nullable = true)
 |-- ssh: struct (nullable = true)
 |    |-- init: struct (nullable = true)
 |    |    |-- comment: string (nullable = true)
 |    |    |-- protocol: string (nullable = true)
 |    |-- kex: struct (nullable = true)
 |    |    |-- compression_algorithms_client_to_server: string (nullable = true)
 |    |    |-- compression_algorithms_server_to_client: string (nullable = true)
 |    |    |-- encryption_algorithms_client_to_server: string (nullable = true)
 |    |    |-- encryption_algorithms_server_to_client: string (nullable = true)
 |    |    |-- kex_algorithms: string (nullable = true)
 |    |    |-- languages_client_to_server: string (nullable = true)
 |    |    |-- languages_server_to_client: string (nullable = true)
 |    |    |-- mac_algorithms_client_to_server: string (nullable = true)
 |    |    |-- mac_algorithms_server_to_client: string (nullable = true)
 |    |    |-- server_host_key_algorithms: string (nullable = true)
 |-- tcp: struct (nullable = true)
 |    |-- data: string (nullable = true)
 |    |-- seq: long (nullable = true)
 |    |-- timestamp: struct (nullable = true)
 |    |    |-- ts_ecr: long (nullable = true)
 |    |    |-- ts_val: long (nullable = true)
 |-- tls: struct (nullable = true)
 |    |-- client: struct (nullable = true)
 |    |    |-- cipher_suites: string (nullable = true)
 |    |    |-- compression_methods: string (nullable = true)
 |    |    |-- random: string (nullable = true)
 |    |    |-- server_name: string (nullable = true)
 |    |    |-- session_id: string (nullable = true)
 |    |    |-- session_ticket: string (nullable = true)
 |    |    |-- version: string (nullable = true)
 |    |-- server: struct (nullable = true)
 |    |    |-- certs: array (nullable = true)
 |    |    |    |-- element: struct (containsNull = true)
 |    |    |    |    |-- base64: string (nullable = true)
 |    |    |-- compression_method: string (nullable = true)
 |    |    |-- random: string (nullable = true)
 |    |    |-- session_ticket: string (nullable = true)
 |    |    |-- version: string (nullable = true)
 |-- wireguard: struct (nullable = true)
 |    |-- sender_index: string (nullable = true)
 ```
