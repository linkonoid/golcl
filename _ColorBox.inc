
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ColorBox_Create(AOwner: TComponent): TColorBox; cdecl;
begin
  Result :=  TColorBox.Create(AOwner);
end;

procedure ColorBox_Free(AObj: TColorBox); cdecl;
begin
  AObj.Free;
end;

procedure ColorBox_AddItem(AObj: TColorBox; Item: PWideChar; AObject: TObject); cdecl;
begin
  AObj.AddItem(Item, AObject);
end;

procedure ColorBox_Clear(AObj: TColorBox); cdecl;
begin
  AObj.Clear;
end;

procedure ColorBox_ClearSelection(AObj: TColorBox); cdecl;
begin
  AObj.ClearSelection;
end;

procedure ColorBox_DeleteSelected(AObj: TColorBox); cdecl;
begin
  AObj.DeleteSelected;
end;

function ColorBox_Focused(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

procedure ColorBox_SelectAll(AObj: TColorBox); cdecl;
begin
  AObj.SelectAll;
end;

function ColorBox_CanFocus(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure ColorBox_FlipChildren(AObj: TColorBox; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ColorBox_HandleAllocated(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ColorBox_Invalidate(AObj: TColorBox); cdecl;
begin
  AObj.Invalidate;
end;

procedure ColorBox_Realign(AObj: TColorBox); cdecl;
begin
  AObj.Realign;
end;

procedure ColorBox_Repaint(AObj: TColorBox); cdecl;
begin
  AObj.Repaint;
end;

procedure ColorBox_ScaleBy(AObj: TColorBox; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ColorBox_SetBounds(AObj: TColorBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ColorBox_SetFocus(AObj: TColorBox); cdecl;
begin
  AObj.SetFocus;
end;

procedure ColorBox_Update(AObj: TColorBox); cdecl;
begin
  AObj.Update;
end;

procedure ColorBox_BringToFront(AObj: TColorBox); cdecl;
begin
  AObj.BringToFront;
end;

function ColorBox_HasParent(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ColorBox_Hide(AObj: TColorBox); cdecl;
begin
  AObj.Hide;
end;

function ColorBox_Perform(AObj: TColorBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ColorBox_Refresh(AObj: TColorBox); cdecl;
begin
  AObj.Refresh;
end;

procedure ColorBox_SendToBack(AObj: TColorBox); cdecl;
begin
  AObj.SendToBack;
end;

procedure ColorBox_Show(AObj: TColorBox); cdecl;
begin
  AObj.Show;
end;

function ColorBox_GetTextBuf(AObj: TColorBox; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function ColorBox_FindComponent(AObj: TColorBox; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ColorBox_GetNamePath(AObj: TColorBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure ColorBox_Assign(AObj: TColorBox; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ColorBox_ClassName(AObj: TColorBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function ColorBox_Equals(AObj: TColorBox; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ColorBox_GetHashCode(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ColorBox_ToString(AObj: TColorBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ColorBox_GetAlign(AObj: TColorBox): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure ColorBox_SetAlign(AObj: TColorBox; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function ColorBox_GetAutoComplete(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.AutoComplete;
end;

procedure ColorBox_SetAutoComplete(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.AutoComplete := AValue;
end;

function ColorBox_GetAutoDropDown(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.AutoDropDown;
end;

procedure ColorBox_SetAutoDropDown(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.AutoDropDown := AValue;
end;

function ColorBox_GetDefaultColorColor(AObj: TColorBox): TColor; cdecl;
begin
  Result :=  AObj.DefaultColorColor;
end;

procedure ColorBox_SetDefaultColorColor(AObj: TColorBox; AValue: TColor); cdecl;
begin
  AObj.DefaultColorColor := AValue;
end;

function ColorBox_GetNoneColorColor(AObj: TColorBox): TColor; cdecl;
begin
  Result :=  AObj.NoneColorColor;
end;

procedure ColorBox_SetNoneColorColor(AObj: TColorBox; AValue: TColor); cdecl;
begin
  AObj.NoneColorColor := AValue;
end;

function ColorBox_GetSelected(AObj: TColorBox): TColor; cdecl;
begin
  Result :=  AObj.Selected;
end;

procedure ColorBox_SetSelected(AObj: TColorBox; AValue: TColor); cdecl;
begin
  AObj.Selected := AValue;
end;

function ColorBox_GetStyle(AObj: TColorBox): TColorBoxStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure ColorBox_SetStyle(AObj: TColorBox; AValue: TColorBoxStyle); cdecl;
begin
  AObj.Style := AValue;
end;

function ColorBox_GetAnchors(AObj: TColorBox): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ColorBox_SetAnchors(AObj: TColorBox; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function ColorBox_GetBevelEdges(AObj: TColorBox): TBevelEdges; cdecl;
begin
  Result :=  AObj.BevelEdges;
end;

procedure ColorBox_SetBevelEdges(AObj: TColorBox; AValue: TBevelEdges); cdecl;
begin
  AObj.BevelEdges := AValue;
end;

function ColorBox_GetBevelInner(AObj: TColorBox): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelInner;
end;

procedure ColorBox_SetBevelInner(AObj: TColorBox; AValue: TBevelCut); cdecl;
begin
  AObj.BevelInner := AValue;
end;

function ColorBox_GetBevelKind(AObj: TColorBox): TBevelKind; cdecl;
begin
  Result :=  AObj.BevelKind;
end;

procedure ColorBox_SetBevelKind(AObj: TColorBox; AValue: TBevelKind); cdecl;
begin
  AObj.BevelKind := AValue;
end;

function ColorBox_GetBevelOuter(AObj: TColorBox): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelOuter;
end;

procedure ColorBox_SetBevelOuter(AObj: TColorBox; AValue: TBevelCut); cdecl;
begin
  AObj.BevelOuter := AValue;
end;

function ColorBox_GetBiDiMode(AObj: TColorBox): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ColorBox_SetBiDiMode(AObj: TColorBox; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ColorBox_GetColor(AObj: TColorBox): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure ColorBox_SetColor(AObj: TColorBox; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function ColorBox_GetDoubleBuffered(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ColorBox_SetDoubleBuffered(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ColorBox_GetDropDownCount(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.DropDownCount;
end;

procedure ColorBox_SetDropDownCount(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.DropDownCount := AValue;
end;

function ColorBox_GetEnabled(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ColorBox_SetEnabled(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function ColorBox_GetFont(AObj: TColorBox): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure ColorBox_SetFont(AObj: TColorBox; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function ColorBox_GetItemHeight(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ItemHeight;
end;

procedure ColorBox_SetItemHeight(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.ItemHeight := AValue;
end;

function ColorBox_GetParentColor(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ColorBox_SetParentColor(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function ColorBox_GetParentCtl3D(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure ColorBox_SetParentCtl3D(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.ParentCtl3D := AValue;
end;

function ColorBox_GetParentDoubleBuffered(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure ColorBox_SetParentDoubleBuffered(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function ColorBox_GetParentFont(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ColorBox_SetParentFont(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function ColorBox_GetParentShowHint(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ColorBox_SetParentShowHint(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ColorBox_GetPopupMenu(AObj: TColorBox): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ColorBox_SetPopupMenu(AObj: TColorBox; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ColorBox_GetShowHint(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ColorBox_SetShowHint(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function ColorBox_GetTabOrder(AObj: TColorBox): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ColorBox_SetTabOrder(AObj: TColorBox; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function ColorBox_GetTabStop(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ColorBox_SetTabStop(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function ColorBox_GetVisible(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ColorBox_SetVisible(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function ColorBox_GetStyleElements(AObj: TColorBox): TStyleElements; cdecl;
begin
  Result :=  AObj.StyleElements;
end;

procedure ColorBox_SetStyleElements(AObj: TColorBox; AValue: TStyleElements); cdecl;
begin
  AObj.StyleElements := AValue;
end;

procedure ColorBox_SetOnChange(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

procedure ColorBox_SetOnClick(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

procedure ColorBox_SetOnEnter(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

procedure ColorBox_SetOnExit(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

procedure ColorBox_SetOnKeyDown(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

procedure ColorBox_SetOnKeyPress(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

procedure ColorBox_SetOnKeyUp(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

procedure ColorBox_SetOnMouseEnter(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

procedure ColorBox_SetOnMouseLeave(AObj: TColorBox; AEventId: NativeUInt); stdcall
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

function ColorBox_GetAutoCompleteDelay(AObj: TColorBox): Cardinal; cdecl;
begin
  Result :=  AObj.AutoCompleteDelay;
end;

procedure ColorBox_SetAutoCompleteDelay(AObj: TColorBox; AValue: Cardinal); cdecl;
begin
  AObj.AutoCompleteDelay := AValue;
end;

function ColorBox_GetAutoCloseUp(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.AutoCloseUp;
end;

procedure ColorBox_SetAutoCloseUp(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.AutoCloseUp := AValue;
end;

function ColorBox_GetSelText(AObj: TColorBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.SelText);
end;

procedure ColorBox_SetSelText(AObj: TColorBox; AValue: PWideChar); cdecl;
begin
  AObj.SelText := AValue;
end;

function ColorBox_GetTextHint(AObj: TColorBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.TextHint);
end;

procedure ColorBox_SetTextHint(AObj: TColorBox; AValue: PWideChar); cdecl;
begin
  AObj.TextHint := AValue;
end;

function ColorBox_GetCanvas(AObj: TColorBox): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function ColorBox_GetDroppedDown(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.DroppedDown;
end;

procedure ColorBox_SetDroppedDown(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.DroppedDown := AValue;
end;

function ColorBox_GetItems(AObj: TColorBox): TStrings; cdecl;
begin
  Result :=  AObj.Items;
end;

procedure ColorBox_SetItems(AObj: TColorBox; AValue: TStrings); cdecl;
begin
  AObj.Items := AValue;
end;

function ColorBox_GetSelLength(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.SelLength;
end;

procedure ColorBox_SetSelLength(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.SelLength := AValue;
end;

function ColorBox_GetSelStart(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.SelStart;
end;

procedure ColorBox_SetSelStart(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.SelStart := AValue;
end;

function ColorBox_GetItemIndex(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ItemIndex;
end;

procedure ColorBox_SetItemIndex(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.ItemIndex := AValue;
end;

function ColorBox_GetBrush(AObj: TColorBox): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function ColorBox_GetControlCount(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ColorBox_GetHandle(AObj: TColorBox): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function ColorBox_GetParentWindow(AObj: TColorBox): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ColorBox_SetParentWindow(AObj: TColorBox; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ColorBox_GetAction(AObj: TColorBox): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure ColorBox_SetAction(AObj: TColorBox; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure ColorBox_GetBoundsRect(AObj: TColorBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ColorBox_SetBoundsRect(AObj: TColorBox; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ColorBox_GetClientHeight(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ColorBox_SetClientHeight(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ColorBox_GetClientRect(AObj: TColorBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ColorBox_GetClientWidth(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ColorBox_SetClientWidth(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function ColorBox_GetExplicitLeft(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function ColorBox_GetExplicitTop(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function ColorBox_GetExplicitWidth(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function ColorBox_GetExplicitHeight(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

function ColorBox_GetParent(AObj: TColorBox): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ColorBox_SetParent(AObj: TColorBox; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function ColorBox_GetAlignWithMargins(AObj: TColorBox): LongBool; cdecl;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure ColorBox_SetAlignWithMargins(AObj: TColorBox; AValue: LongBool); cdecl;
begin
  AObj.AlignWithMargins := AValue;
end;

function ColorBox_GetLeft(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ColorBox_SetLeft(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ColorBox_GetTop(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ColorBox_SetTop(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ColorBox_GetWidth(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ColorBox_SetWidth(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function ColorBox_GetHeight(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ColorBox_SetHeight(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function ColorBox_GetCursor(AObj: TColorBox): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ColorBox_SetCursor(AObj: TColorBox; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function ColorBox_GetHint(AObj: TColorBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure ColorBox_SetHint(AObj: TColorBox; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function ColorBox_GetMargins(AObj: TColorBox): TMargins; cdecl;
begin
  Result :=  AObj.Margins;
end;

procedure ColorBox_SetMargins(AObj: TColorBox; AValue: TMargins); cdecl;
begin
  AObj.Margins := AValue;
end;

function ColorBox_GetComponentCount(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ColorBox_GetComponentIndex(AObj: TColorBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ColorBox_SetComponentIndex(AObj: TColorBox; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ColorBox_GetOwner(AObj: TColorBox): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ColorBox_GetName(AObj: TColorBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ColorBox_SetName(AObj: TColorBox; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ColorBox_GetTag(AObj: TColorBox): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ColorBox_SetTag(AObj: TColorBox; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ColorBox_GetColors(AObj: TColorBox; Index: Integer): TColor; cdecl;
begin
  Result :=  AObj.Colors[Index];
end;

function ColorBox_GetColorNames(AObj: TColorBox; Index: Integer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ColorNames[Index]);
end;

function ColorBox_GetControls(AObj: TColorBox; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ColorBox_GetComponents(AObj: TColorBox; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ColorBox_Create {$IFNDEF MSWINDOWS}name '_ColorBox_Create'{$ENDIF},
  ColorBox_Free {$IFNDEF MSWINDOWS}name '_ColorBox_Free'{$ENDIF},
  ColorBox_AddItem {$IFNDEF MSWINDOWS}name '_ColorBox_AddItem'{$ENDIF},
  ColorBox_Clear {$IFNDEF MSWINDOWS}name '_ColorBox_Clear'{$ENDIF},
  ColorBox_ClearSelection {$IFNDEF MSWINDOWS}name '_ColorBox_ClearSelection'{$ENDIF},
  ColorBox_DeleteSelected {$IFNDEF MSWINDOWS}name '_ColorBox_DeleteSelected'{$ENDIF},
  ColorBox_Focused {$IFNDEF MSWINDOWS}name '_ColorBox_Focused'{$ENDIF},
  ColorBox_SelectAll {$IFNDEF MSWINDOWS}name '_ColorBox_SelectAll'{$ENDIF},
  ColorBox_CanFocus {$IFNDEF MSWINDOWS}name '_ColorBox_CanFocus'{$ENDIF},
  ColorBox_FlipChildren {$IFNDEF MSWINDOWS}name '_ColorBox_FlipChildren'{$ENDIF},
  ColorBox_HandleAllocated {$IFNDEF MSWINDOWS}name '_ColorBox_HandleAllocated'{$ENDIF},
  ColorBox_Invalidate {$IFNDEF MSWINDOWS}name '_ColorBox_Invalidate'{$ENDIF},
  ColorBox_Realign {$IFNDEF MSWINDOWS}name '_ColorBox_Realign'{$ENDIF},
  ColorBox_Repaint {$IFNDEF MSWINDOWS}name '_ColorBox_Repaint'{$ENDIF},
  ColorBox_ScaleBy {$IFNDEF MSWINDOWS}name '_ColorBox_ScaleBy'{$ENDIF},
  ColorBox_SetBounds {$IFNDEF MSWINDOWS}name '_ColorBox_SetBounds'{$ENDIF},
  ColorBox_SetFocus {$IFNDEF MSWINDOWS}name '_ColorBox_SetFocus'{$ENDIF},
  ColorBox_Update {$IFNDEF MSWINDOWS}name '_ColorBox_Update'{$ENDIF},
  ColorBox_BringToFront {$IFNDEF MSWINDOWS}name '_ColorBox_BringToFront'{$ENDIF},
  ColorBox_HasParent {$IFNDEF MSWINDOWS}name '_ColorBox_HasParent'{$ENDIF},
  ColorBox_Hide {$IFNDEF MSWINDOWS}name '_ColorBox_Hide'{$ENDIF},
  ColorBox_Perform {$IFNDEF MSWINDOWS}name '_ColorBox_Perform'{$ENDIF},
  ColorBox_Refresh {$IFNDEF MSWINDOWS}name '_ColorBox_Refresh'{$ENDIF},
  ColorBox_SendToBack {$IFNDEF MSWINDOWS}name '_ColorBox_SendToBack'{$ENDIF},
  ColorBox_Show {$IFNDEF MSWINDOWS}name '_ColorBox_Show'{$ENDIF},
  ColorBox_GetTextBuf {$IFNDEF MSWINDOWS}name '_ColorBox_GetTextBuf'{$ENDIF},
  ColorBox_FindComponent {$IFNDEF MSWINDOWS}name '_ColorBox_FindComponent'{$ENDIF},
  ColorBox_GetNamePath {$IFNDEF MSWINDOWS}name '_ColorBox_GetNamePath'{$ENDIF},
  ColorBox_Assign {$IFNDEF MSWINDOWS}name '_ColorBox_Assign'{$ENDIF},
  ColorBox_ClassName {$IFNDEF MSWINDOWS}name '_ColorBox_ClassName'{$ENDIF},
  ColorBox_Equals {$IFNDEF MSWINDOWS}name '_ColorBox_Equals'{$ENDIF},
  ColorBox_GetHashCode {$IFNDEF MSWINDOWS}name '_ColorBox_GetHashCode'{$ENDIF},
  ColorBox_ToString {$IFNDEF MSWINDOWS}name '_ColorBox_ToString'{$ENDIF},
  ColorBox_GetAlign {$IFNDEF MSWINDOWS}name '_ColorBox_GetAlign'{$ENDIF},
  ColorBox_SetAlign {$IFNDEF MSWINDOWS}name '_ColorBox_SetAlign'{$ENDIF},
  ColorBox_GetAutoComplete {$IFNDEF MSWINDOWS}name '_ColorBox_GetAutoComplete'{$ENDIF},
  ColorBox_SetAutoComplete {$IFNDEF MSWINDOWS}name '_ColorBox_SetAutoComplete'{$ENDIF},
  ColorBox_GetAutoDropDown {$IFNDEF MSWINDOWS}name '_ColorBox_GetAutoDropDown'{$ENDIF},
  ColorBox_SetAutoDropDown {$IFNDEF MSWINDOWS}name '_ColorBox_SetAutoDropDown'{$ENDIF},
  ColorBox_GetDefaultColorColor {$IFNDEF MSWINDOWS}name '_ColorBox_GetDefaultColorColor'{$ENDIF},
  ColorBox_SetDefaultColorColor {$IFNDEF MSWINDOWS}name '_ColorBox_SetDefaultColorColor'{$ENDIF},
  ColorBox_GetNoneColorColor {$IFNDEF MSWINDOWS}name '_ColorBox_GetNoneColorColor'{$ENDIF},
  ColorBox_SetNoneColorColor {$IFNDEF MSWINDOWS}name '_ColorBox_SetNoneColorColor'{$ENDIF},
  ColorBox_GetSelected {$IFNDEF MSWINDOWS}name '_ColorBox_GetSelected'{$ENDIF},
  ColorBox_SetSelected {$IFNDEF MSWINDOWS}name '_ColorBox_SetSelected'{$ENDIF},
  ColorBox_GetStyle {$IFNDEF MSWINDOWS}name '_ColorBox_GetStyle'{$ENDIF},
  ColorBox_SetStyle {$IFNDEF MSWINDOWS}name '_ColorBox_SetStyle'{$ENDIF},
  ColorBox_GetAnchors {$IFNDEF MSWINDOWS}name '_ColorBox_GetAnchors'{$ENDIF},
  ColorBox_SetAnchors {$IFNDEF MSWINDOWS}name '_ColorBox_SetAnchors'{$ENDIF},
  ColorBox_GetBevelEdges {$IFNDEF MSWINDOWS}name '_ColorBox_GetBevelEdges'{$ENDIF},
  ColorBox_SetBevelEdges {$IFNDEF MSWINDOWS}name '_ColorBox_SetBevelEdges'{$ENDIF},
  ColorBox_GetBevelInner {$IFNDEF MSWINDOWS}name '_ColorBox_GetBevelInner'{$ENDIF},
  ColorBox_SetBevelInner {$IFNDEF MSWINDOWS}name '_ColorBox_SetBevelInner'{$ENDIF},
  ColorBox_GetBevelKind {$IFNDEF MSWINDOWS}name '_ColorBox_GetBevelKind'{$ENDIF},
  ColorBox_SetBevelKind {$IFNDEF MSWINDOWS}name '_ColorBox_SetBevelKind'{$ENDIF},
  ColorBox_GetBevelOuter {$IFNDEF MSWINDOWS}name '_ColorBox_GetBevelOuter'{$ENDIF},
  ColorBox_SetBevelOuter {$IFNDEF MSWINDOWS}name '_ColorBox_SetBevelOuter'{$ENDIF},
  ColorBox_GetBiDiMode {$IFNDEF MSWINDOWS}name '_ColorBox_GetBiDiMode'{$ENDIF},
  ColorBox_SetBiDiMode {$IFNDEF MSWINDOWS}name '_ColorBox_SetBiDiMode'{$ENDIF},
  ColorBox_GetColor {$IFNDEF MSWINDOWS}name '_ColorBox_GetColor'{$ENDIF},
  ColorBox_SetColor {$IFNDEF MSWINDOWS}name '_ColorBox_SetColor'{$ENDIF},
  ColorBox_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ColorBox_GetDoubleBuffered'{$ENDIF},
  ColorBox_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ColorBox_SetDoubleBuffered'{$ENDIF},
  ColorBox_GetDropDownCount {$IFNDEF MSWINDOWS}name '_ColorBox_GetDropDownCount'{$ENDIF},
  ColorBox_SetDropDownCount {$IFNDEF MSWINDOWS}name '_ColorBox_SetDropDownCount'{$ENDIF},
  ColorBox_GetEnabled {$IFNDEF MSWINDOWS}name '_ColorBox_GetEnabled'{$ENDIF},
  ColorBox_SetEnabled {$IFNDEF MSWINDOWS}name '_ColorBox_SetEnabled'{$ENDIF},
  ColorBox_GetFont {$IFNDEF MSWINDOWS}name '_ColorBox_GetFont'{$ENDIF},
  ColorBox_SetFont {$IFNDEF MSWINDOWS}name '_ColorBox_SetFont'{$ENDIF},
  ColorBox_GetItemHeight {$IFNDEF MSWINDOWS}name '_ColorBox_GetItemHeight'{$ENDIF},
  ColorBox_SetItemHeight {$IFNDEF MSWINDOWS}name '_ColorBox_SetItemHeight'{$ENDIF},
  ColorBox_GetParentColor {$IFNDEF MSWINDOWS}name '_ColorBox_GetParentColor'{$ENDIF},
  ColorBox_SetParentColor {$IFNDEF MSWINDOWS}name '_ColorBox_SetParentColor'{$ENDIF},
  ColorBox_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_ColorBox_GetParentCtl3D'{$ENDIF},
  ColorBox_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_ColorBox_SetParentCtl3D'{$ENDIF},
  ColorBox_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ColorBox_GetParentDoubleBuffered'{$ENDIF},
  ColorBox_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ColorBox_SetParentDoubleBuffered'{$ENDIF},
  ColorBox_GetParentFont {$IFNDEF MSWINDOWS}name '_ColorBox_GetParentFont'{$ENDIF},
  ColorBox_SetParentFont {$IFNDEF MSWINDOWS}name '_ColorBox_SetParentFont'{$ENDIF},
  ColorBox_GetParentShowHint {$IFNDEF MSWINDOWS}name '_ColorBox_GetParentShowHint'{$ENDIF},
  ColorBox_SetParentShowHint {$IFNDEF MSWINDOWS}name '_ColorBox_SetParentShowHint'{$ENDIF},
  ColorBox_GetPopupMenu {$IFNDEF MSWINDOWS}name '_ColorBox_GetPopupMenu'{$ENDIF},
  ColorBox_SetPopupMenu {$IFNDEF MSWINDOWS}name '_ColorBox_SetPopupMenu'{$ENDIF},
  ColorBox_GetShowHint {$IFNDEF MSWINDOWS}name '_ColorBox_GetShowHint'{$ENDIF},
  ColorBox_SetShowHint {$IFNDEF MSWINDOWS}name '_ColorBox_SetShowHint'{$ENDIF},
  ColorBox_GetTabOrder {$IFNDEF MSWINDOWS}name '_ColorBox_GetTabOrder'{$ENDIF},
  ColorBox_SetTabOrder {$IFNDEF MSWINDOWS}name '_ColorBox_SetTabOrder'{$ENDIF},
  ColorBox_GetTabStop {$IFNDEF MSWINDOWS}name '_ColorBox_GetTabStop'{$ENDIF},
  ColorBox_SetTabStop {$IFNDEF MSWINDOWS}name '_ColorBox_SetTabStop'{$ENDIF},
  ColorBox_GetVisible {$IFNDEF MSWINDOWS}name '_ColorBox_GetVisible'{$ENDIF},
  ColorBox_SetVisible {$IFNDEF MSWINDOWS}name '_ColorBox_SetVisible'{$ENDIF},
  ColorBox_GetStyleElements {$IFNDEF MSWINDOWS}name '_ColorBox_GetStyleElements'{$ENDIF},
  ColorBox_SetStyleElements {$IFNDEF MSWINDOWS}name '_ColorBox_SetStyleElements'{$ENDIF},
  ColorBox_SetOnChange {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnChange'{$ENDIF},
  ColorBox_SetOnClick {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnClick'{$ENDIF},
  ColorBox_SetOnEnter {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnEnter'{$ENDIF},
  ColorBox_SetOnExit {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnExit'{$ENDIF},
  ColorBox_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnKeyDown'{$ENDIF},
  ColorBox_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnKeyPress'{$ENDIF},
  ColorBox_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnKeyUp'{$ENDIF},
  ColorBox_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnMouseEnter'{$ENDIF},
  ColorBox_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_ColorBox_SetOnMouseLeave'{$ENDIF},
  ColorBox_GetAutoCompleteDelay {$IFNDEF MSWINDOWS}name '_ColorBox_GetAutoCompleteDelay'{$ENDIF},
  ColorBox_SetAutoCompleteDelay {$IFNDEF MSWINDOWS}name '_ColorBox_SetAutoCompleteDelay'{$ENDIF},
  ColorBox_GetAutoCloseUp {$IFNDEF MSWINDOWS}name '_ColorBox_GetAutoCloseUp'{$ENDIF},
  ColorBox_SetAutoCloseUp {$IFNDEF MSWINDOWS}name '_ColorBox_SetAutoCloseUp'{$ENDIF},
  ColorBox_GetSelText {$IFNDEF MSWINDOWS}name '_ColorBox_GetSelText'{$ENDIF},
  ColorBox_SetSelText {$IFNDEF MSWINDOWS}name '_ColorBox_SetSelText'{$ENDIF},
  ColorBox_GetTextHint {$IFNDEF MSWINDOWS}name '_ColorBox_GetTextHint'{$ENDIF},
  ColorBox_SetTextHint {$IFNDEF MSWINDOWS}name '_ColorBox_SetTextHint'{$ENDIF},
  ColorBox_GetCanvas {$IFNDEF MSWINDOWS}name '_ColorBox_GetCanvas'{$ENDIF},
  ColorBox_GetDroppedDown {$IFNDEF MSWINDOWS}name '_ColorBox_GetDroppedDown'{$ENDIF},
  ColorBox_SetDroppedDown {$IFNDEF MSWINDOWS}name '_ColorBox_SetDroppedDown'{$ENDIF},
  ColorBox_GetItems {$IFNDEF MSWINDOWS}name '_ColorBox_GetItems'{$ENDIF},
  ColorBox_SetItems {$IFNDEF MSWINDOWS}name '_ColorBox_SetItems'{$ENDIF},
  ColorBox_GetSelLength {$IFNDEF MSWINDOWS}name '_ColorBox_GetSelLength'{$ENDIF},
  ColorBox_SetSelLength {$IFNDEF MSWINDOWS}name '_ColorBox_SetSelLength'{$ENDIF},
  ColorBox_GetSelStart {$IFNDEF MSWINDOWS}name '_ColorBox_GetSelStart'{$ENDIF},
  ColorBox_SetSelStart {$IFNDEF MSWINDOWS}name '_ColorBox_SetSelStart'{$ENDIF},
  ColorBox_GetItemIndex {$IFNDEF MSWINDOWS}name '_ColorBox_GetItemIndex'{$ENDIF},
  ColorBox_SetItemIndex {$IFNDEF MSWINDOWS}name '_ColorBox_SetItemIndex'{$ENDIF},
  ColorBox_GetBrush {$IFNDEF MSWINDOWS}name '_ColorBox_GetBrush'{$ENDIF},
  ColorBox_GetControlCount {$IFNDEF MSWINDOWS}name '_ColorBox_GetControlCount'{$ENDIF},
  ColorBox_GetHandle {$IFNDEF MSWINDOWS}name '_ColorBox_GetHandle'{$ENDIF},
  ColorBox_GetParentWindow {$IFNDEF MSWINDOWS}name '_ColorBox_GetParentWindow'{$ENDIF},
  ColorBox_SetParentWindow {$IFNDEF MSWINDOWS}name '_ColorBox_SetParentWindow'{$ENDIF},
  ColorBox_GetAction {$IFNDEF MSWINDOWS}name '_ColorBox_GetAction'{$ENDIF},
  ColorBox_SetAction {$IFNDEF MSWINDOWS}name '_ColorBox_SetAction'{$ENDIF},
  ColorBox_GetBoundsRect {$IFNDEF MSWINDOWS}name '_ColorBox_GetBoundsRect'{$ENDIF},
  ColorBox_SetBoundsRect {$IFNDEF MSWINDOWS}name '_ColorBox_SetBoundsRect'{$ENDIF},
  ColorBox_GetClientHeight {$IFNDEF MSWINDOWS}name '_ColorBox_GetClientHeight'{$ENDIF},
  ColorBox_SetClientHeight {$IFNDEF MSWINDOWS}name '_ColorBox_SetClientHeight'{$ENDIF},
  ColorBox_GetClientRect {$IFNDEF MSWINDOWS}name '_ColorBox_GetClientRect'{$ENDIF},
  ColorBox_GetClientWidth {$IFNDEF MSWINDOWS}name '_ColorBox_GetClientWidth'{$ENDIF},
  ColorBox_SetClientWidth {$IFNDEF MSWINDOWS}name '_ColorBox_SetClientWidth'{$ENDIF},
  ColorBox_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_ColorBox_GetExplicitLeft'{$ENDIF},
  ColorBox_GetExplicitTop {$IFNDEF MSWINDOWS}name '_ColorBox_GetExplicitTop'{$ENDIF},
  ColorBox_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_ColorBox_GetExplicitWidth'{$ENDIF},
  ColorBox_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_ColorBox_GetExplicitHeight'{$ENDIF},
  ColorBox_GetParent {$IFNDEF MSWINDOWS}name '_ColorBox_GetParent'{$ENDIF},
  ColorBox_SetParent {$IFNDEF MSWINDOWS}name '_ColorBox_SetParent'{$ENDIF},
  ColorBox_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ColorBox_GetAlignWithMargins'{$ENDIF},
  ColorBox_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ColorBox_SetAlignWithMargins'{$ENDIF},
  ColorBox_GetLeft {$IFNDEF MSWINDOWS}name '_ColorBox_GetLeft'{$ENDIF},
  ColorBox_SetLeft {$IFNDEF MSWINDOWS}name '_ColorBox_SetLeft'{$ENDIF},
  ColorBox_GetTop {$IFNDEF MSWINDOWS}name '_ColorBox_GetTop'{$ENDIF},
  ColorBox_SetTop {$IFNDEF MSWINDOWS}name '_ColorBox_SetTop'{$ENDIF},
  ColorBox_GetWidth {$IFNDEF MSWINDOWS}name '_ColorBox_GetWidth'{$ENDIF},
  ColorBox_SetWidth {$IFNDEF MSWINDOWS}name '_ColorBox_SetWidth'{$ENDIF},
  ColorBox_GetHeight {$IFNDEF MSWINDOWS}name '_ColorBox_GetHeight'{$ENDIF},
  ColorBox_SetHeight {$IFNDEF MSWINDOWS}name '_ColorBox_SetHeight'{$ENDIF},
  ColorBox_GetCursor {$IFNDEF MSWINDOWS}name '_ColorBox_GetCursor'{$ENDIF},
  ColorBox_SetCursor {$IFNDEF MSWINDOWS}name '_ColorBox_SetCursor'{$ENDIF},
  ColorBox_GetHint {$IFNDEF MSWINDOWS}name '_ColorBox_GetHint'{$ENDIF},
  ColorBox_SetHint {$IFNDEF MSWINDOWS}name '_ColorBox_SetHint'{$ENDIF},
  ColorBox_GetMargins {$IFNDEF MSWINDOWS}name '_ColorBox_GetMargins'{$ENDIF},
  ColorBox_SetMargins {$IFNDEF MSWINDOWS}name '_ColorBox_SetMargins'{$ENDIF},
  ColorBox_GetComponentCount {$IFNDEF MSWINDOWS}name '_ColorBox_GetComponentCount'{$ENDIF},
  ColorBox_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ColorBox_GetComponentIndex'{$ENDIF},
  ColorBox_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ColorBox_SetComponentIndex'{$ENDIF},
  ColorBox_GetOwner {$IFNDEF MSWINDOWS}name '_ColorBox_GetOwner'{$ENDIF},
  ColorBox_GetName {$IFNDEF MSWINDOWS}name '_ColorBox_GetName'{$ENDIF},
  ColorBox_SetName {$IFNDEF MSWINDOWS}name '_ColorBox_SetName'{$ENDIF},
  ColorBox_GetTag {$IFNDEF MSWINDOWS}name '_ColorBox_GetTag'{$ENDIF},
  ColorBox_SetTag {$IFNDEF MSWINDOWS}name '_ColorBox_SetTag'{$ENDIF},
  ColorBox_GetColors {$IFNDEF MSWINDOWS}name '_ColorBox_GetColors'{$ENDIF},
  ColorBox_GetColorNames {$IFNDEF MSWINDOWS}name '_ColorBox_GetColorNames'{$ENDIF},
  ColorBox_GetControls {$IFNDEF MSWINDOWS}name '_ColorBox_GetControls'{$ENDIF},
  ColorBox_GetComponents {$IFNDEF MSWINDOWS}name '_ColorBox_GetComponents'{$ENDIF};

