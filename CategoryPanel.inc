
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function CategoryPanel_Create(AOwner: TComponent): TCategoryPanel; cdecl;
begin
  Result :=  TCategoryPanel.Create(AOwner);
end;

procedure CategoryPanel_Free(AObj: TCategoryPanel); cdecl;
begin
  AObj.Free;
end;

procedure CategoryPanel_Collapse(AObj: TCategoryPanel); cdecl;
begin
  AObj.Collapse;
end;

procedure CategoryPanel_Expand(AObj: TCategoryPanel); cdecl;
begin
  AObj.Expand;
end;

procedure CategoryPanel_SetBounds(AObj: TCategoryPanel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

function CategoryPanel_CanFocus(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure CategoryPanel_FlipChildren(AObj: TCategoryPanel; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function CategoryPanel_Focused(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function CategoryPanel_HandleAllocated(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure CategoryPanel_Invalidate(AObj: TCategoryPanel); cdecl;
begin
  AObj.Invalidate;
end;

procedure CategoryPanel_Realign(AObj: TCategoryPanel); cdecl;
begin
  AObj.Realign;
end;

procedure CategoryPanel_Repaint(AObj: TCategoryPanel); cdecl;
begin
  AObj.Repaint;
end;

procedure CategoryPanel_ScaleBy(AObj: TCategoryPanel; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure CategoryPanel_SetFocus(AObj: TCategoryPanel); cdecl;
begin
  AObj.SetFocus;
end;

procedure CategoryPanel_Update(AObj: TCategoryPanel); cdecl;
begin
  AObj.Update;
end;

procedure CategoryPanel_BringToFront(AObj: TCategoryPanel); cdecl;
begin
  AObj.BringToFront;
end;

function CategoryPanel_HasParent(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure CategoryPanel_Hide(AObj: TCategoryPanel); cdecl;
begin
  AObj.Hide;
end;

function CategoryPanel_Perform(AObj: TCategoryPanel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure CategoryPanel_Refresh(AObj: TCategoryPanel); cdecl;
begin
  AObj.Refresh;
end;

procedure CategoryPanel_SendToBack(AObj: TCategoryPanel); cdecl;
begin
  AObj.SendToBack;
end;

procedure CategoryPanel_Show(AObj: TCategoryPanel); cdecl;
begin
  AObj.Show;
end;

function CategoryPanel_GetTextBuf(AObj: TCategoryPanel; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function CategoryPanel_FindComponent(AObj: TCategoryPanel; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function CategoryPanel_GetNamePath(AObj: TCategoryPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure CategoryPanel_Assign(AObj: TCategoryPanel; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function CategoryPanel_ClassName(AObj: TCategoryPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function CategoryPanel_Equals(AObj: TCategoryPanel; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function CategoryPanel_GetHashCode(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function CategoryPanel_ToString(AObj: TCategoryPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function CategoryPanel_GetBiDiMode(AObj: TCategoryPanel): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure CategoryPanel_SetBiDiMode(AObj: TCategoryPanel; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function CategoryPanel_GetCaption(AObj: TCategoryPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure CategoryPanel_SetCaption(AObj: TCategoryPanel; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function CategoryPanel_GetColor(AObj: TCategoryPanel): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure CategoryPanel_SetColor(AObj: TCategoryPanel; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function CategoryPanel_GetCollapsed(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.Collapsed;
end;

procedure CategoryPanel_SetCollapsed(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.Collapsed := AValue;
end;

function CategoryPanel_GetCollapsedHotImageIndex(AObj: TCategoryPanel): TImageIndex; cdecl;
begin
  Result :=  AObj.CollapsedHotImageIndex;
end;

procedure CategoryPanel_SetCollapsedHotImageIndex(AObj: TCategoryPanel; AValue: TImageIndex); cdecl;
begin
  AObj.CollapsedHotImageIndex := AValue;
end;

function CategoryPanel_GetCollapsedImageIndex(AObj: TCategoryPanel): TImageIndex; cdecl;
begin
  Result :=  AObj.CollapsedImageIndex;
end;

procedure CategoryPanel_SetCollapsedImageIndex(AObj: TCategoryPanel; AValue: TImageIndex); cdecl;
begin
  AObj.CollapsedImageIndex := AValue;
end;

function CategoryPanel_GetCollapsedPressedImageIndex(AObj: TCategoryPanel): TImageIndex; cdecl;
begin
  Result :=  AObj.CollapsedPressedImageIndex;
end;

procedure CategoryPanel_SetCollapsedPressedImageIndex(AObj: TCategoryPanel; AValue: TImageIndex); cdecl;
begin
  AObj.CollapsedPressedImageIndex := AValue;
end;

function CategoryPanel_GetDoubleBuffered(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure CategoryPanel_SetDoubleBuffered(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function CategoryPanel_GetEnabled(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure CategoryPanel_SetEnabled(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function CategoryPanel_GetExpandedHotImageIndex(AObj: TCategoryPanel): TImageIndex; cdecl;
begin
  Result :=  AObj.ExpandedHotImageIndex;
end;

procedure CategoryPanel_SetExpandedHotImageIndex(AObj: TCategoryPanel; AValue: TImageIndex); cdecl;
begin
  AObj.ExpandedHotImageIndex := AValue;
end;

function CategoryPanel_GetExpandedImageIndex(AObj: TCategoryPanel): TImageIndex; cdecl;
begin
  Result :=  AObj.ExpandedImageIndex;
end;

procedure CategoryPanel_SetExpandedImageIndex(AObj: TCategoryPanel; AValue: TImageIndex); cdecl;
begin
  AObj.ExpandedImageIndex := AValue;
end;

function CategoryPanel_GetExpandedPressedImageIndex(AObj: TCategoryPanel): TImageIndex; cdecl;
begin
  Result :=  AObj.ExpandedPressedImageIndex;
end;

procedure CategoryPanel_SetExpandedPressedImageIndex(AObj: TCategoryPanel; AValue: TImageIndex); cdecl;
begin
  AObj.ExpandedPressedImageIndex := AValue;
end;

function CategoryPanel_GetFullRepaint(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.FullRepaint;
end;

procedure CategoryPanel_SetFullRepaint(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.FullRepaint := AValue;
end;

function CategoryPanel_GetFont(AObj: TCategoryPanel): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure CategoryPanel_SetFont(AObj: TCategoryPanel; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function CategoryPanel_GetHeight(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure CategoryPanel_SetHeight(AObj: TCategoryPanel; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function CategoryPanel_GetLeft(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure CategoryPanel_SetLeft(AObj: TCategoryPanel; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function CategoryPanel_GetLocked(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.Locked;
end;

procedure CategoryPanel_SetLocked(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.Locked := AValue;
end;

function CategoryPanel_GetParentBackground(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentBackground;
end;

procedure CategoryPanel_SetParentBackground(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentBackground := AValue;
end;

function CategoryPanel_GetParentColor(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure CategoryPanel_SetParentColor(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function CategoryPanel_GetParentCtl3D(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure CategoryPanel_SetParentCtl3D(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentCtl3D := AValue;
end;

function CategoryPanel_GetParentDoubleBuffered(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure CategoryPanel_SetParentDoubleBuffered(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function CategoryPanel_GetParentFont(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure CategoryPanel_SetParentFont(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function CategoryPanel_GetParentShowHint(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure CategoryPanel_SetParentShowHint(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function CategoryPanel_GetPopupMenu(AObj: TCategoryPanel): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure CategoryPanel_SetPopupMenu(AObj: TCategoryPanel; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function CategoryPanel_GetShowHint(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure CategoryPanel_SetShowHint(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function CategoryPanel_GetTabOrder(AObj: TCategoryPanel): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure CategoryPanel_SetTabOrder(AObj: TCategoryPanel; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function CategoryPanel_GetTabStop(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure CategoryPanel_SetTabStop(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function CategoryPanel_GetVisible(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure CategoryPanel_SetVisible(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function CategoryPanel_GetStyleElements(AObj: TCategoryPanel): TStyleElements; cdecl;
begin
  Result :=  AObj.StyleElements;
end;

procedure CategoryPanel_SetStyleElements(AObj: TCategoryPanel; AValue: TStyleElements); cdecl;
begin
  AObj.StyleElements := AValue;
end;

function CategoryPanel_GetWidth(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure CategoryPanel_SetWidth(AObj: TCategoryPanel; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure CategoryPanel_SetOnClick(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

procedure CategoryPanel_SetOnDblClick(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

procedure CategoryPanel_SetOnEnter(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

procedure CategoryPanel_SetOnExit(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

procedure CategoryPanel_SetOnMouseDown(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

procedure CategoryPanel_SetOnMouseEnter(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

procedure CategoryPanel_SetOnMouseLeave(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

procedure CategoryPanel_SetOnMouseMove(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

procedure CategoryPanel_SetOnMouseUp(AObj: TCategoryPanel; AEventId: NativeUInt); stdcall
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

function CategoryPanel_GetPanelGroup(AObj: TCategoryPanel): TCustomCategoryPanelGroup; cdecl;
begin
  Result :=  AObj.PanelGroup;
end;

procedure CategoryPanel_SetPanelGroup(AObj: TCategoryPanel; AValue: TCustomCategoryPanelGroup); cdecl;
begin
  AObj.PanelGroup := AValue;
end;

function CategoryPanel_GetBrush(AObj: TCategoryPanel): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function CategoryPanel_GetControlCount(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function CategoryPanel_GetHandle(AObj: TCategoryPanel): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function CategoryPanel_GetParentWindow(AObj: TCategoryPanel): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure CategoryPanel_SetParentWindow(AObj: TCategoryPanel; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function CategoryPanel_GetAction(AObj: TCategoryPanel): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure CategoryPanel_SetAction(AObj: TCategoryPanel; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function CategoryPanel_GetAlign(AObj: TCategoryPanel): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure CategoryPanel_SetAlign(AObj: TCategoryPanel; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function CategoryPanel_GetAnchors(AObj: TCategoryPanel): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure CategoryPanel_SetAnchors(AObj: TCategoryPanel; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

procedure CategoryPanel_GetBoundsRect(AObj: TCategoryPanel; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure CategoryPanel_SetBoundsRect(AObj: TCategoryPanel; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function CategoryPanel_GetClientHeight(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure CategoryPanel_SetClientHeight(AObj: TCategoryPanel; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure CategoryPanel_GetClientRect(AObj: TCategoryPanel; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function CategoryPanel_GetClientWidth(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure CategoryPanel_SetClientWidth(AObj: TCategoryPanel; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function CategoryPanel_GetExplicitLeft(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function CategoryPanel_GetExplicitTop(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function CategoryPanel_GetExplicitWidth(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function CategoryPanel_GetExplicitHeight(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

function CategoryPanel_GetParent(AObj: TCategoryPanel): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure CategoryPanel_SetParent(AObj: TCategoryPanel; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function CategoryPanel_GetAlignWithMargins(AObj: TCategoryPanel): LongBool; cdecl;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure CategoryPanel_SetAlignWithMargins(AObj: TCategoryPanel; AValue: LongBool); cdecl;
begin
  AObj.AlignWithMargins := AValue;
end;

function CategoryPanel_GetTop(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure CategoryPanel_SetTop(AObj: TCategoryPanel; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function CategoryPanel_GetCursor(AObj: TCategoryPanel): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure CategoryPanel_SetCursor(AObj: TCategoryPanel; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function CategoryPanel_GetHint(AObj: TCategoryPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure CategoryPanel_SetHint(AObj: TCategoryPanel; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function CategoryPanel_GetMargins(AObj: TCategoryPanel): TMargins; cdecl;
begin
  Result :=  AObj.Margins;
end;

procedure CategoryPanel_SetMargins(AObj: TCategoryPanel; AValue: TMargins); cdecl;
begin
  AObj.Margins := AValue;
end;

function CategoryPanel_GetComponentCount(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function CategoryPanel_GetComponentIndex(AObj: TCategoryPanel): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure CategoryPanel_SetComponentIndex(AObj: TCategoryPanel; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function CategoryPanel_GetOwner(AObj: TCategoryPanel): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function CategoryPanel_GetName(AObj: TCategoryPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure CategoryPanel_SetName(AObj: TCategoryPanel; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function CategoryPanel_GetTag(AObj: TCategoryPanel): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure CategoryPanel_SetTag(AObj: TCategoryPanel; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function CategoryPanel_GetControls(AObj: TCategoryPanel; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function CategoryPanel_GetComponents(AObj: TCategoryPanel; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  CategoryPanel_Create {$IFNDEF MSWINDOWS}name '_CategoryPanel_Create'{$ENDIF},
  CategoryPanel_Free {$IFNDEF MSWINDOWS}name '_CategoryPanel_Free'{$ENDIF},
  CategoryPanel_Collapse {$IFNDEF MSWINDOWS}name '_CategoryPanel_Collapse'{$ENDIF},
  CategoryPanel_Expand {$IFNDEF MSWINDOWS}name '_CategoryPanel_Expand'{$ENDIF},
  CategoryPanel_SetBounds {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetBounds'{$ENDIF},
  CategoryPanel_CanFocus {$IFNDEF MSWINDOWS}name '_CategoryPanel_CanFocus'{$ENDIF},
  CategoryPanel_FlipChildren {$IFNDEF MSWINDOWS}name '_CategoryPanel_FlipChildren'{$ENDIF},
  CategoryPanel_Focused {$IFNDEF MSWINDOWS}name '_CategoryPanel_Focused'{$ENDIF},
  CategoryPanel_HandleAllocated {$IFNDEF MSWINDOWS}name '_CategoryPanel_HandleAllocated'{$ENDIF},
  CategoryPanel_Invalidate {$IFNDEF MSWINDOWS}name '_CategoryPanel_Invalidate'{$ENDIF},
  CategoryPanel_Realign {$IFNDEF MSWINDOWS}name '_CategoryPanel_Realign'{$ENDIF},
  CategoryPanel_Repaint {$IFNDEF MSWINDOWS}name '_CategoryPanel_Repaint'{$ENDIF},
  CategoryPanel_ScaleBy {$IFNDEF MSWINDOWS}name '_CategoryPanel_ScaleBy'{$ENDIF},
  CategoryPanel_SetFocus {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetFocus'{$ENDIF},
  CategoryPanel_Update {$IFNDEF MSWINDOWS}name '_CategoryPanel_Update'{$ENDIF},
  CategoryPanel_BringToFront {$IFNDEF MSWINDOWS}name '_CategoryPanel_BringToFront'{$ENDIF},
  CategoryPanel_HasParent {$IFNDEF MSWINDOWS}name '_CategoryPanel_HasParent'{$ENDIF},
  CategoryPanel_Hide {$IFNDEF MSWINDOWS}name '_CategoryPanel_Hide'{$ENDIF},
  CategoryPanel_Perform {$IFNDEF MSWINDOWS}name '_CategoryPanel_Perform'{$ENDIF},
  CategoryPanel_Refresh {$IFNDEF MSWINDOWS}name '_CategoryPanel_Refresh'{$ENDIF},
  CategoryPanel_SendToBack {$IFNDEF MSWINDOWS}name '_CategoryPanel_SendToBack'{$ENDIF},
  CategoryPanel_Show {$IFNDEF MSWINDOWS}name '_CategoryPanel_Show'{$ENDIF},
  CategoryPanel_GetTextBuf {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetTextBuf'{$ENDIF},
  CategoryPanel_FindComponent {$IFNDEF MSWINDOWS}name '_CategoryPanel_FindComponent'{$ENDIF},
  CategoryPanel_GetNamePath {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetNamePath'{$ENDIF},
  CategoryPanel_Assign {$IFNDEF MSWINDOWS}name '_CategoryPanel_Assign'{$ENDIF},
  CategoryPanel_ClassName {$IFNDEF MSWINDOWS}name '_CategoryPanel_ClassName'{$ENDIF},
  CategoryPanel_Equals {$IFNDEF MSWINDOWS}name '_CategoryPanel_Equals'{$ENDIF},
  CategoryPanel_GetHashCode {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetHashCode'{$ENDIF},
  CategoryPanel_ToString {$IFNDEF MSWINDOWS}name '_CategoryPanel_ToString'{$ENDIF},
  CategoryPanel_GetBiDiMode {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetBiDiMode'{$ENDIF},
  CategoryPanel_SetBiDiMode {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetBiDiMode'{$ENDIF},
  CategoryPanel_GetCaption {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetCaption'{$ENDIF},
  CategoryPanel_SetCaption {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetCaption'{$ENDIF},
  CategoryPanel_GetColor {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetColor'{$ENDIF},
  CategoryPanel_SetColor {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetColor'{$ENDIF},
  CategoryPanel_GetCollapsed {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetCollapsed'{$ENDIF},
  CategoryPanel_SetCollapsed {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetCollapsed'{$ENDIF},
  CategoryPanel_GetCollapsedHotImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetCollapsedHotImageIndex'{$ENDIF},
  CategoryPanel_SetCollapsedHotImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetCollapsedHotImageIndex'{$ENDIF},
  CategoryPanel_GetCollapsedImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetCollapsedImageIndex'{$ENDIF},
  CategoryPanel_SetCollapsedImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetCollapsedImageIndex'{$ENDIF},
  CategoryPanel_GetCollapsedPressedImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetCollapsedPressedImageIndex'{$ENDIF},
  CategoryPanel_SetCollapsedPressedImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetCollapsedPressedImageIndex'{$ENDIF},
  CategoryPanel_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetDoubleBuffered'{$ENDIF},
  CategoryPanel_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetDoubleBuffered'{$ENDIF},
  CategoryPanel_GetEnabled {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetEnabled'{$ENDIF},
  CategoryPanel_SetEnabled {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetEnabled'{$ENDIF},
  CategoryPanel_GetExpandedHotImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetExpandedHotImageIndex'{$ENDIF},
  CategoryPanel_SetExpandedHotImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetExpandedHotImageIndex'{$ENDIF},
  CategoryPanel_GetExpandedImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetExpandedImageIndex'{$ENDIF},
  CategoryPanel_SetExpandedImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetExpandedImageIndex'{$ENDIF},
  CategoryPanel_GetExpandedPressedImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetExpandedPressedImageIndex'{$ENDIF},
  CategoryPanel_SetExpandedPressedImageIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetExpandedPressedImageIndex'{$ENDIF},
  CategoryPanel_GetFullRepaint {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetFullRepaint'{$ENDIF},
  CategoryPanel_SetFullRepaint {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetFullRepaint'{$ENDIF},
  CategoryPanel_GetFont {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetFont'{$ENDIF},
  CategoryPanel_SetFont {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetFont'{$ENDIF},
  CategoryPanel_GetHeight {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetHeight'{$ENDIF},
  CategoryPanel_SetHeight {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetHeight'{$ENDIF},
  CategoryPanel_GetLeft {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetLeft'{$ENDIF},
  CategoryPanel_SetLeft {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetLeft'{$ENDIF},
  CategoryPanel_GetLocked {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetLocked'{$ENDIF},
  CategoryPanel_SetLocked {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetLocked'{$ENDIF},
  CategoryPanel_GetParentBackground {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetParentBackground'{$ENDIF},
  CategoryPanel_SetParentBackground {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetParentBackground'{$ENDIF},
  CategoryPanel_GetParentColor {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetParentColor'{$ENDIF},
  CategoryPanel_SetParentColor {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetParentColor'{$ENDIF},
  CategoryPanel_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetParentCtl3D'{$ENDIF},
  CategoryPanel_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetParentCtl3D'{$ENDIF},
  CategoryPanel_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetParentDoubleBuffered'{$ENDIF},
  CategoryPanel_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetParentDoubleBuffered'{$ENDIF},
  CategoryPanel_GetParentFont {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetParentFont'{$ENDIF},
  CategoryPanel_SetParentFont {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetParentFont'{$ENDIF},
  CategoryPanel_GetParentShowHint {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetParentShowHint'{$ENDIF},
  CategoryPanel_SetParentShowHint {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetParentShowHint'{$ENDIF},
  CategoryPanel_GetPopupMenu {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetPopupMenu'{$ENDIF},
  CategoryPanel_SetPopupMenu {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetPopupMenu'{$ENDIF},
  CategoryPanel_GetShowHint {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetShowHint'{$ENDIF},
  CategoryPanel_SetShowHint {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetShowHint'{$ENDIF},
  CategoryPanel_GetTabOrder {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetTabOrder'{$ENDIF},
  CategoryPanel_SetTabOrder {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetTabOrder'{$ENDIF},
  CategoryPanel_GetTabStop {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetTabStop'{$ENDIF},
  CategoryPanel_SetTabStop {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetTabStop'{$ENDIF},
  CategoryPanel_GetVisible {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetVisible'{$ENDIF},
  CategoryPanel_SetVisible {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetVisible'{$ENDIF},
  CategoryPanel_GetStyleElements {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetStyleElements'{$ENDIF},
  CategoryPanel_SetStyleElements {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetStyleElements'{$ENDIF},
  CategoryPanel_GetWidth {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetWidth'{$ENDIF},
  CategoryPanel_SetWidth {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetWidth'{$ENDIF},
  CategoryPanel_SetOnClick {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnClick'{$ENDIF},
  CategoryPanel_SetOnDblClick {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnDblClick'{$ENDIF},
  CategoryPanel_SetOnEnter {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnEnter'{$ENDIF},
  CategoryPanel_SetOnExit {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnExit'{$ENDIF},
  CategoryPanel_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnMouseDown'{$ENDIF},
  CategoryPanel_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnMouseEnter'{$ENDIF},
  CategoryPanel_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnMouseLeave'{$ENDIF},
  CategoryPanel_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnMouseMove'{$ENDIF},
  CategoryPanel_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetOnMouseUp'{$ENDIF},
  CategoryPanel_GetPanelGroup {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetPanelGroup'{$ENDIF},
  CategoryPanel_SetPanelGroup {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetPanelGroup'{$ENDIF},
  CategoryPanel_GetBrush {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetBrush'{$ENDIF},
  CategoryPanel_GetControlCount {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetControlCount'{$ENDIF},
  CategoryPanel_GetHandle {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetHandle'{$ENDIF},
  CategoryPanel_GetParentWindow {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetParentWindow'{$ENDIF},
  CategoryPanel_SetParentWindow {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetParentWindow'{$ENDIF},
  CategoryPanel_GetAction {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetAction'{$ENDIF},
  CategoryPanel_SetAction {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetAction'{$ENDIF},
  CategoryPanel_GetAlign {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetAlign'{$ENDIF},
  CategoryPanel_SetAlign {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetAlign'{$ENDIF},
  CategoryPanel_GetAnchors {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetAnchors'{$ENDIF},
  CategoryPanel_SetAnchors {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetAnchors'{$ENDIF},
  CategoryPanel_GetBoundsRect {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetBoundsRect'{$ENDIF},
  CategoryPanel_SetBoundsRect {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetBoundsRect'{$ENDIF},
  CategoryPanel_GetClientHeight {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetClientHeight'{$ENDIF},
  CategoryPanel_SetClientHeight {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetClientHeight'{$ENDIF},
  CategoryPanel_GetClientRect {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetClientRect'{$ENDIF},
  CategoryPanel_GetClientWidth {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetClientWidth'{$ENDIF},
  CategoryPanel_SetClientWidth {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetClientWidth'{$ENDIF},
  CategoryPanel_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetExplicitLeft'{$ENDIF},
  CategoryPanel_GetExplicitTop {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetExplicitTop'{$ENDIF},
  CategoryPanel_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetExplicitWidth'{$ENDIF},
  CategoryPanel_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetExplicitHeight'{$ENDIF},
  CategoryPanel_GetParent {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetParent'{$ENDIF},
  CategoryPanel_SetParent {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetParent'{$ENDIF},
  CategoryPanel_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetAlignWithMargins'{$ENDIF},
  CategoryPanel_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetAlignWithMargins'{$ENDIF},
  CategoryPanel_GetTop {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetTop'{$ENDIF},
  CategoryPanel_SetTop {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetTop'{$ENDIF},
  CategoryPanel_GetCursor {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetCursor'{$ENDIF},
  CategoryPanel_SetCursor {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetCursor'{$ENDIF},
  CategoryPanel_GetHint {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetHint'{$ENDIF},
  CategoryPanel_SetHint {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetHint'{$ENDIF},
  CategoryPanel_GetMargins {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetMargins'{$ENDIF},
  CategoryPanel_SetMargins {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetMargins'{$ENDIF},
  CategoryPanel_GetComponentCount {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetComponentCount'{$ENDIF},
  CategoryPanel_GetComponentIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetComponentIndex'{$ENDIF},
  CategoryPanel_SetComponentIndex {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetComponentIndex'{$ENDIF},
  CategoryPanel_GetOwner {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetOwner'{$ENDIF},
  CategoryPanel_GetName {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetName'{$ENDIF},
  CategoryPanel_SetName {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetName'{$ENDIF},
  CategoryPanel_GetTag {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetTag'{$ENDIF},
  CategoryPanel_SetTag {$IFNDEF MSWINDOWS}name '_CategoryPanel_SetTag'{$ENDIF},
  CategoryPanel_GetControls {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetControls'{$ENDIF},
  CategoryPanel_GetComponents {$IFNDEF MSWINDOWS}name '_CategoryPanel_GetComponents'{$ENDIF};

