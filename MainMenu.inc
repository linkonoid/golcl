
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function MainMenu_Create(AOwner: TComponent): TMainMenu; cdecl;
begin
  Result :=  TMainMenu.Create(AOwner);
end;

procedure MainMenu_Free(AObj: TMainMenu); cdecl;
begin
  AObj.Free;
end;

function MainMenu_FindComponent(AObj: TMainMenu; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function MainMenu_GetNamePath(AObj: TMainMenu): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function MainMenu_HasParent(AObj: TMainMenu): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure MainMenu_Assign(AObj: TMainMenu; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function MainMenu_ClassName(AObj: TMainMenu): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function MainMenu_Equals(AObj: TMainMenu; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function MainMenu_GetHashCode(AObj: TMainMenu): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function MainMenu_ToString(AObj: TMainMenu): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

//function MainMenu_GetAutoHotkeys(AObj: TMainMenu): TMenuAutoFlag; cdecl;
//begin
//  Result :=  AObj.AutoHotkeys;
//end;
//
//procedure MainMenu_SetAutoHotkeys(AObj: TMainMenu; AValue: TMenuAutoFlag); cdecl;
//begin
//  AObj.AutoHotkeys := AValue;
//end;

function MainMenu_GetBiDiMode(AObj: TMainMenu): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure MainMenu_SetBiDiMode(AObj: TMainMenu; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

//function MainMenu_GetImages(AObj: TMainMenu): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.Images;
//end;
//
//procedure MainMenu_SetImages(AObj: TMainMenu; AValue: TCustomImageList); cdecl;
//begin
//  AObj.Images := AValue;
//end;

procedure MainMenu_SetOnChange(AObj: TMainMenu; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, geMenuChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.MenuOnChange;
  TEventClass.Add(AObj, geMenuChange, AEventId);
end;

function MainMenu_GetHandle(AObj: TMainMenu): HMENU; cdecl;
begin
  Result :=  AObj.Handle;
end;

function MainMenu_GetWindowHandle(AObj: TMainMenu): HWND; cdecl;
begin
  Result :=  AObj.WindowHandle;
end;

procedure MainMenu_SetWindowHandle(AObj: TMainMenu; AValue: HWND); cdecl;
begin
  AObj.WindowHandle := AValue;
end;

function MainMenu_GetItems(AObj: TMainMenu): TMenuItem; cdecl;
begin
  Result :=  AObj.Items;
end;

function MainMenu_GetComponentCount(AObj: TMainMenu): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function MainMenu_GetComponentIndex(AObj: TMainMenu): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure MainMenu_SetComponentIndex(AObj: TMainMenu; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function MainMenu_GetOwner(AObj: TMainMenu): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function MainMenu_GetName(AObj: TMainMenu): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure MainMenu_SetName(AObj: TMainMenu; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function MainMenu_GetTag(AObj: TMainMenu): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure MainMenu_SetTag(AObj: TMainMenu; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function MainMenu_GetComponents(AObj: TMainMenu; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  MainMenu_Create {$IFNDEF MSWINDOWS}name '_MainMenu_Create'{$ENDIF},
  MainMenu_Free {$IFNDEF MSWINDOWS}name '_MainMenu_Free'{$ENDIF},
  MainMenu_FindComponent {$IFNDEF MSWINDOWS}name '_MainMenu_FindComponent'{$ENDIF},
  MainMenu_GetNamePath {$IFNDEF MSWINDOWS}name '_MainMenu_GetNamePath'{$ENDIF},
  MainMenu_HasParent {$IFNDEF MSWINDOWS}name '_MainMenu_HasParent'{$ENDIF},
  MainMenu_Assign {$IFNDEF MSWINDOWS}name '_MainMenu_Assign'{$ENDIF},
  MainMenu_ClassName {$IFNDEF MSWINDOWS}name '_MainMenu_ClassName'{$ENDIF},
  MainMenu_Equals {$IFNDEF MSWINDOWS}name '_MainMenu_Equals'{$ENDIF},
  MainMenu_GetHashCode {$IFNDEF MSWINDOWS}name '_MainMenu_GetHashCode'{$ENDIF},
  MainMenu_ToString {$IFNDEF MSWINDOWS}name '_MainMenu_ToString'{$ENDIF},
  //MainMenu_GetAutoHotkeys {$IFNDEF MSWINDOWS}name '_MainMenu_GetAutoHotkeys'{$ENDIF},
  //MainMenu_SetAutoHotkeys {$IFNDEF MSWINDOWS}name '_MainMenu_SetAutoHotkeys'{$ENDIF},
  MainMenu_GetBiDiMode {$IFNDEF MSWINDOWS}name '_MainMenu_GetBiDiMode'{$ENDIF},
  MainMenu_SetBiDiMode {$IFNDEF MSWINDOWS}name '_MainMenu_SetBiDiMode'{$ENDIF},
  //MainMenu_GetImages {$IFNDEF MSWINDOWS}name '_MainMenu_GetImages'{$ENDIF},
  //MainMenu_SetImages {$IFNDEF MSWINDOWS}name '_MainMenu_SetImages'{$ENDIF},
  MainMenu_SetOnChange {$IFNDEF MSWINDOWS}name '_MainMenu_SetOnChange'{$ENDIF},
  MainMenu_GetHandle {$IFNDEF MSWINDOWS}name '_MainMenu_GetHandle'{$ENDIF},
  MainMenu_GetWindowHandle {$IFNDEF MSWINDOWS}name '_MainMenu_GetWindowHandle'{$ENDIF},
  MainMenu_SetWindowHandle {$IFNDEF MSWINDOWS}name '_MainMenu_SetWindowHandle'{$ENDIF},
  MainMenu_GetItems {$IFNDEF MSWINDOWS}name '_MainMenu_GetItems'{$ENDIF},
  MainMenu_GetComponentCount {$IFNDEF MSWINDOWS}name '_MainMenu_GetComponentCount'{$ENDIF},
  MainMenu_GetComponentIndex {$IFNDEF MSWINDOWS}name '_MainMenu_GetComponentIndex'{$ENDIF},
  MainMenu_SetComponentIndex {$IFNDEF MSWINDOWS}name '_MainMenu_SetComponentIndex'{$ENDIF},
  MainMenu_GetOwner {$IFNDEF MSWINDOWS}name '_MainMenu_GetOwner'{$ENDIF},
  MainMenu_GetName {$IFNDEF MSWINDOWS}name '_MainMenu_GetName'{$ENDIF},
  MainMenu_SetName {$IFNDEF MSWINDOWS}name '_MainMenu_SetName'{$ENDIF},
  MainMenu_GetTag {$IFNDEF MSWINDOWS}name '_MainMenu_GetTag'{$ENDIF},
  MainMenu_SetTag {$IFNDEF MSWINDOWS}name '_MainMenu_SetTag'{$ENDIF},
  MainMenu_GetComponents {$IFNDEF MSWINDOWS}name '_MainMenu_GetComponents'{$ENDIF};

