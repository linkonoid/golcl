
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Icon_Create: TIcon; cdecl;
begin
  Result :=  TIcon.Create;
end;

procedure Icon_Free(AObj: TIcon); cdecl;
begin
  AObj.Free;
end;

procedure Icon_Assign(AObj: TIcon; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Icon_HandleAllocated(AObj: TIcon): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Icon_LoadFromStream(AObj: TIcon; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure Icon_SaveToStream(AObj: TIcon; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

procedure Icon_SetSize(AObj: TIcon; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetSize(AWidth, AHeight);
end;

procedure Icon_LoadFromResourceName(AObj: TIcon; Instance: NativeUInt; ResName: PWideChar); cdecl;
begin
  AObj.LoadFromResourceName(Instance, ResName);
end;

procedure Icon_LoadFromResourceID(AObj: TIcon; Instance: NativeUInt; ResID: Integer); cdecl;
begin
{$IFDEF MSWINDOWS}
  AObj.LoadFromResourceID(Instance, ResID);
{$ENDIF MSWINDOWS}
end;

function Icon_Equals(AObj: TIcon; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

procedure Icon_LoadFromFile(AObj: TIcon; Filename: PWideChar); cdecl;
begin
  AObj.LoadFromFile(Filename);
end;

procedure Icon_SaveToFile(AObj: TIcon; Filename: PWideChar); cdecl;
begin
  AObj.SaveToFile(Filename);
end;

function Icon_GetNamePath(AObj: TIcon): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Icon_ClassName(AObj: TIcon): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Icon_GetHashCode(AObj: TIcon): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Icon_ToString(AObj: TIcon): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Icon_GetHandle(AObj: TIcon): HICON; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure Icon_SetHandle(AObj: TIcon; AValue: HICON); cdecl;
begin
  AObj.Handle := AValue;
end;

function Icon_GetEmpty(AObj: TIcon): LongBool; cdecl;
begin
  Result :=  AObj.Empty;
end;

function Icon_GetHeight(AObj: TIcon): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Icon_SetHeight(AObj: TIcon; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Icon_GetModified(AObj: TIcon): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure Icon_SetModified(AObj: TIcon; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function Icon_GetPaletteModified(AObj: TIcon): LongBool; cdecl;
begin
  Result :=  AObj.PaletteModified;
end;

procedure Icon_SetPaletteModified(AObj: TIcon; AValue: LongBool); cdecl;
begin
  AObj.PaletteModified := AValue;
end;

function Icon_GetTransparent(AObj: TIcon): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure Icon_SetTransparent(AObj: TIcon; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function Icon_GetWidth(AObj: TIcon): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Icon_SetWidth(AObj: TIcon; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure Icon_SetOnChange(AObj: TIcon; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, geChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.OnChange;
  TEventClass.Add(AObj, geChange, AEventId);
end;


exports
  Icon_Create {$IFNDEF MSWINDOWS}name '_Icon_Create'{$ENDIF},
  Icon_Free {$IFNDEF MSWINDOWS}name '_Icon_Free'{$ENDIF},
  Icon_Assign {$IFNDEF MSWINDOWS}name '_Icon_Assign'{$ENDIF},
  Icon_HandleAllocated {$IFNDEF MSWINDOWS}name '_Icon_HandleAllocated'{$ENDIF},
  Icon_LoadFromStream {$IFNDEF MSWINDOWS}name '_Icon_LoadFromStream'{$ENDIF},
  Icon_SaveToStream {$IFNDEF MSWINDOWS}name '_Icon_SaveToStream'{$ENDIF},
  Icon_SetSize {$IFNDEF MSWINDOWS}name '_Icon_SetSize'{$ENDIF},
  Icon_LoadFromResourceName {$IFNDEF MSWINDOWS}name '_Icon_LoadFromResourceName'{$ENDIF},
  Icon_LoadFromResourceID {$IFNDEF MSWINDOWS}name '_Icon_LoadFromResourceID'{$ENDIF},
  Icon_Equals {$IFNDEF MSWINDOWS}name '_Icon_Equals'{$ENDIF},
  Icon_LoadFromFile {$IFNDEF MSWINDOWS}name '_Icon_LoadFromFile'{$ENDIF},
  Icon_SaveToFile {$IFNDEF MSWINDOWS}name '_Icon_SaveToFile'{$ENDIF},
  Icon_GetNamePath {$IFNDEF MSWINDOWS}name '_Icon_GetNamePath'{$ENDIF},
  Icon_ClassName {$IFNDEF MSWINDOWS}name '_Icon_ClassName'{$ENDIF},
  Icon_GetHashCode {$IFNDEF MSWINDOWS}name '_Icon_GetHashCode'{$ENDIF},
  Icon_ToString {$IFNDEF MSWINDOWS}name '_Icon_ToString'{$ENDIF},
  Icon_GetHandle {$IFNDEF MSWINDOWS}name '_Icon_GetHandle'{$ENDIF},
  Icon_SetHandle {$IFNDEF MSWINDOWS}name '_Icon_SetHandle'{$ENDIF},
  Icon_GetEmpty {$IFNDEF MSWINDOWS}name '_Icon_GetEmpty'{$ENDIF},
  Icon_GetHeight {$IFNDEF MSWINDOWS}name '_Icon_GetHeight'{$ENDIF},
  Icon_SetHeight {$IFNDEF MSWINDOWS}name '_Icon_SetHeight'{$ENDIF},
  Icon_GetModified {$IFNDEF MSWINDOWS}name '_Icon_GetModified'{$ENDIF},
  Icon_SetModified {$IFNDEF MSWINDOWS}name '_Icon_SetModified'{$ENDIF},
  Icon_GetPaletteModified {$IFNDEF MSWINDOWS}name '_Icon_GetPaletteModified'{$ENDIF},
  Icon_SetPaletteModified {$IFNDEF MSWINDOWS}name '_Icon_SetPaletteModified'{$ENDIF},
  Icon_GetTransparent {$IFNDEF MSWINDOWS}name '_Icon_GetTransparent'{$ENDIF},
  Icon_SetTransparent {$IFNDEF MSWINDOWS}name '_Icon_SetTransparent'{$ENDIF},
  Icon_GetWidth {$IFNDEF MSWINDOWS}name '_Icon_GetWidth'{$ENDIF},
  Icon_SetWidth {$IFNDEF MSWINDOWS}name '_Icon_SetWidth'{$ENDIF},
  Icon_SetOnChange {$IFNDEF MSWINDOWS}name '_Icon_SetOnChange'{$ENDIF};

