
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function OpenPictureDialog_Create(AOwner: TComponent): TOpenPictureDialog; cdecl;
begin
  Result :=  TOpenPictureDialog.Create(AOwner);
end;

procedure OpenPictureDialog_Free(AObj: TOpenPictureDialog); cdecl;
begin
  AObj.Free;
end;

function OpenPictureDialog_Execute(AObj: TOpenPictureDialog; ParentWnd: HWND): LongBool; cdecl;
begin
  //Result :=  AObj.Execute(ParentWnd);
  Result :=  AObj.Execute();
end;

function OpenPictureDialog_FindComponent(AObj: TOpenPictureDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function OpenPictureDialog_GetNamePath(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function OpenPictureDialog_HasParent(AObj: TOpenPictureDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure OpenPictureDialog_Assign(AObj: TOpenPictureDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function OpenPictureDialog_ClassName(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function OpenPictureDialog_Equals(AObj: TOpenPictureDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function OpenPictureDialog_GetHashCode(AObj: TOpenPictureDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function OpenPictureDialog_ToString(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function OpenPictureDialog_GetFilter(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Filter);
end;

procedure OpenPictureDialog_SetFilter(AObj: TOpenPictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.Filter := AValue;
end;

function OpenPictureDialog_GetFiles(AObj: TOpenPictureDialog): TStrings; cdecl;
begin
  Result :=  AObj.Files;
end;

function OpenPictureDialog_GetDefaultExt(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.DefaultExt);
end;

procedure OpenPictureDialog_SetDefaultExt(AObj: TOpenPictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.DefaultExt := AValue;
end;

function OpenPictureDialog_GetFileName(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.FileName);
end;

procedure OpenPictureDialog_SetFileName(AObj: TOpenPictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.FileName := AValue;
end;

function OpenPictureDialog_GetFilterIndex(AObj: TOpenPictureDialog): Integer; cdecl;
begin
  Result :=  AObj.FilterIndex;
end;

procedure OpenPictureDialog_SetFilterIndex(AObj: TOpenPictureDialog; AValue: Integer); cdecl;
begin
  AObj.FilterIndex := AValue;
end;

function OpenPictureDialog_GetInitialDir(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.InitialDir);
end;

procedure OpenPictureDialog_SetInitialDir(AObj: TOpenPictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.InitialDir := AValue;
end;

function OpenPictureDialog_GetOptions(AObj: TOpenPictureDialog): TOpenOptions; cdecl;
begin
  Result :=  AObj.Options;
end;

procedure OpenPictureDialog_SetOptions(AObj: TOpenPictureDialog; AValue: TOpenOptions); cdecl;
begin
  AObj.Options := AValue;
end;

//function OpenPictureDialog_GetOptionsEx(AObj: TOpenPictureDialog): TOpenOptionsEx; cdecl;
//begin
//  Result :=  AObj.OptionsEx;
//end;
//
//procedure OpenPictureDialog_SetOptionsEx(AObj: TOpenPictureDialog; AValue: TOpenOptionsEx); cdecl;
//begin
//  AObj.OptionsEx := AValue;
//end;

function OpenPictureDialog_GetTitle(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Title);
end;

procedure OpenPictureDialog_SetTitle(AObj: TOpenPictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.Title := AValue;
end;

function OpenPictureDialog_GetHandle(AObj: TOpenPictureDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure OpenPictureDialog_SetOnClose(AObj: TOpenPictureDialog; AEventId: NativeUInt); stdcall;
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

procedure OpenPictureDialog_SetOnShow(AObj: TOpenPictureDialog; AEventId: NativeUInt); stdcall;
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

function OpenPictureDialog_GetComponentCount(AObj: TOpenPictureDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function OpenPictureDialog_GetComponentIndex(AObj: TOpenPictureDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure OpenPictureDialog_SetComponentIndex(AObj: TOpenPictureDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function OpenPictureDialog_GetOwner(AObj: TOpenPictureDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function OpenPictureDialog_GetName(AObj: TOpenPictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure OpenPictureDialog_SetName(AObj: TOpenPictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function OpenPictureDialog_GetTag(AObj: TOpenPictureDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure OpenPictureDialog_SetTag(AObj: TOpenPictureDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function OpenPictureDialog_GetComponents(AObj: TOpenPictureDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  OpenPictureDialog_Create {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_Create'{$ENDIF},
  OpenPictureDialog_Free {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_Free'{$ENDIF},
  OpenPictureDialog_Execute {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_Execute'{$ENDIF},
  OpenPictureDialog_FindComponent {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_FindComponent'{$ENDIF},
  OpenPictureDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetNamePath'{$ENDIF},
  OpenPictureDialog_HasParent {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_HasParent'{$ENDIF},
  OpenPictureDialog_Assign {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_Assign'{$ENDIF},
  OpenPictureDialog_ClassName {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_ClassName'{$ENDIF},
  OpenPictureDialog_Equals {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_Equals'{$ENDIF},
  OpenPictureDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetHashCode'{$ENDIF},
  OpenPictureDialog_ToString {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_ToString'{$ENDIF},
  OpenPictureDialog_GetFilter {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetFilter'{$ENDIF},
  OpenPictureDialog_SetFilter {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetFilter'{$ENDIF},
  OpenPictureDialog_GetFiles {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetFiles'{$ENDIF},
  OpenPictureDialog_GetDefaultExt {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetDefaultExt'{$ENDIF},
  OpenPictureDialog_SetDefaultExt {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetDefaultExt'{$ENDIF},
  OpenPictureDialog_GetFileName {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetFileName'{$ENDIF},
  OpenPictureDialog_SetFileName {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetFileName'{$ENDIF},
  OpenPictureDialog_GetFilterIndex {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetFilterIndex'{$ENDIF},
  OpenPictureDialog_SetFilterIndex {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetFilterIndex'{$ENDIF},
  OpenPictureDialog_GetInitialDir {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetInitialDir'{$ENDIF},
  OpenPictureDialog_SetInitialDir {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetInitialDir'{$ENDIF},
  OpenPictureDialog_GetOptions {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetOptions'{$ENDIF},
  OpenPictureDialog_SetOptions {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetOptions'{$ENDIF},
  //OpenPictureDialog_GetOptionsEx {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetOptionsEx'{$ENDIF},
  //OpenPictureDialog_SetOptionsEx {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetOptionsEx'{$ENDIF},
  OpenPictureDialog_GetTitle {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetTitle'{$ENDIF},
  OpenPictureDialog_SetTitle {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetTitle'{$ENDIF},
  OpenPictureDialog_GetHandle {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetHandle'{$ENDIF},
  OpenPictureDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetOnClose'{$ENDIF},
  OpenPictureDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetOnShow'{$ENDIF},
  OpenPictureDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetComponentCount'{$ENDIF},
  OpenPictureDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetComponentIndex'{$ENDIF},
  OpenPictureDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetComponentIndex'{$ENDIF},
  OpenPictureDialog_GetOwner {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetOwner'{$ENDIF},
  OpenPictureDialog_GetName {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetName'{$ENDIF},
  OpenPictureDialog_SetName {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetName'{$ENDIF},
  OpenPictureDialog_GetTag {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetTag'{$ENDIF},
  OpenPictureDialog_SetTag {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_SetTag'{$ENDIF},
  OpenPictureDialog_GetComponents {$IFNDEF MSWINDOWS}name '_OpenPictureDialog_GetComponents'{$ENDIF};

