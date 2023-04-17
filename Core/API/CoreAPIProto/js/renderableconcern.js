// source: concern_service.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {missingRequire} reports error on implicit type usages.
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!
/* eslint-disable */
// @ts-nocheck

goog.provide('proto.core.api.proto.RenderableConcern');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.core.api.proto.RenderableSource');

/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.core.api.proto.RenderableConcern = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.core.api.proto.RenderableConcern, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.core.api.proto.RenderableConcern.displayName = 'proto.core.api.proto.RenderableConcern';
}



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.core.api.proto.RenderableConcern.prototype.toObject = function(opt_includeInstance) {
  return proto.core.api.proto.RenderableConcern.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.core.api.proto.RenderableConcern} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.core.api.proto.RenderableConcern.toObject = function(includeInstance, msg) {
  var f, obj = {
    concernId: (f = jspb.Message.getField(msg, 1)) == null ? undefined : f,
    title: (f = jspb.Message.getField(msg, 2)) == null ? undefined : f,
    preview: (f = jspb.Message.getField(msg, 3)) == null ? undefined : f,
    url: (f = jspb.Message.getField(msg, 4)) == null ? undefined : f,
    source: (f = msg.getSource()) && proto.core.api.proto.RenderableSource.toObject(includeInstance, f)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.core.api.proto.RenderableConcern}
 */
proto.core.api.proto.RenderableConcern.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.core.api.proto.RenderableConcern;
  return proto.core.api.proto.RenderableConcern.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.core.api.proto.RenderableConcern} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.core.api.proto.RenderableConcern}
 */
proto.core.api.proto.RenderableConcern.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readUint64());
      msg.setConcernId(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setTitle(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setPreview(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setUrl(value);
      break;
    case 5:
      var value = new proto.core.api.proto.RenderableSource;
      reader.readMessage(value,proto.core.api.proto.RenderableSource.deserializeBinaryFromReader);
      msg.setSource(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.core.api.proto.RenderableConcern.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.core.api.proto.RenderableConcern.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.core.api.proto.RenderableConcern} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.core.api.proto.RenderableConcern.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = /** @type {number} */ (jspb.Message.getField(message, 1));
  if (f != null) {
    writer.writeUint64(
      1,
      f
    );
  }
  f = /** @type {string} */ (jspb.Message.getField(message, 2));
  if (f != null) {
    writer.writeString(
      2,
      f
    );
  }
  f = /** @type {string} */ (jspb.Message.getField(message, 3));
  if (f != null) {
    writer.writeString(
      3,
      f
    );
  }
  f = /** @type {string} */ (jspb.Message.getField(message, 4));
  if (f != null) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getSource();
  if (f != null) {
    writer.writeMessage(
      5,
      f,
      proto.core.api.proto.RenderableSource.serializeBinaryToWriter
    );
  }
};


/**
 * optional uint64 concern_id = 1;
 * @return {number}
 */
proto.core.api.proto.RenderableConcern.prototype.getConcernId = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/**
 * @param {number} value
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.setConcernId = function(value) {
  return jspb.Message.setField(this, 1, value);
};


/**
 * Clears the field making it undefined.
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.clearConcernId = function() {
  return jspb.Message.setField(this, 1, undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.core.api.proto.RenderableConcern.prototype.hasConcernId = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional string title = 2;
 * @return {string}
 */
proto.core.api.proto.RenderableConcern.prototype.getTitle = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/**
 * @param {string} value
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.setTitle = function(value) {
  return jspb.Message.setField(this, 2, value);
};


/**
 * Clears the field making it undefined.
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.clearTitle = function() {
  return jspb.Message.setField(this, 2, undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.core.api.proto.RenderableConcern.prototype.hasTitle = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional string preview = 3;
 * @return {string}
 */
proto.core.api.proto.RenderableConcern.prototype.getPreview = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/**
 * @param {string} value
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.setPreview = function(value) {
  return jspb.Message.setField(this, 3, value);
};


/**
 * Clears the field making it undefined.
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.clearPreview = function() {
  return jspb.Message.setField(this, 3, undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.core.api.proto.RenderableConcern.prototype.hasPreview = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional string url = 4;
 * @return {string}
 */
proto.core.api.proto.RenderableConcern.prototype.getUrl = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/**
 * @param {string} value
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.setUrl = function(value) {
  return jspb.Message.setField(this, 4, value);
};


/**
 * Clears the field making it undefined.
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.clearUrl = function() {
  return jspb.Message.setField(this, 4, undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.core.api.proto.RenderableConcern.prototype.hasUrl = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * optional RenderableSource source = 5;
 * @return {?proto.core.api.proto.RenderableSource}
 */
proto.core.api.proto.RenderableConcern.prototype.getSource = function() {
  return /** @type{?proto.core.api.proto.RenderableSource} */ (
    jspb.Message.getWrapperField(this, proto.core.api.proto.RenderableSource, 5));
};


/**
 * @param {?proto.core.api.proto.RenderableSource|undefined} value
 * @return {!proto.core.api.proto.RenderableConcern} returns this
*/
proto.core.api.proto.RenderableConcern.prototype.setSource = function(value) {
  return jspb.Message.setWrapperField(this, 5, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.core.api.proto.RenderableConcern} returns this
 */
proto.core.api.proto.RenderableConcern.prototype.clearSource = function() {
  return this.setSource(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.core.api.proto.RenderableConcern.prototype.hasSource = function() {
  return jspb.Message.getField(this, 5) != null;
};


