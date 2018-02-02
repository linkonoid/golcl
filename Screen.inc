
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Screen_Create(AOwner: TComponent): TScreen; cdecl;
begin
  Result :=  TScreen.Create(AOwner);
end;

procedure Screen_Free(AObj: TScreen); cdecl;
begin
  AObj.Free;
end;

//procedure Screen_Realign(AObj: TScreen); cdecl;
//begin
//  AObj.Realign;
//end;

function Screen_FindComponent(AObj: TScreen; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Screen_GetNamePath(AObj: TScreen): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Screen_HasParent(AObj: TScreen): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Screen_Assign(AObj: TScreen; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Screen_ClassName(AObj: TScreen): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Screen_Equals(AObj: TScreen; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Screen_GetHashCode(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Screen_ToString(AObj: TScreen): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Screen_GetActiveForm(AObj: TScreen): TForm; cdecl;
begin
  Result :=  AObj.ActiveForm;
end;

function Screen_GetCustomFormCount(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.CustomFormCount;
end;

//function Screen_GetCursorCount(AObj: TScreen): Integer; cdecl;
//begin
//  Result :=  AObj.CursorCount;
//end;

function Screen_GetCursor(AObj: TScreen): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Screen_SetCursor(AObj: TScreen; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Screen_GetFocusedForm(AObj: TScreen): TCustomForm; cdecl;
begin
  Result :=  AObj.FocusedForm;
end;

//procedure Screen_SetFocusedForm(AObj: TScreen; AValue: TCustomForm); cdecl;
//begin
//  AObj.FocusedForm := AValue;
//end;

function Screen_GetMonitorCount(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.MonitorCount;
end;

procedure Screen_GetDesktopRect(AObj: TScreen; var Result: TRect); cdecl;
begin
  Result :=  AObj.DesktopRect;
end;

function Screen_GetDesktopHeight(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.DesktopHeight;
end;

function Screen_GetDesktopLeft(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.DesktopLeft;
end;

function Screen_GetDesktopTop(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.DesktopTop;
end;

function Screen_GetDesktopWidth(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.DesktopWidth;
end;

procedure Screen_GetWorkAreaRect(AObj: TScreen; var Result: TRect); cdecl;
begin
  Result :=  AObj.WorkAreaRect;
end;

function Screen_GetWorkAreaHeight(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.WorkAreaHeight;
end;

function Screen_GetWorkAreaLeft(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.WorkAreaLeft;
end;

function Screen_GetWorkAreaTop(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.WorkAreaTop;
end;

function Screen_GetWorkAreaWidth(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.WorkAreaWidth;
end;

function Screen_GetFonts(AObj: TScreen): TStrings; cdecl;
begin
  Result :=  AObj.Fonts;
end;

//function Screen_GetImes(AObj: TScreen): TStrings; cdecl;
//begin
//  Result :=  AObj.Imes;
//end;
//
//function Screen_GetDefaultIme(AObj: TScreen): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.DefaultIme);
//end;

function Screen_GetHeight(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

function Screen_GetPixelsPerInch(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.PixelsPerInch;
end;

function Screen_GetPrimaryMonitor(AObj: TScreen): TMonitor; cdecl;
begin
  Result :=  AObj.PrimaryMonitor;
end;

function Screen_GetWidth(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

function Screen_GetComponentCount(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Screen_GetComponentIndex(AObj: TScreen): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Screen_SetComponentIndex(AObj: TScreen; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Screen_GetOwner(AObj: TScreen): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Screen_GetName(AObj: TScreen): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Screen_SetName(AObj: TScreen; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Screen_GetTag(AObj: TScreen): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Screen_SetTag(AObj: TScreen; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Screen_GetCursors(AObj: TScreen; Index: Integer): HICON; cdecl;
begin
  Result :=  AObj.Cursors[Index];
end;

procedure Screen_SetCursors(AObj: TScreen; Index: Integer; AValue: HICON); cdecl;
begin
  AObj.Cursors[Index] := AValue;
end;

function Screen_GetMonitors(AObj: TScreen; Index: Integer): TMonitor; cdecl;
begin
  Result :=  AObj.Monitors[Index];
end;

function Screen_GetForms(AObj: TScreen; Index: Integer): TForm; cdecl;
begin
  Result :=  AObj.Forms[Index];
end;

function Screen_GetComponents(AObj: TScreen; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Screen_Create {$IFNDEF MSWINDOWS}name '_Screen_Create'{$ENDIF},
  Screen_Free {$IFNDEF MSWINDOWS}name '_Screen_Free'{$ENDIF},
  //Screen_Realign {$IFNDEF MSWINDOWS}name '_Screen_Realign'{$ENDIF},
  Screen_FindComponent {$IFNDEF MSWINDOWS}name '_Screen_FindComponent'{$ENDIF},
  Screen_GetNamePath {$IFNDEF MSWINDOWS}name '_Screen_GetNamePath'{$ENDIF},
  Screen_HasParent {$IFNDEF MSWINDOWS}name '_Screen_HasParent'{$ENDIF},
  Screen_Assign {$IFNDEF MSWINDOWS}name '_Screen_Assign'{$ENDIF},
  Screen_ClassName {$IFNDEF MSWINDOWS}name '_Screen_ClassName'{$ENDIF},
  Screen_Equals {$IFNDEF MSWINDOWS}name '_Screen_Equals'{$ENDIF},
  Screen_GetHashCode {$IFNDEF MSWINDOWS}name '_Screen_GetHashCode'{$ENDIF},
  Screen_ToString {$IFNDEF MSWINDOWS}name '_Screen_ToString'{$ENDIF},
  Screen_GetActiveForm {$IFNDEF MSWINDOWS}name '_Screen_GetActiveForm'{$ENDIF},
  Screen_GetCustomFormCount {$IFNDEF MSWINDOWS}name '_Screen_GetCustomFormCount'{$ENDIF},
  //Screen_GetCursorCount {$IFNDEF MSWINDOWS}name '_Screen_GetCursorCount'{$ENDIF},
  Screen_GetCursor {$IFNDEF MSWINDOWS}name '_Screen_GetCursor'{$ENDIF},
  Screen_SetCursor {$IFNDEF MSWINDOWS}name '_Screen_SetCursor'{$ENDIF},
  Screen_GetFocusedForm {$IFNDEF MSWINDOWS}name '_Screen_GetFocusedForm'{$ENDIF},
  //Screen_SetFocusedForm {$IFNDEF MSWINDOWS}name '_Screen_SetFocusedForm'{$ENDIF},
  Screen_GetMonitorCount {$IFNDEF MSWINDOWS}name '_Screen_GetMonitorCount'{$ENDIF},
  Screen_GetDesktopRect {$IFNDEF MSWINDOWS}name '_Screen_GetDesktopRect'{$ENDIF},
  Screen_GetDesktopHeight {$IFNDEF MSWINDOWS}name '_Screen_GetDesktopHeight'{$ENDIF},
  Screen_GetDesktopLeft {$IFNDEF MSWINDOWS}name '_Screen_GetDesktopLeft'{$ENDIF},
  Screen_GetDesktopTop {$IFNDEF MSWINDOWS}name '_Screen_GetDesktopTop'{$ENDIF},
  Screen_GetDesktopWidth {$IFNDEF MSWINDOWS}name '_Screen_GetDesktopWidth'{$ENDIF},
  Screen_GetWorkAreaRect {$IFNDEF MSWINDOWS}name '_Screen_GetWorkAreaRect'{$ENDIF},
  Screen_GetWorkAreaHeight {$IFNDEF MSWINDOWS}name '_Screen_GetWorkAreaHeight'{$ENDIF},
  Screen_GetWorkAreaLeft {$IFNDEF MSWINDOWS}name '_Screen_GetWorkAreaLeft'{$ENDIF},
  Screen_GetWorkAreaTop {$IFNDEF MSWINDOWS}name '_Screen_GetWorkAreaTop'{$ENDIF},
  Screen_GetWorkAreaWidth {$IFNDEF MSWINDOWS}name '_Screen_GetWorkAreaWidth'{$ENDIF},
  Screen_GetFonts {$IFNDEF MSWINDOWS}name '_Screen_GetFonts'{$ENDIF},
  //Screen_GetImes {$IFNDEF MSWINDOWS}name '_Screen_GetImes'{$ENDIF},
  //Screen_GetDefaultIme {$IFNDEF MSWINDOWS}name '_Screen_GetDefaultIme'{$ENDIF},
  Screen_GetHeight {$IFNDEF MSWINDOWS}name '_Screen_GetHeight'{$ENDIF},
  Screen_GetPixelsPerInch {$IFNDEF MSWINDOWS}name '_Screen_GetPixelsPerInch'{$ENDIF},
  Screen_GetPrimaryMonitor {$IFNDEF MSWINDOWS}name '_Screen_GetPrimaryMonitor'{$ENDIF},
  Screen_GetWidth {$IFNDEF MSWINDOWS}name '_Screen_GetWidth'{$ENDIF},
  Screen_GetComponentCount {$IFNDEF MSWINDOWS}name '_Screen_GetComponentCount'{$ENDIF},
  Screen_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Screen_GetComponentIndex'{$ENDIF},
  Screen_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Screen_SetComponentIndex'{$ENDIF},
  Screen_GetOwner {$IFNDEF MSWINDOWS}name '_Screen_GetOwner'{$ENDIF},
  Screen_GetName {$IFNDEF MSWINDOWS}name '_Screen_GetName'{$ENDIF},
  Screen_SetName {$IFNDEF MSWINDOWS}name '_Screen_SetName'{$ENDIF},
  Screen_GetTag {$IFNDEF MSWINDOWS}name '_Screen_GetTag'{$ENDIF},
  Screen_SetTag {$IFNDEF MSWINDOWS}name '_Screen_SetTag'{$ENDIF},
  Screen_GetCursors {$IFNDEF MSWINDOWS}name '_Screen_GetCursors'{$ENDIF},
  Screen_SetCursors {$IFNDEF MSWINDOWS}name '_Screen_SetCursors'{$ENDIF},
  Screen_GetMonitors {$IFNDEF MSWINDOWS}name '_Screen_GetMonitors'{$ENDIF},
  Screen_GetForms {$IFNDEF MSWINDOWS}name '_Screen_GetForms'{$ENDIF},
  Screen_GetComponents {$IFNDEF MSWINDOWS}name '_Screen_GetComponents'{$ENDIF};

