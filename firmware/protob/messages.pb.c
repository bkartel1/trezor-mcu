/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.9.3 */

#include "messages.pb.h"

const char GetPublicKey_coin_name_default[17] = "Bitcoin";
const char GetAddress_coin_name_default[17] = "Bitcoin";
const InputScriptType GetAddress_script_type_default = InputScriptType_SPENDADDRESS;
const char LoadDevice_language_default[17] = "english";
const uint32_t ResetDevice_strength_default = 256u;
const char ResetDevice_language_default[17] = "english";
const char RecoveryDevice_language_default[17] = "english";
const char SignMessage_coin_name_default[17] = "Bitcoin";
const char VerifyMessage_coin_name_default[17] = "Bitcoin";
const char EncryptMessage_coin_name_default[17] = "Bitcoin";
const char EstimateTxSize_coin_name_default[17] = "Bitcoin";
const char SignTx_coin_name_default[17] = "Bitcoin";
const uint32_t SignTx_version_default = 1u;
const uint32_t SignTx_lock_time_default = 0u;


const pb_field_t Initialize_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t GetFeatures_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t Features_fields[19] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, Features, vendor, vendor, 0),
    PB_FIELD2(  2, UINT32  , OPTIONAL, STATIC  , OTHER, Features, major_version, vendor, 0),
    PB_FIELD2(  3, UINT32  , OPTIONAL, STATIC  , OTHER, Features, minor_version, major_version, 0),
    PB_FIELD2(  4, UINT32  , OPTIONAL, STATIC  , OTHER, Features, patch_version, minor_version, 0),
    PB_FIELD2(  5, BOOL    , OPTIONAL, STATIC  , OTHER, Features, bootloader_mode, patch_version, 0),
    PB_FIELD2(  6, STRING  , OPTIONAL, STATIC  , OTHER, Features, device_id, bootloader_mode, 0),
    PB_FIELD2(  7, BOOL    , OPTIONAL, STATIC  , OTHER, Features, pin_protection, device_id, 0),
    PB_FIELD2(  8, BOOL    , OPTIONAL, STATIC  , OTHER, Features, passphrase_protection, pin_protection, 0),
    PB_FIELD2(  9, STRING  , OPTIONAL, STATIC  , OTHER, Features, language, passphrase_protection, 0),
    PB_FIELD2( 10, STRING  , OPTIONAL, STATIC  , OTHER, Features, label, language, 0),
    PB_FIELD2( 11, MESSAGE , REPEATED, STATIC  , OTHER, Features, coins, label, &CoinType_fields),
    PB_FIELD2( 12, BOOL    , OPTIONAL, STATIC  , OTHER, Features, initialized, coins, 0),
    PB_FIELD2( 13, BYTES   , OPTIONAL, STATIC  , OTHER, Features, revision, initialized, 0),
    PB_FIELD2( 14, BYTES   , OPTIONAL, STATIC  , OTHER, Features, bootloader_hash, revision, 0),
    PB_FIELD2( 15, BOOL    , OPTIONAL, STATIC  , OTHER, Features, imported, bootloader_hash, 0),
    PB_FIELD2( 16, BOOL    , OPTIONAL, STATIC  , OTHER, Features, pin_cached, imported, 0),
    PB_FIELD2( 17, BOOL    , OPTIONAL, STATIC  , OTHER, Features, passphrase_cached, pin_cached, 0),
    PB_FIELD2( 18, BOOL    , OPTIONAL, STATIC  , OTHER, Features, firmware_present, passphrase_cached, 0),
    PB_LAST_FIELD
};

const pb_field_t ClearSession_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t ApplySettings_fields[5] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, ApplySettings, language, language, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, ApplySettings, label, language, 0),
    PB_FIELD2(  3, BOOL    , OPTIONAL, STATIC  , OTHER, ApplySettings, use_passphrase, label, 0),
    PB_FIELD2(  4, BYTES   , OPTIONAL, STATIC  , OTHER, ApplySettings, homescreen, use_passphrase, 0),
    PB_LAST_FIELD
};

const pb_field_t ChangePin_fields[2] = {
    PB_FIELD2(  1, BOOL    , OPTIONAL, STATIC  , FIRST, ChangePin, remove, remove, 0),
    PB_LAST_FIELD
};

