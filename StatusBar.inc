
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function StatusBar_Create(AOwner: TComponent): TStatusBar; cdecl;
begin
  Result :=  TStatusBar.Create(AOwner);
end;

procedure StatusBar_Free(AObj: TStatusBar); cdecl;
begin
  AObj.Free;
end;

procedure StatusBar_FlipChildren(AObj: TStatusBar; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

procedure StatusBar_SetBounds(AObj: TStatusBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

function StatusBar_CanFocus(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

function StatusBar_Focused(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function StatusBar_HandleAllocated(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure StatusBar_Invalidate(AObj: TStatusBar); cdecl;
begin
  AObj.Invalidate;
end;

procedure StatusBar_Realign(AObj: TStatusBar); cdecl;
begin
  AObj.Realign;
end;

procedure StatusBar_Repaint(AObj: TStatusBar); cdecl;
begin
  AObj.Repaint;
end;

procedure StatusBar_ScaleBy(AObj: TStatusBar; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure StatusBar_SetFocus(AObj: TStatusBar); cdecl;
begin
  AObj.SetFocus;
end;

procedure StatusBar_Update(AObj: TStatusBar); cdecl;
begin
  AObj.Update;
end;

procedure StatusBar_BringToFront(AObj: TStatusBar); cdecl;
begin
  AObj.BringToFront;
end;

function StatusBar_HasParent(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure StatusBar_Hide(AObj: TStatusBar); cdecl;
begin
  AObj.Hide;
end;

function StatusBar_Perform(AObj: TStatusBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure StatusBar_Refresh(AObj: TStatusBar); cdecl;
begin
  AObj.Refresh;
end;

procedure StatusBar_SendToBack(AObj: TStatusBar); cdecl;
begin
  AObj.SendToBack;
end;

procedure StatusBar_Show(AObj: TStatusBar); cdecl;
begin
  AObj.Show;
end;

function StatusBar_GetTextBuf(AObj: TStatusBar; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function StatusBar_FindComponent(AObj: TStatusBar; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function StatusBar_GetNamePath(AObj: TStatusBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure StatusBar_Assign(AObj: TStatusBar; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function StatusBar_ClassName(AObj: TStatusBar): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function StatusBar_Equals(AObj: TStatusBar; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function StatusBar_GetHashCode(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function StatusBar_ToString(AObj: TStatusBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function StatusBar_GetAction(AObj: TStatusBar): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure StatusBar_SetAction(AObj: TStatusBar; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function StatusBar_GetAutoHint(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.AutoHint;
end;

procedure StatusBar_SetAutoHint(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.AutoHint := AValue;
end;

function StatusBar_GetAlign(AObj: TStatusBar): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure StatusBar_SetAlign(AObj: TStatusBar; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function StatusBar_GetAnchors(AObj: TStatusBar): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure StatusBar_SetAnchors(AObj: TStatusBar; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function StatusBar_GetBiDiMode(AObj: TStatusBar): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure StatusBar_SetBiDiMode(AObj: TStatusBar; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function StatusBar_GetBorderWidth(AObj: TStatusBar): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure StatusBar_SetBorderWidth(AObj: TStatusBar; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function StatusBar_GetColor(AObj: TStatusBar): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure StatusBar_SetColor(AObj: TStatusBar; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function StatusBar_GetDoubleBuffered(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure StatusBar_SetDoubleBuffered(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function StatusBar_GetEnabled(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure StatusBar_SetEnabled(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function StatusBar_GetFont(AObj: TStatusBar): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure StatusBar_SetFont(AObj: TStatusBar; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function StatusBar_GetPanels(AObj: TStatusBar): TStatusPanels; cdecl;
begin
  Result :=  AObj.Panels;
end;

procedure StatusBar_SetPanels(AObj: TStatusBar; AValue: TStatusPanels); cdecl;
begin
  AObj.Panels := AValue;
end;

function StatusBar_GetParentColor(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure StatusBar_SetParentColor(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function StatusBar_GetParentDoubleBuffered(AObj: TStatusBar): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure StatusBar_SetParentDoubleBuffered(AObj: TStatusBar; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function StatusBar_GetParentFont(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure StatusBar_SetParentFont(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function StatusBar_GetParentShowHint(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure StatusBar_SetParentShowHint(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function StatusBar_GetPopupMenu(AObj: TStatusBar): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure StatusBar_SetPopupMenu(AObj: TStatusBar; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function StatusBar_GetShowHint(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure StatusBar_SetShowHint(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function StatusBar_GetSimplePanel(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.SimplePanel;
end;

procedure StatusBar_SetSimplePanel(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.SimplePanel := AValue;
end;

function StatusBar_GetSimpleText(AObj: TStatusBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.SimpleText);
end;

procedure StatusBar_SetSimpleText(AObj: TStatusBar; AValue: PWideChar); cdecl;
begin
  AObj.SimpleText := AValue;
end;

function StatusBar_GetSizeGrip(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.SizeGrip;
end;

procedure StatusBar_SetSizeGrip(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.SizeGrip := AValue;
end;

function StatusBar_GetUseSystemFont(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.UseSystemFont;
end;

procedure StatusBar_SetUseSystemFont(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.UseSystemFont := AValue;
end;

function StatusBar_GetVisible(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure StatusBar_SetVisible(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function StatusBar_GetStyleElements(AObj: TStatusBar): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure StatusBar_SetStyleElements(AObj: TStatusBar; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure StatusBar_SetOnClick(AObj: TStatusBar; AEventId: NativeUInt); stdcall;
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

procedure StatusBar_SetOnDblClick(AObj: TStatusBar; AEventId: NativeUInt); stdcall;
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

procedure StatusBar_SetOnMouseDown(AObj: TStatusBar; AEventId: NativeUInt); stdcall;
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

procedure StatusBar_SetOnMouseEnter(AObj: TStatusBar; AEventId: NativeUInt); stdcall;
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

procedure StatusBar_SetOnMouseLeave(AObj: TStatusBar; AEventId: NativeUInt); stdcall;
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

procedure StatusBar_SetOnMouseMove(AObj: TStatusBar; AEventId: NativeUInt); stdcall;
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

procedure StatusBar_SetOnMouseUp(AObj: TStatusBar; AEventId: NativeUInt); stdcall;
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

procedure StatusBar_SetOnResize(AObj: TStatusBar; AEventId: NativeUInt); stdcall;
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

function StatusBar_GetCanvas(AObj: TStatusBar): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function StatusBar_GetBrush(AObj: TStatusBar): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function StatusBar_GetControlCount(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function StatusBar_GetHandle(AObj: TStatusBar): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function StatusBar_GetParentWindow(AObj: TStatusBar): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure StatusBar_SetParentWindow(AObj: TStatusBar; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function StatusBar_GetTabOrder(AObj: TStatusBar): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure StatusBar_SetTabOrder(AObj: TStatusBar; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function StatusBar_GetTabStop(AObj: TStatusBar): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure StatusBar_SetTabStop(AObj: TStatusBar; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

procedure StatusBar_GetBoundsRect(AObj: TStatusBar; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure StatusBar_SetBoundsRect(AObj: TStatusBar; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function StatusBar_GetClientHeight(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure StatusBar_SetClientHeight(AObj: TStatusBar; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure StatusBar_GetClientRect(AObj: TStatusBar; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function StatusBar_GetClientWidth(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure StatusBar_SetClientWidth(AObj: TStatusBar; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function StatusBar_GetExplicitLeft(AObj: TStatusBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function StatusBar_GetExplicitTop(AObj: TStatusBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function StatusBar_GetExplicitWidth(AObj: TStatusBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function StatusBar_GetExplicitHeight(AObj: TStatusBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function StatusBar_GetParent(AObj: TStatusBar): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure StatusBar_SetParent(AObj: TStatusBar; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function StatusBar_GetAlignWithMargins(AObj: TStatusBar): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure StatusBar_SetAlignWithMargins(AObj: TStatusBar; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function StatusBar_GetLeft(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure StatusBar_SetLeft(AObj: TStatusBar; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function StatusBar_GetTop(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure StatusBar_SetTop(AObj: TStatusBar; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function StatusBar_GetWidth(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure StatusBar_SetWidth(AObj: TStatusBar; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function StatusBar_GetHeight(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure StatusBar_SetHeight(AObj: TStatusBar; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function StatusBar_GetCursor(AObj: TStatusBar): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure StatusBar_SetCursor(AObj: TStatusBar; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function StatusBar_GetHint(AObj: TStatusBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure StatusBar_SetHint(AObj: TStatusBar; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function StatusBar_GetMargins(AObj: TStatusBar): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure StatusBar_SetMargins(AObj: TStatusBar; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function StatusBar_GetComponentCount(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function StatusBar_GetComponentIndex(AObj: TStatusBar): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure StatusBar_SetComponentIndex(AObj: TStatusBar; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function StatusBar_GetOwner(AObj: TStatusBar): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function StatusBar_GetName(AObj: TStatusBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure StatusBar_SetName(AObj: TStatusBar; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function StatusBar_GetTag(AObj: TStatusBar): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure StatusBar_SetTag(AObj: TStatusBar; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function StatusBar_GetControls(AObj: TStatusBar; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function StatusBar_GetComponents(AObj: TStatusBar; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  StatusBar_Create {$IFNDEF MSWINDOWS}name '_StatusBar_Create'{$ENDIF},
  StatusBar_Free {$IFNDEF MSWINDOWS}name '_StatusBar_Free'{$ENDIF},
  StatusBar_FlipChildren {$IFNDEF MSWINDOWS}name '_StatusBar_FlipChildren'{$ENDIF},
  StatusBar_SetBounds {$IFNDEF MSWINDOWS}name '_StatusBar_SetBounds'{$ENDIF},
  StatusBar_CanFocus {$IFNDEF MSWINDOWS}name '_StatusBar_CanFocus'{$ENDIF},
  StatusBar_Focused {$IFNDEF MSWINDOWS}name '_StatusBar_Focused'{$ENDIF},
  StatusBar_HandleAllocated {$IFNDEF MSWINDOWS}name '_StatusBar_HandleAllocated'{$ENDIF},
  StatusBar_Invalidate {$IFNDEF MSWINDOWS}name '_StatusBar_Invalidate'{$ENDIF},
  StatusBar_Realign {$IFNDEF MSWINDOWS}name '_StatusBar_Realign'{$ENDIF},
  StatusBar_Repaint {$IFNDEF MSWINDOWS}name '_StatusBar_Repaint'{$ENDIF},
  StatusBar_ScaleBy {$IFNDEF MSWINDOWS}name '_StatusBar_ScaleBy'{$ENDIF},
  StatusBar_SetFocus {$IFNDEF MSWINDOWS}name '_StatusBar_SetFocus'{$ENDIF},
  StatusBar_Update {$IFNDEF MSWINDOWS}name '_StatusBar_Update'{$ENDIF},
  StatusBar_BringToFront {$IFNDEF MSWINDOWS}name '_StatusBar_BringToFront'{$ENDIF},
  StatusBar_HasParent {$IFNDEF MSWINDOWS}name '_StatusBar_HasParent'{$ENDIF},
  StatusBar_Hide {$IFNDEF MSWINDOWS}name '_StatusBar_Hide'{$ENDIF},
  StatusBar_Perform {$IFNDEF MSWINDOWS}name '_StatusBar_Perform'{$ENDIF},
  StatusBar_Refresh {$IFNDEF MSWINDOWS}name '_StatusBar_Refresh'{$ENDIF},
  StatusBar_SendToBack {$IFNDEF MSWINDOWS}name '_StatusBar_SendToBack'{$ENDIF},
  StatusBar_Show {$IFNDEF MSWINDOWS}name '_StatusBar_Show'{$ENDIF},
  StatusBar_GetTextBuf {$IFNDEF MSWINDOWS}name '_StatusBar_GetTextBuf'{$ENDIF},
  StatusBar_FindComponent {$IFNDEF MSWINDOWS}name '_StatusBar_FindComponent'{$ENDIF},
  StatusBar_GetNamePath {$IFNDEF MSWINDOWS}name '_StatusBar_GetNamePath'{$ENDIF},
  StatusBar_Assign {$IFNDEF MSWINDOWS}name '_StatusBar_Assign'{$ENDIF},
  StatusBar_ClassName {$IFNDEF MSWINDOWS}name '_StatusBar_ClassName'{$ENDIF},
  StatusBar_Equals {$IFNDEF MSWINDOWS}name '_StatusBar_Equals'{$ENDIF},
  StatusBar_GetHashCode {$IFNDEF MSWINDOWS}name '_StatusBar_GetHashCode'{$ENDIF},
  StatusBar_ToString {$IFNDEF MSWINDOWS}name '_StatusBar_ToString'{$ENDIF},
  StatusBar_GetAction {$IFNDEF MSWINDOWS}name '_StatusBar_GetAction'{$ENDIF},
  StatusBar_SetAction {$IFNDEF MSWINDOWS}name '_StatusBar_SetAction'{$ENDIF},
  StatusBar_GetAutoHint {$IFNDEF MSWINDOWS}name '_StatusBar_GetAutoHint'{$ENDIF},
  StatusBar_SetAutoHint {$IFNDEF MSWINDOWS}name '_StatusBar_SetAutoHint'{$ENDIF},
  StatusBar_GetAlign {$IFNDEF MSWINDOWS}name '_StatusBar_GetAlign'{$ENDIF},
  StatusBar_SetAlign {$IFNDEF MSWINDOWS}name '_StatusBar_SetAlign'{$ENDIF},
  StatusBar_GetAnchors {$IFNDEF MSWINDOWS}name '_StatusBar_GetAnchors'{$ENDIF},
  StatusBar_SetAnchors {$IFNDEF MSWINDOWS}name '_StatusBar_SetAnchors'{$ENDIF},
  StatusBar_GetBiDiMode {$IFNDEF MSWINDOWS}name '_StatusBar_GetBiDiMode'{$ENDIF},
  StatusBar_SetBiDiMode {$IFNDEF MSWINDOWS}name '_StatusBar_SetBiDiMode'{$ENDIF},
  StatusBar_GetBorderWidth {$IFNDEF MSWINDOWS}name '_StatusBar_GetBorderWidth'{$ENDIF},
  StatusBar_SetBorderWidth {$IFNDEF MSWINDOWS}name '_StatusBar_SetBorderWidth'{$ENDIF},
  StatusBar_GetColor {$IFNDEF MSWINDOWS}name '_StatusBar_GetColor'{$ENDIF},
  StatusBar_SetColor {$IFNDEF MSWINDOWS}name '_StatusBar_SetColor'{$ENDIF},
  StatusBar_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_StatusBar_GetDoubleBuffered'{$ENDIF},
  StatusBar_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_StatusBar_SetDoubleBuffered'{$ENDIF},
  StatusBar_GetEnabled {$IFNDEF MSWINDOWS}name '_StatusBar_GetEnabled'{$ENDIF},
  StatusBar_SetEnabled {$IFNDEF MSWINDOWS}name '_StatusBar_SetEnabled'{$ENDIF},
  StatusBar_GetFont {$IFNDEF MSWINDOWS}name '_StatusBar_GetFont'{$ENDIF},
  StatusBar_SetFont {$IFNDEF MSWINDOWS}name '_StatusBar_SetFont'{$ENDIF},
  StatusBar_GetPanels {$IFNDEF MSWINDOWS}name '_StatusBar_GetPanels'{$ENDIF},
  StatusBar_SetPanels {$IFNDEF MSWINDOWS}name '_StatusBar_SetPanels'{$ENDIF},
  StatusBar_GetParentColor {$IFNDEF MSWINDOWS}name '_StatusBar_GetParentColor'{$ENDIF},
  StatusBar_SetParentColor {$IFNDEF MSWINDOWS}name '_StatusBar_SetParentColor'{$ENDIF},
  //StatusBar_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_StatusBar_GetParentDoubleBuffered'{$ENDIF},
  //StatusBar_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_StatusBar_SetParentDoubleBuffered'{$ENDIF},
  StatusBar_GetParentFont {$IFNDEF MSWINDOWS}name '_StatusBar_GetParentFont'{$ENDIF},
  StatusBar_SetParentFont {$IFNDEF MSWINDOWS}name '_StatusBar_SetParentFont'{$ENDIF},
  StatusBar_GetParentShowHint {$IFNDEF MSWINDOWS}name '_StatusBar_GetParentShowHint'{$ENDIF},
  StatusBar_SetParentShowHint {$IFNDEF MSWINDOWS}name '_StatusBar_SetParentShowHint'{$ENDIF},
  StatusBar_GetPopupMenu {$IFNDEF MSWINDOWS}name '_StatusBar_GetPopupMenu'{$ENDIF},
  StatusBar_SetPopupMenu {$IFNDEF MSWINDOWS}name '_StatusBar_SetPopupMenu'{$ENDIF},
  StatusBar_GetShowHint {$IFNDEF MSWINDOWS}name '_StatusBar_GetShowHint'{$ENDIF},
  StatusBar_SetShowHint {$IFNDEF MSWINDOWS}name '_StatusBar_SetShowHint'{$ENDIF},
  StatusBar_GetSimplePanel {$IFNDEF MSWINDOWS}name '_StatusBar_GetSimplePanel'{$ENDIF},
  StatusBar_SetSimplePanel {$IFNDEF MSWINDOWS}name '_StatusBar_SetSimplePanel'{$ENDIF},
  StatusBar_GetSimpleText {$IFNDEF MSWINDOWS}name '_StatusBar_GetSimpleText'{$ENDIF},
  StatusBar_SetSimpleText {$IFNDEF MSWINDOWS}name '_StatusBar_SetSimpleText'{$ENDIF},
  StatusBar_GetSizeGrip {$IFNDEF MSWINDOWS}name '_StatusBar_GetSizeGrip'{$ENDIF},
  StatusBar_SetSizeGrip {$IFNDEF MSWINDOWS}name '_StatusBar_SetSizeGrip'{$ENDIF},
  StatusBar_GetUseSystemFont {$IFNDEF MSWINDOWS}name '_StatusBar_GetUseSystemFont'{$ENDIF},
  StatusBar_SetUseSystemFont {$IFNDEF MSWINDOWS}name '_StatusBar_SetUseSystemFont'{$ENDIF},
  StatusBar_GetVisible {$IFNDEF MSWINDOWS}name '_StatusBar_GetVisible'{$ENDIF},
  StatusBar_SetVisible {$IFNDEF MSWINDOWS}name '_StatusBar_SetVisible'{$ENDIF},
  //StatusBar_GetStyleElements {$IFNDEF MSWINDOWS}name '_StatusBar_GetStyleElements'{$ENDIF},
  //StatusBar_SetStyleElements {$IFNDEF MSWINDOWS}name '_StatusBar_SetStyleElements'{$ENDIF},
  StatusBar_SetOnClick {$IFNDEF MSWINDOWS}name '_StatusBar_SetOnClick'{$ENDIF},
  StatusBar_SetOnDblClick {$IFNDEF MSWINDOWS}name '_StatusBar_SetOnDblClick'{$ENDIF},
  StatusBar_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_StatusBar_SetOnMouseDown'{$ENDIF},
  StatusBar_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_StatusBar_SetOnMouseEnter'{$ENDIF},
  StatusBar_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_StatusBar_SetOnMouseLeave'{$ENDIF},
  StatusBar_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_StatusBar_SetOnMouseMove'{$ENDIF},
  StatusBar_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_StatusBar_SetOnMouseUp'{$ENDIF},
  StatusBar_SetOnResize {$IFNDEF MSWINDOWS}name '_StatusBar_SetOnResize'{$ENDIF},
  StatusBar_GetCanvas {$IFNDEF MSWINDOWS}name '_StatusBar_GetCanvas'{$ENDIF},
  StatusBar_GetBrush {$IFNDEF MSWINDOWS}name '_StatusBar_GetBrush'{$ENDIF},
  StatusBar_GetControlCount {$IFNDEF MSWINDOWS}name '_StatusBar_GetControlCount'{$ENDIF},
  StatusBar_GetHandle {$IFNDEF MSWINDOWS}name '_StatusBar_GetHandle'{$ENDIF},
  StatusBar_GetParentWindow {$IFNDEF MSWINDOWS}name '_StatusBar_GetParentWindow'{$ENDIF},
  StatusBar_SetParentWindow {$IFNDEF MSWINDOWS}name '_StatusBar_SetParentWindow'{$ENDIF},
  StatusBar_GetTabOrder {$IFNDEF MSWINDOWS}name '_StatusBar_GetTabOrder'{$ENDIF},
  StatusBar_SetTabOrder {$IFNDEF MSWINDOWS}name '_StatusBar_SetTabOrder'{$ENDIF},
  StatusBar_GetTabStop {$IFNDEF MSWINDOWS}name '_StatusBar_GetTabStop'{$ENDIF},
  StatusBar_SetTabStop {$IFNDEF MSWINDOWS}name '_StatusBar_SetTabStop'{$ENDIF},
  StatusBar_GetBoundsRect {$IFNDEF MSWINDOWS}name '_StatusBar_GetBoundsRect'{$ENDIF},
  StatusBar_SetBoundsRect {$IFNDEF MSWINDOWS}name '_StatusBar_SetBoundsRect'{$ENDIF},
  StatusBar_GetClientHeight {$IFNDEF MSWINDOWS}name '_StatusBar_GetClientHeight'{$ENDIF},
  StatusBar_SetClientHeight {$IFNDEF MSWINDOWS}name '_StatusBar_SetClientHeight'{$ENDIF},
  StatusBar_GetClientRect {$IFNDEF MSWINDOWS}name '_StatusBar_GetClientRect'{$ENDIF},
  StatusBar_GetClientWidth {$IFNDEF MSWINDOWS}name '_StatusBar_GetClientWidth'{$ENDIF},
  StatusBar_SetClientWidth {$IFNDEF MSWINDOWS}name '_StatusBar_SetClientWidth'{$ENDIF},
  //StatusBar_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_StatusBar_GetExplicitLeft'{$ENDIF},
  //StatusBar_GetExplicitTop {$IFNDEF MSWINDOWS}name '_StatusBar_GetExplicitTop'{$ENDIF},
  //StatusBar_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_StatusBar_GetExplicitWidth'{$ENDIF},
  //StatusBar_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_StatusBar_GetExplicitHeight'{$ENDIF},
  StatusBar_GetParent {$IFNDEF MSWINDOWS}name '_StatusBar_GetParent'{$ENDIF},
  StatusBar_SetParent {$IFNDEF MSWINDOWS}name '_StatusBar_SetParent'{$ENDIF},
  //StatusBar_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_StatusBar_GetAlignWithMargins'{$ENDIF},
  //StatusBar_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_StatusBar_SetAlignWithMargins'{$ENDIF},
  StatusBar_GetLeft {$IFNDEF MSWINDOWS}name '_StatusBar_GetLeft'{$ENDIF},
  StatusBar_SetLeft {$IFNDEF MSWINDOWS}name '_StatusBar_SetLeft'{$ENDIF},
  StatusBar_GetTop {$IFNDEF MSWINDOWS}name '_StatusBar_GetTop'{$ENDIF},
  StatusBar_SetTop {$IFNDEF MSWINDOWS}name '_StatusBar_SetTop'{$ENDIF},
  StatusBar_GetWidth {$IFNDEF MSWINDOWS}name '_StatusBar_GetWidth'{$ENDIF},
  StatusBar_SetWidth {$IFNDEF MSWINDOWS}name '_StatusBar_SetWidth'{$ENDIF},
  StatusBar_GetHeight {$IFNDEF MSWINDOWS}name '_StatusBar_GetHeight'{$ENDIF},
  StatusBar_SetHeight {$IFNDEF MSWINDOWS}name '_StatusBar_SetHeight'{$ENDIF},
  StatusBar_GetCursor {$IFNDEF MSWINDOWS}name '_StatusBar_GetCursor'{$ENDIF},
  StatusBar_SetCursor {$IFNDEF MSWINDOWS}name '_StatusBar_SetCursor'{$ENDIF},
  StatusBar_GetHint {$IFNDEF MSWINDOWS}name '_StatusBar_GetHint'{$ENDIF},
  StatusBar_SetHint {$IFNDEF MSWINDOWS}name '_StatusBar_SetHint'{$ENDIF},
  //StatusBar_GetMargins {$IFNDEF MSWINDOWS}name '_StatusBar_GetMargins'{$ENDIF},
  //StatusBar_SetMargins {$IFNDEF MSWINDOWS}name '_StatusBar_SetMargins'{$ENDIF},
  StatusBar_GetComponentCount {$IFNDEF MSWINDOWS}name '_StatusBar_GetComponentCount'{$ENDIF},
  StatusBar_GetComponentIndex {$IFNDEF MSWINDOWS}name '_StatusBar_GetComponentIndex'{$ENDIF},
  StatusBar_SetComponentIndex {$IFNDEF MSWINDOWS}name '_StatusBar_SetComponentIndex'{$ENDIF},
  StatusBar_GetOwner {$IFNDEF MSWINDOWS}name '_StatusBar_GetOwner'{$ENDIF},
  StatusBar_GetName {$IFNDEF MSWINDOWS}name '_StatusBar_GetName'{$ENDIF},
  StatusBar_SetName {$IFNDEF MSWINDOWS}name '_StatusBar_SetName'{$ENDIF},
  StatusBar_GetTag {$IFNDEF MSWINDOWS}name '_StatusBar_GetTag'{$ENDIF},
  StatusBar_SetTag {$IFNDEF MSWINDOWS}name '_StatusBar_SetTag'{$ENDIF},
  StatusBar_GetControls {$IFNDEF MSWINDOWS}name '_StatusBar_GetControls'{$ENDIF},
  StatusBar_GetComponents {$IFNDEF MSWINDOWS}name '_StatusBar_GetComponents'{$ENDIF};

