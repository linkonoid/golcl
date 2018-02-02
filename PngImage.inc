
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function PngImage_Create: TPortableNetworkGraphic; cdecl;
begin
  Result :=  TPortableNetworkGraphic.Create;
end;

procedure PngImage_Free(AObj: TPortableNetworkGraphic); cdecl;
begin
  AObj.Free;
end;

procedure PngImage_Assign(AObj: TPortableNetworkGraphic; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure PngImage_LoadFromStream(AObj: TPortableNetworkGraphic; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure PngImage_SaveToStream(AObj: TPortableNetworkGraphic; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

procedure PngImage_LoadFromResourceName(AObj: TPortableNetworkGraphic; Instance: NativeUInt; Name: PWideChar); cdecl;
begin
  AObj.LoadFromResourceName(Instance, Name);
end;

procedure PngImage_LoadFromResourceID(AObj: TPortableNetworkGraphic; Instance: NativeUInt; ResID: Integer); cdecl;
begin
{$IFDEF MSWINDOWS}
  AObj.LoadFromResourceID(Instance, ResID);
{$ENDIF MSWINDOWS}
end;

function PngImage_Equals(AObj: TPortableNetworkGraphic; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

procedure PngImage_LoadFromFile(AObj: TPortableNetworkGraphic; Filename: PWideChar); cdecl;
begin
  AObj.LoadFromFile(Filename);
end;

procedure PngImage_SaveToFile(AObj: TPortableNetworkGraphic; Filename: PWideChar); cdecl;
begin
  AObj.SaveToFile(Filename);
end;

procedure PngImage_SetSize(AObj: TPortableNetworkGraphic; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetSize(AWidth, AHeight);
end;

function PngImage_GetNamePath(AObj: TPortableNetworkGraphic): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function PngImage_ClassName(AObj: TPortableNetworkGraphic): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function PngImage_GetHashCode(AObj: TPortableNetworkGraphic): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function PngImage_ToString(AObj: TPortableNetworkGraphic): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function PngImage_GetTransparentColor(AObj: TPortableNetworkGraphic): TColor; cdecl;
begin
  Result :=  AObj.TransparentColor;
end;

procedure PngImage_SetTransparentColor(AObj: TPortableNetworkGraphic; AValue: TColor); cdecl;
begin
  AObj.TransparentColor := AValue;
end;

function PngImage_GetCanvas(AObj: TPortableNetworkGraphic): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function PngImage_GetWidth(AObj: TPortableNetworkGraphic): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

function PngImage_GetHeight(AObj: TPortableNetworkGraphic): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

//function PngImage_GetMaxIdatSize(AObj: TPortableNetworkGraphic): Integer; cdecl;
//begin
//  Result :=  AObj.MaxIdatSize;
//end;
//
//procedure PngImage_SetMaxIdatSize(AObj: TPortableNetworkGraphic; AValue: Integer); cdecl;
//begin
//  AObj.MaxIdatSize := AValue;
//end;
//
//function PngImage_GetEmpty(AObj: TPortableNetworkGraphic): LongBool; cdecl;
//begin
//  Result :=  AObj.Empty;
//end;
//
//function PngImage_GetCompressionLevel(AObj: TPortableNetworkGraphic): TCompressionLevel; cdecl;
//begin
//  Result :=  AObj.CompressionLevel;
//end;
//
//procedure PngImage_SetCompressionLevel(AObj: TPortableNetworkGraphic; AValue: TCompressionLevel); cdecl;
//begin
//  AObj.CompressionLevel := AValue;
//end;
//
//function PngImage_GetVersion(AObj: TPortableNetworkGraphic): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.Version);
//end;

function PngImage_GetModified(AObj: TPortableNetworkGraphic): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure PngImage_SetModified(AObj: TPortableNetworkGraphic; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function PngImage_GetPaletteModified(AObj: TPortableNetworkGraphic): LongBool; cdecl;
begin
  Result :=  AObj.PaletteModified;
end;

procedure PngImage_SetPaletteModified(AObj: TPortableNetworkGraphic; AValue: LongBool); cdecl;
begin
  AObj.PaletteModified := AValue;
end;

function PngImage_GetTransparent(AObj: TPortableNetworkGraphic): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure PngImage_SetTransparent(AObj: TPortableNetworkGraphic; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

procedure PngImage_SetOnChange(AObj: TPortableNetworkGraphic; AEventId: NativeUInt); stdcall;
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
  PngImage_Create {$IFNDEF MSWINDOWS}name '_PngImage_Create'{$ENDIF},
  PngImage_Free {$IFNDEF MSWINDOWS}name '_PngImage_Free'{$ENDIF},
  PngImage_Assign {$IFNDEF MSWINDOWS}name '_PngImage_Assign'{$ENDIF},
  PngImage_LoadFromStream {$IFNDEF MSWINDOWS}name '_PngImage_LoadFromStream'{$ENDIF},
  PngImage_SaveToStream {$IFNDEF MSWINDOWS}name '_PngImage_SaveToStream'{$ENDIF},
  PngImage_LoadFromResourceName {$IFNDEF MSWINDOWS}name '_PngImage_LoadFromResourceName'{$ENDIF},
  PngImage_LoadFromResourceID {$IFNDEF MSWINDOWS}name '_PngImage_LoadFromResourceID'{$ENDIF},
  PngImage_Equals {$IFNDEF MSWINDOWS}name '_PngImage_Equals'{$ENDIF},
  PngImage_LoadFromFile {$IFNDEF MSWINDOWS}name '_PngImage_LoadFromFile'{$ENDIF},
  PngImage_SaveToFile {$IFNDEF MSWINDOWS}name '_PngImage_SaveToFile'{$ENDIF},
  PngImage_SetSize {$IFNDEF MSWINDOWS}name '_PngImage_SetSize'{$ENDIF},
  PngImage_GetNamePath {$IFNDEF MSWINDOWS}name '_PngImage_GetNamePath'{$ENDIF},
  PngImage_ClassName {$IFNDEF MSWINDOWS}name '_PngImage_ClassName'{$ENDIF},
  PngImage_GetHashCode {$IFNDEF MSWINDOWS}name '_PngImage_GetHashCode'{$ENDIF},
  PngImage_ToString {$IFNDEF MSWINDOWS}name '_PngImage_ToString'{$ENDIF},
  PngImage_GetTransparentColor {$IFNDEF MSWINDOWS}name '_PngImage_GetTransparentColor'{$ENDIF},
  PngImage_SetTransparentColor {$IFNDEF MSWINDOWS}name '_PngImage_SetTransparentColor'{$ENDIF},
  PngImage_GetCanvas {$IFNDEF MSWINDOWS}name '_PngImage_GetCanvas'{$ENDIF},
  PngImage_GetWidth {$IFNDEF MSWINDOWS}name '_PngImage_GetWidth'{$ENDIF},
  PngImage_GetHeight {$IFNDEF MSWINDOWS}name '_PngImage_GetHeight'{$ENDIF},
  //PngImage_GetMaxIdatSize {$IFNDEF MSWINDOWS}name '_PngImage_GetMaxIdatSize'{$ENDIF},
  //PngImage_SetMaxIdatSize {$IFNDEF MSWINDOWS}name '_PngImage_SetMaxIdatSize'{$ENDIF},
  //PngImage_GetEmpty {$IFNDEF MSWINDOWS}name '_PngImage_GetEmpty'{$ENDIF},
  //PngImage_GetCompressionLevel {$IFNDEF MSWINDOWS}name '_PngImage_GetCompressionLevel'{$ENDIF},
  //PngImage_SetCompressionLevel {$IFNDEF MSWINDOWS}name '_PngImage_SetCompressionLevel'{$ENDIF},
  //PngImage_GetVersion {$IFNDEF MSWINDOWS}name '_PngImage_GetVersion'{$ENDIF},
  PngImage_GetModified {$IFNDEF MSWINDOWS}name '_PngImage_GetModified'{$ENDIF},
  PngImage_SetModified {$IFNDEF MSWINDOWS}name '_PngImage_SetModified'{$ENDIF},
  PngImage_GetPaletteModified {$IFNDEF MSWINDOWS}name '_PngImage_GetPaletteModified'{$ENDIF},
  PngImage_SetPaletteModified {$IFNDEF MSWINDOWS}name '_PngImage_SetPaletteModified'{$ENDIF},
  PngImage_GetTransparent {$IFNDEF MSWINDOWS}name '_PngImage_GetTransparent'{$ENDIF},
  PngImage_SetTransparent {$IFNDEF MSWINDOWS}name '_PngImage_SetTransparent'{$ENDIF},
  PngImage_SetOnChange {$IFNDEF MSWINDOWS}name '_PngImage_SetOnChange'{$ENDIF};

