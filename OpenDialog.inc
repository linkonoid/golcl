
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function OpenDialog_Create(AOwner: TComponent): TOpenDialog; cdecl;
begin
  Result :=  TOpenDialog.Create(AOwner);
end;

procedure OpenDialog_Free(AObj: TOpenDialog); cdecl;
begin
  AObj.Free;
end;

function OpenDialog_Execute(AObj: TOpenDialog; ParentWnd: HWND): LongBool; cdecl;
begin
  //Result :=  AObj.ExecuteAction(ParentWnd);
  Result :=  AObj.Execute();
end;

function OpenDialog_FindComponent(AObj: TOpenDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function OpenDialog_GetNamePath(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function OpenDialog_HasParent(AObj: TOpenDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure OpenDialog_Assign(AObj: TOpenDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function OpenDialog_ClassName(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function OpenDialog_Equals(AObj: TOpenDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function OpenDialog_GetHashCode(AObj: TOpenDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function OpenDialog_ToString(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function OpenDialog_GetFiles(AObj: TOpenDialog): TStrings; cdecl;
begin
  Result :=  AObj.Files;
end;

function OpenDialog_GetDefaultExt(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.DefaultExt);
end;

procedure OpenDialog_SetDefaultExt(AObj: TOpenDialog; AValue: PWideChar); cdecl;
begin
  AObj.DefaultExt := AValue;
end;

function OpenDialog_GetFileName(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.FileName);
end;

procedure OpenDialog_SetFileName(AObj: TOpenDialog; AValue: PWideChar); cdecl;
begin
  AObj.FileName := AValue;
end;

function OpenDialog_GetFilter(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Filter);
end;

procedure OpenDialog_SetFilter(AObj: TOpenDialog; AValue: PWideChar); cdecl;
begin
  AObj.Filter := AValue;
end;

function OpenDialog_GetFilterIndex(AObj: TOpenDialog): Integer; cdecl;
begin
  Result :=  AObj.FilterIndex;
end;

procedure OpenDialog_SetFilterIndex(AObj: TOpenDialog; AValue: Integer); cdecl;
begin
  AObj.FilterIndex := AValue;
end;

function OpenDialog_GetInitialDir(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.InitialDir);
end;

procedure OpenDialog_SetInitialDir(AObj: TOpenDialog; AValue: PWideChar); cdecl;
begin
  AObj.InitialDir := AValue;
end;

function OpenDialog_GetOptions(AObj: TOpenDialog): TOpenOptions; cdecl;
begin
  Result :=  AObj.Options;
end;

procedure OpenDialog_SetOptions(AObj: TOpenDialog; AValue: TOpenOptions); cdecl;
begin
  AObj.Options := AValue;
end;

//function OpenDialog_GetOptionsEx(AObj: TOpenDialog): TOpenOptionsEx; cdecl;
//begin
//  Result :=  AObj.OptionsEx;
//end;
//
//procedure OpenDialog_SetOptionsEx(AObj: TOpenDialog; AValue: TOpenOptionsEx); cdecl;
//begin
//  AObj.OptionsEx := AValue;
//end;

function OpenDialog_GetTitle(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Title);
end;

procedure OpenDialog_SetTitle(AObj: TOpenDialog; AValue: PWideChar); cdecl;
begin
  AObj.Title := AValue;
end;

function OpenDialog_GetHandle(AObj: TOpenDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure OpenDialog_SetOnClose(AObj: TOpenDialog; AEventId: NativeUInt); stdcall;
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

procedure OpenDialog_SetOnShow(AObj: TOpenDialog; AEventId: NativeUInt); stdcall;
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

function OpenDialog_GetComponentCount(AObj: TOpenDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function OpenDialog_GetComponentIndex(AObj: TOpenDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure OpenDialog_SetComponentIndex(AObj: TOpenDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function OpenDialog_GetOwner(AObj: TOpenDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function OpenDialog_GetName(AObj: TOpenDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure OpenDialog_SetName(AObj: TOpenDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function OpenDialog_GetTag(AObj: TOpenDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure OpenDialog_SetTag(AObj: TOpenDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function OpenDialog_GetComponents(AObj: TOpenDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  OpenDialog_Create {$IFNDEF MSWINDOWS}name '_OpenDialog_Create'{$ENDIF},
  OpenDialog_Free {$IFNDEF MSWINDOWS}name '_OpenDialog_Free'{$ENDIF},
  OpenDialog_Execute {$IFNDEF MSWINDOWS}name '_OpenDialog_Execute'{$ENDIF},
  OpenDialog_FindComponent {$IFNDEF MSWINDOWS}name '_OpenDialog_FindComponent'{$ENDIF},
  OpenDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_OpenDialog_GetNamePath'{$ENDIF},
  OpenDialog_HasParent {$IFNDEF MSWINDOWS}name '_OpenDialog_HasParent'{$ENDIF},
  OpenDialog_Assign {$IFNDEF MSWINDOWS}name '_OpenDialog_Assign'{$ENDIF},
  OpenDialog_ClassName {$IFNDEF MSWINDOWS}name '_OpenDialog_ClassName'{$ENDIF},
  OpenDialog_Equals {$IFNDEF MSWINDOWS}name '_OpenDialog_Equals'{$ENDIF},
  OpenDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_OpenDialog_GetHashCode'{$ENDIF},
  OpenDialog_ToString {$IFNDEF MSWINDOWS}name '_OpenDialog_ToString'{$ENDIF},
  OpenDialog_GetFiles {$IFNDEF MSWINDOWS}name '_OpenDialog_GetFiles'{$ENDIF},
  OpenDialog_GetDefaultExt {$IFNDEF MSWINDOWS}name '_OpenDialog_GetDefaultExt'{$ENDIF},
  OpenDialog_SetDefaultExt {$IFNDEF MSWINDOWS}name '_OpenDialog_SetDefaultExt'{$ENDIF},
  OpenDialog_GetFileName {$IFNDEF MSWINDOWS}name '_OpenDialog_GetFileName'{$ENDIF},
  OpenDialog_SetFileName {$IFNDEF MSWINDOWS}name '_OpenDialog_SetFileName'{$ENDIF},
  OpenDialog_GetFilter {$IFNDEF MSWINDOWS}name '_OpenDialog_GetFilter'{$ENDIF},
  OpenDialog_SetFilter {$IFNDEF MSWINDOWS}name '_OpenDialog_SetFilter'{$ENDIF},
  OpenDialog_GetFilterIndex {$IFNDEF MSWINDOWS}name '_OpenDialog_GetFilterIndex'{$ENDIF},
  OpenDialog_SetFilterIndex {$IFNDEF MSWINDOWS}name '_OpenDialog_SetFilterIndex'{$ENDIF},
  OpenDialog_GetInitialDir {$IFNDEF MSWINDOWS}name '_OpenDialog_GetInitialDir'{$ENDIF},
  OpenDialog_SetInitialDir {$IFNDEF MSWINDOWS}name '_OpenDialog_SetInitialDir'{$ENDIF},
  OpenDialog_GetOptions {$IFNDEF MSWINDOWS}name '_OpenDialog_GetOptions'{$ENDIF},
  OpenDialog_SetOptions {$IFNDEF MSWINDOWS}name '_OpenDialog_SetOptions'{$ENDIF},
  //OpenDialog_GetOptionsEx {$IFNDEF MSWINDOWS}name '_OpenDialog_GetOptionsEx'{$ENDIF},
  //OpenDialog_SetOptionsEx {$IFNDEF MSWINDOWS}name '_OpenDialog_SetOptionsEx'{$ENDIF},
  OpenDialog_GetTitle {$IFNDEF MSWINDOWS}name '_OpenDialog_GetTitle'{$ENDIF},
  OpenDialog_SetTitle {$IFNDEF MSWINDOWS}name '_OpenDialog_SetTitle'{$ENDIF},
  OpenDialog_GetHandle {$IFNDEF MSWINDOWS}name '_OpenDialog_GetHandle'{$ENDIF},
  OpenDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_OpenDialog_SetOnClose'{$ENDIF},
  OpenDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_OpenDialog_SetOnShow'{$ENDIF},
  OpenDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_OpenDialog_GetComponentCount'{$ENDIF},
  OpenDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_OpenDialog_GetComponentIndex'{$ENDIF},
  OpenDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_OpenDialog_SetComponentIndex'{$ENDIF},
  OpenDialog_GetOwner {$IFNDEF MSWINDOWS}name '_OpenDialog_GetOwner'{$ENDIF},
  OpenDialog_GetName {$IFNDEF MSWINDOWS}name '_OpenDialog_GetName'{$ENDIF},
  OpenDialog_SetName {$IFNDEF MSWINDOWS}name '_OpenDialog_SetName'{$ENDIF},
  OpenDialog_GetTag {$IFNDEF MSWINDOWS}name '_OpenDialog_GetTag'{$ENDIF},
  OpenDialog_SetTag {$IFNDEF MSWINDOWS}name '_OpenDialog_SetTag'{$ENDIF},
  OpenDialog_GetComponents {$IFNDEF MSWINDOWS}name '_OpenDialog_GetComponents'{$ENDIF};

