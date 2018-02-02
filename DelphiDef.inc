 // 枚举都按4字节对齐
{$Z4+}

type
  // 重定定义
  TUnixDateTime = type LongInt; // int64改为LongInt。只精确到秒

function ToUnixTime(ADateTime: TDateTime): TUnixDateTime; inline;
begin
  Result := DateTimeToUnix(ADateTime);
  //Result := DateTimeToUnix(ADateTime, False);
end;

function UnixToTime(ADateTime: TUnixDateTime): TDateTime; inline;
begin
  Result := UnixToDateTime(ADateTime);
  //Result := UnixToDateTime(ADateTime, False);
end;

//function GCallbackPtr(f: NativeUInt; args: Pointer; argcout: NativeUInt): Pointer; cdecl;
//var GCallbackPtr:Pointer;
//begin
//  GCallbackPtr:=args;
//end;


// TControl控件补丁
//type
//  TComponentHelper = class helper for TComponent
//  public
//    procedure LoadedXX;
//  end;
//
//procedure TComponentHelper.LoadedXX;
//begin
//  Loaded;
//end;

// TForm

procedure Form_EnabledMaximize(AObj: TForm; AValue: Boolean); stdcall;
begin
  if AValue then
  begin
    if not(biMaximize in AObj.BorderIcons) then
      AObj.BorderIcons := AObj.BorderIcons + [biMaximize]
  end else
  begin
    if biMaximize in AObj.BorderIcons then
      AObj.BorderIcons := AObj.BorderIcons - [biMaximize]
  end;
end;

procedure Form_EnabledMinimize(AObj: TForm; AValue: Boolean); stdcall;
begin
  if AValue then
  begin
    if not(biMinimize in AObj.BorderIcons) then
      AObj.BorderIcons := AObj.BorderIcons + [biMinimize]
  end else
  begin
    if biMinimize in AObj.BorderIcons then
      AObj.BorderIcons := AObj.BorderIcons - [biMinimize]
  end;
end;

procedure Form_EnabledSystemMenu(AObj: TForm; AValue: Boolean); stdcall;
begin
  if AValue then
  begin
    if not(biSystemMenu in AObj.BorderIcons) then
      AObj.BorderIcons := AObj.BorderIcons + [biSystemMenu]
  end else
  begin
    if biSystemMenu in AObj.BorderIcons then
      AObj.BorderIcons := AObj.BorderIcons - [biSystemMenu]
  end;
end;

// mouse
function Mouse_Instance: TMouse; stdcall;
begin
  Result := Mouse;
end;

// screen
function Screen_Instance: TScreen; stdcall;
begin
  Result := Screen;
end;

function DTextToShortCut(AText: PChar): TShortCut; stdcall;
begin
  Result := TextToShortCut(AText);
end;

function DShortCutToText(AVal: TShortCut): PChar; stdcall;
begin
  Result := PChar(ShortCutToText(AVal));
end;

// TClipboard
function Clipboard_Instance: TClipboard; stdcall;
begin
  Result := Clipboard;
end;

function Clipboard_SetClipboard(NewClipboard: TClipboard): TClipboard; stdcall;
begin
  Result := SetClipboard(NewClipboard);
end;

// TMemoryStream
// function Write(const Buffer; Count: Longint): Longint;
function MemoryStream_Write(AObj: TMemoryStream; Buffer: Pointer; Count: Longint): Longint; stdcall;
begin
  Result := AObj.Write(Buffer^, Count);
end;

// function Read(var Buffer; Count: Longint): Longint;
function MemoryStream_Read(AObj: TMemoryStream; Buffer: Pointer; Count: Longint): Longint; stdcall;
begin
  Result := AObj.Read(Buffer^, Count);
end;

// TCanvas
// Canvas_BrushCopy
// Canvas_CopyRect
// Canvas_Draw1
// Canvas_Draw2
// Canvas_DrawFocusRect
// Canvas_FillRect
// Canvas_FrameRect
// Canvas_StretchDraw
// Canvas_TextRect1
// Canvas_TextRect2

procedure Canvas_BrushCopy(AObj: TCanvas; var Dest: TRect; Bitmap: Graphics.TBitmap;
      var Source: TRect; Color: TColor); stdcall;
begin
  AObj.BrushCopy(Dest, Bitmap, Source, Color);
end;

procedure Canvas_CopyRect(AObj: TCanvas; var Dest: TRect; Canvas: TCanvas;
  var Source: TRect); stdcall;
begin
  AObj.CopyRect(Dest, Canvas, Source);
