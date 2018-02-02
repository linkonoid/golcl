
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function OpenTextFileDialog_Create(AOwner: TComponent): TOpenTextFileDialog; cdecl;
begin
  Result :=  TOpenTextFileDialog.Create(AOwner);
end;

procedure OpenTextFileDialog_Free(AObj: TOpenTextFileDialog); cdecl;
begin
  AObj.Free;
end;

function OpenTextFileDialog_Execute(AObj: TOpenTextFileDialog; ParentWnd: HWND): LongBool; cdecl;
begin
  Result :=  AObj.Execute(ParentWnd);
end;

function OpenTextFileDialog_FindComponent(AObj: TOpenTextFileDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function OpenTextFileDialog_GetNamePath(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function OpenTextFileDialog_HasParent(AObj: TOpenTextFileDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure OpenTextFileDialog_Assign(AObj: TOpenTextFileDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function OpenTextFileDialog_ClassName(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function OpenTextFileDialog_Equals(AObj: TOpenTextFileDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function OpenTextFileDialog_GetHashCode(AObj: TOpenTextFileDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function OpenTextFileDialog_ToString(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function OpenTextFileDialog_GetFiles(AObj: TOpenTextFileDialog): TStrings; cdecl;
begin
  Result :=  AObj.Files;
end;

function OpenTextFileDialog_GetDefaultExt(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.DefaultExt);
end;

procedure OpenTextFileDialog_SetDefaultExt(AObj: TOpenTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.DefaultExt := AValue;
end;

function OpenTextFileDialog_GetFileName(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.FileName);
end;

procedure OpenTextFileDialog_SetFileName(AObj: TOpenTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.FileName := AValue;
end;

function OpenTextFileDialog_GetFilter(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Filter);
end;

procedure OpenTextFileDialog_SetFilter(AObj: TOpenTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.Filter := AValue;
end;

function OpenTextFileDialog_GetFilterIndex(AObj: TOpenTextFileDialog): Integer; cdecl;
begin
  Result :=  AObj.FilterIndex;
end;

procedure OpenTextFileDialog_SetFilterIndex(AObj: TOpenTextFileDialog; AValue: Integer); cdecl;
begin
  AObj.FilterIndex := AValue;
end;

function OpenTextFileDialog_GetInitialDir(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.InitialDir);
end;

procedure OpenTextFileDialog_SetInitialDir(AObj: TOpenTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.InitialDir := AValue;
end;

function OpenTextFileDialog_GetOptions(AObj: TOpenTextFileDialog): TOpenOptions; cdecl;
begin
  Result :=  AObj.Options;
end;

procedure OpenTextFileDialog_SetOptions(AObj: TOpenTextFileDialog; AValue: TOpenOptions); cdecl;
begin
  AObj.Options := AValue;
end;

function OpenTextFileDialog_GetOptionsEx(AObj: TOpenTextFileDialog): TOpenOptionsEx; cdecl;
begin
  Result :=  AObj.OptionsEx;
end;

procedure OpenTextFileDialog_SetOptionsEx(AObj: TOpenTextFileDialog; AValue: TOpenOptionsEx); cdecl;
begin
  AObj.OptionsEx := AValue;
end;

function OpenTextFileDialog_GetTitle(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Title);
end;

procedure OpenTextFileDialog_SetTitle(AObj: TOpenTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.Title := AValue;
end;

function OpenTextFileDialog_GetHandle(AObj: TOpenTextFileDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure OpenTextFileDialog_SetOnClose(AObj: TOpenTextFileDialog; AEventId: NativeUInt); stdcall
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

procedure OpenTextFileDialog_SetOnShow(AObj: TOpenTextFileDialog; AEventId: NativeUInt); stdcall
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

function OpenTextFileDialog_GetComponentCount(AObj: TOpenTextFileDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function OpenTextFileDialog_GetComponentIndex(AObj: TOpenTextFileDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure OpenTextFileDialog_SetComponentIndex(AObj: TOpenTextFileDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function OpenTextFileDialog_GetOwner(AObj: TOpenTextFileDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function OpenTextFileDialog_GetName(AObj: TOpenTextFileDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure OpenTextFileDialog_SetName(AObj: TOpenTextFileDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function OpenTextFileDialog_GetTag(AObj: TOpenTextFileDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure OpenTextFileDialog_SetTag(AObj: TOpenTextFileDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function OpenTextFileDialog_GetComponents(AObj: TOpenTextFileDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  OpenTextFileDialog_Create {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_Create'{$ENDIF},
  OpenTextFileDialog_Free {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_Free'{$ENDIF},
  OpenTextFileDialog_Execute {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_Execute'{$ENDIF},
  OpenTextFileDialog_FindComponent {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_FindComponent'{$ENDIF},
  OpenTextFileDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetNamePath'{$ENDIF},
  OpenTextFileDialog_HasParent {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_HasParent'{$ENDIF},
  OpenTextFileDialog_Assign {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_Assign'{$ENDIF},
  OpenTextFileDialog_ClassName {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_ClassName'{$ENDIF},
  OpenTextFileDialog_Equals {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_Equals'{$ENDIF},
  OpenTextFileDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetHashCode'{$ENDIF},
  OpenTextFileDialog_ToString {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_ToString'{$ENDIF},
  OpenTextFileDialog_GetFiles {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetFiles'{$ENDIF},
  OpenTextFileDialog_GetDefaultExt {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetDefaultExt'{$ENDIF},
  OpenTextFileDialog_SetDefaultExt {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetDefaultExt'{$ENDIF},
  OpenTextFileDialog_GetFileName {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetFileName'{$ENDIF},
  OpenTextFileDialog_SetFileName {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetFileName'{$ENDIF},
  OpenTextFileDialog_GetFilter {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetFilter'{$ENDIF},
  OpenTextFileDialog_SetFilter {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetFilter'{$ENDIF},
  OpenTextFileDialog_GetFilterIndex {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetFilterIndex'{$ENDIF},
  OpenTextFileDialog_SetFilterIndex {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetFilterIndex'{$ENDIF},
  OpenTextFileDialog_GetInitialDir {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetInitialDir'{$ENDIF},
  OpenTextFileDialog_SetInitialDir {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetInitialDir'{$ENDIF},
  OpenTextFileDialog_GetOptions {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetOptions'{$ENDIF},
  OpenTextFileDialog_SetOptions {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetOptions'{$ENDIF},
  OpenTextFileDialog_GetOptionsEx {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetOptionsEx'{$ENDIF},
  OpenTextFileDialog_SetOptionsEx {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetOptionsEx'{$ENDIF},
  OpenTextFileDialog_GetTitle {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetTitle'{$ENDIF},
  OpenTextFileDialog_SetTitle {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetTitle'{$ENDIF},
  OpenTextFileDialog_GetHandle {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetHandle'{$ENDIF},
  OpenTextFileDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetOnClose'{$ENDIF},
  OpenTextFileDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetOnShow'{$ENDIF},
  OpenTextFileDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetComponentCount'{$ENDIF},
  OpenTextFileDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetComponentIndex'{$ENDIF},
  OpenTextFileDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetComponentIndex'{$ENDIF},
  OpenTextFileDialog_GetOwner {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetOwner'{$ENDIF},
  OpenTextFileDialog_GetName {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetName'{$ENDIF},
  OpenTextFileDialog_SetName {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetName'{$ENDIF},
  OpenTextFileDialog_GetTag {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetTag'{$ENDIF},
  OpenTextFileDialog_SetTag {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_SetTag'{$ENDIF},
  OpenTextFileDialog_GetComponents {$IFNDEF MSWINDOWS}name '_OpenTextFileDialog_GetComponents'{$ENDIF};

