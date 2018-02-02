//https://otvet.mail.ru/question/165774361
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function GIFFrame_Create(AOwner: TGIFImage): TGIFFrame; cdecl;
begin
  Result :=  TGIFFrame.Create(AOwner);
end;

procedure GIFFrame_Free(AObj: TGIFFrame); cdecl;
begin
  AObj.Free;
end;

procedure GIFFrame_Clear(AObj: TGIFFrame); cdecl;
begin
  AObj.Clear;
end;

procedure GIFFrame_SaveToStream(AObj: TGIFFrame; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

procedure GIFFrame_LoadFromStream(AObj: TGIFFrame; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure GIFFrame_Assign(AObj: TGIFFrame; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure GIFFrame_SaveToFile(AObj: TGIFFrame; Filename: PWideChar); cdecl;
begin
  AObj.SaveToFile(Filename);
end;

procedure GIFFrame_LoadFromFile(AObj: TGIFFrame; Filename: PWideChar); cdecl;
begin
  AObj.LoadFromFile(Filename);
end;

function GIFFrame_GetNamePath(AObj: TGIFFrame): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function GIFFrame_ClassName(AObj: TGIFFrame): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function GIFFrame_Equals(AObj: TGIFFrame; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function GIFFrame_GetHashCode(AObj: TGIFFrame): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function GIFFrame_ToString(AObj: TGIFFrame): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function GIFFrame_GetHasBitmap(AObj: TGIFFrame): LongBool; cdecl;
begin
  Result :=  AObj.HasBitmap;
end;

procedure GIFFrame_SetHasBitmap(AObj: TGIFFrame; AValue: LongBool); cdecl;
begin
  AObj.HasBitmap := AValue;
end;

function GIFFrame_GetLeft(AObj: TGIFFrame): Word; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure GIFFrame_SetLeft(AObj: TGIFFrame; AValue: Word); cdecl;
begin
  AObj.Left := AValue;
end;

function GIFFrame_GetTop(AObj: TGIFFrame): Word; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure GIFFrame_SetTop(AObj: TGIFFrame; AValue: Word); cdecl;
begin
  AObj.Top := AValue;
end;

function GIFFrame_GetWidth(AObj: TGIFFrame): Word; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure GIFFrame_SetWidth(AObj: TGIFFrame; AValue: Word); cdecl;
begin
  AObj.Width := AValue;
end;

function GIFFrame_GetHeight(AObj: TGIFFrame): Word; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure GIFFrame_SetHeight(AObj: TGIFFrame; AValue: Word); cdecl;
begin
  AObj.Height := AValue;
end;

procedure GIFFrame_GetBoundsRect(AObj: TGIFFrame; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure GIFFrame_SetBoundsRect(AObj: TGIFFrame; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

procedure GIFFrame_GetClientRect(AObj: TGIFFrame; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function GIFFrame_GetData(AObj: TGIFFrame): PByte; cdecl;
begin
  Result :=  AObj.Data;
end;

function GIFFrame_GetDataSize(AObj: TGIFFrame): Integer; cdecl;
begin
  Result :=  AObj.DataSize;
end;

function GIFFrame_GetVersion(AObj: TGIFFrame): TGIFVersion; cdecl;
begin
  Result :=  AObj.Version;
end;

function GIFFrame_GetBitsPerPixel(AObj: TGIFFrame): Integer; cdecl;
begin
  Result :=  AObj.BitsPerPixel;
end;

function GIFFrame_GetBitmap(AObj: TGIFFrame): TBitmap; cdecl;
begin
  Result :=  AObj.Bitmap;
end;

procedure GIFFrame_SetBitmap(AObj: TGIFFrame; AValue: TBitmap); cdecl;
begin
  AObj.Bitmap := AValue;
end;

function GIFFrame_GetEmpty(AObj: TGIFFrame): LongBool; cdecl;
begin
  Result :=  AObj.Empty;
end;

function GIFFrame_GetTransparent(AObj: TGIFFrame): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;


exports
  GIFFrame_Create {$IFNDEF MSWINDOWS}name '_GIFFrame_Create'{$ENDIF},
  GIFFrame_Free {$IFNDEF MSWINDOWS}name '_GIFFrame_Free'{$ENDIF},
  GIFFrame_Clear {$IFNDEF MSWINDOWS}name '_GIFFrame_Clear'{$ENDIF},
  GIFFrame_SaveToStream {$IFNDEF MSWINDOWS}name '_GIFFrame_SaveToStream'{$ENDIF},
  GIFFrame_LoadFromStream {$IFNDEF MSWINDOWS}name '_GIFFrame_LoadFromStream'{$ENDIF},
  GIFFrame_Assign {$IFNDEF MSWINDOWS}name '_GIFFrame_Assign'{$ENDIF},
  GIFFrame_SaveToFile {$IFNDEF MSWINDOWS}name '_GIFFrame_SaveToFile'{$ENDIF},
  GIFFrame_LoadFromFile {$IFNDEF MSWINDOWS}name '_GIFFrame_LoadFromFile'{$ENDIF},
  GIFFrame_GetNamePath {$IFNDEF MSWINDOWS}name '_GIFFrame_GetNamePath'{$ENDIF},
  GIFFrame_ClassName {$IFNDEF MSWINDOWS}name '_GIFFrame_ClassName'{$ENDIF},
  GIFFrame_Equals {$IFNDEF MSWINDOWS}name '_GIFFrame_Equals'{$ENDIF},
  GIFFrame_GetHashCode {$IFNDEF MSWINDOWS}name '_GIFFrame_GetHashCode'{$ENDIF},
  GIFFrame_ToString {$IFNDEF MSWINDOWS}name '_GIFFrame_ToString'{$ENDIF},
  GIFFrame_GetHasBitmap {$IFNDEF MSWINDOWS}name '_GIFFrame_GetHasBitmap'{$ENDIF},
  GIFFrame_SetHasBitmap {$IFNDEF MSWINDOWS}name '_GIFFrame_SetHasBitmap'{$ENDIF},
  GIFFrame_GetLeft {$IFNDEF MSWINDOWS}name '_GIFFrame_GetLeft'{$ENDIF},
  GIFFrame_SetLeft {$IFNDEF MSWINDOWS}name '_GIFFrame_SetLeft'{$ENDIF},
  GIFFrame_GetTop {$IFNDEF MSWINDOWS}name '_GIFFrame_GetTop'{$ENDIF},
  GIFFrame_SetTop {$IFNDEF MSWINDOWS}name '_GIFFrame_SetTop'{$ENDIF},
  GIFFrame_GetWidth {$IFNDEF MSWINDOWS}name '_GIFFrame_GetWidth'{$ENDIF},
  GIFFrame_SetWidth {$IFNDEF MSWINDOWS}name '_GIFFrame_SetWidth'{$ENDIF},
  GIFFrame_GetHeight {$IFNDEF MSWINDOWS}name '_GIFFrame_GetHeight'{$ENDIF},
  GIFFrame_SetHeight {$IFNDEF MSWINDOWS}name '_GIFFrame_SetHeight'{$ENDIF},
  GIFFrame_GetBoundsRect {$IFNDEF MSWINDOWS}name '_GIFFrame_GetBoundsRect'{$ENDIF},
  GIFFrame_SetBoundsRect {$IFNDEF MSWINDOWS}name '_GIFFrame_SetBoundsRect'{$ENDIF},
  GIFFrame_GetClientRect {$IFNDEF MSWINDOWS}name '_GIFFrame_GetClientRect'{$ENDIF},
  GIFFrame_GetData {$IFNDEF MSWINDOWS}name '_GIFFrame_GetData'{$ENDIF},
  GIFFrame_GetDataSize {$IFNDEF MSWINDOWS}name '_GIFFrame_GetDataSize'{$ENDIF},
  GIFFrame_GetVersion {$IFNDEF MSWINDOWS}name '_GIFFrame_GetVersion'{$ENDIF},
  GIFFrame_GetBitsPerPixel {$IFNDEF MSWINDOWS}name '_GIFFrame_GetBitsPerPixel'{$ENDIF},
  GIFFrame_GetBitmap {$IFNDEF MSWINDOWS}name '_GIFFrame_GetBitmap'{$ENDIF},
  GIFFrame_SetBitmap {$IFNDEF MSWINDOWS}name '_GIFFrame_SetBitmap'{$ENDIF},
  GIFFrame_GetEmpty {$IFNDEF MSWINDOWS}name '_GIFFrame_GetEmpty'{$ENDIF},
  GIFFrame_GetTransparent {$IFNDEF MSWINDOWS}name '_GIFFrame_GetTransparent'{$ENDIF};

