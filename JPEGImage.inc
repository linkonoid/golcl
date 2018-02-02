
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function JPEGImage_Create: TJPEGImage; cdecl;
begin
  Result :=  TJPEGImage.Create;
end;

procedure JPEGImage_Free(AObj: TJPEGImage); cdecl;
begin
  AObj.Free;
end;

procedure JPEGImage_Assign(AObj: TJPEGImage; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure JPEGImage_LoadFromStream(AObj: TJPEGImage; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure JPEGImage_SaveToStream(AObj: TJPEGImage; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

function JPEGImage_Equals(AObj: TJPEGImage; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

procedure JPEGImage_LoadFromFile(AObj: TJPEGImage; Filename: PWideChar); cdecl;
begin
  AObj.LoadFromFile(Filename);
end;

procedure JPEGImage_SaveToFile(AObj: TJPEGImage; Filename: PWideChar); cdecl;
begin
  AObj.SaveToFile(Filename);
end;

procedure JPEGImage_SetSize(AObj: TJPEGImage; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetSize(AWidth, AHeight);
end;

function JPEGImage_GetNamePath(AObj: TJPEGImage): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function JPEGImage_ClassName(AObj: TJPEGImage): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function JPEGImage_GetHashCode(AObj: TJPEGImage): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function JPEGImage_ToString(AObj: TJPEGImage): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

//function JPEGImage_GetPixelFormat(AObj: TJPEGImage): TJPEGPixelFormat; cdecl;
//begin
//  Result :=  AObj.PixelFormat;
//end;
//
//procedure JPEGImage_SetPixelFormat(AObj: TJPEGImage; AValue: TJPEGPixelFormat); cdecl;
//begin
//  AObj.PixelFormat := AValue;
//end;
//
//function JPEGImage_GetProgressiveDisplay(AObj: TJPEGImage): LongBool; cdecl;
//begin
//  Result :=  AObj.ProgressiveDisplay;
//end;
//
//procedure JPEGImage_SetProgressiveDisplay(AObj: TJPEGImage; AValue: LongBool); cdecl;
//begin
//  AObj.ProgressiveDisplay := AValue;
//end;

function JPEGImage_GetPerformance(AObj: TJPEGImage): TJPEGPerformance; cdecl;
begin
  Result :=  AObj.Performance;
end;

procedure JPEGImage_SetPerformance(AObj: TJPEGImage; AValue: TJPEGPerformance); cdecl;
begin
  AObj.Performance := AValue;
end;

//function JPEGImage_GetScale(AObj: TJPEGImage): TJPEGScale; cdecl;
//begin
//  Result :=  AObj.Scale;
//end;
//
//procedure JPEGImage_SetScale(AObj: TJPEGImage; AValue: TJPEGScale); cdecl;
//begin
//  AObj.Scale := AValue;
//end;
//
//function JPEGImage_GetSmoothing(AObj: TJPEGImage): LongBool; cdecl;
//begin
//  Result :=  AObj.Smoothing;
//end;
//
//procedure JPEGImage_SetSmoothing(AObj: TJPEGImage; AValue: LongBool); cdecl;
//begin
//  AObj.Smoothing := AValue;
//end;

function JPEGImage_GetCanvas(AObj: TJPEGImage): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function JPEGImage_GetEmpty(AObj: TJPEGImage): LongBool; cdecl;
begin
  Result :=  AObj.Empty;
end;

function JPEGImage_GetHeight(AObj: TJPEGImage): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure JPEGImage_SetHeight(AObj: TJPEGImage; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function JPEGImage_GetModified(AObj: TJPEGImage): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure JPEGImage_SetModified(AObj: TJPEGImage; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function JPEGImage_GetPaletteModified(AObj: TJPEGImage): LongBool; cdecl;
begin
  Result :=  AObj.PaletteModified;
end;

procedure JPEGImage_SetPaletteModified(AObj: TJPEGImage; AValue: LongBool); cdecl;
begin
  AObj.PaletteModified := AValue;
end;

function JPEGImage_GetTransparent(AObj: TJPEGImage): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure JPEGImage_SetTransparent(AObj: TJPEGImage; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function JPEGImage_GetWidth(AObj: TJPEGImage): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure JPEGImage_SetWidth(AObj: TJPEGImage; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure JPEGImage_SetOnChange(AObj: TJPEGImage; AEventId: NativeUInt); stdcall;
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
  JPEGImage_Create {$IFNDEF MSWINDOWS}name '_JPEGImage_Create'{$ENDIF},
  JPEGImage_Free {$IFNDEF MSWINDOWS}name '_JPEGImage_Free'{$ENDIF},
  JPEGImage_Assign {$IFNDEF MSWINDOWS}name '_JPEGImage_Assign'{$ENDIF},
  JPEGImage_LoadFromStream {$IFNDEF MSWINDOWS}name '_JPEGImage_LoadFromStream'{$ENDIF},
  JPEGImage_SaveToStream {$IFNDEF MSWINDOWS}name '_JPEGImage_SaveToStream'{$ENDIF},
  JPEGImage_Equals {$IFNDEF MSWINDOWS}name '_JPEGImage_Equals'{$ENDIF},
  JPEGImage_LoadFromFile {$IFNDEF MSWINDOWS}name '_JPEGImage_LoadFromFile'{$ENDIF},
  JPEGImage_SaveToFile {$IFNDEF MSWINDOWS}name '_JPEGImage_SaveToFile'{$ENDIF},
  JPEGImage_SetSize {$IFNDEF MSWINDOWS}name '_JPEGImage_SetSize'{$ENDIF},
  JPEGImage_GetNamePath {$IFNDEF MSWINDOWS}name '_JPEGImage_GetNamePath'{$ENDIF},
  JPEGImage_ClassName {$IFNDEF MSWINDOWS}name '_JPEGImage_ClassName'{$ENDIF},
  JPEGImage_GetHashCode {$IFNDEF MSWINDOWS}name '_JPEGImage_GetHashCode'{$ENDIF},
  JPEGImage_ToString {$IFNDEF MSWINDOWS}name '_JPEGImage_ToString'{$ENDIF},
  //JPEGImage_GetPixelFormat {$IFNDEF MSWINDOWS}name '_JPEGImage_GetPixelFormat'{$ENDIF},
  //JPEGImage_SetPixelFormat {$IFNDEF MSWINDOWS}name '_JPEGImage_SetPixelFormat'{$ENDIF},
  //JPEGImage_GetProgressiveDisplay {$IFNDEF MSWINDOWS}name '_JPEGImage_GetProgressiveDisplay'{$ENDIF},
  //JPEGImage_SetProgressiveDisplay {$IFNDEF MSWINDOWS}name '_JPEGImage_SetProgressiveDisplay'{$ENDIF},
  JPEGImage_GetPerformance {$IFNDEF MSWINDOWS}name '_JPEGImage_GetPerformance'{$ENDIF},
  JPEGImage_SetPerformance {$IFNDEF MSWINDOWS}name '_JPEGImage_SetPerformance'{$ENDIF},
  //JPEGImage_GetScale {$IFNDEF MSWINDOWS}name '_JPEGImage_GetScale'{$ENDIF},
  //JPEGImage_SetScale {$IFNDEF MSWINDOWS}name '_JPEGImage_SetScale'{$ENDIF},
  //JPEGImage_GetSmoothing {$IFNDEF MSWINDOWS}name '_JPEGImage_GetSmoothing'{$ENDIF},
  //JPEGImage_SetSmoothing {$IFNDEF MSWINDOWS}name '_JPEGImage_SetSmoothing'{$ENDIF},
  JPEGImage_GetCanvas {$IFNDEF MSWINDOWS}name '_JPEGImage_GetCanvas'{$ENDIF},
  JPEGImage_GetEmpty {$IFNDEF MSWINDOWS}name '_JPEGImage_GetEmpty'{$ENDIF},
  JPEGImage_GetHeight {$IFNDEF MSWINDOWS}name '_JPEGImage_GetHeight'{$ENDIF},
  JPEGImage_SetHeight {$IFNDEF MSWINDOWS}name '_JPEGImage_SetHeight'{$ENDIF},
  JPEGImage_GetModified {$IFNDEF MSWINDOWS}name '_JPEGImage_GetModified'{$ENDIF},
  JPEGImage_SetModified {$IFNDEF MSWINDOWS}name '_JPEGImage_SetModified'{$ENDIF},
  JPEGImage_GetPaletteModified {$IFNDEF MSWINDOWS}name '_JPEGImage_GetPaletteModified'{$ENDIF},
  JPEGImage_SetPaletteModified {$IFNDEF MSWINDOWS}name '_JPEGImage_SetPaletteModified'{$ENDIF},
  JPEGImage_GetTransparent {$IFNDEF MSWINDOWS}name '_JPEGImage_GetTransparent'{$ENDIF},
  JPEGImage_SetTransparent {$IFNDEF MSWINDOWS}name '_JPEGImage_SetTransparent'{$ENDIF},
  JPEGImage_GetWidth {$IFNDEF MSWINDOWS}name '_JPEGImage_GetWidth'{$ENDIF},
  JPEGImage_SetWidth {$IFNDEF MSWINDOWS}name '_JPEGImage_SetWidth'{$ENDIF},
  JPEGImage_SetOnChange {$IFNDEF MSWINDOWS}name '_JPEGImage_SetOnChange'{$ENDIF};