const pb_field_t Ping_fields[5] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, Ping, message, message, 0),
    PB_FIELD2(  2, BOOL    , OPTIONAL, STATIC  , OTHER, Ping, button_protection, message, 0),
    PB_FIELD2(  3, BOOL    , OPTIONAL, STATIC  , OTHER, Ping, pin_protection, button_protection, 0),
    PB_FIELD2(  4, BOOL    , OPTIONAL, STATIC  , OTHER, Ping, passphrase_protection, pin_protection, 0),
    PB_LAST_FIELD
};

const pb_field_t Success_fields[2] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, Success, message, message, 0),
    PB_LAST_FIELD
};

const pb_field_t Failure_fields[3] = {
    PB_FIELD2(  1, ENUM    , OPTIONAL, STATIC  , FIRST, Failure, code, code, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, Failure, message, code, 0),
    PB_LAST_FIELD
};

const pb_field_t ButtonRequest_fields[3] = {
    PB_FIELD2(  1, ENUM    , OPTIONAL, STATIC  , FIRST, ButtonRequest, code, code, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, ButtonRequest, data, code, 0),
    PB_LAST_FIELD
};

const pb_field_t ButtonAck_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t PinMatrixRequest_fields[2] = {
    PB_FIELD2(  1, ENUM    , OPTIONAL, STATIC  , FIRST, PinMatrixRequest, type, type, 0),
    PB_LAST_FIELD
};

const pb_field_t PinMatrixAck_fields[2] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, PinMatrixAck, pin, pin, 0),
    PB_LAST_FIELD
};

const pb_field_t Cancel_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t PassphraseRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t PassphraseAck_fields[2] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, PassphraseAck, passphrase, passphrase, 0),
    PB_LAST_FIELD
};

const pb_field_t GetEntropy_fields[2] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC  , FIRST, GetEntropy, size, size, 0),
    PB_LAST_FIELD
};

const pb_field_t Entropy_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC  , FIRST, Entropy, entropy, entropy, 0),
    PB_LAST_FIELD
};

const pb_field_t GetPublicKey_fields[5] = {
    PB_FIELD2(  1, UINT32  , REPEATED, STATIC  , FIRST, GetPublicKey, address_n, address_n, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, GetPublicKey, ecdsa_curve_name, address_n, 0),
    PB_FIELD2(  3, BOOL    , OPTIONAL, STATIC  , OTHER, GetPublicKey, show_display, ecdsa_curve_name, 0),
    PB_FIELD2(  4, STRING  , OPTIONAL, STATIC  , OTHER, GetPublicKey, coin_name, show_display, &GetPublicKey_coin_name_default),
    PB_LAST_FIELD
};

const pb_field_t PublicKey_fields[3] = {
    PB_FIELD2(  1, MESSAGE , REQUIRED, STATIC  , FIRST, PublicKey, node, node, &HDNodeType_fields),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, PublicKey, xpub, node, 0),
    PB_LAST_FIELD
};

const pb_field_t GetAddress_fields[6] = {
    PB_FIELD2(  1, UINT32  , REPEATED, STATIC  , FIRST, GetAddress, address_n, address_n, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, GetAddress, coin_name, address_n, &GetAddress_coin_name_default),
    PB_FIELD2(  3, BOOL    , OPTIONAL, STATIC  , OTHER, GetAddress, show_display, coin_name, 0),
    PB_FIELD2(  4, MESSAGE , OPTIONAL, STATIC  , OTHER, GetAddress, multisig, show_display, &MultisigRedeemScriptType_fields),
    PB_FIELD2(  5, ENUM    , OPTIONAL, STATIC  , OTHER, GetAddress, script_type, multisig, &GetAddress_script_type_default),
    PB_LAST_FIELD
};

const pb_field_t EthereumGetAddress_fields[3] = {
    PB_FIELD2(  1, UINT32  , REPEATED, STATIC  , FIRST, EthereumGetAddress, address_n, address_n, 0),
    PB_FIELD2(  2, BOOL    , OPTIONAL, STATIC  , OTHER, EthereumGetAddress, show_display, address_n, 0),
    PB_LAST_FIELD
};

const pb_field_t Address_fields[2] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, Address, address, address, 0),
    PB_LAST_FIELD
};

const pb_field_t EthereumAddress_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC  , FIRST, EthereumAddress, address, address, 0),
    PB_LAST_FIELD
};

