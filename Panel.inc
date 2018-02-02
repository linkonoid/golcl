
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Panel_Create(AOwner: TComponent): TPanel; cdecl;
begin
  Result :=  TPanel.Create(AOwner);
end;

procedure Panel_Free(AObj: TPanel); cdecl;
begin
  AObj.Free;
end;

function Panel_CanFocus(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure Panel_FlipChildren(AObj: TPanel; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Panel_Focused(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function Panel_HandleAllocated(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Panel_Invalidate(AObj: TPanel); cdecl;
begin
  AObj.Invalidate;
end;

procedure Panel_Realign(AObj: TPanel); cdecl;
begin
  AObj.Realign;
end;

procedure Panel_Repaint(AObj: TPanel); cdecl;
begin
  AObj.Repaint;
end;

procedure Panel_ScaleBy(AObj: TPanel; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Panel_SetBounds(AObj: TPanel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Panel_SetFocus(AObj: TPanel); cdecl;
begin
  AObj.SetFocus;
end;

procedure Panel_Update(AObj: TPanel); cdecl;
begin
  AObj.Update;
end;

procedure Panel_BringToFront(AObj: TPanel); cdecl;
begin
  AObj.BringToFront;
end;

function Panel_HasParent(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Panel_Hide(AObj: TPanel); cdecl;
begin
  AObj.Hide;
end;

function Panel_Perform(AObj: TPanel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Panel_Refresh(AObj: TPanel); cdecl;
begin
  AObj.Refresh;
end;

procedure Panel_SendToBack(AObj: TPanel); cdecl;
begin
  AObj.SendToBack;
end;

procedure Panel_Show(AObj: TPanel); cdecl;
begin
  AObj.Show;
end;

function Panel_GetTextBuf(AObj: TPanel; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function Panel_FindComponent(AObj: TPanel; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Panel_GetNamePath(AObj: TPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Panel_Assign(AObj: TPanel; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Panel_ClassName(AObj: TPanel): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Panel_Equals(AObj: TPanel; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Panel_GetHashCode(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Panel_ToString(AObj: TPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Panel_GetAlign(AObj: TPanel): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Panel_SetAlign(AObj: TPanel; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Panel_GetAlignment(AObj: TPanel): TAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure Panel_SetAlignment(AObj: TPanel; AValue: TAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function Panel_GetAnchors(AObj: TPanel): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Panel_SetAnchors(AObj: TPanel; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function Panel_GetAutoSize(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Panel_SetAutoSize(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

//function Panel_GetBevelEdges(AObj: TPanel): TBevelEdges; cdecl;
//begin
//  Result :=  AObj.BevelEdges;
//end;
//
//procedure Panel_SetBevelEdges(AObj: TPanel; AValue: TBevelEdges); cdecl;
//begin
//  AObj.BevelEdges := AValue;
//end;

function Panel_GetBevelInner(AObj: TPanel): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelInner;
end;

procedure Panel_SetBevelInner(AObj: TPanel; AValue: TBevelCut); cdecl;
begin
  AObj.BevelInner := AValue;
end;

//function Panel_GetBevelKind(AObj: TPanel): TBevelKind; cdecl;
//begin
//  Result :=  AObj.BevelKind;
//end;
//
//procedure Panel_SetBevelKind(AObj: TPanel; AValue: TBevelKind); cdecl;
//begin
//  AObj.BevelKind := AValue;
//end;

function Panel_GetBevelOuter(AObj: TPanel): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelOuter;
end;

procedure Panel_SetBevelOuter(AObj: TPanel; AValue: TBevelCut); cdecl;
begin
  AObj.BevelOuter := AValue;
end;

function Panel_GetBiDiMode(AObj: TPanel): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Panel_SetBiDiMode(AObj: TPanel; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Panel_GetBorderWidth(AObj: TPanel): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure Panel_SetBorderWidth(AObj: TPanel; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function Panel_GetBorderStyle(AObj: TPanel): TBorderStyle; cdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure Panel_SetBorderStyle(AObj: TPanel; AValue: TBorderStyle); cdecl;
begin
  AObj.BorderStyle := AValue;
end;

function Panel_GetCaption(AObj: TPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure Panel_SetCaption(AObj: TPanel; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function Panel_GetColor(AObj: TPanel): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Panel_SetColor(AObj: TPanel; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function Panel_GetDoubleBuffered(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Panel_SetDoubleBuffered(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function Panel_GetEnabled(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Panel_SetEnabled(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Panel_GetFullRepaint(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.FullRepaint;
end;

procedure Panel_SetFullRepaint(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.FullRepaint := AValue;
end;

function Panel_GetFont(AObj: TPanel): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure Panel_SetFont(AObj: TPanel; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

//function Panel_GetLocked(AObj: TPanel): LongBool; cdecl;
//begin
//  Result :=  AObj.Locked;
//end;
//
//procedure Panel_SetLocked(AObj: TPanel; AValue: LongBool); cdecl;
//begin
//  AObj.Locked := AValue;
//end;
//
//function Panel_GetParentBackground(AObj: TPanel): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentBackground;
//end;
//
//procedure Panel_SetParentBackground(AObj: TPanel; AValue: LongBool); cdecl;
//begin
//  AObj.ParentBackground := AValue;
//end;

function Panel_GetParentColor(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure Panel_SetParentColor(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function Panel_GetParentCtl3D(AObj: TPanel): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentCtl3D;
//end;
//
//procedure Panel_SetParentCtl3D(AObj: TPanel; AValue: LongBool); cdecl;
//begin
//  AObj.ParentCtl3D := AValue;
//end;
//
//function Panel_GetParentDoubleBuffered(AObj: TPanel): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure Panel_SetParentDoubleBuffered(AObj: TPanel; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function Panel_GetParentFont(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Panel_SetParentFont(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function Panel_GetParentShowHint(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Panel_SetParentShowHint(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Panel_GetPopupMenu(AObj: TPanel): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Panel_SetPopupMenu(AObj: TPanel; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

//function Panel_GetShowCaption(AObj: TPanel): LongBool; cdecl;
//begin
//  Result :=  AObj.ShowCaption;
//end;
//
//procedure Panel_SetShowCaption(AObj: TPanel; AValue: LongBool); cdecl;
//begin
//  AObj.ShowCaption := AValue;
//end;

function Panel_GetShowHint(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Panel_SetShowHint(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Panel_GetTabOrder(AObj: TPanel): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Panel_SetTabOrder(AObj: TPanel; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function Panel_GetTabStop(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Panel_SetTabStop(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function Panel_GetVisible(AObj: TPanel): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Panel_SetVisible(AObj: TPanel; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function Panel_GetStyleElements(AObj: TPanel): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure Panel_SetStyleElements(AObj: TPanel; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure Panel_SetOnClick(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnDblClick(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnEnter(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnExit(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnMouseDown(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnMouseEnter(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnMouseLeave(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnMouseMove(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnMouseUp(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

procedure Panel_SetOnResize(AObj: TPanel; AEventId: NativeUInt); stdcall;
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

function Panel_GetBrush(AObj: TPanel): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function Panel_GetControlCount(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Panel_GetHandle(AObj: TPanel): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function Panel_GetParentWindow(AObj: TPanel): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Panel_SetParentWindow(AObj: TPanel; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function Panel_GetAction(AObj: TPanel): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Panel_SetAction(AObj: TPanel; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure Panel_GetBoundsRect(AObj: TPanel; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Panel_SetBoundsRect(AObj: TPanel; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Panel_GetClientHeight(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Panel_SetClientHeight(AObj: TPanel; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Panel_GetClientRect(AObj: TPanel; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Panel_GetClientWidth(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Panel_SetClientWidth(AObj: TPanel; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function Panel_GetExplicitLeft(AObj: TPanel): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function Panel_GetExplicitTop(AObj: TPanel): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function Panel_GetExplicitWidth(AObj: TPanel): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function Panel_GetExplicitHeight(AObj: TPanel): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function Panel_GetParent(AObj: TPanel): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Panel_SetParent(AObj: TPanel; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function Panel_GetAlignWithMargins(AObj: TPanel): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure Panel_SetAlignWithMargins(AObj: TPanel; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function Panel_GetLeft(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Panel_SetLeft(AObj: TPanel; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Panel_GetTop(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Panel_SetTop(AObj: TPanel; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Panel_GetWidth(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Panel_SetWidth(AObj: TPanel; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function Panel_GetHeight(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Panel_SetHeight(AObj: TPanel; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Panel_GetCursor(AObj: TPanel): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Panel_SetCursor(AObj: TPanel; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Panel_GetHint(AObj: TPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Panel_SetHint(AObj: TPanel; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Panel_GetMargins(AObj: TPanel): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure Panel_SetMargins(AObj: TPanel; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Panel_GetComponentCount(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Panel_GetComponentIndex(AObj: TPanel): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Panel_SetComponentIndex(AObj: TPanel; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Panel_GetOwner(AObj: TPanel): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Panel_GetName(AObj: TPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Panel_SetName(AObj: TPanel; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Panel_GetTag(AObj: TPanel): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Panel_SetTag(AObj: TPanel; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Panel_GetControls(AObj: TPanel; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Panel_GetComponents(AObj: TPanel; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Panel_Create {$IFNDEF MSWINDOWS}name '_Panel_Create'{$ENDIF},
  Panel_Free {$IFNDEF MSWINDOWS}name '_Panel_Free'{$ENDIF},
  Panel_CanFocus {$IFNDEF MSWINDOWS}name '_Panel_CanFocus'{$ENDIF},
  Panel_FlipChildren {$IFNDEF MSWINDOWS}name '_Panel_FlipChildren'{$ENDIF},
  Panel_Focused {$IFNDEF MSWINDOWS}name '_Panel_Focused'{$ENDIF},
  Panel_HandleAllocated {$IFNDEF MSWINDOWS}name '_Panel_HandleAllocated'{$ENDIF},
  Panel_Invalidate {$IFNDEF MSWINDOWS}name '_Panel_Invalidate'{$ENDIF},
  Panel_Realign {$IFNDEF MSWINDOWS}name '_Panel_Realign'{$ENDIF},
  Panel_Repaint {$IFNDEF MSWINDOWS}name '_Panel_Repaint'{$ENDIF},
  Panel_ScaleBy {$IFNDEF MSWINDOWS}name '_Panel_ScaleBy'{$ENDIF},
  Panel_SetBounds {$IFNDEF MSWINDOWS}name '_Panel_SetBounds'{$ENDIF},
  Panel_SetFocus {$IFNDEF MSWINDOWS}name '_Panel_SetFocus'{$ENDIF},
  Panel_Update {$IFNDEF MSWINDOWS}name '_Panel_Update'{$ENDIF},
  Panel_BringToFront {$IFNDEF MSWINDOWS}name '_Panel_BringToFront'{$ENDIF},
  Panel_HasParent {$IFNDEF MSWINDOWS}name '_Panel_HasParent'{$ENDIF},
  Panel_Hide {$IFNDEF MSWINDOWS}name '_Panel_Hide'{$ENDIF},
  Panel_Perform {$IFNDEF MSWINDOWS}name '_Panel_Perform'{$ENDIF},
  Panel_Refresh {$IFNDEF MSWINDOWS}name '_Panel_Refresh'{$ENDIF},
  Panel_SendToBack {$IFNDEF MSWINDOWS}name '_Panel_SendToBack'{$ENDIF},
  Panel_Show {$IFNDEF MSWINDOWS}name '_Panel_Show'{$ENDIF},
  Panel_GetTextBuf {$IFNDEF MSWINDOWS}name '_Panel_GetTextBuf'{$ENDIF},
  Panel_FindComponent {$IFNDEF MSWINDOWS}name '_Panel_FindComponent'{$ENDIF},
  Panel_GetNamePath {$IFNDEF MSWINDOWS}name '_Panel_GetNamePath'{$ENDIF},
  Panel_Assign {$IFNDEF MSWINDOWS}name '_Panel_Assign'{$ENDIF},
  Panel_ClassName {$IFNDEF MSWINDOWS}name '_Panel_ClassName'{$ENDIF},
  Panel_Equals {$IFNDEF MSWINDOWS}name '_Panel_Equals'{$ENDIF},
  Panel_GetHashCode {$IFNDEF MSWINDOWS}name '_Panel_GetHashCode'{$ENDIF},
  Panel_ToString {$IFNDEF MSWINDOWS}name '_Panel_ToString'{$ENDIF},
  Panel_GetAlign {$IFNDEF MSWINDOWS}name '_Panel_GetAlign'{$ENDIF},
  Panel_SetAlign {$IFNDEF MSWINDOWS}name '_Panel_SetAlign'{$ENDIF},
  Panel_GetAlignment {$IFNDEF MSWINDOWS}name '_Panel_GetAlignment'{$ENDIF},
  Panel_SetAlignment {$IFNDEF MSWINDOWS}name '_Panel_SetAlignment'{$ENDIF},
  Panel_GetAnchors {$IFNDEF MSWINDOWS}name '_Panel_GetAnchors'{$ENDIF},
  Panel_SetAnchors {$IFNDEF MSWINDOWS}name '_Panel_SetAnchors'{$ENDIF},
  Panel_GetAutoSize {$IFNDEF MSWINDOWS}name '_Panel_GetAutoSize'{$ENDIF},
  Panel_SetAutoSize {$IFNDEF MSWINDOWS}name '_Panel_SetAutoSize'{$ENDIF},
  //Panel_GetBevelEdges {$IFNDEF MSWINDOWS}name '_Panel_GetBevelEdges'{$ENDIF},
  //Panel_SetBevelEdges {$IFNDEF MSWINDOWS}name '_Panel_SetBevelEdges'{$ENDIF},
  Panel_GetBevelInner {$IFNDEF MSWINDOWS}name '_Panel_GetBevelInner'{$ENDIF},
  Panel_SetBevelInner {$IFNDEF MSWINDOWS}name '_Panel_SetBevelInner'{$ENDIF},
  //Panel_GetBevelKind {$IFNDEF MSWINDOWS}name '_Panel_GetBevelKind'{$ENDIF},
  //Panel_SetBevelKind {$IFNDEF MSWINDOWS}name '_Panel_SetBevelKind'{$ENDIF},
  Panel_GetBevelOuter {$IFNDEF MSWINDOWS}name '_Panel_GetBevelOuter'{$ENDIF},
  Panel_SetBevelOuter {$IFNDEF MSWINDOWS}name '_Panel_SetBevelOuter'{$ENDIF},
  Panel_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Panel_GetBiDiMode'{$ENDIF},
  Panel_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Panel_SetBiDiMode'{$ENDIF},
  Panel_GetBorderWidth {$IFNDEF MSWINDOWS}name '_Panel_GetBorderWidth'{$ENDIF},
  Panel_SetBorderWidth {$IFNDEF MSWINDOWS}name '_Panel_SetBorderWidth'{$ENDIF},
  Panel_GetBorderStyle {$IFNDEF MSWINDOWS}name '_Panel_GetBorderStyle'{$ENDIF},
  Panel_SetBorderStyle {$IFNDEF MSWINDOWS}name '_Panel_SetBorderStyle'{$ENDIF},
  Panel_GetCaption {$IFNDEF MSWINDOWS}name '_Panel_GetCaption'{$ENDIF},
  Panel_SetCaption {$IFNDEF MSWINDOWS}name '_Panel_SetCaption'{$ENDIF},
  Panel_GetColor {$IFNDEF MSWINDOWS}name '_Panel_GetColor'{$ENDIF},
  Panel_SetColor {$IFNDEF MSWINDOWS}name '_Panel_SetColor'{$ENDIF},
  Panel_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Panel_GetDoubleBuffered'{$ENDIF},
  Panel_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Panel_SetDoubleBuffered'{$ENDIF},
  Panel_GetEnabled {$IFNDEF MSWINDOWS}name '_Panel_GetEnabled'{$ENDIF},
  Panel_SetEnabled {$IFNDEF MSWINDOWS}name '_Panel_SetEnabled'{$ENDIF},
  Panel_GetFullRepaint {$IFNDEF MSWINDOWS}name '_Panel_GetFullRepaint'{$ENDIF},
  Panel_SetFullRepaint {$IFNDEF MSWINDOWS}name '_Panel_SetFullRepaint'{$ENDIF},
  Panel_GetFont {$IFNDEF MSWINDOWS}name '_Panel_GetFont'{$ENDIF},
  Panel_SetFont {$IFNDEF MSWINDOWS}name '_Panel_SetFont'{$ENDIF},
  //Panel_GetLocked {$IFNDEF MSWINDOWS}name '_Panel_GetLocked'{$ENDIF},
  //Panel_SetLocked {$IFNDEF MSWINDOWS}name '_Panel_SetLocked'{$ENDIF},
  //Panel_GetParentBackground {$IFNDEF MSWINDOWS}name '_Panel_GetParentBackground'{$ENDIF},
  //Panel_SetParentBackground {$IFNDEF MSWINDOWS}name '_Panel_SetParentBackground'{$ENDIF},
  Panel_GetParentColor {$IFNDEF MSWINDOWS}name '_Panel_GetParentColor'{$ENDIF},
  Panel_SetParentColor {$IFNDEF MSWINDOWS}name '_Panel_SetParentColor'{$ENDIF},
  //Panel_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_Panel_GetParentCtl3D'{$ENDIF},
  //Panel_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_Panel_SetParentCtl3D'{$ENDIF},
  //Panel_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Panel_GetParentDoubleBuffered'{$ENDIF},
  //Panel_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Panel_SetParentDoubleBuffered'{$ENDIF},
  Panel_GetParentFont {$IFNDEF MSWINDOWS}name '_Panel_GetParentFont'{$ENDIF},
  Panel_SetParentFont {$IFNDEF MSWINDOWS}name '_Panel_SetParentFont'{$ENDIF},
  Panel_GetParentShowHint {$IFNDEF MSWINDOWS}name '_Panel_GetParentShowHint'{$ENDIF},
  Panel_SetParentShowHint {$IFNDEF MSWINDOWS}name '_Panel_SetParentShowHint'{$ENDIF},
  Panel_GetPopupMenu {$IFNDEF MSWINDOWS}name '_Panel_GetPopupMenu'{$ENDIF},
  Panel_SetPopupMenu {$IFNDEF MSWINDOWS}name '_Panel_SetPopupMenu'{$ENDIF},
  //Panel_GetShowCaption {$IFNDEF MSWINDOWS}name '_Panel_GetShowCaption'{$ENDIF},
  //Panel_SetShowCaption {$IFNDEF MSWINDOWS}name '_Panel_SetShowCaption'{$ENDIF},
  Panel_GetShowHint {$IFNDEF MSWINDOWS}name '_Panel_GetShowHint'{$ENDIF},
  Panel_SetShowHint {$IFNDEF MSWINDOWS}name '_Panel_SetShowHint'{$ENDIF},
  Panel_GetTabOrder {$IFNDEF MSWINDOWS}name '_Panel_GetTabOrder'{$ENDIF},
  Panel_SetTabOrder {$IFNDEF MSWINDOWS}name '_Panel_SetTabOrder'{$ENDIF},
  Panel_GetTabStop {$IFNDEF MSWINDOWS}name '_Panel_GetTabStop'{$ENDIF},
  Panel_SetTabStop {$IFNDEF MSWINDOWS}name '_Panel_SetTabStop'{$ENDIF},
  Panel_GetVisible {$IFNDEF MSWINDOWS}name '_Panel_GetVisible'{$ENDIF},
  Panel_SetVisible {$IFNDEF MSWINDOWS}name '_Panel_SetVisible'{$ENDIF},
  //Panel_GetStyleElements {$IFNDEF MSWINDOWS}name '_Panel_GetStyleElements'{$ENDIF},
  //Panel_SetStyleElements {$IFNDEF MSWINDOWS}name '_Panel_SetStyleElements'{$ENDIF},
  Panel_SetOnClick {$IFNDEF MSWINDOWS}name '_Panel_SetOnClick'{$ENDIF},
  Panel_SetOnDblClick {$IFNDEF MSWINDOWS}name '_Panel_SetOnDblClick'{$ENDIF},
  Panel_SetOnEnter {$IFNDEF MSWINDOWS}name '_Panel_SetOnEnter'{$ENDIF},
  Panel_SetOnExit {$IFNDEF MSWINDOWS}name '_Panel_SetOnExit'{$ENDIF},
  Panel_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_Panel_SetOnMouseDown'{$ENDIF},
  Panel_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_Panel_SetOnMouseEnter'{$ENDIF},
  Panel_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_Panel_SetOnMouseLeave'{$ENDIF},
  Panel_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_Panel_SetOnMouseMove'{$ENDIF},
  Panel_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_Panel_SetOnMouseUp'{$ENDIF},
  Panel_SetOnResize {$IFNDEF MSWINDOWS}name '_Panel_SetOnResize'{$ENDIF},
  Panel_GetBrush {$IFNDEF MSWINDOWS}name '_Panel_GetBrush'{$ENDIF},
  Panel_GetControlCount {$IFNDEF MSWINDOWS}name '_Panel_GetControlCount'{$ENDIF},
  Panel_GetHandle {$IFNDEF MSWINDOWS}name '_Panel_GetHandle'{$ENDIF},
  Panel_GetParentWindow {$IFNDEF MSWINDOWS}name '_Panel_GetParentWindow'{$ENDIF},
  Panel_SetParentWindow {$IFNDEF MSWINDOWS}name '_Panel_SetParentWindow'{$ENDIF},
  Panel_GetAction {$IFNDEF MSWINDOWS}name '_Panel_GetAction'{$ENDIF},
  Panel_SetAction {$IFNDEF MSWINDOWS}name '_Panel_SetAction'{$ENDIF},
  Panel_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Panel_GetBoundsRect'{$ENDIF},
  Panel_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Panel_SetBoundsRect'{$ENDIF},
  Panel_GetClientHeight {$IFNDEF MSWINDOWS}name '_Panel_GetClientHeight'{$ENDIF},
  Panel_SetClientHeight {$IFNDEF MSWINDOWS}name '_Panel_SetClientHeight'{$ENDIF},
  Panel_GetClientRect {$IFNDEF MSWINDOWS}name '_Panel_GetClientRect'{$ENDIF},
  Panel_GetClientWidth {$IFNDEF MSWINDOWS}name '_Panel_GetClientWidth'{$ENDIF},
  Panel_SetClientWidth {$IFNDEF MSWINDOWS}name '_Panel_SetClientWidth'{$ENDIF},
  //Panel_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Panel_GetExplicitLeft'{$ENDIF},
  //Panel_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Panel_GetExplicitTop'{$ENDIF},
  //Panel_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Panel_GetExplicitWidth'{$ENDIF},
  //Panel_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Panel_GetExplicitHeight'{$ENDIF},
  Panel_GetParent {$IFNDEF MSWINDOWS}name '_Panel_GetParent'{$ENDIF},
  Panel_SetParent {$IFNDEF MSWINDOWS}name '_Panel_SetParent'{$ENDIF},
  //Panel_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Panel_GetAlignWithMargins'{$ENDIF},
  //Panel_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Panel_SetAlignWithMargins'{$ENDIF},
  Panel_GetLeft {$IFNDEF MSWINDOWS}name '_Panel_GetLeft'{$ENDIF},
  Panel_SetLeft {$IFNDEF MSWINDOWS}name '_Panel_SetLeft'{$ENDIF},
  Panel_GetTop {$IFNDEF MSWINDOWS}name '_Panel_GetTop'{$ENDIF},
  Panel_SetTop {$IFNDEF MSWINDOWS}name '_Panel_SetTop'{$ENDIF},
  Panel_GetWidth {$IFNDEF MSWINDOWS}name '_Panel_GetWidth'{$ENDIF},
  Panel_SetWidth {$IFNDEF MSWINDOWS}name '_Panel_SetWidth'{$ENDIF},
  Panel_GetHeight {$IFNDEF MSWINDOWS}name '_Panel_GetHeight'{$ENDIF},
  Panel_SetHeight {$IFNDEF MSWINDOWS}name '_Panel_SetHeight'{$ENDIF},
  Panel_GetCursor {$IFNDEF MSWINDOWS}name '_Panel_GetCursor'{$ENDIF},
  Panel_SetCursor {$IFNDEF MSWINDOWS}name '_Panel_SetCursor'{$ENDIF},
  Panel_GetHint {$IFNDEF MSWINDOWS}name '_Panel_GetHint'{$ENDIF},
  Panel_SetHint {$IFNDEF MSWINDOWS}name '_Panel_SetHint'{$ENDIF},
  //Panel_GetMargins {$IFNDEF MSWINDOWS}name '_Panel_GetMargins'{$ENDIF},
  //Panel_SetMargins {$IFNDEF MSWINDOWS}name '_Panel_SetMargins'{$ENDIF},
  Panel_GetComponentCount {$IFNDEF MSWINDOWS}name '_Panel_GetComponentCount'{$ENDIF},
  Panel_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Panel_GetComponentIndex'{$ENDIF},
  Panel_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Panel_SetComponentIndex'{$ENDIF},
  Panel_GetOwner {$IFNDEF MSWINDOWS}name '_Panel_GetOwner'{$ENDIF},
  Panel_GetName {$IFNDEF MSWINDOWS}name '_Panel_GetName'{$ENDIF},
  Panel_SetName {$IFNDEF MSWINDOWS}name '_Panel_SetName'{$ENDIF},
  Panel_GetTag {$IFNDEF MSWINDOWS}name '_Panel_GetTag'{$ENDIF},
  Panel_SetTag {$IFNDEF MSWINDOWS}name '_Panel_SetTag'{$ENDIF},
  Panel_GetControls {$IFNDEF MSWINDOWS}name '_Panel_GetControls'{$ENDIF},
  Panel_GetComponents {$IFNDEF MSWINDOWS}name '_Panel_GetComponents'{$ENDIF};

