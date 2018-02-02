
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function PopupMenu_Create(AOwner: TComponent): TPopupMenu; cdecl;
begin
  Result :=  TPopupMenu.Create(AOwner);
end;

procedure PopupMenu_Free(AObj: TPopupMenu); cdecl;
begin
  AObj.Free;
end;

procedure PopupMenu_CloseMenu(AObj: TPopupMenu); cdecl;
begin
  AObj.Close;
end;

procedure PopupMenu_Popup(AObj: TPopupMenu; X: Integer; Y: Integer); cdecl;
begin
  AObj.Popup(X, Y);
end;

function PopupMenu_FindComponent(AObj: TPopupMenu; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function PopupMenu_GetNamePath(AObj: TPopupMenu): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function PopupMenu_HasParent(AObj: TPopupMenu): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure PopupMenu_Assign(AObj: TPopupMenu; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function PopupMenu_ClassName(AObj: TPopupMenu): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function PopupMenu_Equals(AObj: TPopupMenu; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function PopupMenu_GetHashCode(AObj: TPopupMenu): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function PopupMenu_ToString(AObj: TPopupMenu): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function PopupMenu_GetAlignment(AObj: TPopupMenu): TPopupAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure PopupMenu_SetAlignment(AObj: TPopupMenu; AValue: TPopupAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

//function PopupMenu_GetAutoHotkeys(AObj: TPopupMenu): TMenuAutoFlag; cdecl;
//begin
//  Result :=  AObj.AutoHotkeys;
//end;
//
//procedure PopupMenu_SetAutoHotkeys(AObj: TPopupMenu; AValue: TMenuAutoFlag); cdecl;
//begin
//  AObj.AutoHotkeys := AValue;
//end;

function PopupMenu_GetBiDiMode(AObj: TPopupMenu): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure PopupMenu_SetBiDiMode(AObj: TPopupMenu; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

//function PopupMenu_GetImages(AObj: TPopupMenu): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.Images;
//end;
//
//procedure PopupMenu_SetImages(AObj: TPopupMenu; AValue: TCustomImageList); cdecl;
//begin
//  AObj.Images := AValue;
//end;

procedure PopupMenu_SetOnChange(AObj: TPopupMenu; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
   // AObj.OnChange := nil;
    TEventClass.Remove(AObj, geMenuChange);
    Exit;
  end;
  //AObj.OnChange := TEventClass.MenuOnChange;
  TEventClass.Add(AObj, geMenuChange, AEventId);
end;

procedure PopupMenu_SetOnPopup(AObj: TPopupMenu; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnPopup := nil;
    TEventClass.Remove(AObj, gePopup);
    Exit;
  end;
  AObj.OnPopup := TEventClass.OnPopup;
  TEventClass.Add(AObj, gePopup, AEventId);
end;

function PopupMenu_GetHandle(AObj: TPopupMenu): HMENU; cdecl;
begin
  Result :=  AObj.Handle;
end;

function PopupMenu_GetWindowHandle(AObj: TPopupMenu): HWND; cdecl;
begin
  //Result :=  AObj.WindowHandle;
end;

procedure PopupMenu_SetWindowHandle(AObj: TPopupMenu; AValue: HWND); cdecl;
begin
  //AObj.WindowHandle := AValue;
end;

function PopupMenu_GetItems(AObj: TPopupMenu): TMenuItem; cdecl;
begin
  Result :=  AObj.Items;
end;

function PopupMenu_GetComponentCount(AObj: TPopupMenu): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function PopupMenu_GetComponentIndex(AObj: TPopupMenu): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure PopupMenu_SetComponentIndex(AObj: TPopupMenu; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function PopupMenu_GetOwner(AObj: TPopupMenu): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function PopupMenu_GetName(AObj: TPopupMenu): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure PopupMenu_SetName(AObj: TPopupMenu; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function PopupMenu_GetTag(AObj: TPopupMenu): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure PopupMenu_SetTag(AObj: TPopupMenu; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function PopupMenu_GetComponents(AObj: TPopupMenu; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  PopupMenu_Create {$IFNDEF MSWINDOWS}name '_PopupMenu_Create'{$ENDIF},
  PopupMenu_Free {$IFNDEF MSWINDOWS}name '_PopupMenu_Free'{$ENDIF},
  PopupMenu_CloseMenu {$IFNDEF MSWINDOWS}name '_PopupMenu_CloseMenu'{$ENDIF},
  PopupMenu_Popup {$IFNDEF MSWINDOWS}name '_PopupMenu_Popup'{$ENDIF},
  PopupMenu_FindComponent {$IFNDEF MSWINDOWS}name '_PopupMenu_FindComponent'{$ENDIF},
  PopupMenu_GetNamePath {$IFNDEF MSWINDOWS}name '_PopupMenu_GetNamePath'{$ENDIF},
  PopupMenu_HasParent {$IFNDEF MSWINDOWS}name '_PopupMenu_HasParent'{$ENDIF},
  PopupMenu_Assign {$IFNDEF MSWINDOWS}name '_PopupMenu_Assign'{$ENDIF},
  PopupMenu_ClassName {$IFNDEF MSWINDOWS}name '_PopupMenu_ClassName'{$ENDIF},
  PopupMenu_Equals {$IFNDEF MSWINDOWS}name '_PopupMenu_Equals'{$ENDIF},
  PopupMenu_GetHashCode {$IFNDEF MSWINDOWS}name '_PopupMenu_GetHashCode'{$ENDIF},
  PopupMenu_ToString {$IFNDEF MSWINDOWS}name '_PopupMenu_ToString'{$ENDIF},
  PopupMenu_GetAlignment {$IFNDEF MSWINDOWS}name '_PopupMenu_GetAlignment'{$ENDIF},
  PopupMenu_SetAlignment {$IFNDEF MSWINDOWS}name '_PopupMenu_SetAlignment'{$ENDIF},
  //PopupMenu_GetAutoHotkeys {$IFNDEF MSWINDOWS}name '_PopupMenu_GetAutoHotkeys'{$ENDIF},
  //PopupMenu_SetAutoHotkeys {$IFNDEF MSWINDOWS}name '_PopupMenu_SetAutoHotkeys'{$ENDIF},
  PopupMenu_GetBiDiMode {$IFNDEF MSWINDOWS}name '_PopupMenu_GetBiDiMode'{$ENDIF},
  PopupMenu_SetBiDiMode {$IFNDEF MSWINDOWS}name '_PopupMenu_SetBiDiMode'{$ENDIF},
  //PopupMenu_GetImages {$IFNDEF MSWINDOWS}name '_PopupMenu_GetImages'{$ENDIF},
  //PopupMenu_SetImages {$IFNDEF MSWINDOWS}name '_PopupMenu_SetImages'{$ENDIF},
  PopupMenu_SetOnChange {$IFNDEF MSWINDOWS}name '_PopupMenu_SetOnChange'{$ENDIF},
  PopupMenu_SetOnPopup {$IFNDEF MSWINDOWS}name '_PopupMenu_SetOnPopup'{$ENDIF},
  PopupMenu_GetHandle {$IFNDEF MSWINDOWS}name '_PopupMenu_GetHandle'{$ENDIF},
  PopupMenu_GetWindowHandle {$IFNDEF MSWINDOWS}name '_PopupMenu_GetWindowHandle'{$ENDIF},
  PopupMenu_SetWindowHandle {$IFNDEF MSWINDOWS}name '_PopupMenu_SetWindowHandle'{$ENDIF},
  PopupMenu_GetItems {$IFNDEF MSWINDOWS}name '_PopupMenu_GetItems'{$ENDIF},
  PopupMenu_GetComponentCount {$IFNDEF MSWINDOWS}name '_PopupMenu_GetComponentCount'{$ENDIF},
  PopupMenu_GetComponentIndex {$IFNDEF MSWINDOWS}name '_PopupMenu_GetComponentIndex'{$ENDIF},
  PopupMenu_SetComponentIndex {$IFNDEF MSWINDOWS}name '_PopupMenu_SetComponentIndex'{$ENDIF},
  PopupMenu_GetOwner {$IFNDEF MSWINDOWS}name '_PopupMenu_GetOwner'{$ENDIF},
  PopupMenu_GetName {$IFNDEF MSWINDOWS}name '_PopupMenu_GetName'{$ENDIF},
  PopupMenu_SetName {$IFNDEF MSWINDOWS}name '_PopupMenu_SetName'{$ENDIF},
  PopupMenu_GetTag {$IFNDEF MSWINDOWS}name '_PopupMenu_GetTag'{$ENDIF},
  PopupMenu_SetTag {$IFNDEF MSWINDOWS}name '_PopupMenu_SetTag'{$ENDIF},
  PopupMenu_GetComponents {$IFNDEF MSWINDOWS}name '_PopupMenu_GetComponents'{$ENDIF};