const pb_field_t WipeDevice_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t LoadDevice_fields[9] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, LoadDevice, mnemonic, mnemonic, 0),
    PB_FIELD2(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, LoadDevice, node, mnemonic, &HDNodeType_fields),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, LoadDevice, pin, node, 0),
    PB_FIELD2(  4, BOOL    , OPTIONAL, STATIC  , OTHER, LoadDevice, passphrase_protection, pin, 0),
    PB_FIELD2(  5, STRING  , OPTIONAL, STATIC  , OTHER, LoadDevice, language, passphrase_protection, &LoadDevice_language_default),
    PB_FIELD2(  6, STRING  , OPTIONAL, STATIC  , OTHER, LoadDevice, label, language, 0),
    PB_FIELD2(  7, BOOL    , OPTIONAL, STATIC  , OTHER, LoadDevice, skip_checksum, label, 0),
    PB_FIELD2(  8, UINT32  , OPTIONAL, STATIC  , OTHER, LoadDevice, u2f_counter, skip_checksum, 0),
    PB_LAST_FIELD
};

const pb_field_t ResetDevice_fields[8] = {
    PB_FIELD2(  1, BOOL    , OPTIONAL, STATIC  , FIRST, ResetDevice, display_random, display_random, 0),
    PB_FIELD2(  2, UINT32  , OPTIONAL, STATIC  , OTHER, ResetDevice, strength, display_random, &ResetDevice_strength_default),
    PB_FIELD2(  3, BOOL    , OPTIONAL, STATIC  , OTHER, ResetDevice, passphrase_protection, strength, 0),
    PB_FIELD2(  4, BOOL    , OPTIONAL, STATIC  , OTHER, ResetDevice, pin_protection, passphrase_protection, 0),
    PB_FIELD2(  5, STRING  , OPTIONAL, STATIC  , OTHER, ResetDevice, language, pin_protection, &ResetDevice_language_default),
    PB_FIELD2(  6, STRING  , OPTIONAL, STATIC  , OTHER, ResetDevice, label, language, 0),
    PB_FIELD2(  7, UINT32  , OPTIONAL, STATIC  , OTHER, ResetDevice, u2f_counter, label, 0),
    PB_LAST_FIELD
};

const pb_field_t EntropyRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t EntropyAck_fields[2] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, EntropyAck, entropy, entropy, 0),
    PB_LAST_FIELD
};

const pb_field_t RecoveryDevice_fields[9] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, RecoveryDevice, word_count, word_count, 0),
    PB_FIELD2(  2, BOOL    , OPTIONAL, STATIC  , OTHER, RecoveryDevice, passphrase_protection, word_count, 0),
    PB_FIELD2(  3, BOOL    , OPTIONAL, STATIC  , OTHER, RecoveryDevice, pin_protection, passphrase_protection, 0),
    PB_FIELD2(  4, STRING  , OPTIONAL, STATIC  , OTHER, RecoveryDevice, language, pin_protection, &RecoveryDevice_language_default),
    PB_FIELD2(  5, STRING  , OPTIONAL, STATIC  , OTHER, RecoveryDevice, label, language, 0),
    PB_FIELD2(  6, BOOL    , OPTIONAL, STATIC  , OTHER, RecoveryDevice, enforce_wordlist, label, 0),
    PB_FIELD2(  8, UINT32  , OPTIONAL, STATIC  , OTHER, RecoveryDevice, type, enforce_wordlist, 0),
    PB_FIELD2(  9, UINT32  , OPTIONAL, STATIC  , OTHER, RecoveryDevice, u2f_counter, type, 0),
    PB_LAST_FIELD
};

const pb_field_t WordRequest_fields[2] = {
    PB_FIELD2(  1, ENUM    , OPTIONAL, STATIC  , FIRST, WordRequest, type, type, 0),
    PB_LAST_FIELD
};

const pb_field_t WordAck_fields[2] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC  , FIRST, WordAck, word, word, 0),
    PB_LAST_FIELD
};

const pb_field_t SignMessage_fields[4] = {
    PB_FIELD2(  1, UINT32  , REPEATED, STATIC  , FIRST, SignMessage, address_n, address_n, 0),
    PB_FIELD2(  2, BYTES   , REQUIRED, STATIC  , OTHER, SignMessage, message, address_n, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, SignMessage, coin_name, message, &SignMessage_coin_name_default),
    PB_LAST_FIELD
};

