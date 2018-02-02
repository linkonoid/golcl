
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ListBox_Create(AOwner: TComponent): TListBox; cdecl;
begin
  Result :=  TListBox.Create(AOwner);
end;

procedure ListBox_Free(AObj: TListBox); cdecl;
begin
  AObj.Free;
end;

procedure ListBox_AddItem(AObj: TListBox; Item: PWideChar; AObject: TObject); cdecl;
begin
  AObj.AddItem(Item, AObject);
end;

procedure ListBox_Clear(AObj: TListBox); cdecl;
begin
  AObj.Clear;
end;

procedure ListBox_ClearSelection(AObj: TListBox); cdecl;
begin
  AObj.ClearSelection;
end;

procedure ListBox_DeleteSelected(AObj: TListBox); cdecl;
begin
  AObj.DeleteSelected;
end;

procedure ListBox_SelectAll(AObj: TListBox); cdecl;
begin
  AObj.SelectAll;
end;

function ListBox_CanFocus(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure ListBox_FlipChildren(AObj: TListBox; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ListBox_Focused(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function ListBox_HandleAllocated(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ListBox_Invalidate(AObj: TListBox); cdecl;
begin
  AObj.Invalidate;
end;

procedure ListBox_Realign(AObj: TListBox); cdecl;
begin
  AObj.Realign;
end;

procedure ListBox_Repaint(AObj: TListBox); cdecl;
begin
  AObj.Repaint;
end;

procedure ListBox_ScaleBy(AObj: TListBox; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ListBox_SetBounds(AObj: TListBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ListBox_SetFocus(AObj: TListBox); cdecl;
begin
  AObj.SetFocus;
end;

procedure ListBox_Update(AObj: TListBox); cdecl;
begin
  AObj.Update;
end;

procedure ListBox_BringToFront(AObj: TListBox); cdecl;
begin
  AObj.BringToFront;
end;

function ListBox_HasParent(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ListBox_Hide(AObj: TListBox); cdecl;
begin
  AObj.Hide;
end;

function ListBox_Perform(AObj: TListBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ListBox_Refresh(AObj: TListBox); cdecl;
begin
  AObj.Refresh;
end;

procedure ListBox_SendToBack(AObj: TListBox); cdecl;
begin
  AObj.SendToBack;
end;

procedure ListBox_Show(AObj: TListBox); cdecl;
begin
  AObj.Show;
end;

function ListBox_GetTextBuf(AObj: TListBox; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function ListBox_FindComponent(AObj: TListBox; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ListBox_GetNamePath(AObj: TListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure ListBox_Assign(AObj: TListBox; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ListBox_ClassName(AObj: TListBox): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ListBox_Equals(AObj: TListBox; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListBox_GetHashCode(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListBox_ToString(AObj: TListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ListBox_GetStyle(AObj: TListBox): TListBoxStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure ListBox_SetStyle(AObj: TListBox; AValue: TListBoxStyle); cdecl;
begin
  AObj.Style := AValue;
end;

//function ListBox_GetAutoComplete(AObj: TListBox): LongBool; cdecl;
//begin
//  Result :=  AObj.AutoComplete;
//end;
//
//procedure ListBox_SetAutoComplete(AObj: TListBox; AValue: LongBool); cdecl;
//begin
//  AObj.AutoComplete := AValue;
//end;
//
//function ListBox_GetAutoCompleteDelay(AObj: TListBox): Cardinal; cdecl;
//begin
//  Result :=  AObj.AutoCompleteDelay;
//end;
//
//procedure ListBox_SetAutoCompleteDelay(AObj: TListBox; AValue: Cardinal); cdecl;
//begin
//  AObj.AutoCompleteDelay := AValue;
//end;

function ListBox_GetAlign(AObj: TListBox): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure ListBox_SetAlign(AObj: TListBox; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function ListBox_GetAnchors(AObj: TListBox): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ListBox_SetAnchors(AObj: TListBox; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

//function ListBox_GetBevelEdges(AObj: TListBox): TBevelEdges; cdecl;
//begin
//  Result :=  AObj.BevelEdges;
//end;
//
//procedure ListBox_SetBevelEdges(AObj: TListBox; AValue: TBevelEdges); cdecl;
//begin
//  AObj.BevelEdges := AValue;
//end;
//
//function ListBox_GetBevelInner(AObj: TListBox): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelInner;
//end;
//
//procedure ListBox_SetBevelInner(AObj: TListBox; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelInner := AValue;
//end;
//
//function ListBox_GetBevelKind(AObj: TListBox): TBevelKind; cdecl;
//begin
//  Result :=  AObj.BevelKind;
//end;
//
//procedure ListBox_SetBevelKind(AObj: TListBox; AValue: TBevelKind); cdecl;
//begin
//  AObj.BevelKind := AValue;
//end;
//
//function ListBox_GetBevelOuter(AObj: TListBox): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelOuter;
//end;
//
//procedure ListBox_SetBevelOuter(AObj: TListBox; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelOuter := AValue;
//end;

function ListBox_GetBiDiMode(AObj: TListBox): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ListBox_SetBiDiMode(AObj: TListBox; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ListBox_GetBorderStyle(AObj: TListBox): TBorderStyle; cdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure ListBox_SetBorderStyle(AObj: TListBox; AValue: TBorderStyle); cdecl;
begin
  AObj.BorderStyle := AValue;
end;

function ListBox_GetColor(AObj: TListBox): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure ListBox_SetColor(AObj: TListBox; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function ListBox_GetColumns(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.Columns;
end;

procedure ListBox_SetColumns(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.Columns := AValue;
end;

function ListBox_GetDoubleBuffered(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ListBox_SetDoubleBuffered(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ListBox_GetEnabled(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ListBox_SetEnabled(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function ListBox_GetFont(AObj: TListBox): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure ListBox_SetFont(AObj: TListBox; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function ListBox_GetItemHeight(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.ItemHeight;
end;

procedure ListBox_SetItemHeight(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.ItemHeight := AValue;
end;

function ListBox_GetItems(AObj: TListBox): TStrings; cdecl;
begin
  Result :=  AObj.Items;
end;

procedure ListBox_SetItems(AObj: TListBox; AValue: TStrings); cdecl;
begin
  AObj.Items := AValue;
end;

function ListBox_GetMultiSelect(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.MultiSelect;
end;

procedure ListBox_SetMultiSelect(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.MultiSelect := AValue;
end;

function ListBox_GetParentColor(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ListBox_SetParentColor(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function ListBox_GetParentCtl3D(AObj: TListBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentCtl3D;
//end;
//
//procedure ListBox_SetParentCtl3D(AObj: TListBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentCtl3D := AValue;
//end;
//
//function ListBox_GetParentDoubleBuffered(AObj: TListBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure ListBox_SetParentDoubleBuffered(AObj: TListBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function ListBox_GetParentFont(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ListBox_SetParentFont(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function ListBox_GetParentShowHint(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ListBox_SetParentShowHint(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ListBox_GetPopupMenu(AObj: TListBox): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ListBox_SetPopupMenu(AObj: TListBox; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ListBox_GetShowHint(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ListBox_SetShowHint(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function ListBox_GetSorted(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.Sorted;
end;

procedure ListBox_SetSorted(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.Sorted := AValue;
end;

function ListBox_GetTabOrder(AObj: TListBox): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ListBox_SetTabOrder(AObj: TListBox; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function ListBox_GetTabStop(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ListBox_SetTabStop(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

//function ListBox_GetTabWidth(AObj: TListBox): Integer; cdecl;
//begin
//  Result :=  AObj.TabWidth;
//end;
//
//procedure ListBox_SetTabWidth(AObj: TListBox; AValue: Integer); cdecl;
//begin
//  AObj.TabWidth := AValue;
//end;

function ListBox_GetVisible(AObj: TListBox): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ListBox_SetVisible(AObj: TListBox; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function ListBox_GetStyleElements(AObj: TListBox): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure ListBox_SetStyleElements(AObj: TListBox; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure ListBox_SetOnClick(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnDblClick(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnEnter(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnExit(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnKeyDown(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnKeyPress(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnKeyUp(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnMouseDown(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnMouseEnter(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnMouseLeave(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnMouseMove(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

procedure ListBox_SetOnMouseUp(AObj: TListBox; AEventId: NativeUInt); stdcall;
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

function ListBox_GetCanvas(AObj: TListBox): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function ListBox_GetSelCount(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.SelCount;
end;

function ListBox_GetItemIndex(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.ItemIndex;
end;

procedure ListBox_SetItemIndex(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.ItemIndex := AValue;
end;

function ListBox_GetBrush(AObj: TListBox): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function ListBox_GetControlCount(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ListBox_GetHandle(AObj: TListBox): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function ListBox_GetParentWindow(AObj: TListBox): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ListBox_SetParentWindow(AObj: TListBox; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ListBox_GetAction(AObj: TListBox): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure ListBox_SetAction(AObj: TListBox; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure ListBox_GetBoundsRect(AObj: TListBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ListBox_SetBoundsRect(AObj: TListBox; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ListBox_GetClientHeight(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ListBox_SetClientHeight(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ListBox_GetClientRect(AObj: TListBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ListBox_GetClientWidth(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ListBox_SetClientWidth(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function ListBox_GetExplicitLeft(AObj: TListBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function ListBox_GetExplicitTop(AObj: TListBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function ListBox_GetExplicitWidth(AObj: TListBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function ListBox_GetExplicitHeight(AObj: TListBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function ListBox_GetParent(AObj: TListBox): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ListBox_SetParent(AObj: TListBox; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function ListBox_GetAlignWithMargins(AObj: TListBox): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure ListBox_SetAlignWithMargins(AObj: TListBox; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function ListBox_GetLeft(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ListBox_SetLeft(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ListBox_GetTop(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ListBox_SetTop(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ListBox_GetWidth(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ListBox_SetWidth(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function ListBox_GetHeight(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ListBox_SetHeight(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function ListBox_GetCursor(AObj: TListBox): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ListBox_SetCursor(AObj: TListBox; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function ListBox_GetHint(AObj: TListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure ListBox_SetHint(AObj: TListBox; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function ListBox_GetMargins(AObj: TListBox): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure ListBox_SetMargins(AObj: TListBox; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function ListBox_GetComponentCount(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ListBox_GetComponentIndex(AObj: TListBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ListBox_SetComponentIndex(AObj: TListBox; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ListBox_GetOwner(AObj: TListBox): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ListBox_GetName(AObj: TListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ListBox_SetName(AObj: TListBox; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ListBox_GetTag(AObj: TListBox): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ListBox_SetTag(AObj: TListBox; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ListBox_GetSelected(AObj: TListBox; Index: Integer): LongBool; cdecl;
begin
  Result :=  AObj.Selected[Index];
end;

procedure ListBox_SetSelected(AObj: TListBox; Index: Integer; AValue: LongBool); cdecl;
begin
  AObj.Selected[Index] := AValue;
end;

function ListBox_GetControls(AObj: TListBox; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ListBox_GetComponents(AObj: TListBox; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ListBox_Create {$IFNDEF MSWINDOWS}name '_ListBox_Create'{$ENDIF},
  ListBox_Free {$IFNDEF MSWINDOWS}name '_ListBox_Free'{$ENDIF},
  ListBox_AddItem {$IFNDEF MSWINDOWS}name '_ListBox_AddItem'{$ENDIF},
  ListBox_Clear {$IFNDEF MSWINDOWS}name '_ListBox_Clear'{$ENDIF},
  ListBox_ClearSelection {$IFNDEF MSWINDOWS}name '_ListBox_ClearSelection'{$ENDIF},
  ListBox_DeleteSelected {$IFNDEF MSWINDOWS}name '_ListBox_DeleteSelected'{$ENDIF},
  ListBox_SelectAll {$IFNDEF MSWINDOWS}name '_ListBox_SelectAll'{$ENDIF},
  ListBox_CanFocus {$IFNDEF MSWINDOWS}name '_ListBox_CanFocus'{$ENDIF},
  ListBox_FlipChildren {$IFNDEF MSWINDOWS}name '_ListBox_FlipChildren'{$ENDIF},
  ListBox_Focused {$IFNDEF MSWINDOWS}name '_ListBox_Focused'{$ENDIF},
  ListBox_HandleAllocated {$IFNDEF MSWINDOWS}name '_ListBox_HandleAllocated'{$ENDIF},
  ListBox_Invalidate {$IFNDEF MSWINDOWS}name '_ListBox_Invalidate'{$ENDIF},
  ListBox_Realign {$IFNDEF MSWINDOWS}name '_ListBox_Realign'{$ENDIF},
  ListBox_Repaint {$IFNDEF MSWINDOWS}name '_ListBox_Repaint'{$ENDIF},
  ListBox_ScaleBy {$IFNDEF MSWINDOWS}name '_ListBox_ScaleBy'{$ENDIF},
  ListBox_SetBounds {$IFNDEF MSWINDOWS}name '_ListBox_SetBounds'{$ENDIF},
  ListBox_SetFocus {$IFNDEF MSWINDOWS}name '_ListBox_SetFocus'{$ENDIF},
  ListBox_Update {$IFNDEF MSWINDOWS}name '_ListBox_Update'{$ENDIF},
  ListBox_BringToFront {$IFNDEF MSWINDOWS}name '_ListBox_BringToFront'{$ENDIF},
  ListBox_HasParent {$IFNDEF MSWINDOWS}name '_ListBox_HasParent'{$ENDIF},
  ListBox_Hide {$IFNDEF MSWINDOWS}name '_ListBox_Hide'{$ENDIF},
  ListBox_Perform {$IFNDEF MSWINDOWS}name '_ListBox_Perform'{$ENDIF},
  ListBox_Refresh {$IFNDEF MSWINDOWS}name '_ListBox_Refresh'{$ENDIF},
  ListBox_SendToBack {$IFNDEF MSWINDOWS}name '_ListBox_SendToBack'{$ENDIF},
  ListBox_Show {$IFNDEF MSWINDOWS}name '_ListBox_Show'{$ENDIF},
  ListBox_GetTextBuf {$IFNDEF MSWINDOWS}name '_ListBox_GetTextBuf'{$ENDIF},
  ListBox_FindComponent {$IFNDEF MSWINDOWS}name '_ListBox_FindComponent'{$ENDIF},
  ListBox_GetNamePath {$IFNDEF MSWINDOWS}name '_ListBox_GetNamePath'{$ENDIF},
  ListBox_Assign {$IFNDEF MSWINDOWS}name '_ListBox_Assign'{$ENDIF},
  ListBox_ClassName {$IFNDEF MSWINDOWS}name '_ListBox_ClassName'{$ENDIF},
  ListBox_Equals {$IFNDEF MSWINDOWS}name '_ListBox_Equals'{$ENDIF},
  ListBox_GetHashCode {$IFNDEF MSWINDOWS}name '_ListBox_GetHashCode'{$ENDIF},
  ListBox_ToString {$IFNDEF MSWINDOWS}name '_ListBox_ToString'{$ENDIF},
  ListBox_GetStyle {$IFNDEF MSWINDOWS}name '_ListBox_GetStyle'{$ENDIF},
  ListBox_SetStyle {$IFNDEF MSWINDOWS}name '_ListBox_SetStyle'{$ENDIF},
  //ListBox_GetAutoComplete {$IFNDEF MSWINDOWS}name '_ListBox_GetAutoComplete'{$ENDIF},
  //ListBox_SetAutoComplete {$IFNDEF MSWINDOWS}name '_ListBox_SetAutoComplete'{$ENDIF},
  //ListBox_GetAutoCompleteDelay {$IFNDEF MSWINDOWS}name '_ListBox_GetAutoCompleteDelay'{$ENDIF},
  //ListBox_SetAutoCompleteDelay {$IFNDEF MSWINDOWS}name '_ListBox_SetAutoCompleteDelay'{$ENDIF},
  ListBox_GetAlign {$IFNDEF MSWINDOWS}name '_ListBox_GetAlign'{$ENDIF},
  ListBox_SetAlign {$IFNDEF MSWINDOWS}name '_ListBox_SetAlign'{$ENDIF},
  ListBox_GetAnchors {$IFNDEF MSWINDOWS}name '_ListBox_GetAnchors'{$ENDIF},
  ListBox_SetAnchors {$IFNDEF MSWINDOWS}name '_ListBox_SetAnchors'{$ENDIF},
  //ListBox_GetBevelEdges {$IFNDEF MSWINDOWS}name '_ListBox_GetBevelEdges'{$ENDIF},
  //ListBox_SetBevelEdges {$IFNDEF MSWINDOWS}name '_ListBox_SetBevelEdges'{$ENDIF},
  //ListBox_GetBevelInner {$IFNDEF MSWINDOWS}name '_ListBox_GetBevelInner'{$ENDIF},
  //ListBox_SetBevelInner {$IFNDEF MSWINDOWS}name '_ListBox_SetBevelInner'{$ENDIF},
  //ListBox_GetBevelKind {$IFNDEF MSWINDOWS}name '_ListBox_GetBevelKind'{$ENDIF},
  //ListBox_SetBevelKind {$IFNDEF MSWINDOWS}name '_ListBox_SetBevelKind'{$ENDIF},
  //ListBox_GetBevelOuter {$IFNDEF MSWINDOWS}name '_ListBox_GetBevelOuter'{$ENDIF},
  //ListBox_SetBevelOuter {$IFNDEF MSWINDOWS}name '_ListBox_SetBevelOuter'{$ENDIF},
  ListBox_GetBiDiMode {$IFNDEF MSWINDOWS}name '_ListBox_GetBiDiMode'{$ENDIF},
  ListBox_SetBiDiMode {$IFNDEF MSWINDOWS}name '_ListBox_SetBiDiMode'{$ENDIF},
  ListBox_GetBorderStyle {$IFNDEF MSWINDOWS}name '_ListBox_GetBorderStyle'{$ENDIF},
  ListBox_SetBorderStyle {$IFNDEF MSWINDOWS}name '_ListBox_SetBorderStyle'{$ENDIF},
  ListBox_GetColor {$IFNDEF MSWINDOWS}name '_ListBox_GetColor'{$ENDIF},
  ListBox_SetColor {$IFNDEF MSWINDOWS}name '_ListBox_SetColor'{$ENDIF},
  ListBox_GetColumns {$IFNDEF MSWINDOWS}name '_ListBox_GetColumns'{$ENDIF},
  ListBox_SetColumns {$IFNDEF MSWINDOWS}name '_ListBox_SetColumns'{$ENDIF},
  ListBox_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ListBox_GetDoubleBuffered'{$ENDIF},
  ListBox_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ListBox_SetDoubleBuffered'{$ENDIF},
  ListBox_GetEnabled {$IFNDEF MSWINDOWS}name '_ListBox_GetEnabled'{$ENDIF},
  ListBox_SetEnabled {$IFNDEF MSWINDOWS}name '_ListBox_SetEnabled'{$ENDIF},
  ListBox_GetFont {$IFNDEF MSWINDOWS}name '_ListBox_GetFont'{$ENDIF},
  ListBox_SetFont {$IFNDEF MSWINDOWS}name '_ListBox_SetFont'{$ENDIF},
  ListBox_GetItemHeight {$IFNDEF MSWINDOWS}name '_ListBox_GetItemHeight'{$ENDIF},
  ListBox_SetItemHeight {$IFNDEF MSWINDOWS}name '_ListBox_SetItemHeight'{$ENDIF},
  ListBox_GetItems {$IFNDEF MSWINDOWS}name '_ListBox_GetItems'{$ENDIF},
  ListBox_SetItems {$IFNDEF MSWINDOWS}name '_ListBox_SetItems'{$ENDIF},
  ListBox_GetMultiSelect {$IFNDEF MSWINDOWS}name '_ListBox_GetMultiSelect'{$ENDIF},
  ListBox_SetMultiSelect {$IFNDEF MSWINDOWS}name '_ListBox_SetMultiSelect'{$ENDIF},
  ListBox_GetParentColor {$IFNDEF MSWINDOWS}name '_ListBox_GetParentColor'{$ENDIF},
  ListBox_SetParentColor {$IFNDEF MSWINDOWS}name '_ListBox_SetParentColor'{$ENDIF},
  //ListBox_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_ListBox_GetParentCtl3D'{$ENDIF},
  //ListBox_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_ListBox_SetParentCtl3D'{$ENDIF},
  //ListBox_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ListBox_GetParentDoubleBuffered'{$ENDIF},
  //ListBox_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ListBox_SetParentDoubleBuffered'{$ENDIF},
  ListBox_GetParentFont {$IFNDEF MSWINDOWS}name '_ListBox_GetParentFont'{$ENDIF},
  ListBox_SetParentFont {$IFNDEF MSWINDOWS}name '_ListBox_SetParentFont'{$ENDIF},
  ListBox_GetParentShowHint {$IFNDEF MSWINDOWS}name '_ListBox_GetParentShowHint'{$ENDIF},
  ListBox_SetParentShowHint {$IFNDEF MSWINDOWS}name '_ListBox_SetParentShowHint'{$ENDIF},
  ListBox_GetPopupMenu {$IFNDEF MSWINDOWS}name '_ListBox_GetPopupMenu'{$ENDIF},
  ListBox_SetPopupMenu {$IFNDEF MSWINDOWS}name '_ListBox_SetPopupMenu'{$ENDIF},
  ListBox_GetShowHint {$IFNDEF MSWINDOWS}name '_ListBox_GetShowHint'{$ENDIF},
  ListBox_SetShowHint {$IFNDEF MSWINDOWS}name '_ListBox_SetShowHint'{$ENDIF},
  ListBox_GetSorted {$IFNDEF MSWINDOWS}name '_ListBox_GetSorted'{$ENDIF},
  ListBox_SetSorted {$IFNDEF MSWINDOWS}name '_ListBox_SetSorted'{$ENDIF},
  ListBox_GetTabOrder {$IFNDEF MSWINDOWS}name '_ListBox_GetTabOrder'{$ENDIF},
  ListBox_SetTabOrder {$IFNDEF MSWINDOWS}name '_ListBox_SetTabOrder'{$ENDIF},
  ListBox_GetTabStop {$IFNDEF MSWINDOWS}name '_ListBox_GetTabStop'{$ENDIF},
  ListBox_SetTabStop {$IFNDEF MSWINDOWS}name '_ListBox_SetTabStop'{$ENDIF},
  //ListBox_GetTabWidth {$IFNDEF MSWINDOWS}name '_ListBox_GetTabWidth'{$ENDIF},
  //ListBox_SetTabWidth {$IFNDEF MSWINDOWS}name '_ListBox_SetTabWidth'{$ENDIF},
  ListBox_GetVisible {$IFNDEF MSWINDOWS}name '_ListBox_GetVisible'{$ENDIF},
  ListBox_SetVisible {$IFNDEF MSWINDOWS}name '_ListBox_SetVisible'{$ENDIF},
  //ListBox_GetStyleElements {$IFNDEF MSWINDOWS}name '_ListBox_GetStyleElements'{$ENDIF},
  //ListBox_SetStyleElements {$IFNDEF MSWINDOWS}name '_ListBox_SetStyleElements'{$ENDIF},
  ListBox_SetOnClick {$IFNDEF MSWINDOWS}name '_ListBox_SetOnClick'{$ENDIF},
  ListBox_SetOnDblClick {$IFNDEF MSWINDOWS}name '_ListBox_SetOnDblClick'{$ENDIF},
  ListBox_SetOnEnter {$IFNDEF MSWINDOWS}name '_ListBox_SetOnEnter'{$ENDIF},
  ListBox_SetOnExit {$IFNDEF MSWINDOWS}name '_ListBox_SetOnExit'{$ENDIF},
  ListBox_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_ListBox_SetOnKeyDown'{$ENDIF},
  ListBox_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_ListBox_SetOnKeyPress'{$ENDIF},
  ListBox_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_ListBox_SetOnKeyUp'{$ENDIF},
  ListBox_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_ListBox_SetOnMouseDown'{$ENDIF},
  ListBox_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_ListBox_SetOnMouseEnter'{$ENDIF},
  ListBox_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_ListBox_SetOnMouseLeave'{$ENDIF},
  ListBox_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_ListBox_SetOnMouseMove'{$ENDIF},
  ListBox_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_ListBox_SetOnMouseUp'{$ENDIF},
  ListBox_GetCanvas {$IFNDEF MSWINDOWS}name '_ListBox_GetCanvas'{$ENDIF},
  ListBox_GetSelCount {$IFNDEF MSWINDOWS}name '_ListBox_GetSelCount'{$ENDIF},
  ListBox_GetItemIndex {$IFNDEF MSWINDOWS}name '_ListBox_GetItemIndex'{$ENDIF},
  ListBox_SetItemIndex {$IFNDEF MSWINDOWS}name '_ListBox_SetItemIndex'{$ENDIF},
  ListBox_GetBrush {$IFNDEF MSWINDOWS}name '_ListBox_GetBrush'{$ENDIF},
  ListBox_GetControlCount {$IFNDEF MSWINDOWS}name '_ListBox_GetControlCount'{$ENDIF},
  ListBox_GetHandle {$IFNDEF MSWINDOWS}name '_ListBox_GetHandle'{$ENDIF},
  ListBox_GetParentWindow {$IFNDEF MSWINDOWS}name '_ListBox_GetParentWindow'{$ENDIF},
  ListBox_SetParentWindow {$IFNDEF MSWINDOWS}name '_ListBox_SetParentWindow'{$ENDIF},
  ListBox_GetAction {$IFNDEF MSWINDOWS}name '_ListBox_GetAction'{$ENDIF},
  ListBox_SetAction {$IFNDEF MSWINDOWS}name '_ListBox_SetAction'{$ENDIF},
  ListBox_GetBoundsRect {$IFNDEF MSWINDOWS}name '_ListBox_GetBoundsRect'{$ENDIF},
  ListBox_SetBoundsRect {$IFNDEF MSWINDOWS}name '_ListBox_SetBoundsRect'{$ENDIF},
  ListBox_GetClientHeight {$IFNDEF MSWINDOWS}name '_ListBox_GetClientHeight'{$ENDIF},
  ListBox_SetClientHeight {$IFNDEF MSWINDOWS}name '_ListBox_SetClientHeight'{$ENDIF},
  ListBox_GetClientRect {$IFNDEF MSWINDOWS}name '_ListBox_GetClientRect'{$ENDIF},
  ListBox_GetClientWidth {$IFNDEF MSWINDOWS}name '_ListBox_GetClientWidth'{$ENDIF},
  ListBox_SetClientWidth {$IFNDEF MSWINDOWS}name '_ListBox_SetClientWidth'{$ENDIF},
  //ListBox_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_ListBox_GetExplicitLeft'{$ENDIF},
  //ListBox_GetExplicitTop {$IFNDEF MSWINDOWS}name '_ListBox_GetExplicitTop'{$ENDIF},
  //ListBox_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_ListBox_GetExplicitWidth'{$ENDIF},
  //ListBox_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_ListBox_GetExplicitHeight'{$ENDIF},
  ListBox_GetParent {$IFNDEF MSWINDOWS}name '_ListBox_GetParent'{$ENDIF},
  ListBox_SetParent {$IFNDEF MSWINDOWS}name '_ListBox_SetParent'{$ENDIF},
  //ListBox_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ListBox_GetAlignWithMargins'{$ENDIF},
  //ListBox_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ListBox_SetAlignWithMargins'{$ENDIF},
  ListBox_GetLeft {$IFNDEF MSWINDOWS}name '_ListBox_GetLeft'{$ENDIF},
  ListBox_SetLeft {$IFNDEF MSWINDOWS}name '_ListBox_SetLeft'{$ENDIF},
  ListBox_GetTop {$IFNDEF MSWINDOWS}name '_ListBox_GetTop'{$ENDIF},
  ListBox_SetTop {$IFNDEF MSWINDOWS}name '_ListBox_SetTop'{$ENDIF},
  ListBox_GetWidth {$IFNDEF MSWINDOWS}name '_ListBox_GetWidth'{$ENDIF},
  ListBox_SetWidth {$IFNDEF MSWINDOWS}name '_ListBox_SetWidth'{$ENDIF},
  ListBox_GetHeight {$IFNDEF MSWINDOWS}name '_ListBox_GetHeight'{$ENDIF},
  ListBox_SetHeight {$IFNDEF MSWINDOWS}name '_ListBox_SetHeight'{$ENDIF},
  ListBox_GetCursor {$IFNDEF MSWINDOWS}name '_ListBox_GetCursor'{$ENDIF},
  ListBox_SetCursor {$IFNDEF MSWINDOWS}name '_ListBox_SetCursor'{$ENDIF},
  ListBox_GetHint {$IFNDEF MSWINDOWS}name '_ListBox_GetHint'{$ENDIF},
  ListBox_SetHint {$IFNDEF MSWINDOWS}name '_ListBox_SetHint'{$ENDIF},
  //ListBox_GetMargins {$IFNDEF MSWINDOWS}name '_ListBox_GetMargins'{$ENDIF},
  //ListBox_SetMargins {$IFNDEF MSWINDOWS}name '_ListBox_SetMargins'{$ENDIF},
  ListBox_GetComponentCount {$IFNDEF MSWINDOWS}name '_ListBox_GetComponentCount'{$ENDIF},
  ListBox_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ListBox_GetComponentIndex'{$ENDIF},
  ListBox_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ListBox_SetComponentIndex'{$ENDIF},
  ListBox_GetOwner {$IFNDEF MSWINDOWS}name '_ListBox_GetOwner'{$ENDIF},
  ListBox_GetName {$IFNDEF MSWINDOWS}name '_ListBox_GetName'{$ENDIF},
  ListBox_SetName {$IFNDEF MSWINDOWS}name '_ListBox_SetName'{$ENDIF},
  ListBox_GetTag {$IFNDEF MSWINDOWS}name '_ListBox_GetTag'{$ENDIF},
  ListBox_SetTag {$IFNDEF MSWINDOWS}name '_ListBox_SetTag'{$ENDIF},
  ListBox_GetSelected {$IFNDEF MSWINDOWS}name '_ListBox_GetSelected'{$ENDIF},
  ListBox_SetSelected {$IFNDEF MSWINDOWS}name '_ListBox_SetSelected'{$ENDIF},
  ListBox_GetControls {$IFNDEF MSWINDOWS}name '_ListBox_GetControls'{$ENDIF},
  ListBox_GetComponents {$IFNDEF MSWINDOWS}name '_ListBox_GetComponents'{$ENDIF};

