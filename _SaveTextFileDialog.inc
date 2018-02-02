
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function SaveTextFileDialog_Create(AOwner: TComponent): TSaveTextFileDialog; cdecl;
begin
  Result :=  TSaveTextFileDialog.Create(AOwner);
end;

procedure SaveTextFileDialog_Free(AObj: TSaveTextFileDialog); cdecl;
begin
  AObj.Free;
end;

function SaveTextFileDialog_Execute(AObj: TSaveTextFileDialog): LongBool; cdecl;
begin
  Result :=  AObj.Execute;
end;

function SaveTextFileDialog_FindComponent(AObj: TSaveTextFileDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function SaveTextFileDialog_GetNamePath(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function SaveTextFileDialog_HasParent(AObj: TSaveTextFileDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure SaveTextFileDialog_Assign(AObj: TSaveTextFileDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function SaveTextFileDialog_ClassName(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function SaveTextFileDialog_Equals(AObj: TSaveTextFileDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function SaveTextFileDialog_GetHashCode(AObj: TSaveTextFileDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function SaveTextFileDialog_ToString(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function SaveTextFileDialog_GetFiles(AObj: TSaveTextFileDialog): TStrings; cdecl;
begin
  Result :=  AObj.Files;
end;

function SaveTextFileDialog_GetDefaultExt(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.DefaultExt);
end;

procedure SaveTextFileDialog_SetDefaultExt(AObj: TSaveTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.DefaultExt := AValue;
end;

function SaveTextFileDialog_GetFileName(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.FileName);
end;

procedure SaveTextFileDialog_SetFileName(AObj: TSaveTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.FileName := AValue;
end;

function SaveTextFileDialog_GetFilter(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Filter);
end;

procedure SaveTextFileDialog_SetFilter(AObj: TSaveTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.Filter := AValue;
end;

function SaveTextFileDialog_GetFilterIndex(AObj: TSaveTextFileDialog): Integer; cdecl;
begin
  Result :=  AObj.FilterIndex;
end;

procedure SaveTextFileDialog_SetFilterIndex(AObj: TSaveTextFileDialog; AValue: Integer); cdecl;
begin
  AObj.FilterIndex := AValue;
end;

function SaveTextFileDialog_GetInitialDir(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.InitialDir);
end;

procedure SaveTextFileDialog_SetInitialDir(AObj: TSaveTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.InitialDir := AValue;
end;

function SaveTextFileDialog_GetOptions(AObj: TSaveTextFileDialog): TOpenOptions; cdecl;
begin
  Result :=  AObj.Options;
end;

procedure SaveTextFileDialog_SetOptions(AObj: TSaveTextFileDialog; AValue: TOpenOptions); cdecl;
begin
  AObj.Options := AValue;
end;

function SaveTextFileDialog_GetOptionsEx(AObj: TSaveTextFileDialog): TOpenOptionsEx; cdecl;
begin
  Result :=  AObj.OptionsEx;
end;

procedure SaveTextFileDialog_SetOptionsEx(AObj: TSaveTextFileDialog; AValue: TOpenOptionsEx); cdecl;
begin
  AObj.OptionsEx := AValue;
end;

function SaveTextFileDialog_GetTitle(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Title);
end;

procedure SaveTextFileDialog_SetTitle(AObj: TSaveTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.Title := AValue;
end;

function SaveTextFileDialog_GetHandle(AObj: TSaveTextFileDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure SaveTextFileDialog_SetOnClose(AObj: TSaveTextFileDialog; AEventId: NativeUInt); stdcall
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

procedure SaveTextFileDialog_SetOnShow(AObj: TSaveTextFileDialog; AEventId: NativeUInt); stdcall
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

function SaveTextFileDialog_GetComponentCount(AObj: TSaveTextFileDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function SaveTextFileDialog_GetComponentIndex(AObj: TSaveTextFileDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure SaveTextFileDialog_SetComponentIndex(AObj: TSaveTextFileDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function SaveTextFileDialog_GetOwner(AObj: TSaveTextFileDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function SaveTextFileDialog_GetName(AObj: TSaveTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure SaveTextFileDialog_SetName(AObj: TSaveTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function SaveTextFileDialog_GetTag(AObj: TSaveTextFileDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure SaveTextFileDialog_SetTag(AObj: TSaveTextFileDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function SaveTextFileDialog_GetComponents(AObj: TSaveTextFileDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  SaveTextFileDialog_Create {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_Create'{$ENDIF},
  SaveTextFileDialog_Free {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_Free'{$ENDIF},
  SaveTextFileDialog_Execute {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_Execute'{$ENDIF},
  SaveTextFileDialog_FindComponent {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_FindComponent'{$ENDIF},
  SaveTextFileDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetNamePath'{$ENDIF},
  SaveTextFileDialog_HasParent {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_HasParent'{$ENDIF},
  SaveTextFileDialog_Assign {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_Assign'{$ENDIF},
  SaveTextFileDialog_ClassName {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_ClassName'{$ENDIF},
  SaveTextFileDialog_Equals {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_Equals'{$ENDIF},
  SaveTextFileDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetHashCode'{$ENDIF},
  SaveTextFileDialog_ToString {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_ToString'{$ENDIF},
  SaveTextFileDialog_GetFiles {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetFiles'{$ENDIF},
  SaveTextFileDialog_GetDefaultExt {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetDefaultExt'{$ENDIF},
  SaveTextFileDialog_SetDefaultExt {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetDefaultExt'{$ENDIF},
  SaveTextFileDialog_GetFileName {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetFileName'{$ENDIF},
  SaveTextFileDialog_SetFileName {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetFileName'{$ENDIF},
  SaveTextFileDialog_GetFilter {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetFilter'{$ENDIF},
  SaveTextFileDialog_SetFilter {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetFilter'{$ENDIF},
  SaveTextFileDialog_GetFilterIndex {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetFilterIndex'{$ENDIF},
  SaveTextFileDialog_SetFilterIndex {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetFilterIndex'{$ENDIF},
  SaveTextFileDialog_GetInitialDir {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetInitialDir'{$ENDIF},
  SaveTextFileDialog_SetInitialDir {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetInitialDir'{$ENDIF},
  SaveTextFileDialog_GetOptions {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetOptions'{$ENDIF},
  SaveTextFileDialog_SetOptions {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetOptions'{$ENDIF},
  SaveTextFileDialog_GetOptionsEx {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetOptionsEx'{$ENDIF},
  SaveTextFileDialog_SetOptionsEx {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetOptionsEx'{$ENDIF},
  SaveTextFileDialog_GetTitle {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetTitle'{$ENDIF},
  SaveTextFileDialog_SetTitle {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetTitle'{$ENDIF},
  SaveTextFileDialog_GetHandle {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetHandle'{$ENDIF},
  SaveTextFileDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetOnClose'{$ENDIF},
  SaveTextFileDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetOnShow'{$ENDIF},
  SaveTextFileDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetComponentCount'{$ENDIF},
  SaveTextFileDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetComponentIndex'{$ENDIF},
  SaveTextFileDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetComponentIndex'{$ENDIF},
  SaveTextFileDialog_GetOwner {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetOwner'{$ENDIF},
  SaveTextFileDialog_GetName {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetName'{$ENDIF},
  SaveTextFileDialog_SetName {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetName'{$ENDIF},
  SaveTextFileDialog_GetTag {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetTag'{$ENDIF},
  SaveTextFileDialog_SetTag {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_SetTag'{$ENDIF},
  SaveTextFileDialog_GetComponents {$IFNDEF MSWINDOWS}name '_SaveTextFileDialog_GetComponents'{$ENDIF};