const pb_field_t VerifyMessage_fields[5] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, VerifyMessage, address, address, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, VerifyMessage, signature, address, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC  , OTHER, VerifyMessage, message, signature, 0),
    PB_FIELD2(  4, STRING  , OPTIONAL, STATIC  , OTHER, VerifyMessage, coin_name, message, &VerifyMessage_coin_name_default),
    PB_LAST_FIELD
};

const pb_field_t MessageSignature_fields[3] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, MessageSignature, address, address, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, MessageSignature, signature, address, 0),
    PB_LAST_FIELD
};

const pb_field_t EncryptMessage_fields[6] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, EncryptMessage, pubkey, pubkey, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, EncryptMessage, message, pubkey, 0),
    PB_FIELD2(  3, BOOL    , OPTIONAL, STATIC  , OTHER, EncryptMessage, display_only, message, 0),
    PB_FIELD2(  4, UINT32  , REPEATED, STATIC  , OTHER, EncryptMessage, address_n, display_only, 0),
    PB_FIELD2(  5, STRING  , OPTIONAL, STATIC  , OTHER, EncryptMessage, coin_name, address_n, &EncryptMessage_coin_name_default),
    PB_LAST_FIELD
};

const pb_field_t EncryptedMessage_fields[4] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, EncryptedMessage, nonce, nonce, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, EncryptedMessage, message, nonce, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC  , OTHER, EncryptedMessage, hmac, message, 0),
    PB_LAST_FIELD
};

const pb_field_t DecryptMessage_fields[5] = {
    PB_FIELD2(  1, UINT32  , REPEATED, STATIC  , FIRST, DecryptMessage, address_n, address_n, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, DecryptMessage, nonce, address_n, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC  , OTHER, DecryptMessage, message, nonce, 0),
    PB_FIELD2(  4, BYTES   , OPTIONAL, STATIC  , OTHER, DecryptMessage, hmac, message, 0),
    PB_LAST_FIELD
};

const pb_field_t DecryptedMessage_fields[3] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, DecryptedMessage, message, message, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, DecryptedMessage, address, message, 0),
    PB_LAST_FIELD
};

const pb_field_t CipherKeyValue_fields[8] = {
    PB_FIELD2(  1, UINT32  , REPEATED, STATIC  , FIRST, CipherKeyValue, address_n, address_n, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, CipherKeyValue, key, address_n, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC  , OTHER, CipherKeyValue, value, key, 0),
    PB_FIELD2(  4, BOOL    , OPTIONAL, STATIC  , OTHER, CipherKeyValue, encrypt, value, 0),
    PB_FIELD2(  5, BOOL    , OPTIONAL, STATIC  , OTHER, CipherKeyValue, ask_on_encrypt, encrypt, 0),
    PB_FIELD2(  6, BOOL    , OPTIONAL, STATIC  , OTHER, CipherKeyValue, ask_on_decrypt, ask_on_encrypt, 0),
    PB_FIELD2(  7, BYTES   , OPTIONAL, STATIC  , OTHER, CipherKeyValue, iv, ask_on_decrypt, 0),
    PB_LAST_FIELD
};

const pb_field_t CipheredKeyValue_fields[2] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, CipheredKeyValue, value, value, 0),
    PB_LAST_FIELD
};

const pb_field_t EstimateTxSize_fields[4] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC  , FIRST, EstimateTxSize, outputs_count, outputs_count, 0),
    PB_FIELD2(  2, UINT32  , REQUIRED, STATIC  , OTHER, EstimateTxSize, inputs_count, outputs_count, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, EstimateTxSize, coin_name, inputs_count, &EstimateTxSize_coin_name_default),
    PB_LAST_FIELD
};

const pb_field_t TxSize_fields[2] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, TxSize, tx_size, tx_size, 0),
    PB_LAST_FIELD
};

const pb_field_t SignTx_fields[6] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC  , FIRST, SignTx, outputs_count, outputs_count, 0),
    PB_FIELD2(  2, UINT32  , REQUIRED, STATIC  , OTHER, SignTx, inputs_count, outputs_count, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, SignTx, coin_name, inputs_count, &SignTx_coin_name_default),
    PB_FIELD2(  4, UINT32  , OPTIONAL, STATIC  , OTHER, SignTx, version, coin_name, &SignTx_version_default),
    PB_FIELD2(  5, UINT32  , OPTIONAL, STATIC  , OTHER, SignTx, lock_time, version, &SignTx_lock_time_default),
    PB_LAST_FIELD
};