end;

procedure Canvas_Draw1(AObj: TCanvas; X, Y: Integer; Graphic: TGraphic); stdcall;
begin
  AObj.Draw(X, Y, Graphic);
end;

//procedure Canvas_Draw2(AObj: TCanvas; X, Y: Integer; Graphic: TGraphic; Opacity: Byte); stdcall;
//begin
//  AObj.Draw(X, Y, Graphic, Opacity);
//end;

procedure Canvas_DrawFocusRect(AObj: TCanvas; var ARect: TRect); stdcall;
begin
  AObj.DrawFocusRect(ARect);
end;

procedure Canvas_FillRect(AObj: TCanvas; var Rect: TRect); stdcall;
begin
  AObj.FillRect(Rect);
end;

procedure Canvas_FrameRect(AObj: TCanvas; var Rect: TRect); stdcall;
begin
  AObj.FrameRect(Rect);
end;

procedure Canvas_StretchDraw(AObj: TCanvas; var Rect: TRect; Graphic: TGraphic); stdcall;
begin
  AObj.StretchDraw(Rect, Graphic);
end;

procedure Canvas_TextRect1(AObj: TCanvas; var Rect: TRect; X, Y: Integer; const Text: PChar); stdcall;
begin
  AObj.TextRect(Rect, X, Y, Text);
end;

//function Canvas_TextRect2(AObj: TCanvas; var Rect: TRect; Text: PChar; var AOutStr: PChar; TextFormat: TTextFormat): Integer; stdcall;
//var
//  S: string;
//begin
//  Result := 0;
//  S := Text;
//  AObj.TextRect(Rect, S, TextFormat);
//  if tfModifyString in TextFormat then
//  begin
//    AOutStr := PChar(S);
//    Result := 1;
//  end;
//end;

// TImageList
// ImageList_Draw1
// ImageList_Draw2
// ImageList_DrawOverlay1
// ImageList_DrawOverlay2
// ImageList_GetIcon1
// ImageList_GetIcon2

procedure ImageList_Draw1(AObj: TImageList; Canvas: TCanvas; X, Y, Index: Integer; Enabled: LongBool); stdcall;
begin
  AObj.Draw(Canvas, X, Y, Index, Enabled);
end;

//procedure ImageList_Draw2(AObj: TImageList; Canvas: TCanvas; X, Y, Index: Integer;
//  ADrawingStyle: TDrawingStyle; AImageType: TImageType;
//  Enabled: LongBool); cdecl;
//begin
//  AObj.Draw(Canvas, X, Y, Index, ADrawingStyle, AImageType, Enabled);
//end;
  
//procedure ImageList_DrawOverlay1(AObj: TImageList; Canvas: TCanvas; X, Y: Integer;
//  ImageIndex: Integer; Overlay: TOverlay; Enabled: LongBool); cdecl;
//begin
//  AObj.DrawOverlay(Canvas, X, Y, ImageIndex, Overlay, Enabled);
//end;
//  
//procedure ImageList_DrawOverlay2(AObj: TImageList; Canvas: TCanvas; X, Y: Integer;
//  ImageIndex: Integer; Overlay: TOverlay; ADrawingStyle: TDrawingStyle;
//  AImageType: TImageType; Enabled: LongBool); cdecl;
//begin
//  AObj.DrawOverlay(Canvas, X, Y, ImageIndex, Overlay, ADrawingStyle, AImageType, Enabled);
//end;
  
procedure ImageList_GetIcon1(AObj: TImageList; Index: Integer; Image: TIcon); stdcall;
begin
  AObj.GetIcon(Index, Image);
end;

//procedure ImageList_GetIcon2(AObj: TImageList; Index: Integer; Image: TIcon; ADrawingStyle: TDrawingStyle; AImageType: TImageType); cdecl;
//begin
//  AObj.GetIcon(Index, Image, ADrawingStyle, AImageType);
//end;

procedure SetEventCallback(APtr: Pointer); stdcall;
begin
 //writeln('Lazarus_Set:',PtrUInt(APtr));
 GCallbackPtr := APtr;
end;

procedure DGetParam(Index: NativeInt; AArr: Pointer; out P: TGoParam); stdcall;
begin
 //writeln('Lazarus_Index:',PtrUInt(AArr));
 P := PGoParam(PByte(AArr) + Index * SizeOf(TGoParam))^;
end;

function DStrLen(p: PChar): NativeInt; cdecl;
begin
  Result := Length(p);
end;

