
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ListView_Create(AOwner: TComponent): TListView; cdecl;
begin
  Result :=  TListView.Create(AOwner);
end;

procedure ListView_Free(AObj: TListView); cdecl;
begin
  AObj.Free;
end;

procedure ListView_AddItem(AObj: TListView; Item: PWideChar; AObject: TObject); cdecl;
begin
  AObj.AddItem(Item, AObject);
end;

function ListView_AlphaSort(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.AlphaSort;
end;

procedure ListView_Clear(AObj: TListView); cdecl;
begin
  AObj.Clear;
end;

procedure ListView_ClearSelection(AObj: TListView); cdecl;
begin
  AObj.ClearSelection;
end;

procedure ListView_DeleteSelected(AObj: TListView); cdecl;
begin
  AObj.Selected.Delete;
  //AObj.DeleteSelected;
end;

//function ListView_GetSearchString(AObj: TListView): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.GetSearchString);
//end;

function ListView_IsEditing(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.IsEditing;
end;

procedure ListView_SelectAll(AObj: TListView); cdecl;
begin
  AObj.SelectAll;
end;

//procedure ListView_Scroll(AObj: TListView; DX: Integer; DY: Integer); cdecl;
//begin
//  AObj.Scroll(DX, DY);
//end;

function ListView_CanFocus(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure ListView_FlipChildren(AObj: TListView; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ListView_Focused(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function ListView_HandleAllocated(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ListView_Invalidate(AObj: TListView); cdecl;
begin
  AObj.Invalidate;
end;

procedure ListView_Realign(AObj: TListView); cdecl;
begin
  AObj.Realign;
end;

procedure ListView_Repaint(AObj: TListView); cdecl;
begin
  AObj.Repaint;
end;

procedure ListView_ScaleBy(AObj: TListView; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ListView_SetBounds(AObj: TListView; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ListView_SetFocus(AObj: TListView); cdecl;
begin
  AObj.SetFocus;
end;

procedure ListView_Update(AObj: TListView); cdecl;
begin
  AObj.Update;
end;

procedure ListView_BringToFront(AObj: TListView); cdecl;
begin
  AObj.BringToFront;
end;

function ListView_HasParent(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ListView_Hide(AObj: TListView); cdecl;
begin
  AObj.Hide;
end;

function ListView_Perform(AObj: TListView; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ListView_Refresh(AObj: TListView); cdecl;
begin
  AObj.Refresh;
end;

procedure ListView_SendToBack(AObj: TListView); cdecl;
begin
  AObj.SendToBack;
end;

procedure ListView_Show(AObj: TListView); cdecl;
begin
  AObj.Show;
end;

function ListView_GetTextBuf(AObj: TListView; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function ListView_FindComponent(AObj: TListView; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ListView_GetNamePath(AObj: TListView): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure ListView_Assign(AObj: TListView; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ListView_ClassName(AObj: TListView): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ListView_Equals(AObj: TListView; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListView_GetHashCode(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListView_ToString(AObj: TListView): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ListView_GetAction(AObj: TListView): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure ListView_SetAction(AObj: TListView; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function ListView_GetAlign(AObj: TListView): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure ListView_SetAlign(AObj: TListView; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function ListView_GetAllocBy(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.AllocBy;
end;

procedure ListView_SetAllocBy(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.AllocBy := AValue;
end;

function ListView_GetAnchors(AObj: TListView): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ListView_SetAnchors(AObj: TListView; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

//function ListView_GetBevelEdges(AObj: TListView): TBevelEdges; cdecl;
//begin
//  Result :=  AObj.BevelEdges;
//end;
//
//procedure ListView_SetBevelEdges(AObj: TListView; AValue: TBevelEdges); cdecl;
//begin
//  AObj.BevelEdges := AValue;
//end;
//
//function ListView_GetBevelInner(AObj: TListView): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelInner;
//end;
//
//procedure ListView_SetBevelInner(AObj: TListView; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelInner := AValue;
//end;
//
//function ListView_GetBevelOuter(AObj: TListView): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelOuter;
//end;
//
//procedure ListView_SetBevelOuter(AObj: TListView; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelOuter := AValue;
//end;
//
//function ListView_GetBevelKind(AObj: TListView): TBevelKind; cdecl;
//begin
//  Result :=  AObj.BevelKind;
//end;
//
//procedure ListView_SetBevelKind(AObj: TListView; AValue: TBevelKind); cdecl;
//begin
//  AObj.BevelKind := AValue;
//end;

function ListView_GetBiDiMode(AObj: TListView): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ListView_SetBiDiMode(AObj: TListView; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ListView_GetBorderStyle(AObj: TListView): TBorderStyle; cdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure ListView_SetBorderStyle(AObj: TListView; AValue: TBorderStyle); cdecl;
begin
  AObj.BorderStyle := AValue;
end;

function ListView_GetBorderWidth(AObj: TListView): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure ListView_SetBorderWidth(AObj: TListView; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function ListView_GetCheckboxes(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.Checkboxes;
end;

procedure ListView_SetCheckboxes(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.Checkboxes := AValue;
end;

function ListView_GetColor(AObj: TListView): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure ListView_SetColor(AObj: TListView; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function ListView_GetColumns(AObj: TListView): TListColumns; cdecl;
begin
  Result :=  AObj.Columns;
end;

procedure ListView_SetColumns(AObj: TListView; AValue: TListColumns); cdecl;
begin
  AObj.Columns := AValue;
end;

function ListView_GetColumnClick(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.ColumnClick;
end;

procedure ListView_SetColumnClick(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.ColumnClick := AValue;
end;

function ListView_GetDoubleBuffered(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ListView_SetDoubleBuffered(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ListView_GetEnabled(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ListView_SetEnabled(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function ListView_GetFont(AObj: TListView): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure ListView_SetFont(AObj: TListView; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function ListView_GetFlatScrollBars(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.FlatScrollBars;
end;

procedure ListView_SetFlatScrollBars(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.FlatScrollBars := AValue;
end;

function ListView_GetFullDrag(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.FullDrag;
end;

procedure ListView_SetFullDrag(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.FullDrag := AValue;
end;

function ListView_GetGridLines(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.GridLines;
end;

procedure ListView_SetGridLines(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.GridLines := AValue;
end;

//function ListView_GetGroups(AObj: TListView): TListGroups; cdecl;
//begin
//  Result :=  AObj.Groups;
//end;
//
//procedure ListView_SetGroups(AObj: TListView; AValue: TListGroups); cdecl;
//begin
//  AObj.Groups := AValue;
//end;

function ListView_GetHideSelection(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.HideSelection;
end;

procedure ListView_SetHideSelection(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.HideSelection := AValue;
end;

function ListView_GetHotTrack(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.HotTrack;
end;

procedure ListView_SetHotTrack(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.HotTrack := AValue;
end;

//function ListView_GetHoverTime(AObj: TListView): Integer; cdecl;
//begin
//  Result :=  AObj.HoverTime;
//end;
//
//procedure ListView_SetHoverTime(AObj: TListView; AValue: Integer); cdecl;
//begin
//  AObj.HoverTime := AValue;
//end;

function ListView_GetIconOptions(AObj: TListView): TIconOptions; cdecl;
begin
  Result :=  AObj.IconOptions;
end;

procedure ListView_SetIconOptions(AObj: TListView; AValue: TIconOptions); cdecl;
begin
  AObj.IconOptions := AValue;
end;

function ListView_GetItems(AObj: TListView): TListItems; cdecl;
begin
  Result :=  AObj.Items;
end;

procedure ListView_SetItems(AObj: TListView; AValue: TListItems); cdecl;
begin
  AObj.Items := AValue;
end;

//function ListView_GetLargeImages(AObj: TListView): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.LargeImages;
//end;
//
//procedure ListView_SetLargeImages(AObj: TListView; AValue: TCustomImageList); cdecl;
//begin
//  AObj.LargeImages := AValue;
//end;

function ListView_GetMultiSelect(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.MultiSelect;
end;

procedure ListView_SetMultiSelect(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.MultiSelect := AValue;
end;

//function ListView_GetStyleElements(AObj: TListView): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure ListView_SetStyleElements(AObj: TListView; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;
//
//function ListView_GetGroupHeaderImages(AObj: TListView): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.GroupHeaderImages;
//end;
//
//procedure ListView_SetGroupHeaderImages(AObj: TListView; AValue: TCustomImageList); cdecl;
//begin
//  AObj.GroupHeaderImages := AValue;
//end;
//
//function ListView_GetGroupView(AObj: TListView): LongBool; cdecl;
//begin
//  Result :=  AObj.GroupView;
//end;
//
//procedure ListView_SetGroupView(AObj: TListView; AValue: LongBool); cdecl;
//begin
//  AObj.GroupView := AValue;
//end;

function ListView_GetReadOnly(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.ReadOnly;
end;

procedure ListView_SetReadOnly(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.ReadOnly := AValue;
end;

function ListView_GetRowSelect(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.RowSelect;
end;

procedure ListView_SetRowSelect(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.RowSelect := AValue;
end;

function ListView_GetParentColor(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ListView_SetParentColor(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function ListView_GetParentDoubleBuffered(AObj: TListView): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure ListView_SetParentDoubleBuffered(AObj: TListView; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function ListView_GetParentFont(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ListView_SetParentFont(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function ListView_GetParentShowHint(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ListView_SetParentShowHint(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ListView_GetPopupMenu(AObj: TListView): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ListView_SetPopupMenu(AObj: TListView; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ListView_GetShowColumnHeaders(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.ShowColumnHeaders;
end;

procedure ListView_SetShowColumnHeaders(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.ShowColumnHeaders := AValue;
end;

//function ListView_GetShowWorkAreas(AObj: TListView): LongBool; cdecl;
//begin
//  Result :=  AObj.ShowWorkAreas;
//end;
//
//procedure ListView_SetShowWorkAreas(AObj: TListView; AValue: LongBool); cdecl;
//begin
//  AObj.ShowWorkAreas := AValue;
//end;

function ListView_GetShowHint(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ListView_SetShowHint(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

//function ListView_GetSmallImages(AObj: TListView): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.SmallImages;
//end;
//
//procedure ListView_SetSmallImages(AObj: TListView; AValue: TCustomImageList); cdecl;
//begin
//  AObj.SmallImages := AValue;
//end;

function ListView_GetSortType(AObj: TListView): TSortType; cdecl;
begin
  Result :=  AObj.SortType;
end;

procedure ListView_SetSortType(AObj: TListView; AValue: TSortType); cdecl;
begin
  AObj.SortType := AValue;
end;

//function ListView_GetStateImages(AObj: TListView): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.StateImages;
//end;
//
//procedure ListView_SetStateImages(AObj: TListView; AValue: TCustomImageList); cdecl;
//begin
//  AObj.StateImages := AValue;
//end;

function ListView_GetTabOrder(AObj: TListView): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ListView_SetTabOrder(AObj: TListView; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function ListView_GetTabStop(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ListView_SetTabStop(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function ListView_GetViewStyle(AObj: TListView): TViewStyle; cdecl;
begin
  Result :=  AObj.ViewStyle;
end;

procedure ListView_SetViewStyle(AObj: TListView; AValue: TViewStyle); cdecl;
begin
  AObj.ViewStyle := AValue;
end;

function ListView_GetVisible(AObj: TListView): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ListView_SetVisible(AObj: TListView; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

procedure ListView_SetOnChange(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, geListViewChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.ListViewOnChange;
  TEventClass.Add(AObj, geListViewChange, AEventId);
end;

procedure ListView_SetOnClick(AObj: TListView; AEventId: NativeUInt); stdcall;
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

procedure ListView_SetOnDblClick(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDblClick := nil;
    TEventClass.Remove(AObj, geDblClick);
    Exit;
  end;
  AObj.OnDblClick := TEventClass.OnDblClick;
  TEventClass.Add(AObj, geDblClick, AEventId);
end;

procedure ListView_SetOnEnter(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    TEventClass.Remove(AObj, geEnter);
    Exit;
  end;
  AObj.OnEnter := TEventClass.OnEnter;
  TEventClass.Add(AObj, geEnter, AEventId);
end;

procedure ListView_SetOnExit(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    TEventClass.Remove(AObj, geExit);
    Exit;
  end;
  AObj.OnExit := TEventClass.OnExit;
  TEventClass.Add(AObj, geExit, AEventId);
end;

procedure ListView_SetOnKeyDown(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    TEventClass.Remove(AObj, geKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := TEventClass.OnKeyDown;
  TEventClass.Add(AObj, geKeyDown, AEventId);
end;

procedure ListView_SetOnKeyPress(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    TEventClass.Remove(AObj, geKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := TEventClass.OnKeyPress;
  TEventClass.Add(AObj, geKeyPress, AEventId);
end;

procedure ListView_SetOnKeyUp(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    TEventClass.Remove(AObj, geKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := TEventClass.OnKeyUp;
  TEventClass.Add(AObj, geKeyUp, AEventId);
end;

procedure ListView_SetOnMouseDown(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseDown := nil;
    TEventClass.Remove(AObj, geMouseDown);
    Exit;
  end;
  AObj.OnMouseDown := TEventClass.OnMouseDown;
  TEventClass.Add(AObj, geMouseDown, AEventId);
end;

procedure ListView_SetOnMouseEnter(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseEnter := nil;
    TEventClass.Remove(AObj, geMouseEnter);
    Exit;
  end;
  AObj.OnMouseEnter := TEventClass.OnMouseEnter;
  TEventClass.Add(AObj, geMouseEnter, AEventId);
end;

procedure ListView_SetOnMouseLeave(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseLeave := nil;
    TEventClass.Remove(AObj, geMouseLeave);
    Exit;
  end;
  AObj.OnMouseLeave := TEventClass.OnMouseLeave;
  TEventClass.Add(AObj, geMouseLeave, AEventId);
end;

procedure ListView_SetOnMouseMove(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    TEventClass.Remove(AObj, geMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := TEventClass.OnMouseMove;
  TEventClass.Add(AObj, geMouseMove, AEventId);
end;

procedure ListView_SetOnMouseUp(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseUp := nil;
    TEventClass.Remove(AObj, geMouseUp);
    Exit;
  end;
  AObj.OnMouseUp := TEventClass.OnMouseUp;
  TEventClass.Add(AObj, geMouseUp, AEventId);
end;

procedure ListView_SetOnResize(AObj: TListView; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnResize := nil;
    TEventClass.Remove(AObj, geResize);
    Exit;
  end;
  AObj.OnResize := TEventClass.OnResize;
  TEventClass.Add(AObj, geResize, AEventId);
end;

function ListView_GetCanvas(AObj: TListView): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function ListView_GetDropTarget(AObj: TListView): TListItem; cdecl;
begin
  Result :=  AObj.DropTarget;
end;

procedure ListView_SetDropTarget(AObj: TListView; AValue: TListItem); cdecl;
begin
  AObj.DropTarget := AValue;
end;

function ListView_GetItemFocused(AObj: TListView): TListItem; cdecl;
begin
  Result :=  AObj.ItemFocused;
end;

procedure ListView_SetItemFocused(AObj: TListView; AValue: TListItem); cdecl;
begin
  AObj.ItemFocused := AValue;
end;

function ListView_GetSelCount(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.SelCount;
end;

function ListView_GetSelected(AObj: TListView): TListItem; cdecl;
begin
  Result :=  AObj.Selected;
end;

procedure ListView_SetSelected(AObj: TListView; AValue: TListItem); cdecl;
begin
  AObj.Selected := AValue;
end;

function ListView_GetTopItem(AObj: TListView): TListItem; cdecl;
begin
  Result :=  AObj.TopItem;
end;

function ListView_GetVisibleRowCount(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.VisibleRowCount;
end;

function ListView_GetItemIndex(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.ItemIndex;
end;

procedure ListView_SetItemIndex(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.ItemIndex := AValue;
end;

function ListView_GetBrush(AObj: TListView): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function ListView_GetControlCount(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ListView_GetHandle(AObj: TListView): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function ListView_GetParentWindow(AObj: TListView): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ListView_SetParentWindow(AObj: TListView; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

procedure ListView_GetBoundsRect(AObj: TListView; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ListView_SetBoundsRect(AObj: TListView; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ListView_GetClientHeight(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ListView_SetClientHeight(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ListView_GetClientRect(AObj: TListView; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ListView_GetClientWidth(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ListView_SetClientWidth(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function ListView_GetExplicitLeft(AObj: TListView): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function ListView_GetExplicitTop(AObj: TListView): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function ListView_GetExplicitWidth(AObj: TListView): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function ListView_GetExplicitHeight(AObj: TListView): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function ListView_GetParent(AObj: TListView): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ListView_SetParent(AObj: TListView; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function ListView_GetAlignWithMargins(AObj: TListView): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure ListView_SetAlignWithMargins(AObj: TListView; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function ListView_GetLeft(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ListView_SetLeft(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ListView_GetTop(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ListView_SetTop(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ListView_GetWidth(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ListView_SetWidth(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function ListView_GetHeight(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ListView_SetHeight(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function ListView_GetCursor(AObj: TListView): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ListView_SetCursor(AObj: TListView; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function ListView_GetHint(AObj: TListView): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure ListView_SetHint(AObj: TListView; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function ListView_GetMargins(AObj: TListView): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure ListView_SetMargins(AObj: TListView; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function ListView_GetComponentCount(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ListView_GetComponentIndex(AObj: TListView): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ListView_SetComponentIndex(AObj: TListView; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ListView_GetOwner(AObj: TListView): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ListView_GetName(AObj: TListView): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ListView_SetName(AObj: TListView; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ListView_GetTag(AObj: TListView): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ListView_SetTag(AObj: TListView; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ListView_GetColumn(AObj: TListView; Index: Integer): TListColumn; cdecl;
begin
  Result :=  AObj.Column[Index];
end;

function ListView_GetControls(AObj: TListView; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ListView_GetComponents(AObj: TListView; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ListView_Create {$IFNDEF MSWINDOWS}name '_ListView_Create'{$ENDIF},
  ListView_Free {$IFNDEF MSWINDOWS}name '_ListView_Free'{$ENDIF},
  ListView_AddItem {$IFNDEF MSWINDOWS}name '_ListView_AddItem'{$ENDIF},
  ListView_AlphaSort {$IFNDEF MSWINDOWS}name '_ListView_AlphaSort'{$ENDIF},
  ListView_Clear {$IFNDEF MSWINDOWS}name '_ListView_Clear'{$ENDIF},
  ListView_ClearSelection {$IFNDEF MSWINDOWS}name '_ListView_ClearSelection'{$ENDIF},
  ListView_DeleteSelected {$IFNDEF MSWINDOWS}name '_ListView_DeleteSelected'{$ENDIF},
  //ListView_GetSearchString {$IFNDEF MSWINDOWS}name '_ListView_GetSearchString'{$ENDIF},
  ListView_IsEditing {$IFNDEF MSWINDOWS}name '_ListView_IsEditing'{$ENDIF},
  ListView_SelectAll {$IFNDEF MSWINDOWS}name '_ListView_SelectAll'{$ENDIF},
  ListView_Scroll {$IFNDEF MSWINDOWS}name '_ListView_Scroll'{$ENDIF},
  ListView_CanFocus {$IFNDEF MSWINDOWS}name '_ListView_CanFocus'{$ENDIF},
  ListView_FlipChildren {$IFNDEF MSWINDOWS}name '_ListView_FlipChildren'{$ENDIF},
  ListView_Focused {$IFNDEF MSWINDOWS}name '_ListView_Focused'{$ENDIF},
  ListView_HandleAllocated {$IFNDEF MSWINDOWS}name '_ListView_HandleAllocated'{$ENDIF},
  ListView_Invalidate {$IFNDEF MSWINDOWS}name '_ListView_Invalidate'{$ENDIF},
  ListView_Realign {$IFNDEF MSWINDOWS}name '_ListView_Realign'{$ENDIF},
  ListView_Repaint {$IFNDEF MSWINDOWS}name '_ListView_Repaint'{$ENDIF},
  ListView_ScaleBy {$IFNDEF MSWINDOWS}name '_ListView_ScaleBy'{$ENDIF},
  ListView_SetBounds {$IFNDEF MSWINDOWS}name '_ListView_SetBounds'{$ENDIF},
  ListView_SetFocus {$IFNDEF MSWINDOWS}name '_ListView_SetFocus'{$ENDIF},
  ListView_Update {$IFNDEF MSWINDOWS}name '_ListView_Update'{$ENDIF},
  ListView_BringToFront {$IFNDEF MSWINDOWS}name '_ListView_BringToFront'{$ENDIF},
  ListView_HasParent {$IFNDEF MSWINDOWS}name '_ListView_HasParent'{$ENDIF},
  ListView_Hide {$IFNDEF MSWINDOWS}name '_ListView_Hide'{$ENDIF},
  ListView_Perform {$IFNDEF MSWINDOWS}name '_ListView_Perform'{$ENDIF},
  ListView_Refresh {$IFNDEF MSWINDOWS}name '_ListView_Refresh'{$ENDIF},
  ListView_SendToBack {$IFNDEF MSWINDOWS}name '_ListView_SendToBack'{$ENDIF},
  ListView_Show {$IFNDEF MSWINDOWS}name '_ListView_Show'{$ENDIF},
  ListView_GetTextBuf {$IFNDEF MSWINDOWS}name '_ListView_GetTextBuf'{$ENDIF},
  ListView_FindComponent {$IFNDEF MSWINDOWS}name '_ListView_FindComponent'{$ENDIF},
  ListView_GetNamePath {$IFNDEF MSWINDOWS}name '_ListView_GetNamePath'{$ENDIF},
  ListView_Assign {$IFNDEF MSWINDOWS}name '_ListView_Assign'{$ENDIF},
  ListView_ClassName {$IFNDEF MSWINDOWS}name '_ListView_ClassName'{$ENDIF},
  ListView_Equals {$IFNDEF MSWINDOWS}name '_ListView_Equals'{$ENDIF},
  ListView_GetHashCode {$IFNDEF MSWINDOWS}name '_ListView_GetHashCode'{$ENDIF},
  ListView_ToString {$IFNDEF MSWINDOWS}name '_ListView_ToString'{$ENDIF},
  ListView_GetAction {$IFNDEF MSWINDOWS}name '_ListView_GetAction'{$ENDIF},
  ListView_SetAction {$IFNDEF MSWINDOWS}name '_ListView_SetAction'{$ENDIF},
  ListView_GetAlign {$IFNDEF MSWINDOWS}name '_ListView_GetAlign'{$ENDIF},
  ListView_SetAlign {$IFNDEF MSWINDOWS}name '_ListView_SetAlign'{$ENDIF},
  ListView_GetAllocBy {$IFNDEF MSWINDOWS}name '_ListView_GetAllocBy'{$ENDIF},
  ListView_SetAllocBy {$IFNDEF MSWINDOWS}name '_ListView_SetAllocBy'{$ENDIF},
  ListView_GetAnchors {$IFNDEF MSWINDOWS}name '_ListView_GetAnchors'{$ENDIF},
  ListView_SetAnchors {$IFNDEF MSWINDOWS}name '_ListView_SetAnchors'{$ENDIF},
  //ListView_GetBevelEdges {$IFNDEF MSWINDOWS}name '_ListView_GetBevelEdges'{$ENDIF},
  //ListView_SetBevelEdges {$IFNDEF MSWINDOWS}name '_ListView_SetBevelEdges'{$ENDIF},
  //ListView_GetBevelInner {$IFNDEF MSWINDOWS}name '_ListView_GetBevelInner'{$ENDIF},
  //ListView_SetBevelInner {$IFNDEF MSWINDOWS}name '_ListView_SetBevelInner'{$ENDIF},
  //ListView_GetBevelOuter {$IFNDEF MSWINDOWS}name '_ListView_GetBevelOuter'{$ENDIF},
  //ListView_SetBevelOuter {$IFNDEF MSWINDOWS}name '_ListView_SetBevelOuter'{$ENDIF},
  //ListView_GetBevelKind {$IFNDEF MSWINDOWS}name '_ListView_GetBevelKind'{$ENDIF},
  //ListView_SetBevelKind {$IFNDEF MSWINDOWS}name '_ListView_SetBevelKind'{$ENDIF},
  ListView_GetBiDiMode {$IFNDEF MSWINDOWS}name '_ListView_GetBiDiMode'{$ENDIF},
  ListView_SetBiDiMode {$IFNDEF MSWINDOWS}name '_ListView_SetBiDiMode'{$ENDIF},
  ListView_GetBorderStyle {$IFNDEF MSWINDOWS}name '_ListView_GetBorderStyle'{$ENDIF},
  ListView_SetBorderStyle {$IFNDEF MSWINDOWS}name '_ListView_SetBorderStyle'{$ENDIF},
  ListView_GetBorderWidth {$IFNDEF MSWINDOWS}name '_ListView_GetBorderWidth'{$ENDIF},
  ListView_SetBorderWidth {$IFNDEF MSWINDOWS}name '_ListView_SetBorderWidth'{$ENDIF},
  ListView_GetCheckboxes {$IFNDEF MSWINDOWS}name '_ListView_GetCheckboxes'{$ENDIF},
  ListView_SetCheckboxes {$IFNDEF MSWINDOWS}name '_ListView_SetCheckboxes'{$ENDIF},
  ListView_GetColor {$IFNDEF MSWINDOWS}name '_ListView_GetColor'{$ENDIF},
  ListView_SetColor {$IFNDEF MSWINDOWS}name '_ListView_SetColor'{$ENDIF},
  ListView_GetColumns {$IFNDEF MSWINDOWS}name '_ListView_GetColumns'{$ENDIF},
  ListView_SetColumns {$IFNDEF MSWINDOWS}name '_ListView_SetColumns'{$ENDIF},
  ListView_GetColumnClick {$IFNDEF MSWINDOWS}name '_ListView_GetColumnClick'{$ENDIF},
  ListView_SetColumnClick {$IFNDEF MSWINDOWS}name '_ListView_SetColumnClick'{$ENDIF},
  ListView_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ListView_GetDoubleBuffered'{$ENDIF},
  ListView_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ListView_SetDoubleBuffered'{$ENDIF},
  ListView_GetEnabled {$IFNDEF MSWINDOWS}name '_ListView_GetEnabled'{$ENDIF},
  ListView_SetEnabled {$IFNDEF MSWINDOWS}name '_ListView_SetEnabled'{$ENDIF},
  ListView_GetFont {$IFNDEF MSWINDOWS}name '_ListView_GetFont'{$ENDIF},
  ListView_SetFont {$IFNDEF MSWINDOWS}name '_ListView_SetFont'{$ENDIF},
  ListView_GetFlatScrollBars {$IFNDEF MSWINDOWS}name '_ListView_GetFlatScrollBars'{$ENDIF},
  ListView_SetFlatScrollBars {$IFNDEF MSWINDOWS}name '_ListView_SetFlatScrollBars'{$ENDIF},
  ListView_GetFullDrag {$IFNDEF MSWINDOWS}name '_ListView_GetFullDrag'{$ENDIF},
  ListView_SetFullDrag {$IFNDEF MSWINDOWS}name '_ListView_SetFullDrag'{$ENDIF},
  ListView_GetGridLines {$IFNDEF MSWINDOWS}name '_ListView_GetGridLines'{$ENDIF},
  ListView_SetGridLines {$IFNDEF MSWINDOWS}name '_ListView_SetGridLines'{$ENDIF},
  //ListView_GetGroups {$IFNDEF MSWINDOWS}name '_ListView_GetGroups'{$ENDIF},
  //ListView_SetGroups {$IFNDEF MSWINDOWS}name '_ListView_SetGroups'{$ENDIF},
  ListView_GetHideSelection {$IFNDEF MSWINDOWS}name '_ListView_GetHideSelection'{$ENDIF},
  ListView_SetHideSelection {$IFNDEF MSWINDOWS}name '_ListView_SetHideSelection'{$ENDIF},
  ListView_GetHotTrack {$IFNDEF MSWINDOWS}name '_ListView_GetHotTrack'{$ENDIF},
  ListView_SetHotTrack {$IFNDEF MSWINDOWS}name '_ListView_SetHotTrack'{$ENDIF},
  //ListView_GetHoverTime {$IFNDEF MSWINDOWS}name '_ListView_GetHoverTime'{$ENDIF},
  //ListView_SetHoverTime {$IFNDEF MSWINDOWS}name '_ListView_SetHoverTime'{$ENDIF},
  ListView_GetIconOptions {$IFNDEF MSWINDOWS}name '_ListView_GetIconOptions'{$ENDIF},
  ListView_SetIconOptions {$IFNDEF MSWINDOWS}name '_ListView_SetIconOptions'{$ENDIF},
  ListView_GetItems {$IFNDEF MSWINDOWS}name '_ListView_GetItems'{$ENDIF},
  ListView_SetItems {$IFNDEF MSWINDOWS}name '_ListView_SetItems'{$ENDIF},
  //ListView_GetLargeImages {$IFNDEF MSWINDOWS}name '_ListView_GetLargeImages'{$ENDIF},
  //ListView_SetLargeImages {$IFNDEF MSWINDOWS}name '_ListView_SetLargeImages'{$ENDIF},
  ListView_GetMultiSelect {$IFNDEF MSWINDOWS}name '_ListView_GetMultiSelect'{$ENDIF},
  ListView_SetMultiSelect {$IFNDEF MSWINDOWS}name '_ListView_SetMultiSelect'{$ENDIF},
  //ListView_GetStyleElements {$IFNDEF MSWINDOWS}name '_ListView_GetStyleElements'{$ENDIF},
  //ListView_SetStyleElements {$IFNDEF MSWINDOWS}name '_ListView_SetStyleElements'{$ENDIF},
  //ListView_GetGroupHeaderImages {$IFNDEF MSWINDOWS}name '_ListView_GetGroupHeaderImages'{$ENDIF},
  //ListView_SetGroupHeaderImages {$IFNDEF MSWINDOWS}name '_ListView_SetGroupHeaderImages'{$ENDIF},
  //ListView_GetGroupView {$IFNDEF MSWINDOWS}name '_ListView_GetGroupView'{$ENDIF},
  //ListView_SetGroupView {$IFNDEF MSWINDOWS}name '_ListView_SetGroupView'{$ENDIF},
  ListView_GetReadOnly {$IFNDEF MSWINDOWS}name '_ListView_GetReadOnly'{$ENDIF},
  ListView_SetReadOnly {$IFNDEF MSWINDOWS}name '_ListView_SetReadOnly'{$ENDIF},
  ListView_GetRowSelect {$IFNDEF MSWINDOWS}name '_ListView_GetRowSelect'{$ENDIF},
  ListView_SetRowSelect {$IFNDEF MSWINDOWS}name '_ListView_SetRowSelect'{$ENDIF},
  ListView_GetParentColor {$IFNDEF MSWINDOWS}name '_ListView_GetParentColor'{$ENDIF},
  ListView_SetParentColor {$IFNDEF MSWINDOWS}name '_ListView_SetParentColor'{$ENDIF},
  //ListView_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ListView_GetParentDoubleBuffered'{$ENDIF},
  //ListView_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ListView_SetParentDoubleBuffered'{$ENDIF},
  ListView_GetParentFont {$IFNDEF MSWINDOWS}name '_ListView_GetParentFont'{$ENDIF},
  ListView_SetParentFont {$IFNDEF MSWINDOWS}name '_ListView_SetParentFont'{$ENDIF},
  ListView_GetParentShowHint {$IFNDEF MSWINDOWS}name '_ListView_GetParentShowHint'{$ENDIF},
  ListView_SetParentShowHint {$IFNDEF MSWINDOWS}name '_ListView_SetParentShowHint'{$ENDIF},
  ListView_GetPopupMenu {$IFNDEF MSWINDOWS}name '_ListView_GetPopupMenu'{$ENDIF},
  ListView_SetPopupMenu {$IFNDEF MSWINDOWS}name '_ListView_SetPopupMenu'{$ENDIF},
  ListView_GetShowColumnHeaders {$IFNDEF MSWINDOWS}name '_ListView_GetShowColumnHeaders'{$ENDIF},
  ListView_SetShowColumnHeaders {$IFNDEF MSWINDOWS}name '_ListView_SetShowColumnHeaders'{$ENDIF},
  //ListView_GetShowWorkAreas {$IFNDEF MSWINDOWS}name '_ListView_GetShowWorkAreas'{$ENDIF},
  //ListView_SetShowWorkAreas {$IFNDEF MSWINDOWS}name '_ListView_SetShowWorkAreas'{$ENDIF},
  ListView_GetShowHint {$IFNDEF MSWINDOWS}name '_ListView_GetShowHint'{$ENDIF},
  ListView_SetShowHint {$IFNDEF MSWINDOWS}name '_ListView_SetShowHint'{$ENDIF},
  //ListView_GetSmallImages {$IFNDEF MSWINDOWS}name '_ListView_GetSmallImages'{$ENDIF},
  //ListView_SetSmallImages {$IFNDEF MSWINDOWS}name '_ListView_SetSmallImages'{$ENDIF},
  ListView_GetSortType {$IFNDEF MSWINDOWS}name '_ListView_GetSortType'{$ENDIF},
  ListView_SetSortType {$IFNDEF MSWINDOWS}name '_ListView_SetSortType'{$ENDIF},
  //ListView_GetStateImages {$IFNDEF MSWINDOWS}name '_ListView_GetStateImages'{$ENDIF},
  //ListView_SetStateImages {$IFNDEF MSWINDOWS}name '_ListView_SetStateImages'{$ENDIF},
  ListView_GetTabOrder {$IFNDEF MSWINDOWS}name '_ListView_GetTabOrder'{$ENDIF},
  ListView_SetTabOrder {$IFNDEF MSWINDOWS}name '_ListView_SetTabOrder'{$ENDIF},
  ListView_GetTabStop {$IFNDEF MSWINDOWS}name '_ListView_GetTabStop'{$ENDIF},
  ListView_SetTabStop {$IFNDEF MSWINDOWS}name '_ListView_SetTabStop'{$ENDIF},
  ListView_GetViewStyle {$IFNDEF MSWINDOWS}name '_ListView_GetViewStyle'{$ENDIF},
  ListView_SetViewStyle {$IFNDEF MSWINDOWS}name '_ListView_SetViewStyle'{$ENDIF},
  ListView_GetVisible {$IFNDEF MSWINDOWS}name '_ListView_GetVisible'{$ENDIF},
  ListView_SetVisible {$IFNDEF MSWINDOWS}name '_ListView_SetVisible'{$ENDIF},
  ListView_SetOnChange {$IFNDEF MSWINDOWS}name '_ListView_SetOnChange'{$ENDIF},
  ListView_SetOnClick {$IFNDEF MSWINDOWS}name '_ListView_SetOnClick'{$ENDIF},
  ListView_SetOnDblClick {$IFNDEF MSWINDOWS}name '_ListView_SetOnDblClick'{$ENDIF},
  ListView_SetOnEnter {$IFNDEF MSWINDOWS}name '_ListView_SetOnEnter'{$ENDIF},
  ListView_SetOnExit {$IFNDEF MSWINDOWS}name '_ListView_SetOnExit'{$ENDIF},
  ListView_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_ListView_SetOnKeyDown'{$ENDIF},
  ListView_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_ListView_SetOnKeyPress'{$ENDIF},
  ListView_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_ListView_SetOnKeyUp'{$ENDIF},
  ListView_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_ListView_SetOnMouseDown'{$ENDIF},
  ListView_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_ListView_SetOnMouseEnter'{$ENDIF},
  ListView_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_ListView_SetOnMouseLeave'{$ENDIF},
  ListView_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_ListView_SetOnMouseMove'{$ENDIF},
  ListView_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_ListView_SetOnMouseUp'{$ENDIF},
  ListView_SetOnResize {$IFNDEF MSWINDOWS}name '_ListView_SetOnResize'{$ENDIF},
  ListView_GetCanvas {$IFNDEF MSWINDOWS}name '_ListView_GetCanvas'{$ENDIF},
  ListView_GetDropTarget {$IFNDEF MSWINDOWS}name '_ListView_GetDropTarget'{$ENDIF},
  ListView_SetDropTarget {$IFNDEF MSWINDOWS}name '_ListView_SetDropTarget'{$ENDIF},
  ListView_GetItemFocused {$IFNDEF MSWINDOWS}name '_ListView_GetItemFocused'{$ENDIF},
  ListView_SetItemFocused {$IFNDEF MSWINDOWS}name '_ListView_SetItemFocused'{$ENDIF},
  ListView_GetSelCount {$IFNDEF MSWINDOWS}name '_ListView_GetSelCount'{$ENDIF},
  ListView_GetSelected {$IFNDEF MSWINDOWS}name '_ListView_GetSelected'{$ENDIF},
  ListView_SetSelected {$IFNDEF MSWINDOWS}name '_ListView_SetSelected'{$ENDIF},
  ListView_GetTopItem {$IFNDEF MSWINDOWS}name '_ListView_GetTopItem'{$ENDIF},
  ListView_GetVisibleRowCount {$IFNDEF MSWINDOWS}name '_ListView_GetVisibleRowCount'{$ENDIF},
  ListView_GetItemIndex {$IFNDEF MSWINDOWS}name '_ListView_GetItemIndex'{$ENDIF},
  ListView_SetItemIndex {$IFNDEF MSWINDOWS}name '_ListView_SetItemIndex'{$ENDIF},
  ListView_GetBrush {$IFNDEF MSWINDOWS}name '_ListView_GetBrush'{$ENDIF},
  ListView_GetControlCount {$IFNDEF MSWINDOWS}name '_ListView_GetControlCount'{$ENDIF},
  ListView_GetHandle {$IFNDEF MSWINDOWS}name '_ListView_GetHandle'{$ENDIF},
  ListView_GetParentWindow {$IFNDEF MSWINDOWS}name '_ListView_GetParentWindow'{$ENDIF},
  ListView_SetParentWindow {$IFNDEF MSWINDOWS}name '_ListView_SetParentWindow'{$ENDIF},
  ListView_GetBoundsRect {$IFNDEF MSWINDOWS}name '_ListView_GetBoundsRect'{$ENDIF},
  ListView_SetBoundsRect {$IFNDEF MSWINDOWS}name '_ListView_SetBoundsRect'{$ENDIF},
  ListView_GetClientHeight {$IFNDEF MSWINDOWS}name '_ListView_GetClientHeight'{$ENDIF},
  ListView_SetClientHeight {$IFNDEF MSWINDOWS}name '_ListView_SetClientHeight'{$ENDIF},
  ListView_GetClientRect {$IFNDEF MSWINDOWS}name '_ListView_GetClientRect'{$ENDIF},
  ListView_GetClientWidth {$IFNDEF MSWINDOWS}name '_ListView_GetClientWidth'{$ENDIF},
  ListView_SetClientWidth {$IFNDEF MSWINDOWS}name '_ListView_SetClientWidth'{$ENDIF},
  //ListView_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_ListView_GetExplicitLeft'{$ENDIF},
  //ListView_GetExplicitTop {$IFNDEF MSWINDOWS}name '_ListView_GetExplicitTop'{$ENDIF},
  //ListView_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_ListView_GetExplicitWidth'{$ENDIF},
  //ListView_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_ListView_GetExplicitHeight'{$ENDIF},
  ListView_GetParent {$IFNDEF MSWINDOWS}name '_ListView_GetParent'{$ENDIF},
  ListView_SetParent {$IFNDEF MSWINDOWS}name '_ListView_SetParent'{$ENDIF},
  //ListView_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ListView_GetAlignWithMargins'{$ENDIF},
  //ListView_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ListView_SetAlignWithMargins'{$ENDIF},
  ListView_GetLeft {$IFNDEF MSWINDOWS}name '_ListView_GetLeft'{$ENDIF},
  ListView_SetLeft {$IFNDEF MSWINDOWS}name '_ListView_SetLeft'{$ENDIF},
  ListView_GetTop {$IFNDEF MSWINDOWS}name '_ListView_GetTop'{$ENDIF},
  ListView_SetTop {$IFNDEF MSWINDOWS}name '_ListView_SetTop'{$ENDIF},
  ListView_GetWidth {$IFNDEF MSWINDOWS}name '_ListView_GetWidth'{$ENDIF},
  ListView_SetWidth {$IFNDEF MSWINDOWS}name '_ListView_SetWidth'{$ENDIF},
  ListView_GetHeight {$IFNDEF MSWINDOWS}name '_ListView_GetHeight'{$ENDIF},
  ListView_SetHeight {$IFNDEF MSWINDOWS}name '_ListView_SetHeight'{$ENDIF},
  ListView_GetCursor {$IFNDEF MSWINDOWS}name '_ListView_GetCursor'{$ENDIF},
  ListView_SetCursor {$IFNDEF MSWINDOWS}name '_ListView_SetCursor'{$ENDIF},
  ListView_GetHint {$IFNDEF MSWINDOWS}name '_ListView_GetHint'{$ENDIF},
  ListView_SetHint {$IFNDEF MSWINDOWS}name '_ListView_SetHint'{$ENDIF},
  //ListView_GetMargins {$IFNDEF MSWINDOWS}name '_ListView_GetMargins'{$ENDIF},
  //ListView_SetMargins {$IFNDEF MSWINDOWS}name '_ListView_SetMargins'{$ENDIF},
  ListView_GetComponentCount {$IFNDEF MSWINDOWS}name '_ListView_GetComponentCount'{$ENDIF},
  ListView_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ListView_GetComponentIndex'{$ENDIF},
  ListView_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ListView_SetComponentIndex'{$ENDIF},
  ListView_GetOwner {$IFNDEF MSWINDOWS}name '_ListView_GetOwner'{$ENDIF},
  ListView_GetName {$IFNDEF MSWINDOWS}name '_ListView_GetName'{$ENDIF},
  ListView_SetName {$IFNDEF MSWINDOWS}name '_ListView_SetName'{$ENDIF},
  ListView_GetTag {$IFNDEF MSWINDOWS}name '_ListView_GetTag'{$ENDIF},
  ListView_SetTag {$IFNDEF MSWINDOWS}name '_ListView_SetTag'{$ENDIF},
  ListView_GetColumn {$IFNDEF MSWINDOWS}name '_ListView_GetColumn'{$ENDIF},
  ListView_GetControls {$IFNDEF MSWINDOWS}name '_ListView_GetControls'{$ENDIF},
  ListView_GetComponents {$IFNDEF MSWINDOWS}name '_ListView_GetComponents'{$ENDIF};

