//
// Autogenerated by Thrift Compiler (0.9.1)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var Thrift = require('thrift').Thrift;
var GoonbeeShared_ttypes = require('./GoonbeeShared_types')


var ttypes = module.exports = {};
if (typeof GBChatService === 'undefined') {
  GBChatService = {};
}
ttypes.ChatSorting = {
'PARTICIPANT_COUNT' : 0,
'MESSAGE_COUNT' : 1,
'DATE_CREATED' : 2
};
GBChatService.ChatStats = module.exports.ChatStats = function(args) {
  this.messageCount = null;
  this.participantCount = null;
  if (args) {
    if (args.messageCount !== undefined) {
      this.messageCount = args.messageCount;
    }
    if (args.participantCount !== undefined) {
      this.participantCount = args.participantCount;
    }
  }
};
GBChatService.ChatStats.prototype = {};
GBChatService.ChatStats.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.messageCount = input.readI32();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.participantCount = input.readI32();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

GBChatService.ChatStats.prototype.write = function(output) {
  output.writeStructBegin('ChatStats');
  if (this.messageCount !== null && this.messageCount !== undefined) {
    output.writeFieldBegin('messageCount', Thrift.Type.I32, 1);
    output.writeI32(this.messageCount);
    output.writeFieldEnd();
  }
  if (this.participantCount !== null && this.participantCount !== undefined) {
    output.writeFieldBegin('participantCount', Thrift.Type.I32, 2);
    output.writeI32(this.participantCount);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GBChatService.ChatMeta = module.exports.ChatMeta = function(args) {
  this.ownerId = null;
  this.dateCreated = null;
  this.name = null;
  this.topic = null;
  if (args) {
    if (args.ownerId !== undefined) {
      this.ownerId = args.ownerId;
    }
    if (args.dateCreated !== undefined) {
      this.dateCreated = args.dateCreated;
    }
    if (args.name !== undefined) {
      this.name = args.name;
    }
    if (args.topic !== undefined) {
      this.topic = args.topic;
    }
  }
};
GBChatService.ChatMeta.prototype = {};
GBChatService.ChatMeta.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.ownerId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.dateCreated = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.name = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.topic = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

GBChatService.ChatMeta.prototype.write = function(output) {
  output.writeStructBegin('ChatMeta');
  if (this.ownerId !== null && this.ownerId !== undefined) {
    output.writeFieldBegin('ownerId', Thrift.Type.STRING, 1);
    output.writeString(this.ownerId);
    output.writeFieldEnd();
  }
  if (this.dateCreated !== null && this.dateCreated !== undefined) {
    output.writeFieldBegin('dateCreated', Thrift.Type.STRING, 2);
    output.writeString(this.dateCreated);
    output.writeFieldEnd();
  }
  if (this.name !== null && this.name !== undefined) {
    output.writeFieldBegin('name', Thrift.Type.STRING, 3);
    output.writeString(this.name);
    output.writeFieldEnd();
  }
  if (this.topic !== null && this.topic !== undefined) {
    output.writeFieldBegin('topic', Thrift.Type.STRING, 4);
    output.writeString(this.topic);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GBChatService.ChatOptions = module.exports.ChatOptions = function(args) {
  this.name = null;
  this.topic = null;
  if (args) {
    if (args.name !== undefined) {
      this.name = args.name;
    }
    if (args.topic !== undefined) {
      this.topic = args.topic;
    }
  }
};
GBChatService.ChatOptions.prototype = {};
GBChatService.ChatOptions.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.name = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.topic = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

GBChatService.ChatOptions.prototype.write = function(output) {
  output.writeStructBegin('ChatOptions');
  if (this.name !== null && this.name !== undefined) {
    output.writeFieldBegin('name', Thrift.Type.STRING, 1);
    output.writeString(this.name);
    output.writeFieldEnd();
  }
  if (this.topic !== null && this.topic !== undefined) {
    output.writeFieldBegin('topic', Thrift.Type.STRING, 2);
    output.writeString(this.topic);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GBChatService.Chat = module.exports.Chat = function(args) {
  this.id = null;
  this.meta = null;
  this.stats = null;
  if (args) {
    if (args.id !== undefined) {
      this.id = args.id;
    }
    if (args.meta !== undefined) {
      this.meta = args.meta;
    }
    if (args.stats !== undefined) {
      this.stats = args.stats;
    }
  }
};
GBChatService.Chat.prototype = {};
GBChatService.Chat.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.id = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.meta = new ttypes.ChatMeta();
        this.meta.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.stats = new ttypes.ChatStats();
        this.stats.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

GBChatService.Chat.prototype.write = function(output) {
  output.writeStructBegin('Chat');
  if (this.id !== null && this.id !== undefined) {
    output.writeFieldBegin('id', Thrift.Type.STRING, 1);
    output.writeString(this.id);
    output.writeFieldEnd();
  }
  if (this.meta !== null && this.meta !== undefined) {
    output.writeFieldBegin('meta', Thrift.Type.STRUCT, 2);
    this.meta.write(output);
    output.writeFieldEnd();
  }
  if (this.stats !== null && this.stats !== undefined) {
    output.writeFieldBegin('stats', Thrift.Type.STRUCT, 3);
    this.stats.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GBChatService.Message = module.exports.Message = function(args) {
  this.seq = null;
  this.dateCreated = null;
  this.authorName = null;
  this.content = null;
  if (args) {
    if (args.seq !== undefined) {
      this.seq = args.seq;
    }
    if (args.dateCreated !== undefined) {
      this.dateCreated = args.dateCreated;
    }
    if (args.authorName !== undefined) {
      this.authorName = args.authorName;
    }
    if (args.content !== undefined) {
      this.content = args.content;
    }
  }
};
GBChatService.Message.prototype = {};
GBChatService.Message.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.seq = input.readI32();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.dateCreated = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.authorName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.content = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

GBChatService.Message.prototype.write = function(output) {
  output.writeStructBegin('Message');
  if (this.seq !== null && this.seq !== undefined) {
    output.writeFieldBegin('seq', Thrift.Type.I32, 1);
    output.writeI32(this.seq);
    output.writeFieldEnd();
  }
  if (this.dateCreated !== null && this.dateCreated !== undefined) {
    output.writeFieldBegin('dateCreated', Thrift.Type.STRING, 2);
    output.writeString(this.dateCreated);
    output.writeFieldEnd();
  }
  if (this.authorName !== null && this.authorName !== undefined) {
    output.writeFieldBegin('authorName', Thrift.Type.STRING, 3);
    output.writeString(this.authorName);
    output.writeFieldEnd();
  }
  if (this.content !== null && this.content !== undefined) {
    output.writeFieldBegin('content', Thrift.Type.STRING, 4);
    output.writeString(this.content);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

