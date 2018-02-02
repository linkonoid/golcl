//http://www.freepascal.ru/forum/viewtopic.php?t=2186
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function HotKey_Create(AOwner: TComponent): THotKey; cdecl;
begin
  Result :=  THotKey.Create(AOwner);
end;

procedure HotKey_Free(AObj: THotKey); cdecl;
begin
  AObj.Free;
end;

function HotKey_CanFocus(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure HotKey_FlipChildren(AObj: THotKey; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function HotKey_Focused(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function HotKey_HandleAllocated(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure HotKey_Invalidate(AObj: THotKey); cdecl;
begin
  AObj.Invalidate;
end;

procedure HotKey_Realign(AObj: THotKey); cdecl;
begin
  AObj.Realign;
end;

procedure HotKey_Repaint(AObj: THotKey); cdecl;
begin
  AObj.Repaint;
end;

procedure HotKey_ScaleBy(AObj: THotKey; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure HotKey_SetBounds(AObj: THotKey; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure HotKey_SetFocus(AObj: THotKey); cdecl;
begin
  AObj.SetFocus;
end;

procedure HotKey_Update(AObj: THotKey); cdecl;
begin
  AObj.Update;
end;

procedure HotKey_BringToFront(AObj: THotKey); cdecl;
begin
  AObj.BringToFront;
end;

function HotKey_HasParent(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure HotKey_Hide(AObj: THotKey); cdecl;
begin
  AObj.Hide;
end;

function HotKey_Perform(AObj: THotKey; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure HotKey_Refresh(AObj: THotKey); cdecl;
begin
  AObj.Refresh;
end;

procedure HotKey_SendToBack(AObj: THotKey); cdecl;
begin
  AObj.SendToBack;
end;

procedure HotKey_Show(AObj: THotKey); cdecl;
begin
  AObj.Show;
end;

function HotKey_GetTextBuf(AObj: THotKey; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function HotKey_FindComponent(AObj: THotKey; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function HotKey_GetNamePath(AObj: THotKey): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure HotKey_Assign(AObj: THotKey; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function HotKey_ClassName(AObj: THotKey): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function HotKey_Equals(AObj: THotKey; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function HotKey_GetHashCode(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function HotKey_ToString(AObj: THotKey): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function HotKey_GetAnchors(AObj: THotKey): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure HotKey_SetAnchors(AObj: THotKey; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function HotKey_GetAutoSize(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure HotKey_SetAutoSize(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function HotKey_GetBiDiMode(AObj: THotKey): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure HotKey_SetBiDiMode(AObj: THotKey; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function HotKey_GetEnabled(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure HotKey_SetEnabled(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function HotKey_GetHint(AObj: THotKey): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure HotKey_SetHint(AObj: THotKey; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function HotKey_GetParentShowHint(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure HotKey_SetParentShowHint(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function HotKey_GetPopupMenu(AObj: THotKey): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure HotKey_SetPopupMenu(AObj: THotKey; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function HotKey_GetShowHint(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure HotKey_SetShowHint(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function HotKey_GetTabOrder(AObj: THotKey): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure HotKey_SetTabOrder(AObj: THotKey; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function HotKey_GetTabStop(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure HotKey_SetTabStop(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function HotKey_GetVisible(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure HotKey_SetVisible(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function HotKey_GetStyleElements(AObj: THotKey): TStyleElements; cdecl;
begin
  Result :=  AObj.StyleElements;
end;

procedure HotKey_SetStyleElements(AObj: THotKey; AValue: TStyleElements); cdecl;
begin
  AObj.StyleElements := AValue;
end;

procedure HotKey_SetOnChange(AObj: THotKey; AEventId: NativeUInt); stdcall
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

procedure HotKey_SetOnEnter(AObj: THotKey; AEventId: NativeUInt); stdcall
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

procedure HotKey_SetOnExit(AObj: THotKey; AEventId: NativeUInt); stdcall
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

procedure HotKey_SetOnMouseDown(AObj: THotKey; AEventId: NativeUInt); stdcall
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

procedure HotKey_SetOnMouseEnter(AObj: THotKey; AEventId: NativeUInt); stdcall
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

procedure HotKey_SetOnMouseLeave(AObj: THotKey; AEventId: NativeUInt); stdcall
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

procedure HotKey_SetOnMouseMove(AObj: THotKey; AEventId: NativeUInt); stdcall
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

procedure HotKey_SetOnMouseUp(AObj: THotKey; AEventId: NativeUInt); stdcall
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

function HotKey_GetDoubleBuffered(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure HotKey_SetDoubleBuffered(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function HotKey_GetBrush(AObj: THotKey): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function HotKey_GetControlCount(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function HotKey_GetHandle(AObj: THotKey): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function HotKey_GetParentDoubleBuffered(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure HotKey_SetParentDoubleBuffered(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function HotKey_GetParentWindow(AObj: THotKey): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure HotKey_SetParentWindow(AObj: THotKey; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function HotKey_GetAction(AObj: THotKey): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure HotKey_SetAction(AObj: THotKey; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function HotKey_GetAlign(AObj: THotKey): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure HotKey_SetAlign(AObj: THotKey; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

procedure HotKey_GetBoundsRect(AObj: THotKey; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure HotKey_SetBoundsRect(AObj: THotKey; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function HotKey_GetClientHeight(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure HotKey_SetClientHeight(AObj: THotKey; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure HotKey_GetClientRect(AObj: THotKey; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function HotKey_GetClientWidth(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure HotKey_SetClientWidth(AObj: THotKey; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function HotKey_GetExplicitLeft(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function HotKey_GetExplicitTop(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function HotKey_GetExplicitWidth(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function HotKey_GetExplicitHeight(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

function HotKey_GetParent(AObj: THotKey): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure HotKey_SetParent(AObj: THotKey; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function HotKey_GetAlignWithMargins(AObj: THotKey): LongBool; cdecl;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure HotKey_SetAlignWithMargins(AObj: THotKey; AValue: LongBool); cdecl;
begin
  AObj.AlignWithMargins := AValue;
end;

function HotKey_GetLeft(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure HotKey_SetLeft(AObj: THotKey; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function HotKey_GetTop(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure HotKey_SetTop(AObj: THotKey; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function HotKey_GetWidth(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure HotKey_SetWidth(AObj: THotKey; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function HotKey_GetHeight(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure HotKey_SetHeight(AObj: THotKey; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function HotKey_GetCursor(AObj: THotKey): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure HotKey_SetCursor(AObj: THotKey; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function HotKey_GetMargins(AObj: THotKey): TMargins; cdecl;
begin
  Result :=  AObj.Margins;
end;

procedure HotKey_SetMargins(AObj: THotKey; AValue: TMargins); cdecl;
begin
  AObj.Margins := AValue;
end;

function HotKey_GetComponentCount(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function HotKey_GetComponentIndex(AObj: THotKey): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure HotKey_SetComponentIndex(AObj: THotKey; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function HotKey_GetOwner(AObj: THotKey): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function HotKey_GetName(AObj: THotKey): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure HotKey_SetName(AObj: THotKey; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function HotKey_GetTag(AObj: THotKey): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure HotKey_SetTag(AObj: THotKey; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function HotKey_GetControls(AObj: THotKey; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function HotKey_GetComponents(AObj: THotKey; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  HotKey_Create {$IFNDEF MSWINDOWS}name '_HotKey_Create'{$ENDIF},
  HotKey_Free {$IFNDEF MSWINDOWS}name '_HotKey_Free'{$ENDIF},
  HotKey_CanFocus {$IFNDEF MSWINDOWS}name '_HotKey_CanFocus'{$ENDIF},
  HotKey_FlipChildren {$IFNDEF MSWINDOWS}name '_HotKey_FlipChildren'{$ENDIF},
  HotKey_Focused {$IFNDEF MSWINDOWS}name '_HotKey_Focused'{$ENDIF},
  HotKey_HandleAllocated {$IFNDEF MSWINDOWS}name '_HotKey_HandleAllocated'{$ENDIF},
  HotKey_Invalidate {$IFNDEF MSWINDOWS}name '_HotKey_Invalidate'{$ENDIF},
  HotKey_Realign {$IFNDEF MSWINDOWS}name '_HotKey_Realign'{$ENDIF},
  HotKey_Repaint {$IFNDEF MSWINDOWS}name '_HotKey_Repaint'{$ENDIF},
  HotKey_ScaleBy {$IFNDEF MSWINDOWS}name '_HotKey_ScaleBy'{$ENDIF},
  HotKey_SetBounds {$IFNDEF MSWINDOWS}name '_HotKey_SetBounds'{$ENDIF},
  HotKey_SetFocus {$IFNDEF MSWINDOWS}name '_HotKey_SetFocus'{$ENDIF},
  HotKey_Update {$IFNDEF MSWINDOWS}name '_HotKey_Update'{$ENDIF},
  HotKey_BringToFront {$IFNDEF MSWINDOWS}name '_HotKey_BringToFront'{$ENDIF},
  HotKey_HasParent {$IFNDEF MSWINDOWS}name '_HotKey_HasParent'{$ENDIF},
  HotKey_Hide {$IFNDEF MSWINDOWS}name '_HotKey_Hide'{$ENDIF},
  HotKey_Perform {$IFNDEF MSWINDOWS}name '_HotKey_Perform'{$ENDIF},
  HotKey_Refresh {$IFNDEF MSWINDOWS}name '_HotKey_Refresh'{$ENDIF},
  HotKey_SendToBack {$IFNDEF MSWINDOWS}name '_HotKey_SendToBack'{$ENDIF},
  HotKey_Show {$IFNDEF MSWINDOWS}name '_HotKey_Show'{$ENDIF},
  HotKey_GetTextBuf {$IFNDEF MSWINDOWS}name '_HotKey_GetTextBuf'{$ENDIF},
  HotKey_FindComponent {$IFNDEF MSWINDOWS}name '_HotKey_FindComponent'{$ENDIF},
  HotKey_GetNamePath {$IFNDEF MSWINDOWS}name '_HotKey_GetNamePath'{$ENDIF},
  HotKey_Assign {$IFNDEF MSWINDOWS}name '_HotKey_Assign'{$ENDIF},
  HotKey_ClassName {$IFNDEF MSWINDOWS}name '_HotKey_ClassName'{$ENDIF},
  HotKey_Equals {$IFNDEF MSWINDOWS}name '_HotKey_Equals'{$ENDIF},
  HotKey_GetHashCode {$IFNDEF MSWINDOWS}name '_HotKey_GetHashCode'{$ENDIF},
  HotKey_ToString {$IFNDEF MSWINDOWS}name '_HotKey_ToString'{$ENDIF},
  HotKey_GetAnchors {$IFNDEF MSWINDOWS}name '_HotKey_GetAnchors'{$ENDIF},
  HotKey_SetAnchors {$IFNDEF MSWINDOWS}name '_HotKey_SetAnchors'{$ENDIF},
  HotKey_GetAutoSize {$IFNDEF MSWINDOWS}name '_HotKey_GetAutoSize'{$ENDIF},
  HotKey_SetAutoSize {$IFNDEF MSWINDOWS}name '_HotKey_SetAutoSize'{$ENDIF},
  HotKey_GetBiDiMode {$IFNDEF MSWINDOWS}name '_HotKey_GetBiDiMode'{$ENDIF},
  HotKey_SetBiDiMode {$IFNDEF MSWINDOWS}name '_HotKey_SetBiDiMode'{$ENDIF},
  HotKey_GetEnabled {$IFNDEF MSWINDOWS}name '_HotKey_GetEnabled'{$ENDIF},
  HotKey_SetEnabled {$IFNDEF MSWINDOWS}name '_HotKey_SetEnabled'{$ENDIF},
  HotKey_GetHint {$IFNDEF MSWINDOWS}name '_HotKey_GetHint'{$ENDIF},
  HotKey_SetHint {$IFNDEF MSWINDOWS}name '_HotKey_SetHint'{$ENDIF},
  HotKey_GetParentShowHint {$IFNDEF MSWINDOWS}name '_HotKey_GetParentShowHint'{$ENDIF},
  HotKey_SetParentShowHint {$IFNDEF MSWINDOWS}name '_HotKey_SetParentShowHint'{$ENDIF},
  HotKey_GetPopupMenu {$IFNDEF MSWINDOWS}name '_HotKey_GetPopupMenu'{$ENDIF},
  HotKey_SetPopupMenu {$IFNDEF MSWINDOWS}name '_HotKey_SetPopupMenu'{$ENDIF},
  HotKey_GetShowHint {$IFNDEF MSWINDOWS}name '_HotKey_GetShowHint'{$ENDIF},
  HotKey_SetShowHint {$IFNDEF MSWINDOWS}name '_HotKey_SetShowHint'{$ENDIF},
  HotKey_GetTabOrder {$IFNDEF MSWINDOWS}name '_HotKey_GetTabOrder'{$ENDIF},
  HotKey_SetTabOrder {$IFNDEF MSWINDOWS}name '_HotKey_SetTabOrder'{$ENDIF},
  HotKey_GetTabStop {$IFNDEF MSWINDOWS}name '_HotKey_GetTabStop'{$ENDIF},
  HotKey_SetTabStop {$IFNDEF MSWINDOWS}name '_HotKey_SetTabStop'{$ENDIF},
  HotKey_GetVisible {$IFNDEF MSWINDOWS}name '_HotKey_GetVisible'{$ENDIF},
  HotKey_SetVisible {$IFNDEF MSWINDOWS}name '_HotKey_SetVisible'{$ENDIF},
  HotKey_GetStyleElements {$IFNDEF MSWINDOWS}name '_HotKey_GetStyleElements'{$ENDIF},
  HotKey_SetStyleElements {$IFNDEF MSWINDOWS}name '_HotKey_SetStyleElements'{$ENDIF},
  HotKey_SetOnChange {$IFNDEF MSWINDOWS}name '_HotKey_SetOnChange'{$ENDIF},
  HotKey_SetOnEnter {$IFNDEF MSWINDOWS}name '_HotKey_SetOnEnter'{$ENDIF},
  HotKey_SetOnExit {$IFNDEF MSWINDOWS}name '_HotKey_SetOnExit'{$ENDIF},
  HotKey_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_HotKey_SetOnMouseDown'{$ENDIF},
  HotKey_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_HotKey_SetOnMouseEnter'{$ENDIF},
  HotKey_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_HotKey_SetOnMouseLeave'{$ENDIF},
  HotKey_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_HotKey_SetOnMouseMove'{$ENDIF},
  HotKey_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_HotKey_SetOnMouseUp'{$ENDIF},
  HotKey_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_HotKey_GetDoubleBuffered'{$ENDIF},
  HotKey_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_HotKey_SetDoubleBuffered'{$ENDIF},
  HotKey_GetBrush {$IFNDEF MSWINDOWS}name '_HotKey_GetBrush'{$ENDIF},
  HotKey_GetControlCount {$IFNDEF MSWINDOWS}name '_HotKey_GetControlCount'{$ENDIF},
  HotKey_GetHandle {$IFNDEF MSWINDOWS}name '_HotKey_GetHandle'{$ENDIF},
  HotKey_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_HotKey_GetParentDoubleBuffered'{$ENDIF},
  HotKey_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_HotKey_SetParentDoubleBuffered'{$ENDIF},
  HotKey_GetParentWindow {$IFNDEF MSWINDOWS}name '_HotKey_GetParentWindow'{$ENDIF},
  HotKey_SetParentWindow {$IFNDEF MSWINDOWS}name '_HotKey_SetParentWindow'{$ENDIF},
  HotKey_GetAction {$IFNDEF MSWINDOWS}name '_HotKey_GetAction'{$ENDIF},
  HotKey_SetAction {$IFNDEF MSWINDOWS}name '_HotKey_SetAction'{$ENDIF},
  HotKey_GetAlign {$IFNDEF MSWINDOWS}name '_HotKey_GetAlign'{$ENDIF},
  HotKey_SetAlign {$IFNDEF MSWINDOWS}name '_HotKey_SetAlign'{$ENDIF},
  HotKey_GetBoundsRect {$IFNDEF MSWINDOWS}name '_HotKey_GetBoundsRect'{$ENDIF},
  HotKey_SetBoundsRect {$IFNDEF MSWINDOWS}name '_HotKey_SetBoundsRect'{$ENDIF},
  HotKey_GetClientHeight {$IFNDEF MSWINDOWS}name '_HotKey_GetClientHeight'{$ENDIF},
  HotKey_SetClientHeight {$IFNDEF MSWINDOWS}name '_HotKey_SetClientHeight'{$ENDIF},
  HotKey_GetClientRect {$IFNDEF MSWINDOWS}name '_HotKey_GetClientRect'{$ENDIF},
  HotKey_GetClientWidth {$IFNDEF MSWINDOWS}name '_HotKey_GetClientWidth'{$ENDIF},
  HotKey_SetClientWidth {$IFNDEF MSWINDOWS}name '_HotKey_SetClientWidth'{$ENDIF},
  HotKey_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_HotKey_GetExplicitLeft'{$ENDIF},
  HotKey_GetExplicitTop {$IFNDEF MSWINDOWS}name '_HotKey_GetExplicitTop'{$ENDIF},
  HotKey_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_HotKey_GetExplicitWidth'{$ENDIF},
  HotKey_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_HotKey_GetExplicitHeight'{$ENDIF},
  HotKey_GetParent {$IFNDEF MSWINDOWS}name '_HotKey_GetParent'{$ENDIF},
  HotKey_SetParent {$IFNDEF MSWINDOWS}name '_HotKey_SetParent'{$ENDIF},
  HotKey_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_HotKey_GetAlignWithMargins'{$ENDIF},
  HotKey_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_HotKey_SetAlignWithMargins'{$ENDIF},
  HotKey_GetLeft {$IFNDEF MSWINDOWS}name '_HotKey_GetLeft'{$ENDIF},
  HotKey_SetLeft {$IFNDEF MSWINDOWS}name '_HotKey_SetLeft'{$ENDIF},
  HotKey_GetTop {$IFNDEF MSWINDOWS}name '_HotKey_GetTop'{$ENDIF},
  HotKey_SetTop {$IFNDEF MSWINDOWS}name '_HotKey_SetTop'{$ENDIF},
  HotKey_GetWidth {$IFNDEF MSWINDOWS}name '_HotKey_GetWidth'{$ENDIF},
  HotKey_SetWidth {$IFNDEF MSWINDOWS}name '_HotKey_SetWidth'{$ENDIF},
  HotKey_GetHeight {$IFNDEF MSWINDOWS}name '_HotKey_GetHeight'{$ENDIF},
  HotKey_SetHeight {$IFNDEF MSWINDOWS}name '_HotKey_SetHeight'{$ENDIF},
  HotKey_GetCursor {$IFNDEF MSWINDOWS}name '_HotKey_GetCursor'{$ENDIF},
  HotKey_SetCursor {$IFNDEF MSWINDOWS}name '_HotKey_SetCursor'{$ENDIF},
  HotKey_GetMargins {$IFNDEF MSWINDOWS}name '_HotKey_GetMargins'{$ENDIF},
  HotKey_SetMargins {$IFNDEF MSWINDOWS}name '_HotKey_SetMargins'{$ENDIF},
  HotKey_GetComponentCount {$IFNDEF MSWINDOWS}name '_HotKey_GetComponentCount'{$ENDIF},
  HotKey_GetComponentIndex {$IFNDEF MSWINDOWS}name '_HotKey_GetComponentIndex'{$ENDIF},
  HotKey_SetComponentIndex {$IFNDEF MSWINDOWS}name '_HotKey_SetComponentIndex'{$ENDIF},
  HotKey_GetOwner {$IFNDEF MSWINDOWS}name '_HotKey_GetOwner'{$ENDIF},
  HotKey_GetName {$IFNDEF MSWINDOWS}name '_HotKey_GetName'{$ENDIF},
  HotKey_SetName {$IFNDEF MSWINDOWS}name '_HotKey_SetName'{$ENDIF},
  HotKey_GetTag {$IFNDEF MSWINDOWS}name '_HotKey_GetTag'{$ENDIF},
  HotKey_SetTag {$IFNDEF MSWINDOWS}name '_HotKey_SetTag'{$ENDIF},
  HotKey_GetControls {$IFNDEF MSWINDOWS}name '_HotKey_GetControls'{$ENDIF},
  HotKey_GetComponents {$IFNDEF MSWINDOWS}name '_HotKey_GetComponents'{$ENDIF};

