<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * Brox
 */
interface Beeble_BroxAsyncIf extends \IThriftAsyncIf {
}

/**
 * Original thrift service:-
 * Brox
 */
interface Beeble_BroxIf extends \IThriftSyncIf {
}

/**
 * Original thrift service:-
 * Brox
 */
interface Beeble_BroxClientIf extends \IThriftSyncIf {
}

/**
 * Original thrift service:-
 * Brox
 */
interface Beeble_BroxAsyncRpcOptionsIf {
}

/**
 * Original thrift service:-
 * Brox
 */
trait Beeble_BroxClientBase {
  require extends \ThriftClientBase;

}

class Beeble_BroxAsyncClient extends \ThriftClientBase implements Beeble_BroxAsyncIf {
  use Beeble_BroxClientBase;

}

class Beeble_BroxClient extends \ThriftClientBase implements Beeble_BroxClientIf {
  use Beeble_BroxClientBase;

  /* send and recv functions */
}

class Beeble_BroxAsyncRpcOptionsClient  implements Beeble_BroxAsyncRpcOptionsIf {
}

// HELPER FUNCTIONS AND STRUCTURES

