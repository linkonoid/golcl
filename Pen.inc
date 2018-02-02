
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Pen_Create: TPen; cdecl;
begin
  Result :=  TPen.Create;
end;

procedure Pen_Free(AObj: TPen); cdecl;
begin
  AObj.Free;
end;

procedure Pen_Assign(AObj: TPen; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

//function Pen_HandleAllocated(AObj: TPen): LongBool; cdecl;
//begin
//  Result :=  AObj.HandleAllocated;
//end;

function Pen_GetNamePath(AObj: TPen): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Pen_ClassName(AObj: TPen): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Pen_Equals(AObj: TPen; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Pen_GetHashCode(AObj: TPen): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Pen_ToString(AObj: TPen): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Pen_GetHandle(AObj: TPen): HPEN; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure Pen_SetHandle(AObj: TPen; AValue: HPEN); cdecl;
begin
  AObj.Handle := AValue;
end;

function Pen_GetColor(AObj: TPen): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Pen_SetColor(AObj: TPen; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function Pen_GetMode(AObj: TPen): TPenMode; cdecl;
begin
  Result :=  AObj.Mode;
end;

procedure Pen_SetMode(AObj: TPen; AValue: TPenMode); cdecl;
begin
  AObj.Mode := AValue;
end;

function Pen_GetStyle(AObj: TPen): TPenStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure Pen_SetStyle(AObj: TPen; AValue: TPenStyle); cdecl;
begin
  AObj.Style := AValue;
end;

function Pen_GetWidth(AObj: TPen): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Pen_SetWidth(AObj: TPen; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure Pen_SetOnChange(AObj: TPen; AEventId: NativeUInt); stdcall;
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
  Pen_Create {$IFNDEF MSWINDOWS}name '_Pen_Create'{$ENDIF},
  Pen_Free {$IFNDEF MSWINDOWS}name '_Pen_Free'{$ENDIF},
  Pen_Assign {$IFNDEF MSWINDOWS}name '_Pen_Assign'{$ENDIF},
  //Pen_HandleAllocated {$IFNDEF MSWINDOWS}name '_Pen_HandleAllocated'{$ENDIF},
  Pen_GetNamePath {$IFNDEF MSWINDOWS}name '_Pen_GetNamePath'{$ENDIF},
  Pen_ClassName {$IFNDEF MSWINDOWS}name '_Pen_ClassName'{$ENDIF},
  Pen_Equals {$IFNDEF MSWINDOWS}name '_Pen_Equals'{$ENDIF},
  Pen_GetHashCode {$IFNDEF MSWINDOWS}name '_Pen_GetHashCode'{$ENDIF},
  Pen_ToString {$IFNDEF MSWINDOWS}name '_Pen_ToString'{$ENDIF},
  Pen_GetHandle {$IFNDEF MSWINDOWS}name '_Pen_GetHandle'{$ENDIF},
  Pen_SetHandle {$IFNDEF MSWINDOWS}name '_Pen_SetHandle'{$ENDIF},
  Pen_GetColor {$IFNDEF MSWINDOWS}name '_Pen_GetColor'{$ENDIF},
  Pen_SetColor {$IFNDEF MSWINDOWS}name '_Pen_SetColor'{$ENDIF},
  Pen_GetMode {$IFNDEF MSWINDOWS}name '_Pen_GetMode'{$ENDIF},
  Pen_SetMode {$IFNDEF MSWINDOWS}name '_Pen_SetMode'{$ENDIF},
  Pen_GetStyle {$IFNDEF MSWINDOWS}name '_Pen_GetStyle'{$ENDIF},
  Pen_SetStyle {$IFNDEF MSWINDOWS}name '_Pen_SetStyle'{$ENDIF},
  Pen_GetWidth {$IFNDEF MSWINDOWS}name '_Pen_GetWidth'{$ENDIF},
  Pen_SetWidth {$IFNDEF MSWINDOWS}name '_Pen_SetWidth'{$ENDIF},
  Pen_SetOnChange {$IFNDEF MSWINDOWS}name '_Pen_SetOnChange'{$ENDIF};

