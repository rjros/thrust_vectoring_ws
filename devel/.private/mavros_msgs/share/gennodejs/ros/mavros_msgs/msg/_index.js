
"use strict";

let CommandCode = require('./CommandCode.js');
let HilControls = require('./HilControls.js');
let WaypointList = require('./WaypointList.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let HomePosition = require('./HomePosition.js');
let ExtendedState = require('./ExtendedState.js');
let GPSRAW = require('./GPSRAW.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let HilGPS = require('./HilGPS.js');
let WaypointReached = require('./WaypointReached.js');
let ESCInfo = require('./ESCInfo.js');
let DebugValue = require('./DebugValue.js');
let LandingTarget = require('./LandingTarget.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let PositionTarget = require('./PositionTarget.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let LogEntry = require('./LogEntry.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let RCOut = require('./RCOut.js');
let LogData = require('./LogData.js');
let FileEntry = require('./FileEntry.js');
let RadioStatus = require('./RadioStatus.js');
let Thrust = require('./Thrust.js');
let TerrainReport = require('./TerrainReport.js');
let CellularStatus = require('./CellularStatus.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let Altitude = require('./Altitude.js');
let Param = require('./Param.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let VehicleInfo = require('./VehicleInfo.js');
let BatteryStatus = require('./BatteryStatus.js');
let Trajectory = require('./Trajectory.js');
let Mavlink = require('./Mavlink.js');
let Vibration = require('./Vibration.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let ActuatorControl = require('./ActuatorControl.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let State = require('./State.js');
let RTKBaseline = require('./RTKBaseline.js');
let ESCStatus = require('./ESCStatus.js');
let RCIn = require('./RCIn.js');
let GPSRTK = require('./GPSRTK.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let Waypoint = require('./Waypoint.js');
let RTCM = require('./RTCM.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let MountControl = require('./MountControl.js');
let Tunnel = require('./Tunnel.js');
let HilSensor = require('./HilSensor.js');
let VFR_HUD = require('./VFR_HUD.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let GPSINPUT = require('./GPSINPUT.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let ParamValue = require('./ParamValue.js');
let StatusText = require('./StatusText.js');
let ManualControl = require('./ManualControl.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');

module.exports = {
  CommandCode: CommandCode,
  HilControls: HilControls,
  WaypointList: WaypointList,
  CameraImageCaptured: CameraImageCaptured,
  HomePosition: HomePosition,
  ExtendedState: ExtendedState,
  GPSRAW: GPSRAW,
  EstimatorStatus: EstimatorStatus,
  HilGPS: HilGPS,
  WaypointReached: WaypointReached,
  ESCInfo: ESCInfo,
  DebugValue: DebugValue,
  LandingTarget: LandingTarget,
  HilActuatorControls: HilActuatorControls,
  PositionTarget: PositionTarget,
  ESCInfoItem: ESCInfoItem,
  LogEntry: LogEntry,
  PlayTuneV2: PlayTuneV2,
  WheelOdomStamped: WheelOdomStamped,
  ADSBVehicle: ADSBVehicle,
  OnboardComputerStatus: OnboardComputerStatus,
  RCOut: RCOut,
  LogData: LogData,
  FileEntry: FileEntry,
  RadioStatus: RadioStatus,
  Thrust: Thrust,
  TerrainReport: TerrainReport,
  CellularStatus: CellularStatus,
  HilStateQuaternion: HilStateQuaternion,
  CamIMUStamp: CamIMUStamp,
  Altitude: Altitude,
  Param: Param,
  OverrideRCIn: OverrideRCIn,
  VehicleInfo: VehicleInfo,
  BatteryStatus: BatteryStatus,
  Trajectory: Trajectory,
  Mavlink: Mavlink,
  Vibration: Vibration,
  ESCTelemetry: ESCTelemetry,
  ActuatorControl: ActuatorControl,
  MagnetometerReporter: MagnetometerReporter,
  State: State,
  RTKBaseline: RTKBaseline,
  ESCStatus: ESCStatus,
  RCIn: RCIn,
  GPSRTK: GPSRTK,
  CompanionProcessStatus: CompanionProcessStatus,
  Waypoint: Waypoint,
  RTCM: RTCM,
  AttitudeTarget: AttitudeTarget,
  MountControl: MountControl,
  Tunnel: Tunnel,
  HilSensor: HilSensor,
  VFR_HUD: VFR_HUD,
  TimesyncStatus: TimesyncStatus,
  NavControllerOutput: NavControllerOutput,
  ESCStatusItem: ESCStatusItem,
  GPSINPUT: GPSINPUT,
  OpticalFlowRad: OpticalFlowRad,
  ParamValue: ParamValue,
  StatusText: StatusText,
  ManualControl: ManualControl,
  GlobalPositionTarget: GlobalPositionTarget,
  ESCTelemetryItem: ESCTelemetryItem,
};
