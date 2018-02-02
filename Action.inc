
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Action_Create(AOwner: TComponent): TAction; cdecl;
begin
  Result :=  TAction.Create(AOwner);
end;

procedure Action_Free(AObj: TAction); cdecl;
begin
  AObj.Free;
end;

function Action_Execute(AObj: TAction): LongBool; cdecl;
begin
  Result :=  AObj.Execute;
end;

function Action_Update(AObj: TAction): LongBool; cdecl;
begin
  Result :=  AObj.Update;
end;

function Action_HasParent(AObj: TAction): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

function Action_FindComponent(AObj: TAction; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Action_GetNamePath(AObj: TAction): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Action_Assign(AObj: TAction; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Action_ClassName(AObj: TAction): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Action_Equals(AObj: TAction; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Action_GetHashCode(AObj: TAction): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Action_ToString(AObj: TAction): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Action_GetCaption(AObj: TAction): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure Action_SetCaption(AObj: TAction; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function Action_GetChecked(AObj: TAction): LongBool; cdecl;
begin
  Result :=  AObj.Checked;
end;

procedure Action_SetChecked(AObj: TAction; AValue: LongBool); cdecl;
begin
  AObj.Checked := AValue;
end;

function Action_GetEnabled(AObj: TAction): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Action_SetEnabled(AObj: TAction; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Action_GetGroupIndex(AObj: TAction): Integer; cdecl;
begin
  Result :=  AObj.GroupIndex;
end;

procedure Action_SetGroupIndex(AObj: TAction; AValue: Integer); cdecl;
begin
  AObj.GroupIndex := AValue;
end;

function Action_GetHint(AObj: TAction): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Action_SetHint(AObj: TAction; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Action_GetImageIndex(AObj: TAction): TImageIndex; cdecl;
//begin
//  Result :=  AObj.ImageIndex;
//end;
//
//procedure Action_SetImageIndex(AObj: TAction; AValue: TImageIndex); cdecl;
//begin
//  AObj.ImageIndex := AValue;
//end;

function Action_GetShortCut(AObj: TAction): TShortCut; cdecl;
begin
  Result :=  AObj.ShortCut;
end;

procedure Action_SetShortCut(AObj: TAction; AValue: TShortCut); cdecl;
begin
  AObj.ShortCut := AValue;
end;

function Action_GetVisible(AObj: TAction): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Action_SetVisible(AObj: TAction; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

procedure Action_SetOnExecute(AObj: TAction; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnExecute := nil;
    TEventClass.Remove(AObj, geExecute);
    Exit;
  end;
  AObj.OnExecute := TEventClass.OnExecute;
  TEventClass.Add(AObj, geExecute, AEventId);
end;

procedure Action_SetOnUpdate(AObj: TAction; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnUpdate := nil;
    TEventClass.Remove(AObj, geUpdate);
    Exit;
  end;
  AObj.OnUpdate := TEventClass.OnUpdate;
  TEventClass.Add(AObj, geUpdate, AEventId);
end;

//function Action_GetImages(AObj: TAction): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.Images;
//end;

function Action_GetIndex(AObj: TAction): Integer; cdecl;
begin
  Result :=  AObj.Index;
end;

procedure Action_SetIndex(AObj: TAction; AValue: Integer); cdecl;
begin
  AObj.Index := AValue;
end;

function Action_GetComponentCount(AObj: TAction): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Action_GetComponentIndex(AObj: TAction): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Action_SetComponentIndex(AObj: TAction; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Action_GetOwner(AObj: TAction): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Action_GetName(AObj: TAction): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Action_SetName(AObj: TAction; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Action_GetTag(AObj: TAction): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Action_SetTag(AObj: TAction; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Action_GetComponents(AObj: TAction; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Action_Create {$IFNDEF MSWINDOWS}name '_Action_Create'{$ENDIF},
  Action_Free {$IFNDEF MSWINDOWS}name '_Action_Free'{$ENDIF},
  Action_Execute {$IFNDEF MSWINDOWS}name '_Action_Execute'{$ENDIF},
  Action_Update {$IFNDEF MSWINDOWS}name '_Action_Update'{$ENDIF},
  Action_HasParent {$IFNDEF MSWINDOWS}name '_Action_HasParent'{$ENDIF},
  Action_FindComponent {$IFNDEF MSWINDOWS}name '_Action_FindComponent'{$ENDIF},
  Action_GetNamePath {$IFNDEF MSWINDOWS}name '_Action_GetNamePath'{$ENDIF},
  Action_Assign {$IFNDEF MSWINDOWS}name '_Action_Assign'{$ENDIF},
  Action_ClassName {$IFNDEF MSWINDOWS}name '_Action_ClassName'{$ENDIF},
  Action_Equals {$IFNDEF MSWINDOWS}name '_Action_Equals'{$ENDIF},
  Action_GetHashCode {$IFNDEF MSWINDOWS}name '_Action_GetHashCode'{$ENDIF},
  Action_ToString {$IFNDEF MSWINDOWS}name '_Action_ToString'{$ENDIF},
  Action_GetCaption {$IFNDEF MSWINDOWS}name '_Action_GetCaption'{$ENDIF},
  Action_SetCaption {$IFNDEF MSWINDOWS}name '_Action_SetCaption'{$ENDIF},
  Action_GetChecked {$IFNDEF MSWINDOWS}name '_Action_GetChecked'{$ENDIF},
  Action_SetChecked {$IFNDEF MSWINDOWS}name '_Action_SetChecked'{$ENDIF},
  Action_GetEnabled {$IFNDEF MSWINDOWS}name '_Action_GetEnabled'{$ENDIF},
  Action_SetEnabled {$IFNDEF MSWINDOWS}name '_Action_SetEnabled'{$ENDIF},
  Action_GetGroupIndex {$IFNDEF MSWINDOWS}name '_Action_GetGroupIndex'{$ENDIF},
  Action_SetGroupIndex {$IFNDEF MSWINDOWS}name '_Action_SetGroupIndex'{$ENDIF},
  Action_GetHint {$IFNDEF MSWINDOWS}name '_Action_GetHint'{$ENDIF},
  Action_SetHint {$IFNDEF MSWINDOWS}name '_Action_SetHint'{$ENDIF},
  //Action_GetImageIndex {$IFNDEF MSWINDOWS}name '_Action_GetImageIndex'{$ENDIF},
  //Action_SetImageIndex {$IFNDEF MSWINDOWS}name '_Action_SetImageIndex'{$ENDIF},
  Action_GetShortCut {$IFNDEF MSWINDOWS}name '_Action_GetShortCut'{$ENDIF},
  Action_SetShortCut {$IFNDEF MSWINDOWS}name '_Action_SetShortCut'{$ENDIF},
  Action_GetVisible {$IFNDEF MSWINDOWS}name '_Action_GetVisible'{$ENDIF},
  Action_SetVisible {$IFNDEF MSWINDOWS}name '_Action_SetVisible'{$ENDIF},
  Action_SetOnExecute {$IFNDEF MSWINDOWS}name '_Action_SetOnExecute'{$ENDIF},
  Action_SetOnUpdate {$IFNDEF MSWINDOWS}name '_Action_SetOnUpdate'{$ENDIF},
  //Action_GetImages {$IFNDEF MSWINDOWS}name '_Action_GetImages'{$ENDIF},
  Action_GetIndex {$IFNDEF MSWINDOWS}name '_Action_GetIndex'{$ENDIF},
  Action_SetIndex {$IFNDEF MSWINDOWS}name '_Action_SetIndex'{$ENDIF},
  Action_GetComponentCount {$IFNDEF MSWINDOWS}name '_Action_GetComponentCount'{$ENDIF},
  Action_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Action_GetComponentIndex'{$ENDIF},
  Action_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Action_SetComponentIndex'{$ENDIF},
  Action_GetOwner {$IFNDEF MSWINDOWS}name '_Action_GetOwner'{$ENDIF},
  Action_GetName {$IFNDEF MSWINDOWS}name '_Action_GetName'{$ENDIF},
  Action_SetName {$IFNDEF MSWINDOWS}name '_Action_SetName'{$ENDIF},
  Action_GetTag {$IFNDEF MSWINDOWS}name '_Action_GetTag'{$ENDIF},
  Action_SetTag {$IFNDEF MSWINDOWS}name '_Action_SetTag'{$ENDIF},
  Action_GetComponents {$IFNDEF MSWINDOWS}name '_Action_GetComponents'{$ENDIF};

