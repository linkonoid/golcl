
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function CheckBox_Create(AOwner: TComponent): TCheckBox; cdecl;
begin
  Result :=  TCheckBox.Create(AOwner);
end;

procedure CheckBox_Free(AObj: TCheckBox); cdecl;
begin
  AObj.Free;
end;

function CheckBox_CanFocus(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure CheckBox_FlipChildren(AObj: TCheckBox; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function CheckBox_Focused(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function CheckBox_HandleAllocated(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure CheckBox_Invalidate(AObj: TCheckBox); cdecl;
begin
  AObj.Invalidate;
end;

procedure CheckBox_Realign(AObj: TCheckBox); cdecl;
begin
  AObj.Realign;
end;

procedure CheckBox_Repaint(AObj: TCheckBox); cdecl;
begin
  AObj.Repaint;
end;

procedure CheckBox_ScaleBy(AObj: TCheckBox; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure CheckBox_SetBounds(AObj: TCheckBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure CheckBox_SetFocus(AObj: TCheckBox); cdecl;
begin
  AObj.SetFocus;
end;

procedure CheckBox_Update(AObj: TCheckBox); cdecl;
begin
  AObj.Update;
end;

procedure CheckBox_BringToFront(AObj: TCheckBox); cdecl;
begin
  AObj.BringToFront;
end;

function CheckBox_HasParent(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure CheckBox_Hide(AObj: TCheckBox); cdecl;
begin
  AObj.Hide;
end;

function CheckBox_Perform(AObj: TCheckBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure CheckBox_Refresh(AObj: TCheckBox); cdecl;
begin
  AObj.Refresh;
end;

procedure CheckBox_SendToBack(AObj: TCheckBox); cdecl;
begin
  AObj.SendToBack;
end;

procedure CheckBox_Show(AObj: TCheckBox); cdecl;
begin
  AObj.Show;
end;

function CheckBox_GetTextBuf(AObj: TCheckBox; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function CheckBox_FindComponent(AObj: TCheckBox; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function CheckBox_GetNamePath(AObj: TCheckBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure CheckBox_Assign(AObj: TCheckBox; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function CheckBox_ClassName(AObj: TCheckBox): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function CheckBox_Equals(AObj: TCheckBox; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function CheckBox_GetHashCode(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function CheckBox_ToString(AObj: TCheckBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function CheckBox_GetAction(AObj: TCheckBox): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure CheckBox_SetAction(AObj: TCheckBox; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function CheckBox_GetAlign(AObj: TCheckBox): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure CheckBox_SetAlign(AObj: TCheckBox; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function CheckBox_GetAlignment(AObj: TCheckBox): TLeftRight; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure CheckBox_SetAlignment(AObj: TCheckBox; AValue: TLeftRight); cdecl;
begin
  AObj.Alignment := AValue;
end;

function CheckBox_GetAnchors(AObj: TCheckBox): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure CheckBox_SetAnchors(AObj: TCheckBox; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function CheckBox_GetBiDiMode(AObj: TCheckBox): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure CheckBox_SetBiDiMode(AObj: TCheckBox; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function CheckBox_GetCaption(AObj: TCheckBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure CheckBox_SetCaption(AObj: TCheckBox; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function CheckBox_GetChecked(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.Checked;
end;

procedure CheckBox_SetChecked(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.Checked := AValue;
end;

function CheckBox_GetColor(AObj: TCheckBox): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure CheckBox_SetColor(AObj: TCheckBox; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function CheckBox_GetDoubleBuffered(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure CheckBox_SetDoubleBuffered(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function CheckBox_GetEnabled(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure CheckBox_SetEnabled(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function CheckBox_GetFont(AObj: TCheckBox): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure CheckBox_SetFont(AObj: TCheckBox; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function CheckBox_GetParentColor(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure CheckBox_SetParentColor(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function CheckBox_GetParentCtl3D(AObj: TCheckBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentCtl3D;
//end;
//
//procedure CheckBox_SetParentCtl3D(AObj: TCheckBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentCtl3D := AValue;
//end;
//
//function CheckBox_GetParentDoubleBuffered(AObj: TCheckBox): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure CheckBox_SetParentDoubleBuffered(AObj: TCheckBox; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function CheckBox_GetParentFont(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure CheckBox_SetParentFont(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function CheckBox_GetParentShowHint(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure CheckBox_SetParentShowHint(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function CheckBox_GetPopupMenu(AObj: TCheckBox): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure CheckBox_SetPopupMenu(AObj: TCheckBox; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function CheckBox_GetShowHint(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure CheckBox_SetShowHint(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function CheckBox_GetState(AObj: TCheckBox): TCheckBoxState; cdecl;
begin
  Result :=  AObj.State;
end;

procedure CheckBox_SetState(AObj: TCheckBox; AValue: TCheckBoxState); cdecl;
begin
  AObj.State := AValue;
end;

function CheckBox_GetTabOrder(AObj: TCheckBox): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure CheckBox_SetTabOrder(AObj: TCheckBox; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function CheckBox_GetTabStop(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure CheckBox_SetTabStop(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function CheckBox_GetVisible(AObj: TCheckBox): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure CheckBox_SetVisible(AObj: TCheckBox; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function CheckBox_GetWordWrap(AObj: TCheckBox): LongBool; cdecl;
//begin
//  Result :=  AObj.WordWrap;
//end;
//
//procedure CheckBox_SetWordWrap(AObj: TCheckBox; AValue: LongBool); cdecl;
//begin
//  AObj.WordWrap := AValue;
//end;
//
//function CheckBox_GetStyleElements(AObj: TCheckBox): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure CheckBox_SetStyleElements(AObj: TCheckBox; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure CheckBox_SetOnClick(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnEnter(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnExit(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnKeyDown(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnKeyPress(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnKeyUp(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnMouseDown(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnMouseEnter(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnMouseLeave(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnMouseMove(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

procedure CheckBox_SetOnMouseUp(AObj: TCheckBox; AEventId: NativeUInt); stdcall;
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

function CheckBox_GetBrush(AObj: TCheckBox): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function CheckBox_GetControlCount(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function CheckBox_GetHandle(AObj: TCheckBox): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function CheckBox_GetParentWindow(AObj: TCheckBox): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure CheckBox_SetParentWindow(AObj: TCheckBox; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

procedure CheckBox_GetBoundsRect(AObj: TCheckBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure CheckBox_SetBoundsRect(AObj: TCheckBox; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function CheckBox_GetClientHeight(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure CheckBox_SetClientHeight(AObj: TCheckBox; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure CheckBox_GetClientRect(AObj: TCheckBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function CheckBox_GetClientWidth(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure CheckBox_SetClientWidth(AObj: TCheckBox; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function CheckBox_GetExplicitLeft(AObj: TCheckBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function CheckBox_GetExplicitTop(AObj: TCheckBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function CheckBox_GetExplicitWidth(AObj: TCheckBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function CheckBox_GetExplicitHeight(AObj: TCheckBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function CheckBox_GetParent(AObj: TCheckBox): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure CheckBox_SetParent(AObj: TCheckBox; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function CheckBox_GetAlignWithMargins(AObj: TCheckBox): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure CheckBox_SetAlignWithMargins(AObj: TCheckBox; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function CheckBox_GetLeft(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure CheckBox_SetLeft(AObj: TCheckBox; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function CheckBox_GetTop(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure CheckBox_SetTop(AObj: TCheckBox; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function CheckBox_GetWidth(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure CheckBox_SetWidth(AObj: TCheckBox; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function CheckBox_GetHeight(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure CheckBox_SetHeight(AObj: TCheckBox; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function CheckBox_GetCursor(AObj: TCheckBox): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure CheckBox_SetCursor(AObj: TCheckBox; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function CheckBox_GetHint(AObj: TCheckBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure CheckBox_SetHint(AObj: TCheckBox; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function CheckBox_GetMargins(AObj: TCheckBox): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure CheckBox_SetMargins(AObj: TCheckBox; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function CheckBox_GetComponentCount(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function CheckBox_GetComponentIndex(AObj: TCheckBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure CheckBox_SetComponentIndex(AObj: TCheckBox; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function CheckBox_GetOwner(AObj: TCheckBox): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function CheckBox_GetName(AObj: TCheckBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure CheckBox_SetName(AObj: TCheckBox; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function CheckBox_GetTag(AObj: TCheckBox): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure CheckBox_SetTag(AObj: TCheckBox; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function CheckBox_GetControls(AObj: TCheckBox; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function CheckBox_GetComponents(AObj: TCheckBox; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  CheckBox_Create {$IFNDEF MSWINDOWS}name '_CheckBox_Create'{$ENDIF},
  CheckBox_Free {$IFNDEF MSWINDOWS}name '_CheckBox_Free'{$ENDIF},
  CheckBox_CanFocus {$IFNDEF MSWINDOWS}name '_CheckBox_CanFocus'{$ENDIF},
  CheckBox_FlipChildren {$IFNDEF MSWINDOWS}name '_CheckBox_FlipChildren'{$ENDIF},
  CheckBox_Focused {$IFNDEF MSWINDOWS}name '_CheckBox_Focused'{$ENDIF},
  CheckBox_HandleAllocated {$IFNDEF MSWINDOWS}name '_CheckBox_HandleAllocated'{$ENDIF},
  CheckBox_Invalidate {$IFNDEF MSWINDOWS}name '_CheckBox_Invalidate'{$ENDIF},
  CheckBox_Realign {$IFNDEF MSWINDOWS}name '_CheckBox_Realign'{$ENDIF},
  CheckBox_Repaint {$IFNDEF MSWINDOWS}name '_CheckBox_Repaint'{$ENDIF},
  CheckBox_ScaleBy {$IFNDEF MSWINDOWS}name '_CheckBox_ScaleBy'{$ENDIF},
  CheckBox_SetBounds {$IFNDEF MSWINDOWS}name '_CheckBox_SetBounds'{$ENDIF},
  CheckBox_SetFocus {$IFNDEF MSWINDOWS}name '_CheckBox_SetFocus'{$ENDIF},
  CheckBox_Update {$IFNDEF MSWINDOWS}name '_CheckBox_Update'{$ENDIF},
  CheckBox_BringToFront {$IFNDEF MSWINDOWS}name '_CheckBox_BringToFront'{$ENDIF},
  CheckBox_HasParent {$IFNDEF MSWINDOWS}name '_CheckBox_HasParent'{$ENDIF},
  CheckBox_Hide {$IFNDEF MSWINDOWS}name '_CheckBox_Hide'{$ENDIF},
  CheckBox_Perform {$IFNDEF MSWINDOWS}name '_CheckBox_Perform'{$ENDIF},
  CheckBox_Refresh {$IFNDEF MSWINDOWS}name '_CheckBox_Refresh'{$ENDIF},
  CheckBox_SendToBack {$IFNDEF MSWINDOWS}name '_CheckBox_SendToBack'{$ENDIF},
  CheckBox_Show {$IFNDEF MSWINDOWS}name '_CheckBox_Show'{$ENDIF},
  CheckBox_GetTextBuf {$IFNDEF MSWINDOWS}name '_CheckBox_GetTextBuf'{$ENDIF},
  CheckBox_FindComponent {$IFNDEF MSWINDOWS}name '_CheckBox_FindComponent'{$ENDIF},
  CheckBox_GetNamePath {$IFNDEF MSWINDOWS}name '_CheckBox_GetNamePath'{$ENDIF},
  CheckBox_Assign {$IFNDEF MSWINDOWS}name '_CheckBox_Assign'{$ENDIF},
  CheckBox_ClassName {$IFNDEF MSWINDOWS}name '_CheckBox_ClassName'{$ENDIF},
  CheckBox_Equals {$IFNDEF MSWINDOWS}name '_CheckBox_Equals'{$ENDIF},
  CheckBox_GetHashCode {$IFNDEF MSWINDOWS}name '_CheckBox_GetHashCode'{$ENDIF},
  CheckBox_ToString {$IFNDEF MSWINDOWS}name '_CheckBox_ToString'{$ENDIF},
  CheckBox_GetAction {$IFNDEF MSWINDOWS}name '_CheckBox_GetAction'{$ENDIF},
  CheckBox_SetAction {$IFNDEF MSWINDOWS}name '_CheckBox_SetAction'{$ENDIF},
  CheckBox_GetAlign {$IFNDEF MSWINDOWS}name '_CheckBox_GetAlign'{$ENDIF},
  CheckBox_SetAlign {$IFNDEF MSWINDOWS}name '_CheckBox_SetAlign'{$ENDIF},
  CheckBox_GetAlignment {$IFNDEF MSWINDOWS}name '_CheckBox_GetAlignment'{$ENDIF},
  CheckBox_SetAlignment {$IFNDEF MSWINDOWS}name '_CheckBox_SetAlignment'{$ENDIF},
  CheckBox_GetAnchors {$IFNDEF MSWINDOWS}name '_CheckBox_GetAnchors'{$ENDIF},
  CheckBox_SetAnchors {$IFNDEF MSWINDOWS}name '_CheckBox_SetAnchors'{$ENDIF},
  CheckBox_GetBiDiMode {$IFNDEF MSWINDOWS}name '_CheckBox_GetBiDiMode'{$ENDIF},
  CheckBox_SetBiDiMode {$IFNDEF MSWINDOWS}name '_CheckBox_SetBiDiMode'{$ENDIF},
  CheckBox_GetCaption {$IFNDEF MSWINDOWS}name '_CheckBox_GetCaption'{$ENDIF},
  CheckBox_SetCaption {$IFNDEF MSWINDOWS}name '_CheckBox_SetCaption'{$ENDIF},
  CheckBox_GetChecked {$IFNDEF MSWINDOWS}name '_CheckBox_GetChecked'{$ENDIF},
  CheckBox_SetChecked {$IFNDEF MSWINDOWS}name '_CheckBox_SetChecked'{$ENDIF},
  CheckBox_GetColor {$IFNDEF MSWINDOWS}name '_CheckBox_GetColor'{$ENDIF},
  CheckBox_SetColor {$IFNDEF MSWINDOWS}name '_CheckBox_SetColor'{$ENDIF},
  CheckBox_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_CheckBox_GetDoubleBuffered'{$ENDIF},
  CheckBox_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_CheckBox_SetDoubleBuffered'{$ENDIF},
  CheckBox_GetEnabled {$IFNDEF MSWINDOWS}name '_CheckBox_GetEnabled'{$ENDIF},
  CheckBox_SetEnabled {$IFNDEF MSWINDOWS}name '_CheckBox_SetEnabled'{$ENDIF},
  CheckBox_GetFont {$IFNDEF MSWINDOWS}name '_CheckBox_GetFont'{$ENDIF},
  CheckBox_SetFont {$IFNDEF MSWINDOWS}name '_CheckBox_SetFont'{$ENDIF},
  CheckBox_GetParentColor {$IFNDEF MSWINDOWS}name '_CheckBox_GetParentColor'{$ENDIF},
  CheckBox_SetParentColor {$IFNDEF MSWINDOWS}name '_CheckBox_SetParentColor'{$ENDIF},
  //CheckBox_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_CheckBox_GetParentCtl3D'{$ENDIF},
  //CheckBox_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_CheckBox_SetParentCtl3D'{$ENDIF},
  //CheckBox_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_CheckBox_GetParentDoubleBuffered'{$ENDIF},
  //CheckBox_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_CheckBox_SetParentDoubleBuffered'{$ENDIF},
  CheckBox_GetParentFont {$IFNDEF MSWINDOWS}name '_CheckBox_GetParentFont'{$ENDIF},
  CheckBox_SetParentFont {$IFNDEF MSWINDOWS}name '_CheckBox_SetParentFont'{$ENDIF},
  CheckBox_GetParentShowHint {$IFNDEF MSWINDOWS}name '_CheckBox_GetParentShowHint'{$ENDIF},
  CheckBox_SetParentShowHint {$IFNDEF MSWINDOWS}name '_CheckBox_SetParentShowHint'{$ENDIF},
  CheckBox_GetPopupMenu {$IFNDEF MSWINDOWS}name '_CheckBox_GetPopupMenu'{$ENDIF},
  CheckBox_SetPopupMenu {$IFNDEF MSWINDOWS}name '_CheckBox_SetPopupMenu'{$ENDIF},
  CheckBox_GetShowHint {$IFNDEF MSWINDOWS}name '_CheckBox_GetShowHint'{$ENDIF},
  CheckBox_SetShowHint {$IFNDEF MSWINDOWS}name '_CheckBox_SetShowHint'{$ENDIF},
  CheckBox_GetState {$IFNDEF MSWINDOWS}name '_CheckBox_GetState'{$ENDIF},
  CheckBox_SetState {$IFNDEF MSWINDOWS}name '_CheckBox_SetState'{$ENDIF},
  CheckBox_GetTabOrder {$IFNDEF MSWINDOWS}name '_CheckBox_GetTabOrder'{$ENDIF},
  CheckBox_SetTabOrder {$IFNDEF MSWINDOWS}name '_CheckBox_SetTabOrder'{$ENDIF},
  CheckBox_GetTabStop {$IFNDEF MSWINDOWS}name '_CheckBox_GetTabStop'{$ENDIF},
  CheckBox_SetTabStop {$IFNDEF MSWINDOWS}name '_CheckBox_SetTabStop'{$ENDIF},
  CheckBox_GetVisible {$IFNDEF MSWINDOWS}name '_CheckBox_GetVisible'{$ENDIF},
  CheckBox_SetVisible {$IFNDEF MSWINDOWS}name '_CheckBox_SetVisible'{$ENDIF},
  //CheckBox_GetWordWrap {$IFNDEF MSWINDOWS}name '_CheckBox_GetWordWrap'{$ENDIF},
  //CheckBox_SetWordWrap {$IFNDEF MSWINDOWS}name '_CheckBox_SetWordWrap'{$ENDIF},
  //CheckBox_GetStyleElements {$IFNDEF MSWINDOWS}name '_CheckBox_GetStyleElements'{$ENDIF},
  //CheckBox_SetStyleElements {$IFNDEF MSWINDOWS}name '_CheckBox_SetStyleElements'{$ENDIF},
  CheckBox_SetOnClick {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnClick'{$ENDIF},
  CheckBox_SetOnEnter {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnEnter'{$ENDIF},
  CheckBox_SetOnExit {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnExit'{$ENDIF},
  CheckBox_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnKeyDown'{$ENDIF},
  CheckBox_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnKeyPress'{$ENDIF},
  CheckBox_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnKeyUp'{$ENDIF},
  CheckBox_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnMouseDown'{$ENDIF},
  CheckBox_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnMouseEnter'{$ENDIF},
  CheckBox_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnMouseLeave'{$ENDIF},
  CheckBox_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnMouseMove'{$ENDIF},
  CheckBox_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_CheckBox_SetOnMouseUp'{$ENDIF},
  CheckBox_GetBrush {$IFNDEF MSWINDOWS}name '_CheckBox_GetBrush'{$ENDIF},
  CheckBox_GetControlCount {$IFNDEF MSWINDOWS}name '_CheckBox_GetControlCount'{$ENDIF},
  CheckBox_GetHandle {$IFNDEF MSWINDOWS}name '_CheckBox_GetHandle'{$ENDIF},
  CheckBox_GetParentWindow {$IFNDEF MSWINDOWS}name '_CheckBox_GetParentWindow'{$ENDIF},
  CheckBox_SetParentWindow {$IFNDEF MSWINDOWS}name '_CheckBox_SetParentWindow'{$ENDIF},
  CheckBox_GetBoundsRect {$IFNDEF MSWINDOWS}name '_CheckBox_GetBoundsRect'{$ENDIF},
  CheckBox_SetBoundsRect {$IFNDEF MSWINDOWS}name '_CheckBox_SetBoundsRect'{$ENDIF},
  CheckBox_GetClientHeight {$IFNDEF MSWINDOWS}name '_CheckBox_GetClientHeight'{$ENDIF},
  CheckBox_SetClientHeight {$IFNDEF MSWINDOWS}name '_CheckBox_SetClientHeight'{$ENDIF},
  CheckBox_GetClientRect {$IFNDEF MSWINDOWS}name '_CheckBox_GetClientRect'{$ENDIF},
  CheckBox_GetClientWidth {$IFNDEF MSWINDOWS}name '_CheckBox_GetClientWidth'{$ENDIF},
  CheckBox_SetClientWidth {$IFNDEF MSWINDOWS}name '_CheckBox_SetClientWidth'{$ENDIF},
  //CheckBox_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_CheckBox_GetExplicitLeft'{$ENDIF},
  //CheckBox_GetExplicitTop {$IFNDEF MSWINDOWS}name '_CheckBox_GetExplicitTop'{$ENDIF},
  //CheckBox_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_CheckBox_GetExplicitWidth'{$ENDIF},
  //CheckBox_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_CheckBox_GetExplicitHeight'{$ENDIF},
  CheckBox_GetParent {$IFNDEF MSWINDOWS}name '_CheckBox_GetParent'{$ENDIF},
  CheckBox_SetParent {$IFNDEF MSWINDOWS}name '_CheckBox_SetParent'{$ENDIF},
  //CheckBox_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_CheckBox_GetAlignWithMargins'{$ENDIF},
  //CheckBox_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_CheckBox_SetAlignWithMargins'{$ENDIF},
  CheckBox_GetLeft {$IFNDEF MSWINDOWS}name '_CheckBox_GetLeft'{$ENDIF},
  CheckBox_SetLeft {$IFNDEF MSWINDOWS}name '_CheckBox_SetLeft'{$ENDIF},
  CheckBox_GetTop {$IFNDEF MSWINDOWS}name '_CheckBox_GetTop'{$ENDIF},
  CheckBox_SetTop {$IFNDEF MSWINDOWS}name '_CheckBox_SetTop'{$ENDIF},
  CheckBox_GetWidth {$IFNDEF MSWINDOWS}name '_CheckBox_GetWidth'{$ENDIF},
  CheckBox_SetWidth {$IFNDEF MSWINDOWS}name '_CheckBox_SetWidth'{$ENDIF},
  CheckBox_GetHeight {$IFNDEF MSWINDOWS}name '_CheckBox_GetHeight'{$ENDIF},
  CheckBox_SetHeight {$IFNDEF MSWINDOWS}name '_CheckBox_SetHeight'{$ENDIF},
  CheckBox_GetCursor {$IFNDEF MSWINDOWS}name '_CheckBox_GetCursor'{$ENDIF},
  CheckBox_SetCursor {$IFNDEF MSWINDOWS}name '_CheckBox_SetCursor'{$ENDIF},
  CheckBox_GetHint {$IFNDEF MSWINDOWS}name '_CheckBox_GetHint'{$ENDIF},
  CheckBox_SetHint {$IFNDEF MSWINDOWS}name '_CheckBox_SetHint'{$ENDIF},
  //CheckBox_GetMargins {$IFNDEF MSWINDOWS}name '_CheckBox_GetMargins'{$ENDIF},
  //CheckBox_SetMargins {$IFNDEF MSWINDOWS}name '_CheckBox_SetMargins'{$ENDIF},
  CheckBox_GetComponentCount {$IFNDEF MSWINDOWS}name '_CheckBox_GetComponentCount'{$ENDIF},
  CheckBox_GetComponentIndex {$IFNDEF MSWINDOWS}name '_CheckBox_GetComponentIndex'{$ENDIF},
  CheckBox_SetComponentIndex {$IFNDEF MSWINDOWS}name '_CheckBox_SetComponentIndex'{$ENDIF},
  CheckBox_GetOwner {$IFNDEF MSWINDOWS}name '_CheckBox_GetOwner'{$ENDIF},
  CheckBox_GetName {$IFNDEF MSWINDOWS}name '_CheckBox_GetName'{$ENDIF},
  CheckBox_SetName {$IFNDEF MSWINDOWS}name '_CheckBox_SetName'{$ENDIF},
  CheckBox_GetTag {$IFNDEF MSWINDOWS}name '_CheckBox_GetTag'{$ENDIF},
  CheckBox_SetTag {$IFNDEF MSWINDOWS}name '_CheckBox_SetTag'{$ENDIF},
  CheckBox_GetControls {$IFNDEF MSWINDOWS}name '_CheckBox_GetControls'{$ENDIF},
  CheckBox_GetComponents {$IFNDEF MSWINDOWS}name '_CheckBox_GetComponents'{$ENDIF};

