
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Brush_Create: TBrush; cdecl;
begin
  Result :=  TBrush.Create;
end;

procedure Brush_Free(AObj: TBrush); cdecl;
begin
  AObj.Free;
end;

procedure Brush_Assign(AObj: TBrush; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

//function Brush_HandleAllocated(AObj: TBrush): LongBool; cdecl;
//begin
//  Result :=  AObj.HandleAllocated;
//end;

function Brush_GetNamePath(AObj: TBrush): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Brush_ClassName(AObj: TBrush): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Brush_Equals(AObj: TBrush; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Brush_GetHashCode(AObj: TBrush): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Brush_ToString(AObj: TBrush): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Brush_GetBitmap(AObj: TBrush): TCustomBitmap; cdecl;
begin
  Result :=  AObj.Bitmap;
end;

procedure Brush_SetBitmap(AObj: TBrush; AValue: TBitmap); cdecl;
begin
  AObj.Bitmap := AValue;
end;

function Brush_GetHandle(AObj: TBrush): HBRUSH; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure Brush_SetHandle(AObj: TBrush; AValue: HBRUSH); cdecl;
begin
  AObj.Handle := AValue;
end;

function Brush_GetColor(AObj: TBrush): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Brush_SetColor(AObj: TBrush; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function Brush_GetStyle(AObj: TBrush): TBrushStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure Brush_SetStyle(AObj: TBrush; AValue: TBrushStyle); cdecl;
begin
  AObj.Style := AValue;
end;

procedure Brush_SetOnChange(AObj: TBrush; AEventId: NativeUInt); stdcall;
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
  Brush_Create {$IFNDEF MSWINDOWS}name '_Brush_Create'{$ENDIF},
  Brush_Free {$IFNDEF MSWINDOWS}name '_Brush_Free'{$ENDIF},
  Brush_Assign {$IFNDEF MSWINDOWS}name '_Brush_Assign'{$ENDIF},
  //Brush_HandleAllocated {$IFNDEF MSWINDOWS}name '_Brush_HandleAllocated'{$ENDIF},
  Brush_GetNamePath {$IFNDEF MSWINDOWS}name '_Brush_GetNamePath'{$ENDIF},
  Brush_ClassName {$IFNDEF MSWINDOWS}name '_Brush_ClassName'{$ENDIF},
  Brush_Equals {$IFNDEF MSWINDOWS}name '_Brush_Equals'{$ENDIF},
  Brush_GetHashCode {$IFNDEF MSWINDOWS}name '_Brush_GetHashCode'{$ENDIF},
  Brush_ToString {$IFNDEF MSWINDOWS}name '_Brush_ToString'{$ENDIF},
  Brush_GetBitmap {$IFNDEF MSWINDOWS}name '_Brush_GetBitmap'{$ENDIF},
  Brush_SetBitmap {$IFNDEF MSWINDOWS}name '_Brush_SetBitmap'{$ENDIF},
  Brush_GetHandle {$IFNDEF MSWINDOWS}name '_Brush_GetHandle'{$ENDIF},
  Brush_SetHandle {$IFNDEF MSWINDOWS}name '_Brush_SetHandle'{$ENDIF},
  Brush_GetColor {$IFNDEF MSWINDOWS}name '_Brush_GetColor'{$ENDIF},
  Brush_SetColor {$IFNDEF MSWINDOWS}name '_Brush_SetColor'{$ENDIF},
  Brush_GetStyle {$IFNDEF MSWINDOWS}name '_Brush_GetStyle'{$ENDIF},
  Brush_SetStyle {$IFNDEF MSWINDOWS}name '_Brush_SetStyle'{$ENDIF},
  Brush_SetOnChange {$IFNDEF MSWINDOWS}name '_Brush_SetOnChange'{$ENDIF};

