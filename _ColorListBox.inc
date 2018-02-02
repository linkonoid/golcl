
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ColorListBox_Create(AOwner: TComponent): TColorListBox; cdecl;
begin
  Result :=  TColorListBox.Create(AOwner);
end;

procedure ColorListBox_Free(AObj: TColorListBox); cdecl;
begin
  AObj.Free;
end;

procedure ColorListBox_AddItem(AObj: TColorListBox; Item: PWideChar; AObject: TObject); cdecl;
begin
  AObj.AddItem(Item, AObject);
end;

procedure ColorListBox_Clear(AObj: TColorListBox); cdecl;
begin
  AObj.Clear;
end;

procedure ColorListBox_ClearSelection(AObj: TColorListBox); cdecl;
begin
  AObj.ClearSelection;
end;

procedure ColorListBox_DeleteSelected(AObj: TColorListBox); cdecl;
begin
  AObj.DeleteSelected;
end;

procedure ColorListBox_SelectAll(AObj: TColorListBox); cdecl;
begin
  AObj.SelectAll;
end;

function ColorListBox_CanFocus(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure ColorListBox_FlipChildren(AObj: TColorListBox; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ColorListBox_Focused(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function ColorListBox_HandleAllocated(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ColorListBox_Invalidate(AObj: TColorListBox); cdecl;
begin
  AObj.Invalidate;
end;

procedure ColorListBox_Realign(AObj: TColorListBox); cdecl;
begin
  AObj.Realign;
end;

procedure ColorListBox_Repaint(AObj: TColorListBox); cdecl;
begin
  AObj.Repaint;
end;

procedure ColorListBox_ScaleBy(AObj: TColorListBox; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ColorListBox_SetBounds(AObj: TColorListBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ColorListBox_SetFocus(AObj: TColorListBox); cdecl;
begin
  AObj.SetFocus;
end;

procedure ColorListBox_Update(AObj: TColorListBox); cdecl;
begin
  AObj.Update;
end;

procedure ColorListBox_BringToFront(AObj: TColorListBox); cdecl;
begin
  AObj.BringToFront;
end;

function ColorListBox_HasParent(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ColorListBox_Hide(AObj: TColorListBox); cdecl;
begin
  AObj.Hide;
end;

function ColorListBox_Perform(AObj: TColorListBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ColorListBox_Refresh(AObj: TColorListBox); cdecl;
begin
  AObj.Refresh;
end;

procedure ColorListBox_SendToBack(AObj: TColorListBox); cdecl;
begin
  AObj.SendToBack;
end;

procedure ColorListBox_Show(AObj: TColorListBox); cdecl;
begin
  AObj.Show;
end;

function ColorListBox_GetTextBuf(AObj: TColorListBox; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function ColorListBox_FindComponent(AObj: TColorListBox; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ColorListBox_GetNamePath(AObj: TColorListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure ColorListBox_Assign(AObj: TColorListBox; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ColorListBox_ClassName(AObj: TColorListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function ColorListBox_Equals(AObj: TColorListBox; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ColorListBox_GetHashCode(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ColorListBox_ToString(AObj: TColorListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ColorListBox_GetAlign(AObj: TColorListBox): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure ColorListBox_SetAlign(AObj: TColorListBox; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function ColorListBox_GetAutoComplete(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.AutoComplete;
end;

procedure ColorListBox_SetAutoComplete(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.AutoComplete := AValue;
end;

function ColorListBox_GetDefaultColorColor(AObj: TColorListBox): TColor; cdecl;
begin
  Result :=  AObj.DefaultColorColor;
end;

procedure ColorListBox_SetDefaultColorColor(AObj: TColorListBox; AValue: TColor); cdecl;
begin
  AObj.DefaultColorColor := AValue;
end;

function ColorListBox_GetNoneColorColor(AObj: TColorListBox): TColor; cdecl;
begin
  Result :=  AObj.NoneColorColor;
end;

procedure ColorListBox_SetNoneColorColor(AObj: TColorListBox; AValue: TColor); cdecl;
begin
  AObj.NoneColorColor := AValue;
end;

function ColorListBox_GetSelected(AObj: TColorListBox): TColor; cdecl;
begin
  Result :=  AObj.Selected;
end;

procedure ColorListBox_SetSelected(AObj: TColorListBox; AValue: TColor); cdecl;
begin
  AObj.Selected := AValue;
end;

function ColorListBox_GetStyle(AObj: TColorListBox): TColorBoxStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure ColorListBox_SetStyle(AObj: TColorListBox; AValue: TColorBoxStyle); cdecl;
begin
  AObj.Style := AValue;
end;

function ColorListBox_GetAnchors(AObj: TColorListBox): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ColorListBox_SetAnchors(AObj: TColorListBox; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function ColorListBox_GetBevelEdges(AObj: TColorListBox): TBevelEdges; cdecl;
begin
  Result :=  AObj.BevelEdges;
end;

procedure ColorListBox_SetBevelEdges(AObj: TColorListBox; AValue: TBevelEdges); cdecl;
begin
  AObj.BevelEdges := AValue;
end;

function ColorListBox_GetBevelInner(AObj: TColorListBox): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelInner;
end;

procedure ColorListBox_SetBevelInner(AObj: TColorListBox; AValue: TBevelCut); cdecl;
begin
  AObj.BevelInner := AValue;
end;

function ColorListBox_GetBevelKind(AObj: TColorListBox): TBevelKind; cdecl;
begin
  Result :=  AObj.BevelKind;
end;

procedure ColorListBox_SetBevelKind(AObj: TColorListBox; AValue: TBevelKind); cdecl;
begin
  AObj.BevelKind := AValue;
end;

function ColorListBox_GetBevelOuter(AObj: TColorListBox): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelOuter;
end;

procedure ColorListBox_SetBevelOuter(AObj: TColorListBox; AValue: TBevelCut); cdecl;
begin
  AObj.BevelOuter := AValue;
end;

function ColorListBox_GetBiDiMode(AObj: TColorListBox): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ColorListBox_SetBiDiMode(AObj: TColorListBox; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ColorListBox_GetColor(AObj: TColorListBox): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure ColorListBox_SetColor(AObj: TColorListBox; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function ColorListBox_GetDoubleBuffered(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ColorListBox_SetDoubleBuffered(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ColorListBox_GetEnabled(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ColorListBox_SetEnabled(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function ColorListBox_GetFont(AObj: TColorListBox): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure ColorListBox_SetFont(AObj: TColorListBox; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function ColorListBox_GetItemHeight(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ItemHeight;
end;

procedure ColorListBox_SetItemHeight(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.ItemHeight := AValue;
end;

function ColorListBox_GetParentColor(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ColorListBox_SetParentColor(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function ColorListBox_GetParentCtl3D(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure ColorListBox_SetParentCtl3D(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.ParentCtl3D := AValue;
end;

function ColorListBox_GetParentDoubleBuffered(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure ColorListBox_SetParentDoubleBuffered(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function ColorListBox_GetParentFont(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ColorListBox_SetParentFont(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function ColorListBox_GetParentShowHint(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ColorListBox_SetParentShowHint(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ColorListBox_GetPopupMenu(AObj: TColorListBox): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ColorListBox_SetPopupMenu(AObj: TColorListBox; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ColorListBox_GetShowHint(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ColorListBox_SetShowHint(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function ColorListBox_GetTabOrder(AObj: TColorListBox): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ColorListBox_SetTabOrder(AObj: TColorListBox; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function ColorListBox_GetTabStop(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ColorListBox_SetTabStop(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function ColorListBox_GetVisible(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ColorListBox_SetVisible(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function ColorListBox_GetStyleElements(AObj: TColorListBox): TStyleElements; cdecl;
begin
  Result :=  AObj.StyleElements;
end;

procedure ColorListBox_SetStyleElements(AObj: TColorListBox; AValue: TStyleElements); cdecl;
begin
  AObj.StyleElements := AValue;
end;

procedure ColorListBox_SetOnClick(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnDblClick(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnEnter(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnExit(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnKeyDown(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnKeyPress(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnKeyUp(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnMouseDown(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnMouseEnter(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnMouseLeave(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnMouseMove(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

procedure ColorListBox_SetOnMouseUp(AObj: TColorListBox; AEventId: NativeUInt); stdcall
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

function ColorListBox_GetAutoCompleteDelay(AObj: TColorListBox): Cardinal; cdecl;
begin
  Result :=  AObj.AutoCompleteDelay;
end;

procedure ColorListBox_SetAutoCompleteDelay(AObj: TColorListBox; AValue: Cardinal); cdecl;
begin
  AObj.AutoCompleteDelay := AValue;
end;

function ColorListBox_GetCanvas(AObj: TColorListBox): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function ColorListBox_GetItems(AObj: TColorListBox): TStrings; cdecl;
begin
  Result :=  AObj.Items;
end;

procedure ColorListBox_SetItems(AObj: TColorListBox; AValue: TStrings); cdecl;
begin
  AObj.Items := AValue;
end;

function ColorListBox_GetMultiSelect(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.MultiSelect;
end;

procedure ColorListBox_SetMultiSelect(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.MultiSelect := AValue;
end;

function ColorListBox_GetSelCount(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.SelCount;
end;

function ColorListBox_GetItemIndex(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ItemIndex;
end;

procedure ColorListBox_SetItemIndex(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.ItemIndex := AValue;
end;

function ColorListBox_GetBrush(AObj: TColorListBox): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function ColorListBox_GetControlCount(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ColorListBox_GetHandle(AObj: TColorListBox): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function ColorListBox_GetParentWindow(AObj: TColorListBox): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ColorListBox_SetParentWindow(AObj: TColorListBox; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ColorListBox_GetAction(AObj: TColorListBox): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure ColorListBox_SetAction(AObj: TColorListBox; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure ColorListBox_GetBoundsRect(AObj: TColorListBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ColorListBox_SetBoundsRect(AObj: TColorListBox; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ColorListBox_GetClientHeight(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ColorListBox_SetClientHeight(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ColorListBox_GetClientRect(AObj: TColorListBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ColorListBox_GetClientWidth(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ColorListBox_SetClientWidth(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function ColorListBox_GetExplicitLeft(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function ColorListBox_GetExplicitTop(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function ColorListBox_GetExplicitWidth(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function ColorListBox_GetExplicitHeight(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

function ColorListBox_GetParent(AObj: TColorListBox): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ColorListBox_SetParent(AObj: TColorListBox; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function ColorListBox_GetAlignWithMargins(AObj: TColorListBox): LongBool; cdecl;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure ColorListBox_SetAlignWithMargins(AObj: TColorListBox; AValue: LongBool); cdecl;
begin
  AObj.AlignWithMargins := AValue;
end;

function ColorListBox_GetLeft(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ColorListBox_SetLeft(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ColorListBox_GetTop(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ColorListBox_SetTop(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ColorListBox_GetWidth(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ColorListBox_SetWidth(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function ColorListBox_GetHeight(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ColorListBox_SetHeight(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function ColorListBox_GetCursor(AObj: TColorListBox): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ColorListBox_SetCursor(AObj: TColorListBox; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function ColorListBox_GetHint(AObj: TColorListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure ColorListBox_SetHint(AObj: TColorListBox; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function ColorListBox_GetMargins(AObj: TColorListBox): TMargins; cdecl;
begin
  Result :=  AObj.Margins;
end;

procedure ColorListBox_SetMargins(AObj: TColorListBox; AValue: TMargins); cdecl;
begin
  AObj.Margins := AValue;
end;

function ColorListBox_GetComponentCount(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ColorListBox_GetComponentIndex(AObj: TColorListBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ColorListBox_SetComponentIndex(AObj: TColorListBox; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ColorListBox_GetOwner(AObj: TColorListBox): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ColorListBox_GetName(AObj: TColorListBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ColorListBox_SetName(AObj: TColorListBox; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ColorListBox_GetTag(AObj: TColorListBox): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ColorListBox_SetTag(AObj: TColorListBox; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ColorListBox_GetColors(AObj: TColorListBox; Index: Integer): TColor; cdecl;
begin
  Result :=  AObj.Colors[Index];
end;

function ColorListBox_GetColorNames(AObj: TColorListBox; Index: Integer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ColorNames[Index]);
end;

function ColorListBox_GetControls(AObj: TColorListBox; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ColorListBox_GetComponents(AObj: TColorListBox; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ColorListBox_Create {$IFNDEF MSWINDOWS}name '_ColorListBox_Create'{$ENDIF},
  ColorListBox_Free {$IFNDEF MSWINDOWS}name '_ColorListBox_Free'{$ENDIF},
  ColorListBox_AddItem {$IFNDEF MSWINDOWS}name '_ColorListBox_AddItem'{$ENDIF},
  ColorListBox_Clear {$IFNDEF MSWINDOWS}name '_ColorListBox_Clear'{$ENDIF},
  ColorListBox_ClearSelection {$IFNDEF MSWINDOWS}name '_ColorListBox_ClearSelection'{$ENDIF},
  ColorListBox_DeleteSelected {$IFNDEF MSWINDOWS}name '_ColorListBox_DeleteSelected'{$ENDIF},
  ColorListBox_SelectAll {$IFNDEF MSWINDOWS}name '_ColorListBox_SelectAll'{$ENDIF},
  ColorListBox_CanFocus {$IFNDEF MSWINDOWS}name '_ColorListBox_CanFocus'{$ENDIF},
  ColorListBox_FlipChildren {$IFNDEF MSWINDOWS}name '_ColorListBox_FlipChildren'{$ENDIF},
  ColorListBox_Focused {$IFNDEF MSWINDOWS}name '_ColorListBox_Focused'{$ENDIF},
  ColorListBox_HandleAllocated {$IFNDEF MSWINDOWS}name '_ColorListBox_HandleAllocated'{$ENDIF},
  ColorListBox_Invalidate {$IFNDEF MSWINDOWS}name '_ColorListBox_Invalidate'{$ENDIF},
  ColorListBox_Realign {$IFNDEF MSWINDOWS}name '_ColorListBox_Realign'{$ENDIF},
  ColorListBox_Repaint {$IFNDEF MSWINDOWS}name '_ColorListBox_Repaint'{$ENDIF},
  ColorListBox_ScaleBy {$IFNDEF MSWINDOWS}name '_ColorListBox_ScaleBy'{$ENDIF},
  ColorListBox_SetBounds {$IFNDEF MSWINDOWS}name '_ColorListBox_SetBounds'{$ENDIF},
  ColorListBox_SetFocus {$IFNDEF MSWINDOWS}name '_ColorListBox_SetFocus'{$ENDIF},
  ColorListBox_Update {$IFNDEF MSWINDOWS}name '_ColorListBox_Update'{$ENDIF},
  ColorListBox_BringToFront {$IFNDEF MSWINDOWS}name '_ColorListBox_BringToFront'{$ENDIF},
  ColorListBox_HasParent {$IFNDEF MSWINDOWS}name '_ColorListBox_HasParent'{$ENDIF},
  ColorListBox_Hide {$IFNDEF MSWINDOWS}name '_ColorListBox_Hide'{$ENDIF},
  ColorListBox_Perform {$IFNDEF MSWINDOWS}name '_ColorListBox_Perform'{$ENDIF},
  ColorListBox_Refresh {$IFNDEF MSWINDOWS}name '_ColorListBox_Refresh'{$ENDIF},
  ColorListBox_SendToBack {$IFNDEF MSWINDOWS}name '_ColorListBox_SendToBack'{$ENDIF},
  ColorListBox_Show {$IFNDEF MSWINDOWS}name '_ColorListBox_Show'{$ENDIF},
  ColorListBox_GetTextBuf {$IFNDEF MSWINDOWS}name '_ColorListBox_GetTextBuf'{$ENDIF},
  ColorListBox_FindComponent {$IFNDEF MSWINDOWS}name '_ColorListBox_FindComponent'{$ENDIF},
  ColorListBox_GetNamePath {$IFNDEF MSWINDOWS}name '_ColorListBox_GetNamePath'{$ENDIF},
  ColorListBox_Assign {$IFNDEF MSWINDOWS}name '_ColorListBox_Assign'{$ENDIF},
  ColorListBox_ClassName {$IFNDEF MSWINDOWS}name '_ColorListBox_ClassName'{$ENDIF},
  ColorListBox_Equals {$IFNDEF MSWINDOWS}name '_ColorListBox_Equals'{$ENDIF},
  ColorListBox_GetHashCode {$IFNDEF MSWINDOWS}name '_ColorListBox_GetHashCode'{$ENDIF},
  ColorListBox_ToString {$IFNDEF MSWINDOWS}name '_ColorListBox_ToString'{$ENDIF},
  ColorListBox_GetAlign {$IFNDEF MSWINDOWS}name '_ColorListBox_GetAlign'{$ENDIF},
  ColorListBox_SetAlign {$IFNDEF MSWINDOWS}name '_ColorListBox_SetAlign'{$ENDIF},
  ColorListBox_GetAutoComplete {$IFNDEF MSWINDOWS}name '_ColorListBox_GetAutoComplete'{$ENDIF},
  ColorListBox_SetAutoComplete {$IFNDEF MSWINDOWS}name '_ColorListBox_SetAutoComplete'{$ENDIF},
  ColorListBox_GetDefaultColorColor {$IFNDEF MSWINDOWS}name '_ColorListBox_GetDefaultColorColor'{$ENDIF},
  ColorListBox_SetDefaultColorColor {$IFNDEF MSWINDOWS}name '_ColorListBox_SetDefaultColorColor'{$ENDIF},
  ColorListBox_GetNoneColorColor {$IFNDEF MSWINDOWS}name '_ColorListBox_GetNoneColorColor'{$ENDIF},
  ColorListBox_SetNoneColorColor {$IFNDEF MSWINDOWS}name '_ColorListBox_SetNoneColorColor'{$ENDIF},
  ColorListBox_GetSelected {$IFNDEF MSWINDOWS}name '_ColorListBox_GetSelected'{$ENDIF},
  ColorListBox_SetSelected {$IFNDEF MSWINDOWS}name '_ColorListBox_SetSelected'{$ENDIF},
  ColorListBox_GetStyle {$IFNDEF MSWINDOWS}name '_ColorListBox_GetStyle'{$ENDIF},
  ColorListBox_SetStyle {$IFNDEF MSWINDOWS}name '_ColorListBox_SetStyle'{$ENDIF},
  ColorListBox_GetAnchors {$IFNDEF MSWINDOWS}name '_ColorListBox_GetAnchors'{$ENDIF},
  ColorListBox_SetAnchors {$IFNDEF MSWINDOWS}name '_ColorListBox_SetAnchors'{$ENDIF},
  ColorListBox_GetBevelEdges {$IFNDEF MSWINDOWS}name '_ColorListBox_GetBevelEdges'{$ENDIF},
  ColorListBox_SetBevelEdges {$IFNDEF MSWINDOWS}name '_ColorListBox_SetBevelEdges'{$ENDIF},
  ColorListBox_GetBevelInner {$IFNDEF MSWINDOWS}name '_ColorListBox_GetBevelInner'{$ENDIF},
  ColorListBox_SetBevelInner {$IFNDEF MSWINDOWS}name '_ColorListBox_SetBevelInner'{$ENDIF},
  ColorListBox_GetBevelKind {$IFNDEF MSWINDOWS}name '_ColorListBox_GetBevelKind'{$ENDIF},
  ColorListBox_SetBevelKind {$IFNDEF MSWINDOWS}name '_ColorListBox_SetBevelKind'{$ENDIF},
  ColorListBox_GetBevelOuter {$IFNDEF MSWINDOWS}name '_ColorListBox_GetBevelOuter'{$ENDIF},
  ColorListBox_SetBevelOuter {$IFNDEF MSWINDOWS}name '_ColorListBox_SetBevelOuter'{$ENDIF},
  ColorListBox_GetBiDiMode {$IFNDEF MSWINDOWS}name '_ColorListBox_GetBiDiMode'{$ENDIF},
  ColorListBox_SetBiDiMode {$IFNDEF MSWINDOWS}name '_ColorListBox_SetBiDiMode'{$ENDIF},
  ColorListBox_GetColor {$IFNDEF MSWINDOWS}name '_ColorListBox_GetColor'{$ENDIF},
  ColorListBox_SetColor {$IFNDEF MSWINDOWS}name '_ColorListBox_SetColor'{$ENDIF},
  ColorListBox_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ColorListBox_GetDoubleBuffered'{$ENDIF},
  ColorListBox_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ColorListBox_SetDoubleBuffered'{$ENDIF},
  ColorListBox_GetEnabled {$IFNDEF MSWINDOWS}name '_ColorListBox_GetEnabled'{$ENDIF},
  ColorListBox_SetEnabled {$IFNDEF MSWINDOWS}name '_ColorListBox_SetEnabled'{$ENDIF},
  ColorListBox_GetFont {$IFNDEF MSWINDOWS}name '_ColorListBox_GetFont'{$ENDIF},
  ColorListBox_SetFont {$IFNDEF MSWINDOWS}name '_ColorListBox_SetFont'{$ENDIF},
  ColorListBox_GetItemHeight {$IFNDEF MSWINDOWS}name '_ColorListBox_GetItemHeight'{$ENDIF},
  ColorListBox_SetItemHeight {$IFNDEF MSWINDOWS}name '_ColorListBox_SetItemHeight'{$ENDIF},
  ColorListBox_GetParentColor {$IFNDEF MSWINDOWS}name '_ColorListBox_GetParentColor'{$ENDIF},
  ColorListBox_SetParentColor {$IFNDEF MSWINDOWS}name '_ColorListBox_SetParentColor'{$ENDIF},
  ColorListBox_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_ColorListBox_GetParentCtl3D'{$ENDIF},
  ColorListBox_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_ColorListBox_SetParentCtl3D'{$ENDIF},
  ColorListBox_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ColorListBox_GetParentDoubleBuffered'{$ENDIF},
  ColorListBox_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ColorListBox_SetParentDoubleBuffered'{$ENDIF},
  ColorListBox_GetParentFont {$IFNDEF MSWINDOWS}name '_ColorListBox_GetParentFont'{$ENDIF},
  ColorListBox_SetParentFont {$IFNDEF MSWINDOWS}name '_ColorListBox_SetParentFont'{$ENDIF},
  ColorListBox_GetParentShowHint {$IFNDEF MSWINDOWS}name '_ColorListBox_GetParentShowHint'{$ENDIF},
  ColorListBox_SetParentShowHint {$IFNDEF MSWINDOWS}name '_ColorListBox_SetParentShowHint'{$ENDIF},
  ColorListBox_GetPopupMenu {$IFNDEF MSWINDOWS}name '_ColorListBox_GetPopupMenu'{$ENDIF},
  ColorListBox_SetPopupMenu {$IFNDEF MSWINDOWS}name '_ColorListBox_SetPopupMenu'{$ENDIF},
  ColorListBox_GetShowHint {$IFNDEF MSWINDOWS}name '_ColorListBox_GetShowHint'{$ENDIF},
  ColorListBox_SetShowHint {$IFNDEF MSWINDOWS}name '_ColorListBox_SetShowHint'{$ENDIF},
  ColorListBox_GetTabOrder {$IFNDEF MSWINDOWS}name '_ColorListBox_GetTabOrder'{$ENDIF},
  ColorListBox_SetTabOrder {$IFNDEF MSWINDOWS}name '_ColorListBox_SetTabOrder'{$ENDIF},
  ColorListBox_GetTabStop {$IFNDEF MSWINDOWS}name '_ColorListBox_GetTabStop'{$ENDIF},
  ColorListBox_SetTabStop {$IFNDEF MSWINDOWS}name '_ColorListBox_SetTabStop'{$ENDIF},
  ColorListBox_GetVisible {$IFNDEF MSWINDOWS}name '_ColorListBox_GetVisible'{$ENDIF},
  ColorListBox_SetVisible {$IFNDEF MSWINDOWS}name '_ColorListBox_SetVisible'{$ENDIF},
  ColorListBox_GetStyleElements {$IFNDEF MSWINDOWS}name '_ColorListBox_GetStyleElements'{$ENDIF},
  ColorListBox_SetStyleElements {$IFNDEF MSWINDOWS}name '_ColorListBox_SetStyleElements'{$ENDIF},
  ColorListBox_SetOnClick {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnClick'{$ENDIF},
  ColorListBox_SetOnDblClick {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnDblClick'{$ENDIF},
  ColorListBox_SetOnEnter {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnEnter'{$ENDIF},
  ColorListBox_SetOnExit {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnExit'{$ENDIF},
  ColorListBox_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnKeyDown'{$ENDIF},
  ColorListBox_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnKeyPress'{$ENDIF},
  ColorListBox_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnKeyUp'{$ENDIF},
  ColorListBox_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnMouseDown'{$ENDIF},
  ColorListBox_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnMouseEnter'{$ENDIF},
  ColorListBox_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnMouseLeave'{$ENDIF},
  ColorListBox_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnMouseMove'{$ENDIF},
  ColorListBox_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_ColorListBox_SetOnMouseUp'{$ENDIF},
  ColorListBox_GetAutoCompleteDelay {$IFNDEF MSWINDOWS}name '_ColorListBox_GetAutoCompleteDelay'{$ENDIF},
  ColorListBox_SetAutoCompleteDelay {$IFNDEF MSWINDOWS}name '_ColorListBox_SetAutoCompleteDelay'{$ENDIF},
  ColorListBox_GetCanvas {$IFNDEF MSWINDOWS}name '_ColorListBox_GetCanvas'{$ENDIF},
  ColorListBox_GetItems {$IFNDEF MSWINDOWS}name '_ColorListBox_GetItems'{$ENDIF},
  ColorListBox_SetItems {$IFNDEF MSWINDOWS}name '_ColorListBox_SetItems'{$ENDIF},
  ColorListBox_GetMultiSelect {$IFNDEF MSWINDOWS}name '_ColorListBox_GetMultiSelect'{$ENDIF},
  ColorListBox_SetMultiSelect {$IFNDEF MSWINDOWS}name '_ColorListBox_SetMultiSelect'{$ENDIF},
  ColorListBox_GetSelCount {$IFNDEF MSWINDOWS}name '_ColorListBox_GetSelCount'{$ENDIF},
  ColorListBox_GetItemIndex {$IFNDEF MSWINDOWS}name '_ColorListBox_GetItemIndex'{$ENDIF},
  ColorListBox_SetItemIndex {$IFNDEF MSWINDOWS}name '_ColorListBox_SetItemIndex'{$ENDIF},
  ColorListBox_GetBrush {$IFNDEF MSWINDOWS}name '_ColorListBox_GetBrush'{$ENDIF},
  ColorListBox_GetControlCount {$IFNDEF MSWINDOWS}name '_ColorListBox_GetControlCount'{$ENDIF},
  ColorListBox_GetHandle {$IFNDEF MSWINDOWS}name '_ColorListBox_GetHandle'{$ENDIF},
  ColorListBox_GetParentWindow {$IFNDEF MSWINDOWS}name '_ColorListBox_GetParentWindow'{$ENDIF},
  ColorListBox_SetParentWindow {$IFNDEF MSWINDOWS}name '_ColorListBox_SetParentWindow'{$ENDIF},
  ColorListBox_GetAction {$IFNDEF MSWINDOWS}name '_ColorListBox_GetAction'{$ENDIF},
  ColorListBox_SetAction {$IFNDEF MSWINDOWS}name '_ColorListBox_SetAction'{$ENDIF},
  ColorListBox_GetBoundsRect {$IFNDEF MSWINDOWS}name '_ColorListBox_GetBoundsRect'{$ENDIF},
  ColorListBox_SetBoundsRect {$IFNDEF MSWINDOWS}name '_ColorListBox_SetBoundsRect'{$ENDIF},
  ColorListBox_GetClientHeight {$IFNDEF MSWINDOWS}name '_ColorListBox_GetClientHeight'{$ENDIF},
  ColorListBox_SetClientHeight {$IFNDEF MSWINDOWS}name '_ColorListBox_SetClientHeight'{$ENDIF},
  ColorListBox_GetClientRect {$IFNDEF MSWINDOWS}name '_ColorListBox_GetClientRect'{$ENDIF},
  ColorListBox_GetClientWidth {$IFNDEF MSWINDOWS}name '_ColorListBox_GetClientWidth'{$ENDIF},
  ColorListBox_SetClientWidth {$IFNDEF MSWINDOWS}name '_ColorListBox_SetClientWidth'{$ENDIF},
  ColorListBox_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_ColorListBox_GetExplicitLeft'{$ENDIF},
  ColorListBox_GetExplicitTop {$IFNDEF MSWINDOWS}name '_ColorListBox_GetExplicitTop'{$ENDIF},
  ColorListBox_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_ColorListBox_GetExplicitWidth'{$ENDIF},
  ColorListBox_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_ColorListBox_GetExplicitHeight'{$ENDIF},
  ColorListBox_GetParent {$IFNDEF MSWINDOWS}name '_ColorListBox_GetParent'{$ENDIF},
  ColorListBox_SetParent {$IFNDEF MSWINDOWS}name '_ColorListBox_SetParent'{$ENDIF},
  ColorListBox_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ColorListBox_GetAlignWithMargins'{$ENDIF},
  ColorListBox_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ColorListBox_SetAlignWithMargins'{$ENDIF},
  ColorListBox_GetLeft {$IFNDEF MSWINDOWS}name '_ColorListBox_GetLeft'{$ENDIF},
  ColorListBox_SetLeft {$IFNDEF MSWINDOWS}name '_ColorListBox_SetLeft'{$ENDIF},
  ColorListBox_GetTop {$IFNDEF MSWINDOWS}name '_ColorListBox_GetTop'{$ENDIF},
  ColorListBox_SetTop {$IFNDEF MSWINDOWS}name '_ColorListBox_SetTop'{$ENDIF},
  ColorListBox_GetWidth {$IFNDEF MSWINDOWS}name '_ColorListBox_GetWidth'{$ENDIF},
  ColorListBox_SetWidth {$IFNDEF MSWINDOWS}name '_ColorListBox_SetWidth'{$ENDIF},
  ColorListBox_GetHeight {$IFNDEF MSWINDOWS}name '_ColorListBox_GetHeight'{$ENDIF},
  ColorListBox_SetHeight {$IFNDEF MSWINDOWS}name '_ColorListBox_SetHeight'{$ENDIF},
  ColorListBox_GetCursor {$IFNDEF MSWINDOWS}name '_ColorListBox_GetCursor'{$ENDIF},
  ColorListBox_SetCursor {$IFNDEF MSWINDOWS}name '_ColorListBox_SetCursor'{$ENDIF},
  ColorListBox_GetHint {$IFNDEF MSWINDOWS}name '_ColorListBox_GetHint'{$ENDIF},
  ColorListBox_SetHint {$IFNDEF MSWINDOWS}name '_ColorListBox_SetHint'{$ENDIF},
  ColorListBox_GetMargins {$IFNDEF MSWINDOWS}name '_ColorListBox_GetMargins'{$ENDIF},
  ColorListBox_SetMargins {$IFNDEF MSWINDOWS}name '_ColorListBox_SetMargins'{$ENDIF},
  ColorListBox_GetComponentCount {$IFNDEF MSWINDOWS}name '_ColorListBox_GetComponentCount'{$ENDIF},
  ColorListBox_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ColorListBox_GetComponentIndex'{$ENDIF},
  ColorListBox_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ColorListBox_SetComponentIndex'{$ENDIF},
  ColorListBox_GetOwner {$IFNDEF MSWINDOWS}name '_ColorListBox_GetOwner'{$ENDIF},
  ColorListBox_GetName {$IFNDEF MSWINDOWS}name '_ColorListBox_GetName'{$ENDIF},
  ColorListBox_SetName {$IFNDEF MSWINDOWS}name '_ColorListBox_SetName'{$ENDIF},
  ColorListBox_GetTag {$IFNDEF MSWINDOWS}name '_ColorListBox_GetTag'{$ENDIF},
  ColorListBox_SetTag {$IFNDEF MSWINDOWS}name '_ColorListBox_SetTag'{$ENDIF},
  ColorListBox_GetColors {$IFNDEF MSWINDOWS}name '_ColorListBox_GetColors'{$ENDIF},
  ColorListBox_GetColorNames {$IFNDEF MSWINDOWS}name '_ColorListBox_GetColorNames'{$ENDIF},
  ColorListBox_GetControls {$IFNDEF MSWINDOWS}name '_ColorListBox_GetControls'{$ENDIF},
  ColorListBox_GetComponents {$IFNDEF MSWINDOWS}name '_ColorListBox_GetComponents'{$ENDIF};

