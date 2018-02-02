
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Monitor_Create: TMonitor; cdecl;
begin
  Result :=  TMonitor.Create;
end;

procedure Monitor_Free(AObj: TMonitor); cdecl;
begin
  AObj.Free;
end;

function Monitor_ClassName(AObj: TMonitor): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Monitor_Equals(AObj: TMonitor; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Monitor_GetHashCode(AObj: TMonitor): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Monitor_ToString(AObj: TMonitor): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Monitor_GetHandle(AObj: TMonitor): HMONITOR; cdecl;
begin
  Result :=  AObj.Handle;
end;

function Monitor_GetMonitorNum(AObj: TMonitor): Integer; cdecl;
begin
  Result :=  AObj.MonitorNum;
end;

function Monitor_GetLeft(AObj: TMonitor): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

function Monitor_GetHeight(AObj: TMonitor): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

function Monitor_GetTop(AObj: TMonitor): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

function Monitor_GetWidth(AObj: TMonitor): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Monitor_GetBoundsRect(AObj: TMonitor; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Monitor_GetWorkareaRect(AObj: TMonitor; var Result: TRect); cdecl;
begin
  Result :=  AObj.WorkareaRect;
end;

function Monitor_GetPrimary(AObj: TMonitor): LongBool; cdecl;
begin
  Result :=  AObj.Primary;
end;

function Monitor_GetPixelsPerInch(AObj: TMonitor): Integer; cdecl;
begin
  Result :=  AObj.PixelsPerInch;
end;


exports
  Monitor_Create {$IFNDEF MSWINDOWS}name '_Monitor_Create'{$ENDIF},
  Monitor_Free {$IFNDEF MSWINDOWS}name '_Monitor_Free'{$ENDIF},
  Monitor_ClassName {$IFNDEF MSWINDOWS}name '_Monitor_ClassName'{$ENDIF},
  Monitor_Equals {$IFNDEF MSWINDOWS}name '_Monitor_Equals'{$ENDIF},
  Monitor_GetHashCode {$IFNDEF MSWINDOWS}name '_Monitor_GetHashCode'{$ENDIF},
  Monitor_ToString {$IFNDEF MSWINDOWS}name '_Monitor_ToString'{$ENDIF},
  Monitor_GetHandle {$IFNDEF MSWINDOWS}name '_Monitor_GetHandle'{$ENDIF},
  Monitor_GetMonitorNum {$IFNDEF MSWINDOWS}name '_Monitor_GetMonitorNum'{$ENDIF},
  Monitor_GetLeft {$IFNDEF MSWINDOWS}name '_Monitor_GetLeft'{$ENDIF},
  Monitor_GetHeight {$IFNDEF MSWINDOWS}name '_Monitor_GetHeight'{$ENDIF},
  Monitor_GetTop {$IFNDEF MSWINDOWS}name '_Monitor_GetTop'{$ENDIF},
  Monitor_GetWidth {$IFNDEF MSWINDOWS}name '_Monitor_GetWidth'{$ENDIF},
  Monitor_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Monitor_GetBoundsRect'{$ENDIF},
  Monitor_GetWorkareaRect {$IFNDEF MSWINDOWS}name '_Monitor_GetWorkareaRect'{$ENDIF},
  Monitor_GetPrimary {$IFNDEF MSWINDOWS}name '_Monitor_GetPrimary'{$ENDIF},
  Monitor_GetPixelsPerInch {$IFNDEF MSWINDOWS}name '_Monitor_GetPixelsPerInch'{$ENDIF};

