//https://habrahabr.ru/post/277223/
//http://win32assembly.programminghorizon.com/tut35.html
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function RichEdit_Create(AOwner: TComponent): TRichEdit; cdecl;
begin
  Result :=  TRichEdit.Create(AOwner);
end;

procedure RichEdit_Free(AObj: TRichEdit); cdecl;
begin
  AObj.Free;
end;

procedure RichEdit_Clear(AObj: TRichEdit); cdecl;
begin
  AObj.Clear;
end;

function RichEdit_FindText(AObj: TRichEdit; SearchStr: PWideChar; StartPos: Integer; Length: Integer; Options: TSearchTypes): Integer; cdecl;
begin
  Result :=  AObj.FindText(SearchStr, StartPos, Length, Options);
end;

procedure RichEdit_Print(AObj: TRichEdit; Caption: PWideChar); cdecl;
begin
  AObj.Print(Caption);
end;

function RichEdit_GetSelTextBuf(AObj: TRichEdit; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetSelTextBuf(Buffer, BufSize);
end;

procedure RichEdit_ClearSelection(AObj: TRichEdit); cdecl;
begin
  AObj.ClearSelection;
end;

procedure RichEdit_CopyToClipboard(AObj: TRichEdit); cdecl;
begin
  AObj.CopyToClipboard;
end;

procedure RichEdit_CutToClipboard(AObj: TRichEdit); cdecl;
begin
  AObj.CutToClipboard;
end;

procedure RichEdit_PasteFromClipboard(AObj: TRichEdit); cdecl;
begin
  AObj.PasteFromClipboard;
end;

procedure RichEdit_SelectAll(AObj: TRichEdit); cdecl;
begin
  AObj.SelectAll;
end;

function RichEdit_CanFocus(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure RichEdit_FlipChildren(AObj: TRichEdit; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function RichEdit_Focused(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function RichEdit_HandleAllocated(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure RichEdit_Invalidate(AObj: TRichEdit); cdecl;
begin
  AObj.Invalidate;
end;

procedure RichEdit_Realign(AObj: TRichEdit); cdecl;
begin
  AObj.Realign;
end;

procedure RichEdit_Repaint(AObj: TRichEdit); cdecl;
begin
  AObj.Repaint;
end;

procedure RichEdit_ScaleBy(AObj: TRichEdit; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure RichEdit_SetBounds(AObj: TRichEdit; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure RichEdit_SetFocus(AObj: TRichEdit); cdecl;
begin
  AObj.SetFocus;
end;

procedure RichEdit_Update(AObj: TRichEdit); cdecl;
begin
  AObj.Update;
end;

procedure RichEdit_BringToFront(AObj: TRichEdit); cdecl;
begin
  AObj.BringToFront;
end;

function RichEdit_HasParent(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure RichEdit_Hide(AObj: TRichEdit); cdecl;
begin
  AObj.Hide;
end;

function RichEdit_Perform(AObj: TRichEdit; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure RichEdit_Refresh(AObj: TRichEdit); cdecl;
begin
  AObj.Refresh;
end;

procedure RichEdit_SendToBack(AObj: TRichEdit); cdecl;
begin
  AObj.SendToBack;
end;

procedure RichEdit_Show(AObj: TRichEdit); cdecl;
begin
  AObj.Show;
end;

function RichEdit_GetTextBuf(AObj: TRichEdit; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function RichEdit_FindComponent(AObj: TRichEdit; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function RichEdit_GetNamePath(AObj: TRichEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure RichEdit_Assign(AObj: TRichEdit; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function RichEdit_ClassName(AObj: TRichEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function RichEdit_Equals(AObj: TRichEdit; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function RichEdit_GetHashCode(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function RichEdit_ToString(AObj: TRichEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function RichEdit_GetAlign(AObj: TRichEdit): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure RichEdit_SetAlign(AObj: TRichEdit; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function RichEdit_GetAlignment(AObj: TRichEdit): TAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure RichEdit_SetAlignment(AObj: TRichEdit; AValue: TAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function RichEdit_GetAnchors(AObj: TRichEdit): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure RichEdit_SetAnchors(AObj: TRichEdit; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function RichEdit_GetBevelEdges(AObj: TRichEdit): TBevelEdges; cdecl;
begin
  Result :=  AObj.BevelEdges;
end;

procedure RichEdit_SetBevelEdges(AObj: TRichEdit; AValue: TBevelEdges); cdecl;
begin
  AObj.BevelEdges := AValue;
end;

function RichEdit_GetBevelInner(AObj: TRichEdit): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelInner;
end;

procedure RichEdit_SetBevelInner(AObj: TRichEdit; AValue: TBevelCut); cdecl;
begin
  AObj.BevelInner := AValue;
end;

function RichEdit_GetBevelOuter(AObj: TRichEdit): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelOuter;
end;

procedure RichEdit_SetBevelOuter(AObj: TRichEdit; AValue: TBevelCut); cdecl;
begin
  AObj.BevelOuter := AValue;
end;

function RichEdit_GetBevelKind(AObj: TRichEdit): TBevelKind; cdecl;
begin
  Result :=  AObj.BevelKind;
end;

procedure RichEdit_SetBevelKind(AObj: TRichEdit; AValue: TBevelKind); cdecl;
begin
  AObj.BevelKind := AValue;
end;

function RichEdit_GetBiDiMode(AObj: TRichEdit): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure RichEdit_SetBiDiMode(AObj: TRichEdit; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function RichEdit_GetBorderStyle(AObj: TRichEdit): TBorderStyle; cdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure RichEdit_SetBorderStyle(AObj: TRichEdit; AValue: TBorderStyle); cdecl;
begin
  AObj.BorderStyle := AValue;
end;

function RichEdit_GetBorderWidth(AObj: TRichEdit): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure RichEdit_SetBorderWidth(AObj: TRichEdit; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function RichEdit_GetColor(AObj: TRichEdit): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure RichEdit_SetColor(AObj: TRichEdit; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function RichEdit_GetEnabled(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure RichEdit_SetEnabled(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function RichEdit_GetFont(AObj: TRichEdit): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure RichEdit_SetFont(AObj: TRichEdit; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function RichEdit_GetHideSelection(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.HideSelection;
end;

procedure RichEdit_SetHideSelection(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.HideSelection := AValue;
end;

function RichEdit_GetHideScrollBars(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.HideScrollBars;
end;

procedure RichEdit_SetHideScrollBars(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.HideScrollBars := AValue;
end;

function RichEdit_GetLines(AObj: TRichEdit): TStrings; cdecl;
begin
  Result :=  AObj.Lines;
end;

procedure RichEdit_SetLines(AObj: TRichEdit; AValue: TStrings); cdecl;
begin
  AObj.Lines := AValue;
end;

function RichEdit_GetMaxLength(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.MaxLength;
end;

procedure RichEdit_SetMaxLength(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.MaxLength := AValue;
end;

function RichEdit_GetParentColor(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure RichEdit_SetParentColor(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function RichEdit_GetParentCtl3D(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure RichEdit_SetParentCtl3D(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.ParentCtl3D := AValue;
end;

function RichEdit_GetParentFont(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure RichEdit_SetParentFont(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function RichEdit_GetParentShowHint(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure RichEdit_SetParentShowHint(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function RichEdit_GetPlainText(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.PlainText;
end;

procedure RichEdit_SetPlainText(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.PlainText := AValue;
end;

function RichEdit_GetPopupMenu(AObj: TRichEdit): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure RichEdit_SetPopupMenu(AObj: TRichEdit; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function RichEdit_GetReadOnly(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.ReadOnly;
end;

procedure RichEdit_SetReadOnly(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.ReadOnly := AValue;
end;

function RichEdit_GetScrollBars(AObj: TRichEdit): TScrollStyle; cdecl;
begin
  Result :=  AObj.ScrollBars;
end;

procedure RichEdit_SetScrollBars(AObj: TRichEdit; AValue: TScrollStyle); cdecl;
begin
  AObj.ScrollBars := AValue;
end;

function RichEdit_GetShowHint(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure RichEdit_SetShowHint(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function RichEdit_GetTabOrder(AObj: TRichEdit): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure RichEdit_SetTabOrder(AObj: TRichEdit; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function RichEdit_GetTabStop(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure RichEdit_SetTabStop(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function RichEdit_GetVisible(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure RichEdit_SetVisible(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function RichEdit_GetWantTabs(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.WantTabs;
end;

procedure RichEdit_SetWantTabs(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.WantTabs := AValue;
end;

function RichEdit_GetWantReturns(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.WantReturns;
end;

procedure RichEdit_SetWantReturns(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.WantReturns := AValue;
end;

function RichEdit_GetWordWrap(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.WordWrap;
end;

procedure RichEdit_SetWordWrap(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.WordWrap := AValue;
end;

function RichEdit_GetStyleElements(AObj: TRichEdit): TStyleElements; cdecl;
begin
  Result :=  AObj.StyleElements;
end;

procedure RichEdit_SetStyleElements(AObj: TRichEdit; AValue: TStyleElements); cdecl;
begin
  AObj.StyleElements := AValue;
end;

function RichEdit_GetZoom(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.Zoom;
end;

procedure RichEdit_SetZoom(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.Zoom := AValue;
end;

procedure RichEdit_SetOnChange(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnClick(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnDblClick(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnEnter(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnExit(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnKeyDown(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnKeyPress(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnKeyUp(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnMouseDown(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnMouseEnter(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnMouseLeave(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnMouseMove(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnMouseUp(AObj: TRichEdit; AEventId: NativeUInt); stdcall
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

procedure RichEdit_SetOnMouseWheel(AObj: TRichEdit; AEventId: NativeUInt); stdcall
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseWheel := nil;
    TEventClass.Remove(AObj, geMouseWheel);
    Exit;
  end;
  AObj.OnMouseWheel := TEventClass.OnMouseWheel;
  TEventClass.Add(AObj, geMouseWheel, AEventId);
end;

function RichEdit_GetActiveLineNo(AObj: TRichEdit): Cardinal; cdecl;
begin
  Result :=  AObj.ActiveLineNo;
end;

function RichEdit_GetDefAttributes(AObj: TRichEdit): TTextAttributes; cdecl;
begin
  Result :=  AObj.DefAttributes;
end;

procedure RichEdit_SetDefAttributes(AObj: TRichEdit; AValue: TTextAttributes); cdecl;
begin
  AObj.DefAttributes := AValue;
end;

function RichEdit_GetSelAttributes(AObj: TRichEdit): TTextAttributes; cdecl;
begin
  Result :=  AObj.SelAttributes;
end;

procedure RichEdit_SetSelAttributes(AObj: TRichEdit; AValue: TTextAttributes); cdecl;
begin
  AObj.SelAttributes := AValue;
end;

procedure RichEdit_GetPageRect(AObj: TRichEdit; var Result: TRect); cdecl;
begin
  Result :=  AObj.PageRect;
end;

procedure RichEdit_SetPageRect(AObj: TRichEdit; var AValue: TRect); cdecl;
begin
  AObj.PageRect := AValue;
end;

function RichEdit_GetParagraph(AObj: TRichEdit): TParaAttributes; cdecl;
begin
  Result :=  AObj.Paragraph;
end;

procedure RichEdit_GetCaretPos(AObj: TRichEdit; var Result: TPoint); cdecl;
begin
  Result :=  AObj.CaretPos;
end;

procedure RichEdit_SetCaretPos(AObj: TRichEdit; var AValue: TPoint); cdecl;
begin
  AObj.CaretPos := AValue;
end;

function RichEdit_GetModified(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure RichEdit_SetModified(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function RichEdit_GetSelLength(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.SelLength;
end;

procedure RichEdit_SetSelLength(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.SelLength := AValue;
end;

function RichEdit_GetSelStart(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.SelStart;
end;

procedure RichEdit_SetSelStart(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.SelStart := AValue;
end;

function RichEdit_GetSelText(AObj: TRichEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.SelText);
end;

procedure RichEdit_SetSelText(AObj: TRichEdit; AValue: PWideChar); cdecl;
begin
  AObj.SelText := AValue;
end;

function RichEdit_GetText(AObj: TRichEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Text);
end;

procedure RichEdit_SetText(AObj: TRichEdit; AValue: PWideChar); cdecl;
begin
  AObj.Text := AValue;
end;

function RichEdit_GetTextHint(AObj: TRichEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.TextHint);
end;

procedure RichEdit_SetTextHint(AObj: TRichEdit; AValue: PWideChar); cdecl;
begin
  AObj.TextHint := AValue;
end;

function RichEdit_GetDoubleBuffered(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure RichEdit_SetDoubleBuffered(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function RichEdit_GetBrush(AObj: TRichEdit): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function RichEdit_GetControlCount(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function RichEdit_GetHandle(AObj: TRichEdit): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function RichEdit_GetParentDoubleBuffered(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure RichEdit_SetParentDoubleBuffered(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function RichEdit_GetParentWindow(AObj: TRichEdit): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure RichEdit_SetParentWindow(AObj: TRichEdit; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function RichEdit_GetAction(AObj: TRichEdit): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure RichEdit_SetAction(AObj: TRichEdit; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure RichEdit_GetBoundsRect(AObj: TRichEdit; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure RichEdit_SetBoundsRect(AObj: TRichEdit; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function RichEdit_GetClientHeight(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure RichEdit_SetClientHeight(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure RichEdit_GetClientRect(AObj: TRichEdit; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function RichEdit_GetClientWidth(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure RichEdit_SetClientWidth(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function RichEdit_GetExplicitLeft(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function RichEdit_GetExplicitTop(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function RichEdit_GetExplicitWidth(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function RichEdit_GetExplicitHeight(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

function RichEdit_GetParent(AObj: TRichEdit): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure RichEdit_SetParent(AObj: TRichEdit; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function RichEdit_GetAlignWithMargins(AObj: TRichEdit): LongBool; cdecl;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure RichEdit_SetAlignWithMargins(AObj: TRichEdit; AValue: LongBool); cdecl;
begin
  AObj.AlignWithMargins := AValue;
end;

function RichEdit_GetLeft(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure RichEdit_SetLeft(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function RichEdit_GetTop(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure RichEdit_SetTop(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function RichEdit_GetWidth(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure RichEdit_SetWidth(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function RichEdit_GetHeight(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure RichEdit_SetHeight(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function RichEdit_GetCursor(AObj: TRichEdit): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure RichEdit_SetCursor(AObj: TRichEdit; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function RichEdit_GetHint(AObj: TRichEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure RichEdit_SetHint(AObj: TRichEdit; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function RichEdit_GetMargins(AObj: TRichEdit): TMargins; cdecl;
begin
  Result :=  AObj.Margins;
end;

procedure RichEdit_SetMargins(AObj: TRichEdit; AValue: TMargins); cdecl;
begin
  AObj.Margins := AValue;
end;

function RichEdit_GetComponentCount(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function RichEdit_GetComponentIndex(AObj: TRichEdit): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure RichEdit_SetComponentIndex(AObj: TRichEdit; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function RichEdit_GetOwner(AObj: TRichEdit): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function RichEdit_GetName(AObj: TRichEdit): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure RichEdit_SetName(AObj: TRichEdit; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function RichEdit_GetTag(AObj: TRichEdit): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure RichEdit_SetTag(AObj: TRichEdit; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function RichEdit_GetControls(AObj: TRichEdit; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function RichEdit_GetComponents(AObj: TRichEdit; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  RichEdit_Create {$IFNDEF MSWINDOWS}name '_RichEdit_Create'{$ENDIF},
  RichEdit_Free {$IFNDEF MSWINDOWS}name '_RichEdit_Free'{$ENDIF},
  RichEdit_Clear {$IFNDEF MSWINDOWS}name '_RichEdit_Clear'{$ENDIF},
  RichEdit_FindText {$IFNDEF MSWINDOWS}name '_RichEdit_FindText'{$ENDIF},
  RichEdit_Print {$IFNDEF MSWINDOWS}name '_RichEdit_Print'{$ENDIF},
  RichEdit_GetSelTextBuf {$IFNDEF MSWINDOWS}name '_RichEdit_GetSelTextBuf'{$ENDIF},
  RichEdit_ClearSelection {$IFNDEF MSWINDOWS}name '_RichEdit_ClearSelection'{$ENDIF},
  RichEdit_CopyToClipboard {$IFNDEF MSWINDOWS}name '_RichEdit_CopyToClipboard'{$ENDIF},
  RichEdit_CutToClipboard {$IFNDEF MSWINDOWS}name '_RichEdit_CutToClipboard'{$ENDIF},
  RichEdit_PasteFromClipboard {$IFNDEF MSWINDOWS}name '_RichEdit_PasteFromClipboard'{$ENDIF},
  RichEdit_SelectAll {$IFNDEF MSWINDOWS}name '_RichEdit_SelectAll'{$ENDIF},
  RichEdit_CanFocus {$IFNDEF MSWINDOWS}name '_RichEdit_CanFocus'{$ENDIF},
  RichEdit_FlipChildren {$IFNDEF MSWINDOWS}name '_RichEdit_FlipChildren'{$ENDIF},
  RichEdit_Focused {$IFNDEF MSWINDOWS}name '_RichEdit_Focused'{$ENDIF},
  RichEdit_HandleAllocated {$IFNDEF MSWINDOWS}name '_RichEdit_HandleAllocated'{$ENDIF},
  RichEdit_Invalidate {$IFNDEF MSWINDOWS}name '_RichEdit_Invalidate'{$ENDIF},
  RichEdit_Realign {$IFNDEF MSWINDOWS}name '_RichEdit_Realign'{$ENDIF},
  RichEdit_Repaint {$IFNDEF MSWINDOWS}name '_RichEdit_Repaint'{$ENDIF},
  RichEdit_ScaleBy {$IFNDEF MSWINDOWS}name '_RichEdit_ScaleBy'{$ENDIF},
  RichEdit_SetBounds {$IFNDEF MSWINDOWS}name '_RichEdit_SetBounds'{$ENDIF},
  RichEdit_SetFocus {$IFNDEF MSWINDOWS}name '_RichEdit_SetFocus'{$ENDIF},
  RichEdit_Update {$IFNDEF MSWINDOWS}name '_RichEdit_Update'{$ENDIF},
  RichEdit_BringToFront {$IFNDEF MSWINDOWS}name '_RichEdit_BringToFront'{$ENDIF},
  RichEdit_HasParent {$IFNDEF MSWINDOWS}name '_RichEdit_HasParent'{$ENDIF},
  RichEdit_Hide {$IFNDEF MSWINDOWS}name '_RichEdit_Hide'{$ENDIF},
  RichEdit_Perform {$IFNDEF MSWINDOWS}name '_RichEdit_Perform'{$ENDIF},
  RichEdit_Refresh {$IFNDEF MSWINDOWS}name '_RichEdit_Refresh'{$ENDIF},
  RichEdit_SendToBack {$IFNDEF MSWINDOWS}name '_RichEdit_SendToBack'{$ENDIF},
  RichEdit_Show {$IFNDEF MSWINDOWS}name '_RichEdit_Show'{$ENDIF},
  RichEdit_GetTextBuf {$IFNDEF MSWINDOWS}name '_RichEdit_GetTextBuf'{$ENDIF},
  RichEdit_FindComponent {$IFNDEF MSWINDOWS}name '_RichEdit_FindComponent'{$ENDIF},
  RichEdit_GetNamePath {$IFNDEF MSWINDOWS}name '_RichEdit_GetNamePath'{$ENDIF},
  RichEdit_Assign {$IFNDEF MSWINDOWS}name '_RichEdit_Assign'{$ENDIF},
  RichEdit_ClassName {$IFNDEF MSWINDOWS}name '_RichEdit_ClassName'{$ENDIF},
  RichEdit_Equals {$IFNDEF MSWINDOWS}name '_RichEdit_Equals'{$ENDIF},
  RichEdit_GetHashCode {$IFNDEF MSWINDOWS}name '_RichEdit_GetHashCode'{$ENDIF},
  RichEdit_ToString {$IFNDEF MSWINDOWS}name '_RichEdit_ToString'{$ENDIF},
  RichEdit_GetAlign {$IFNDEF MSWINDOWS}name '_RichEdit_GetAlign'{$ENDIF},
  RichEdit_SetAlign {$IFNDEF MSWINDOWS}name '_RichEdit_SetAlign'{$ENDIF},
  RichEdit_GetAlignment {$IFNDEF MSWINDOWS}name '_RichEdit_GetAlignment'{$ENDIF},
  RichEdit_SetAlignment {$IFNDEF MSWINDOWS}name '_RichEdit_SetAlignment'{$ENDIF},
  RichEdit_GetAnchors {$IFNDEF MSWINDOWS}name '_RichEdit_GetAnchors'{$ENDIF},
  RichEdit_SetAnchors {$IFNDEF MSWINDOWS}name '_RichEdit_SetAnchors'{$ENDIF},
  RichEdit_GetBevelEdges {$IFNDEF MSWINDOWS}name '_RichEdit_GetBevelEdges'{$ENDIF},
  RichEdit_SetBevelEdges {$IFNDEF MSWINDOWS}name '_RichEdit_SetBevelEdges'{$ENDIF},
  RichEdit_GetBevelInner {$IFNDEF MSWINDOWS}name '_RichEdit_GetBevelInner'{$ENDIF},
  RichEdit_SetBevelInner {$IFNDEF MSWINDOWS}name '_RichEdit_SetBevelInner'{$ENDIF},
  RichEdit_GetBevelOuter {$IFNDEF MSWINDOWS}name '_RichEdit_GetBevelOuter'{$ENDIF},
  RichEdit_SetBevelOuter {$IFNDEF MSWINDOWS}name '_RichEdit_SetBevelOuter'{$ENDIF},
  RichEdit_GetBevelKind {$IFNDEF MSWINDOWS}name '_RichEdit_GetBevelKind'{$ENDIF},
  RichEdit_SetBevelKind {$IFNDEF MSWINDOWS}name '_RichEdit_SetBevelKind'{$ENDIF},
  RichEdit_GetBiDiMode {$IFNDEF MSWINDOWS}name '_RichEdit_GetBiDiMode'{$ENDIF},
  RichEdit_SetBiDiMode {$IFNDEF MSWINDOWS}name '_RichEdit_SetBiDiMode'{$ENDIF},
  RichEdit_GetBorderStyle {$IFNDEF MSWINDOWS}name '_RichEdit_GetBorderStyle'{$ENDIF},
  RichEdit_SetBorderStyle {$IFNDEF MSWINDOWS}name '_RichEdit_SetBorderStyle'{$ENDIF},
  RichEdit_GetBorderWidth {$IFNDEF MSWINDOWS}name '_RichEdit_GetBorderWidth'{$ENDIF},
  RichEdit_SetBorderWidth {$IFNDEF MSWINDOWS}name '_RichEdit_SetBorderWidth'{$ENDIF},
  RichEdit_GetColor {$IFNDEF MSWINDOWS}name '_RichEdit_GetColor'{$ENDIF},
  RichEdit_SetColor {$IFNDEF MSWINDOWS}name '_RichEdit_SetColor'{$ENDIF},
  RichEdit_GetEnabled {$IFNDEF MSWINDOWS}name '_RichEdit_GetEnabled'{$ENDIF},
  RichEdit_SetEnabled {$IFNDEF MSWINDOWS}name '_RichEdit_SetEnabled'{$ENDIF},
  RichEdit_GetFont {$IFNDEF MSWINDOWS}name '_RichEdit_GetFont'{$ENDIF},
  RichEdit_SetFont {$IFNDEF MSWINDOWS}name '_RichEdit_SetFont'{$ENDIF},
  RichEdit_GetHideSelection {$IFNDEF MSWINDOWS}name '_RichEdit_GetHideSelection'{$ENDIF},
  RichEdit_SetHideSelection {$IFNDEF MSWINDOWS}name '_RichEdit_SetHideSelection'{$ENDIF},
  RichEdit_GetHideScrollBars {$IFNDEF MSWINDOWS}name '_RichEdit_GetHideScrollBars'{$ENDIF},
  RichEdit_SetHideScrollBars {$IFNDEF MSWINDOWS}name '_RichEdit_SetHideScrollBars'{$ENDIF},
  RichEdit_GetLines {$IFNDEF MSWINDOWS}name '_RichEdit_GetLines'{$ENDIF},
  RichEdit_SetLines {$IFNDEF MSWINDOWS}name '_RichEdit_SetLines'{$ENDIF},
  RichEdit_GetMaxLength {$IFNDEF MSWINDOWS}name '_RichEdit_GetMaxLength'{$ENDIF},
  RichEdit_SetMaxLength {$IFNDEF MSWINDOWS}name '_RichEdit_SetMaxLength'{$ENDIF},
  RichEdit_GetParentColor {$IFNDEF MSWINDOWS}name '_RichEdit_GetParentColor'{$ENDIF},
  RichEdit_SetParentColor {$IFNDEF MSWINDOWS}name '_RichEdit_SetParentColor'{$ENDIF},
  RichEdit_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_RichEdit_GetParentCtl3D'{$ENDIF},
  RichEdit_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_RichEdit_SetParentCtl3D'{$ENDIF},
  RichEdit_GetParentFont {$IFNDEF MSWINDOWS}name '_RichEdit_GetParentFont'{$ENDIF},
  RichEdit_SetParentFont {$IFNDEF MSWINDOWS}name '_RichEdit_SetParentFont'{$ENDIF},
  RichEdit_GetParentShowHint {$IFNDEF MSWINDOWS}name '_RichEdit_GetParentShowHint'{$ENDIF},
  RichEdit_SetParentShowHint {$IFNDEF MSWINDOWS}name '_RichEdit_SetParentShowHint'{$ENDIF},
  RichEdit_GetPlainText {$IFNDEF MSWINDOWS}name '_RichEdit_GetPlainText'{$ENDIF},
  RichEdit_SetPlainText {$IFNDEF MSWINDOWS}name '_RichEdit_SetPlainText'{$ENDIF},
  RichEdit_GetPopupMenu {$IFNDEF MSWINDOWS}name '_RichEdit_GetPopupMenu'{$ENDIF},
  RichEdit_SetPopupMenu {$IFNDEF MSWINDOWS}name '_RichEdit_SetPopupMenu'{$ENDIF},
  RichEdit_GetReadOnly {$IFNDEF MSWINDOWS}name '_RichEdit_GetReadOnly'{$ENDIF},
  RichEdit_SetReadOnly {$IFNDEF MSWINDOWS}name '_RichEdit_SetReadOnly'{$ENDIF},
  RichEdit_GetScrollBars {$IFNDEF MSWINDOWS}name '_RichEdit_GetScrollBars'{$ENDIF},
  RichEdit_SetScrollBars {$IFNDEF MSWINDOWS}name '_RichEdit_SetScrollBars'{$ENDIF},
  RichEdit_GetShowHint {$IFNDEF MSWINDOWS}name '_RichEdit_GetShowHint'{$ENDIF},
  RichEdit_SetShowHint {$IFNDEF MSWINDOWS}name '_RichEdit_SetShowHint'{$ENDIF},
  RichEdit_GetTabOrder {$IFNDEF MSWINDOWS}name '_RichEdit_GetTabOrder'{$ENDIF},
  RichEdit_SetTabOrder {$IFNDEF MSWINDOWS}name '_RichEdit_SetTabOrder'{$ENDIF},
  RichEdit_GetTabStop {$IFNDEF MSWINDOWS}name '_RichEdit_GetTabStop'{$ENDIF},
  RichEdit_SetTabStop {$IFNDEF MSWINDOWS}name '_RichEdit_SetTabStop'{$ENDIF},
  RichEdit_GetVisible {$IFNDEF MSWINDOWS}name '_RichEdit_GetVisible'{$ENDIF},
  RichEdit_SetVisible {$IFNDEF MSWINDOWS}name '_RichEdit_SetVisible'{$ENDIF},
  RichEdit_GetWantTabs {$IFNDEF MSWINDOWS}name '_RichEdit_GetWantTabs'{$ENDIF},
  RichEdit_SetWantTabs {$IFNDEF MSWINDOWS}name '_RichEdit_SetWantTabs'{$ENDIF},
  RichEdit_GetWantReturns {$IFNDEF MSWINDOWS}name '_RichEdit_GetWantReturns'{$ENDIF},
  RichEdit_SetWantReturns {$IFNDEF MSWINDOWS}name '_RichEdit_SetWantReturns'{$ENDIF},
  RichEdit_GetWordWrap {$IFNDEF MSWINDOWS}name '_RichEdit_GetWordWrap'{$ENDIF},
  RichEdit_SetWordWrap {$IFNDEF MSWINDOWS}name '_RichEdit_SetWordWrap'{$ENDIF},
  RichEdit_GetStyleElements {$IFNDEF MSWINDOWS}name '_RichEdit_GetStyleElements'{$ENDIF},
  RichEdit_SetStyleElements {$IFNDEF MSWINDOWS}name '_RichEdit_SetStyleElements'{$ENDIF},
  RichEdit_GetZoom {$IFNDEF MSWINDOWS}name '_RichEdit_GetZoom'{$ENDIF},
  RichEdit_SetZoom {$IFNDEF MSWINDOWS}name '_RichEdit_SetZoom'{$ENDIF},
  RichEdit_SetOnChange {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnChange'{$ENDIF},
  RichEdit_SetOnClick {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnClick'{$ENDIF},
  RichEdit_SetOnDblClick {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnDblClick'{$ENDIF},
  RichEdit_SetOnEnter {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnEnter'{$ENDIF},
  RichEdit_SetOnExit {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnExit'{$ENDIF},
  RichEdit_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnKeyDown'{$ENDIF},
  RichEdit_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnKeyPress'{$ENDIF},
  RichEdit_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnKeyUp'{$ENDIF},
  RichEdit_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnMouseDown'{$ENDIF},
  RichEdit_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnMouseEnter'{$ENDIF},
  RichEdit_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnMouseLeave'{$ENDIF},
  RichEdit_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnMouseMove'{$ENDIF},
  RichEdit_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnMouseUp'{$ENDIF},
  RichEdit_SetOnMouseWheel {$IFNDEF MSWINDOWS}name '_RichEdit_SetOnMouseWheel'{$ENDIF},
  RichEdit_GetActiveLineNo {$IFNDEF MSWINDOWS}name '_RichEdit_GetActiveLineNo'{$ENDIF},
  RichEdit_GetDefAttributes {$IFNDEF MSWINDOWS}name '_RichEdit_GetDefAttributes'{$ENDIF},
  RichEdit_SetDefAttributes {$IFNDEF MSWINDOWS}name '_RichEdit_SetDefAttributes'{$ENDIF},
  RichEdit_GetSelAttributes {$IFNDEF MSWINDOWS}name '_RichEdit_GetSelAttributes'{$ENDIF},
  RichEdit_SetSelAttributes {$IFNDEF MSWINDOWS}name '_RichEdit_SetSelAttributes'{$ENDIF},
  RichEdit_GetPageRect {$IFNDEF MSWINDOWS}name '_RichEdit_GetPageRect'{$ENDIF},
  RichEdit_SetPageRect {$IFNDEF MSWINDOWS}name '_RichEdit_SetPageRect'{$ENDIF},
  RichEdit_GetParagraph {$IFNDEF MSWINDOWS}name '_RichEdit_GetParagraph'{$ENDIF},
  RichEdit_GetCaretPos {$IFNDEF MSWINDOWS}name '_RichEdit_GetCaretPos'{$ENDIF},
  RichEdit_SetCaretPos {$IFNDEF MSWINDOWS}name '_RichEdit_SetCaretPos'{$ENDIF},
  RichEdit_GetModified {$IFNDEF MSWINDOWS}name '_RichEdit_GetModified'{$ENDIF},
  RichEdit_SetModified {$IFNDEF MSWINDOWS}name '_RichEdit_SetModified'{$ENDIF},
  RichEdit_GetSelLength {$IFNDEF MSWINDOWS}name '_RichEdit_GetSelLength'{$ENDIF},
  RichEdit_SetSelLength {$IFNDEF MSWINDOWS}name '_RichEdit_SetSelLength'{$ENDIF},
  RichEdit_GetSelStart {$IFNDEF MSWINDOWS}name '_RichEdit_GetSelStart'{$ENDIF},
  RichEdit_SetSelStart {$IFNDEF MSWINDOWS}name '_RichEdit_SetSelStart'{$ENDIF},
  RichEdit_GetSelText {$IFNDEF MSWINDOWS}name '_RichEdit_GetSelText'{$ENDIF},
  RichEdit_SetSelText {$IFNDEF MSWINDOWS}name '_RichEdit_SetSelText'{$ENDIF},
  RichEdit_GetText {$IFNDEF MSWINDOWS}name '_RichEdit_GetText'{$ENDIF},
  RichEdit_SetText {$IFNDEF MSWINDOWS}name '_RichEdit_SetText'{$ENDIF},
  RichEdit_GetTextHint {$IFNDEF MSWINDOWS}name '_RichEdit_GetTextHint'{$ENDIF},
  RichEdit_SetTextHint {$IFNDEF MSWINDOWS}name '_RichEdit_SetTextHint'{$ENDIF},
  RichEdit_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_RichEdit_GetDoubleBuffered'{$ENDIF},
  RichEdit_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_RichEdit_SetDoubleBuffered'{$ENDIF},
  RichEdit_GetBrush {$IFNDEF MSWINDOWS}name '_RichEdit_GetBrush'{$ENDIF},
  RichEdit_GetControlCount {$IFNDEF MSWINDOWS}name '_RichEdit_GetControlCount'{$ENDIF},
  RichEdit_GetHandle {$IFNDEF MSWINDOWS}name '_RichEdit_GetHandle'{$ENDIF},
  RichEdit_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_RichEdit_GetParentDoubleBuffered'{$ENDIF},
  RichEdit_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_RichEdit_SetParentDoubleBuffered'{$ENDIF},
  RichEdit_GetParentWindow {$IFNDEF MSWINDOWS}name '_RichEdit_GetParentWindow'{$ENDIF},
  RichEdit_SetParentWindow {$IFNDEF MSWINDOWS}name '_RichEdit_SetParentWindow'{$ENDIF},
  RichEdit_GetAction {$IFNDEF MSWINDOWS}name '_RichEdit_GetAction'{$ENDIF},
  RichEdit_SetAction {$IFNDEF MSWINDOWS}name '_RichEdit_SetAction'{$ENDIF},
  RichEdit_GetBoundsRect {$IFNDEF MSWINDOWS}name '_RichEdit_GetBoundsRect'{$ENDIF},
  RichEdit_SetBoundsRect {$IFNDEF MSWINDOWS}name '_RichEdit_SetBoundsRect'{$ENDIF},
  RichEdit_GetClientHeight {$IFNDEF MSWINDOWS}name '_RichEdit_GetClientHeight'{$ENDIF},
  RichEdit_SetClientHeight {$IFNDEF MSWINDOWS}name '_RichEdit_SetClientHeight'{$ENDIF},
  RichEdit_GetClientRect {$IFNDEF MSWINDOWS}name '_RichEdit_GetClientRect'{$ENDIF},
  RichEdit_GetClientWidth {$IFNDEF MSWINDOWS}name '_RichEdit_GetClientWidth'{$ENDIF},
  RichEdit_SetClientWidth {$IFNDEF MSWINDOWS}name '_RichEdit_SetClientWidth'{$ENDIF},
  RichEdit_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_RichEdit_GetExplicitLeft'{$ENDIF},
  RichEdit_GetExplicitTop {$IFNDEF MSWINDOWS}name '_RichEdit_GetExplicitTop'{$ENDIF},
  RichEdit_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_RichEdit_GetExplicitWidth'{$ENDIF},
  RichEdit_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_RichEdit_GetExplicitHeight'{$ENDIF},
  RichEdit_GetParent {$IFNDEF MSWINDOWS}name '_RichEdit_GetParent'{$ENDIF},
  RichEdit_SetParent {$IFNDEF MSWINDOWS}name '_RichEdit_SetParent'{$ENDIF},
  RichEdit_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_RichEdit_GetAlignWithMargins'{$ENDIF},
  RichEdit_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_RichEdit_SetAlignWithMargins'{$ENDIF},
  RichEdit_GetLeft {$IFNDEF MSWINDOWS}name '_RichEdit_GetLeft'{$ENDIF},
  RichEdit_SetLeft {$IFNDEF MSWINDOWS}name '_RichEdit_SetLeft'{$ENDIF},
  RichEdit_GetTop {$IFNDEF MSWINDOWS}name '_RichEdit_GetTop'{$ENDIF},
  RichEdit_SetTop {$IFNDEF MSWINDOWS}name '_RichEdit_SetTop'{$ENDIF},
  RichEdit_GetWidth {$IFNDEF MSWINDOWS}name '_RichEdit_GetWidth'{$ENDIF},
  RichEdit_SetWidth {$IFNDEF MSWINDOWS}name '_RichEdit_SetWidth'{$ENDIF},
  RichEdit_GetHeight {$IFNDEF MSWINDOWS}name '_RichEdit_GetHeight'{$ENDIF},
  RichEdit_SetHeight {$IFNDEF MSWINDOWS}name '_RichEdit_SetHeight'{$ENDIF},
  RichEdit_GetCursor {$IFNDEF MSWINDOWS}name '_RichEdit_GetCursor'{$ENDIF},
  RichEdit_SetCursor {$IFNDEF MSWINDOWS}name '_RichEdit_SetCursor'{$ENDIF},
  RichEdit_GetHint {$IFNDEF MSWINDOWS}name '_RichEdit_GetHint'{$ENDIF},
  RichEdit_SetHint {$IFNDEF MSWINDOWS}name '_RichEdit_SetHint'{$ENDIF},
  RichEdit_GetMargins {$IFNDEF MSWINDOWS}name '_RichEdit_GetMargins'{$ENDIF},
  RichEdit_SetMargins {$IFNDEF MSWINDOWS}name '_RichEdit_SetMargins'{$ENDIF},
  RichEdit_GetComponentCount {$IFNDEF MSWINDOWS}name '_RichEdit_GetComponentCount'{$ENDIF},
  RichEdit_GetComponentIndex {$IFNDEF MSWINDOWS}name '_RichEdit_GetComponentIndex'{$ENDIF},
  RichEdit_SetComponentIndex {$IFNDEF MSWINDOWS}name '_RichEdit_SetComponentIndex'{$ENDIF},
  RichEdit_GetOwner {$IFNDEF MSWINDOWS}name '_RichEdit_GetOwner'{$ENDIF},
  RichEdit_GetName {$IFNDEF MSWINDOWS}name '_RichEdit_GetName'{$ENDIF},
  RichEdit_SetName {$IFNDEF MSWINDOWS}name '_RichEdit_SetName'{$ENDIF},
  RichEdit_GetTag {$IFNDEF MSWINDOWS}name '_RichEdit_GetTag'{$ENDIF},
  RichEdit_SetTag {$IFNDEF MSWINDOWS}name '_RichEdit_SetTag'{$ENDIF},
  RichEdit_GetControls {$IFNDEF MSWINDOWS}name '_RichEdit_GetControls'{$ENDIF},
  RichEdit_GetComponents {$IFNDEF MSWINDOWS}name '_RichEdit_GetComponents'{$ENDIF};