procedure DMove(Src, Dest: Pointer; Len: NativeInt); cdecl;
begin
  Move(Src^, Dest^, Len);
end;

function DGetClassName(Obj: TObject): Pchar; cdecl;
var
s : shortstring;
begin
  s := Obj.ClassName + #0;
  Result :=  @s[1];
end;

procedure DShowMessage(AMsg: PWideChar); stdcall;
begin
   ShowMessage(AMsg);
end;

function DGetMainInstance: HINST; stdcall;
begin
  Result := GetModuleHandle(nil);
end;

//function DMessageDlg(const Msg: PChar; DlgType: TMsgDlgType; Buttons: TMsgDlgButtons; HelpCtx: Longint): Integer; cdecl;
//begin
//  Result := MessageDlg(Msg, DlgType, Buttons, HelpCtx);
//end;

function DMessageDlg(const Msg: string; DlgType: TMsgDlgType; Buttons: TMsgDlgButtons; HelpCtx: Longint): Integer; stdcall;
begin
  Result := Integer(MessageDlg(Msg, DlgType, Buttons, HelpCtx));
  //Result:=1;
end;

procedure DSetReportMemoryLeaksOnShutdown(Value: Boolean); cdecl;
begin
{$IFDEF MSWINDOWS}
  //ReportMemoryLeaksOnShutdown := Value;
{$ENDIF MSWINDOWS}
end;

procedure DSysOpen(FileName: PChar); stdcall;
begin
  ShellExecute(0, nil, FileName, nil, nil, SW_SHOW);
end;

// 不想导入包，所以干脆用delphi的得了
function DExtractFilePath(AFileName: PChar): PChar; stdcall;
begin
  Result := PChar(ExtractFilePath(AFileName));
end;

function DFileExists(AFileName: PChar): LongBool; stdcall;
begin
  Result := FileExists(AFileName);
end;

// TStyleManager
// StyleManager_Initialize
// StyleManager_UnInitialize
// StyleManager_IsValidStyle
// StyleManager_LoadFromFile
// StyleManager_CheckSysClassName
// StyleManager_TrySetStyle
// StyleManager_SetStyle1
// StyleManager_SetStyle2
// StyleManager_TryLoadFromResource

//procedure StyleManager_Initialize; cdecl
//begin
//  TStyleManager.Initialize;
//end;
//
//procedure StyleManager_UnInitialize; cdecl
//begin
//  TStyleManager.UnInitialize;
//end;
//
//function StyleManager_IsValidStyle(AFileName: PChar): LongBool; cdecl;
//begin
//  Result := TStyleManager.IsValidStyle(AFileName);
//end;
//
//function StyleManager_LoadFromFile(AFileName: PChar): TStyleManager.TStyleServicesHandle; cdecl;
//begin
//  Result := TStyleManager.LoadFromFile(AFileName);
//end;
//
//function StyleManager_CheckSysClassName(AClassName: PChar): LongBool; cdecl;
//begin
//  Result := TStyleManager.CheckSysClassName(AClassName);
//end;
//
//function StyleManager_TrySetStyle(AName: PChar; ShowErrorDialog: LongBool): LongBool; cdecl;
//begin
//  Result := TStyleManager.TrySetStyle(AName, ShowErrorDialog);
//end;
//
//procedure StyleManager_SetStyle1(Handle: TStyleManager.TStyleServicesHandle); cdecl;
//begin
//  TStyleManager.SetStyle(Handle);
//end;
//
//procedure StyleManager_SetStyle2(AName: PChar); cdecl;
//begin
//  TStyleManager.SetStyle(string(AName));
//end;
//
//function StyleManager_TryLoadFromResource(Instance: HINST; ResourceName: PChar;
//   ResourceType: PChar; var Handle: TStyleManager.TStyleServicesHandle): LongBool; cdecl;
//begin
//  Result := TStyleManager.TryLoadFromResource(Instance, ResourceName, ResourceType, Handle);
//end;

{$IFNDEF MSWINDOWS}
function _Syscall0(AAddr: Pointer): Pointer; cdecl;
{$IFDEF CPUX86}
asm
  CALL AAddr
  MOV Result, EAX
end;
{$ELSE}
asm
end;
{$ENDIF}

function _Syscall1(AAddr: Pointer; p1: Pointer): Pointer; cdecl;
{$IFDEF CPUX86}
asm
  PUSH p1
  CALL AAddr
  MOV Result, EAX
  ADD ESP, 4
end;
{$ELSE}
asm
end;
{$ENDIF}

