//https://github.com/Alexey-T/ATFlatControls
//http://wiki.freepascal.org/ATLinkLabel
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

//function LinkLabel_Create(AOwner: TComponent): TLinkLabel; cdecl;
//begin
//  Result :=  TLinkLabel.Create(AOwner);
//end;
//
//procedure LinkLabel_Free(AObj: TLinkLabel); cdecl;
//begin
//  AObj.Free;
//end;
//
//function LinkLabel_CanFocus(AObj: TLinkLabel): LongBool; cdecl;
//begin
//  Result :=  AObj.CanFocus;
//end;
//
//procedure LinkLabel_FlipChildren(AObj: TLinkLabel; AllLevels: LongBool); cdecl;
//begin
//  AObj.FlipChildren(AllLevels);
//end;
//
//function LinkLabel_Focused(AObj: TLinkLabel): LongBool; cdecl;
//begin
//  Result :=  AObj.Focused;
//end;
//
//function LinkLabel_HandleAllocated(AObj: TLinkLabel): LongBool; cdecl;
//begin
//  Result :=  AObj.HandleAllocated;
//end;
//
//procedure LinkLabel_Invalidate(AObj: TLinkLabel); cdecl;
//begin
//  AObj.Invalidate;
//end;
//
//procedure LinkLabel_Realign(AObj: TLinkLabel); cdecl;
//begin
//  AObj.Realign;
//end;
//
//procedure LinkLabel_Repaint(AObj: TLinkLabel); cdecl;
//begin
//  AObj.Repaint;
//end;
//
//procedure LinkLabel_ScaleBy(AObj: TLinkLabel; M: Integer; D: Integer); cdecl;
//begin
//  AObj.ScaleBy(M, D);
//end;
//
//procedure LinkLabel_SetBounds(AObj: TLinkLabel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
//begin
//  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
//end;
//
//procedure LinkLabel_SetFocus(AObj: TLinkLabel); cdecl;
//begin
//  AObj.SetFocus;
//end;
//
//procedure LinkLabel_Update(AObj: TLinkLabel); cdecl;
//begin
//  AObj.Update;
//end;
//
//procedure LinkLabel_BringToFront(AObj: TLinkLabel); cdecl;
//begin
//  AObj.BringToFront;
//end;
//
//function LinkLabel_HasParent(AObj: TLinkLabel): LongBool; cdecl;
//begin
//  Result :=  AObj.HasParent;
//end;
//
//procedure LinkLabel_Hide(AObj: TLinkLabel); cdecl;
//begin
//  AObj.Hide;
//end;
//
//function LinkLabel_Perform(AObj: TLinkLabel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
//begin
//  Result :=  AObj.Perform(Msg, WParam, LParam);
//end;
//
//procedure LinkLabel_Refresh(AObj: TLinkLabel); cdecl;
//begin
//  AObj.Refresh;
//end;
//
//procedure LinkLabel_SendToBack(AObj: TLinkLabel); cdecl;
//begin
//  AObj.SendToBack;
//end;
//
//procedure LinkLabel_Show(AObj: TLinkLabel); cdecl;
//begin
//  AObj.Show;
//end;
//
//function LinkLabel_GetTextBuf(AObj: TLinkLabel; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
//begin
//  Result :=  AObj.GetTextBuf(Buffer, BufSize);
//end;
//
//function LinkLabel_FindComponent(AObj: TLinkLabel; AName: PWideChar): TComponent; cdecl;
//begin
//  Result :=  AObj.FindComponent(AName);
//end;
//
//function LinkLabel_GetNamePath(AObj: TLinkLabel): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.GetNamePath);
//end;
//
//procedure LinkLabel_Assign(AObj: TLinkLabel; Source: TPersistent); cdecl;
//begin
//  AObj.Assign(Source);
//end;
//
//function LinkLabel_ClassName(AObj: TLinkLabel): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.ClassName);
//end;

