
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ComboBox_Create(AOwner: TComponent): TComboBox; cdecl;
begin
  Result :=  TComboBox.Create(AOwner);
end;

procedure ComboBox_Free(AObj: TComboBox); cdecl;
begin
  AObj.Free;
end;

procedure ComboBox_AddItem(AObj: TComboBox; Item: PWideChar; AObject: TObject); cdecl;
begin
  AObj.AddItem(Item, AObject);
end;

procedure ComboBox_Clear(AObj: TComboBox); cdecl;
begin
  AObj.Clear;
end;

procedure ComboBox_ClearSelection(AObj: TComboBox); cdecl;
begin
  AObj.ClearSelection;
end;

//procedure ComboBox_DeleteSelected(AObj: TComboBox); cdecl;
//begin
//  AObj.DeleteSelected;
//end;

function ComboBox_Focused(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

procedure ComboBox_SelectAll(AObj: TComboBox); cdecl;
begin
  AObj.SelectAll;
end;

function ComboBox_CanFocus(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure ComboBox_FlipChildren(AObj: TComboBox; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ComboBox_HandleAllocated(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ComboBox_Invalidate(AObj: TComboBox); cdecl;
begin
  AObj.Invalidate;
end;

procedure ComboBox_Realign(AObj: TComboBox); cdecl;
begin
  AObj.Realign;
end;

procedure ComboBox_Repaint(AObj: TComboBox); cdecl;
begin
  AObj.Repaint;
end;

procedure ComboBox_ScaleBy(AObj: TComboBox; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ComboBox_SetBounds(AObj: TComboBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ComboBox_SetFocus(AObj: TComboBox); cdecl;
begin
  AObj.SetFocus;
end;

procedure ComboBox_Update(AObj: TComboBox); cdecl;
begin
  AObj.Update;
end;

procedure ComboBox_BringToFront(AObj: TComboBox); cdecl;
begin
  AObj.BringToFront;
end;

function ComboBox_HasParent(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ComboBox_Hide(AObj: TComboBox); cdecl;
begin
  AObj.Hide;
end;

function ComboBox_Perform(AObj: TComboBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ComboBox_Refresh(AObj: TComboBox); cdecl;
begin
  AObj.Refresh;
end;

procedure ComboBox_SendToBack(AObj: TComboBox); cdecl;
begin
  AObj.SendToBack;
end;

procedure ComboBox_Show(AObj: TComboBox); cdecl;
begin
  AObj.Show;
end;

function ComboBox_GetTextBuf(AObj: TComboBox; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function ComboBox_FindComponent(AObj: TComboBox; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ComboBox_GetNamePath(AObj: TComboBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure ComboBox_Assign(AObj: TComboBox; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ComboBox_ClassName(AObj: TComboBox): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ComboBox_Equals(AObj: TComboBox; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ComboBox_GetHashCode(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ComboBox_ToString(AObj: TComboBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ComboBox_GetAlign(AObj: TComboBox): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure ComboBox_SetAlign(AObj: TComboBox; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function ComboBox_GetAutoComplete(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.AutoComplete;
end;

procedure ComboBox_SetAutoComplete(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.AutoComplete := AValue;
end;

//function ComboBox_GetAutoCompleteDelay(AObj: TComboBox): Cardinal; cdecl;
//begin
//  Result :=  AObj.AutoCompleteDelay;
//end;
//
//procedure ComboBox_SetAutoCompleteDelay(AObj: TComboBox; AValue: Cardinal); cdecl;
//begin
//  AObj.AutoCompleteDelay := AValue;
//end;

function ComboBox_GetAutoDropDown(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.AutoDropDown;
end;

procedure ComboBox_SetAutoDropDown(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.AutoDropDown := AValue;
end;

//function ComboBox_GetAutoCloseUp(AObj: TComboBox): LongBool; cdecl;
//begin
//  Result :=  AObj.AutoCloseUp;
//end;
//
//procedure ComboBox_SetAutoCloseUp(AObj: TComboBox; AValue: LongBool); cdecl;
//begin
//  AObj.AutoCloseUp := AValue;
//end;
//
//function ComboBox_GetBevelEdges(AObj: TComboBox): TBevelEdges; cdecl;
//begin
//  Result :=  AObj.BevelEdges;
//end;
//
//procedure ComboBox_SetBevelEdges(AObj: TComboBox; AValue: TBevelEdges); cdecl;
//begin
//  AObj.BevelEdges := AValue;
//end;
//
//function ComboBox_GetBevelInner(AObj: TComboBox): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelInner;
//end;

//procedure ComboBox_SetBevelInner(AObj: TComboBox; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelInner := AValue;
//end;
//
//function ComboBox_GetBevelKind(AObj: TComboBox): TBevelKind; cdecl;
//begin
//  Result :=  AObj.BevelKind;
//end;
//
//procedure ComboBox_SetBevelKind(AObj: TComboBox; AValue: TBevelKind); cdecl;
//begin
//  AObj.BevelKind := AValue;
//end;
//
//function ComboBox_GetBevelOuter(AObj: TComboBox): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelOuter;
//end;
//
//procedure ComboBox_SetBevelOuter(AObj: TComboBox; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelOuter := AValue;
//end;

function ComboBox_GetStyle(AObj: TComboBox): TComboBoxStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure ComboBox_SetStyle(AObj: TComboBox; AValue: TComboBoxStyle); cdecl;
begin
  AObj.Style := AValue;
end;

function ComboBox_GetAnchors(AObj: TComboBox): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ComboBox_SetAnchors(AObj: TComboBox; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function ComboBox_GetBiDiMode(AObj: TComboBox): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ComboBox_SetBiDiMode(AObj: TComboBox; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ComboBox_GetColor(AObj: TComboBox): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure ComboBox_SetColor(AObj: TComboBox; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function ComboBox_GetDoubleBuffered(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ComboBox_SetDoubleBuffered(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ComboBox_GetDropDownCount(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.DropDownCount;
end;

procedure ComboBox_SetDropDownCount(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.DropDownCount := AValue;
end;

function ComboBox_GetEnabled(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ComboBox_SetEnabled(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function ComboBox_GetFont(AObj: TComboBox): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure ComboBox_SetFont(AObj: TComboBox; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function ComboBox_GetItemHeight(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.ItemHeight;
end;

procedure ComboBox_SetItemHeight(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.ItemHeight := AValue;
end;

function ComboBox_GetItemIndex(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.ItemIndex;
end;

procedure ComboBox_SetItemIndex(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.ItemIndex := AValue;
end;

function ComboBox_GetMaxLength(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.MaxLength;
end;

procedure ComboBox_SetMaxLength(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.MaxLength := AValue;
end;

function ComboBox_GetParentColor(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ComboBox_SetParentColor(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function ComboBox_GetParentCtl3D(AObj: TComboBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentCtl3D;
//end;
//
//procedure ComboBox_SetParentCtl3D(AObj: TComboBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentCtl3D := AValue;
//end;
//
//function ComboBox_GetParentDoubleBuffered(AObj: TComboBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure ComboBox_SetParentDoubleBuffered(AObj: TComboBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function ComboBox_GetParentFont(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ComboBox_SetParentFont(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function ComboBox_GetParentShowHint(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ComboBox_SetParentShowHint(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ComboBox_GetPopupMenu(AObj: TComboBox): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ComboBox_SetPopupMenu(AObj: TComboBox; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ComboBox_GetShowHint(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ComboBox_SetShowHint(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function ComboBox_GetSorted(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.Sorted;
end;

procedure ComboBox_SetSorted(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.Sorted := AValue;
end;

function ComboBox_GetTabOrder(AObj: TComboBox): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ComboBox_SetTabOrder(AObj: TComboBox; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function ComboBox_GetTabStop(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ComboBox_SetTabStop(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function ComboBox_GetText(AObj: TComboBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Text);
end;

procedure ComboBox_SetText(AObj: TComboBox; AValue: PWideChar); cdecl;
begin
  AObj.Text := AValue;
end;

//function ComboBox_GetTextHint(AObj: TComboBox): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.TextHint);
//end;
//
//procedure ComboBox_SetTextHint(AObj: TComboBox; AValue: PWideChar); cdecl;
//begin
//  AObj.TextHint := AValue;
//end;

function ComboBox_GetVisible(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ComboBox_SetVisible(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function ComboBox_GetStyleElements(AObj: TComboBox): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure ComboBox_SetStyleElements(AObj: TComboBox; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure ComboBox_SetOnChange(AObj: TComboBox; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, geChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.OnChange;
  TEventClass.Add(AObj, geChange, AEventId);
end;

procedure ComboBox_SetOnClick(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

procedure ComboBox_SetOnDblClick(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

procedure ComboBox_SetOnEnter(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

procedure ComboBox_SetOnExit(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

procedure ComboBox_SetOnKeyDown(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

procedure ComboBox_SetOnKeyPress(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

procedure ComboBox_SetOnKeyUp(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

procedure ComboBox_SetOnMouseEnter(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

procedure ComboBox_SetOnMouseLeave(AObj: TComboBox; AEventId: NativeUInt); stdcall;
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

function ComboBox_GetItems(AObj: TComboBox): TStrings; cdecl;
begin
  Result :=  AObj.Items;
end;

procedure ComboBox_SetItems(AObj: TComboBox; AValue: TStrings); cdecl;
begin
  AObj.Items := AValue;
end;

function ComboBox_GetSelText(AObj: TComboBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.SelText);
end;

procedure ComboBox_SetSelText(AObj: TComboBox; AValue: PWideChar); cdecl;
begin
  AObj.SelText := AValue;
end;

function ComboBox_GetCanvas(AObj: TComboBox): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function ComboBox_GetDroppedDown(AObj: TComboBox): LongBool; cdecl;
begin
  Result :=  AObj.DroppedDown;
end;

procedure ComboBox_SetDroppedDown(AObj: TComboBox; AValue: LongBool); cdecl;
begin
  AObj.DroppedDown := AValue;
end;

function ComboBox_GetSelLength(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.SelLength;
end;

procedure ComboBox_SetSelLength(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.SelLength := AValue;
end;

function ComboBox_GetSelStart(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.SelStart;
end;

procedure ComboBox_SetSelStart(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.SelStart := AValue;
end;

function ComboBox_GetBrush(AObj: TComboBox): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function ComboBox_GetControlCount(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ComboBox_GetHandle(AObj: TComboBox): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function ComboBox_GetParentWindow(AObj: TComboBox): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ComboBox_SetParentWindow(AObj: TComboBox; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ComboBox_GetAction(AObj: TComboBox): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure ComboBox_SetAction(AObj: TComboBox; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure ComboBox_GetBoundsRect(AObj: TComboBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ComboBox_SetBoundsRect(AObj: TComboBox; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ComboBox_GetClientHeight(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ComboBox_SetClientHeight(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ComboBox_GetClientRect(AObj: TComboBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ComboBox_GetClientWidth(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ComboBox_SetClientWidth(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function ComboBox_GetExplicitLeft(AObj: TComboBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function ComboBox_GetExplicitTop(AObj: TComboBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function ComboBox_GetExplicitWidth(AObj: TComboBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function ComboBox_GetExplicitHeight(AObj: TComboBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function ComboBox_GetParent(AObj: TComboBox): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ComboBox_SetParent(AObj: TComboBox; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function ComboBox_GetAlignWithMargins(AObj: TComboBox): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure ComboBox_SetAlignWithMargins(AObj: TComboBox; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function ComboBox_GetLeft(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ComboBox_SetLeft(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ComboBox_GetTop(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ComboBox_SetTop(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ComboBox_GetWidth(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ComboBox_SetWidth(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function ComboBox_GetHeight(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ComboBox_SetHeight(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function ComboBox_GetCursor(AObj: TComboBox): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ComboBox_SetCursor(AObj: TComboBox; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function ComboBox_GetHint(AObj: TComboBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure ComboBox_SetHint(AObj: TComboBox; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function ComboBox_GetMargins(AObj: TComboBox): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure ComboBox_SetMargins(AObj: TComboBox; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function ComboBox_GetComponentCount(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ComboBox_GetComponentIndex(AObj: TComboBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ComboBox_SetComponentIndex(AObj: TComboBox; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ComboBox_GetOwner(AObj: TComboBox): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ComboBox_GetName(AObj: TComboBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ComboBox_SetName(AObj: TComboBox; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ComboBox_GetTag(AObj: TComboBox): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ComboBox_SetTag(AObj: TComboBox; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ComboBox_GetControls(AObj: TComboBox; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ComboBox_GetComponents(AObj: TComboBox; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ComboBox_Create {$IFNDEF MSWINDOWS}name '_ComboBox_Create'{$ENDIF},
  ComboBox_Free {$IFNDEF MSWINDOWS}name '_ComboBox_Free'{$ENDIF},
  ComboBox_AddItem {$IFNDEF MSWINDOWS}name '_ComboBox_AddItem'{$ENDIF},
  ComboBox_Clear {$IFNDEF MSWINDOWS}name '_ComboBox_Clear'{$ENDIF},
  ComboBox_ClearSelection {$IFNDEF MSWINDOWS}name '_ComboBox_ClearSelection'{$ENDIF},
  //ComboBox_DeleteSelected {$IFNDEF MSWINDOWS}name '_ComboBox_DeleteSelected'{$ENDIF},
  ComboBox_Focused {$IFNDEF MSWINDOWS}name '_ComboBox_Focused'{$ENDIF},
  ComboBox_SelectAll {$IFNDEF MSWINDOWS}name '_ComboBox_SelectAll'{$ENDIF},
  ComboBox_CanFocus {$IFNDEF MSWINDOWS}name '_ComboBox_CanFocus'{$ENDIF},
  ComboBox_FlipChildren {$IFNDEF MSWINDOWS}name '_ComboBox_FlipChildren'{$ENDIF},
  ComboBox_HandleAllocated {$IFNDEF MSWINDOWS}name '_ComboBox_HandleAllocated'{$ENDIF},
  ComboBox_Invalidate {$IFNDEF MSWINDOWS}name '_ComboBox_Invalidate'{$ENDIF},
  ComboBox_Realign {$IFNDEF MSWINDOWS}name '_ComboBox_Realign'{$ENDIF},
  ComboBox_Repaint {$IFNDEF MSWINDOWS}name '_ComboBox_Repaint'{$ENDIF},
  ComboBox_ScaleBy {$IFNDEF MSWINDOWS}name '_ComboBox_ScaleBy'{$ENDIF},
  ComboBox_SetBounds {$IFNDEF MSWINDOWS}name '_ComboBox_SetBounds'{$ENDIF},
  ComboBox_SetFocus {$IFNDEF MSWINDOWS}name '_ComboBox_SetFocus'{$ENDIF},
  ComboBox_Update {$IFNDEF MSWINDOWS}name '_ComboBox_Update'{$ENDIF},
  ComboBox_BringToFront {$IFNDEF MSWINDOWS}name '_ComboBox_BringToFront'{$ENDIF},
  ComboBox_HasParent {$IFNDEF MSWINDOWS}name '_ComboBox_HasParent'{$ENDIF},
  ComboBox_Hide {$IFNDEF MSWINDOWS}name '_ComboBox_Hide'{$ENDIF},
  ComboBox_Perform {$IFNDEF MSWINDOWS}name '_ComboBox_Perform'{$ENDIF},
  ComboBox_Refresh {$IFNDEF MSWINDOWS}name '_ComboBox_Refresh'{$ENDIF},
  ComboBox_SendToBack {$IFNDEF MSWINDOWS}name '_ComboBox_SendToBack'{$ENDIF},
  ComboBox_Show {$IFNDEF MSWINDOWS}name '_ComboBox_Show'{$ENDIF},
  ComboBox_GetTextBuf {$IFNDEF MSWINDOWS}name '_ComboBox_GetTextBuf'{$ENDIF},
  ComboBox_FindComponent {$IFNDEF MSWINDOWS}name '_ComboBox_FindComponent'{$ENDIF},
  ComboBox_GetNamePath {$IFNDEF MSWINDOWS}name '_ComboBox_GetNamePath'{$ENDIF},
  ComboBox_Assign {$IFNDEF MSWINDOWS}name '_ComboBox_Assign'{$ENDIF},
  ComboBox_ClassName {$IFNDEF MSWINDOWS}name '_ComboBox_ClassName'{$ENDIF},
  ComboBox_Equals {$IFNDEF MSWINDOWS}name '_ComboBox_Equals'{$ENDIF},
  ComboBox_GetHashCode {$IFNDEF MSWINDOWS}name '_ComboBox_GetHashCode'{$ENDIF},
  ComboBox_ToString {$IFNDEF MSWINDOWS}name '_ComboBox_ToString'{$ENDIF},
  ComboBox_GetAlign {$IFNDEF MSWINDOWS}name '_ComboBox_GetAlign'{$ENDIF},
  ComboBox_SetAlign {$IFNDEF MSWINDOWS}name '_ComboBox_SetAlign'{$ENDIF},
  ComboBox_GetAutoComplete {$IFNDEF MSWINDOWS}name '_ComboBox_GetAutoComplete'{$ENDIF},
  ComboBox_SetAutoComplete {$IFNDEF MSWINDOWS}name '_ComboBox_SetAutoComplete'{$ENDIF},
  //ComboBox_GetAutoCompleteDelay {$IFNDEF MSWINDOWS}name '_ComboBox_GetAutoCompleteDelay'{$ENDIF},
  //ComboBox_SetAutoCompleteDelay {$IFNDEF MSWINDOWS}name '_ComboBox_SetAutoCompleteDelay'{$ENDIF},
  ComboBox_GetAutoDropDown {$IFNDEF MSWINDOWS}name '_ComboBox_GetAutoDropDown'{$ENDIF},
  ComboBox_SetAutoDropDown {$IFNDEF MSWINDOWS}name '_ComboBox_SetAutoDropDown'{$ENDIF},
  //ComboBox_GetAutoCloseUp {$IFNDEF MSWINDOWS}name '_ComboBox_GetAutoCloseUp'{$ENDIF},
  //ComboBox_SetAutoCloseUp {$IFNDEF MSWINDOWS}name '_ComboBox_SetAutoCloseUp'{$ENDIF},
  //ComboBox_GetBevelEdges {$IFNDEF MSWINDOWS}name '_ComboBox_GetBevelEdges'{$ENDIF},
  //ComboBox_SetBevelEdges {$IFNDEF MSWINDOWS}name '_ComboBox_SetBevelEdges'{$ENDIF},
  //ComboBox_GetBevelInner {$IFNDEF MSWINDOWS}name '_ComboBox_GetBevelInner'{$ENDIF},
  //ComboBox_SetBevelInner {$IFNDEF MSWINDOWS}name '_ComboBox_SetBevelInner'{$ENDIF},
  //ComboBox_GetBevelKind {$IFNDEF MSWINDOWS}name '_ComboBox_GetBevelKind'{$ENDIF},
  //ComboBox_SetBevelKind {$IFNDEF MSWINDOWS}name '_ComboBox_SetBevelKind'{$ENDIF},
  //ComboBox_GetBevelOuter {$IFNDEF MSWINDOWS}name '_ComboBox_GetBevelOuter'{$ENDIF},
  //ComboBox_SetBevelOuter {$IFNDEF MSWINDOWS}name '_ComboBox_SetBevelOuter'{$ENDIF},
  ComboBox_GetStyle {$IFNDEF MSWINDOWS}name '_ComboBox_GetStyle'{$ENDIF},
  ComboBox_SetStyle {$IFNDEF MSWINDOWS}name '_ComboBox_SetStyle'{$ENDIF},
  ComboBox_GetAnchors {$IFNDEF MSWINDOWS}name '_ComboBox_GetAnchors'{$ENDIF},
  ComboBox_SetAnchors {$IFNDEF MSWINDOWS}name '_ComboBox_SetAnchors'{$ENDIF},
  ComboBox_GetBiDiMode {$IFNDEF MSWINDOWS}name '_ComboBox_GetBiDiMode'{$ENDIF},
  ComboBox_SetBiDiMode {$IFNDEF MSWINDOWS}name '_ComboBox_SetBiDiMode'{$ENDIF},
  ComboBox_GetColor {$IFNDEF MSWINDOWS}name '_ComboBox_GetColor'{$ENDIF},
  ComboBox_SetColor {$IFNDEF MSWINDOWS}name '_ComboBox_SetColor'{$ENDIF},
  ComboBox_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ComboBox_GetDoubleBuffered'{$ENDIF},
  ComboBox_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ComboBox_SetDoubleBuffered'{$ENDIF},
  ComboBox_GetDropDownCount {$IFNDEF MSWINDOWS}name '_ComboBox_GetDropDownCount'{$ENDIF},
  ComboBox_SetDropDownCount {$IFNDEF MSWINDOWS}name '_ComboBox_SetDropDownCount'{$ENDIF},
  ComboBox_GetEnabled {$IFNDEF MSWINDOWS}name '_ComboBox_GetEnabled'{$ENDIF},
  ComboBox_SetEnabled {$IFNDEF MSWINDOWS}name '_ComboBox_SetEnabled'{$ENDIF},
  ComboBox_GetFont {$IFNDEF MSWINDOWS}name '_ComboBox_GetFont'{$ENDIF},
  ComboBox_SetFont {$IFNDEF MSWINDOWS}name '_ComboBox_SetFont'{$ENDIF},
  ComboBox_GetItemHeight {$IFNDEF MSWINDOWS}name '_ComboBox_GetItemHeight'{$ENDIF},
  ComboBox_SetItemHeight {$IFNDEF MSWINDOWS}name '_ComboBox_SetItemHeight'{$ENDIF},
  ComboBox_GetItemIndex {$IFNDEF MSWINDOWS}name '_ComboBox_GetItemIndex'{$ENDIF},
  ComboBox_SetItemIndex {$IFNDEF MSWINDOWS}name '_ComboBox_SetItemIndex'{$ENDIF},
  ComboBox_GetMaxLength {$IFNDEF MSWINDOWS}name '_ComboBox_GetMaxLength'{$ENDIF},
  ComboBox_SetMaxLength {$IFNDEF MSWINDOWS}name '_ComboBox_SetMaxLength'{$ENDIF},
  ComboBox_GetParentColor {$IFNDEF MSWINDOWS}name '_ComboBox_GetParentColor'{$ENDIF},
  ComboBox_SetParentColor {$IFNDEF MSWINDOWS}name '_ComboBox_SetParentColor'{$ENDIF},
  //ComboBox_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_ComboBox_GetParentCtl3D'{$ENDIF},
  //ComboBox_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_ComboBox_SetParentCtl3D'{$ENDIF},
  //ComboBox_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ComboBox_GetParentDoubleBuffered'{$ENDIF},
  //ComboBox_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ComboBox_SetParentDoubleBuffered'{$ENDIF},
  ComboBox_GetParentFont {$IFNDEF MSWINDOWS}name '_ComboBox_GetParentFont'{$ENDIF},
  ComboBox_SetParentFont {$IFNDEF MSWINDOWS}name '_ComboBox_SetParentFont'{$ENDIF},
  ComboBox_GetParentShowHint {$IFNDEF MSWINDOWS}name '_ComboBox_GetParentShowHint'{$ENDIF},
  ComboBox_SetParentShowHint {$IFNDEF MSWINDOWS}name '_ComboBox_SetParentShowHint'{$ENDIF},
  ComboBox_GetPopupMenu {$IFNDEF MSWINDOWS}name '_ComboBox_GetPopupMenu'{$ENDIF},
  ComboBox_SetPopupMenu {$IFNDEF MSWINDOWS}name '_ComboBox_SetPopupMenu'{$ENDIF},
  ComboBox_GetShowHint {$IFNDEF MSWINDOWS}name '_ComboBox_GetShowHint'{$ENDIF},
  ComboBox_SetShowHint {$IFNDEF MSWINDOWS}name '_ComboBox_SetShowHint'{$ENDIF},
  ComboBox_GetSorted {$IFNDEF MSWINDOWS}name '_ComboBox_GetSorted'{$ENDIF},
  ComboBox_SetSorted {$IFNDEF MSWINDOWS}name '_ComboBox_SetSorted'{$ENDIF},
  ComboBox_GetTabOrder {$IFNDEF MSWINDOWS}name '_ComboBox_GetTabOrder'{$ENDIF},
  ComboBox_SetTabOrder {$IFNDEF MSWINDOWS}name '_ComboBox_SetTabOrder'{$ENDIF},
  ComboBox_GetTabStop {$IFNDEF MSWINDOWS}name '_ComboBox_GetTabStop'{$ENDIF},
  ComboBox_SetTabStop {$IFNDEF MSWINDOWS}name '_ComboBox_SetTabStop'{$ENDIF},
  ComboBox_GetText {$IFNDEF MSWINDOWS}name '_ComboBox_GetText'{$ENDIF},
  ComboBox_SetText {$IFNDEF MSWINDOWS}name '_ComboBox_SetText'{$ENDIF},
  //ComboBox_GetTextHint {$IFNDEF MSWINDOWS}name '_ComboBox_GetTextHint'{$ENDIF},
  //ComboBox_SetTextHint {$IFNDEF MSWINDOWS}name '_ComboBox_SetTextHint'{$ENDIF},
  ComboBox_GetVisible {$IFNDEF MSWINDOWS}name '_ComboBox_GetVisible'{$ENDIF},
  ComboBox_SetVisible {$IFNDEF MSWINDOWS}name '_ComboBox_SetVisible'{$ENDIF},
  //ComboBox_GetStyleElements {$IFNDEF MSWINDOWS}name '_ComboBox_GetStyleElements'{$ENDIF},
  //ComboBox_SetStyleElements {$IFNDEF MSWINDOWS}name '_ComboBox_SetStyleElements'{$ENDIF},
  ComboBox_SetOnChange {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnChange'{$ENDIF},
  ComboBox_SetOnClick {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnClick'{$ENDIF},
  ComboBox_SetOnDblClick {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnDblClick'{$ENDIF},
  ComboBox_SetOnEnter {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnEnter'{$ENDIF},
  ComboBox_SetOnExit {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnExit'{$ENDIF},
  ComboBox_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnKeyDown'{$ENDIF},
  ComboBox_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnKeyPress'{$ENDIF},
  ComboBox_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnKeyUp'{$ENDIF},
  ComboBox_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnMouseEnter'{$ENDIF},
  ComboBox_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_ComboBox_SetOnMouseLeave'{$ENDIF},
  ComboBox_GetItems {$IFNDEF MSWINDOWS}name '_ComboBox_GetItems'{$ENDIF},
  ComboBox_SetItems {$IFNDEF MSWINDOWS}name '_ComboBox_SetItems'{$ENDIF},
  ComboBox_GetSelText {$IFNDEF MSWINDOWS}name '_ComboBox_GetSelText'{$ENDIF},
  ComboBox_SetSelText {$IFNDEF MSWINDOWS}name '_ComboBox_SetSelText'{$ENDIF},
  ComboBox_GetCanvas {$IFNDEF MSWINDOWS}name '_ComboBox_GetCanvas'{$ENDIF},
  ComboBox_GetDroppedDown {$IFNDEF MSWINDOWS}name '_ComboBox_GetDroppedDown'{$ENDIF},
  ComboBox_SetDroppedDown {$IFNDEF MSWINDOWS}name '_ComboBox_SetDroppedDown'{$ENDIF},
  ComboBox_GetSelLength {$IFNDEF MSWINDOWS}name '_ComboBox_GetSelLength'{$ENDIF},
  ComboBox_SetSelLength {$IFNDEF MSWINDOWS}name '_ComboBox_SetSelLength'{$ENDIF},
  ComboBox_GetSelStart {$IFNDEF MSWINDOWS}name '_ComboBox_GetSelStart'{$ENDIF},
  ComboBox_SetSelStart {$IFNDEF MSWINDOWS}name '_ComboBox_SetSelStart'{$ENDIF},
  ComboBox_GetBrush {$IFNDEF MSWINDOWS}name '_ComboBox_GetBrush'{$ENDIF},
  ComboBox_GetControlCount {$IFNDEF MSWINDOWS}name '_ComboBox_GetControlCount'{$ENDIF},
  ComboBox_GetHandle {$IFNDEF MSWINDOWS}name '_ComboBox_GetHandle'{$ENDIF},
  ComboBox_GetParentWindow {$IFNDEF MSWINDOWS}name '_ComboBox_GetParentWindow'{$ENDIF},
  ComboBox_SetParentWindow {$IFNDEF MSWINDOWS}name '_ComboBox_SetParentWindow'{$ENDIF},
  ComboBox_GetAction {$IFNDEF MSWINDOWS}name '_ComboBox_GetAction'{$ENDIF},
  ComboBox_SetAction {$IFNDEF MSWINDOWS}name '_ComboBox_SetAction'{$ENDIF},
  ComboBox_GetBoundsRect {$IFNDEF MSWINDOWS}name '_ComboBox_GetBoundsRect'{$ENDIF},
  ComboBox_SetBoundsRect {$IFNDEF MSWINDOWS}name '_ComboBox_SetBoundsRect'{$ENDIF},
  ComboBox_GetClientHeight {$IFNDEF MSWINDOWS}name '_ComboBox_GetClientHeight'{$ENDIF},
  ComboBox_SetClientHeight {$IFNDEF MSWINDOWS}name '_ComboBox_SetClientHeight'{$ENDIF},
  ComboBox_GetClientRect {$IFNDEF MSWINDOWS}name '_ComboBox_GetClientRect'{$ENDIF},
  ComboBox_GetClientWidth {$IFNDEF MSWINDOWS}name '_ComboBox_GetClientWidth'{$ENDIF},
  ComboBox_SetClientWidth {$IFNDEF MSWINDOWS}name '_ComboBox_SetClientWidth'{$ENDIF},
  //ComboBox_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_ComboBox_GetExplicitLeft'{$ENDIF},
  //ComboBox_GetExplicitTop {$IFNDEF MSWINDOWS}name '_ComboBox_GetExplicitTop'{$ENDIF},
  //ComboBox_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_ComboBox_GetExplicitWidth'{$ENDIF},
  //ComboBox_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_ComboBox_GetExplicitHeight'{$ENDIF},
  ComboBox_GetParent {$IFNDEF MSWINDOWS}name '_ComboBox_GetParent'{$ENDIF},
  ComboBox_SetParent {$IFNDEF MSWINDOWS}name '_ComboBox_SetParent'{$ENDIF},
  //ComboBox_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ComboBox_GetAlignWithMargins'{$ENDIF},
  //ComboBox_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ComboBox_SetAlignWithMargins'{$ENDIF},
  ComboBox_GetLeft {$IFNDEF MSWINDOWS}name '_ComboBox_GetLeft'{$ENDIF},
  ComboBox_SetLeft {$IFNDEF MSWINDOWS}name '_ComboBox_SetLeft'{$ENDIF},
  ComboBox_GetTop {$IFNDEF MSWINDOWS}name '_ComboBox_GetTop'{$ENDIF},
  ComboBox_SetTop {$IFNDEF MSWINDOWS}name '_ComboBox_SetTop'{$ENDIF},
  ComboBox_GetWidth {$IFNDEF MSWINDOWS}name '_ComboBox_GetWidth'{$ENDIF},
  ComboBox_SetWidth {$IFNDEF MSWINDOWS}name '_ComboBox_SetWidth'{$ENDIF},
  ComboBox_GetHeight {$IFNDEF MSWINDOWS}name '_ComboBox_GetHeight'{$ENDIF},
  ComboBox_SetHeight {$IFNDEF MSWINDOWS}name '_ComboBox_SetHeight'{$ENDIF},
  ComboBox_GetCursor {$IFNDEF MSWINDOWS}name '_ComboBox_GetCursor'{$ENDIF},
  ComboBox_SetCursor {$IFNDEF MSWINDOWS}name '_ComboBox_SetCursor'{$ENDIF},
  ComboBox_GetHint {$IFNDEF MSWINDOWS}name '_ComboBox_GetHint'{$ENDIF},
  ComboBox_SetHint {$IFNDEF MSWINDOWS}name '_ComboBox_SetHint'{$ENDIF},
  //ComboBox_GetMargins {$IFNDEF MSWINDOWS}name '_ComboBox_GetMargins'{$ENDIF},
  //ComboBox_SetMargins {$IFNDEF MSWINDOWS}name '_ComboBox_SetMargins'{$ENDIF},
  ComboBox_GetComponentCount {$IFNDEF MSWINDOWS}name '_ComboBox_GetComponentCount'{$ENDIF},
  ComboBox_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ComboBox_GetComponentIndex'{$ENDIF},
  ComboBox_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ComboBox_SetComponentIndex'{$ENDIF},
  ComboBox_GetOwner {$IFNDEF MSWINDOWS}name '_ComboBox_GetOwner'{$ENDIF},
  ComboBox_GetName {$IFNDEF MSWINDOWS}name '_ComboBox_GetName'{$ENDIF},
  ComboBox_SetName {$IFNDEF MSWINDOWS}name '_ComboBox_SetName'{$ENDIF},
  ComboBox_GetTag {$IFNDEF MSWINDOWS}name '_ComboBox_GetTag'{$ENDIF},
  ComboBox_SetTag {$IFNDEF MSWINDOWS}name '_ComboBox_SetTag'{$ENDIF},
  ComboBox_GetControls {$IFNDEF MSWINDOWS}name '_ComboBox_GetControls'{$ENDIF},
  ComboBox_GetComponents {$IFNDEF MSWINDOWS}name '_ComboBox_GetComponents'{$ENDIF};

