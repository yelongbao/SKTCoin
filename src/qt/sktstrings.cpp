
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The SKT developers

//! This file is generated by share/qt/extract_strings_qt.py

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *skt_strings[] = {
QT_TRANSLATE_NOOP("skt-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=sktrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"SKT Alert\" admin@foo."
"com\n"),
QT_TRANSLATE_NOOP("skt-core", ""
"Acceptable ciphers (default: TLSv1.2+HIGH:TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!"
"3DES:@STRENGTH)"),
QT_TRANSLATE_NOOP("skt-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("skt-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("skt-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("skt-core", ""
"Cannot obtain a lock on data directory %s. SKT Core is probably already "
"running."),
QT_TRANSLATE_NOOP("skt-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:15)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Darksend uses exact denominated amounts to send funds, you might simply need "
"to anonymize some more coins."),
QT_TRANSLATE_NOOP("skt-core", ""
"Disable all Masternode and Darksend related functionality (0-1, default: 0)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Enable instantx, show confirmations for locked transactions (bool, default: "
"true)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Enable use of automated darksend for funds stored in this wallet (0-1, "
"default: 0)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly. This is intended for regression testing tools and app "
"development."),
QT_TRANSLATE_NOOP("skt-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("skt-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("skt-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("skt-core", ""
"Error: Wallet unlocked for anonymization only, unable to create transaction."),
QT_TRANSLATE_NOOP("skt-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Fees smaller than this are considered zero fee (for transaction creation) "
"(default:"),
QT_TRANSLATE_NOOP("skt-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: 100)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("skt-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: 3)"),
QT_TRANSLATE_NOOP("skt-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("skt-core", ""
"InstantX requires inputs with at least 6 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("skt-core", ""
"Listen for JSON-RPC connections on <port> (default: 8800 or testnet: 8884)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Name to construct url for KeePass entry that stores the wallet passphrase"),
QT_TRANSLATE_NOOP("skt-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Output debugging information (default: 0, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Provide liquidity to Darksend by infrequently mixing coins on a continual "
"basis (0-100, default: 0, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Set external address:port to get to this masternode (example: address:port)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Set the processor limit for when generation is on (-1 = unlimited, default: "
"-1)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"1)"),
QT_TRANSLATE_NOOP("skt-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("skt-core", ""
"Unable to bind to %s on this computer. SKT Core is probably already "
"running."),
QT_TRANSLATE_NOOP("skt-core", ""
"Unable to locate enough Darksend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("skt-core", ""
"Unable to locate enough Darksend non-denominated funds for this transaction "
"that are not equal 1000 SKT."),
QT_TRANSLATE_NOOP("skt-core", ""
"Unable to locate enough Darksend non-denominated funds for this transaction."),
QT_TRANSLATE_NOOP("skt-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: -"
"proxy)"),
QT_TRANSLATE_NOOP("skt-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("skt-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong SKT will not work properly."),
QT_TRANSLATE_NOOP("skt-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("skt-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("skt-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("skt-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("skt-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("skt-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("skt-core", "(default: 1)"),
QT_TRANSLATE_NOOP("skt-core", "(default: wallet.dat)"),
QT_TRANSLATE_NOOP("skt-core", "<category> can be:"),
QT_TRANSLATE_NOOP("skt-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("skt-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("skt-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("skt-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("skt-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("skt-core", "Already have that input."),
QT_TRANSLATE_NOOP("skt-core", "Always query for peer addresses via DNS lookup (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("skt-core", "Block creation options:"),
QT_TRANSLATE_NOOP("skt-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("skt-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("skt-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("skt-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("skt-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("skt-core", "Clear list of wallet transactions (diagnostic tool; implies -rescan)"),
QT_TRANSLATE_NOOP("skt-core", "Collateral is not valid."),
QT_TRANSLATE_NOOP("skt-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("skt-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("skt-core", "Connect through SOCKS proxy"),
QT_TRANSLATE_NOOP("skt-core", "Connect to JSON-RPC on <port> (default: 8800 or testnet: 8884)"),
QT_TRANSLATE_NOOP("skt-core", "Connect to KeePassHttp on port <port> (default: 19455)"),
QT_TRANSLATE_NOOP("skt-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("skt-core", "Connection options:"),
QT_TRANSLATE_NOOP("skt-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("skt-core", "SKT Core Daemon"),
QT_TRANSLATE_NOOP("skt-core", "SKT Core RPC client version"),
QT_TRANSLATE_NOOP("skt-core", "Darksend is disabled."),
QT_TRANSLATE_NOOP("skt-core", "Darksend options:"),
QT_TRANSLATE_NOOP("skt-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("skt-core", "Disable safemode, override a real safe mode event (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("skt-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("skt-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("skt-core", "Done loading"),
QT_TRANSLATE_NOOP("skt-core", "Downgrading and trying again."),
QT_TRANSLATE_NOOP("skt-core", "Enable the client to act as a masternode (0-1, default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Entries are full."),
QT_TRANSLATE_NOOP("skt-core", "Error connecting to masternode."),
QT_TRANSLATE_NOOP("skt-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("skt-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("skt-core", "Error loading block database"),
QT_TRANSLATE_NOOP("skt-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("skt-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("skt-core", "Error loading wallet.dat: Wallet requires newer version of SKT"),
QT_TRANSLATE_NOOP("skt-core", "Error opening block database"),
QT_TRANSLATE_NOOP("skt-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("skt-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("skt-core", "Error"),
QT_TRANSLATE_NOOP("skt-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("skt-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("skt-core", "Error: You already have pending entries in the Darksend pool"),
QT_TRANSLATE_NOOP("skt-core", "Error: system error: "),
QT_TRANSLATE_NOOP("skt-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("skt-core", "Failed to read block info"),
QT_TRANSLATE_NOOP("skt-core", "Failed to read block"),
QT_TRANSLATE_NOOP("skt-core", "Failed to sync block index"),
QT_TRANSLATE_NOOP("skt-core", "Failed to write block index"),
QT_TRANSLATE_NOOP("skt-core", "Failed to write block info"),
QT_TRANSLATE_NOOP("skt-core", "Failed to write block"),
QT_TRANSLATE_NOOP("skt-core", "Failed to write file info"),
QT_TRANSLATE_NOOP("skt-core", "Failed to write to coin database"),
QT_TRANSLATE_NOOP("skt-core", "Failed to write transaction index"),
QT_TRANSLATE_NOOP("skt-core", "Failed to write undo data"),
QT_TRANSLATE_NOOP("skt-core", "Fee per kB to add to transactions you send"),
QT_TRANSLATE_NOOP("skt-core", "Fees smaller than this are considered zero fee (for relaying) (default:"),
QT_TRANSLATE_NOOP("skt-core", "Force safe mode (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Generate coins (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Get help for a command"),
QT_TRANSLATE_NOOP("skt-core", "How many blocks to check at startup (default: 288, 0 = all)"),
QT_TRANSLATE_NOOP("skt-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("skt-core", "Ignore masternodes less than version (example: 70050; default : 0)"),
QT_TRANSLATE_NOOP("skt-core", "Importing..."),
QT_TRANSLATE_NOOP("skt-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("skt-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("skt-core", "Incompatible version."),
QT_TRANSLATE_NOOP("skt-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("skt-core", "Information"),
QT_TRANSLATE_NOOP("skt-core", "Initialization sanity check failed. SKT Core is shutting down."),
QT_TRANSLATE_NOOP("skt-core", "Input is not valid."),
QT_TRANSLATE_NOOP("skt-core", "InstantX options:"),
QT_TRANSLATE_NOOP("skt-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("skt-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("skt-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("skt-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("skt-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("skt-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("skt-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("skt-core", "Invalid amount"),
QT_TRANSLATE_NOOP("skt-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("skt-core", "Invalid private key."),
QT_TRANSLATE_NOOP("skt-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("skt-core", "KeePassHttp id for the established association"),
QT_TRANSLATE_NOOP("skt-core", "KeePassHttp key for AES encrypted communication with KeePass"),
QT_TRANSLATE_NOOP("skt-core", "Keep N skt anonymized (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Keep at most <n> unconnectable blocks in memory (default: %u)"),
QT_TRANSLATE_NOOP("skt-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("skt-core", "Last Darksend was too recent."),
QT_TRANSLATE_NOOP("skt-core", "Last successful darksend action was too recent."),
QT_TRANSLATE_NOOP("skt-core", "Limit size of signature cache to <n> entries (default: 50000)"),
QT_TRANSLATE_NOOP("skt-core", "List commands"),
QT_TRANSLATE_NOOP("skt-core", "Listen for connections on <port> (default: 8886 or testnet: 8885)"),
QT_TRANSLATE_NOOP("skt-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("skt-core", "Loading block index..."),
QT_TRANSLATE_NOOP("skt-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("skt-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("skt-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("skt-core", "Log transaction priority and fee per kB when mining blocks (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Maintain a full transaction index (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("skt-core", "Masternode options:"),
QT_TRANSLATE_NOOP("skt-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("skt-core", "Masternode:"),
QT_TRANSLATE_NOOP("skt-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("skt-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("skt-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("skt-core", "No compatible masternode found."),
QT_TRANSLATE_NOOP("skt-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("skt-core", "No masternodes detected."),
QT_TRANSLATE_NOOP("skt-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("skt-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("skt-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("skt-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("skt-core", "Not in the masternode list."),
QT_TRANSLATE_NOOP("skt-core", "Only accept block chain matching built-in checkpoints (default: 1)"),
QT_TRANSLATE_NOOP("skt-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("skt-core", "Options:"),
QT_TRANSLATE_NOOP("skt-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("skt-core", "Prepend debug output with timestamp (default: 1)"),
QT_TRANSLATE_NOOP("skt-core", "Print block on startup, if found in block index"),
QT_TRANSLATE_NOOP("skt-core", "Print block tree on startup (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("skt-core", "RPC client options:"),
QT_TRANSLATE_NOOP("skt-core", "RPC server options:"),
QT_TRANSLATE_NOOP("skt-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("skt-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("skt-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("skt-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("skt-core", "Rescanning..."),
QT_TRANSLATE_NOOP("skt-core", "Run a thread to flush wallet periodically (default: 1)"),
QT_TRANSLATE_NOOP("skt-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("skt-core", "SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("skt-core", "Select SOCKS version for -proxy (4 or 5, default: 5)"),
QT_TRANSLATE_NOOP("skt-core", "Send command to SKT Core"),
QT_TRANSLATE_NOOP("skt-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("skt-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("skt-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("skt-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("skt-core", "Session not complete!"),
QT_TRANSLATE_NOOP("skt-core", "Session timed out (30 seconds), please resubmit."),
QT_TRANSLATE_NOOP("skt-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("skt-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("skt-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("skt-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("skt-core", "Set the number of threads to service RPC calls (default: 4)"),
QT_TRANSLATE_NOOP("skt-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: 1)"),
QT_TRANSLATE_NOOP("skt-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("skt-core", "Show benchmark information (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("skt-core", "Signing failed."),
QT_TRANSLATE_NOOP("skt-core", "Signing timed out, please resubmit."),
QT_TRANSLATE_NOOP("skt-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("skt-core", "Specify configuration file (default: skt.conf)"),
QT_TRANSLATE_NOOP("skt-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("skt-core", "Specify data directory"),
QT_TRANSLATE_NOOP("skt-core", "Specify masternode configuration file (default: masternode.conf)"),
QT_TRANSLATE_NOOP("skt-core", "Specify pid file (default: sktd.pid)"),
QT_TRANSLATE_NOOP("skt-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("skt-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("skt-core", "Spend unconfirmed change when sending transactions (default: 1)"),
QT_TRANSLATE_NOOP("skt-core", "Start SKT Core Daemon"),
QT_TRANSLATE_NOOP("skt-core", "System error: "),
QT_TRANSLATE_NOOP("skt-core", "This help message"),
QT_TRANSLATE_NOOP("skt-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("skt-core", "This is not a masternode."),
QT_TRANSLATE_NOOP("skt-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("skt-core", "To use the %s option"),
QT_TRANSLATE_NOOP("skt-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("skt-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("skt-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("skt-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("skt-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("skt-core", "Transaction too large"),
QT_TRANSLATE_NOOP("skt-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("skt-core", "Unable to sign masternode payment winner, wrong key?"),
QT_TRANSLATE_NOOP("skt-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("skt-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("skt-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("skt-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("skt-core", "Usage (deprecated, use skt-cli):"),
QT_TRANSLATE_NOOP("skt-core", "Usage:"),
QT_TRANSLATE_NOOP("skt-core", "Use KeePass 2 integration using KeePassHttp plugin (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Use N separate masternodes to anonymize funds  (2-8, default: 2)"),
QT_TRANSLATE_NOOP("skt-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("skt-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("skt-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("skt-core", "Use the test network"),
QT_TRANSLATE_NOOP("skt-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("skt-core", "Value more than Darksend pool maximum allows."),
QT_TRANSLATE_NOOP("skt-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("skt-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("skt-core", "Wait for RPC server to start"),
QT_TRANSLATE_NOOP("skt-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("skt-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("skt-core", "Wallet needed to be rewritten: restart SKT to complete"),
QT_TRANSLATE_NOOP("skt-core", "Wallet options:"),
QT_TRANSLATE_NOOP("skt-core", "Warning"),
QT_TRANSLATE_NOOP("skt-core", "Warning: Deprecated argument -debugnet ignored, use -debug=net"),
QT_TRANSLATE_NOOP("skt-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("skt-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("skt-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("skt-core", "on startup"),
QT_TRANSLATE_NOOP("skt-core", "version"),
QT_TRANSLATE_NOOP("skt-core", "wallet.dat corrupt, salvage failed"),
};
