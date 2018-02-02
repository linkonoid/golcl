
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function SaveDialog_Create(AOwner: TComponent): TSaveDialog; cdecl;
begin
  Result :=  TSaveDialog.Create(AOwner);
end;

procedure SaveDialog_Free(AObj: TSaveDialog); cdecl;
begin
  AObj.Free;
end;

function SaveDialog_Execute(AObj: TSaveDialog; ParentWnd: HWND): LongBool; cdecl;
begin
  //Result :=  AObj.Execute(ParentWnd);
  Result :=  AObj.Execute();
end;

function SaveDialog_FindComponent(AObj: TSaveDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function SaveDialog_GetNamePath(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function SaveDialog_HasParent(AObj: TSaveDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure SaveDialog_Assign(AObj: TSaveDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function SaveDialog_ClassName(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function SaveDialog_Equals(AObj: TSaveDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function SaveDialog_GetHashCode(AObj: TSaveDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function SaveDialog_ToString(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function SaveDialog_GetFiles(AObj: TSaveDialog): TStrings; cdecl;
begin
  Result :=  AObj.Files;
end;

function SaveDialog_GetDefaultExt(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.DefaultExt);
end;

procedure SaveDialog_SetDefaultExt(AObj: TSaveDialog; AValue: PWideChar); cdecl;
begin
  AObj.DefaultExt := AValue;
end;

function SaveDialog_GetFileName(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.FileName);
end;

procedure SaveDialog_SetFileName(AObj: TSaveDialog; AValue: PWideChar); cdecl;
begin
  AObj.FileName := AValue;
end;

function SaveDialog_GetFilter(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Filter);
end;

procedure SaveDialog_SetFilter(AObj: TSaveDialog; AValue: PWideChar); cdecl;
begin
  AObj.Filter := AValue;
end;

function SaveDialog_GetFilterIndex(AObj: TSaveDialog): Integer; cdecl;
begin
  Result :=  AObj.FilterIndex;
end;

procedure SaveDialog_SetFilterIndex(AObj: TSaveDialog; AValue: Integer); cdecl;
begin
  AObj.FilterIndex := AValue;
end;

function SaveDialog_GetInitialDir(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.InitialDir);
end;

procedure SaveDialog_SetInitialDir(AObj: TSaveDialog; AValue: PWideChar); cdecl;
begin
  AObj.InitialDir := AValue;
end;

function SaveDialog_GetOptions(AObj: TSaveDialog): TOpenOptions; cdecl;
begin
  Result :=  AObj.Options;
end;

procedure SaveDialog_SetOptions(AObj: TSaveDialog; AValue: TOpenOptions); cdecl;
begin
  AObj.Options := AValue;
end;

//function SaveDialog_GetOptionsEx(AObj: TSaveDialog): TOpenOptionsEx; cdecl;
//begin
//  Result :=  AObj.OptionsEx;
//end;
//
//procedure SaveDialog_SetOptionsEx(AObj: TSaveDialog; AValue: TOpenOptionsEx); cdecl;
//begin
//  AObj.OptionsEx := AValue;
//end;

function SaveDialog_GetTitle(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Title);
end;

procedure SaveDialog_SetTitle(AObj: TSaveDialog; AValue: PWideChar); cdecl;
begin
  AObj.Title := AValue;
end;

function SaveDialog_GetHandle(AObj: TSaveDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure SaveDialog_SetOnClose(AObj: TSaveDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClose := nil;
    TEventClass.Remove(AObj, geClose);
    Exit;
  end;
  AObj.OnClose := TEventClass.OnClose;
  TEventClass.Add(AObj, geClose, AEventId);
end;

procedure SaveDialog_SetOnShow(AObj: TSaveDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnShow := nil;
    TEventClass.Remove(AObj, geShow);
    Exit;
  end;
  AObj.OnShow := TEventClass.OnShow;
  TEventClass.Add(AObj, geShow, AEventId);
end;

function SaveDialog_GetComponentCount(AObj: TSaveDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function SaveDialog_GetComponentIndex(AObj: TSaveDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure SaveDialog_SetComponentIndex(AObj: TSaveDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function SaveDialog_GetOwner(AObj: TSaveDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function SaveDialog_GetName(AObj: TSaveDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure SaveDialog_SetName(AObj: TSaveDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function SaveDialog_GetTag(AObj: TSaveDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure SaveDialog_SetTag(AObj: TSaveDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function SaveDialog_GetComponents(AObj: TSaveDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  SaveDialog_Create {$IFNDEF MSWINDOWS}name '_SaveDialog_Create'{$ENDIF},
  SaveDialog_Free {$IFNDEF MSWINDOWS}name '_SaveDialog_Free'{$ENDIF},
  SaveDialog_Execute {$IFNDEF MSWINDOWS}name '_SaveDialog_Execute'{$ENDIF},
  SaveDialog_FindComponent {$IFNDEF MSWINDOWS}name '_SaveDialog_FindComponent'{$ENDIF},
  SaveDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_SaveDialog_GetNamePath'{$ENDIF},
  SaveDialog_HasParent {$IFNDEF MSWINDOWS}name '_SaveDialog_HasParent'{$ENDIF},
  SaveDialog_Assign {$IFNDEF MSWINDOWS}name '_SaveDialog_Assign'{$ENDIF},
  SaveDialog_ClassName {$IFNDEF MSWINDOWS}name '_SaveDialog_ClassName'{$ENDIF},
  SaveDialog_Equals {$IFNDEF MSWINDOWS}name '_SaveDialog_Equals'{$ENDIF},
  SaveDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_SaveDialog_GetHashCode'{$ENDIF},
  SaveDialog_ToString {$IFNDEF MSWINDOWS}name '_SaveDialog_ToString'{$ENDIF},
  SaveDialog_GetFiles {$IFNDEF MSWINDOWS}name '_SaveDialog_GetFiles'{$ENDIF},
  SaveDialog_GetDefaultExt {$IFNDEF MSWINDOWS}name '_SaveDialog_GetDefaultExt'{$ENDIF},
  SaveDialog_SetDefaultExt {$IFNDEF MSWINDOWS}name '_SaveDialog_SetDefaultExt'{$ENDIF},
  SaveDialog_GetFileName {$IFNDEF MSWINDOWS}name '_SaveDialog_GetFileName'{$ENDIF},
  SaveDialog_SetFileName {$IFNDEF MSWINDOWS}name '_SaveDialog_SetFileName'{$ENDIF},
  SaveDialog_GetFilter {$IFNDEF MSWINDOWS}name '_SaveDialog_GetFilter'{$ENDIF},
  SaveDialog_SetFilter {$IFNDEF MSWINDOWS}name '_SaveDialog_SetFilter'{$ENDIF},
  SaveDialog_GetFilterIndex {$IFNDEF MSWINDOWS}name '_SaveDialog_GetFilterIndex'{$ENDIF},
  SaveDialog_SetFilterIndex {$IFNDEF MSWINDOWS}name '_SaveDialog_SetFilterIndex'{$ENDIF},
  SaveDialog_GetInitialDir {$IFNDEF MSWINDOWS}name '_SaveDialog_GetInitialDir'{$ENDIF},
  SaveDialog_SetInitialDir {$IFNDEF MSWINDOWS}name '_SaveDialog_SetInitialDir'{$ENDIF},
  SaveDialog_GetOptions {$IFNDEF MSWINDOWS}name '_SaveDialog_GetOptions'{$ENDIF},
  SaveDialog_SetOptions {$IFNDEF MSWINDOWS}name '_SaveDialog_SetOptions'{$ENDIF},
  //SaveDialog_GetOptionsEx {$IFNDEF MSWINDOWS}name '_SaveDialog_GetOptionsEx'{$ENDIF},
  //SaveDialog_SetOptionsEx {$IFNDEF MSWINDOWS}name '_SaveDialog_SetOptionsEx'{$ENDIF},
  SaveDialog_GetTitle {$IFNDEF MSWINDOWS}name '_SaveDialog_GetTitle'{$ENDIF},
  SaveDialog_SetTitle {$IFNDEF MSWINDOWS}name '_SaveDialog_SetTitle'{$ENDIF},
  SaveDialog_GetHandle {$IFNDEF MSWINDOWS}name '_SaveDialog_GetHandle'{$ENDIF},
  SaveDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_SaveDialog_SetOnClose'{$ENDIF},
  SaveDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_SaveDialog_SetOnShow'{$ENDIF},
  SaveDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_SaveDialog_GetComponentCount'{$ENDIF},
  SaveDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_SaveDialog_GetComponentIndex'{$ENDIF},
  SaveDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_SaveDialog_SetComponentIndex'{$ENDIF},
  SaveDialog_GetOwner {$IFNDEF MSWINDOWS}name '_SaveDialog_GetOwner'{$ENDIF},
  SaveDialog_GetName {$IFNDEF MSWINDOWS}name '_SaveDialog_GetName'{$ENDIF},
  SaveDialog_SetName {$IFNDEF MSWINDOWS}name '_SaveDialog_SetName'{$ENDIF},
  SaveDialog_GetTag {$IFNDEF MSWINDOWS}name '_SaveDialog_GetTag'{$ENDIF},
  SaveDialog_SetTag {$IFNDEF MSWINDOWS}name '_SaveDialog_SetTag'{$ENDIF},
  SaveDialog_GetComponents {$IFNDEF MSWINDOWS}name '_SaveDialog_GetComponents'{$ENDIF};

