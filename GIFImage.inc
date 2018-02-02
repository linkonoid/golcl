
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function GIFImage_Create: TGIFImage; cdecl;
begin
  Result :=  TGIFImage.Create;
end;

procedure GIFImage_Free(AObj: TGIFImage); cdecl;
begin
  AObj.Free;
end;

procedure GIFImage_SaveToStream(AObj: TGIFImage; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

procedure GIFImage_LoadFromStream(AObj: TGIFImage; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

//function GIFImage_Add(AObj: TGIFImage; Source: TPersistent): TGIFFrame; cdecl;
//begin
//  Result :=  AObj.Add(Source);
//end;

procedure GIFImage_Clear(AObj: TGIFImage); cdecl;
begin
  AObj.Clear;
end;

procedure GIFImage_Assign(AObj: TGIFImage; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

//procedure GIFImage_StopDraw(AObj: TGIFImage); cdecl;
//begin
//  AObj.StopDraw;
//end;
//
//procedure GIFImage_SuspendDraw(AObj: TGIFImage); cdecl;
//begin
//  AObj.SuspendDraw;
//end;
//
//procedure GIFImage_ResumeDraw(AObj: TGIFImage); cdecl;
//begin
//  AObj.ResumeDraw;
//end;

function GIFImage_Equals(AObj: TGIFImage; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

procedure GIFImage_LoadFromFile(AObj: TGIFImage; Filename: PWideChar); cdecl;
begin
  AObj.LoadFromFile(Filename);
end;

procedure GIFImage_SaveToFile(AObj: TGIFImage; Filename: PWideChar); cdecl;
begin
  AObj.SaveToFile(Filename);
end;

procedure GIFImage_SetSize(AObj: TGIFImage; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetSize(AWidth, AHeight);
end;

function GIFImage_GetNamePath(AObj: TGIFImage): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function GIFImage_ClassName(AObj: TGIFImage): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function GIFImage_GetHashCode(AObj: TGIFImage): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function GIFImage_ToString(AObj: TGIFImage): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

//function GIFImage_GetVersion(AObj: TGIFImage): TGIFVersion; cdecl;
//begin
//  Result :=  AObj.Version;
//end;

function GIFImage_GetBitsPerPixel(AObj: TGIFImage): Integer; cdecl;
begin
  Result :=  AObj.BitsPerPixel;
end;

//function GIFImage_GetBackgroundColor(AObj: TGIFImage): TColor; cdecl;
//begin
//  Result :=  AObj.BackgroundColor;
//end;
//
//procedure GIFImage_SetBackgroundColor(AObj: TGIFImage; AValue: TColor); cdecl;
//begin
//  AObj.BackgroundColor := AValue;
//end;
//
//function GIFImage_GetAspectRatio(AObj: TGIFImage): Byte; cdecl;
//begin
//  Result :=  AObj.AspectRatio;
//end;
//
//procedure GIFImage_SetAspectRatio(AObj: TGIFImage; AValue: Byte); cdecl;
//begin
//  AObj.AspectRatio := AValue;
//end;
//
//function GIFImage_GetIsTransparent(AObj: TGIFImage): LongBool; cdecl;
//begin
//  Result :=  AObj.IsTransparent;
//end;
//
//function GIFImage_GetAnimationSpeed(AObj: TGIFImage): Integer; cdecl;
//begin
//  Result :=  AObj.AnimationSpeed;
//end;
//
//procedure GIFImage_SetAnimationSpeed(AObj: TGIFImage; AValue: Integer); cdecl;
//begin
//  AObj.AnimationSpeed := AValue;
//end;
//
//function GIFImage_GetBitmap(AObj: TGIFImage): TBitmap; cdecl;
//begin
//  Result :=  AObj.Bitmap;
//end;

//procedure GIFImage_SetOnPaint(AObj: TGIFImage; AEventId: NativeUInt); stdcall;
//begin
//  if AEventId = 0 then
//  begin
//    AObj.OnPaint := nil;
//    TEventClass.Remove(AObj, gePaint);
//    Exit;
//  end;
//  AObj.OnPaint := TEventClass.OnPaint;
//  TEventClass.Add(AObj, gePaint, AEventId);
//end;
//
//function GIFImage_GetAnimate(AObj: TGIFImage): LongBool; cdecl;
//begin
//  Result :=  AObj.Animate;
//end;
//
//procedure GIFImage_SetAnimate(AObj: TGIFImage; AValue: LongBool); cdecl;
//begin
//  AObj.Animate := AValue;
//end;
//
//function GIFImage_GetAnimateLoop(AObj: TGIFImage): TGIFAnimationLoop; cdecl;
//begin
//  Result :=  AObj.AnimateLoop;
//end;
//
//procedure GIFImage_SetAnimateLoop(AObj: TGIFImage; AValue: TGIFAnimationLoop); cdecl;
//begin
//  AObj.AnimateLoop := AValue;
//end;
//
//function GIFImage_GetShouldDither(AObj: TGIFImage): LongBool; cdecl;
//begin
//  Result :=  AObj.ShouldDither;
//end;

function GIFImage_GetEmpty(AObj: TGIFImage): LongBool; cdecl;
begin
  Result :=  AObj.Empty;
end;

function GIFImage_GetHeight(AObj: TGIFImage): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure GIFImage_SetHeight(AObj: TGIFImage; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function GIFImage_GetModified(AObj: TGIFImage): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure GIFImage_SetModified(AObj: TGIFImage; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function GIFImage_GetPaletteModified(AObj: TGIFImage): LongBool; cdecl;
begin
  Result :=  AObj.PaletteModified;
end;

procedure GIFImage_SetPaletteModified(AObj: TGIFImage; AValue: LongBool); cdecl;
begin
  AObj.PaletteModified := AValue;
end;

function GIFImage_GetTransparent(AObj: TGIFImage): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

//procedure GIFImage_SetTransparent(AObj: TGIFImage; AValue: LongBool); cdecl;
//begin
//  AObj.Transparent := AValue;
//end;

function GIFImage_GetWidth(AObj: TGIFImage): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure GIFImage_SetWidth(AObj: TGIFImage; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure GIFImage_SetOnChange(AObj: TGIFImage; AEventId: NativeUInt); stdcall;
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
  GIFImage_Create {$IFNDEF MSWINDOWS}name '_GIFImage_Create'{$ENDIF},
  GIFImage_Free {$IFNDEF MSWINDOWS}name '_GIFImage_Free'{$ENDIF},
  GIFImage_SaveToStream {$IFNDEF MSWINDOWS}name '_GIFImage_SaveToStream'{$ENDIF},
  GIFImage_LoadFromStream {$IFNDEF MSWINDOWS}name '_GIFImage_LoadFromStream'{$ENDIF},
  //GIFImage_Add {$IFNDEF MSWINDOWS}name '_GIFImage_Add'{$ENDIF},
  GIFImage_Clear {$IFNDEF MSWINDOWS}name '_GIFImage_Clear'{$ENDIF},
  GIFImage_Assign {$IFNDEF MSWINDOWS}name '_GIFImage_Assign'{$ENDIF},
  //GIFImage_StopDraw {$IFNDEF MSWINDOWS}name '_GIFImage_StopDraw'{$ENDIF},
  //GIFImage_SuspendDraw {$IFNDEF MSWINDOWS}name '_GIFImage_SuspendDraw'{$ENDIF},
  //GIFImage_ResumeDraw {$IFNDEF MSWINDOWS}name '_GIFImage_ResumeDraw'{$ENDIF},
  GIFImage_Equals {$IFNDEF MSWINDOWS}name '_GIFImage_Equals'{$ENDIF},
  GIFImage_LoadFromFile {$IFNDEF MSWINDOWS}name '_GIFImage_LoadFromFile'{$ENDIF},
  GIFImage_SaveToFile {$IFNDEF MSWINDOWS}name '_GIFImage_SaveToFile'{$ENDIF},
  GIFImage_SetSize {$IFNDEF MSWINDOWS}name '_GIFImage_SetSize'{$ENDIF},
  GIFImage_GetNamePath {$IFNDEF MSWINDOWS}name '_GIFImage_GetNamePath'{$ENDIF},
  GIFImage_ClassName {$IFNDEF MSWINDOWS}name '_GIFImage_ClassName'{$ENDIF},
  GIFImage_GetHashCode {$IFNDEF MSWINDOWS}name '_GIFImage_GetHashCode'{$ENDIF},
  GIFImage_ToString {$IFNDEF MSWINDOWS}name '_GIFImage_ToString'{$ENDIF},
  //GIFImage_GetVersion {$IFNDEF MSWINDOWS}name '_GIFImage_GetVersion'{$ENDIF},
  GIFImage_GetBitsPerPixel {$IFNDEF MSWINDOWS}name '_GIFImage_GetBitsPerPixel'{$ENDIF},
  //GIFImage_GetBackgroundColor {$IFNDEF MSWINDOWS}name '_GIFImage_GetBackgroundColor'{$ENDIF},
  //GIFImage_SetBackgroundColor {$IFNDEF MSWINDOWS}name '_GIFImage_SetBackgroundColor'{$ENDIF},
  //GIFImage_GetAspectRatio {$IFNDEF MSWINDOWS}name '_GIFImage_GetAspectRatio'{$ENDIF},
  //GIFImage_SetAspectRatio {$IFNDEF MSWINDOWS}name '_GIFImage_SetAspectRatio'{$ENDIF},
  //GIFImage_GetIsTransparent {$IFNDEF MSWINDOWS}name '_GIFImage_GetIsTransparent'{$ENDIF},
  //GIFImage_GetAnimationSpeed {$IFNDEF MSWINDOWS}name '_GIFImage_GetAnimationSpeed'{$ENDIF},
  //GIFImage_SetAnimationSpeed {$IFNDEF MSWINDOWS}name '_GIFImage_SetAnimationSpeed'{$ENDIF},
  //GIFImage_GetBitmap {$IFNDEF MSWINDOWS}name '_GIFImage_GetBitmap'{$ENDIF},
  //GIFImage_SetOnPaint {$IFNDEF MSWINDOWS}name '_GIFImage_SetOnPaint'{$ENDIF},
  //GIFImage_GetAnimate {$IFNDEF MSWINDOWS}name '_GIFImage_GetAnimate'{$ENDIF},
  //GIFImage_SetAnimate {$IFNDEF MSWINDOWS}name '_GIFImage_SetAnimate'{$ENDIF},
  //GIFImage_GetAnimateLoop {$IFNDEF MSWINDOWS}name '_GIFImage_GetAnimateLoop'{$ENDIF},
  //GIFImage_SetAnimateLoop {$IFNDEF MSWINDOWS}name '_GIFImage_SetAnimateLoop'{$ENDIF},
  //GIFImage_GetShouldDither {$IFNDEF MSWINDOWS}name '_GIFImage_GetShouldDither'{$ENDIF},
  GIFImage_GetEmpty {$IFNDEF MSWINDOWS}name '_GIFImage_GetEmpty'{$ENDIF},
  GIFImage_GetHeight {$IFNDEF MSWINDOWS}name '_GIFImage_GetHeight'{$ENDIF},
  GIFImage_SetHeight {$IFNDEF MSWINDOWS}name '_GIFImage_SetHeight'{$ENDIF},
  GIFImage_GetModified {$IFNDEF MSWINDOWS}name '_GIFImage_GetModified'{$ENDIF},
  GIFImage_SetModified {$IFNDEF MSWINDOWS}name '_GIFImage_SetModified'{$ENDIF},
  GIFImage_GetPaletteModified {$IFNDEF MSWINDOWS}name '_GIFImage_GetPaletteModified'{$ENDIF},
  GIFImage_SetPaletteModified {$IFNDEF MSWINDOWS}name '_GIFImage_SetPaletteModified'{$ENDIF},
  GIFImage_GetTransparent {$IFNDEF MSWINDOWS}name '_GIFImage_GetTransparent'{$ENDIF},
  //GIFImage_SetTransparent {$IFNDEF MSWINDOWS}name '_GIFImage_SetTransparent'{$ENDIF},
  GIFImage_GetWidth {$IFNDEF MSWINDOWS}name '_GIFImage_GetWidth'{$ENDIF},
  GIFImage_SetWidth {$IFNDEF MSWINDOWS}name '_GIFImage_SetWidth'{$ENDIF},
  GIFImage_SetOnChange {$IFNDEF MSWINDOWS}name '_GIFImage_SetOnChange'{$ENDIF};