function _Syscall2(AAddr: Pointer; p1, p2: Pointer): Pointer; cdecl;
{$IFDEF CPUX86}
asm
  PUSH p2
  PUSH p1
  CALL AAddr
  MOV Result, EAX
  ADD ESP, 8
end;
{$ELSE}
asm
end;
{$ENDIF}

function _Syscall3(AAddr: Pointer; p1, p2, p3: Pointer): Pointer; cdecl;
{$IFDEF CPUX86}
asm
  PUSH p3
  PUSH p2
  PUSH p1
  CALL AAddr
  MOV Result, EAX
  ADD ESP, 12
end;
{$ELSE}
asm
end;
{$ENDIF}

function _Syscall4(AAddr: Pointer; p1, p2, p3, p4: Pointer): Pointer; cdecl;
{$IFDEF CPUX86}
asm
  PUSH p4
  PUSH p3
  PUSH p2
  PUSH p1
  CALL AAddr
  MOV Result, EAX
  ADD ESP, 16
end;
{$ELSE}
asm
end;
{$ENDIF}

function _Syscall5(AAddr: Pointer; p1, p2, p3, p4, p5: Pointer): Pointer; cdecl;
{$IFDEF CPUX86}
asm
  PUSH p5
  PUSH p4
  PUSH p3
  PUSH p2
  PUSH p1
  CALL AAddr
  MOV Result, EAX
  ADD ESP, 20
end;
{$ELSE}
asm
end;
{$ENDIF}

function _Syscall6(AAddr: Pointer; p1, p2, p3, p4, p5, p6: Pointer): Pointer; cdecl;
{$IFDEF CPUX86}
asm
  PUSH p6
  PUSH p5
  PUSH p4
  PUSH p3
  PUSH p2
  PUSH p1
  CALL AAddr
  MOV Result, EAX
  ADD ESP, 24
end;
{$ELSE}
asm
end;
{$ENDIF}

function _TestSyscall1(a, a2: Integer): Integer; cdecl;
begin
  Result := a + a2;
end;

procedure _TestSyscall2(a: Integer); cdecl;
begin
  Writeln('a:', a);
end;



{$ENDIF}

exports
  Form_EnabledMaximize {$IFNDEF MSWINDOWS}name '_Form_EnabledMaximize'{$ENDIF},
  Form_EnabledMinimize {$IFNDEF MSWINDOWS}name '_Form_EnabledMinimize'{$ENDIF},
  Form_EnabledSystemMenu {$IFNDEF MSWINDOWS}name '_Form_EnabledSystemMenu'{$ENDIF},


  DSysOpen {$IFNDEF MSWINDOWS}name '_DSysOpen'{$ENDIF},


  Mouse_Instance {$IFNDEF MSWINDOWS}name '_Mouse_Instance'{$ENDIF},
  Screen_Instance {$IFNDEF MSWINDOWS}name '_Screen_Instance'{$ENDIF},

  SetEventCallback {$IFNDEF MSWINDOWS}name '_SetEventCallback'{$ENDIF},
  DGetParam {$IFNDEF MSWINDOWS}name '_DGetParam'{$ENDIF},
  DStrLen {$IFNDEF MSWINDOWS}name '_DStrLen'{$ENDIF},
  DMove {$IFNDEF MSWINDOWS}name '_DMove'{$ENDIF},
  DGetClassName {$IFNDEF MSWINDOWS}name '_DGetClassName'{$ENDIF},
  DShowMessage {$IFNDEF MSWINDOWS}name '_DShowMessage'{$ENDIF},
  DGetMainInstance {$IFNDEF MSWINDOWS}name '_DGetMainInstance'{$ENDIF},


  MemoryStream_Write {$IFNDEF MSWINDOWS}name '_MemoryStream_Write'{$ENDIF},
  MemoryStream_Read {$IFNDEF MSWINDOWS}name '_MemoryStream_Read'{$ENDIF},

  DTextToShortCut {$IFNDEF MSWINDOWS}name '_DTextToShortCut'{$ENDIF},
  DShortCutToText {$IFNDEF MSWINDOWS}name '_DShortCutToText'{$ENDIF},

  Clipboard_Instance {$IFNDEF MSWINDOWS}name '_Clipboard_Instance'{$ENDIF},
  Clipboard_SetClipboard {$IFNDEF MSWINDOWS}name '_Clipboard_SetClipboard'{$ENDIF},

  DMessageDlg {$IFNDEF MSWINDOWS}name '_DMessageDlg'{$ENDIF},

  Canvas_BrushCopy {$IFNDEF MSWINDOWS}name '_Canvas_BrushCopy'{$ENDIF},
  Canvas_CopyRect {$IFNDEF MSWINDOWS}name '_Canvas_CopyRect'{$ENDIF},
  Canvas_Draw1 {$IFNDEF MSWINDOWS}name '_Canvas_Draw1'{$ENDIF},
  //Canvas_Draw2 {$IFNDEF MSWINDOWS}name '_Canvas_Draw2'{$ENDIF},
  Canvas_DrawFocusRect {$IFNDEF MSWINDOWS}name '_Canvas_DrawFocusRect'{$ENDIF},
  Canvas_FillRect {$IFNDEF MSWINDOWS}name '_Canvas_FillRect'{$ENDIF},
  Canvas_FrameRect {$IFNDEF MSWINDOWS}name '_Canvas_FrameRect'{$ENDIF},
  Canvas_StretchDraw {$IFNDEF MSWINDOWS}name '_Canvas_StretchDraw'{$ENDIF},
  Canvas_TextRect1 {$IFNDEF MSWINDOWS}name '_Canvas_TextRect1'{$ENDIF},
  //Canvas_TextRect2 {$IFNDEF MSWINDOWS}name '_Canvas_TextRect2'{$ENDIF},

  // TImageList
  ImageList_Draw1 {$IFNDEF MSWINDOWS}name '_ImageList_Draw1'{$ENDIF},
  //ImageList_Draw2 {$IFNDEF MSWINDOWS}name '_ImageList_Draw2'{$ENDIF},
  //ImageList_DrawOverlay1 {$IFNDEF MSWINDOWS}name '_ImageList_DrawOverlay1'{$ENDIF},
  //ImageList_DrawOverlay2 {$IFNDEF MSWINDOWS}name '_ImageList_DrawOverlay2'{$ENDIF},
  ImageList_GetIcon1 {$IFNDEF MSWINDOWS}name '_ImageList_GetIcon1'{$ENDIF},
  //ImageList_GetIcon2 {$IFNDEF MSWINDOWS}name '_ImageList_GetIcon2'{$ENDIF},