const pb_field_t TxRequest_fields[4] = {
    PB_FIELD2(  1, ENUM    , OPTIONAL, STATIC  , FIRST, TxRequest, request_type, request_type, 0),
    PB_FIELD2(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, TxRequest, details, request_type, &TxRequestDetailsType_fields),
    PB_FIELD2(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, TxRequest, serialized, details, &TxRequestSerializedType_fields),
    PB_LAST_FIELD
};

const pb_field_t TxAck_fields[2] = {
    PB_FIELD2(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, TxAck, tx, tx, &TransactionType_fields),
    PB_LAST_FIELD
};

const pb_field_t EthereumSignTx_fields[11] = {
    PB_FIELD2(  1, UINT32  , REPEATED, STATIC  , FIRST, EthereumSignTx, address_n, address_n, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumSignTx, nonce, address_n, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumSignTx, gas_price, nonce, 0),
    PB_FIELD2(  4, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumSignTx, gas_limit, gas_price, 0),
    PB_FIELD2(  5, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumSignTx, to, gas_limit, 0),
    PB_FIELD2(  6, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumSignTx, value, to, 0),
    PB_FIELD2(  7, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumSignTx, data_initial_chunk, value, 0),
    PB_FIELD2(  8, UINT32  , OPTIONAL, STATIC  , OTHER, EthereumSignTx, data_length, data_initial_chunk, 0),
    PB_FIELD2(  9, UINT32  , OPTIONAL, STATIC  , OTHER, EthereumSignTx, chain_id, data_length, 0),
    PB_FIELD2( 10, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumSignTx, prefix, chain_id, 0),
    PB_LAST_FIELD
};

const pb_field_t EthereumTxRequest_fields[5] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, EthereumTxRequest, data_length, data_length, 0),
    PB_FIELD2(  2, UINT32  , OPTIONAL, STATIC  , OTHER, EthereumTxRequest, signature_v, data_length, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumTxRequest, signature_r, signature_v, 0),
    PB_FIELD2(  4, BYTES   , OPTIONAL, STATIC  , OTHER, EthereumTxRequest, signature_s, signature_r, 0),
    PB_LAST_FIELD
};

const pb_field_t EthereumTxAck_fields[2] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, EthereumTxAck, data_chunk, data_chunk, 0),
    PB_LAST_FIELD
};

const pb_field_t SignIdentity_fields[5] = {
    PB_FIELD2(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, SignIdentity, identity, identity, &IdentityType_fields),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, SignIdentity, challenge_hidden, identity, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, SignIdentity, challenge_visual, challenge_hidden, 0),
    PB_FIELD2(  4, STRING  , OPTIONAL, STATIC  , OTHER, SignIdentity, ecdsa_curve_name, challenge_visual, 0),
    PB_LAST_FIELD
};

const pb_field_t SignedIdentity_fields[4] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, SignedIdentity, address, address, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, SignedIdentity, public_key, address, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC  , OTHER, SignedIdentity, signature, public_key, 0),
    PB_LAST_FIELD
};

const pb_field_t GetECDHSessionKey_fields[4] = {
    PB_FIELD2(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, GetECDHSessionKey, identity, identity, &IdentityType_fields),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, GetECDHSessionKey, peer_public_key, identity, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, GetECDHSessionKey, ecdsa_curve_name, peer_public_key, 0),
    PB_LAST_FIELD
};

const pb_field_t ECDHSessionKey_fields[2] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, ECDHSessionKey, session_key, session_key, 0),
    PB_LAST_FIELD
};

const pb_field_t SetU2FCounter_fields[2] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, SetU2FCounter, u2f_counter, u2f_counter, 0),
    PB_LAST_FIELD
};

const pb_field_t FirmwareErase_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t DebugLinkDecision_fields[2] = {
    PB_FIELD2(  1, BOOL    , REQUIRED, STATIC  , FIRST, DebugLinkDecision, yes_no, yes_no, 0),
    PB_LAST_FIELD
};

