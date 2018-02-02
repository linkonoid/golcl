
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function GroupBox_Create(AOwner: TComponent): TGroupBox; cdecl;
begin
  Result :=  TGroupBox.Create(AOwner);
end;

procedure GroupBox_Free(AObj: TGroupBox); cdecl;
begin
  AObj.Free;
end;

function GroupBox_CanFocus(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure GroupBox_FlipChildren(AObj: TGroupBox; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function GroupBox_Focused(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function GroupBox_HandleAllocated(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure GroupBox_Invalidate(AObj: TGroupBox); cdecl;
begin
  AObj.Invalidate;
end;

procedure GroupBox_Realign(AObj: TGroupBox); cdecl;
begin
  AObj.Realign;
end;

procedure GroupBox_Repaint(AObj: TGroupBox); cdecl;
begin
  AObj.Repaint;
end;

procedure GroupBox_ScaleBy(AObj: TGroupBox; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure GroupBox_SetBounds(AObj: TGroupBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure GroupBox_SetFocus(AObj: TGroupBox); cdecl;
begin
  AObj.SetFocus;
end;

procedure GroupBox_Update(AObj: TGroupBox); cdecl;
begin
  AObj.Update;
end;

procedure GroupBox_BringToFront(AObj: TGroupBox); cdecl;
begin
  AObj.BringToFront;
end;

function GroupBox_HasParent(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure GroupBox_Hide(AObj: TGroupBox); cdecl;
begin
  AObj.Hide;
end;

function GroupBox_Perform(AObj: TGroupBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure GroupBox_Refresh(AObj: TGroupBox); cdecl;
begin
  AObj.Refresh;
end;

procedure GroupBox_SendToBack(AObj: TGroupBox); cdecl;
begin
  AObj.SendToBack;
end;

procedure GroupBox_Show(AObj: TGroupBox); cdecl;
begin
  AObj.Show;
end;

function GroupBox_GetTextBuf(AObj: TGroupBox; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function GroupBox_FindComponent(AObj: TGroupBox; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function GroupBox_GetNamePath(AObj: TGroupBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure GroupBox_Assign(AObj: TGroupBox; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function GroupBox_ClassName(AObj: TGroupBox): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function GroupBox_Equals(AObj: TGroupBox; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function GroupBox_GetHashCode(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function GroupBox_ToString(AObj: TGroupBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function GroupBox_GetAlign(AObj: TGroupBox): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure GroupBox_SetAlign(AObj: TGroupBox; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function GroupBox_GetAnchors(AObj: TGroupBox): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure GroupBox_SetAnchors(AObj: TGroupBox; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function GroupBox_GetBiDiMode(AObj: TGroupBox): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure GroupBox_SetBiDiMode(AObj: TGroupBox; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function GroupBox_GetCaption(AObj: TGroupBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure GroupBox_SetCaption(AObj: TGroupBox; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function GroupBox_GetColor(AObj: TGroupBox): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure GroupBox_SetColor(AObj: TGroupBox; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function GroupBox_GetDoubleBuffered(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure GroupBox_SetDoubleBuffered(AObj: TGroupBox; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function GroupBox_GetEnabled(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure GroupBox_SetEnabled(AObj: TGroupBox; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function GroupBox_GetFont(AObj: TGroupBox): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure GroupBox_SetFont(AObj: TGroupBox; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

//function GroupBox_GetParentBackground(AObj: TGroupBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentBackground;
//end;
//
//procedure GroupBox_SetParentBackground(AObj: TGroupBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentBackground := AValue;
//end;

function GroupBox_GetParentColor(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure GroupBox_SetParentColor(AObj: TGroupBox; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function GroupBox_GetParentCtl3D(AObj: TGroupBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentCtl3D;
//end;
//
//procedure GroupBox_SetParentCtl3D(AObj: TGroupBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentCtl3D := AValue;
//end;
//
//function GroupBox_GetParentDoubleBuffered(AObj: TGroupBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure GroupBox_SetParentDoubleBuffered(AObj: TGroupBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function GroupBox_GetParentFont(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure GroupBox_SetParentFont(AObj: TGroupBox; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function GroupBox_GetParentShowHint(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure GroupBox_SetParentShowHint(AObj: TGroupBox; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function GroupBox_GetPopupMenu(AObj: TGroupBox): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure GroupBox_SetPopupMenu(AObj: TGroupBox; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function GroupBox_GetShowHint(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure GroupBox_SetShowHint(AObj: TGroupBox; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function GroupBox_GetTabOrder(AObj: TGroupBox): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure GroupBox_SetTabOrder(AObj: TGroupBox; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function GroupBox_GetTabStop(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure GroupBox_SetTabStop(AObj: TGroupBox; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function GroupBox_GetVisible(AObj: TGroupBox): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure GroupBox_SetVisible(AObj: TGroupBox; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function GroupBox_GetStyleElements(AObj: TGroupBox): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure GroupBox_SetStyleElements(AObj: TGroupBox; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure GroupBox_SetOnClick(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

procedure GroupBox_SetOnDblClick(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

procedure GroupBox_SetOnEnter(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

procedure GroupBox_SetOnExit(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

procedure GroupBox_SetOnMouseDown(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

procedure GroupBox_SetOnMouseEnter(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

procedure GroupBox_SetOnMouseLeave(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

procedure GroupBox_SetOnMouseMove(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

procedure GroupBox_SetOnMouseUp(AObj: TGroupBox; AEventId: NativeUInt); stdcall;
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

function GroupBox_GetBrush(AObj: TGroupBox): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function GroupBox_GetControlCount(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function GroupBox_GetHandle(AObj: TGroupBox): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function GroupBox_GetParentWindow(AObj: TGroupBox): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure GroupBox_SetParentWindow(AObj: TGroupBox; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function GroupBox_GetAction(AObj: TGroupBox): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure GroupBox_SetAction(AObj: TGroupBox; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure GroupBox_GetBoundsRect(AObj: TGroupBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure GroupBox_SetBoundsRect(AObj: TGroupBox; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function GroupBox_GetClientHeight(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure GroupBox_SetClientHeight(AObj: TGroupBox; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure GroupBox_GetClientRect(AObj: TGroupBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function GroupBox_GetClientWidth(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure GroupBox_SetClientWidth(AObj: TGroupBox; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function GroupBox_GetExplicitLeft(AObj: TGroupBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function GroupBox_GetExplicitTop(AObj: TGroupBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function GroupBox_GetExplicitWidth(AObj: TGroupBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function GroupBox_GetExplicitHeight(AObj: TGroupBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function GroupBox_GetParent(AObj: TGroupBox): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure GroupBox_SetParent(AObj: TGroupBox; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function GroupBox_GetAlignWithMargins(AObj: TGroupBox): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure GroupBox_SetAlignWithMargins(AObj: TGroupBox; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function GroupBox_GetLeft(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure GroupBox_SetLeft(AObj: TGroupBox; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function GroupBox_GetTop(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure GroupBox_SetTop(AObj: TGroupBox; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function GroupBox_GetWidth(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure GroupBox_SetWidth(AObj: TGroupBox; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function GroupBox_GetHeight(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure GroupBox_SetHeight(AObj: TGroupBox; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function GroupBox_GetCursor(AObj: TGroupBox): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure GroupBox_SetCursor(AObj: TGroupBox; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function GroupBox_GetHint(AObj: TGroupBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure GroupBox_SetHint(AObj: TGroupBox; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function GroupBox_GetMargins(AObj: TGroupBox): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure GroupBox_SetMargins(AObj: TGroupBox; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function GroupBox_GetComponentCount(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function GroupBox_GetComponentIndex(AObj: TGroupBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure GroupBox_SetComponentIndex(AObj: TGroupBox; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function GroupBox_GetOwner(AObj: TGroupBox): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function GroupBox_GetName(AObj: TGroupBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure GroupBox_SetName(AObj: TGroupBox; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function GroupBox_GetTag(AObj: TGroupBox): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure GroupBox_SetTag(AObj: TGroupBox; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function GroupBox_GetControls(AObj: TGroupBox; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function GroupBox_GetComponents(AObj: TGroupBox; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  GroupBox_Create {$IFNDEF MSWINDOWS}name '_GroupBox_Create'{$ENDIF},
  GroupBox_Free {$IFNDEF MSWINDOWS}name '_GroupBox_Free'{$ENDIF},
  GroupBox_CanFocus {$IFNDEF MSWINDOWS}name '_GroupBox_CanFocus'{$ENDIF},
  GroupBox_FlipChildren {$IFNDEF MSWINDOWS}name '_GroupBox_FlipChildren'{$ENDIF},
  GroupBox_Focused {$IFNDEF MSWINDOWS}name '_GroupBox_Focused'{$ENDIF},
  GroupBox_HandleAllocated {$IFNDEF MSWINDOWS}name '_GroupBox_HandleAllocated'{$ENDIF},
  GroupBox_Invalidate {$IFNDEF MSWINDOWS}name '_GroupBox_Invalidate'{$ENDIF},
  GroupBox_Realign {$IFNDEF MSWINDOWS}name '_GroupBox_Realign'{$ENDIF},
  GroupBox_Repaint {$IFNDEF MSWINDOWS}name '_GroupBox_Repaint'{$ENDIF},
  GroupBox_ScaleBy {$IFNDEF MSWINDOWS}name '_GroupBox_ScaleBy'{$ENDIF},
  GroupBox_SetBounds {$IFNDEF MSWINDOWS}name '_GroupBox_SetBounds'{$ENDIF},
  GroupBox_SetFocus {$IFNDEF MSWINDOWS}name '_GroupBox_SetFocus'{$ENDIF},
  GroupBox_Update {$IFNDEF MSWINDOWS}name '_GroupBox_Update'{$ENDIF},
  GroupBox_BringToFront {$IFNDEF MSWINDOWS}name '_GroupBox_BringToFront'{$ENDIF},
  GroupBox_HasParent {$IFNDEF MSWINDOWS}name '_GroupBox_HasParent'{$ENDIF},
  GroupBox_Hide {$IFNDEF MSWINDOWS}name '_GroupBox_Hide'{$ENDIF},
  GroupBox_Perform {$IFNDEF MSWINDOWS}name '_GroupBox_Perform'{$ENDIF},
  GroupBox_Refresh {$IFNDEF MSWINDOWS}name '_GroupBox_Refresh'{$ENDIF},
  GroupBox_SendToBack {$IFNDEF MSWINDOWS}name '_GroupBox_SendToBack'{$ENDIF},
  GroupBox_Show {$IFNDEF MSWINDOWS}name '_GroupBox_Show'{$ENDIF},
  GroupBox_GetTextBuf {$IFNDEF MSWINDOWS}name '_GroupBox_GetTextBuf'{$ENDIF},
  GroupBox_FindComponent {$IFNDEF MSWINDOWS}name '_GroupBox_FindComponent'{$ENDIF},
  GroupBox_GetNamePath {$IFNDEF MSWINDOWS}name '_GroupBox_GetNamePath'{$ENDIF},
  GroupBox_Assign {$IFNDEF MSWINDOWS}name '_GroupBox_Assign'{$ENDIF},
  GroupBox_ClassName {$IFNDEF MSWINDOWS}name '_GroupBox_ClassName'{$ENDIF},
  GroupBox_Equals {$IFNDEF MSWINDOWS}name '_GroupBox_Equals'{$ENDIF},
  GroupBox_GetHashCode {$IFNDEF MSWINDOWS}name '_GroupBox_GetHashCode'{$ENDIF},
  GroupBox_ToString {$IFNDEF MSWINDOWS}name '_GroupBox_ToString'{$ENDIF},
  GroupBox_GetAlign {$IFNDEF MSWINDOWS}name '_GroupBox_GetAlign'{$ENDIF},
  GroupBox_SetAlign {$IFNDEF MSWINDOWS}name '_GroupBox_SetAlign'{$ENDIF},
  GroupBox_GetAnchors {$IFNDEF MSWINDOWS}name '_GroupBox_GetAnchors'{$ENDIF},
  GroupBox_SetAnchors {$IFNDEF MSWINDOWS}name '_GroupBox_SetAnchors'{$ENDIF},
  GroupBox_GetBiDiMode {$IFNDEF MSWINDOWS}name '_GroupBox_GetBiDiMode'{$ENDIF},
  GroupBox_SetBiDiMode {$IFNDEF MSWINDOWS}name '_GroupBox_SetBiDiMode'{$ENDIF},
  GroupBox_GetCaption {$IFNDEF MSWINDOWS}name '_GroupBox_GetCaption'{$ENDIF},
  GroupBox_SetCaption {$IFNDEF MSWINDOWS}name '_GroupBox_SetCaption'{$ENDIF},
  GroupBox_GetColor {$IFNDEF MSWINDOWS}name '_GroupBox_GetColor'{$ENDIF},
  GroupBox_SetColor {$IFNDEF MSWINDOWS}name '_GroupBox_SetColor'{$ENDIF},
  GroupBox_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_GroupBox_GetDoubleBuffered'{$ENDIF},
  GroupBox_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_GroupBox_SetDoubleBuffered'{$ENDIF},
  GroupBox_GetEnabled {$IFNDEF MSWINDOWS}name '_GroupBox_GetEnabled'{$ENDIF},
  GroupBox_SetEnabled {$IFNDEF MSWINDOWS}name '_GroupBox_SetEnabled'{$ENDIF},
  GroupBox_GetFont {$IFNDEF MSWINDOWS}name '_GroupBox_GetFont'{$ENDIF},
  GroupBox_SetFont {$IFNDEF MSWINDOWS}name '_GroupBox_SetFont'{$ENDIF},
  //GroupBox_GetParentBackground {$IFNDEF MSWINDOWS}name '_GroupBox_GetParentBackground'{$ENDIF},
  //GroupBox_SetParentBackground {$IFNDEF MSWINDOWS}name '_GroupBox_SetParentBackground'{$ENDIF},
  GroupBox_GetParentColor {$IFNDEF MSWINDOWS}name '_GroupBox_GetParentColor'{$ENDIF},
  GroupBox_SetParentColor {$IFNDEF MSWINDOWS}name '_GroupBox_SetParentColor'{$ENDIF},
  //GroupBox_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_GroupBox_GetParentCtl3D'{$ENDIF},
  //GroupBox_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_GroupBox_SetParentCtl3D'{$ENDIF},
  //GroupBox_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_GroupBox_GetParentDoubleBuffered'{$ENDIF},
  //GroupBox_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_GroupBox_SetParentDoubleBuffered'{$ENDIF},
  GroupBox_GetParentFont {$IFNDEF MSWINDOWS}name '_GroupBox_GetParentFont'{$ENDIF},
  GroupBox_SetParentFont {$IFNDEF MSWINDOWS}name '_GroupBox_SetParentFont'{$ENDIF},
  GroupBox_GetParentShowHint {$IFNDEF MSWINDOWS}name '_GroupBox_GetParentShowHint'{$ENDIF},
  GroupBox_SetParentShowHint {$IFNDEF MSWINDOWS}name '_GroupBox_SetParentShowHint'{$ENDIF},
  GroupBox_GetPopupMenu {$IFNDEF MSWINDOWS}name '_GroupBox_GetPopupMenu'{$ENDIF},
  GroupBox_SetPopupMenu {$IFNDEF MSWINDOWS}name '_GroupBox_SetPopupMenu'{$ENDIF},
  GroupBox_GetShowHint {$IFNDEF MSWINDOWS}name '_GroupBox_GetShowHint'{$ENDIF},
  GroupBox_SetShowHint {$IFNDEF MSWINDOWS}name '_GroupBox_SetShowHint'{$ENDIF},
  GroupBox_GetTabOrder {$IFNDEF MSWINDOWS}name '_GroupBox_GetTabOrder'{$ENDIF},
  GroupBox_SetTabOrder {$IFNDEF MSWINDOWS}name '_GroupBox_SetTabOrder'{$ENDIF},
  GroupBox_GetTabStop {$IFNDEF MSWINDOWS}name '_GroupBox_GetTabStop'{$ENDIF},
  GroupBox_SetTabStop {$IFNDEF MSWINDOWS}name '_GroupBox_SetTabStop'{$ENDIF},
  GroupBox_GetVisible {$IFNDEF MSWINDOWS}name '_GroupBox_GetVisible'{$ENDIF},
  GroupBox_SetVisible {$IFNDEF MSWINDOWS}name '_GroupBox_SetVisible'{$ENDIF},
  //GroupBox_GetStyleElements {$IFNDEF MSWINDOWS}name '_GroupBox_GetStyleElements'{$ENDIF},
  //GroupBox_SetStyleElements {$IFNDEF MSWINDOWS}name '_GroupBox_SetStyleElements'{$ENDIF},
  GroupBox_SetOnClick {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnClick'{$ENDIF},
  GroupBox_SetOnDblClick {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnDblClick'{$ENDIF},
  GroupBox_SetOnEnter {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnEnter'{$ENDIF},
  GroupBox_SetOnExit {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnExit'{$ENDIF},
  GroupBox_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnMouseDown'{$ENDIF},
  GroupBox_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnMouseEnter'{$ENDIF},
  GroupBox_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnMouseLeave'{$ENDIF},
  GroupBox_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnMouseMove'{$ENDIF},
  GroupBox_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_GroupBox_SetOnMouseUp'{$ENDIF},
  GroupBox_GetBrush {$IFNDEF MSWINDOWS}name '_GroupBox_GetBrush'{$ENDIF},
  GroupBox_GetControlCount {$IFNDEF MSWINDOWS}name '_GroupBox_GetControlCount'{$ENDIF},
  GroupBox_GetHandle {$IFNDEF MSWINDOWS}name '_GroupBox_GetHandle'{$ENDIF},
  GroupBox_GetParentWindow {$IFNDEF MSWINDOWS}name '_GroupBox_GetParentWindow'{$ENDIF},
  GroupBox_SetParentWindow {$IFNDEF MSWINDOWS}name '_GroupBox_SetParentWindow'{$ENDIF},
  GroupBox_GetAction {$IFNDEF MSWINDOWS}name '_GroupBox_GetAction'{$ENDIF},
  GroupBox_SetAction {$IFNDEF MSWINDOWS}name '_GroupBox_SetAction'{$ENDIF},
  GroupBox_GetBoundsRect {$IFNDEF MSWINDOWS}name '_GroupBox_GetBoundsRect'{$ENDIF},
  GroupBox_SetBoundsRect {$IFNDEF MSWINDOWS}name '_GroupBox_SetBoundsRect'{$ENDIF},
  GroupBox_GetClientHeight {$IFNDEF MSWINDOWS}name '_GroupBox_GetClientHeight'{$ENDIF},
  GroupBox_SetClientHeight {$IFNDEF MSWINDOWS}name '_GroupBox_SetClientHeight'{$ENDIF},
  GroupBox_GetClientRect {$IFNDEF MSWINDOWS}name '_GroupBox_GetClientRect'{$ENDIF},
  GroupBox_GetClientWidth {$IFNDEF MSWINDOWS}name '_GroupBox_GetClientWidth'{$ENDIF},
  GroupBox_SetClientWidth {$IFNDEF MSWINDOWS}name '_GroupBox_SetClientWidth'{$ENDIF},
  //GroupBox_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_GroupBox_GetExplicitLeft'{$ENDIF},
  //GroupBox_GetExplicitTop {$IFNDEF MSWINDOWS}name '_GroupBox_GetExplicitTop'{$ENDIF},
  //GroupBox_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_GroupBox_GetExplicitWidth'{$ENDIF},
  //GroupBox_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_GroupBox_GetExplicitHeight'{$ENDIF},
  GroupBox_GetParent {$IFNDEF MSWINDOWS}name '_GroupBox_GetParent'{$ENDIF},
  GroupBox_SetParent {$IFNDEF MSWINDOWS}name '_GroupBox_SetParent'{$ENDIF},
  //GroupBox_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_GroupBox_GetAlignWithMargins'{$ENDIF},
  //GroupBox_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_GroupBox_SetAlignWithMargins'{$ENDIF},
  GroupBox_GetLeft {$IFNDEF MSWINDOWS}name '_GroupBox_GetLeft'{$ENDIF},
  GroupBox_SetLeft {$IFNDEF MSWINDOWS}name '_GroupBox_SetLeft'{$ENDIF},
  GroupBox_GetTop {$IFNDEF MSWINDOWS}name '_GroupBox_GetTop'{$ENDIF},
  GroupBox_SetTop {$IFNDEF MSWINDOWS}name '_GroupBox_SetTop'{$ENDIF},
  GroupBox_GetWidth {$IFNDEF MSWINDOWS}name '_GroupBox_GetWidth'{$ENDIF},
  GroupBox_SetWidth {$IFNDEF MSWINDOWS}name '_GroupBox_SetWidth'{$ENDIF},
  GroupBox_GetHeight {$IFNDEF MSWINDOWS}name '_GroupBox_GetHeight'{$ENDIF},
  GroupBox_SetHeight {$IFNDEF MSWINDOWS}name '_GroupBox_SetHeight'{$ENDIF},
  GroupBox_GetCursor {$IFNDEF MSWINDOWS}name '_GroupBox_GetCursor'{$ENDIF},
  GroupBox_SetCursor {$IFNDEF MSWINDOWS}name '_GroupBox_SetCursor'{$ENDIF},
  GroupBox_GetHint {$IFNDEF MSWINDOWS}name '_GroupBox_GetHint'{$ENDIF},
  GroupBox_SetHint {$IFNDEF MSWINDOWS}name '_GroupBox_SetHint'{$ENDIF},
  //GroupBox_GetMargins {$IFNDEF MSWINDOWS}name '_GroupBox_GetMargins'{$ENDIF},
  //GroupBox_SetMargins {$IFNDEF MSWINDOWS}name '_GroupBox_SetMargins'{$ENDIF},
  GroupBox_GetComponentCount {$IFNDEF MSWINDOWS}name '_GroupBox_GetComponentCount'{$ENDIF},
  GroupBox_GetComponentIndex {$IFNDEF MSWINDOWS}name '_GroupBox_GetComponentIndex'{$ENDIF},
  GroupBox_SetComponentIndex {$IFNDEF MSWINDOWS}name '_GroupBox_SetComponentIndex'{$ENDIF},
  GroupBox_GetOwner {$IFNDEF MSWINDOWS}name '_GroupBox_GetOwner'{$ENDIF},
  GroupBox_GetName {$IFNDEF MSWINDOWS}name '_GroupBox_GetName'{$ENDIF},
  GroupBox_SetName {$IFNDEF MSWINDOWS}name '_GroupBox_SetName'{$ENDIF},
  GroupBox_GetTag {$IFNDEF MSWINDOWS}name '_GroupBox_GetTag'{$ENDIF},
  GroupBox_SetTag {$IFNDEF MSWINDOWS}name '_GroupBox_SetTag'{$ENDIF},
  GroupBox_GetControls {$IFNDEF MSWINDOWS}name '_GroupBox_GetControls'{$ENDIF},
  GroupBox_GetComponents {$IFNDEF MSWINDOWS}name '_GroupBox_GetComponents'{$ENDIF};