// TStyleManager
   //StyleManager_Initialize {$IFNDEF MSWINDOWS}name '_StyleManager_Initialize'{$ENDIF},
   //StyleManager_UnInitialize {$IFNDEF MSWINDOWS}name '_StyleManager_UnInitialize'{$ENDIF},
   //StyleManager_IsValidStyle {$IFNDEF MSWINDOWS}name '_StyleManager_IsValidStyle'{$ENDIF},
   //StyleManager_LoadFromFile {$IFNDEF MSWINDOWS}name '_StyleManager_LoadFromFile'{$ENDIF},
   //StyleManager_CheckSysClassName {$IFNDEF MSWINDOWS}name '_StyleManager_CheckSysClassName'{$ENDIF},
   //StyleManager_TrySetStyle {$IFNDEF MSWINDOWS}name '_StyleManager_TrySetStyle'{$ENDIF},
   //StyleManager_SetStyle1 {$IFNDEF MSWINDOWS}name '_StyleManager_SetStyle1'{$ENDIF},
   //StyleManager_SetStyle2 {$IFNDEF MSWINDOWS}name '_StyleManager_SetStyle2'{$ENDIF},
   //StyleManager_TryLoadFromResource {$IFNDEF MSWINDOWS}name '_StyleManager_TryLoadFromResource'{$ENDIF},

  DExtractFilePath{$IFNDEF MSWINDOWS}name '_DExtractFilePath'{$ENDIF},
  DFileExists{$IFNDEF MSWINDOWS}name '_DFileExists'{$ENDIF},

  DSetReportMemoryLeaksOnShutdown {$IFNDEF MSWINDOWS}name '_DSetReportMemoryLeaksOnShutdown'{$ENDIF}
 
{$IFNDEF MSWINDOWS}
  ,_Syscall0
  ,_Syscall1
  ,_Syscall2
  ,_Syscall3
  ,_Syscall4
  ,_Syscall5
  ,_Syscall6
  ,_TestSyscall1
  ,_TestSyscall2
{$ENDIF}
  ;

//Max.S.B.****************************
function ShortstrToPWideChar(s: shortstring): PWideChar; inline;
begin
  s := s + #0;
  Result :=  @s[1];
end;
//https://www.arbinada.com/ru/node/1550
//http://wiki.freepascal.org/fpcup
//http://www.altium.com/contact-us
//************************************
