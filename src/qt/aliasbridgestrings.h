// SPDX-FileCopyrightText: © 2020 Alias Developers
// SPDX-FileCopyrightText: © 2016 SpectreCoin Developers
// SPDX-FileCopyrightText: © 2009 Bitcoin Developers
//
// SPDX-License-Identifier: MIT

#ifndef BRIDGETRANSLATIONS_H
#define BRIDGETRANSLATIONS_H
#include <QObject>

// Get strings in debug console `dumpStrings()`
// TODO: Automate this process, move into include and generate include...
static const char *html_strings[] = {
    QT_TRANSLATE_NOOP("alias-bridge", "Overview"),
    QT_TRANSLATE_NOOP("alias-bridge", "Wallet"),
    QT_TRANSLATE_NOOP("alias-bridge", "Send"),
    QT_TRANSLATE_NOOP("alias-bridge", "Receive"),
    QT_TRANSLATE_NOOP("alias-bridge", "Transactions"),
    QT_TRANSLATE_NOOP("alias-bridge", "Address Book"),
    QT_TRANSLATE_NOOP("alias-bridge", "Options"),
    QT_TRANSLATE_NOOP("alias-bridge", "Add Sub-Wallet"),
    QT_TRANSLATE_NOOP("alias-bridge", "Immature generated coins with Proof-of-Work"),
    QT_TRANSLATE_NOOP("alias-bridge", "Advanced"),
    QT_TRANSLATE_NOOP("alias-bridge", "Backup Wallet"),
    QT_TRANSLATE_NOOP("alias-bridge", "Encrypt Wallet"),
    QT_TRANSLATE_NOOP("alias-bridge", "Change Passphrase"),
    QT_TRANSLATE_NOOP("alias-bridge", "(Un)lock Wallet"),
    QT_TRANSLATE_NOOP("alias-bridge", "Tools"),
    QT_TRANSLATE_NOOP("alias-bridge", "Chain Data"),
    QT_TRANSLATE_NOOP("alias-bridge", "Block Explorer"),
    QT_TRANSLATE_NOOP("alias-bridge", "Sign Message"),
    QT_TRANSLATE_NOOP("alias-bridge", "Verify Message"),
    QT_TRANSLATE_NOOP("alias-bridge", "Debug"),
    QT_TRANSLATE_NOOP("alias-bridge", "About Alias"),
    QT_TRANSLATE_NOOP("alias-bridge", "About QT"),
    QT_TRANSLATE_NOOP("alias-bridge", "QR code"),
    QT_TRANSLATE_NOOP("alias-bridge", "Address:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Label:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Amount:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Add new receive address"),
    QT_TRANSLATE_NOOP("alias-bridge", "Add Address"),
    QT_TRANSLATE_NOOP("alias-bridge", "Add a new contact"),
    QT_TRANSLATE_NOOP("alias-bridge", "Address Lookup"),
    QT_TRANSLATE_NOOP("alias-bridge", "Address Type"),
    QT_TRANSLATE_NOOP("alias-bridge", "Stealth"),
    QT_TRANSLATE_NOOP("alias-bridge", "Group"),
    QT_TRANSLATE_NOOP("alias-bridge", "BIP32"),
    QT_TRANSLATE_NOOP("alias-bridge", "Label"),
    QT_TRANSLATE_NOOP("alias-bridge", "Address"),
    QT_TRANSLATE_NOOP("alias-bridge", "Public Key"),
    QT_TRANSLATE_NOOP("alias-bridge", "Transaction Hash"),
    QT_TRANSLATE_NOOP("alias-bridge", "Recent Transactions"),
    QT_TRANSLATE_NOOP("alias-bridge", "Blockchain Info"),
    QT_TRANSLATE_NOOP("alias-bridge", "Coin Control"),
    QT_TRANSLATE_NOOP("alias-bridge", "Make payment"),
    QT_TRANSLATE_NOOP("alias-bridge", "Balance transfer"),
    QT_TRANSLATE_NOOP("alias-bridge", "Select Inputs"),
    QT_TRANSLATE_NOOP("alias-bridge", "Automatically selected"),
    QT_TRANSLATE_NOOP("alias-bridge", "Quantity:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Fee:"),
    QT_TRANSLATE_NOOP("alias-bridge", "After Fee:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Bytes:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Priority:"),
    QT_TRANSLATE_NOOP("alias-bridge", "LowOutput:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Change:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Custom change address"),
    QT_TRANSLATE_NOOP("alias-bridge", "From account"),
    QT_TRANSLATE_NOOP("alias-bridge", "PUBLIC"),
    QT_TRANSLATE_NOOP("alias-bridge", "PRIVATE"),
    QT_TRANSLATE_NOOP("alias-bridge", "Balance:"),
    QT_TRANSLATE_NOOP("alias-bridge", "Ring Size:"),
    QT_TRANSLATE_NOOP("alias-bridge", "To account"),
    QT_TRANSLATE_NOOP("alias-bridge", "Pay to"),
    QT_TRANSLATE_NOOP("alias-bridge", "(no label)"),
    QT_TRANSLATE_NOOP("alias-bridge", "Master"),
    QT_TRANSLATE_NOOP("alias-bridge", "Wallet is encrypted and currently locked"),
    QT_TRANSLATE_NOOP("alias-bridge", "Not staking because wallet is locked"),
    QT_TRANSLATE_NOOP("alias-bridge", "0 active connection(s) to Alias network"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a label for this address to add it to your address book"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a address to add it to your address book"),
    QT_TRANSLATE_NOOP("alias-bridge", "Inputs"),
    QT_TRANSLATE_NOOP("alias-bridge", "Values"),
    QT_TRANSLATE_NOOP("alias-bridge", "Outputs"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a Alias address to sign the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter the message you want to sign"),
    QT_TRANSLATE_NOOP("alias-bridge", "Click sign message to generate signature"),
    QT_TRANSLATE_NOOP("alias-bridge", "Copy the signed message signature"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a Alias address to verify the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter the message you want to verify"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a Alias signature"),
    QT_TRANSLATE_NOOP("alias-bridge", "Paste signature from clipboard"),
    QT_TRANSLATE_NOOP("alias-bridge", "Your total balance"),
    QT_TRANSLATE_NOOP("alias-bridge", "Checking wallet state with network"),
    QT_TRANSLATE_NOOP("alias-bridge", "Recent in/out transactions or stakes"),
    QT_TRANSLATE_NOOP("alias-bridge", "Select inputs to spend"),
    QT_TRANSLATE_NOOP("alias-bridge", "Optional address to receive transaction change"),
    QT_TRANSLATE_NOOP("alias-bridge", "Choose from address book"),
    QT_TRANSLATE_NOOP("alias-bridge", "Paste address from clipboard"),
    QT_TRANSLATE_NOOP("alias-bridge", "Remove this recipient"),
    QT_TRANSLATE_NOOP("alias-bridge", "Send from public or private"),
    QT_TRANSLATE_NOOP("alias-bridge", "Current spendable send payment balance"),
    QT_TRANSLATE_NOOP("alias-bridge", "Send to public or private"),
    QT_TRANSLATE_NOOP("alias-bridge", "Current spendable balance to account"),
    QT_TRANSLATE_NOOP("alias-bridge", "The label for this address"),
    QT_TRANSLATE_NOOP("alias-bridge", "Amount to transfer"),
    QT_TRANSLATE_NOOP("alias-bridge", "Send to multiple recipients at once"),
    QT_TRANSLATE_NOOP("alias-bridge", "Date and time that the transaction was received."),
    QT_TRANSLATE_NOOP("alias-bridge", "Transaction status. Hover over this field to show number of confirmations."),
    QT_TRANSLATE_NOOP("alias-bridge", "Type of transaction."),
    QT_TRANSLATE_NOOP("alias-bridge", "Destination address of transaction."),
    QT_TRANSLATE_NOOP("alias-bridge", "Short payment note."),
    QT_TRANSLATE_NOOP("alias-bridge", "Amount removed from or added to balance."),
    QT_TRANSLATE_NOOP("alias-bridge", "Name for this Wallet"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a password"),
    QT_TRANSLATE_NOOP("alias-bridge", "Would you like to create a bip44 path?"),
    QT_TRANSLATE_NOOP("alias-bridge", "Your recovery phrase (Keep this safe!)"),
    QT_TRANSLATE_NOOP("alias-bridge", "Recovery Phrase"),
    QT_TRANSLATE_NOOP("alias-bridge", "Wallet Name for recovered account"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter the password for the wallet you are trying to recover"),
    QT_TRANSLATE_NOOP("alias-bridge", "Is this a bip44 path?"),
    QT_TRANSLATE_NOOP("alias-bridge", "ID"),
    QT_TRANSLATE_NOOP("alias-bridge", "Created"),
    QT_TRANSLATE_NOOP("alias-bridge", "Active Account"),
    QT_TRANSLATE_NOOP("alias-bridge", "Default"),
    QT_TRANSLATE_NOOP("alias-bridge", "Path"),
    QT_TRANSLATE_NOOP("alias-bridge", "Active"),
    QT_TRANSLATE_NOOP("alias-bridge", "Amount"),
    QT_TRANSLATE_NOOP("alias-bridge", "Note"),
    QT_TRANSLATE_NOOP("alias-bridge", "Public coins, visible on blockchain"),
    QT_TRANSLATE_NOOP("alias-bridge", "Private coins, untraceable and unlinkable on blockchain"),
    QT_TRANSLATE_NOOP("alias-bridge", "Available coins for spending"),
    QT_TRANSLATE_NOOP("alias-bridge", "Reserved coins are not used for staking"),
    QT_TRANSLATE_NOOP("alias-bridge", "Staked coins must mature before they can be accessed"),
    QT_TRANSLATE_NOOP("alias-bridge", "Public ALIAS requires 1 block confirmation<br>Private ALIAS requires 10 blocks confirmations"),
    QT_TRANSLATE_NOOP("alias-bridge", "Type"),
    QT_TRANSLATE_NOOP("alias-bridge", "Date"),
    QT_TRANSLATE_NOOP("alias-bridge", "Send Payment"),
    QT_TRANSLATE_NOOP("alias-bridge", "The address to send the payment to"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a label for this address"),
    QT_TRANSLATE_NOOP("alias-bridge", "Total Balance"),
    QT_TRANSLATE_NOOP("alias-bridge", "Balance"),
    QT_TRANSLATE_NOOP("alias-bridge", "Available"),
    QT_TRANSLATE_NOOP("alias-bridge", "Public"),
    QT_TRANSLATE_NOOP("alias-bridge", "Private"),
    QT_TRANSLATE_NOOP("alias-bridge", "Tor+OBFS4 connection online"),
    QT_TRANSLATE_NOOP("alias-bridge", "Wallet Encryption"),
    QT_TRANSLATE_NOOP("alias-bridge", "A short reference for the recipient (max 24 characters)"),
    QT_TRANSLATE_NOOP("alias-bridge", "ALIAS Denomination Value"),
    QT_TRANSLATE_NOOP("alias-bridge", "No. Owned (* = Immature)"),
    QT_TRANSLATE_NOOP("alias-bridge", "No. System Unspent (* = Immature)"),
    QT_TRANSLATE_NOOP("alias-bridge", "No. available Mixins (* = Immature)"),
    QT_TRANSLATE_NOOP("alias-bridge", "No. System (** = Compromised)"),
    QT_TRANSLATE_NOOP("alias-bridge", "The last block a coin of this denomination was created"),
    QT_TRANSLATE_NOOP("alias-bridge", "Owned (*)"),
    QT_TRANSLATE_NOOP("alias-bridge", "Unspent (*)"),
    QT_TRANSLATE_NOOP("alias-bridge", "Mixins (*)"),
    QT_TRANSLATE_NOOP("alias-bridge", "System (**)"),
    QT_TRANSLATE_NOOP("alias-bridge", "Least Depth"),
    QT_TRANSLATE_NOOP("alias-bridge", "Value Out"),
    QT_TRANSLATE_NOOP("alias-bridge", "Value"),
    QT_TRANSLATE_NOOP("alias-bridge", "Addressbook"),
    QT_TRANSLATE_NOOP("alias-bridge", "Refresh"),
    QT_TRANSLATE_NOOP("alias-bridge", "Hash"),
    QT_TRANSLATE_NOOP("alias-bridge", "Height"),
    QT_TRANSLATE_NOOP("alias-bridge", "Timestamp"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a Alias address (e.g. SXywGBZBowrppUwwNUo1GCRDTibzJi7g2M)"),
    QT_TRANSLATE_NOOP("alias-bridge", "An address label for the payment senders address book"),
    QT_TRANSLATE_NOOP("alias-bridge", "Enter a short note to send with a payment (max 24 characters)"),
    QT_TRANSLATE_NOOP("alias-bridge", "Filter by label or address..."),
    QT_TRANSLATE_NOOP("alias-bridge", "Note to send with payment (max 24 characters)"),
    QT_TRANSLATE_NOOP("alias-bridge", "The private address to transfer the balance to"),
    QT_TRANSLATE_NOOP("alias-bridge", "Search by label or address"),
    QT_TRANSLATE_NOOP("alias-bridge", "Search"),
    QT_TRANSLATE_NOOP("alias-bridge", "Filter outputs"),
    QT_TRANSLATE_NOOP("alias-bridge", "Find Block by hash/height/transaction"),
    QT_TRANSLATE_NOOP("alias-bridge", "Family vacation funds"),
    QT_TRANSLATE_NOOP("alias-bridge", "Grouping will consolidate transactions of chosen"),
    QT_TRANSLATE_NOOP("alias-bridge", "Reset form"),
    QT_TRANSLATE_NOOP("alias-bridge", "Restore Sub-Wallet"),
//    QT_TRANSLATE_NOOP("alias-bridge", "Stake"),
//    QT_TRANSLATE_NOOP("alias-bridge", "Sub-Wallets"),
//    QT_TRANSLATE_NOOP("alias-bridge", ""),
//    QT_TRANSLATE_NOOP("alias-bridge", ""),
//    QT_TRANSLATE_NOOP("alias-bridge", ""),
//    QT_TRANSLATE_NOOP("alias-bridge", ""),
//    QT_TRANSLATE_NOOP("alias-bridge", ""),
//    QT_TRANSLATE_NOOP("alias-bridge", ""),
//    QT_TRANSLATE_NOOP("alias-bridge", ""),

    0 // Leave this here...
};
#endif // BRIDGETRANSLATIONS_H
