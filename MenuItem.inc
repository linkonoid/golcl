
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function MenuItem_Create(AOwner: TComponent): TMenuItem; cdecl;
begin
  Result :=  TMenuItem.Create(AOwner);
end;

procedure MenuItem_Free(AObj: TMenuItem); cdecl;
begin
  AObj.Free;
end;

procedure MenuItem_Insert(AObj: TMenuItem; Index: Integer; Item: TMenuItem); cdecl;
begin
  AObj.Insert(Index, Item);
end;

procedure MenuItem_Delete(AObj: TMenuItem; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

procedure MenuItem_Clear(AObj: TMenuItem); cdecl;
begin
  AObj.Clear;
end;

procedure MenuItem_Click(AObj: TMenuItem); cdecl;
begin
  AObj.Click;
end;

function MenuItem_IndexOf(AObj: TMenuItem; Item: TMenuItem): Integer; cdecl;
begin
  Result :=  AObj.IndexOf(Item);
end;

function MenuItem_HasParent(AObj: TMenuItem): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure MenuItem_Add(AObj: TMenuItem; Item: TMenuItem); cdecl;
begin
  AObj.Add(Item);
end;

function MenuItem_FindComponent(AObj: TMenuItem; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function MenuItem_GetNamePath(AObj: TMenuItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure MenuItem_Assign(AObj: TMenuItem; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function MenuItem_ClassName(AObj: TMenuItem): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function MenuItem_Equals(AObj: TMenuItem; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function MenuItem_GetHashCode(AObj: TMenuItem): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function MenuItem_ToString(AObj: TMenuItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function MenuItem_GetHandle(AObj: TMenuItem): HMENU; cdecl;
begin
  Result :=  AObj.Handle;
end;

function MenuItem_GetParent(AObj: TMenuItem): TMenuItem; cdecl;
begin
  Result :=  AObj.Parent;
end;

function MenuItem_GetAction(AObj: TMenuItem): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure MenuItem_SetAction(AObj: TMenuItem; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

//function MenuItem_GetAutoHotkeys(AObj: TMenuItem): TMenuItemAutoFlag; cdecl;
//begin
//  Result :=  AObj.AutoHotkeys;
//end;
//
//procedure MenuItem_SetAutoHotkeys(AObj: TMenuItem; AValue: TMenuItemAutoFlag); cdecl;
//begin
//  AObj.AutoHotkeys := AValue;
//end;

function MenuItem_GetBitmap(AObj: TMenuItem): TBitmap; cdecl;
begin
  Result :=  AObj.Bitmap;
end;

procedure MenuItem_SetBitmap(AObj: TMenuItem; AValue: TBitmap); cdecl;
begin
  AObj.Bitmap := AValue;
end;

function MenuItem_GetCaption(AObj: TMenuItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure MenuItem_SetCaption(AObj: TMenuItem; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function MenuItem_GetChecked(AObj: TMenuItem): LongBool; cdecl;
begin
  Result :=  AObj.Checked;
end;

procedure MenuItem_SetChecked(AObj: TMenuItem; AValue: LongBool); cdecl;
begin
  AObj.Checked := AValue;
end;

function MenuItem_GetDefault(AObj: TMenuItem): LongBool; cdecl;
begin
  Result :=  AObj.Default;
end;

procedure MenuItem_SetDefault(AObj: TMenuItem; AValue: LongBool); cdecl;
begin
  AObj.Default := AValue;
end;

function MenuItem_GetEnabled(AObj: TMenuItem): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure MenuItem_SetEnabled(AObj: TMenuItem; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function MenuItem_GetGroupIndex(AObj: TMenuItem): Byte; cdecl;
begin
  Result :=  AObj.GroupIndex;
end;

procedure MenuItem_SetGroupIndex(AObj: TMenuItem; AValue: Byte); cdecl;
begin
  AObj.GroupIndex := AValue;
end;

function MenuItem_GetHint(AObj: TMenuItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure MenuItem_SetHint(AObj: TMenuItem; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function MenuItem_GetImageIndex(AObj: TMenuItem): TImageIndex; cdecl;
//begin
//  Result :=  AObj.ImageIndex;
//end;
//
//procedure MenuItem_SetImageIndex(AObj: TMenuItem; AValue: TImageIndex); cdecl;
//begin
//  AObj.ImageIndex := AValue;
//end;

function MenuItem_GetShortCut(AObj: TMenuItem): TShortCut; cdecl;
begin
  Result :=  AObj.ShortCut;
end;

procedure MenuItem_SetShortCut(AObj: TMenuItem; AValue: TShortCut); cdecl;
begin
  AObj.ShortCut := AValue;
end;

function MenuItem_GetVisible(AObj: TMenuItem): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure MenuItem_SetVisible(AObj: TMenuItem; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

procedure MenuItem_SetOnClick(AObj: TMenuItem; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    TEventClass.Remove(AObj, geClick);
    Exit;
  end;
  AObj.OnClick := TEventClass.OnClick;
  TEventClass.Add(AObj, geClick, AEventId);
end;

function MenuItem_GetComponentCount(AObj: TMenuItem): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function MenuItem_GetComponentIndex(AObj: TMenuItem): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure MenuItem_SetComponentIndex(AObj: TMenuItem; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function MenuItem_GetOwner(AObj: TMenuItem): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function MenuItem_GetName(AObj: TMenuItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure MenuItem_SetName(AObj: TMenuItem; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function MenuItem_GetTag(AObj: TMenuItem): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure MenuItem_SetTag(AObj: TMenuItem; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function MenuItem_GetItems(AObj: TMenuItem; Index: Integer): TMenuItem; cdecl;
begin
  Result :=  AObj.Items[Index];
end;

function MenuItem_GetComponents(AObj: TMenuItem; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  MenuItem_Create {$IFNDEF MSWINDOWS}name '_MenuItem_Create'{$ENDIF},
  MenuItem_Free {$IFNDEF MSWINDOWS}name '_MenuItem_Free'{$ENDIF},
  MenuItem_Insert {$IFNDEF MSWINDOWS}name '_MenuItem_Insert'{$ENDIF},
  MenuItem_Delete {$IFNDEF MSWINDOWS}name '_MenuItem_Delete'{$ENDIF},
  MenuItem_Clear {$IFNDEF MSWINDOWS}name '_MenuItem_Clear'{$ENDIF},
  MenuItem_Click {$IFNDEF MSWINDOWS}name '_MenuItem_Click'{$ENDIF},
  MenuItem_IndexOf {$IFNDEF MSWINDOWS}name '_MenuItem_IndexOf'{$ENDIF},
  MenuItem_HasParent {$IFNDEF MSWINDOWS}name '_MenuItem_HasParent'{$ENDIF},
  MenuItem_Add {$IFNDEF MSWINDOWS}name '_MenuItem_Add'{$ENDIF},
  MenuItem_FindComponent {$IFNDEF MSWINDOWS}name '_MenuItem_FindComponent'{$ENDIF},
  MenuItem_GetNamePath {$IFNDEF MSWINDOWS}name '_MenuItem_GetNamePath'{$ENDIF},
  MenuItem_Assign {$IFNDEF MSWINDOWS}name '_MenuItem_Assign'{$ENDIF},
  MenuItem_ClassName {$IFNDEF MSWINDOWS}name '_MenuItem_ClassName'{$ENDIF},
  MenuItem_Equals {$IFNDEF MSWINDOWS}name '_MenuItem_Equals'{$ENDIF},
  MenuItem_GetHashCode {$IFNDEF MSWINDOWS}name '_MenuItem_GetHashCode'{$ENDIF},
  MenuItem_ToString {$IFNDEF MSWINDOWS}name '_MenuItem_ToString'{$ENDIF},
  MenuItem_GetHandle {$IFNDEF MSWINDOWS}name '_MenuItem_GetHandle'{$ENDIF},
  MenuItem_GetParent {$IFNDEF MSWINDOWS}name '_MenuItem_GetParent'{$ENDIF},
  MenuItem_GetAction {$IFNDEF MSWINDOWS}name '_MenuItem_GetAction'{$ENDIF},
  MenuItem_SetAction {$IFNDEF MSWINDOWS}name '_MenuItem_SetAction'{$ENDIF},
  //MenuItem_GetAutoHotkeys {$IFNDEF MSWINDOWS}name '_MenuItem_GetAutoHotkeys'{$ENDIF},
  //MenuItem_SetAutoHotkeys {$IFNDEF MSWINDOWS}name '_MenuItem_SetAutoHotkeys'{$ENDIF},
  MenuItem_GetBitmap {$IFNDEF MSWINDOWS}name '_MenuItem_GetBitmap'{$ENDIF},
  MenuItem_SetBitmap {$IFNDEF MSWINDOWS}name '_MenuItem_SetBitmap'{$ENDIF},
  MenuItem_GetCaption {$IFNDEF MSWINDOWS}name '_MenuItem_GetCaption'{$ENDIF},
  MenuItem_SetCaption {$IFNDEF MSWINDOWS}name '_MenuItem_SetCaption'{$ENDIF},
  MenuItem_GetChecked {$IFNDEF MSWINDOWS}name '_MenuItem_GetChecked'{$ENDIF},
  MenuItem_SetChecked {$IFNDEF MSWINDOWS}name '_MenuItem_SetChecked'{$ENDIF},
  MenuItem_GetDefault {$IFNDEF MSWINDOWS}name '_MenuItem_GetDefault'{$ENDIF},
  MenuItem_SetDefault {$IFNDEF MSWINDOWS}name '_MenuItem_SetDefault'{$ENDIF},
  MenuItem_GetEnabled {$IFNDEF MSWINDOWS}name '_MenuItem_GetEnabled'{$ENDIF},
  MenuItem_SetEnabled {$IFNDEF MSWINDOWS}name '_MenuItem_SetEnabled'{$ENDIF},
  MenuItem_GetGroupIndex {$IFNDEF MSWINDOWS}name '_MenuItem_GetGroupIndex'{$ENDIF},
  MenuItem_SetGroupIndex {$IFNDEF MSWINDOWS}name '_MenuItem_SetGroupIndex'{$ENDIF},
  MenuItem_GetHint {$IFNDEF MSWINDOWS}name '_MenuItem_GetHint'{$ENDIF},
  MenuItem_SetHint {$IFNDEF MSWINDOWS}name '_MenuItem_SetHint'{$ENDIF},
  //MenuItem_GetImageIndex {$IFNDEF MSWINDOWS}name '_MenuItem_GetImageIndex'{$ENDIF},
  //MenuItem_SetImageIndex {$IFNDEF MSWINDOWS}name '_MenuItem_SetImageIndex'{$ENDIF},
  MenuItem_GetShortCut {$IFNDEF MSWINDOWS}name '_MenuItem_GetShortCut'{$ENDIF},
  MenuItem_SetShortCut {$IFNDEF MSWINDOWS}name '_MenuItem_SetShortCut'{$ENDIF},
  MenuItem_GetVisible {$IFNDEF MSWINDOWS}name '_MenuItem_GetVisible'{$ENDIF},
  MenuItem_SetVisible {$IFNDEF MSWINDOWS}name '_MenuItem_SetVisible'{$ENDIF},
  MenuItem_SetOnClick {$IFNDEF MSWINDOWS}name '_MenuItem_SetOnClick'{$ENDIF},
  MenuItem_GetComponentCount {$IFNDEF MSWINDOWS}name '_MenuItem_GetComponentCount'{$ENDIF},
  MenuItem_GetComponentIndex {$IFNDEF MSWINDOWS}name '_MenuItem_GetComponentIndex'{$ENDIF},
  MenuItem_SetComponentIndex {$IFNDEF MSWINDOWS}name '_MenuItem_SetComponentIndex'{$ENDIF},
  MenuItem_GetOwner {$IFNDEF MSWINDOWS}name '_MenuItem_GetOwner'{$ENDIF},
  MenuItem_GetName {$IFNDEF MSWINDOWS}name '_MenuItem_GetName'{$ENDIF},
  MenuItem_SetName {$IFNDEF MSWINDOWS}name '_MenuItem_SetName'{$ENDIF},
  MenuItem_GetTag {$IFNDEF MSWINDOWS}name '_MenuItem_GetTag'{$ENDIF},
  MenuItem_SetTag {$IFNDEF MSWINDOWS}name '_MenuItem_SetTag'{$ENDIF},
  MenuItem_GetItems {$IFNDEF MSWINDOWS}name '_MenuItem_GetItems'{$ENDIF},
  MenuItem_GetComponents {$IFNDEF MSWINDOWS}name '_MenuItem_GetComponents'{$ENDIF};

