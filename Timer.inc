
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Timer_Create(AOwner: TComponent): TTimer; cdecl;
begin
  Result :=  TTimer.Create(AOwner);
end;

procedure Timer_Free(AObj: TTimer); cdecl;
begin
  AObj.Free;
end;

function Timer_FindComponent(AObj: TTimer; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Timer_GetNamePath(AObj: TTimer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Timer_HasParent(AObj: TTimer): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Timer_Assign(AObj: TTimer; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Timer_ClassName(AObj: TTimer): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Timer_Equals(AObj: TTimer; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Timer_GetHashCode(AObj: TTimer): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Timer_ToString(AObj: TTimer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Timer_GetEnabled(AObj: TTimer): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Timer_SetEnabled(AObj: TTimer; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Timer_GetInterval(AObj: TTimer): Cardinal; cdecl;
begin
  Result :=  AObj.Interval;
end;

procedure Timer_SetInterval(AObj: TTimer; AValue: Cardinal); cdecl;
begin
  AObj.Interval := AValue;
end;

procedure Timer_SetOnTimer(AObj: TTimer; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnTimer := nil;
    TEventClass.Remove(AObj, geTimer);
    Exit;
  end;
  AObj.OnTimer := TEventClass.OnTimer;
  TEventClass.Add(AObj, geTimer, AEventId);
end;

function Timer_GetComponentCount(AObj: TTimer): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Timer_GetComponentIndex(AObj: TTimer): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Timer_SetComponentIndex(AObj: TTimer; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Timer_GetOwner(AObj: TTimer): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Timer_GetName(AObj: TTimer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Timer_SetName(AObj: TTimer; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Timer_GetTag(AObj: TTimer): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Timer_SetTag(AObj: TTimer; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Timer_GetComponents(AObj: TTimer; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Timer_Create {$IFNDEF MSWINDOWS}name '_Timer_Create'{$ENDIF},
  Timer_Free {$IFNDEF MSWINDOWS}name '_Timer_Free'{$ENDIF},
  Timer_FindComponent {$IFNDEF MSWINDOWS}name '_Timer_FindComponent'{$ENDIF},
  Timer_GetNamePath {$IFNDEF MSWINDOWS}name '_Timer_GetNamePath'{$ENDIF},
  Timer_HasParent {$IFNDEF MSWINDOWS}name '_Timer_HasParent'{$ENDIF},
  Timer_Assign {$IFNDEF MSWINDOWS}name '_Timer_Assign'{$ENDIF},
  Timer_ClassName {$IFNDEF MSWINDOWS}name '_Timer_ClassName'{$ENDIF},
  Timer_Equals {$IFNDEF MSWINDOWS}name '_Timer_Equals'{$ENDIF},
  Timer_GetHashCode {$IFNDEF MSWINDOWS}name '_Timer_GetHashCode'{$ENDIF},
  Timer_ToString {$IFNDEF MSWINDOWS}name '_Timer_ToString'{$ENDIF},
  Timer_GetEnabled {$IFNDEF MSWINDOWS}name '_Timer_GetEnabled'{$ENDIF},
  Timer_SetEnabled {$IFNDEF MSWINDOWS}name '_Timer_SetEnabled'{$ENDIF},
  Timer_GetInterval {$IFNDEF MSWINDOWS}name '_Timer_GetInterval'{$ENDIF},
  Timer_SetInterval {$IFNDEF MSWINDOWS}name '_Timer_SetInterval'{$ENDIF},
  Timer_SetOnTimer {$IFNDEF MSWINDOWS}name '_Timer_SetOnTimer'{$ENDIF},
  Timer_GetComponentCount {$IFNDEF MSWINDOWS}name '_Timer_GetComponentCount'{$ENDIF},
  Timer_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Timer_GetComponentIndex'{$ENDIF},
  Timer_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Timer_SetComponentIndex'{$ENDIF},
  Timer_GetOwner {$IFNDEF MSWINDOWS}name '_Timer_GetOwner'{$ENDIF},
  Timer_GetName {$IFNDEF MSWINDOWS}name '_Timer_GetName'{$ENDIF},
  Timer_SetName {$IFNDEF MSWINDOWS}name '_Timer_SetName'{$ENDIF},
  Timer_GetTag {$IFNDEF MSWINDOWS}name '_Timer_GetTag'{$ENDIF},
  Timer_SetTag {$IFNDEF MSWINDOWS}name '_Timer_SetTag'{$ENDIF},
  Timer_GetComponents {$IFNDEF MSWINDOWS}name '_Timer_GetComponents'{$ENDIF};

