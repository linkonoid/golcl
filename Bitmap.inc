
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Bitmap_Create: TBitmap; cdecl;
begin
  Result :=  TBitmap.Create;
end;

procedure Bitmap_Free(AObj: TBitmap); cdecl;
begin
  AObj.Free;
end;

procedure Bitmap_Assign(AObj: TBitmap; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Bitmap_HandleAllocated(AObj: TBitmap): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Bitmap_LoadFromStream(AObj: TBitmap; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure Bitmap_SaveToStream(AObj: TBitmap; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

procedure Bitmap_SetSize(AObj: TBitmap; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetSize(AWidth, AHeight);
end;

procedure Bitmap_LoadFromResourceName(AObj: TBitmap; Instance: NativeUInt; ResName: PWideChar); cdecl;
begin
  AObj.LoadFromResourceName(Instance, ResName);
end;

procedure Bitmap_LoadFromResourceID(AObj: TBitmap; Instance: NativeUInt; ResID: Integer); cdecl;
begin
{$IFDEF MSWINDOWS}
  AObj.LoadFromResourceID(Instance, ResID);
{$ENDIF MSWINDOWS}
end;

function Bitmap_Equals(AObj: TBitmap; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

procedure Bitmap_LoadFromFile(AObj: TBitmap; Filename: PWideChar); cdecl;
begin
  AObj.LoadFromFile(Filename);
end;

procedure Bitmap_SaveToFile(AObj: TBitmap; Filename: PWideChar); cdecl;
begin
  AObj.SaveToFile(Filename);
end;

function Bitmap_GetNamePath(AObj: TBitmap): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Bitmap_ClassName(AObj: TBitmap): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Bitmap_GetHashCode(AObj: TBitmap): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Bitmap_ToString(AObj: TBitmap): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Bitmap_GetCanvas(AObj: TBitmap): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function Bitmap_GetHandle(AObj: TBitmap): HBITMAP; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure Bitmap_SetHandle(AObj: TBitmap; AValue: HBITMAP); cdecl;
begin
  AObj.Handle := AValue;
end;

function Bitmap_GetPixelFormat(AObj: TBitmap): TPixelFormat; cdecl;
begin
  Result :=  AObj.PixelFormat;
end;

procedure Bitmap_SetPixelFormat(AObj: TBitmap; AValue: TPixelFormat); cdecl;
begin
  AObj.PixelFormat := AValue;
end;

function Bitmap_GetTransparentColor(AObj: TBitmap): TColor; cdecl;
begin
  Result :=  AObj.TransparentColor;
end;

procedure Bitmap_SetTransparentColor(AObj: TBitmap; AValue: TColor); cdecl;
begin
  AObj.TransparentColor := AValue;
end;

function Bitmap_GetEmpty(AObj: TBitmap): LongBool; cdecl;
begin
  Result :=  AObj.Empty;
end;

function Bitmap_GetHeight(AObj: TBitmap): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Bitmap_SetHeight(AObj: TBitmap; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Bitmap_GetModified(AObj: TBitmap): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure Bitmap_SetModified(AObj: TBitmap; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function Bitmap_GetPaletteModified(AObj: TBitmap): LongBool; cdecl;
begin
  Result :=  AObj.PaletteModified;
end;

procedure Bitmap_SetPaletteModified(AObj: TBitmap; AValue: LongBool); cdecl;
begin
  AObj.PaletteModified := AValue;
end;

function Bitmap_GetTransparent(AObj: TBitmap): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure Bitmap_SetTransparent(AObj: TBitmap; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function Bitmap_GetWidth(AObj: TBitmap): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Bitmap_SetWidth(AObj: TBitmap; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure Bitmap_SetOnChange(AObj: TBitmap; AEventId: NativeUInt); stdcall;
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

function Bitmap_GetScanLine(AObj: TBitmap; Row: Integer): Pointer; cdecl;
begin
  Result :=  AObj.ScanLine[Row];
end;


exports
  Bitmap_Create {$IFNDEF MSWINDOWS}name '_Bitmap_Create'{$ENDIF},
  Bitmap_Free {$IFNDEF MSWINDOWS}name '_Bitmap_Free'{$ENDIF},
  Bitmap_Assign {$IFNDEF MSWINDOWS}name '_Bitmap_Assign'{$ENDIF},
  Bitmap_HandleAllocated {$IFNDEF MSWINDOWS}name '_Bitmap_HandleAllocated'{$ENDIF},
  Bitmap_LoadFromStream {$IFNDEF MSWINDOWS}name '_Bitmap_LoadFromStream'{$ENDIF},
  Bitmap_SaveToStream {$IFNDEF MSWINDOWS}name '_Bitmap_SaveToStream'{$ENDIF},
  Bitmap_SetSize {$IFNDEF MSWINDOWS}name '_Bitmap_SetSize'{$ENDIF},
  Bitmap_LoadFromResourceName {$IFNDEF MSWINDOWS}name '_Bitmap_LoadFromResourceName'{$ENDIF},
  Bitmap_LoadFromResourceID {$IFNDEF MSWINDOWS}name '_Bitmap_LoadFromResourceID'{$ENDIF},
  Bitmap_Equals {$IFNDEF MSWINDOWS}name '_Bitmap_Equals'{$ENDIF},
  Bitmap_LoadFromFile {$IFNDEF MSWINDOWS}name '_Bitmap_LoadFromFile'{$ENDIF},
  Bitmap_SaveToFile {$IFNDEF MSWINDOWS}name '_Bitmap_SaveToFile'{$ENDIF},
  Bitmap_GetNamePath {$IFNDEF MSWINDOWS}name '_Bitmap_GetNamePath'{$ENDIF},
  Bitmap_ClassName {$IFNDEF MSWINDOWS}name '_Bitmap_ClassName'{$ENDIF},
  Bitmap_GetHashCode {$IFNDEF MSWINDOWS}name '_Bitmap_GetHashCode'{$ENDIF},
  Bitmap_ToString {$IFNDEF MSWINDOWS}name '_Bitmap_ToString'{$ENDIF},
  Bitmap_GetCanvas {$IFNDEF MSWINDOWS}name '_Bitmap_GetCanvas'{$ENDIF},
  Bitmap_GetHandle {$IFNDEF MSWINDOWS}name '_Bitmap_GetHandle'{$ENDIF},
  Bitmap_SetHandle {$IFNDEF MSWINDOWS}name '_Bitmap_SetHandle'{$ENDIF},
  Bitmap_GetPixelFormat {$IFNDEF MSWINDOWS}name '_Bitmap_GetPixelFormat'{$ENDIF},
  Bitmap_SetPixelFormat {$IFNDEF MSWINDOWS}name '_Bitmap_SetPixelFormat'{$ENDIF},
  Bitmap_GetTransparentColor {$IFNDEF MSWINDOWS}name '_Bitmap_GetTransparentColor'{$ENDIF},
  Bitmap_SetTransparentColor {$IFNDEF MSWINDOWS}name '_Bitmap_SetTransparentColor'{$ENDIF},
  Bitmap_GetEmpty {$IFNDEF MSWINDOWS}name '_Bitmap_GetEmpty'{$ENDIF},
  Bitmap_GetHeight {$IFNDEF MSWINDOWS}name '_Bitmap_GetHeight'{$ENDIF},
  Bitmap_SetHeight {$IFNDEF MSWINDOWS}name '_Bitmap_SetHeight'{$ENDIF},
  Bitmap_GetModified {$IFNDEF MSWINDOWS}name '_Bitmap_GetModified'{$ENDIF},
  Bitmap_SetModified {$IFNDEF MSWINDOWS}name '_Bitmap_SetModified'{$ENDIF},
  Bitmap_GetPaletteModified {$IFNDEF MSWINDOWS}name '_Bitmap_GetPaletteModified'{$ENDIF},
  Bitmap_SetPaletteModified {$IFNDEF MSWINDOWS}name '_Bitmap_SetPaletteModified'{$ENDIF},
  Bitmap_GetTransparent {$IFNDEF MSWINDOWS}name '_Bitmap_GetTransparent'{$ENDIF},
  Bitmap_SetTransparent {$IFNDEF MSWINDOWS}name '_Bitmap_SetTransparent'{$ENDIF},
  Bitmap_GetWidth {$IFNDEF MSWINDOWS}name '_Bitmap_GetWidth'{$ENDIF},
  Bitmap_SetWidth {$IFNDEF MSWINDOWS}name '_Bitmap_SetWidth'{$ENDIF},
  Bitmap_SetOnChange {$IFNDEF MSWINDOWS}name '_Bitmap_SetOnChange'{$ENDIF},
  Bitmap_GetScanLine {$IFNDEF MSWINDOWS}name '_Bitmap_GetScanLine'{$ENDIF};

