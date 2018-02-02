
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ListItem_Create(AOwner: TListItems): TListItem; cdecl;
begin
  Result :=  TListItem.Create(AOwner);
end;

procedure ListItem_Free(AObj: TListItem); cdecl;
begin
  AObj.Free;
end;

procedure ListItem_Assign(AObj: TListItem; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

//procedure ListItem_CancelEdit(AObj: TListItem); cdecl;
//begin
//  AObj.CancelEdit;
//end;

procedure ListItem_Delete(AObj: TListItem); cdecl;
begin
  AObj.Delete;
end;

function ListItem_EditCaption(AObj: TListItem): LongBool; cdecl;
begin
  Result :=  AObj.EditCaption;
end;

procedure ListItem_MakeVisible(AObj: TListItem; PartialOK: LongBool); cdecl;
begin
  AObj.MakeVisible(PartialOK);
end;

//procedure ListItem_Update(AObj: TListItem); cdecl;
//begin
//  AObj.Update;
//end;

//function ListItem_WorkArea(AObj: TListItem): Integer; cdecl;
//begin
//  Result :=  AObj.WorkArea;
//end;

function ListItem_GetNamePath(AObj: TListItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ListItem_ClassName(AObj: TListItem): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ListItem_Equals(AObj: TListItem; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListItem_GetHashCode(AObj: TListItem): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListItem_ToString(AObj: TListItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ListItem_GetCaption(AObj: TListItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure ListItem_SetCaption(AObj: TListItem; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function ListItem_GetChecked(AObj: TListItem): LongBool; cdecl;
begin
  Result :=  AObj.Checked;
end;

procedure ListItem_SetChecked(AObj: TListItem; AValue: LongBool); cdecl;
begin
  AObj.Checked := AValue;
end;

function ListItem_GetCut(AObj: TListItem): LongBool; cdecl;
begin
  Result :=  AObj.Cut;
end;

procedure ListItem_SetCut(AObj: TListItem; AValue: LongBool); cdecl;
begin
  AObj.Cut := AValue;
end;

function ListItem_GetData(AObj: TListItem): Pointer; cdecl;
begin
  Result :=  AObj.Data;
end;

procedure ListItem_SetData(AObj: TListItem; AValue: Pointer); cdecl;
begin
  AObj.Data := AValue;
end;

//function ListItem_GetDeleting(AObj: TListItem): LongBool; cdecl;
//begin
//  Result :=  AObj.Deleting;
//end;

function ListItem_GetDropTarget(AObj: TListItem): LongBool; cdecl;
begin
  Result :=  AObj.DropTarget;
end;

procedure ListItem_SetDropTarget(AObj: TListItem; AValue: LongBool); cdecl;
begin
  AObj.DropTarget := AValue;
end;

function ListItem_GetFocused(AObj: TListItem): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

procedure ListItem_SetFocused(AObj: TListItem; AValue: LongBool); cdecl;
begin
  AObj.Focused := AValue;
end;

//function ListItem_GetGroupID(AObj: TListItem): Integer; cdecl;
//begin
//  Result :=  AObj.GroupID;
//end;
//
//procedure ListItem_SetGroupID(AObj: TListItem; AValue: Integer); cdecl;
//begin
//  AObj.GroupID := AValue;
//end;
//
//function ListItem_GetHandle(AObj: TListItem): HWND; cdecl;
//begin
//  Result :=  AObj.Handle;
//end;
//
//function ListItem_GetImageIndex(AObj: TListItem): TImageIndex; cdecl;
//begin
//  Result :=  AObj.ImageIndex;
//end;
//
//procedure ListItem_SetImageIndex(AObj: TListItem; AValue: TImageIndex); cdecl;
//begin
//  AObj.ImageIndex := AValue;
//end;
//
//function ListItem_GetIndent(AObj: TListItem): Integer; cdecl;
//begin
//  Result :=  AObj.Indent;
//end;
//
//procedure ListItem_SetIndent(AObj: TListItem; AValue: Integer); cdecl;
//begin
//  AObj.Indent := AValue;
//end;

function ListItem_GetIndex(AObj: TListItem): Integer; cdecl;
begin
  Result :=  AObj.Index;
end;

function ListItem_GetLeft(AObj: TListItem): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ListItem_SetLeft(AObj: TListItem; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ListItem_GetOwner(AObj: TListItem): TListItems; cdecl;
begin
  Result :=  AObj.Owner;
end;

//function ListItem_GetOverlayIndex(AObj: TListItem): TImageIndex; cdecl;
//begin
//  Result :=  AObj.OverlayIndex;
//end;
//
//procedure ListItem_SetOverlayIndex(AObj: TListItem; AValue: TImageIndex); cdecl;
//begin
//  AObj.OverlayIndex := AValue;
//end;

procedure ListItem_GetPosition(AObj: TListItem; var Result: TPoint); cdecl;
begin
  Result :=  AObj.Position;
end;

procedure ListItem_SetPosition(AObj: TListItem; var AValue: TPoint); cdecl;
begin
  AObj.Position := AValue;
end;

function ListItem_GetSelected(AObj: TListItem): LongBool; cdecl;
begin
  Result :=  AObj.Selected;
end;

procedure ListItem_SetSelected(AObj: TListItem; AValue: LongBool); cdecl;
begin
  AObj.Selected := AValue;
end;

//function ListItem_GetStateIndex(AObj: TListItem): TImageIndex; cdecl;
//begin
//  Result :=  AObj.StateIndex;
//end;
//
//procedure ListItem_SetStateIndex(AObj: TListItem; AValue: TImageIndex); cdecl;
//begin
//  AObj.StateIndex := AValue;
//end;

function ListItem_GetSubItems(AObj: TListItem): TStrings; cdecl;
begin
  Result :=  AObj.SubItems;
end;

procedure ListItem_SetSubItems(AObj: TListItem; AValue: TStrings); cdecl;
begin
  AObj.SubItems := AValue;
end;

function ListItem_GetTop(AObj: TListItem): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ListItem_SetTop(AObj: TListItem; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ListItem_GetSubItemImages(AObj: TListItem; Index: Integer): Integer; cdecl;
begin
  Result :=  AObj.SubItemImages[Index];
end;

procedure ListItem_SetSubItemImages(AObj: TListItem; Index: Integer; AValue: Integer); cdecl;
begin
  AObj.SubItemImages[Index] := AValue;
end;


exports
  ListItem_Create {$IFNDEF MSWINDOWS}name '_ListItem_Create'{$ENDIF},
  ListItem_Free {$IFNDEF MSWINDOWS}name '_ListItem_Free'{$ENDIF},
  ListItem_Assign {$IFNDEF MSWINDOWS}name '_ListItem_Assign'{$ENDIF},
  //ListItem_CancelEdit {$IFNDEF MSWINDOWS}name '_ListItem_CancelEdit'{$ENDIF},
  ListItem_Delete {$IFNDEF MSWINDOWS}name '_ListItem_Delete'{$ENDIF},
  ListItem_EditCaption {$IFNDEF MSWINDOWS}name '_ListItem_EditCaption'{$ENDIF},
  ListItem_MakeVisible {$IFNDEF MSWINDOWS}name '_ListItem_MakeVisible'{$ENDIF},
  //ListItem_Update {$IFNDEF MSWINDOWS}name '_ListItem_Update'{$ENDIF},
  //ListItem_WorkArea {$IFNDEF MSWINDOWS}name '_ListItem_WorkArea'{$ENDIF},
  ListItem_GetNamePath {$IFNDEF MSWINDOWS}name '_ListItem_GetNamePath'{$ENDIF},
  ListItem_ClassName {$IFNDEF MSWINDOWS}name '_ListItem_ClassName'{$ENDIF},
  ListItem_Equals {$IFNDEF MSWINDOWS}name '_ListItem_Equals'{$ENDIF},
  ListItem_GetHashCode {$IFNDEF MSWINDOWS}name '_ListItem_GetHashCode'{$ENDIF},
  ListItem_ToString {$IFNDEF MSWINDOWS}name '_ListItem_ToString'{$ENDIF},
  ListItem_GetCaption {$IFNDEF MSWINDOWS}name '_ListItem_GetCaption'{$ENDIF},
  ListItem_SetCaption {$IFNDEF MSWINDOWS}name '_ListItem_SetCaption'{$ENDIF},
  ListItem_GetChecked {$IFNDEF MSWINDOWS}name '_ListItem_GetChecked'{$ENDIF},
  ListItem_SetChecked {$IFNDEF MSWINDOWS}name '_ListItem_SetChecked'{$ENDIF},
  ListItem_GetCut {$IFNDEF MSWINDOWS}name '_ListItem_GetCut'{$ENDIF},
  ListItem_SetCut {$IFNDEF MSWINDOWS}name '_ListItem_SetCut'{$ENDIF},
  ListItem_GetData {$IFNDEF MSWINDOWS}name '_ListItem_GetData'{$ENDIF},
  ListItem_SetData {$IFNDEF MSWINDOWS}name '_ListItem_SetData'{$ENDIF},
  //ListItem_GetDeleting {$IFNDEF MSWINDOWS}name '_ListItem_GetDeleting'{$ENDIF},
  ListItem_GetDropTarget {$IFNDEF MSWINDOWS}name '_ListItem_GetDropTarget'{$ENDIF},
  ListItem_SetDropTarget {$IFNDEF MSWINDOWS}name '_ListItem_SetDropTarget'{$ENDIF},
  ListItem_GetFocused {$IFNDEF MSWINDOWS}name '_ListItem_GetFocused'{$ENDIF},
  ListItem_SetFocused {$IFNDEF MSWINDOWS}name '_ListItem_SetFocused'{$ENDIF},
  //ListItem_GetGroupID {$IFNDEF MSWINDOWS}name '_ListItem_GetGroupID'{$ENDIF},
  //ListItem_SetGroupID {$IFNDEF MSWINDOWS}name '_ListItem_SetGroupID'{$ENDIF},
  //ListItem_GetHandle {$IFNDEF MSWINDOWS}name '_ListItem_GetHandle'{$ENDIF},
  //ListItem_GetImageIndex {$IFNDEF MSWINDOWS}name '_ListItem_GetImageIndex'{$ENDIF},
  //ListItem_SetImageIndex {$IFNDEF MSWINDOWS}name '_ListItem_SetImageIndex'{$ENDIF},
  //ListItem_GetIndent {$IFNDEF MSWINDOWS}name '_ListItem_GetIndent'{$ENDIF},
  //ListItem_SetIndent {$IFNDEF MSWINDOWS}name '_ListItem_SetIndent'{$ENDIF},
  ListItem_GetIndex {$IFNDEF MSWINDOWS}name '_ListItem_GetIndex'{$ENDIF},
  ListItem_GetLeft {$IFNDEF MSWINDOWS}name '_ListItem_GetLeft'{$ENDIF},
  ListItem_SetLeft {$IFNDEF MSWINDOWS}name '_ListItem_SetLeft'{$ENDIF},
  ListItem_GetOwner {$IFNDEF MSWINDOWS}name '_ListItem_GetOwner'{$ENDIF},
  //ListItem_GetOverlayIndex {$IFNDEF MSWINDOWS}name '_ListItem_GetOverlayIndex'{$ENDIF},
  //ListItem_SetOverlayIndex {$IFNDEF MSWINDOWS}name '_ListItem_SetOverlayIndex'{$ENDIF},
  ListItem_GetPosition {$IFNDEF MSWINDOWS}name '_ListItem_GetPosition'{$ENDIF},
  ListItem_SetPosition {$IFNDEF MSWINDOWS}name '_ListItem_SetPosition'{$ENDIF},
  ListItem_GetSelected {$IFNDEF MSWINDOWS}name '_ListItem_GetSelected'{$ENDIF},
  ListItem_SetSelected {$IFNDEF MSWINDOWS}name '_ListItem_SetSelected'{$ENDIF},
  //ListItem_GetStateIndex {$IFNDEF MSWINDOWS}name '_ListItem_GetStateIndex'{$ENDIF},
  //ListItem_SetStateIndex {$IFNDEF MSWINDOWS}name '_ListItem_SetStateIndex'{$ENDIF},
  ListItem_GetSubItems {$IFNDEF MSWINDOWS}name '_ListItem_GetSubItems'{$ENDIF},
  ListItem_SetSubItems {$IFNDEF MSWINDOWS}name '_ListItem_SetSubItems'{$ENDIF},
  ListItem_GetTop {$IFNDEF MSWINDOWS}name '_ListItem_GetTop'{$ENDIF},
  ListItem_SetTop {$IFNDEF MSWINDOWS}name '_ListItem_SetTop'{$ENDIF},
  ListItem_GetSubItemImages {$IFNDEF MSWINDOWS}name '_ListItem_GetSubItemImages'{$ENDIF},
  ListItem_SetSubItemImages {$IFNDEF MSWINDOWS}name '_ListItem_SetSubItemImages'{$ENDIF};