//function LinkLabel_Equals(AObj: TLinkLabel; Obj: TObject): LongBool; cdecl;
//begin
//  Result :=  AObj.Equals(Obj);
//end;
//
//function LinkLabel_GetHashCode(AObj: TLinkLabel): Integer; cdecl;
//begin
//  Result :=  AObj.GetHashCode;
//end;
//
//function LinkLabel_ToString(AObj: TLinkLabel): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.ToString);
//end;
//
//function LinkLabel_GetAlign(AObj: TLinkLabel): TAlign; cdecl;
//begin
//  Result :=  AObj.Align;
//end;
//
//procedure LinkLabel_SetAlign(AObj: TLinkLabel; AValue: TAlign); cdecl;
//begin
//  AObj.Align := AValue;
//end;

//function LinkLabel_GetAlignment(AObj: TLinkLabel): TCustomLinkLabel.TLinkAlignment; cdecl;
//begin
//  Result :=  AObj.Alignment;
//end;

procedure LinkLabel_SetAlignment(AObj: TLinkLabel; AValue: TCustomLinkLabel.TLinkAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function LinkLabel_GetAnchors(AObj: TLinkLabel): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure LinkLabel_SetAnchors(AObj: TLinkLabel; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function LinkLabel_GetAutoSize(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure LinkLabel_SetAutoSize(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function LinkLabel_GetBevelEdges(AObj: TLinkLabel): TBevelEdges; cdecl;
begin
  Result :=  AObj.BevelEdges;
end;

procedure LinkLabel_SetBevelEdges(AObj: TLinkLabel; AValue: TBevelEdges); cdecl;
begin
  AObj.BevelEdges := AValue;
end;

function LinkLabel_GetBevelInner(AObj: TLinkLabel): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelInner;
end;

procedure LinkLabel_SetBevelInner(AObj: TLinkLabel; AValue: TBevelCut); cdecl;
begin
  AObj.BevelInner := AValue;
end;

function LinkLabel_GetBevelKind(AObj: TLinkLabel): TBevelKind; cdecl;
begin
  Result :=  AObj.BevelKind;
end;

procedure LinkLabel_SetBevelKind(AObj: TLinkLabel; AValue: TBevelKind); cdecl;
begin
  AObj.BevelKind := AValue;
end;

function LinkLabel_GetBevelOuter(AObj: TLinkLabel): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelOuter;
end;

procedure LinkLabel_SetBevelOuter(AObj: TLinkLabel; AValue: TBevelCut); cdecl;
begin
  AObj.BevelOuter := AValue;
end;

function LinkLabel_GetCaption(AObj: TLinkLabel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure LinkLabel_SetCaption(AObj: TLinkLabel; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function LinkLabel_GetColor(AObj: TLinkLabel): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure LinkLabel_SetColor(AObj: TLinkLabel; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function LinkLabel_GetEnabled(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure LinkLabel_SetEnabled(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function LinkLabel_GetFont(AObj: TLinkLabel): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure LinkLabel_SetFont(AObj: TLinkLabel; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function LinkLabel_GetParentColor(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure LinkLabel_SetParentColor(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function LinkLabel_GetParentFont(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure LinkLabel_SetParentFont(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function LinkLabel_GetParentShowHint(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure LinkLabel_SetParentShowHint(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function LinkLabel_GetPopupMenu(AObj: TLinkLabel): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure LinkLabel_SetPopupMenu(AObj: TLinkLabel; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function LinkLabel_GetShowHint(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure LinkLabel_SetShowHint(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function LinkLabel_GetTabOrder(AObj: TLinkLabel): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure LinkLabel_SetTabOrder(AObj: TLinkLabel; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function LinkLabel_GetTabStop(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure LinkLabel_SetTabStop(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function LinkLabel_GetUseVisualStyle(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.UseVisualStyle;
end;

procedure LinkLabel_SetUseVisualStyle(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.UseVisualStyle := AValue;
end;

function LinkLabel_GetVisible(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure LinkLabel_SetVisible(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

procedure LinkLabel_SetOnClick(AObj: TLinkLabel; AEventId: NativeUInt); stdcall;
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

procedure LinkLabel_SetOnDblClick(AObj: TLinkLabel; AEventId: NativeUInt); stdcall;
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

procedure LinkLabel_SetOnMouseDown(AObj: TLinkLabel; AEventId: NativeUInt); stdcall;
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

procedure LinkLabel_SetOnMouseEnter(AObj: TLinkLabel; AEventId: NativeUInt); stdcall;
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

procedure LinkLabel_SetOnMouseLeave(AObj: TLinkLabel; AEventId: NativeUInt); stdcall;
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

procedure LinkLabel_SetOnMouseMove(AObj: TLinkLabel; AEventId: NativeUInt); stdcall;
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

procedure LinkLabel_SetOnMouseUp(AObj: TLinkLabel; AEventId: NativeUInt); stdcall;
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

procedure LinkLabel_SetOnLinkClick(AObj: TLinkLabel; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnLinkClick := nil;
    TEventClass.Remove(AObj, geLinkClick);
    Exit;
  end;
  AObj.OnLinkClick := TEventClass.OnLinkClick;
  TEventClass.Add(AObj, geLinkClick, AEventId);
end;

function LinkLabel_GetDoubleBuffered(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure LinkLabel_SetDoubleBuffered(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function LinkLabel_GetBrush(AObj: TLinkLabel): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function LinkLabel_GetControlCount(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function LinkLabel_GetHandle(AObj: TLinkLabel): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function LinkLabel_GetParentDoubleBuffered(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure LinkLabel_SetParentDoubleBuffered(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function LinkLabel_GetParentWindow(AObj: TLinkLabel): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure LinkLabel_SetParentWindow(AObj: TLinkLabel; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function LinkLabel_GetAction(AObj: TLinkLabel): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure LinkLabel_SetAction(AObj: TLinkLabel; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function LinkLabel_GetBiDiMode(AObj: TLinkLabel): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure LinkLabel_SetBiDiMode(AObj: TLinkLabel; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure LinkLabel_GetBoundsRect(AObj: TLinkLabel; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure LinkLabel_SetBoundsRect(AObj: TLinkLabel; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function LinkLabel_GetClientHeight(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure LinkLabel_SetClientHeight(AObj: TLinkLabel; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure LinkLabel_GetClientRect(AObj: TLinkLabel; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function LinkLabel_GetClientWidth(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure LinkLabel_SetClientWidth(AObj: TLinkLabel; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function LinkLabel_GetExplicitLeft(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function LinkLabel_GetExplicitTop(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function LinkLabel_GetExplicitWidth(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function LinkLabel_GetExplicitHeight(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

function LinkLabel_GetParent(AObj: TLinkLabel): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure LinkLabel_SetParent(AObj: TLinkLabel; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function LinkLabel_GetStyleElements(AObj: TLinkLabel): TStyleElements; cdecl;
begin
  Result :=  AObj.StyleElements;
end;

procedure LinkLabel_SetStyleElements(AObj: TLinkLabel; AValue: TStyleElements); cdecl;
begin
  AObj.StyleElements := AValue;
end;

function LinkLabel_GetAlignWithMargins(AObj: TLinkLabel): LongBool; cdecl;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure LinkLabel_SetAlignWithMargins(AObj: TLinkLabel; AValue: LongBool); cdecl;
begin
  AObj.AlignWithMargins := AValue;
end;

function LinkLabel_GetLeft(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure LinkLabel_SetLeft(AObj: TLinkLabel; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function LinkLabel_GetTop(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure LinkLabel_SetTop(AObj: TLinkLabel; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function LinkLabel_GetWidth(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure LinkLabel_SetWidth(AObj: TLinkLabel; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function LinkLabel_GetHeight(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure LinkLabel_SetHeight(AObj: TLinkLabel; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function LinkLabel_GetCursor(AObj: TLinkLabel): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure LinkLabel_SetCursor(AObj: TLinkLabel; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function LinkLabel_GetHint(AObj: TLinkLabel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure LinkLabel_SetHint(AObj: TLinkLabel; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function LinkLabel_GetMargins(AObj: TLinkLabel): TMargins; cdecl;
begin
  Result :=  AObj.Margins;
end;

procedure LinkLabel_SetMargins(AObj: TLinkLabel; AValue: TMargins); cdecl;
begin
  AObj.Margins := AValue;
end;

function LinkLabel_GetComponentCount(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function LinkLabel_GetComponentIndex(AObj: TLinkLabel): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure LinkLabel_SetComponentIndex(AObj: TLinkLabel; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function LinkLabel_GetOwner(AObj: TLinkLabel): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function LinkLabel_GetName(AObj: TLinkLabel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure LinkLabel_SetName(AObj: TLinkLabel; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function LinkLabel_GetTag(AObj: TLinkLabel): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure LinkLabel_SetTag(AObj: TLinkLabel; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function LinkLabel_GetControls(AObj: TLinkLabel; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function LinkLabel_GetComponents(AObj: TLinkLabel; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  LinkLabel_Create {$IFNDEF MSWINDOWS}name '_LinkLabel_Create'{$ENDIF},
  LinkLabel_Free {$IFNDEF MSWINDOWS}name '_LinkLabel_Free'{$ENDIF},
  LinkLabel_CanFocus {$IFNDEF MSWINDOWS}name '_LinkLabel_CanFocus'{$ENDIF},
  LinkLabel_FlipChildren {$IFNDEF MSWINDOWS}name '_LinkLabel_FlipChildren'{$ENDIF},
  LinkLabel_Focused {$IFNDEF MSWINDOWS}name '_LinkLabel_Focused'{$ENDIF},
  LinkLabel_HandleAllocated {$IFNDEF MSWINDOWS}name '_LinkLabel_HandleAllocated'{$ENDIF},
  LinkLabel_Invalidate {$IFNDEF MSWINDOWS}name '_LinkLabel_Invalidate'{$ENDIF},
  LinkLabel_Realign {$IFNDEF MSWINDOWS}name '_LinkLabel_Realign'{$ENDIF},
  LinkLabel_Repaint {$IFNDEF MSWINDOWS}name '_LinkLabel_Repaint'{$ENDIF},
  LinkLabel_ScaleBy {$IFNDEF MSWINDOWS}name '_LinkLabel_ScaleBy'{$ENDIF},
  LinkLabel_SetBounds {$IFNDEF MSWINDOWS}name '_LinkLabel_SetBounds'{$ENDIF},
  LinkLabel_SetFocus {$IFNDEF MSWINDOWS}name '_LinkLabel_SetFocus'{$ENDIF},
  LinkLabel_Update {$IFNDEF MSWINDOWS}name '_LinkLabel_Update'{$ENDIF},
  LinkLabel_BringToFront {$IFNDEF MSWINDOWS}name '_LinkLabel_BringToFront'{$ENDIF},
  LinkLabel_HasParent {$IFNDEF MSWINDOWS}name '_LinkLabel_HasParent'{$ENDIF},
  LinkLabel_Hide {$IFNDEF MSWINDOWS}name '_LinkLabel_Hide'{$ENDIF},
  LinkLabel_Perform {$IFNDEF MSWINDOWS}name '_LinkLabel_Perform'{$ENDIF},
  LinkLabel_Refresh {$IFNDEF MSWINDOWS}name '_LinkLabel_Refresh'{$ENDIF},
  LinkLabel_SendToBack {$IFNDEF MSWINDOWS}name '_LinkLabel_SendToBack'{$ENDIF},
  LinkLabel_Show {$IFNDEF MSWINDOWS}name '_LinkLabel_Show'{$ENDIF},
  LinkLabel_GetTextBuf {$IFNDEF MSWINDOWS}name '_LinkLabel_GetTextBuf'{$ENDIF},
  LinkLabel_FindComponent {$IFNDEF MSWINDOWS}name '_LinkLabel_FindComponent'{$ENDIF},
  LinkLabel_GetNamePath {$IFNDEF MSWINDOWS}name '_LinkLabel_GetNamePath'{$ENDIF},
  LinkLabel_Assign {$IFNDEF MSWINDOWS}name '_LinkLabel_Assign'{$ENDIF},
  LinkLabel_ClassName {$IFNDEF MSWINDOWS}name '_LinkLabel_ClassName'{$ENDIF},
  LinkLabel_Equals {$IFNDEF MSWINDOWS}name '_LinkLabel_Equals'{$ENDIF},
  LinkLabel_GetHashCode {$IFNDEF MSWINDOWS}name '_LinkLabel_GetHashCode'{$ENDIF},
  LinkLabel_ToString {$IFNDEF MSWINDOWS}name '_LinkLabel_ToString'{$ENDIF},
  LinkLabel_GetAlign {$IFNDEF MSWINDOWS}name '_LinkLabel_GetAlign'{$ENDIF},
  LinkLabel_SetAlign {$IFNDEF MSWINDOWS}name '_LinkLabel_SetAlign'{$ENDIF},
  LinkLabel_GetAlignment {$IFNDEF MSWINDOWS}name '_LinkLabel_GetAlignment'{$ENDIF},
  LinkLabel_SetAlignment {$IFNDEF MSWINDOWS}name '_LinkLabel_SetAlignment'{$ENDIF},
  LinkLabel_GetAnchors {$IFNDEF MSWINDOWS}name '_LinkLabel_GetAnchors'{$ENDIF},
  LinkLabel_SetAnchors {$IFNDEF MSWINDOWS}name '_LinkLabel_SetAnchors'{$ENDIF},
  LinkLabel_GetAutoSize {$IFNDEF MSWINDOWS}name '_LinkLabel_GetAutoSize'{$ENDIF},
  LinkLabel_SetAutoSize {$IFNDEF MSWINDOWS}name '_LinkLabel_SetAutoSize'{$ENDIF},
  LinkLabel_GetBevelEdges {$IFNDEF MSWINDOWS}name '_LinkLabel_GetBevelEdges'{$ENDIF},
  LinkLabel_SetBevelEdges {$IFNDEF MSWINDOWS}name '_LinkLabel_SetBevelEdges'{$ENDIF},
  LinkLabel_GetBevelInner {$IFNDEF MSWINDOWS}name '_LinkLabel_GetBevelInner'{$ENDIF},
  LinkLabel_SetBevelInner {$IFNDEF MSWINDOWS}name '_LinkLabel_SetBevelInner'{$ENDIF},
  LinkLabel_GetBevelKind {$IFNDEF MSWINDOWS}name '_LinkLabel_GetBevelKind'{$ENDIF},
  LinkLabel_SetBevelKind {$IFNDEF MSWINDOWS}name '_LinkLabel_SetBevelKind'{$ENDIF},
  LinkLabel_GetBevelOuter {$IFNDEF MSWINDOWS}name '_LinkLabel_GetBevelOuter'{$ENDIF},
  LinkLabel_SetBevelOuter {$IFNDEF MSWINDOWS}name '_LinkLabel_SetBevelOuter'{$ENDIF},
  LinkLabel_GetCaption {$IFNDEF MSWINDOWS}name '_LinkLabel_GetCaption'{$ENDIF},
  LinkLabel_SetCaption {$IFNDEF MSWINDOWS}name '_LinkLabel_SetCaption'{$ENDIF},
  LinkLabel_GetColor {$IFNDEF MSWINDOWS}name '_LinkLabel_GetColor'{$ENDIF},
  LinkLabel_SetColor {$IFNDEF MSWINDOWS}name '_LinkLabel_SetColor'{$ENDIF},
  LinkLabel_GetEnabled {$IFNDEF MSWINDOWS}name '_LinkLabel_GetEnabled'{$ENDIF},
  LinkLabel_SetEnabled {$IFNDEF MSWINDOWS}name '_LinkLabel_SetEnabled'{$ENDIF},
  LinkLabel_GetFont {$IFNDEF MSWINDOWS}name '_LinkLabel_GetFont'{$ENDIF},
  LinkLabel_SetFont {$IFNDEF MSWINDOWS}name '_LinkLabel_SetFont'{$ENDIF},
  LinkLabel_GetParentColor {$IFNDEF MSWINDOWS}name '_LinkLabel_GetParentColor'{$ENDIF},
  LinkLabel_SetParentColor {$IFNDEF MSWINDOWS}name '_LinkLabel_SetParentColor'{$ENDIF},
  LinkLabel_GetParentFont {$IFNDEF MSWINDOWS}name '_LinkLabel_GetParentFont'{$ENDIF},
  LinkLabel_SetParentFont {$IFNDEF MSWINDOWS}name '_LinkLabel_SetParentFont'{$ENDIF},
  LinkLabel_GetParentShowHint {$IFNDEF MSWINDOWS}name '_LinkLabel_GetParentShowHint'{$ENDIF},
  LinkLabel_SetParentShowHint {$IFNDEF MSWINDOWS}name '_LinkLabel_SetParentShowHint'{$ENDIF},
  LinkLabel_GetPopupMenu {$IFNDEF MSWINDOWS}name '_LinkLabel_GetPopupMenu'{$ENDIF},
  LinkLabel_SetPopupMenu {$IFNDEF MSWINDOWS}name '_LinkLabel_SetPopupMenu'{$ENDIF},
  LinkLabel_GetShowHint {$IFNDEF MSWINDOWS}name '_LinkLabel_GetShowHint'{$ENDIF},
  LinkLabel_SetShowHint {$IFNDEF MSWINDOWS}name '_LinkLabel_SetShowHint'{$ENDIF},
  LinkLabel_GetTabOrder {$IFNDEF MSWINDOWS}name '_LinkLabel_GetTabOrder'{$ENDIF},
  LinkLabel_SetTabOrder {$IFNDEF MSWINDOWS}name '_LinkLabel_SetTabOrder'{$ENDIF},
  LinkLabel_GetTabStop {$IFNDEF MSWINDOWS}name '_LinkLabel_GetTabStop'{$ENDIF},
  LinkLabel_SetTabStop {$IFNDEF MSWINDOWS}name '_LinkLabel_SetTabStop'{$ENDIF},
  LinkLabel_GetUseVisualStyle {$IFNDEF MSWINDOWS}name '_LinkLabel_GetUseVisualStyle'{$ENDIF},
  LinkLabel_SetUseVisualStyle {$IFNDEF MSWINDOWS}name '_LinkLabel_SetUseVisualStyle'{$ENDIF},
  LinkLabel_GetVisible {$IFNDEF MSWINDOWS}name '_LinkLabel_GetVisible'{$ENDIF},
  LinkLabel_SetVisible {$IFNDEF MSWINDOWS}name '_LinkLabel_SetVisible'{$ENDIF},
  LinkLabel_SetOnClick {$IFNDEF MSWINDOWS}name '_LinkLabel_SetOnClick'{$ENDIF},
  LinkLabel_SetOnDblClick {$IFNDEF MSWINDOWS}name '_LinkLabel_SetOnDblClick'{$ENDIF},
  LinkLabel_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_LinkLabel_SetOnMouseDown'{$ENDIF},
  LinkLabel_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_LinkLabel_SetOnMouseEnter'{$ENDIF},
  LinkLabel_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_LinkLabel_SetOnMouseLeave'{$ENDIF},
  LinkLabel_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_LinkLabel_SetOnMouseMove'{$ENDIF},
  LinkLabel_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_LinkLabel_SetOnMouseUp'{$ENDIF},
  LinkLabel_SetOnLinkClick {$IFNDEF MSWINDOWS}name '_LinkLabel_SetOnLinkClick'{$ENDIF},
  LinkLabel_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_LinkLabel_GetDoubleBuffered'{$ENDIF},
  LinkLabel_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_LinkLabel_SetDoubleBuffered'{$ENDIF},
  LinkLabel_GetBrush {$IFNDEF MSWINDOWS}name '_LinkLabel_GetBrush'{$ENDIF},
  LinkLabel_GetControlCount {$IFNDEF MSWINDOWS}name '_LinkLabel_GetControlCount'{$ENDIF},
  LinkLabel_GetHandle {$IFNDEF MSWINDOWS}name '_LinkLabel_GetHandle'{$ENDIF},
  LinkLabel_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_LinkLabel_GetParentDoubleBuffered'{$ENDIF},
  LinkLabel_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_LinkLabel_SetParentDoubleBuffered'{$ENDIF},
  LinkLabel_GetParentWindow {$IFNDEF MSWINDOWS}name '_LinkLabel_GetParentWindow'{$ENDIF},
  LinkLabel_SetParentWindow {$IFNDEF MSWINDOWS}name '_LinkLabel_SetParentWindow'{$ENDIF},
  LinkLabel_GetAction {$IFNDEF MSWINDOWS}name '_LinkLabel_GetAction'{$ENDIF},
  LinkLabel_SetAction {$IFNDEF MSWINDOWS}name '_LinkLabel_SetAction'{$ENDIF},
  LinkLabel_GetBiDiMode {$IFNDEF MSWINDOWS}name '_LinkLabel_GetBiDiMode'{$ENDIF},
  LinkLabel_SetBiDiMode {$IFNDEF MSWINDOWS}name '_LinkLabel_SetBiDiMode'{$ENDIF},
  LinkLabel_GetBoundsRect {$IFNDEF MSWINDOWS}name '_LinkLabel_GetBoundsRect'{$ENDIF},
  LinkLabel_SetBoundsRect {$IFNDEF MSWINDOWS}name '_LinkLabel_SetBoundsRect'{$ENDIF},
  LinkLabel_GetClientHeight {$IFNDEF MSWINDOWS}name '_LinkLabel_GetClientHeight'{$ENDIF},
  LinkLabel_SetClientHeight {$IFNDEF MSWINDOWS}name '_LinkLabel_SetClientHeight'{$ENDIF},
  LinkLabel_GetClientRect {$IFNDEF MSWINDOWS}name '_LinkLabel_GetClientRect'{$ENDIF},
  LinkLabel_GetClientWidth {$IFNDEF MSWINDOWS}name '_LinkLabel_GetClientWidth'{$ENDIF},
  LinkLabel_SetClientWidth {$IFNDEF MSWINDOWS}name '_LinkLabel_SetClientWidth'{$ENDIF},
  LinkLabel_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_LinkLabel_GetExplicitLeft'{$ENDIF},
  LinkLabel_GetExplicitTop {$IFNDEF MSWINDOWS}name '_LinkLabel_GetExplicitTop'{$ENDIF},
  LinkLabel_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_LinkLabel_GetExplicitWidth'{$ENDIF},
  LinkLabel_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_LinkLabel_GetExplicitHeight'{$ENDIF},
  LinkLabel_GetParent {$IFNDEF MSWINDOWS}name '_LinkLabel_GetParent'{$ENDIF},
  LinkLabel_SetParent {$IFNDEF MSWINDOWS}name '_LinkLabel_SetParent'{$ENDIF},
  LinkLabel_GetStyleElements {$IFNDEF MSWINDOWS}name '_LinkLabel_GetStyleElements'{$ENDIF},
  LinkLabel_SetStyleElements {$IFNDEF MSWINDOWS}name '_LinkLabel_SetStyleElements'{$ENDIF},
  LinkLabel_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_LinkLabel_GetAlignWithMargins'{$ENDIF},
  LinkLabel_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_LinkLabel_SetAlignWithMargins'{$ENDIF},
  LinkLabel_GetLeft {$IFNDEF MSWINDOWS}name '_LinkLabel_GetLeft'{$ENDIF},
  LinkLabel_SetLeft {$IFNDEF MSWINDOWS}name '_LinkLabel_SetLeft'{$ENDIF},
  LinkLabel_GetTop {$IFNDEF MSWINDOWS}name '_LinkLabel_GetTop'{$ENDIF},
  LinkLabel_SetTop {$IFNDEF MSWINDOWS}name '_LinkLabel_SetTop'{$ENDIF},
  LinkLabel_GetWidth {$IFNDEF MSWINDOWS}name '_LinkLabel_GetWidth'{$ENDIF},
  LinkLabel_SetWidth {$IFNDEF MSWINDOWS}name '_LinkLabel_SetWidth'{$ENDIF},
  LinkLabel_GetHeight {$IFNDEF MSWINDOWS}name '_LinkLabel_GetHeight'{$ENDIF},
  LinkLabel_SetHeight {$IFNDEF MSWINDOWS}name '_LinkLabel_SetHeight'{$ENDIF},
  LinkLabel_GetCursor {$IFNDEF MSWINDOWS}name '_LinkLabel_GetCursor'{$ENDIF},
  LinkLabel_SetCursor {$IFNDEF MSWINDOWS}name '_LinkLabel_SetCursor'{$ENDIF},
  LinkLabel_GetHint {$IFNDEF MSWINDOWS}name '_LinkLabel_GetHint'{$ENDIF},
  LinkLabel_SetHint {$IFNDEF MSWINDOWS}name '_LinkLabel_SetHint'{$ENDIF},
  LinkLabel_GetMargins {$IFNDEF MSWINDOWS}name '_LinkLabel_GetMargins'{$ENDIF},
  LinkLabel_SetMargins {$IFNDEF MSWINDOWS}name '_LinkLabel_SetMargins'{$ENDIF},
  LinkLabel_GetComponentCount {$IFNDEF MSWINDOWS}name '_LinkLabel_GetComponentCount'{$ENDIF},
  LinkLabel_GetComponentIndex {$IFNDEF MSWINDOWS}name '_LinkLabel_GetComponentIndex'{$ENDIF},
  LinkLabel_SetComponentIndex {$IFNDEF MSWINDOWS}name '_LinkLabel_SetComponentIndex'{$ENDIF},
  LinkLabel_GetOwner {$IFNDEF MSWINDOWS}name '_LinkLabel_GetOwner'{$ENDIF},
  LinkLabel_GetName {$IFNDEF MSWINDOWS}name '_LinkLabel_GetName'{$ENDIF},
  LinkLabel_SetName {$IFNDEF MSWINDOWS}name '_LinkLabel_SetName'{$ENDIF},
  LinkLabel_GetTag {$IFNDEF MSWINDOWS}name '_LinkLabel_GetTag'{$ENDIF},
  LinkLabel_SetTag {$IFNDEF MSWINDOWS}name '_LinkLabel_SetTag'{$ENDIF},
  LinkLabel_GetControls {$IFNDEF MSWINDOWS}name '_LinkLabel_GetControls'{$ENDIF},
  LinkLabel_GetComponents {$IFNDEF MSWINDOWS}name '_LinkLabel_GetComponents'{$ENDIF};

