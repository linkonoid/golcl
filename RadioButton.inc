
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function RadioButton_Create(AOwner: TComponent): TRadioButton; cdecl;
begin
  Result :=  TRadioButton.Create(AOwner);
end;

procedure RadioButton_Free(AObj: TRadioButton); cdecl;
begin
  AObj.Free;
end;

function RadioButton_CanFocus(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure RadioButton_FlipChildren(AObj: TRadioButton; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function RadioButton_Focused(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function RadioButton_HandleAllocated(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure RadioButton_Invalidate(AObj: TRadioButton); cdecl;
begin
  AObj.Invalidate;
end;

procedure RadioButton_Realign(AObj: TRadioButton); cdecl;
begin
  AObj.Realign;
end;

procedure RadioButton_Repaint(AObj: TRadioButton); cdecl;
begin
  AObj.Repaint;
end;

procedure RadioButton_ScaleBy(AObj: TRadioButton; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure RadioButton_SetBounds(AObj: TRadioButton; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure RadioButton_SetFocus(AObj: TRadioButton); cdecl;
begin
  AObj.SetFocus;
end;

procedure RadioButton_Update(AObj: TRadioButton); cdecl;
begin
  AObj.Update;
end;

procedure RadioButton_BringToFront(AObj: TRadioButton); cdecl;
begin
  AObj.BringToFront;
end;

function RadioButton_HasParent(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure RadioButton_Hide(AObj: TRadioButton); cdecl;
begin
  AObj.Hide;
end;

function RadioButton_Perform(AObj: TRadioButton; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure RadioButton_Refresh(AObj: TRadioButton); cdecl;
begin
  AObj.Refresh;
end;

procedure RadioButton_SendToBack(AObj: TRadioButton); cdecl;
begin
  AObj.SendToBack;
end;

procedure RadioButton_Show(AObj: TRadioButton); cdecl;
begin
  AObj.Show;
end;

function RadioButton_GetTextBuf(AObj: TRadioButton; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function RadioButton_FindComponent(AObj: TRadioButton; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function RadioButton_GetNamePath(AObj: TRadioButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure RadioButton_Assign(AObj: TRadioButton; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function RadioButton_ClassName(AObj: TRadioButton): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function RadioButton_Equals(AObj: TRadioButton; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function RadioButton_GetHashCode(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function RadioButton_ToString(AObj: TRadioButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function RadioButton_GetAction(AObj: TRadioButton): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure RadioButton_SetAction(AObj: TRadioButton; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function RadioButton_GetAlign(AObj: TRadioButton): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure RadioButton_SetAlign(AObj: TRadioButton; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function RadioButton_GetAlignment(AObj: TRadioButton): TLeftRight; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure RadioButton_SetAlignment(AObj: TRadioButton; AValue: TLeftRight); cdecl;
begin
  AObj.Alignment := AValue;
end;

function RadioButton_GetAnchors(AObj: TRadioButton): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure RadioButton_SetAnchors(AObj: TRadioButton; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function RadioButton_GetBiDiMode(AObj: TRadioButton): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure RadioButton_SetBiDiMode(AObj: TRadioButton; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function RadioButton_GetCaption(AObj: TRadioButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure RadioButton_SetCaption(AObj: TRadioButton; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function RadioButton_GetChecked(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.Checked;
end;

procedure RadioButton_SetChecked(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.Checked := AValue;
end;

function RadioButton_GetColor(AObj: TRadioButton): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure RadioButton_SetColor(AObj: TRadioButton; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function RadioButton_GetDoubleBuffered(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure RadioButton_SetDoubleBuffered(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function RadioButton_GetEnabled(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure RadioButton_SetEnabled(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function RadioButton_GetFont(AObj: TRadioButton): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure RadioButton_SetFont(AObj: TRadioButton; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function RadioButton_GetParentColor(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure RadioButton_SetParentColor(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function RadioButton_GetParentCtl3D(AObj: TRadioButton): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentCtl3D;
//end;
//
//procedure RadioButton_SetParentCtl3D(AObj: TRadioButton; AValue: LongBool); cdecl;
//begin
//  AObj.ParentCtl3D := AValue;
//end;
//
//function RadioButton_GetParentDoubleBuffered(AObj: TRadioButton): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure RadioButton_SetParentDoubleBuffered(AObj: TRadioButton; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function RadioButton_GetParentFont(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure RadioButton_SetParentFont(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function RadioButton_GetParentShowHint(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure RadioButton_SetParentShowHint(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function RadioButton_GetPopupMenu(AObj: TRadioButton): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure RadioButton_SetPopupMenu(AObj: TRadioButton; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function RadioButton_GetShowHint(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure RadioButton_SetShowHint(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function RadioButton_GetTabOrder(AObj: TRadioButton): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure RadioButton_SetTabOrder(AObj: TRadioButton; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function RadioButton_GetTabStop(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure RadioButton_SetTabStop(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function RadioButton_GetVisible(AObj: TRadioButton): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure RadioButton_SetVisible(AObj: TRadioButton; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function RadioButton_GetWordWrap(AObj: TRadioButton): LongBool; cdecl;
//begin
//  Result :=  AObj.WordWrap;
//end;
//
//procedure RadioButton_SetWordWrap(AObj: TRadioButton; AValue: LongBool); cdecl;
//begin
//  AObj.WordWrap := AValue;
//end;
//
//function RadioButton_GetStyleElements(AObj: TRadioButton): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure RadioButton_SetStyleElements(AObj: TRadioButton; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure RadioButton_SetOnClick(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnDblClick(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    //AObj.OnDblClick := nil;
    TEventClass.Remove(AObj, geDblClick);
    Exit;
  end;
  //AObj.OnDblClick := TEventClass.OnDblClick;
  TEventClass.Add(AObj, geDblClick, AEventId);
end;

procedure RadioButton_SetOnEnter(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnExit(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnKeyDown(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnKeyPress(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnKeyUp(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseDown(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseEnter(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseLeave(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseMove(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseUp(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

function RadioButton_GetBrush(AObj: TRadioButton): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function RadioButton_GetControlCount(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function RadioButton_GetHandle(AObj: TRadioButton): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function RadioButton_GetParentWindow(AObj: TRadioButton): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure RadioButton_SetParentWindow(AObj: TRadioButton; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

procedure RadioButton_GetBoundsRect(AObj: TRadioButton; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure RadioButton_SetBoundsRect(AObj: TRadioButton; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function RadioButton_GetClientHeight(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure RadioButton_SetClientHeight(AObj: TRadioButton; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure RadioButton_GetClientRect(AObj: TRadioButton; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function RadioButton_GetClientWidth(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure RadioButton_SetClientWidth(AObj: TRadioButton; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function RadioButton_GetExplicitLeft(AObj: TRadioButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function RadioButton_GetExplicitTop(AObj: TRadioButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function RadioButton_GetExplicitWidth(AObj: TRadioButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function RadioButton_GetExplicitHeight(AObj: TRadioButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function RadioButton_GetParent(AObj: TRadioButton): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure RadioButton_SetParent(AObj: TRadioButton; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function RadioButton_GetAlignWithMargins(AObj: TRadioButton): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure RadioButton_SetAlignWithMargins(AObj: TRadioButton; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function RadioButton_GetLeft(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure RadioButton_SetLeft(AObj: TRadioButton; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function RadioButton_GetTop(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure RadioButton_SetTop(AObj: TRadioButton; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function RadioButton_GetWidth(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure RadioButton_SetWidth(AObj: TRadioButton; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function RadioButton_GetHeight(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure RadioButton_SetHeight(AObj: TRadioButton; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function RadioButton_GetCursor(AObj: TRadioButton): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure RadioButton_SetCursor(AObj: TRadioButton; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function RadioButton_GetHint(AObj: TRadioButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure RadioButton_SetHint(AObj: TRadioButton; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function RadioButton_GetMargins(AObj: TRadioButton): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure RadioButton_SetMargins(AObj: TRadioButton; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function RadioButton_GetComponentCount(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function RadioButton_GetComponentIndex(AObj: TRadioButton): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure RadioButton_SetComponentIndex(AObj: TRadioButton; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function RadioButton_GetOwner(AObj: TRadioButton): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function RadioButton_GetName(AObj: TRadioButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure RadioButton_SetName(AObj: TRadioButton; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function RadioButton_GetTag(AObj: TRadioButton): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure RadioButton_SetTag(AObj: TRadioButton; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function RadioButton_GetControls(AObj: TRadioButton; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function RadioButton_GetComponents(AObj: TRadioButton; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  RadioButton_Create {$IFNDEF MSWINDOWS}name '_RadioButton_Create'{$ENDIF},
  RadioButton_Free {$IFNDEF MSWINDOWS}name '_RadioButton_Free'{$ENDIF},
  RadioButton_CanFocus {$IFNDEF MSWINDOWS}name '_RadioButton_CanFocus'{$ENDIF},
  RadioButton_FlipChildren {$IFNDEF MSWINDOWS}name '_RadioButton_FlipChildren'{$ENDIF},
  RadioButton_Focused {$IFNDEF MSWINDOWS}name '_RadioButton_Focused'{$ENDIF},
  RadioButton_HandleAllocated {$IFNDEF MSWINDOWS}name '_RadioButton_HandleAllocated'{$ENDIF},
  RadioButton_Invalidate {$IFNDEF MSWINDOWS}name '_RadioButton_Invalidate'{$ENDIF},
  RadioButton_Realign {$IFNDEF MSWINDOWS}name '_RadioButton_Realign'{$ENDIF},
  RadioButton_Repaint {$IFNDEF MSWINDOWS}name '_RadioButton_Repaint'{$ENDIF},
  RadioButton_ScaleBy {$IFNDEF MSWINDOWS}name '_RadioButton_ScaleBy'{$ENDIF},
  RadioButton_SetBounds {$IFNDEF MSWINDOWS}name '_RadioButton_SetBounds'{$ENDIF},
  RadioButton_SetFocus {$IFNDEF MSWINDOWS}name '_RadioButton_SetFocus'{$ENDIF},
  RadioButton_Update {$IFNDEF MSWINDOWS}name '_RadioButton_Update'{$ENDIF},
  RadioButton_BringToFront {$IFNDEF MSWINDOWS}name '_RadioButton_BringToFront'{$ENDIF},
  RadioButton_HasParent {$IFNDEF MSWINDOWS}name '_RadioButton_HasParent'{$ENDIF},
  RadioButton_Hide {$IFNDEF MSWINDOWS}name '_RadioButton_Hide'{$ENDIF},
  RadioButton_Perform {$IFNDEF MSWINDOWS}name '_RadioButton_Perform'{$ENDIF},
  RadioButton_Refresh {$IFNDEF MSWINDOWS}name '_RadioButton_Refresh'{$ENDIF},
  RadioButton_SendToBack {$IFNDEF MSWINDOWS}name '_RadioButton_SendToBack'{$ENDIF},
  RadioButton_Show {$IFNDEF MSWINDOWS}name '_RadioButton_Show'{$ENDIF},
  RadioButton_GetTextBuf {$IFNDEF MSWINDOWS}name '_RadioButton_GetTextBuf'{$ENDIF},
  RadioButton_FindComponent {$IFNDEF MSWINDOWS}name '_RadioButton_FindComponent'{$ENDIF},
  RadioButton_GetNamePath {$IFNDEF MSWINDOWS}name '_RadioButton_GetNamePath'{$ENDIF},
  RadioButton_Assign {$IFNDEF MSWINDOWS}name '_RadioButton_Assign'{$ENDIF},
  RadioButton_ClassName {$IFNDEF MSWINDOWS}name '_RadioButton_ClassName'{$ENDIF},
  RadioButton_Equals {$IFNDEF MSWINDOWS}name '_RadioButton_Equals'{$ENDIF},
  RadioButton_GetHashCode {$IFNDEF MSWINDOWS}name '_RadioButton_GetHashCode'{$ENDIF},
  RadioButton_ToString {$IFNDEF MSWINDOWS}name '_RadioButton_ToString'{$ENDIF},
  RadioButton_GetAction {$IFNDEF MSWINDOWS}name '_RadioButton_GetAction'{$ENDIF},
  RadioButton_SetAction {$IFNDEF MSWINDOWS}name '_RadioButton_SetAction'{$ENDIF},
  RadioButton_GetAlign {$IFNDEF MSWINDOWS}name '_RadioButton_GetAlign'{$ENDIF},
  RadioButton_SetAlign {$IFNDEF MSWINDOWS}name '_RadioButton_SetAlign'{$ENDIF},
  RadioButton_GetAlignment {$IFNDEF MSWINDOWS}name '_RadioButton_GetAlignment'{$ENDIF},
  RadioButton_SetAlignment {$IFNDEF MSWINDOWS}name '_RadioButton_SetAlignment'{$ENDIF},
  RadioButton_GetAnchors {$IFNDEF MSWINDOWS}name '_RadioButton_GetAnchors'{$ENDIF},
  RadioButton_SetAnchors {$IFNDEF MSWINDOWS}name '_RadioButton_SetAnchors'{$ENDIF},
  RadioButton_GetBiDiMode {$IFNDEF MSWINDOWS}name '_RadioButton_GetBiDiMode'{$ENDIF},
  RadioButton_SetBiDiMode {$IFNDEF MSWINDOWS}name '_RadioButton_SetBiDiMode'{$ENDIF},
  RadioButton_GetCaption {$IFNDEF MSWINDOWS}name '_RadioButton_GetCaption'{$ENDIF},
  RadioButton_SetCaption {$IFNDEF MSWINDOWS}name '_RadioButton_SetCaption'{$ENDIF},
  RadioButton_GetChecked {$IFNDEF MSWINDOWS}name '_RadioButton_GetChecked'{$ENDIF},
  RadioButton_SetChecked {$IFNDEF MSWINDOWS}name '_RadioButton_SetChecked'{$ENDIF},
  RadioButton_GetColor {$IFNDEF MSWINDOWS}name '_RadioButton_GetColor'{$ENDIF},
  RadioButton_SetColor {$IFNDEF MSWINDOWS}name '_RadioButton_SetColor'{$ENDIF},
  RadioButton_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_RadioButton_GetDoubleBuffered'{$ENDIF},
  RadioButton_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_RadioButton_SetDoubleBuffered'{$ENDIF},
  RadioButton_GetEnabled {$IFNDEF MSWINDOWS}name '_RadioButton_GetEnabled'{$ENDIF},
  RadioButton_SetEnabled {$IFNDEF MSWINDOWS}name '_RadioButton_SetEnabled'{$ENDIF},
  RadioButton_GetFont {$IFNDEF MSWINDOWS}name '_RadioButton_GetFont'{$ENDIF},
  RadioButton_SetFont {$IFNDEF MSWINDOWS}name '_RadioButton_SetFont'{$ENDIF},
  RadioButton_GetParentColor {$IFNDEF MSWINDOWS}name '_RadioButton_GetParentColor'{$ENDIF},
  RadioButton_SetParentColor {$IFNDEF MSWINDOWS}name '_RadioButton_SetParentColor'{$ENDIF},
  //RadioButton_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_RadioButton_GetParentCtl3D'{$ENDIF},
  //RadioButton_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_RadioButton_SetParentCtl3D'{$ENDIF},
  //RadioButton_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_RadioButton_GetParentDoubleBuffered'{$ENDIF},
  //RadioButton_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_RadioButton_SetParentDoubleBuffered'{$ENDIF},
  RadioButton_GetParentFont {$IFNDEF MSWINDOWS}name '_RadioButton_GetParentFont'{$ENDIF},
  RadioButton_SetParentFont {$IFNDEF MSWINDOWS}name '_RadioButton_SetParentFont'{$ENDIF},
  RadioButton_GetParentShowHint {$IFNDEF MSWINDOWS}name '_RadioButton_GetParentShowHint'{$ENDIF},
  RadioButton_SetParentShowHint {$IFNDEF MSWINDOWS}name '_RadioButton_SetParentShowHint'{$ENDIF},
  RadioButton_GetPopupMenu {$IFNDEF MSWINDOWS}name '_RadioButton_GetPopupMenu'{$ENDIF},
  RadioButton_SetPopupMenu {$IFNDEF MSWINDOWS}name '_RadioButton_SetPopupMenu'{$ENDIF},
  RadioButton_GetShowHint {$IFNDEF MSWINDOWS}name '_RadioButton_GetShowHint'{$ENDIF},
  RadioButton_SetShowHint {$IFNDEF MSWINDOWS}name '_RadioButton_SetShowHint'{$ENDIF},
  RadioButton_GetTabOrder {$IFNDEF MSWINDOWS}name '_RadioButton_GetTabOrder'{$ENDIF},
  RadioButton_SetTabOrder {$IFNDEF MSWINDOWS}name '_RadioButton_SetTabOrder'{$ENDIF},
  RadioButton_GetTabStop {$IFNDEF MSWINDOWS}name '_RadioButton_GetTabStop'{$ENDIF},
  RadioButton_SetTabStop {$IFNDEF MSWINDOWS}name '_RadioButton_SetTabStop'{$ENDIF},
  RadioButton_GetVisible {$IFNDEF MSWINDOWS}name '_RadioButton_GetVisible'{$ENDIF},
  RadioButton_SetVisible {$IFNDEF MSWINDOWS}name '_RadioButton_SetVisible'{$ENDIF},
  //RadioButton_GetWordWrap {$IFNDEF MSWINDOWS}name '_RadioButton_GetWordWrap'{$ENDIF},
  //RadioButton_SetWordWrap {$IFNDEF MSWINDOWS}name '_RadioButton_SetWordWrap'{$ENDIF},
  //RadioButton_GetStyleElements {$IFNDEF MSWINDOWS}name '_RadioButton_GetStyleElements'{$ENDIF},
  //RadioButton_SetStyleElements {$IFNDEF MSWINDOWS}name '_RadioButton_SetStyleElements'{$ENDIF},
  RadioButton_SetOnClick {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnClick'{$ENDIF},
  RadioButton_SetOnDblClick {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnDblClick'{$ENDIF},
  RadioButton_SetOnEnter {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnEnter'{$ENDIF},
  RadioButton_SetOnExit {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnExit'{$ENDIF},
  RadioButton_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnKeyDown'{$ENDIF},
  RadioButton_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnKeyPress'{$ENDIF},
  RadioButton_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnKeyUp'{$ENDIF},
  RadioButton_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnMouseDown'{$ENDIF},
  RadioButton_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnMouseEnter'{$ENDIF},
  RadioButton_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnMouseLeave'{$ENDIF},
  RadioButton_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnMouseMove'{$ENDIF},
  RadioButton_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_RadioButton_SetOnMouseUp'{$ENDIF},
  RadioButton_GetBrush {$IFNDEF MSWINDOWS}name '_RadioButton_GetBrush'{$ENDIF},
  RadioButton_GetControlCount {$IFNDEF MSWINDOWS}name '_RadioButton_GetControlCount'{$ENDIF},
  RadioButton_GetHandle {$IFNDEF MSWINDOWS}name '_RadioButton_GetHandle'{$ENDIF},
  RadioButton_GetParentWindow {$IFNDEF MSWINDOWS}name '_RadioButton_GetParentWindow'{$ENDIF},
  RadioButton_SetParentWindow {$IFNDEF MSWINDOWS}name '_RadioButton_SetParentWindow'{$ENDIF},
  RadioButton_GetBoundsRect {$IFNDEF MSWINDOWS}name '_RadioButton_GetBoundsRect'{$ENDIF},
  RadioButton_SetBoundsRect {$IFNDEF MSWINDOWS}name '_RadioButton_SetBoundsRect'{$ENDIF},
  RadioButton_GetClientHeight {$IFNDEF MSWINDOWS}name '_RadioButton_GetClientHeight'{$ENDIF},
  RadioButton_SetClientHeight {$IFNDEF MSWINDOWS}name '_RadioButton_SetClientHeight'{$ENDIF},
  RadioButton_GetClientRect {$IFNDEF MSWINDOWS}name '_RadioButton_GetClientRect'{$ENDIF},
  RadioButton_GetClientWidth {$IFNDEF MSWINDOWS}name '_RadioButton_GetClientWidth'{$ENDIF},
  RadioButton_SetClientWidth {$IFNDEF MSWINDOWS}name '_RadioButton_SetClientWidth'{$ENDIF},
  //RadioButton_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_RadioButton_GetExplicitLeft'{$ENDIF},
  //RadioButton_GetExplicitTop {$IFNDEF MSWINDOWS}name '_RadioButton_GetExplicitTop'{$ENDIF},
  //RadioButton_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_RadioButton_GetExplicitWidth'{$ENDIF},
  //RadioButton_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_RadioButton_GetExplicitHeight'{$ENDIF},
  RadioButton_GetParent {$IFNDEF MSWINDOWS}name '_RadioButton_GetParent'{$ENDIF},
  RadioButton_SetParent {$IFNDEF MSWINDOWS}name '_RadioButton_SetParent'{$ENDIF},
  //RadioButton_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_RadioButton_GetAlignWithMargins'{$ENDIF},
  //RadioButton_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_RadioButton_SetAlignWithMargins'{$ENDIF},
  RadioButton_GetLeft {$IFNDEF MSWINDOWS}name '_RadioButton_GetLeft'{$ENDIF},
  RadioButton_SetLeft {$IFNDEF MSWINDOWS}name '_RadioButton_SetLeft'{$ENDIF},
  RadioButton_GetTop {$IFNDEF MSWINDOWS}name '_RadioButton_GetTop'{$ENDIF},
  RadioButton_SetTop {$IFNDEF MSWINDOWS}name '_RadioButton_SetTop'{$ENDIF},
  RadioButton_GetWidth {$IFNDEF MSWINDOWS}name '_RadioButton_GetWidth'{$ENDIF},
  RadioButton_SetWidth {$IFNDEF MSWINDOWS}name '_RadioButton_SetWidth'{$ENDIF},
  RadioButton_GetHeight {$IFNDEF MSWINDOWS}name '_RadioButton_GetHeight'{$ENDIF},
  RadioButton_SetHeight {$IFNDEF MSWINDOWS}name '_RadioButton_SetHeight'{$ENDIF},
  RadioButton_GetCursor {$IFNDEF MSWINDOWS}name '_RadioButton_GetCursor'{$ENDIF},
  RadioButton_SetCursor {$IFNDEF MSWINDOWS}name '_RadioButton_SetCursor'{$ENDIF},
  RadioButton_GetHint {$IFNDEF MSWINDOWS}name '_RadioButton_GetHint'{$ENDIF},
  RadioButton_SetHint {$IFNDEF MSWINDOWS}name '_RadioButton_SetHint'{$ENDIF},
  //RadioButton_GetMargins {$IFNDEF MSWINDOWS}name '_RadioButton_GetMargins'{$ENDIF},
  //RadioButton_SetMargins {$IFNDEF MSWINDOWS}name '_RadioButton_SetMargins'{$ENDIF},
  RadioButton_GetComponentCount {$IFNDEF MSWINDOWS}name '_RadioButton_GetComponentCount'{$ENDIF},
  RadioButton_GetComponentIndex {$IFNDEF MSWINDOWS}name '_RadioButton_GetComponentIndex'{$ENDIF},
  RadioButton_SetComponentIndex {$IFNDEF MSWINDOWS}name '_RadioButton_SetComponentIndex'{$ENDIF},
  RadioButton_GetOwner {$IFNDEF MSWINDOWS}name '_RadioButton_GetOwner'{$ENDIF},
  RadioButton_GetName {$IFNDEF MSWINDOWS}name '_RadioButton_GetName'{$ENDIF},
  RadioButton_SetName {$IFNDEF MSWINDOWS}name '_RadioButton_SetName'{$ENDIF},
  RadioButton_GetTag {$IFNDEF MSWINDOWS}name '_RadioButton_GetTag'{$ENDIF},
  RadioButton_SetTag {$IFNDEF MSWINDOWS}name '_RadioButton_SetTag'{$ENDIF},
  RadioButton_GetControls {$IFNDEF MSWINDOWS}name '_RadioButton_GetControls'{$ENDIF},
  RadioButton_GetComponents {$IFNDEF MSWINDOWS}name '_RadioButton_GetComponents'{$ENDIF};

