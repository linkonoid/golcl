
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function SavePictureDialog_Create(AOwner: TComponent): TSavePictureDialog; cdecl;
begin
  Result :=  TSavePictureDialog.Create(AOwner);
end;

procedure SavePictureDialog_Free(AObj: TSavePictureDialog); cdecl;
begin
  AObj.Free;
end;

function SavePictureDialog_Execute(AObj: TSavePictureDialog): LongBool; cdecl;
begin
  Result :=  AObj.Execute;
end;

function SavePictureDialog_FindComponent(AObj: TSavePictureDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function SavePictureDialog_GetNamePath(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function SavePictureDialog_HasParent(AObj: TSavePictureDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure SavePictureDialog_Assign(AObj: TSavePictureDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function SavePictureDialog_ClassName(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function SavePictureDialog_Equals(AObj: TSavePictureDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function SavePictureDialog_GetHashCode(AObj: TSavePictureDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function SavePictureDialog_ToString(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function SavePictureDialog_GetFilter(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Filter);
end;

procedure SavePictureDialog_SetFilter(AObj: TSavePictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.Filter := AValue;
end;

function SavePictureDialog_GetFiles(AObj: TSavePictureDialog): TStrings; cdecl;
begin
  Result :=  AObj.Files;
end;

function SavePictureDialog_GetDefaultExt(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.DefaultExt);
end;

procedure SavePictureDialog_SetDefaultExt(AObj: TSavePictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.DefaultExt := AValue;
end;

function SavePictureDialog_GetFileName(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.FileName);
end;

procedure SavePictureDialog_SetFileName(AObj: TSavePictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.FileName := AValue;
end;

function SavePictureDialog_GetFilterIndex(AObj: TSavePictureDialog): Integer; cdecl;
begin
  Result :=  AObj.FilterIndex;
end;

procedure SavePictureDialog_SetFilterIndex(AObj: TSavePictureDialog; AValue: Integer); cdecl;
begin
  AObj.FilterIndex := AValue;
end;

function SavePictureDialog_GetInitialDir(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.InitialDir);
end;

procedure SavePictureDialog_SetInitialDir(AObj: TSavePictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.InitialDir := AValue;
end;

function SavePictureDialog_GetOptions(AObj: TSavePictureDialog): TOpenOptions; cdecl;
begin
  Result :=  AObj.Options;
end;

procedure SavePictureDialog_SetOptions(AObj: TSavePictureDialog; AValue: TOpenOptions); cdecl;
begin
  AObj.Options := AValue;
end;

//function SavePictureDialog_GetOptionsEx(AObj: TSavePictureDialog): TOpenOptionsEx; cdecl;
//begin
//  Result :=  AObj.OptionsEx;
//end;
//
//procedure SavePictureDialog_SetOptionsEx(AObj: TSavePictureDialog; AValue: TOpenOptionsEx); cdecl;
//begin
//  AObj.OptionsEx := AValue;
//end;

function SavePictureDialog_GetTitle(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Title);
end;

procedure SavePictureDialog_SetTitle(AObj: TSavePictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.Title := AValue;
end;

function SavePictureDialog_GetHandle(AObj: TSavePictureDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure SavePictureDialog_SetOnClose(AObj: TSavePictureDialog; AEventId: NativeUInt); stdcall;
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

procedure SavePictureDialog_SetOnShow(AObj: TSavePictureDialog; AEventId: NativeUInt); stdcall;
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

function SavePictureDialog_GetComponentCount(AObj: TSavePictureDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function SavePictureDialog_GetComponentIndex(AObj: TSavePictureDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure SavePictureDialog_SetComponentIndex(AObj: TSavePictureDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function SavePictureDialog_GetOwner(AObj: TSavePictureDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function SavePictureDialog_GetName(AObj: TSavePictureDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure SavePictureDialog_SetName(AObj: TSavePictureDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function SavePictureDialog_GetTag(AObj: TSavePictureDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure SavePictureDialog_SetTag(AObj: TSavePictureDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function SavePictureDialog_GetComponents(AObj: TSavePictureDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  SavePictureDialog_Create {$IFNDEF MSWINDOWS}name '_SavePictureDialog_Create'{$ENDIF},
  SavePictureDialog_Free {$IFNDEF MSWINDOWS}name '_SavePictureDialog_Free'{$ENDIF},
  SavePictureDialog_Execute {$IFNDEF MSWINDOWS}name '_SavePictureDialog_Execute'{$ENDIF},
  SavePictureDialog_FindComponent {$IFNDEF MSWINDOWS}name '_SavePictureDialog_FindComponent'{$ENDIF},
  SavePictureDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetNamePath'{$ENDIF},
  SavePictureDialog_HasParent {$IFNDEF MSWINDOWS}name '_SavePictureDialog_HasParent'{$ENDIF},
  SavePictureDialog_Assign {$IFNDEF MSWINDOWS}name '_SavePictureDialog_Assign'{$ENDIF},
  SavePictureDialog_ClassName {$IFNDEF MSWINDOWS}name '_SavePictureDialog_ClassName'{$ENDIF},
  SavePictureDialog_Equals {$IFNDEF MSWINDOWS}name '_SavePictureDialog_Equals'{$ENDIF},
  SavePictureDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetHashCode'{$ENDIF},
  SavePictureDialog_ToString {$IFNDEF MSWINDOWS}name '_SavePictureDialog_ToString'{$ENDIF},
  SavePictureDialog_GetFilter {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetFilter'{$ENDIF},
  SavePictureDialog_SetFilter {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetFilter'{$ENDIF},
  SavePictureDialog_GetFiles {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetFiles'{$ENDIF},
  SavePictureDialog_GetDefaultExt {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetDefaultExt'{$ENDIF},
  SavePictureDialog_SetDefaultExt {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetDefaultExt'{$ENDIF},
  SavePictureDialog_GetFileName {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetFileName'{$ENDIF},
  SavePictureDialog_SetFileName {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetFileName'{$ENDIF},
  SavePictureDialog_GetFilterIndex {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetFilterIndex'{$ENDIF},
  SavePictureDialog_SetFilterIndex {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetFilterIndex'{$ENDIF},
  SavePictureDialog_GetInitialDir {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetInitialDir'{$ENDIF},
  SavePictureDialog_SetInitialDir {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetInitialDir'{$ENDIF},
  SavePictureDialog_GetOptions {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetOptions'{$ENDIF},
  SavePictureDialog_SetOptions {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetOptions'{$ENDIF},
  //SavePictureDialog_GetOptionsEx {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetOptionsEx'{$ENDIF},
  //SavePictureDialog_SetOptionsEx {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetOptionsEx'{$ENDIF},
  SavePictureDialog_GetTitle {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetTitle'{$ENDIF},
  SavePictureDialog_SetTitle {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetTitle'{$ENDIF},
  SavePictureDialog_GetHandle {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetHandle'{$ENDIF},
  SavePictureDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetOnClose'{$ENDIF},
  SavePictureDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetOnShow'{$ENDIF},
  SavePictureDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetComponentCount'{$ENDIF},
  SavePictureDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetComponentIndex'{$ENDIF},
  SavePictureDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetComponentIndex'{$ENDIF},
  SavePictureDialog_GetOwner {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetOwner'{$ENDIF},
  SavePictureDialog_GetName {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetName'{$ENDIF},
  SavePictureDialog_SetName {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetName'{$ENDIF},
  SavePictureDialog_GetTag {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetTag'{$ENDIF},
  SavePictureDialog_SetTag {$IFNDEF MSWINDOWS}name '_SavePictureDialog_SetTag'{$ENDIF},
  SavePictureDialog_GetComponents {$IFNDEF MSWINDOWS}name '_SavePictureDialog_GetComponents'{$ENDIF};

