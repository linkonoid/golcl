
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Picture_Create: TPicture; cdecl;
begin
  Result :=  TPicture.Create;
end;

procedure Picture_Free(AObj: TPicture); cdecl;
begin
  AObj.Free;
end;

procedure Picture_LoadFromFile(AObj: TPicture; Filename: PWideChar); cdecl;
begin
  AObj.LoadFromFile(Filename);
end;

procedure Picture_SaveToFile(AObj: TPicture; Filename: PWideChar); cdecl;
begin
  AObj.SaveToFile(Filename);
end;

procedure Picture_LoadFromStream(AObj: TPicture; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure Picture_SaveToStream(AObj: TPicture; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

procedure Picture_Assign(AObj: TPicture; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Picture_GetNamePath(AObj: TPicture): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Picture_ClassName(AObj: TPicture): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Picture_Equals(AObj: TPicture; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Picture_GetHashCode(AObj: TPicture): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Picture_ToString(AObj: TPicture): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Picture_GetBitmap(AObj: TPicture): TBitmap; cdecl;
begin
  Result :=  AObj.Bitmap;
end;

procedure Picture_SetBitmap(AObj: TPicture; AValue: TBitmap); cdecl;
begin
  AObj.Bitmap := AValue;
end;

function Picture_GetGraphic(AObj: TPicture): TGraphic; cdecl;
begin
  Result :=  AObj.Graphic;
end;

procedure Picture_SetGraphic(AObj: TPicture; AValue: TGraphic); cdecl;
begin
  AObj.Graphic := AValue;
end;

function Picture_GetHeight(AObj: TPicture): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

function Picture_GetIcon(AObj: TPicture): TIcon; cdecl;
begin
  Result :=  AObj.Icon;
end;

procedure Picture_SetIcon(AObj: TPicture; AValue: TIcon); cdecl;
begin
  AObj.Icon := AValue;
end;

function Picture_GetWidth(AObj: TPicture): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Picture_SetOnChange(AObj: TPicture; AEventId: NativeUInt); stdcall;
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
  Picture_Create {$IFNDEF MSWINDOWS}name '_Picture_Create'{$ENDIF},
  Picture_Free {$IFNDEF MSWINDOWS}name '_Picture_Free'{$ENDIF},
  Picture_LoadFromFile {$IFNDEF MSWINDOWS}name '_Picture_LoadFromFile'{$ENDIF},
  Picture_SaveToFile {$IFNDEF MSWINDOWS}name '_Picture_SaveToFile'{$ENDIF},
  Picture_LoadFromStream {$IFNDEF MSWINDOWS}name '_Picture_LoadFromStream'{$ENDIF},
  Picture_SaveToStream {$IFNDEF MSWINDOWS}name '_Picture_SaveToStream'{$ENDIF},
  Picture_Assign {$IFNDEF MSWINDOWS}name '_Picture_Assign'{$ENDIF},
  Picture_GetNamePath {$IFNDEF MSWINDOWS}name '_Picture_GetNamePath'{$ENDIF},
  Picture_ClassName {$IFNDEF MSWINDOWS}name '_Picture_ClassName'{$ENDIF},
  Picture_Equals {$IFNDEF MSWINDOWS}name '_Picture_Equals'{$ENDIF},
  Picture_GetHashCode {$IFNDEF MSWINDOWS}name '_Picture_GetHashCode'{$ENDIF},
  Picture_ToString {$IFNDEF MSWINDOWS}name '_Picture_ToString'{$ENDIF},
  Picture_GetBitmap {$IFNDEF MSWINDOWS}name '_Picture_GetBitmap'{$ENDIF},
  Picture_SetBitmap {$IFNDEF MSWINDOWS}name '_Picture_SetBitmap'{$ENDIF},
  Picture_GetGraphic {$IFNDEF MSWINDOWS}name '_Picture_GetGraphic'{$ENDIF},
  Picture_SetGraphic {$IFNDEF MSWINDOWS}name '_Picture_SetGraphic'{$ENDIF},
  Picture_GetHeight {$IFNDEF MSWINDOWS}name '_Picture_GetHeight'{$ENDIF},
  Picture_GetIcon {$IFNDEF MSWINDOWS}name '_Picture_GetIcon'{$ENDIF},
  Picture_SetIcon {$IFNDEF MSWINDOWS}name '_Picture_SetIcon'{$ENDIF},
  Picture_GetWidth {$IFNDEF MSWINDOWS}name '_Picture_GetWidth'{$ENDIF},
  Picture_SetOnChange {$IFNDEF MSWINDOWS}name '_Picture_SetOnChange'{$ENDIF};

