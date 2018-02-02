
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Edit_Create(AOwner: TComponent): TEdit; cdecl;
begin
  Result :=  TEdit.Create(AOwner);
end;

procedure Edit_Free(AObj: TEdit); cdecl;
begin
  AObj.Free;
end;

procedure Edit_Clear(AObj: TEdit); cdecl;
begin
  AObj.Clear;
end;

procedure Edit_ClearSelection(AObj: TEdit); cdecl;
begin
  AObj.ClearSelection;
end;

procedure Edit_CopyToClipboard(AObj: TEdit); cdecl;
begin
  AObj.CopyToClipboard;
end;

procedure Edit_CutToClipboard(AObj: TEdit); cdecl;
begin
  AObj.CutToClipboard;
end;

procedure Edit_PasteFromClipboard(AObj: TEdit); cdecl;
begin
  AObj.PasteFromClipboard;
end;

procedure Edit_SelectAll(AObj: TEdit); cdecl;
begin
  AObj.SelectAll;
end;

function Edit_GetSelTextBuf(AObj: TEdit; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
//  Result :=  AObj.GetSelTextBuf(Buffer, BufSize);
end;

function Edit_CanFocus(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure Edit_FlipChildren(AObj: TEdit; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Edit_Focused(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function Edit_HandleAllocated(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Edit_Invalidate(AObj: TEdit); cdecl;
begin
  AObj.Invalidate;
end;

procedure Edit_Realign(AObj: TEdit); cdecl;
begin
  AObj.Realign;
end;

procedure Edit_Repaint(AObj: TEdit); cdecl;
begin
  AObj.Repaint;
end;

procedure Edit_ScaleBy(AObj: TEdit; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Edit_SetBounds(AObj: TEdit; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Edit_SetFocus(AObj: TEdit); cdecl;
begin
  AObj.SetFocus;
end;

procedure Edit_Update(AObj: TEdit); cdecl;
begin
  AObj.Update;
end;

procedure Edit_BringToFront(AObj: TEdit); cdecl;
begin
  AObj.BringToFront;
end;

function Edit_HasParent(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Edit_Hide(AObj: TEdit); cdecl;
begin
  AObj.Hide;
end;

function Edit_Perform(AObj: TEdit; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Edit_Refresh(AObj: TEdit); cdecl;
begin
  AObj.Refresh;
end;

procedure Edit_SendToBack(AObj: TEdit); cdecl;
begin
  AObj.SendToBack;
end;

procedure Edit_Show(AObj: TEdit); cdecl;
begin
  AObj.Show;
end;

function Edit_GetTextBuf(AObj: TEdit; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
//  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function Edit_FindComponent(AObj: TEdit; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Edit_GetNamePath(AObj: TEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Edit_Assign(AObj: TEdit; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Edit_ClassName(AObj: TEdit): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Edit_Equals(AObj: TEdit; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Edit_GetHashCode(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Edit_ToString(AObj: TEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Edit_GetAlign(AObj: TEdit): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Edit_SetAlign(AObj: TEdit; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Edit_GetAlignment(AObj: TEdit): TAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure Edit_SetAlignment(AObj: TEdit; AValue: TAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function Edit_GetAnchors(AObj: TEdit): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Edit_SetAnchors(AObj: TEdit; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function Edit_GetAutoSelect(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.AutoSelect;
end;

procedure Edit_SetAutoSelect(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.AutoSelect := AValue;
end;

function Edit_GetAutoSize(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Edit_SetAutoSize(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

//function Edit_GetBevelEdges(AObj: TEdit): TBevelEdges; cdecl;
//begin
//  Result :=  AObj.BevelEdges;
//end;
//
//procedure Edit_SetBevelEdges(AObj: TEdit; AValue: TBevelEdges); cdecl;
//begin
//  AObj.BevelEdges := AValue;
//end;

function Edit_GetBevelInner(AObj: TEdit): TBevelCut; cdecl;
begin
//  Result :=  AObj.BevelInner;
end;

procedure Edit_SetBevelInner(AObj: TEdit; AValue: TBevelCut); cdecl;
begin
//  AObj.BevelInner := AValue;
end;

//function Edit_GetBevelKind(AObj: TEdit): TBevelKind; cdecl;
//begin
//  Result :=  AObj.BevelKind;
//end;
//
//procedure Edit_SetBevelKind(AObj: TEdit; AValue: TBevelKind); cdecl;
//begin
//  AObj.BevelKind := AValue;
//end;

function Edit_GetBevelOuter(AObj: TEdit): TBevelCut; cdecl;
begin
//  Result :=  AObj.BevelOuter;
end;

procedure Edit_SetBevelOuter(AObj: TEdit; AValue: TBevelCut); cdecl;
begin
//  AObj.BevelOuter := AValue;
end;

function Edit_GetBiDiMode(AObj: TEdit): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Edit_SetBiDiMode(AObj: TEdit; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Edit_GetBorderStyle(AObj: TEdit): TBorderStyle; cdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure Edit_SetBorderStyle(AObj: TEdit; AValue: TBorderStyle); cdecl;
begin
  AObj.BorderStyle := AValue;
end;

function Edit_GetColor(AObj: TEdit): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Edit_SetColor(AObj: TEdit; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function Edit_GetDoubleBuffered(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Edit_SetDoubleBuffered(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function Edit_GetEnabled(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Edit_SetEnabled(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Edit_GetFont(AObj: TEdit): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure Edit_SetFont(AObj: TEdit; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function Edit_GetHideSelection(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.HideSelection;
end;

procedure Edit_SetHideSelection(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.HideSelection := AValue;
end;

function Edit_GetMaxLength(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.MaxLength;
end;

procedure Edit_SetMaxLength(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.MaxLength := AValue;
end;

function Edit_GetNumbersOnly(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.NumbersOnly;
end;

procedure Edit_SetNumbersOnly(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.NumbersOnly := AValue;
end;

function Edit_GetParentColor(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure Edit_SetParentColor(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function Edit_GetParentCtl3D(AObj: TEdit): LongBool; cdecl;
begin
//  Result :=  AObj.ParentCtl3D;
end;

procedure Edit_SetParentCtl3D(AObj: TEdit; AValue: LongBool); cdecl;
begin
//  AObj.ParentCtl3D := AValue;
end;

function Edit_GetParentDoubleBuffered(AObj: TEdit): LongBool; cdecl;
begin
//  Result :=  AObj.ParentDoubleBuffered;
end;

procedure Edit_SetParentDoubleBuffered(AObj: TEdit; AValue: LongBool); cdecl;
begin
//  AObj.ParentDoubleBuffered := AValue;
end;

function Edit_GetParentFont(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Edit_SetParentFont(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function Edit_GetParentShowHint(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Edit_SetParentShowHint(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Edit_GetPasswordChar(AObj: TEdit): Char; cdecl;
begin
  Result :=  AObj.PasswordChar;
end;

procedure Edit_SetPasswordChar(AObj: TEdit; AValue: Char); cdecl;
begin
  AObj.PasswordChar := AValue;
end;

function Edit_GetPopupMenu(AObj: TEdit): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Edit_SetPopupMenu(AObj: TEdit; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Edit_GetReadOnly(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.ReadOnly;
end;

procedure Edit_SetReadOnly(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.ReadOnly := AValue;
end;

function Edit_GetShowHint(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Edit_SetShowHint(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Edit_GetTabOrder(AObj: TEdit): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Edit_SetTabOrder(AObj: TEdit; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function Edit_GetTabStop(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Edit_SetTabStop(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function Edit_GetText(AObj: TEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Text);
end;

procedure Edit_SetText(AObj: TEdit; AValue: PWideChar); cdecl;
begin
  AObj.Text := AValue;
end;

function Edit_GetTextHint(AObj: TEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.TextHint);
end;

procedure Edit_SetTextHint(AObj: TEdit; AValue: PWideChar); cdecl;
begin
  AObj.TextHint := AValue;
end;

function Edit_GetVisible(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Edit_SetVisible(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function Edit_GetStyleElements(AObj: TEdit): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure Edit_SetStyleElements(AObj: TEdit; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure Edit_SetOnChange(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnClick(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnDblClick(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnEnter(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnExit(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnKeyDown(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnKeyPress(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnKeyUp(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnMouseDown(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnMouseEnter(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnMouseLeave(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnMouseMove(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

procedure Edit_SetOnMouseUp(AObj: TEdit; AEventId: NativeUInt); stdcall;
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

function Edit_GetModified(AObj: TEdit): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure Edit_SetModified(AObj: TEdit; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function Edit_GetSelLength(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.SelLength;
end;

procedure Edit_SetSelLength(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.SelLength := AValue;
end;

function Edit_GetSelStart(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.SelStart;
end;

procedure Edit_SetSelStart(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.SelStart := AValue;
end;

function Edit_GetSelText(AObj: TEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.SelText);
end;

procedure Edit_SetSelText(AObj: TEdit; AValue: PWideChar); cdecl;
begin
  AObj.SelText := AValue;
end;

function Edit_GetBrush(AObj: TEdit): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function Edit_GetControlCount(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Edit_GetHandle(AObj: TEdit): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function Edit_GetParentWindow(AObj: TEdit): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Edit_SetParentWindow(AObj: TEdit; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function Edit_GetAction(AObj: TEdit): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Edit_SetAction(AObj: TEdit; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure Edit_GetBoundsRect(AObj: TEdit; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Edit_SetBoundsRect(AObj: TEdit; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Edit_GetClientHeight(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Edit_SetClientHeight(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Edit_GetClientRect(AObj: TEdit; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Edit_GetClientWidth(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Edit_SetClientWidth(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function Edit_GetExplicitLeft(AObj: TEdit): Integer; cdecl;
begin
//  Result :=  AObj.ExplicitLeft;
end;

function Edit_GetExplicitTop(AObj: TEdit): Integer; cdecl;
begin
//  Result :=  AObj.ExplicitTop;
end;

function Edit_GetExplicitWidth(AObj: TEdit): Integer; cdecl;
begin
//  Result :=  AObj.ExplicitWidth;
end;

function Edit_GetExplicitHeight(AObj: TEdit): Integer; cdecl;
begin
//  Result :=  AObj.ExplicitHeight;
end;

function Edit_GetParent(AObj: TEdit): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Edit_SetParent(AObj: TEdit; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function Edit_GetAlignWithMargins(AObj: TEdit): LongBool; cdecl;
begin
//  Result :=  AObj.AlignWithMargins;
end;

procedure Edit_SetAlignWithMargins(AObj: TEdit; AValue: LongBool); cdecl;
begin
//  AObj.AlignWithMargins := AValue;
end;

function Edit_GetLeft(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Edit_SetLeft(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Edit_GetTop(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Edit_SetTop(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Edit_GetWidth(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Edit_SetWidth(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function Edit_GetHeight(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Edit_SetHeight(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Edit_GetCursor(AObj: TEdit): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Edit_SetCursor(AObj: TEdit; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Edit_GetHint(AObj: TEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Edit_SetHint(AObj: TEdit; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Edit_GetMargins(AObj: TEdit): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure Edit_SetMargins(AObj: TEdit; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Edit_GetComponentCount(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Edit_GetComponentIndex(AObj: TEdit): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Edit_SetComponentIndex(AObj: TEdit; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Edit_GetOwner(AObj: TEdit): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Edit_GetName(AObj: TEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Edit_SetName(AObj: TEdit; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Edit_GetTag(AObj: TEdit): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Edit_SetTag(AObj: TEdit; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Edit_GetControls(AObj: TEdit; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Edit_GetComponents(AObj: TEdit; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Edit_Create {$IFNDEF MSWINDOWS}name '_Edit_Create'{$ENDIF},
  Edit_Free {$IFNDEF MSWINDOWS}name '_Edit_Free'{$ENDIF},
  Edit_Clear {$IFNDEF MSWINDOWS}name '_Edit_Clear'{$ENDIF},
  Edit_ClearSelection {$IFNDEF MSWINDOWS}name '_Edit_ClearSelection'{$ENDIF},
  Edit_CopyToClipboard {$IFNDEF MSWINDOWS}name '_Edit_CopyToClipboard'{$ENDIF},
  Edit_CutToClipboard {$IFNDEF MSWINDOWS}name '_Edit_CutToClipboard'{$ENDIF},
  Edit_PasteFromClipboard {$IFNDEF MSWINDOWS}name '_Edit_PasteFromClipboard'{$ENDIF},
  Edit_SelectAll {$IFNDEF MSWINDOWS}name '_Edit_SelectAll'{$ENDIF},
  Edit_GetSelTextBuf {$IFNDEF MSWINDOWS}name '_Edit_GetSelTextBuf'{$ENDIF},
  Edit_CanFocus {$IFNDEF MSWINDOWS}name '_Edit_CanFocus'{$ENDIF},
  Edit_FlipChildren {$IFNDEF MSWINDOWS}name '_Edit_FlipChildren'{$ENDIF},
  Edit_Focused {$IFNDEF MSWINDOWS}name '_Edit_Focused'{$ENDIF},
  Edit_HandleAllocated {$IFNDEF MSWINDOWS}name '_Edit_HandleAllocated'{$ENDIF},
  Edit_Invalidate {$IFNDEF MSWINDOWS}name '_Edit_Invalidate'{$ENDIF},
  Edit_Realign {$IFNDEF MSWINDOWS}name '_Edit_Realign'{$ENDIF},
  Edit_Repaint {$IFNDEF MSWINDOWS}name '_Edit_Repaint'{$ENDIF},
  Edit_ScaleBy {$IFNDEF MSWINDOWS}name '_Edit_ScaleBy'{$ENDIF},
  Edit_SetBounds {$IFNDEF MSWINDOWS}name '_Edit_SetBounds'{$ENDIF},
  Edit_SetFocus {$IFNDEF MSWINDOWS}name '_Edit_SetFocus'{$ENDIF},
  Edit_Update {$IFNDEF MSWINDOWS}name '_Edit_Update'{$ENDIF},
  Edit_BringToFront {$IFNDEF MSWINDOWS}name '_Edit_BringToFront'{$ENDIF},
  Edit_HasParent {$IFNDEF MSWINDOWS}name '_Edit_HasParent'{$ENDIF},
  Edit_Hide {$IFNDEF MSWINDOWS}name '_Edit_Hide'{$ENDIF},
  Edit_Perform {$IFNDEF MSWINDOWS}name '_Edit_Perform'{$ENDIF},
  Edit_Refresh {$IFNDEF MSWINDOWS}name '_Edit_Refresh'{$ENDIF},
  Edit_SendToBack {$IFNDEF MSWINDOWS}name '_Edit_SendToBack'{$ENDIF},
  Edit_Show {$IFNDEF MSWINDOWS}name '_Edit_Show'{$ENDIF},
  Edit_GetTextBuf {$IFNDEF MSWINDOWS}name '_Edit_GetTextBuf'{$ENDIF},
  Edit_FindComponent {$IFNDEF MSWINDOWS}name '_Edit_FindComponent'{$ENDIF},
  Edit_GetNamePath {$IFNDEF MSWINDOWS}name '_Edit_GetNamePath'{$ENDIF},
  Edit_Assign {$IFNDEF MSWINDOWS}name '_Edit_Assign'{$ENDIF},
  Edit_ClassName {$IFNDEF MSWINDOWS}name '_Edit_ClassName'{$ENDIF},
  Edit_Equals {$IFNDEF MSWINDOWS}name '_Edit_Equals'{$ENDIF},
  Edit_GetHashCode {$IFNDEF MSWINDOWS}name '_Edit_GetHashCode'{$ENDIF},
  Edit_ToString {$IFNDEF MSWINDOWS}name '_Edit_ToString'{$ENDIF},
  Edit_GetAlign {$IFNDEF MSWINDOWS}name '_Edit_GetAlign'{$ENDIF},
  Edit_SetAlign {$IFNDEF MSWINDOWS}name '_Edit_SetAlign'{$ENDIF},
  Edit_GetAlignment {$IFNDEF MSWINDOWS}name '_Edit_GetAlignment'{$ENDIF},
  Edit_SetAlignment {$IFNDEF MSWINDOWS}name '_Edit_SetAlignment'{$ENDIF},
  Edit_GetAnchors {$IFNDEF MSWINDOWS}name '_Edit_GetAnchors'{$ENDIF},
  Edit_SetAnchors {$IFNDEF MSWINDOWS}name '_Edit_SetAnchors'{$ENDIF},
  Edit_GetAutoSelect {$IFNDEF MSWINDOWS}name '_Edit_GetAutoSelect'{$ENDIF},
  Edit_SetAutoSelect {$IFNDEF MSWINDOWS}name '_Edit_SetAutoSelect'{$ENDIF},
  Edit_GetAutoSize {$IFNDEF MSWINDOWS}name '_Edit_GetAutoSize'{$ENDIF},
  Edit_SetAutoSize {$IFNDEF MSWINDOWS}name '_Edit_SetAutoSize'{$ENDIF},
  //Edit_GetBevelEdges {$IFNDEF MSWINDOWS}name '_Edit_GetBevelEdges'{$ENDIF},
  //Edit_SetBevelEdges {$IFNDEF MSWINDOWS}name '_Edit_SetBevelEdges'{$ENDIF},
  Edit_GetBevelInner {$IFNDEF MSWINDOWS}name '_Edit_GetBevelInner'{$ENDIF},
  Edit_SetBevelInner {$IFNDEF MSWINDOWS}name '_Edit_SetBevelInner'{$ENDIF},
  //Edit_GetBevelKind {$IFNDEF MSWINDOWS}name '_Edit_GetBevelKind'{$ENDIF},
  //Edit_SetBevelKind {$IFNDEF MSWINDOWS}name '_Edit_SetBevelKind'{$ENDIF},
  Edit_GetBevelOuter {$IFNDEF MSWINDOWS}name '_Edit_GetBevelOuter'{$ENDIF},
  Edit_SetBevelOuter {$IFNDEF MSWINDOWS}name '_Edit_SetBevelOuter'{$ENDIF},
  Edit_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Edit_GetBiDiMode'{$ENDIF},
  Edit_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Edit_SetBiDiMode'{$ENDIF},
  Edit_GetBorderStyle {$IFNDEF MSWINDOWS}name '_Edit_GetBorderStyle'{$ENDIF},
  Edit_SetBorderStyle {$IFNDEF MSWINDOWS}name '_Edit_SetBorderStyle'{$ENDIF},
  Edit_GetColor {$IFNDEF MSWINDOWS}name '_Edit_GetColor'{$ENDIF},
  Edit_SetColor {$IFNDEF MSWINDOWS}name '_Edit_SetColor'{$ENDIF},
  Edit_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Edit_GetDoubleBuffered'{$ENDIF},
  Edit_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Edit_SetDoubleBuffered'{$ENDIF},
  Edit_GetEnabled {$IFNDEF MSWINDOWS}name '_Edit_GetEnabled'{$ENDIF},
  Edit_SetEnabled {$IFNDEF MSWINDOWS}name '_Edit_SetEnabled'{$ENDIF},
  Edit_GetFont {$IFNDEF MSWINDOWS}name '_Edit_GetFont'{$ENDIF},
  Edit_SetFont {$IFNDEF MSWINDOWS}name '_Edit_SetFont'{$ENDIF},
  Edit_GetHideSelection {$IFNDEF MSWINDOWS}name '_Edit_GetHideSelection'{$ENDIF},
  Edit_SetHideSelection {$IFNDEF MSWINDOWS}name '_Edit_SetHideSelection'{$ENDIF},
  Edit_GetMaxLength {$IFNDEF MSWINDOWS}name '_Edit_GetMaxLength'{$ENDIF},
  Edit_SetMaxLength {$IFNDEF MSWINDOWS}name '_Edit_SetMaxLength'{$ENDIF},
  Edit_GetNumbersOnly {$IFNDEF MSWINDOWS}name '_Edit_GetNumbersOnly'{$ENDIF},
  Edit_SetNumbersOnly {$IFNDEF MSWINDOWS}name '_Edit_SetNumbersOnly'{$ENDIF},
  Edit_GetParentColor {$IFNDEF MSWINDOWS}name '_Edit_GetParentColor'{$ENDIF},
  Edit_SetParentColor {$IFNDEF MSWINDOWS}name '_Edit_SetParentColor'{$ENDIF},
  Edit_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_Edit_GetParentCtl3D'{$ENDIF},
  Edit_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_Edit_SetParentCtl3D'{$ENDIF},
  Edit_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Edit_GetParentDoubleBuffered'{$ENDIF},
  Edit_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Edit_SetParentDoubleBuffered'{$ENDIF},
  Edit_GetParentFont {$IFNDEF MSWINDOWS}name '_Edit_GetParentFont'{$ENDIF},
  Edit_SetParentFont {$IFNDEF MSWINDOWS}name '_Edit_SetParentFont'{$ENDIF},
  Edit_GetParentShowHint {$IFNDEF MSWINDOWS}name '_Edit_GetParentShowHint'{$ENDIF},
  Edit_SetParentShowHint {$IFNDEF MSWINDOWS}name '_Edit_SetParentShowHint'{$ENDIF},
  Edit_GetPasswordChar {$IFNDEF MSWINDOWS}name '_Edit_GetPasswordChar'{$ENDIF},
  Edit_SetPasswordChar {$IFNDEF MSWINDOWS}name '_Edit_SetPasswordChar'{$ENDIF},
  Edit_GetPopupMenu {$IFNDEF MSWINDOWS}name '_Edit_GetPopupMenu'{$ENDIF},
  Edit_SetPopupMenu {$IFNDEF MSWINDOWS}name '_Edit_SetPopupMenu'{$ENDIF},
  Edit_GetReadOnly {$IFNDEF MSWINDOWS}name '_Edit_GetReadOnly'{$ENDIF},
  Edit_SetReadOnly {$IFNDEF MSWINDOWS}name '_Edit_SetReadOnly'{$ENDIF},
  Edit_GetShowHint {$IFNDEF MSWINDOWS}name '_Edit_GetShowHint'{$ENDIF},
  Edit_SetShowHint {$IFNDEF MSWINDOWS}name '_Edit_SetShowHint'{$ENDIF},
  Edit_GetTabOrder {$IFNDEF MSWINDOWS}name '_Edit_GetTabOrder'{$ENDIF},
  Edit_SetTabOrder {$IFNDEF MSWINDOWS}name '_Edit_SetTabOrder'{$ENDIF},
  Edit_GetTabStop {$IFNDEF MSWINDOWS}name '_Edit_GetTabStop'{$ENDIF},
  Edit_SetTabStop {$IFNDEF MSWINDOWS}name '_Edit_SetTabStop'{$ENDIF},
  Edit_GetText {$IFNDEF MSWINDOWS}name '_Edit_GetText'{$ENDIF},
  Edit_SetText {$IFNDEF MSWINDOWS}name '_Edit_SetText'{$ENDIF},
  Edit_GetTextHint {$IFNDEF MSWINDOWS}name '_Edit_GetTextHint'{$ENDIF},
  Edit_SetTextHint {$IFNDEF MSWINDOWS}name '_Edit_SetTextHint'{$ENDIF},
  Edit_GetVisible {$IFNDEF MSWINDOWS}name '_Edit_GetVisible'{$ENDIF},
  Edit_SetVisible {$IFNDEF MSWINDOWS}name '_Edit_SetVisible'{$ENDIF},
  //Edit_GetStyleElements {$IFNDEF MSWINDOWS}name '_Edit_GetStyleElements'{$ENDIF},
  //Edit_SetStyleElements {$IFNDEF MSWINDOWS}name '_Edit_SetStyleElements'{$ENDIF},
  Edit_SetOnChange {$IFNDEF MSWINDOWS}name '_Edit_SetOnChange'{$ENDIF},
  Edit_SetOnClick {$IFNDEF MSWINDOWS}name '_Edit_SetOnClick'{$ENDIF},
  Edit_SetOnDblClick {$IFNDEF MSWINDOWS}name '_Edit_SetOnDblClick'{$ENDIF},
  Edit_SetOnEnter {$IFNDEF MSWINDOWS}name '_Edit_SetOnEnter'{$ENDIF},
  Edit_SetOnExit {$IFNDEF MSWINDOWS}name '_Edit_SetOnExit'{$ENDIF},
  Edit_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_Edit_SetOnKeyDown'{$ENDIF},
  Edit_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_Edit_SetOnKeyPress'{$ENDIF},
  Edit_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_Edit_SetOnKeyUp'{$ENDIF},
  Edit_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_Edit_SetOnMouseDown'{$ENDIF},
  Edit_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_Edit_SetOnMouseEnter'{$ENDIF},
  Edit_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_Edit_SetOnMouseLeave'{$ENDIF},
  Edit_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_Edit_SetOnMouseMove'{$ENDIF},
  Edit_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_Edit_SetOnMouseUp'{$ENDIF},
  Edit_GetModified {$IFNDEF MSWINDOWS}name '_Edit_GetModified'{$ENDIF},
  Edit_SetModified {$IFNDEF MSWINDOWS}name '_Edit_SetModified'{$ENDIF},
  Edit_GetSelLength {$IFNDEF MSWINDOWS}name '_Edit_GetSelLength'{$ENDIF},
  Edit_SetSelLength {$IFNDEF MSWINDOWS}name '_Edit_SetSelLength'{$ENDIF},
  Edit_GetSelStart {$IFNDEF MSWINDOWS}name '_Edit_GetSelStart'{$ENDIF},
  Edit_SetSelStart {$IFNDEF MSWINDOWS}name '_Edit_SetSelStart'{$ENDIF},
  Edit_GetSelText {$IFNDEF MSWINDOWS}name '_Edit_GetSelText'{$ENDIF},
  Edit_SetSelText {$IFNDEF MSWINDOWS}name '_Edit_SetSelText'{$ENDIF},
  Edit_GetBrush {$IFNDEF MSWINDOWS}name '_Edit_GetBrush'{$ENDIF},
  Edit_GetControlCount {$IFNDEF MSWINDOWS}name '_Edit_GetControlCount'{$ENDIF},
  Edit_GetHandle {$IFNDEF MSWINDOWS}name '_Edit_GetHandle'{$ENDIF},
  Edit_GetParentWindow {$IFNDEF MSWINDOWS}name '_Edit_GetParentWindow'{$ENDIF},
  Edit_SetParentWindow {$IFNDEF MSWINDOWS}name '_Edit_SetParentWindow'{$ENDIF},
  Edit_GetAction {$IFNDEF MSWINDOWS}name '_Edit_GetAction'{$ENDIF},
  Edit_SetAction {$IFNDEF MSWINDOWS}name '_Edit_SetAction'{$ENDIF},
  Edit_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Edit_GetBoundsRect'{$ENDIF},
  Edit_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Edit_SetBoundsRect'{$ENDIF},
  Edit_GetClientHeight {$IFNDEF MSWINDOWS}name '_Edit_GetClientHeight'{$ENDIF},
  Edit_SetClientHeight {$IFNDEF MSWINDOWS}name '_Edit_SetClientHeight'{$ENDIF},
  Edit_GetClientRect {$IFNDEF MSWINDOWS}name '_Edit_GetClientRect'{$ENDIF},
  Edit_GetClientWidth {$IFNDEF MSWINDOWS}name '_Edit_GetClientWidth'{$ENDIF},
  Edit_SetClientWidth {$IFNDEF MSWINDOWS}name '_Edit_SetClientWidth'{$ENDIF},
  Edit_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Edit_GetExplicitLeft'{$ENDIF},
  Edit_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Edit_GetExplicitTop'{$ENDIF},
  Edit_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Edit_GetExplicitWidth'{$ENDIF},
  Edit_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Edit_GetExplicitHeight'{$ENDIF},
  Edit_GetParent {$IFNDEF MSWINDOWS}name '_Edit_GetParent'{$ENDIF},
  Edit_SetParent {$IFNDEF MSWINDOWS}name '_Edit_SetParent'{$ENDIF},
  Edit_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Edit_GetAlignWithMargins'{$ENDIF},
  Edit_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Edit_SetAlignWithMargins'{$ENDIF},
  Edit_GetLeft {$IFNDEF MSWINDOWS}name '_Edit_GetLeft'{$ENDIF},
  Edit_SetLeft {$IFNDEF MSWINDOWS}name '_Edit_SetLeft'{$ENDIF},
  Edit_GetTop {$IFNDEF MSWINDOWS}name '_Edit_GetTop'{$ENDIF},
  Edit_SetTop {$IFNDEF MSWINDOWS}name '_Edit_SetTop'{$ENDIF},
  Edit_GetWidth {$IFNDEF MSWINDOWS}name '_Edit_GetWidth'{$ENDIF},
  Edit_SetWidth {$IFNDEF MSWINDOWS}name '_Edit_SetWidth'{$ENDIF},
  Edit_GetHeight {$IFNDEF MSWINDOWS}name '_Edit_GetHeight'{$ENDIF},
  Edit_SetHeight {$IFNDEF MSWINDOWS}name '_Edit_SetHeight'{$ENDIF},
  Edit_GetCursor {$IFNDEF MSWINDOWS}name '_Edit_GetCursor'{$ENDIF},
  Edit_SetCursor {$IFNDEF MSWINDOWS}name '_Edit_SetCursor'{$ENDIF},
  Edit_GetHint {$IFNDEF MSWINDOWS}name '_Edit_GetHint'{$ENDIF},
  Edit_SetHint {$IFNDEF MSWINDOWS}name '_Edit_SetHint'{$ENDIF},
  //Edit_GetMargins {$IFNDEF MSWINDOWS}name '_Edit_GetMargins'{$ENDIF},
  //Edit_SetMargins {$IFNDEF MSWINDOWS}name '_Edit_SetMargins'{$ENDIF},
  Edit_GetComponentCount {$IFNDEF MSWINDOWS}name '_Edit_GetComponentCount'{$ENDIF},
  Edit_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Edit_GetComponentIndex'{$ENDIF},
  Edit_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Edit_SetComponentIndex'{$ENDIF},
  Edit_GetOwner {$IFNDEF MSWINDOWS}name '_Edit_GetOwner'{$ENDIF},
  Edit_GetName {$IFNDEF MSWINDOWS}name '_Edit_GetName'{$ENDIF},
  Edit_SetName {$IFNDEF MSWINDOWS}name '_Edit_SetName'{$ENDIF},
  Edit_GetTag {$IFNDEF MSWINDOWS}name '_Edit_GetTag'{$ENDIF},
  Edit_SetTag {$IFNDEF MSWINDOWS}name '_Edit_SetTag'{$ENDIF},
  Edit_GetControls {$IFNDEF MSWINDOWS}name '_Edit_GetControls'{$ENDIF},
  Edit_GetComponents {$IFNDEF MSWINDOWS}name '_Edit_GetComponents'{$ENDIF};

