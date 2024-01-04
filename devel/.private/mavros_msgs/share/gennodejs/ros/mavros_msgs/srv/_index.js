
"use strict";

let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileChecksum = require('./FileChecksum.js')
let CommandLong = require('./CommandLong.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let FileWrite = require('./FileWrite.js')
let FileRemove = require('./FileRemove.js')
let SetMode = require('./SetMode.js')
let SetMavFrame = require('./SetMavFrame.js')
let CommandTOL = require('./CommandTOL.js')
let WaypointPush = require('./WaypointPush.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let CommandAck = require('./CommandAck.js')
let LogRequestData = require('./LogRequestData.js')
let CommandInt = require('./CommandInt.js')
let ParamPush = require('./ParamPush.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let FileClose = require('./FileClose.js')
let FileTruncate = require('./FileTruncate.js')
let WaypointClear = require('./WaypointClear.js')
let ParamSet = require('./ParamSet.js')
let FileRename = require('./FileRename.js')
let MountConfigure = require('./MountConfigure.js')
let StreamRate = require('./StreamRate.js')
let ParamGet = require('./ParamGet.js')
let FileList = require('./FileList.js')
let FileMakeDir = require('./FileMakeDir.js')
let CommandBool = require('./CommandBool.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let ParamPull = require('./ParamPull.js')
let CommandHome = require('./CommandHome.js')
let WaypointPull = require('./WaypointPull.js')
let FileRead = require('./FileRead.js')
let MessageInterval = require('./MessageInterval.js')
let LogRequestList = require('./LogRequestList.js')
let FileOpen = require('./FileOpen.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')

module.exports = {
  WaypointSetCurrent: WaypointSetCurrent,
  FileChecksum: FileChecksum,
  CommandLong: CommandLong,
  LogRequestEnd: LogRequestEnd,
  FileWrite: FileWrite,
  FileRemove: FileRemove,
  SetMode: SetMode,
  SetMavFrame: SetMavFrame,
  CommandTOL: CommandTOL,
  WaypointPush: WaypointPush,
  CommandVtolTransition: CommandVtolTransition,
  CommandAck: CommandAck,
  LogRequestData: LogRequestData,
  CommandInt: CommandInt,
  ParamPush: ParamPush,
  FileRemoveDir: FileRemoveDir,
  CommandTriggerControl: CommandTriggerControl,
  FileClose: FileClose,
  FileTruncate: FileTruncate,
  WaypointClear: WaypointClear,
  ParamSet: ParamSet,
  FileRename: FileRename,
  MountConfigure: MountConfigure,
  StreamRate: StreamRate,
  ParamGet: ParamGet,
  FileList: FileList,
  FileMakeDir: FileMakeDir,
  CommandBool: CommandBool,
  CommandTriggerInterval: CommandTriggerInterval,
  ParamPull: ParamPull,
  CommandHome: CommandHome,
  WaypointPull: WaypointPull,
  FileRead: FileRead,
  MessageInterval: MessageInterval,
  LogRequestList: LogRequestList,
  FileOpen: FileOpen,
  VehicleInfoGet: VehicleInfoGet,
};
