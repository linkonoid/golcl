
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Font_Create: TFont; cdecl;
begin
  Result :=  TFont.Create;
end;

procedure Font_Free(AObj: TFont); cdecl;
begin
  AObj.Free;
end;

procedure Font_Assign(AObj: TFont; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Font_HandleAllocated(AObj: TFont): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

function Font_GetNamePath(AObj: TFont): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Font_ClassName(AObj: TFont): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Font_Equals(AObj: TFont; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Font_GetHashCode(AObj: TFont): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Font_ToString(AObj: TFont): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Font_GetHandle(AObj: TFont): HFONT; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure Font_SetHandle(AObj: TFont; AValue: HFONT); cdecl;
begin
  AObj.Handle := AValue;
end;

function Font_GetPixelsPerInch(AObj: TFont): Integer; cdecl;
begin
  Result :=  AObj.PixelsPerInch;
end;

procedure Font_SetPixelsPerInch(AObj: TFont; AValue: Integer); cdecl;
begin
  AObj.PixelsPerInch := AValue;
end;

function Font_GetCharset(AObj: TFont): TFontCharset; cdecl;
begin
  Result :=  AObj.Charset;
end;

procedure Font_SetCharset(AObj: TFont; AValue: TFontCharset); cdecl;
begin
  AObj.Charset := AValue;
end;

function Font_GetColor(AObj: TFont): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Font_SetColor(AObj: TFont; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function Font_GetHeight(AObj: TFont): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Font_SetHeight(AObj: TFont; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Font_GetName(AObj: TFont): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Font_SetName(AObj: TFont; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Font_GetOrientation(AObj: TFont): Integer; cdecl;
begin
  Result :=  AObj.Orientation;
end;

procedure Font_SetOrientation(AObj: TFont; AValue: Integer); cdecl;
begin
  AObj.Orientation := AValue;
end;

function Font_GetPitch(AObj: TFont): TFontPitch; cdecl;
begin
  Result :=  AObj.Pitch;
end;

procedure Font_SetPitch(AObj: TFont; AValue: TFontPitch); cdecl;
begin
  AObj.Pitch := AValue;
end;

function Font_GetSize(AObj: TFont): Integer; cdecl;
begin
  Result :=  AObj.Size;
end;

procedure Font_SetSize(AObj: TFont; AValue: Integer); cdecl;
begin
  AObj.Size := AValue;
end;

function Font_GetStyle(AObj: TFont): TFontStyles; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure Font_SetStyle(AObj: TFont; AValue: TFontStyles); cdecl;
begin
  AObj.Style := AValue;
end;

function Font_GetQuality(AObj: TFont): TFontQuality; cdecl;
begin
  Result :=  AObj.Quality;
end;

procedure Font_SetQuality(AObj: TFont; AValue: TFontQuality); cdecl;
begin
  AObj.Quality := AValue;
end;

procedure Font_SetOnChange(AObj: TFont; AEventId: NativeUInt); stdcall;
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
  Font_Create {$IFNDEF MSWINDOWS}name '_Font_Create'{$ENDIF},
  Font_Free {$IFNDEF MSWINDOWS}name '_Font_Free'{$ENDIF},
  Font_Assign {$IFNDEF MSWINDOWS}name '_Font_Assign'{$ENDIF},
  Font_HandleAllocated {$IFNDEF MSWINDOWS}name '_Font_HandleAllocated'{$ENDIF},
  Font_GetNamePath {$IFNDEF MSWINDOWS}name '_Font_GetNamePath'{$ENDIF},
  Font_ClassName {$IFNDEF MSWINDOWS}name '_Font_ClassName'{$ENDIF},
  Font_Equals {$IFNDEF MSWINDOWS}name '_Font_Equals'{$ENDIF},
  Font_GetHashCode {$IFNDEF MSWINDOWS}name '_Font_GetHashCode'{$ENDIF},
  Font_ToString {$IFNDEF MSWINDOWS}name '_Font_ToString'{$ENDIF},
  Font_GetHandle {$IFNDEF MSWINDOWS}name '_Font_GetHandle'{$ENDIF},
  Font_SetHandle {$IFNDEF MSWINDOWS}name '_Font_SetHandle'{$ENDIF},
  Font_GetPixelsPerInch {$IFNDEF MSWINDOWS}name '_Font_GetPixelsPerInch'{$ENDIF},
  Font_SetPixelsPerInch {$IFNDEF MSWINDOWS}name '_Font_SetPixelsPerInch'{$ENDIF},
  Font_GetCharset {$IFNDEF MSWINDOWS}name '_Font_GetCharset'{$ENDIF},
  Font_SetCharset {$IFNDEF MSWINDOWS}name '_Font_SetCharset'{$ENDIF},
  Font_GetColor {$IFNDEF MSWINDOWS}name '_Font_GetColor'{$ENDIF},
  Font_SetColor {$IFNDEF MSWINDOWS}name '_Font_SetColor'{$ENDIF},
  Font_GetHeight {$IFNDEF MSWINDOWS}name '_Font_GetHeight'{$ENDIF},
  Font_SetHeight {$IFNDEF MSWINDOWS}name '_Font_SetHeight'{$ENDIF},
  Font_GetName {$IFNDEF MSWINDOWS}name '_Font_GetName'{$ENDIF},
  Font_SetName {$IFNDEF MSWINDOWS}name '_Font_SetName'{$ENDIF},
  Font_GetOrientation {$IFNDEF MSWINDOWS}name '_Font_GetOrientation'{$ENDIF},
  Font_SetOrientation {$IFNDEF MSWINDOWS}name '_Font_SetOrientation'{$ENDIF},
  Font_GetPitch {$IFNDEF MSWINDOWS}name '_Font_GetPitch'{$ENDIF},
  Font_SetPitch {$IFNDEF MSWINDOWS}name '_Font_SetPitch'{$ENDIF},
  Font_GetSize {$IFNDEF MSWINDOWS}name '_Font_GetSize'{$ENDIF},
  Font_SetSize {$IFNDEF MSWINDOWS}name '_Font_SetSize'{$ENDIF},
  Font_GetStyle {$IFNDEF MSWINDOWS}name '_Font_GetStyle'{$ENDIF},
  Font_SetStyle {$IFNDEF MSWINDOWS}name '_Font_SetStyle'{$ENDIF},
  Font_GetQuality {$IFNDEF MSWINDOWS}name '_Font_GetQuality'{$ENDIF},
  Font_SetQuality {$IFNDEF MSWINDOWS}name '_Font_SetQuality'{$ENDIF},
  Font_SetOnChange {$IFNDEF MSWINDOWS}name '_Font_SetOnChange'{$ENDIF};

