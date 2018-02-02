
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Memo_Create(AOwner: TComponent): TMemo; cdecl;
begin
  Result :=  TMemo.Create(AOwner);
end;

procedure Memo_Free(AObj: TMemo); cdecl;
begin
  AObj.Free;
end;

procedure Memo_Clear(AObj: TMemo); cdecl;
begin
  AObj.Clear;
end;

procedure Memo_ClearSelection(AObj: TMemo); cdecl;
begin
  AObj.ClearSelection;
end;

procedure Memo_CopyToClipboard(AObj: TMemo); cdecl;
begin
  AObj.CopyToClipboard;
end;

procedure Memo_CutToClipboard(AObj: TMemo); cdecl;
begin
  AObj.CutToClipboard;
end;

procedure Memo_PasteFromClipboard(AObj: TMemo); cdecl;
begin
  AObj.PasteFromClipboard;
end;

procedure Memo_SelectAll(AObj: TMemo); cdecl;
begin
  AObj.SelectAll;
end;

function Memo_GetSelTextBuf(AObj: TMemo; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  //Result :=  AObj.GetSelTextBuf(Buffer, BufSize);
end;

function Memo_CanFocus(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure Memo_FlipChildren(AObj: TMemo; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Memo_Focused(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function Memo_HandleAllocated(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Memo_Invalidate(AObj: TMemo); cdecl;
begin
  AObj.Invalidate;
end;

procedure Memo_Realign(AObj: TMemo); cdecl;
begin
  AObj.Realign;
end;

procedure Memo_Repaint(AObj: TMemo); cdecl;
begin
  AObj.Repaint;
end;

procedure Memo_ScaleBy(AObj: TMemo; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Memo_SetBounds(AObj: TMemo; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Memo_SetFocus(AObj: TMemo); cdecl;
begin
  AObj.SetFocus;
end;

procedure Memo_Update(AObj: TMemo); cdecl;
begin
  AObj.Update;
end;

procedure Memo_BringToFront(AObj: TMemo); cdecl;
begin
  AObj.BringToFront;
end;

function Memo_HasParent(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Memo_Hide(AObj: TMemo); cdecl;
begin
  AObj.Hide;
end;

function Memo_Perform(AObj: TMemo; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Memo_Refresh(AObj: TMemo); cdecl;
begin
  AObj.Refresh;
end;

procedure Memo_SendToBack(AObj: TMemo); cdecl;
begin
  AObj.SendToBack;
end;

procedure Memo_Show(AObj: TMemo); cdecl;
begin
  AObj.Show;
end;

function Memo_GetTextBuf(AObj: TMemo; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function Memo_FindComponent(AObj: TMemo; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Memo_GetNamePath(AObj: TMemo): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Memo_Assign(AObj: TMemo; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Memo_ClassName(AObj: TMemo): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Memo_Equals(AObj: TMemo; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Memo_GetHashCode(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Memo_ToString(AObj: TMemo): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Memo_GetAlign(AObj: TMemo): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Memo_SetAlign(AObj: TMemo; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Memo_GetAlignment(AObj: TMemo): TAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure Memo_SetAlignment(AObj: TMemo; AValue: TAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function Memo_GetAnchors(AObj: TMemo): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Memo_SetAnchors(AObj: TMemo; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

//function Memo_GetBevelEdges(AObj: TMemo): TBevelEdges; cdecl;
//begin
//  Result :=  AObj.BevelEdges;
//end;
//
//procedure Memo_SetBevelEdges(AObj: TMemo; AValue: TBevelEdges); cdecl;
//begin
//  AObj.BevelEdges := AValue;
//end;

//function Memo_GetBevelInner(AObj: TMemo): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelInner;
//end;
//
//procedure Memo_SetBevelInner(AObj: TMemo; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelInner := AValue;
//end;
//
//function Memo_GetBevelKind(AObj: TMemo): TBevelKind; cdecl;
//begin
//  Result :=  AObj.BevelKind;
//end;
//
//procedure Memo_SetBevelKind(AObj: TMemo; AValue: TBevelKind); cdecl;
//begin
//  AObj.BevelKind := AValue;
//end;
//
//function Memo_GetBevelOuter(AObj: TMemo): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelOuter;
//end;
//
//procedure Memo_SetBevelOuter(AObj: TMemo; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelOuter := AValue;
//end;

function Memo_GetBiDiMode(AObj: TMemo): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Memo_SetBiDiMode(AObj: TMemo; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Memo_GetBorderStyle(AObj: TMemo): TBorderStyle; cdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure Memo_SetBorderStyle(AObj: TMemo; AValue: TBorderStyle); cdecl;
begin
  AObj.BorderStyle := AValue;
end;

function Memo_GetColor(AObj: TMemo): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Memo_SetColor(AObj: TMemo; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function Memo_GetDoubleBuffered(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Memo_SetDoubleBuffered(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function Memo_GetEnabled(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Memo_SetEnabled(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Memo_GetFont(AObj: TMemo): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure Memo_SetFont(AObj: TMemo; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function Memo_GetHideSelection(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.HideSelection;
end;

procedure Memo_SetHideSelection(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.HideSelection := AValue;
end;

function Memo_GetLines(AObj: TMemo): TStrings; cdecl;
begin
  Result :=  AObj.Lines;
end;

procedure Memo_SetLines(AObj: TMemo; AValue: TStrings); cdecl;
begin
  AObj.Lines := AValue;
end;

function Memo_GetMaxLength(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.MaxLength;
end;

procedure Memo_SetMaxLength(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.MaxLength := AValue;
end;

function Memo_GetParentColor(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure Memo_SetParentColor(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function Memo_GetParentCtl3D(AObj: TMemo): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentCtl3D;
//end;
//
//procedure Memo_SetParentCtl3D(AObj: TMemo; AValue: LongBool); cdecl;
//begin
//  AObj.ParentCtl3D := AValue;
//end;
//
//function Memo_GetParentDoubleBuffered(AObj: TMemo): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure Memo_SetParentDoubleBuffered(AObj: TMemo; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function Memo_GetParentFont(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Memo_SetParentFont(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function Memo_GetParentShowHint(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Memo_SetParentShowHint(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Memo_GetPopupMenu(AObj: TMemo): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Memo_SetPopupMenu(AObj: TMemo; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Memo_GetReadOnly(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.ReadOnly;
end;

procedure Memo_SetReadOnly(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.ReadOnly := AValue;
end;

function Memo_GetScrollBars(AObj: TMemo): TScrollStyle; cdecl;
begin
  Result :=  AObj.ScrollBars;
end;

procedure Memo_SetScrollBars(AObj: TMemo; AValue: TScrollStyle); cdecl;
begin
  AObj.ScrollBars := AValue;
end;

function Memo_GetShowHint(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Memo_SetShowHint(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Memo_GetTabOrder(AObj: TMemo): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Memo_SetTabOrder(AObj: TMemo; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function Memo_GetTabStop(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Memo_SetTabStop(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function Memo_GetVisible(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Memo_SetVisible(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function Memo_GetWantReturns(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.WantReturns;
end;

procedure Memo_SetWantReturns(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.WantReturns := AValue;
end;

function Memo_GetWantTabs(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.WantTabs;
end;

procedure Memo_SetWantTabs(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.WantTabs := AValue;
end;

function Memo_GetWordWrap(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.WordWrap;
end;

procedure Memo_SetWordWrap(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.WordWrap := AValue;
end;

//function Memo_GetStyleElements(AObj: TMemo): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure Memo_SetStyleElements(AObj: TMemo; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure Memo_SetOnChange(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnClick(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnDblClick(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnEnter(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnExit(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnKeyDown(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnKeyPress(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnKeyUp(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnMouseDown(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnMouseEnter(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnMouseLeave(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnMouseMove(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_SetOnMouseUp(AObj: TMemo; AEventId: NativeUInt); stdcall;
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

procedure Memo_GetCaretPos(AObj: TMemo; var Result: TPoint); cdecl;
begin
  Result :=  AObj.CaretPos;
end;

procedure Memo_SetCaretPos(AObj: TMemo; var AValue: TPoint); cdecl;
begin
  AObj.CaretPos := AValue;
end;

function Memo_GetModified(AObj: TMemo): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure Memo_SetModified(AObj: TMemo; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function Memo_GetSelLength(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.SelLength;
end;

procedure Memo_SetSelLength(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.SelLength := AValue;
end;

function Memo_GetSelStart(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.SelStart;
end;

procedure Memo_SetSelStart(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.SelStart := AValue;
end;

function Memo_GetSelText(AObj: TMemo): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.SelText);
end;

procedure Memo_SetSelText(AObj: TMemo; AValue: PWideChar); cdecl;
begin
  AObj.SelText := AValue;
end;

function Memo_GetText(AObj: TMemo): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Text);
end;

procedure Memo_SetText(AObj: TMemo; AValue: PWideChar); cdecl;
begin
  AObj.Text := AValue;
end;

function Memo_GetTextHint(AObj: TMemo): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.TextHint);
end;

procedure Memo_SetTextHint(AObj: TMemo; AValue: PWideChar); cdecl;
begin
  AObj.TextHint := AValue;
end;

function Memo_GetBrush(AObj: TMemo): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function Memo_GetControlCount(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Memo_GetHandle(AObj: TMemo): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function Memo_GetParentWindow(AObj: TMemo): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Memo_SetParentWindow(AObj: TMemo; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function Memo_GetAction(AObj: TMemo): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Memo_SetAction(AObj: TMemo; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure Memo_GetBoundsRect(AObj: TMemo; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Memo_SetBoundsRect(AObj: TMemo; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Memo_GetClientHeight(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Memo_SetClientHeight(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Memo_GetClientRect(AObj: TMemo; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Memo_GetClientWidth(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Memo_SetClientWidth(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function Memo_GetExplicitLeft(AObj: TMemo): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function Memo_GetExplicitTop(AObj: TMemo): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function Memo_GetExplicitWidth(AObj: TMemo): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function Memo_GetExplicitHeight(AObj: TMemo): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function Memo_GetParent(AObj: TMemo): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Memo_SetParent(AObj: TMemo; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function Memo_GetAlignWithMargins(AObj: TMemo): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure Memo_SetAlignWithMargins(AObj: TMemo; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function Memo_GetLeft(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Memo_SetLeft(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Memo_GetTop(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Memo_SetTop(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Memo_GetWidth(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Memo_SetWidth(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function Memo_GetHeight(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Memo_SetHeight(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Memo_GetCursor(AObj: TMemo): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Memo_SetCursor(AObj: TMemo; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Memo_GetHint(AObj: TMemo): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Memo_SetHint(AObj: TMemo; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Memo_GetMargins(AObj: TMemo): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure Memo_SetMargins(AObj: TMemo; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Memo_GetComponentCount(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Memo_GetComponentIndex(AObj: TMemo): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Memo_SetComponentIndex(AObj: TMemo; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Memo_GetOwner(AObj: TMemo): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Memo_GetName(AObj: TMemo): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Memo_SetName(AObj: TMemo; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Memo_GetTag(AObj: TMemo): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Memo_SetTag(AObj: TMemo; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Memo_GetControls(AObj: TMemo; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Memo_GetComponents(AObj: TMemo; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Memo_Create {$IFNDEF MSWINDOWS}name '_Memo_Create'{$ENDIF},
  Memo_Free {$IFNDEF MSWINDOWS}name '_Memo_Free'{$ENDIF},
  Memo_Clear {$IFNDEF MSWINDOWS}name '_Memo_Clear'{$ENDIF},
  Memo_ClearSelection {$IFNDEF MSWINDOWS}name '_Memo_ClearSelection'{$ENDIF},
  Memo_CopyToClipboard {$IFNDEF MSWINDOWS}name '_Memo_CopyToClipboard'{$ENDIF},
  Memo_CutToClipboard {$IFNDEF MSWINDOWS}name '_Memo_CutToClipboard'{$ENDIF},
  Memo_PasteFromClipboard {$IFNDEF MSWINDOWS}name '_Memo_PasteFromClipboard'{$ENDIF},
  Memo_SelectAll {$IFNDEF MSWINDOWS}name '_Memo_SelectAll'{$ENDIF},
  Memo_GetSelTextBuf {$IFNDEF MSWINDOWS}name '_Memo_GetSelTextBuf'{$ENDIF},
  Memo_CanFocus {$IFNDEF MSWINDOWS}name '_Memo_CanFocus'{$ENDIF},
  Memo_FlipChildren {$IFNDEF MSWINDOWS}name '_Memo_FlipChildren'{$ENDIF},
  Memo_Focused {$IFNDEF MSWINDOWS}name '_Memo_Focused'{$ENDIF},
  Memo_HandleAllocated {$IFNDEF MSWINDOWS}name '_Memo_HandleAllocated'{$ENDIF},
  Memo_Invalidate {$IFNDEF MSWINDOWS}name '_Memo_Invalidate'{$ENDIF},
  Memo_Realign {$IFNDEF MSWINDOWS}name '_Memo_Realign'{$ENDIF},
  Memo_Repaint {$IFNDEF MSWINDOWS}name '_Memo_Repaint'{$ENDIF},
  Memo_ScaleBy {$IFNDEF MSWINDOWS}name '_Memo_ScaleBy'{$ENDIF},
  Memo_SetBounds {$IFNDEF MSWINDOWS}name '_Memo_SetBounds'{$ENDIF},
  Memo_SetFocus {$IFNDEF MSWINDOWS}name '_Memo_SetFocus'{$ENDIF},
  Memo_Update {$IFNDEF MSWINDOWS}name '_Memo_Update'{$ENDIF},
  Memo_BringToFront {$IFNDEF MSWINDOWS}name '_Memo_BringToFront'{$ENDIF},
  Memo_HasParent {$IFNDEF MSWINDOWS}name '_Memo_HasParent'{$ENDIF},
  Memo_Hide {$IFNDEF MSWINDOWS}name '_Memo_Hide'{$ENDIF},
  Memo_Perform {$IFNDEF MSWINDOWS}name '_Memo_Perform'{$ENDIF},
  Memo_Refresh {$IFNDEF MSWINDOWS}name '_Memo_Refresh'{$ENDIF},
  Memo_SendToBack {$IFNDEF MSWINDOWS}name '_Memo_SendToBack'{$ENDIF},
  Memo_Show {$IFNDEF MSWINDOWS}name '_Memo_Show'{$ENDIF},
  Memo_GetTextBuf {$IFNDEF MSWINDOWS}name '_Memo_GetTextBuf'{$ENDIF},
  Memo_FindComponent {$IFNDEF MSWINDOWS}name '_Memo_FindComponent'{$ENDIF},
  Memo_GetNamePath {$IFNDEF MSWINDOWS}name '_Memo_GetNamePath'{$ENDIF},
  Memo_Assign {$IFNDEF MSWINDOWS}name '_Memo_Assign'{$ENDIF},
  Memo_ClassName {$IFNDEF MSWINDOWS}name '_Memo_ClassName'{$ENDIF},
  Memo_Equals {$IFNDEF MSWINDOWS}name '_Memo_Equals'{$ENDIF},
  Memo_GetHashCode {$IFNDEF MSWINDOWS}name '_Memo_GetHashCode'{$ENDIF},
  Memo_ToString {$IFNDEF MSWINDOWS}name '_Memo_ToString'{$ENDIF},
  Memo_GetAlign {$IFNDEF MSWINDOWS}name '_Memo_GetAlign'{$ENDIF},
  Memo_SetAlign {$IFNDEF MSWINDOWS}name '_Memo_SetAlign'{$ENDIF},
  Memo_GetAlignment {$IFNDEF MSWINDOWS}name '_Memo_GetAlignment'{$ENDIF},
  Memo_SetAlignment {$IFNDEF MSWINDOWS}name '_Memo_SetAlignment'{$ENDIF},
  Memo_GetAnchors {$IFNDEF MSWINDOWS}name '_Memo_GetAnchors'{$ENDIF},
  Memo_SetAnchors {$IFNDEF MSWINDOWS}name '_Memo_SetAnchors'{$ENDIF},
  //Memo_GetBevelEdges {$IFNDEF MSWINDOWS}name '_Memo_GetBevelEdges'{$ENDIF},
  //Memo_SetBevelEdges {$IFNDEF MSWINDOWS}name '_Memo_SetBevelEdges'{$ENDIF},
  //Memo_GetBevelInner {$IFNDEF MSWINDOWS}name '_Memo_GetBevelInner'{$ENDIF},
  //Memo_SetBevelInner {$IFNDEF MSWINDOWS}name '_Memo_SetBevelInner'{$ENDIF},
  //Memo_GetBevelKind {$IFNDEF MSWINDOWS}name '_Memo_GetBevelKind'{$ENDIF},
  //Memo_SetBevelKind {$IFNDEF MSWINDOWS}name '_Memo_SetBevelKind'{$ENDIF},
  //Memo_GetBevelOuter {$IFNDEF MSWINDOWS}name '_Memo_GetBevelOuter'{$ENDIF},
  //Memo_SetBevelOuter {$IFNDEF MSWINDOWS}name '_Memo_SetBevelOuter'{$ENDIF},
  Memo_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Memo_GetBiDiMode'{$ENDIF},
  Memo_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Memo_SetBiDiMode'{$ENDIF},
  Memo_GetBorderStyle {$IFNDEF MSWINDOWS}name '_Memo_GetBorderStyle'{$ENDIF},
  Memo_SetBorderStyle {$IFNDEF MSWINDOWS}name '_Memo_SetBorderStyle'{$ENDIF},
  Memo_GetColor {$IFNDEF MSWINDOWS}name '_Memo_GetColor'{$ENDIF},
  Memo_SetColor {$IFNDEF MSWINDOWS}name '_Memo_SetColor'{$ENDIF},
  Memo_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Memo_GetDoubleBuffered'{$ENDIF},
  Memo_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Memo_SetDoubleBuffered'{$ENDIF},
  Memo_GetEnabled {$IFNDEF MSWINDOWS}name '_Memo_GetEnabled'{$ENDIF},
  Memo_SetEnabled {$IFNDEF MSWINDOWS}name '_Memo_SetEnabled'{$ENDIF},
  Memo_GetFont {$IFNDEF MSWINDOWS}name '_Memo_GetFont'{$ENDIF},
  Memo_SetFont {$IFNDEF MSWINDOWS}name '_Memo_SetFont'{$ENDIF},
  Memo_GetHideSelection {$IFNDEF MSWINDOWS}name '_Memo_GetHideSelection'{$ENDIF},
  Memo_SetHideSelection {$IFNDEF MSWINDOWS}name '_Memo_SetHideSelection'{$ENDIF},
  Memo_GetLines {$IFNDEF MSWINDOWS}name '_Memo_GetLines'{$ENDIF},
  Memo_SetLines {$IFNDEF MSWINDOWS}name '_Memo_SetLines'{$ENDIF},
  Memo_GetMaxLength {$IFNDEF MSWINDOWS}name '_Memo_GetMaxLength'{$ENDIF},
  Memo_SetMaxLength {$IFNDEF MSWINDOWS}name '_Memo_SetMaxLength'{$ENDIF},
  Memo_GetParentColor {$IFNDEF MSWINDOWS}name '_Memo_GetParentColor'{$ENDIF},
  Memo_SetParentColor {$IFNDEF MSWINDOWS}name '_Memo_SetParentColor'{$ENDIF},
  //Memo_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_Memo_GetParentCtl3D'{$ENDIF},
  //Memo_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_Memo_SetParentCtl3D'{$ENDIF},
  //Memo_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Memo_GetParentDoubleBuffered'{$ENDIF},
  //Memo_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Memo_SetParentDoubleBuffered'{$ENDIF},
  Memo_GetParentFont {$IFNDEF MSWINDOWS}name '_Memo_GetParentFont'{$ENDIF},
  Memo_SetParentFont {$IFNDEF MSWINDOWS}name '_Memo_SetParentFont'{$ENDIF},
  Memo_GetParentShowHint {$IFNDEF MSWINDOWS}name '_Memo_GetParentShowHint'{$ENDIF},
  Memo_SetParentShowHint {$IFNDEF MSWINDOWS}name '_Memo_SetParentShowHint'{$ENDIF},
  Memo_GetPopupMenu {$IFNDEF MSWINDOWS}name '_Memo_GetPopupMenu'{$ENDIF},
  Memo_SetPopupMenu {$IFNDEF MSWINDOWS}name '_Memo_SetPopupMenu'{$ENDIF},
  Memo_GetReadOnly {$IFNDEF MSWINDOWS}name '_Memo_GetReadOnly'{$ENDIF},
  Memo_SetReadOnly {$IFNDEF MSWINDOWS}name '_Memo_SetReadOnly'{$ENDIF},
  Memo_GetScrollBars {$IFNDEF MSWINDOWS}name '_Memo_GetScrollBars'{$ENDIF},
  Memo_SetScrollBars {$IFNDEF MSWINDOWS}name '_Memo_SetScrollBars'{$ENDIF},
  Memo_GetShowHint {$IFNDEF MSWINDOWS}name '_Memo_GetShowHint'{$ENDIF},
  Memo_SetShowHint {$IFNDEF MSWINDOWS}name '_Memo_SetShowHint'{$ENDIF},
  Memo_GetTabOrder {$IFNDEF MSWINDOWS}name '_Memo_GetTabOrder'{$ENDIF},
  Memo_SetTabOrder {$IFNDEF MSWINDOWS}name '_Memo_SetTabOrder'{$ENDIF},
  Memo_GetTabStop {$IFNDEF MSWINDOWS}name '_Memo_GetTabStop'{$ENDIF},
  Memo_SetTabStop {$IFNDEF MSWINDOWS}name '_Memo_SetTabStop'{$ENDIF},
  Memo_GetVisible {$IFNDEF MSWINDOWS}name '_Memo_GetVisible'{$ENDIF},
  Memo_SetVisible {$IFNDEF MSWINDOWS}name '_Memo_SetVisible'{$ENDIF},
  Memo_GetWantReturns {$IFNDEF MSWINDOWS}name '_Memo_GetWantReturns'{$ENDIF},
  Memo_SetWantReturns {$IFNDEF MSWINDOWS}name '_Memo_SetWantReturns'{$ENDIF},
  Memo_GetWantTabs {$IFNDEF MSWINDOWS}name '_Memo_GetWantTabs'{$ENDIF},
  Memo_SetWantTabs {$IFNDEF MSWINDOWS}name '_Memo_SetWantTabs'{$ENDIF},
  Memo_GetWordWrap {$IFNDEF MSWINDOWS}name '_Memo_GetWordWrap'{$ENDIF},
  Memo_SetWordWrap {$IFNDEF MSWINDOWS}name '_Memo_SetWordWrap'{$ENDIF},
  //Memo_GetStyleElements {$IFNDEF MSWINDOWS}name '_Memo_GetStyleElements'{$ENDIF},
  //Memo_SetStyleElements {$IFNDEF MSWINDOWS}name '_Memo_SetStyleElements'{$ENDIF},
  Memo_SetOnChange {$IFNDEF MSWINDOWS}name '_Memo_SetOnChange'{$ENDIF},
  Memo_SetOnClick {$IFNDEF MSWINDOWS}name '_Memo_SetOnClick'{$ENDIF},
  Memo_SetOnDblClick {$IFNDEF MSWINDOWS}name '_Memo_SetOnDblClick'{$ENDIF},
  Memo_SetOnEnter {$IFNDEF MSWINDOWS}name '_Memo_SetOnEnter'{$ENDIF},
  Memo_SetOnExit {$IFNDEF MSWINDOWS}name '_Memo_SetOnExit'{$ENDIF},
  Memo_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_Memo_SetOnKeyDown'{$ENDIF},
  Memo_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_Memo_SetOnKeyPress'{$ENDIF},
  Memo_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_Memo_SetOnKeyUp'{$ENDIF},
  Memo_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_Memo_SetOnMouseDown'{$ENDIF},
  Memo_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_Memo_SetOnMouseEnter'{$ENDIF},
  Memo_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_Memo_SetOnMouseLeave'{$ENDIF},
  Memo_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_Memo_SetOnMouseMove'{$ENDIF},
  Memo_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_Memo_SetOnMouseUp'{$ENDIF},
  Memo_GetCaretPos {$IFNDEF MSWINDOWS}name '_Memo_GetCaretPos'{$ENDIF},
  Memo_SetCaretPos {$IFNDEF MSWINDOWS}name '_Memo_SetCaretPos'{$ENDIF},
  Memo_GetModified {$IFNDEF MSWINDOWS}name '_Memo_GetModified'{$ENDIF},
  Memo_SetModified {$IFNDEF MSWINDOWS}name '_Memo_SetModified'{$ENDIF},
  Memo_GetSelLength {$IFNDEF MSWINDOWS}name '_Memo_GetSelLength'{$ENDIF},
  Memo_SetSelLength {$IFNDEF MSWINDOWS}name '_Memo_SetSelLength'{$ENDIF},
  Memo_GetSelStart {$IFNDEF MSWINDOWS}name '_Memo_GetSelStart'{$ENDIF},
  Memo_SetSelStart {$IFNDEF MSWINDOWS}name '_Memo_SetSelStart'{$ENDIF},
  Memo_GetSelText {$IFNDEF MSWINDOWS}name '_Memo_GetSelText'{$ENDIF},
  Memo_SetSelText {$IFNDEF MSWINDOWS}name '_Memo_SetSelText'{$ENDIF},
  Memo_GetText {$IFNDEF MSWINDOWS}name '_Memo_GetText'{$ENDIF},
  Memo_SetText {$IFNDEF MSWINDOWS}name '_Memo_SetText'{$ENDIF},
  Memo_GetTextHint {$IFNDEF MSWINDOWS}name '_Memo_GetTextHint'{$ENDIF},
  Memo_SetTextHint {$IFNDEF MSWINDOWS}name '_Memo_SetTextHint'{$ENDIF},
  Memo_GetBrush {$IFNDEF MSWINDOWS}name '_Memo_GetBrush'{$ENDIF},
  Memo_GetControlCount {$IFNDEF MSWINDOWS}name '_Memo_GetControlCount'{$ENDIF},
  Memo_GetHandle {$IFNDEF MSWINDOWS}name '_Memo_GetHandle'{$ENDIF},
  Memo_GetParentWindow {$IFNDEF MSWINDOWS}name '_Memo_GetParentWindow'{$ENDIF},
  Memo_SetParentWindow {$IFNDEF MSWINDOWS}name '_Memo_SetParentWindow'{$ENDIF},
  Memo_GetAction {$IFNDEF MSWINDOWS}name '_Memo_GetAction'{$ENDIF},
  Memo_SetAction {$IFNDEF MSWINDOWS}name '_Memo_SetAction'{$ENDIF},
  Memo_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Memo_GetBoundsRect'{$ENDIF},
  Memo_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Memo_SetBoundsRect'{$ENDIF},
  Memo_GetClientHeight {$IFNDEF MSWINDOWS}name '_Memo_GetClientHeight'{$ENDIF},
  Memo_SetClientHeight {$IFNDEF MSWINDOWS}name '_Memo_SetClientHeight'{$ENDIF},
  Memo_GetClientRect {$IFNDEF MSWINDOWS}name '_Memo_GetClientRect'{$ENDIF},
  Memo_GetClientWidth {$IFNDEF MSWINDOWS}name '_Memo_GetClientWidth'{$ENDIF},
  Memo_SetClientWidth {$IFNDEF MSWINDOWS}name '_Memo_SetClientWidth'{$ENDIF},
  //Memo_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Memo_GetExplicitLeft'{$ENDIF},
  //Memo_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Memo_GetExplicitTop'{$ENDIF},
  //Memo_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Memo_GetExplicitWidth'{$ENDIF},
  //Memo_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Memo_GetExplicitHeight'{$ENDIF},
  Memo_GetParent {$IFNDEF MSWINDOWS}name '_Memo_GetParent'{$ENDIF},
  Memo_SetParent {$IFNDEF MSWINDOWS}name '_Memo_SetParent'{$ENDIF},
  //Memo_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Memo_GetAlignWithMargins'{$ENDIF},
  //Memo_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Memo_SetAlignWithMargins'{$ENDIF},
  Memo_GetLeft {$IFNDEF MSWINDOWS}name '_Memo_GetLeft'{$ENDIF},
  Memo_SetLeft {$IFNDEF MSWINDOWS}name '_Memo_SetLeft'{$ENDIF},
  Memo_GetTop {$IFNDEF MSWINDOWS}name '_Memo_GetTop'{$ENDIF},
  Memo_SetTop {$IFNDEF MSWINDOWS}name '_Memo_SetTop'{$ENDIF},
  Memo_GetWidth {$IFNDEF MSWINDOWS}name '_Memo_GetWidth'{$ENDIF},
  Memo_SetWidth {$IFNDEF MSWINDOWS}name '_Memo_SetWidth'{$ENDIF},
  Memo_GetHeight {$IFNDEF MSWINDOWS}name '_Memo_GetHeight'{$ENDIF},
  Memo_SetHeight {$IFNDEF MSWINDOWS}name '_Memo_SetHeight'{$ENDIF},
  Memo_GetCursor {$IFNDEF MSWINDOWS}name '_Memo_GetCursor'{$ENDIF},
  Memo_SetCursor {$IFNDEF MSWINDOWS}name '_Memo_SetCursor'{$ENDIF},
  Memo_GetHint {$IFNDEF MSWINDOWS}name '_Memo_GetHint'{$ENDIF},
  Memo_SetHint {$IFNDEF MSWINDOWS}name '_Memo_SetHint'{$ENDIF},
  //Memo_GetMargins {$IFNDEF MSWINDOWS}name '_Memo_GetMargins'{$ENDIF},
  //Memo_SetMargins {$IFNDEF MSWINDOWS}name '_Memo_SetMargins'{$ENDIF},
  Memo_GetComponentCount {$IFNDEF MSWINDOWS}name '_Memo_GetComponentCount'{$ENDIF},
  Memo_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Memo_GetComponentIndex'{$ENDIF},
  Memo_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Memo_SetComponentIndex'{$ENDIF},
  Memo_GetOwner {$IFNDEF MSWINDOWS}name '_Memo_GetOwner'{$ENDIF},
  Memo_GetName {$IFNDEF MSWINDOWS}name '_Memo_GetName'{$ENDIF},
  Memo_SetName {$IFNDEF MSWINDOWS}name '_Memo_SetName'{$ENDIF},
  Memo_GetTag {$IFNDEF MSWINDOWS}name '_Memo_GetTag'{$ENDIF},
  Memo_SetTag {$IFNDEF MSWINDOWS}name '_Memo_SetTag'{$ENDIF},
  Memo_GetControls {$IFNDEF MSWINDOWS}name '_Memo_GetControls'{$ENDIF},
  Memo_GetComponents {$IFNDEF MSWINDOWS}name '_Memo_GetComponents'{$ENDIF};