const pb_field_t DebugLinkGetState_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t DebugLinkState_fields[11] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, DebugLinkState, layout, layout, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, DebugLinkState, pin, layout, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, DebugLinkState, matrix, pin, 0),
    PB_FIELD2(  4, STRING  , OPTIONAL, STATIC  , OTHER, DebugLinkState, mnemonic, matrix, 0),
    PB_FIELD2(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, DebugLinkState, node, mnemonic, &HDNodeType_fields),
    PB_FIELD2(  6, BOOL    , OPTIONAL, STATIC  , OTHER, DebugLinkState, passphrase_protection, node, 0),
    PB_FIELD2(  7, STRING  , OPTIONAL, STATIC  , OTHER, DebugLinkState, reset_word, passphrase_protection, 0),
    PB_FIELD2(  8, BYTES   , OPTIONAL, STATIC  , OTHER, DebugLinkState, reset_entropy, reset_word, 0),
    PB_FIELD2(  9, STRING  , OPTIONAL, STATIC  , OTHER, DebugLinkState, recovery_fake_word, reset_entropy, 0),
    PB_FIELD2( 10, UINT32  , OPTIONAL, STATIC  , OTHER, DebugLinkState, recovery_word_pos, recovery_fake_word, 0),
    PB_LAST_FIELD
};

const pb_field_t DebugLinkStop_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t DebugLinkLog_fields[4] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, DebugLinkLog, level, level, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, DebugLinkLog, bucket, level, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, DebugLinkLog, text, bucket, 0),
    PB_LAST_FIELD
};

const pb_field_t DebugLinkMemoryRead_fields[3] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, DebugLinkMemoryRead, address, address, 0),
    PB_FIELD2(  2, UINT32  , OPTIONAL, STATIC  , OTHER, DebugLinkMemoryRead, length, address, 0),
    PB_LAST_FIELD
};

const pb_field_t DebugLinkMemory_fields[2] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, STATIC  , FIRST, DebugLinkMemory, memory, memory, 0),
    PB_LAST_FIELD
};

const pb_field_t DebugLinkMemoryWrite_fields[4] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, DebugLinkMemoryWrite, address, address, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, DebugLinkMemoryWrite, memory, address, 0),
    PB_FIELD2(  3, BOOL    , OPTIONAL, STATIC  , OTHER, DebugLinkMemoryWrite, flash, memory, 0),
    PB_LAST_FIELD
};

const pb_field_t DebugLinkFlashErase_fields[2] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, DebugLinkFlashErase, sector, sector, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
STATIC_ASSERT((pb_membersize(Features, coins[0]) < 65536 && pb_membersize(PublicKey, node) < 65536 && pb_membersize(GetAddress, multisig) < 65536 && pb_membersize(LoadDevice, node) < 65536 && pb_membersize(TxRequest, details) < 65536 && pb_membersize(TxRequest, serialized) < 65536 && pb_membersize(TxAck, tx) < 65536 && pb_membersize(SignIdentity, identity) < 65536 && pb_membersize(GetECDHSessionKey, identity) < 65536 && pb_membersize(DebugLinkState, node) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Initialize_GetFeatures_Features_ClearSession_ApplySettings_ChangePin_Ping_Success_Failure_ButtonRequest_ButtonAck_PinMatrixRequest_PinMatrixAck_Cancel_PassphraseRequest_PassphraseAck_GetEntropy_Entropy_GetPublicKey_PublicKey_GetAddress_EthereumGetAddress_Address_EthereumAddress_WipeDevice_LoadDevice_ResetDevice_EntropyRequest_EntropyAck_RecoveryDevice_WordRequest_WordAck_SignMessage_VerifyMessage_MessageSignature_EncryptMessage_EncryptedMessage_DecryptMessage_DecryptedMessage_CipherKeyValue_CipheredKeyValue_EstimateTxSize_TxSize_SignTx_TxRequest_TxAck_EthereumSignTx_EthereumTxRequest_EthereumTxAck_SignIdentity_SignedIdentity_GetECDHSessionKey_ECDHSessionKey_SetU2FCounter_FirmwareErase_DebugLinkDecision_DebugLinkGetState_DebugLinkState_DebugLinkStop_DebugLinkLog_DebugLinkMemoryRead_DebugLinkMemory_DebugLinkMemoryWrite_DebugLinkFlashErase)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for EncryptedMessage.message is too large. Define PB_FIELD_16BIT to fix this.
#endif


