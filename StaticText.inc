
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function StaticText_Create(AOwner: TComponent): TStaticText; cdecl;
begin
  Result :=  TStaticText.Create(AOwner);
end;

procedure StaticText_Free(AObj: TStaticText); cdecl;
begin
  AObj.Free;
end;

function StaticText_CanFocus(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure StaticText_FlipChildren(AObj: TStaticText; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function StaticText_Focused(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function StaticText_HandleAllocated(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure StaticText_Invalidate(AObj: TStaticText); cdecl;
begin
  AObj.Invalidate;
end;

procedure StaticText_Realign(AObj: TStaticText); cdecl;
begin
  AObj.Realign;
end;

procedure StaticText_Repaint(AObj: TStaticText); cdecl;
begin
  AObj.Repaint;
end;

procedure StaticText_ScaleBy(AObj: TStaticText; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure StaticText_SetBounds(AObj: TStaticText; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure StaticText_SetFocus(AObj: TStaticText); cdecl;
begin
  AObj.SetFocus;
end;

procedure StaticText_Update(AObj: TStaticText); cdecl;
begin
  AObj.Update;
end;

procedure StaticText_BringToFront(AObj: TStaticText); cdecl;
begin
  AObj.BringToFront;
end;

function StaticText_HasParent(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure StaticText_Hide(AObj: TStaticText); cdecl;
begin
  AObj.Hide;
end;

function StaticText_Perform(AObj: TStaticText; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure StaticText_Refresh(AObj: TStaticText); cdecl;
begin
  AObj.Refresh;
end;

procedure StaticText_SendToBack(AObj: TStaticText); cdecl;
begin
  AObj.SendToBack;
end;

procedure StaticText_Show(AObj: TStaticText); cdecl;
begin
  AObj.Show;
end;

function StaticText_GetTextBuf(AObj: TStaticText; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function StaticText_FindComponent(AObj: TStaticText; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function StaticText_GetNamePath(AObj: TStaticText): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure StaticText_Assign(AObj: TStaticText; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function StaticText_ClassName(AObj: TStaticText): PWideChar; cdecl;
begin
  Result := ShortstrToPWideChar(AObj.ClassName);
end;

function StaticText_Equals(AObj: TStaticText; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function StaticText_GetHashCode(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function StaticText_ToString(AObj: TStaticText): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function StaticText_GetAlign(AObj: TStaticText): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure StaticText_SetAlign(AObj: TStaticText; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function StaticText_GetAlignment(AObj: TStaticText): TAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure StaticText_SetAlignment(AObj: TStaticText; AValue: TAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function StaticText_GetAnchors(AObj: TStaticText): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure StaticText_SetAnchors(AObj: TStaticText; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function StaticText_GetAutoSize(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure StaticText_SetAutoSize(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

//function StaticText_GetBevelEdges(AObj: TStaticText): TBevelEdges; cdecl;
//begin
//  Result :=  AObj.BevelEdges;
//end;
//
//procedure StaticText_SetBevelEdges(AObj: TStaticText; AValue: TBevelEdges); cdecl;
//begin
//  AObj.BevelEdges := AValue;
//end;
//
//function StaticText_GetBevelInner(AObj: TStaticText): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelInner;
//end;
//
//procedure StaticText_SetBevelInner(AObj: TStaticText; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelInner := AValue;
//end;
//
//function StaticText_GetBevelKind(AObj: TStaticText): TBevelKind; cdecl;
//begin
//  Result :=  AObj.BevelKind;
//end;
//
//procedure StaticText_SetBevelKind(AObj: TStaticText; AValue: TBevelKind); cdecl;
//begin
//  AObj.BevelKind := AValue;
//end;
//
//function StaticText_GetBevelOuter(AObj: TStaticText): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelOuter;
//end;
//
//procedure StaticText_SetBevelOuter(AObj: TStaticText; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelOuter := AValue;
//end;

function StaticText_GetBiDiMode(AObj: TStaticText): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure StaticText_SetBiDiMode(AObj: TStaticText; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function StaticText_GetBorderStyle(AObj: TStaticText): TStaticBorderStyle; cdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure StaticText_SetBorderStyle(AObj: TStaticText; AValue: TStaticBorderStyle); cdecl;
begin
  AObj.BorderStyle := AValue;
end;

function StaticText_GetCaption(AObj: TStaticText): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure StaticText_SetCaption(AObj: TStaticText; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function StaticText_GetColor(AObj: TStaticText): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure StaticText_SetColor(AObj: TStaticText; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function StaticText_GetDoubleBuffered(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure StaticText_SetDoubleBuffered(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function StaticText_GetEnabled(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure StaticText_SetEnabled(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function StaticText_GetFont(AObj: TStaticText): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure StaticText_SetFont(AObj: TStaticText; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function StaticText_GetParentColor(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure StaticText_SetParentColor(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function StaticText_GetParentDoubleBuffered(AObj: TStaticText): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure StaticText_SetParentDoubleBuffered(AObj: TStaticText; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function StaticText_GetParentFont(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure StaticText_SetParentFont(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function StaticText_GetParentShowHint(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure StaticText_SetParentShowHint(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function StaticText_GetPopupMenu(AObj: TStaticText): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure StaticText_SetPopupMenu(AObj: TStaticText; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function StaticText_GetShowAccelChar(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.ShowAccelChar;
end;

procedure StaticText_SetShowAccelChar(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.ShowAccelChar := AValue;
end;

function StaticText_GetShowHint(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure StaticText_SetShowHint(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function StaticText_GetTabOrder(AObj: TStaticText): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure StaticText_SetTabOrder(AObj: TStaticText; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function StaticText_GetTabStop(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure StaticText_SetTabStop(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function StaticText_GetTransparent(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure StaticText_SetTransparent(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function StaticText_GetVisible(AObj: TStaticText): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure StaticText_SetVisible(AObj: TStaticText; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function StaticText_GetStyleElements(AObj: TStaticText): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure StaticText_SetStyleElements(AObj: TStaticText; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure StaticText_SetOnClick(AObj: TStaticText; AEventId: NativeUInt); stdcall;
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

procedure StaticText_SetOnDblClick(AObj: TStaticText; AEventId: NativeUInt); stdcall;
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

procedure StaticText_SetOnMouseDown(AObj: TStaticText; AEventId: NativeUInt); stdcall;
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

procedure StaticText_SetOnMouseEnter(AObj: TStaticText; AEventId: NativeUInt); stdcall;
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

procedure StaticText_SetOnMouseLeave(AObj: TStaticText; AEventId: NativeUInt); stdcall;
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

procedure StaticText_SetOnMouseMove(AObj: TStaticText; AEventId: NativeUInt); stdcall;
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

procedure StaticText_SetOnMouseUp(AObj: TStaticText; AEventId: NativeUInt); stdcall;
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

function StaticText_GetBrush(AObj: TStaticText): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function StaticText_GetControlCount(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function StaticText_GetHandle(AObj: TStaticText): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function StaticText_GetParentWindow(AObj: TStaticText): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure StaticText_SetParentWindow(AObj: TStaticText; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function StaticText_GetAction(AObj: TStaticText): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure StaticText_SetAction(AObj: TStaticText; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure StaticText_GetBoundsRect(AObj: TStaticText; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure StaticText_SetBoundsRect(AObj: TStaticText; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function StaticText_GetClientHeight(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure StaticText_SetClientHeight(AObj: TStaticText; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure StaticText_GetClientRect(AObj: TStaticText; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function StaticText_GetClientWidth(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure StaticText_SetClientWidth(AObj: TStaticText; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function StaticText_GetExplicitLeft(AObj: TStaticText): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function StaticText_GetExplicitTop(AObj: TStaticText): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function StaticText_GetExplicitWidth(AObj: TStaticText): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function StaticText_GetExplicitHeight(AObj: TStaticText): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function StaticText_GetParent(AObj: TStaticText): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure StaticText_SetParent(AObj: TStaticText; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function StaticText_GetAlignWithMargins(AObj: TStaticText): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure StaticText_SetAlignWithMargins(AObj: TStaticText; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function StaticText_GetLeft(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure StaticText_SetLeft(AObj: TStaticText; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function StaticText_GetTop(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure StaticText_SetTop(AObj: TStaticText; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function StaticText_GetWidth(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure StaticText_SetWidth(AObj: TStaticText; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function StaticText_GetHeight(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure StaticText_SetHeight(AObj: TStaticText; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function StaticText_GetCursor(AObj: TStaticText): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure StaticText_SetCursor(AObj: TStaticText; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function StaticText_GetHint(AObj: TStaticText): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure StaticText_SetHint(AObj: TStaticText; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function StaticText_GetMargins(AObj: TStaticText): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure StaticText_SetMargins(AObj: TStaticText; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function StaticText_GetComponentCount(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function StaticText_GetComponentIndex(AObj: TStaticText): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure StaticText_SetComponentIndex(AObj: TStaticText; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function StaticText_GetOwner(AObj: TStaticText): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function StaticText_GetName(AObj: TStaticText): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure StaticText_SetName(AObj: TStaticText; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function StaticText_GetTag(AObj: TStaticText): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure StaticText_SetTag(AObj: TStaticText; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function StaticText_GetControls(AObj: TStaticText; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function StaticText_GetComponents(AObj: TStaticText; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  StaticText_Create {$IFNDEF MSWINDOWS}name '_StaticText_Create'{$ENDIF},
  StaticText_Free {$IFNDEF MSWINDOWS}name '_StaticText_Free'{$ENDIF},
  StaticText_CanFocus {$IFNDEF MSWINDOWS}name '_StaticText_CanFocus'{$ENDIF},
  StaticText_FlipChildren {$IFNDEF MSWINDOWS}name '_StaticText_FlipChildren'{$ENDIF},
  StaticText_Focused {$IFNDEF MSWINDOWS}name '_StaticText_Focused'{$ENDIF},
  StaticText_HandleAllocated {$IFNDEF MSWINDOWS}name '_StaticText_HandleAllocated'{$ENDIF},
  StaticText_Invalidate {$IFNDEF MSWINDOWS}name '_StaticText_Invalidate'{$ENDIF},
  StaticText_Realign {$IFNDEF MSWINDOWS}name '_StaticText_Realign'{$ENDIF},
  StaticText_Repaint {$IFNDEF MSWINDOWS}name '_StaticText_Repaint'{$ENDIF},
  StaticText_ScaleBy {$IFNDEF MSWINDOWS}name '_StaticText_ScaleBy'{$ENDIF},
  StaticText_SetBounds {$IFNDEF MSWINDOWS}name '_StaticText_SetBounds'{$ENDIF},
  StaticText_SetFocus {$IFNDEF MSWINDOWS}name '_StaticText_SetFocus'{$ENDIF},
  StaticText_Update {$IFNDEF MSWINDOWS}name '_StaticText_Update'{$ENDIF},
  StaticText_BringToFront {$IFNDEF MSWINDOWS}name '_StaticText_BringToFront'{$ENDIF},
  StaticText_HasParent {$IFNDEF MSWINDOWS}name '_StaticText_HasParent'{$ENDIF},
  StaticText_Hide {$IFNDEF MSWINDOWS}name '_StaticText_Hide'{$ENDIF},
  StaticText_Perform {$IFNDEF MSWINDOWS}name '_StaticText_Perform'{$ENDIF},
  StaticText_Refresh {$IFNDEF MSWINDOWS}name '_StaticText_Refresh'{$ENDIF},
  StaticText_SendToBack {$IFNDEF MSWINDOWS}name '_StaticText_SendToBack'{$ENDIF},
  StaticText_Show {$IFNDEF MSWINDOWS}name '_StaticText_Show'{$ENDIF},
  StaticText_GetTextBuf {$IFNDEF MSWINDOWS}name '_StaticText_GetTextBuf'{$ENDIF},
  StaticText_FindComponent {$IFNDEF MSWINDOWS}name '_StaticText_FindComponent'{$ENDIF},
  StaticText_GetNamePath {$IFNDEF MSWINDOWS}name '_StaticText_GetNamePath'{$ENDIF},
  StaticText_Assign {$IFNDEF MSWINDOWS}name '_StaticText_Assign'{$ENDIF},
  StaticText_ClassName {$IFNDEF MSWINDOWS}name '_StaticText_ClassName'{$ENDIF},
  StaticText_Equals {$IFNDEF MSWINDOWS}name '_StaticText_Equals'{$ENDIF},
  StaticText_GetHashCode {$IFNDEF MSWINDOWS}name '_StaticText_GetHashCode'{$ENDIF},
  StaticText_ToString {$IFNDEF MSWINDOWS}name '_StaticText_ToString'{$ENDIF},
  StaticText_GetAlign {$IFNDEF MSWINDOWS}name '_StaticText_GetAlign'{$ENDIF},
  StaticText_SetAlign {$IFNDEF MSWINDOWS}name '_StaticText_SetAlign'{$ENDIF},
  StaticText_GetAlignment {$IFNDEF MSWINDOWS}name '_StaticText_GetAlignment'{$ENDIF},
  StaticText_SetAlignment {$IFNDEF MSWINDOWS}name '_StaticText_SetAlignment'{$ENDIF},
  StaticText_GetAnchors {$IFNDEF MSWINDOWS}name '_StaticText_GetAnchors'{$ENDIF},
  StaticText_SetAnchors {$IFNDEF MSWINDOWS}name '_StaticText_SetAnchors'{$ENDIF},
  StaticText_GetAutoSize {$IFNDEF MSWINDOWS}name '_StaticText_GetAutoSize'{$ENDIF},
  StaticText_SetAutoSize {$IFNDEF MSWINDOWS}name '_StaticText_SetAutoSize'{$ENDIF},
  //StaticText_GetBevelEdges {$IFNDEF MSWINDOWS}name '_StaticText_GetBevelEdges'{$ENDIF},
  //StaticText_SetBevelEdges {$IFNDEF MSWINDOWS}name '_StaticText_SetBevelEdges'{$ENDIF},
  //StaticText_GetBevelInner {$IFNDEF MSWINDOWS}name '_StaticText_GetBevelInner'{$ENDIF},
  //StaticText_SetBevelInner {$IFNDEF MSWINDOWS}name '_StaticText_SetBevelInner'{$ENDIF},
  //StaticText_GetBevelKind {$IFNDEF MSWINDOWS}name '_StaticText_GetBevelKind'{$ENDIF},
  //StaticText_SetBevelKind {$IFNDEF MSWINDOWS}name '_StaticText_SetBevelKind'{$ENDIF},
  //StaticText_GetBevelOuter {$IFNDEF MSWINDOWS}name '_StaticText_GetBevelOuter'{$ENDIF},
  //StaticText_SetBevelOuter {$IFNDEF MSWINDOWS}name '_StaticText_SetBevelOuter'{$ENDIF},
  StaticText_GetBiDiMode {$IFNDEF MSWINDOWS}name '_StaticText_GetBiDiMode'{$ENDIF},
  StaticText_SetBiDiMode {$IFNDEF MSWINDOWS}name '_StaticText_SetBiDiMode'{$ENDIF},
  StaticText_GetBorderStyle {$IFNDEF MSWINDOWS}name '_StaticText_GetBorderStyle'{$ENDIF},
  StaticText_SetBorderStyle {$IFNDEF MSWINDOWS}name '_StaticText_SetBorderStyle'{$ENDIF},
  StaticText_GetCaption {$IFNDEF MSWINDOWS}name '_StaticText_GetCaption'{$ENDIF},
  StaticText_SetCaption {$IFNDEF MSWINDOWS}name '_StaticText_SetCaption'{$ENDIF},
  StaticText_GetColor {$IFNDEF MSWINDOWS}name '_StaticText_GetColor'{$ENDIF},
  StaticText_SetColor {$IFNDEF MSWINDOWS}name '_StaticText_SetColor'{$ENDIF},
  StaticText_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_StaticText_GetDoubleBuffered'{$ENDIF},
  StaticText_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_StaticText_SetDoubleBuffered'{$ENDIF},
  StaticText_GetEnabled {$IFNDEF MSWINDOWS}name '_StaticText_GetEnabled'{$ENDIF},
  StaticText_SetEnabled {$IFNDEF MSWINDOWS}name '_StaticText_SetEnabled'{$ENDIF},
  StaticText_GetFont {$IFNDEF MSWINDOWS}name '_StaticText_GetFont'{$ENDIF},
  StaticText_SetFont {$IFNDEF MSWINDOWS}name '_StaticText_SetFont'{$ENDIF},
  StaticText_GetParentColor {$IFNDEF MSWINDOWS}name '_StaticText_GetParentColor'{$ENDIF},
  StaticText_SetParentColor {$IFNDEF MSWINDOWS}name '_StaticText_SetParentColor'{$ENDIF},
  //StaticText_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_StaticText_GetParentDoubleBuffered'{$ENDIF},
  //StaticText_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_StaticText_SetParentDoubleBuffered'{$ENDIF},
  StaticText_GetParentFont {$IFNDEF MSWINDOWS}name '_StaticText_GetParentFont'{$ENDIF},
  StaticText_SetParentFont {$IFNDEF MSWINDOWS}name '_StaticText_SetParentFont'{$ENDIF},
  StaticText_GetParentShowHint {$IFNDEF MSWINDOWS}name '_StaticText_GetParentShowHint'{$ENDIF},
  StaticText_SetParentShowHint {$IFNDEF MSWINDOWS}name '_StaticText_SetParentShowHint'{$ENDIF},
  StaticText_GetPopupMenu {$IFNDEF MSWINDOWS}name '_StaticText_GetPopupMenu'{$ENDIF},
  StaticText_SetPopupMenu {$IFNDEF MSWINDOWS}name '_StaticText_SetPopupMenu'{$ENDIF},
  StaticText_GetShowAccelChar {$IFNDEF MSWINDOWS}name '_StaticText_GetShowAccelChar'{$ENDIF},
  StaticText_SetShowAccelChar {$IFNDEF MSWINDOWS}name '_StaticText_SetShowAccelChar'{$ENDIF},
  StaticText_GetShowHint {$IFNDEF MSWINDOWS}name '_StaticText_GetShowHint'{$ENDIF},
  StaticText_SetShowHint {$IFNDEF MSWINDOWS}name '_StaticText_SetShowHint'{$ENDIF},
  StaticText_GetTabOrder {$IFNDEF MSWINDOWS}name '_StaticText_GetTabOrder'{$ENDIF},
  StaticText_SetTabOrder {$IFNDEF MSWINDOWS}name '_StaticText_SetTabOrder'{$ENDIF},
  StaticText_GetTabStop {$IFNDEF MSWINDOWS}name '_StaticText_GetTabStop'{$ENDIF},
  StaticText_SetTabStop {$IFNDEF MSWINDOWS}name '_StaticText_SetTabStop'{$ENDIF},
  StaticText_GetTransparent {$IFNDEF MSWINDOWS}name '_StaticText_GetTransparent'{$ENDIF},
  StaticText_SetTransparent {$IFNDEF MSWINDOWS}name '_StaticText_SetTransparent'{$ENDIF},
  StaticText_GetVisible {$IFNDEF MSWINDOWS}name '_StaticText_GetVisible'{$ENDIF},
  StaticText_SetVisible {$IFNDEF MSWINDOWS}name '_StaticText_SetVisible'{$ENDIF},
  //StaticText_GetStyleElements {$IFNDEF MSWINDOWS}name '_StaticText_GetStyleElements'{$ENDIF},
  //StaticText_SetStyleElements {$IFNDEF MSWINDOWS}name '_StaticText_SetStyleElements'{$ENDIF},
  StaticText_SetOnClick {$IFNDEF MSWINDOWS}name '_StaticText_SetOnClick'{$ENDIF},
  StaticText_SetOnDblClick {$IFNDEF MSWINDOWS}name '_StaticText_SetOnDblClick'{$ENDIF},
  StaticText_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_StaticText_SetOnMouseDown'{$ENDIF},
  StaticText_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_StaticText_SetOnMouseEnter'{$ENDIF},
  StaticText_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_StaticText_SetOnMouseLeave'{$ENDIF},
  StaticText_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_StaticText_SetOnMouseMove'{$ENDIF},
  StaticText_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_StaticText_SetOnMouseUp'{$ENDIF},
  StaticText_GetBrush {$IFNDEF MSWINDOWS}name '_StaticText_GetBrush'{$ENDIF},
  StaticText_GetControlCount {$IFNDEF MSWINDOWS}name '_StaticText_GetControlCount'{$ENDIF},
  StaticText_GetHandle {$IFNDEF MSWINDOWS}name '_StaticText_GetHandle'{$ENDIF},
  StaticText_GetParentWindow {$IFNDEF MSWINDOWS}name '_StaticText_GetParentWindow'{$ENDIF},
  StaticText_SetParentWindow {$IFNDEF MSWINDOWS}name '_StaticText_SetParentWindow'{$ENDIF},
  StaticText_GetAction {$IFNDEF MSWINDOWS}name '_StaticText_GetAction'{$ENDIF},
  StaticText_SetAction {$IFNDEF MSWINDOWS}name '_StaticText_SetAction'{$ENDIF},
  StaticText_GetBoundsRect {$IFNDEF MSWINDOWS}name '_StaticText_GetBoundsRect'{$ENDIF},
  StaticText_SetBoundsRect {$IFNDEF MSWINDOWS}name '_StaticText_SetBoundsRect'{$ENDIF},
  StaticText_GetClientHeight {$IFNDEF MSWINDOWS}name '_StaticText_GetClientHeight'{$ENDIF},
  StaticText_SetClientHeight {$IFNDEF MSWINDOWS}name '_StaticText_SetClientHeight'{$ENDIF},
  StaticText_GetClientRect {$IFNDEF MSWINDOWS}name '_StaticText_GetClientRect'{$ENDIF},
  StaticText_GetClientWidth {$IFNDEF MSWINDOWS}name '_StaticText_GetClientWidth'{$ENDIF},
  StaticText_SetClientWidth {$IFNDEF MSWINDOWS}name '_StaticText_SetClientWidth'{$ENDIF},
  //StaticText_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_StaticText_GetExplicitLeft'{$ENDIF},
  //StaticText_GetExplicitTop {$IFNDEF MSWINDOWS}name '_StaticText_GetExplicitTop'{$ENDIF},
  //StaticText_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_StaticText_GetExplicitWidth'{$ENDIF},
  //StaticText_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_StaticText_GetExplicitHeight'{$ENDIF},
  StaticText_GetParent {$IFNDEF MSWINDOWS}name '_StaticText_GetParent'{$ENDIF},
  StaticText_SetParent {$IFNDEF MSWINDOWS}name '_StaticText_SetParent'{$ENDIF},
  //StaticText_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_StaticText_GetAlignWithMargins'{$ENDIF},
  //StaticText_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_StaticText_SetAlignWithMargins'{$ENDIF},
  StaticText_GetLeft {$IFNDEF MSWINDOWS}name '_StaticText_GetLeft'{$ENDIF},
  StaticText_SetLeft {$IFNDEF MSWINDOWS}name '_StaticText_SetLeft'{$ENDIF},
  StaticText_GetTop {$IFNDEF MSWINDOWS}name '_StaticText_GetTop'{$ENDIF},
  StaticText_SetTop {$IFNDEF MSWINDOWS}name '_StaticText_SetTop'{$ENDIF},
  StaticText_GetWidth {$IFNDEF MSWINDOWS}name '_StaticText_GetWidth'{$ENDIF},
  StaticText_SetWidth {$IFNDEF MSWINDOWS}name '_StaticText_SetWidth'{$ENDIF},
  StaticText_GetHeight {$IFNDEF MSWINDOWS}name '_StaticText_GetHeight'{$ENDIF},
  StaticText_SetHeight {$IFNDEF MSWINDOWS}name '_StaticText_SetHeight'{$ENDIF},
  StaticText_GetCursor {$IFNDEF MSWINDOWS}name '_StaticText_GetCursor'{$ENDIF},
  StaticText_SetCursor {$IFNDEF MSWINDOWS}name '_StaticText_SetCursor'{$ENDIF},
  StaticText_GetHint {$IFNDEF MSWINDOWS}name '_StaticText_GetHint'{$ENDIF},
  StaticText_SetHint {$IFNDEF MSWINDOWS}name '_StaticText_SetHint'{$ENDIF},
  //StaticText_GetMargins {$IFNDEF MSWINDOWS}name '_StaticText_GetMargins'{$ENDIF},
  //StaticText_SetMargins {$IFNDEF MSWINDOWS}name '_StaticText_SetMargins'{$ENDIF},
  StaticText_GetComponentCount {$IFNDEF MSWINDOWS}name '_StaticText_GetComponentCount'{$ENDIF},
  StaticText_GetComponentIndex {$IFNDEF MSWINDOWS}name '_StaticText_GetComponentIndex'{$ENDIF},
  StaticText_SetComponentIndex {$IFNDEF MSWINDOWS}name '_StaticText_SetComponentIndex'{$ENDIF},
  StaticText_GetOwner {$IFNDEF MSWINDOWS}name '_StaticText_GetOwner'{$ENDIF},
  StaticText_GetName {$IFNDEF MSWINDOWS}name '_StaticText_GetName'{$ENDIF},
  StaticText_SetName {$IFNDEF MSWINDOWS}name '_StaticText_SetName'{$ENDIF},
  StaticText_GetTag {$IFNDEF MSWINDOWS}name '_StaticText_GetTag'{$ENDIF},
  StaticText_SetTag {$IFNDEF MSWINDOWS}name '_StaticText_SetTag'{$ENDIF},
  StaticText_GetControls {$IFNDEF MSWINDOWS}name '_StaticText_GetControls'{$ENDIF},
  StaticText_GetComponents {$IFNDEF MSWINDOWS}name '_StaticText_GetComponents'{$ENDIF};

