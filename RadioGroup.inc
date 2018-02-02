
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function RadioGroup_Create(AOwner: TComponent): TRadioGroup; cdecl;
begin
  Result :=  TRadioGroup.Create(AOwner);
end;

procedure RadioGroup_Free(AObj: TRadioGroup); cdecl;
begin
  AObj.Free;
end;

procedure RadioGroup_FlipChildren(AObj: TRadioGroup; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function RadioGroup_CanFocus(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

function RadioGroup_Focused(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function RadioGroup_HandleAllocated(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure RadioGroup_Invalidate(AObj: TRadioGroup); cdecl;
begin
  AObj.Invalidate;
end;

procedure RadioGroup_Realign(AObj: TRadioGroup); cdecl;
begin
  AObj.Realign;
end;

procedure RadioGroup_Repaint(AObj: TRadioGroup); cdecl;
begin
  AObj.Repaint;
end;

procedure RadioGroup_ScaleBy(AObj: TRadioGroup; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure RadioGroup_SetBounds(AObj: TRadioGroup; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure RadioGroup_SetFocus(AObj: TRadioGroup); cdecl;
begin
  AObj.SetFocus;
end;

procedure RadioGroup_Update(AObj: TRadioGroup); cdecl;
begin
  AObj.Update;
end;

procedure RadioGroup_BringToFront(AObj: TRadioGroup); cdecl;
begin
  AObj.BringToFront;
end;

function RadioGroup_HasParent(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure RadioGroup_Hide(AObj: TRadioGroup); cdecl;
begin
  AObj.Hide;
end;

function RadioGroup_Perform(AObj: TRadioGroup; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure RadioGroup_Refresh(AObj: TRadioGroup); cdecl;
begin
  AObj.Refresh;
end;

procedure RadioGroup_SendToBack(AObj: TRadioGroup); cdecl;
begin
  AObj.SendToBack;
end;

procedure RadioGroup_Show(AObj: TRadioGroup); cdecl;
begin
  AObj.Show;
end;

function RadioGroup_GetTextBuf(AObj: TRadioGroup; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function RadioGroup_FindComponent(AObj: TRadioGroup; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function RadioGroup_GetNamePath(AObj: TRadioGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure RadioGroup_Assign(AObj: TRadioGroup; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function RadioGroup_ClassName(AObj: TRadioGroup): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function RadioGroup_Equals(AObj: TRadioGroup; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function RadioGroup_GetHashCode(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function RadioGroup_ToString(AObj: TRadioGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function RadioGroup_GetAlign(AObj: TRadioGroup): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure RadioGroup_SetAlign(AObj: TRadioGroup; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function RadioGroup_GetAnchors(AObj: TRadioGroup): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure RadioGroup_SetAnchors(AObj: TRadioGroup; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function RadioGroup_GetBiDiMode(AObj: TRadioGroup): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure RadioGroup_SetBiDiMode(AObj: TRadioGroup; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function RadioGroup_GetCaption(AObj: TRadioGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure RadioGroup_SetCaption(AObj: TRadioGroup; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function RadioGroup_GetColor(AObj: TRadioGroup): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure RadioGroup_SetColor(AObj: TRadioGroup; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function RadioGroup_GetColumns(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.Columns;
end;

procedure RadioGroup_SetColumns(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.Columns := AValue;
end;

function RadioGroup_GetDoubleBuffered(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure RadioGroup_SetDoubleBuffered(AObj: TRadioGroup; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function RadioGroup_GetEnabled(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure RadioGroup_SetEnabled(AObj: TRadioGroup; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function RadioGroup_GetFont(AObj: TRadioGroup): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure RadioGroup_SetFont(AObj: TRadioGroup; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function RadioGroup_GetItemIndex(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.ItemIndex;
end;

procedure RadioGroup_SetItemIndex(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.ItemIndex := AValue;
end;

function RadioGroup_GetItems(AObj: TRadioGroup): TStrings; cdecl;
begin
  Result :=  AObj.Items;
end;

procedure RadioGroup_SetItems(AObj: TRadioGroup; AValue: TStrings); cdecl;
begin
  AObj.Items := AValue;
end;

//function RadioGroup_GetParentBackground(AObj: TRadioGroup): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentBackground;
//end;
//
//procedure RadioGroup_SetParentBackground(AObj: TRadioGroup; AValue: LongBool); cdecl;
//begin
//  AObj.ParentBackground := AValue;
//end;

function RadioGroup_GetParentColor(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure RadioGroup_SetParentColor(AObj: TRadioGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function RadioGroup_GetParentCtl3D(AObj: TRadioGroup): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentCtl3D;
//end;
//
//procedure RadioGroup_SetParentCtl3D(AObj: TRadioGroup; AValue: LongBool); cdecl;
//begin
//  AObj.ParentCtl3D := AValue;
//end;
//
//function RadioGroup_GetParentDoubleBuffered(AObj: TRadioGroup): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure RadioGroup_SetParentDoubleBuffered(AObj: TRadioGroup; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function RadioGroup_GetParentFont(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure RadioGroup_SetParentFont(AObj: TRadioGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function RadioGroup_GetParentShowHint(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure RadioGroup_SetParentShowHint(AObj: TRadioGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function RadioGroup_GetPopupMenu(AObj: TRadioGroup): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure RadioGroup_SetPopupMenu(AObj: TRadioGroup; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function RadioGroup_GetShowHint(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure RadioGroup_SetShowHint(AObj: TRadioGroup; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function RadioGroup_GetTabOrder(AObj: TRadioGroup): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure RadioGroup_SetTabOrder(AObj: TRadioGroup; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function RadioGroup_GetTabStop(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure RadioGroup_SetTabStop(AObj: TRadioGroup; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function RadioGroup_GetVisible(AObj: TRadioGroup): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure RadioGroup_SetVisible(AObj: TRadioGroup; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function RadioGroup_GetStyleElements(AObj: TRadioGroup): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure RadioGroup_SetStyleElements(AObj: TRadioGroup; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;
//
//function RadioGroup_GetWordWrap(AObj: TRadioGroup): LongBool; cdecl;
//begin
//  Result :=  AObj.WordWrap;
//end;
//
//procedure RadioGroup_SetWordWrap(AObj: TRadioGroup; AValue: LongBool); cdecl;
//begin
//  AObj.WordWrap := AValue;
//end;

procedure RadioGroup_SetOnClick(AObj: TRadioGroup; AEventId: NativeUInt); stdcall;
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

procedure RadioGroup_SetOnEnter(AObj: TRadioGroup; AEventId: NativeUInt); stdcall;
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

procedure RadioGroup_SetOnExit(AObj: TRadioGroup; AEventId: NativeUInt); stdcall;
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

function RadioGroup_GetBrush(AObj: TRadioGroup): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function RadioGroup_GetControlCount(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function RadioGroup_GetHandle(AObj: TRadioGroup): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function RadioGroup_GetParentWindow(AObj: TRadioGroup): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure RadioGroup_SetParentWindow(AObj: TRadioGroup; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function RadioGroup_GetAction(AObj: TRadioGroup): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure RadioGroup_SetAction(AObj: TRadioGroup; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure RadioGroup_GetBoundsRect(AObj: TRadioGroup; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure RadioGroup_SetBoundsRect(AObj: TRadioGroup; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function RadioGroup_GetClientHeight(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure RadioGroup_SetClientHeight(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure RadioGroup_GetClientRect(AObj: TRadioGroup; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function RadioGroup_GetClientWidth(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure RadioGroup_SetClientWidth(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function RadioGroup_GetExplicitLeft(AObj: TRadioGroup): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function RadioGroup_GetExplicitTop(AObj: TRadioGroup): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function RadioGroup_GetExplicitWidth(AObj: TRadioGroup): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function RadioGroup_GetExplicitHeight(AObj: TRadioGroup): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function RadioGroup_GetParent(AObj: TRadioGroup): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure RadioGroup_SetParent(AObj: TRadioGroup; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function RadioGroup_GetAlignWithMargins(AObj: TRadioGroup): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure RadioGroup_SetAlignWithMargins(AObj: TRadioGroup; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function RadioGroup_GetLeft(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure RadioGroup_SetLeft(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function RadioGroup_GetTop(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure RadioGroup_SetTop(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function RadioGroup_GetWidth(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure RadioGroup_SetWidth(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function RadioGroup_GetHeight(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure RadioGroup_SetHeight(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function RadioGroup_GetCursor(AObj: TRadioGroup): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure RadioGroup_SetCursor(AObj: TRadioGroup; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function RadioGroup_GetHint(AObj: TRadioGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure RadioGroup_SetHint(AObj: TRadioGroup; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function RadioGroup_GetMargins(AObj: TRadioGroup): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure RadioGroup_SetMargins(AObj: TRadioGroup; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function RadioGroup_GetComponentCount(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function RadioGroup_GetComponentIndex(AObj: TRadioGroup): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure RadioGroup_SetComponentIndex(AObj: TRadioGroup; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function RadioGroup_GetOwner(AObj: TRadioGroup): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function RadioGroup_GetName(AObj: TRadioGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure RadioGroup_SetName(AObj: TRadioGroup; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function RadioGroup_GetTag(AObj: TRadioGroup): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure RadioGroup_SetTag(AObj: TRadioGroup; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

//function RadioGroup_GetButtons(AObj: TRadioGroup; Index: Integer): TRadioButton; cdecl;
//begin
//  Result :=  AObj.Buttons[Index];
//end;

function RadioGroup_GetControls(AObj: TRadioGroup; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function RadioGroup_GetComponents(AObj: TRadioGroup; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  RadioGroup_Create {$IFNDEF MSWINDOWS}name '_RadioGroup_Create'{$ENDIF},
  RadioGroup_Free {$IFNDEF MSWINDOWS}name '_RadioGroup_Free'{$ENDIF},
  RadioGroup_FlipChildren {$IFNDEF MSWINDOWS}name '_RadioGroup_FlipChildren'{$ENDIF},
  RadioGroup_CanFocus {$IFNDEF MSWINDOWS}name '_RadioGroup_CanFocus'{$ENDIF},
  RadioGroup_Focused {$IFNDEF MSWINDOWS}name '_RadioGroup_Focused'{$ENDIF},
  RadioGroup_HandleAllocated {$IFNDEF MSWINDOWS}name '_RadioGroup_HandleAllocated'{$ENDIF},
  RadioGroup_Invalidate {$IFNDEF MSWINDOWS}name '_RadioGroup_Invalidate'{$ENDIF},
  RadioGroup_Realign {$IFNDEF MSWINDOWS}name '_RadioGroup_Realign'{$ENDIF},
  RadioGroup_Repaint {$IFNDEF MSWINDOWS}name '_RadioGroup_Repaint'{$ENDIF},
  RadioGroup_ScaleBy {$IFNDEF MSWINDOWS}name '_RadioGroup_ScaleBy'{$ENDIF},
  RadioGroup_SetBounds {$IFNDEF MSWINDOWS}name '_RadioGroup_SetBounds'{$ENDIF},
  RadioGroup_SetFocus {$IFNDEF MSWINDOWS}name '_RadioGroup_SetFocus'{$ENDIF},
  RadioGroup_Update {$IFNDEF MSWINDOWS}name '_RadioGroup_Update'{$ENDIF},
  RadioGroup_BringToFront {$IFNDEF MSWINDOWS}name '_RadioGroup_BringToFront'{$ENDIF},
  RadioGroup_HasParent {$IFNDEF MSWINDOWS}name '_RadioGroup_HasParent'{$ENDIF},
  RadioGroup_Hide {$IFNDEF MSWINDOWS}name '_RadioGroup_Hide'{$ENDIF},
  RadioGroup_Perform {$IFNDEF MSWINDOWS}name '_RadioGroup_Perform'{$ENDIF},
  RadioGroup_Refresh {$IFNDEF MSWINDOWS}name '_RadioGroup_Refresh'{$ENDIF},
  RadioGroup_SendToBack {$IFNDEF MSWINDOWS}name '_RadioGroup_SendToBack'{$ENDIF},
  RadioGroup_Show {$IFNDEF MSWINDOWS}name '_RadioGroup_Show'{$ENDIF},
  RadioGroup_GetTextBuf {$IFNDEF MSWINDOWS}name '_RadioGroup_GetTextBuf'{$ENDIF},
  RadioGroup_FindComponent {$IFNDEF MSWINDOWS}name '_RadioGroup_FindComponent'{$ENDIF},
  RadioGroup_GetNamePath {$IFNDEF MSWINDOWS}name '_RadioGroup_GetNamePath'{$ENDIF},
  RadioGroup_Assign {$IFNDEF MSWINDOWS}name '_RadioGroup_Assign'{$ENDIF},
  RadioGroup_ClassName {$IFNDEF MSWINDOWS}name '_RadioGroup_ClassName'{$ENDIF},
  RadioGroup_Equals {$IFNDEF MSWINDOWS}name '_RadioGroup_Equals'{$ENDIF},
  RadioGroup_GetHashCode {$IFNDEF MSWINDOWS}name '_RadioGroup_GetHashCode'{$ENDIF},
  RadioGroup_ToString {$IFNDEF MSWINDOWS}name '_RadioGroup_ToString'{$ENDIF},
  RadioGroup_GetAlign {$IFNDEF MSWINDOWS}name '_RadioGroup_GetAlign'{$ENDIF},
  RadioGroup_SetAlign {$IFNDEF MSWINDOWS}name '_RadioGroup_SetAlign'{$ENDIF},
  RadioGroup_GetAnchors {$IFNDEF MSWINDOWS}name '_RadioGroup_GetAnchors'{$ENDIF},
  RadioGroup_SetAnchors {$IFNDEF MSWINDOWS}name '_RadioGroup_SetAnchors'{$ENDIF},
  RadioGroup_GetBiDiMode {$IFNDEF MSWINDOWS}name '_RadioGroup_GetBiDiMode'{$ENDIF},
  RadioGroup_SetBiDiMode {$IFNDEF MSWINDOWS}name '_RadioGroup_SetBiDiMode'{$ENDIF},
  RadioGroup_GetCaption {$IFNDEF MSWINDOWS}name '_RadioGroup_GetCaption'{$ENDIF},
  RadioGroup_SetCaption {$IFNDEF MSWINDOWS}name '_RadioGroup_SetCaption'{$ENDIF},
  RadioGroup_GetColor {$IFNDEF MSWINDOWS}name '_RadioGroup_GetColor'{$ENDIF},
  RadioGroup_SetColor {$IFNDEF MSWINDOWS}name '_RadioGroup_SetColor'{$ENDIF},
  RadioGroup_GetColumns {$IFNDEF MSWINDOWS}name '_RadioGroup_GetColumns'{$ENDIF},
  RadioGroup_SetColumns {$IFNDEF MSWINDOWS}name '_RadioGroup_SetColumns'{$ENDIF},
  RadioGroup_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_RadioGroup_GetDoubleBuffered'{$ENDIF},
  RadioGroup_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_RadioGroup_SetDoubleBuffered'{$ENDIF},
  RadioGroup_GetEnabled {$IFNDEF MSWINDOWS}name '_RadioGroup_GetEnabled'{$ENDIF},
  RadioGroup_SetEnabled {$IFNDEF MSWINDOWS}name '_RadioGroup_SetEnabled'{$ENDIF},
  RadioGroup_GetFont {$IFNDEF MSWINDOWS}name '_RadioGroup_GetFont'{$ENDIF},
  RadioGroup_SetFont {$IFNDEF MSWINDOWS}name '_RadioGroup_SetFont'{$ENDIF},
  RadioGroup_GetItemIndex {$IFNDEF MSWINDOWS}name '_RadioGroup_GetItemIndex'{$ENDIF},
  RadioGroup_SetItemIndex {$IFNDEF MSWINDOWS}name '_RadioGroup_SetItemIndex'{$ENDIF},
  RadioGroup_GetItems {$IFNDEF MSWINDOWS}name '_RadioGroup_GetItems'{$ENDIF},
  RadioGroup_SetItems {$IFNDEF MSWINDOWS}name '_RadioGroup_SetItems'{$ENDIF},
  //RadioGroup_GetParentBackground {$IFNDEF MSWINDOWS}name '_RadioGroup_GetParentBackground'{$ENDIF},
  //RadioGroup_SetParentBackground {$IFNDEF MSWINDOWS}name '_RadioGroup_SetParentBackground'{$ENDIF},
  RadioGroup_GetParentColor {$IFNDEF MSWINDOWS}name '_RadioGroup_GetParentColor'{$ENDIF},
  RadioGroup_SetParentColor {$IFNDEF MSWINDOWS}name '_RadioGroup_SetParentColor'{$ENDIF},
  //RadioGroup_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_RadioGroup_GetParentCtl3D'{$ENDIF},
  //RadioGroup_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_RadioGroup_SetParentCtl3D'{$ENDIF},
  //RadioGroup_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_RadioGroup_GetParentDoubleBuffered'{$ENDIF},
  //RadioGroup_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_RadioGroup_SetParentDoubleBuffered'{$ENDIF},
  RadioGroup_GetParentFont {$IFNDEF MSWINDOWS}name '_RadioGroup_GetParentFont'{$ENDIF},
  RadioGroup_SetParentFont {$IFNDEF MSWINDOWS}name '_RadioGroup_SetParentFont'{$ENDIF},
  RadioGroup_GetParentShowHint {$IFNDEF MSWINDOWS}name '_RadioGroup_GetParentShowHint'{$ENDIF},
  RadioGroup_SetParentShowHint {$IFNDEF MSWINDOWS}name '_RadioGroup_SetParentShowHint'{$ENDIF},
  RadioGroup_GetPopupMenu {$IFNDEF MSWINDOWS}name '_RadioGroup_GetPopupMenu'{$ENDIF},
  RadioGroup_SetPopupMenu {$IFNDEF MSWINDOWS}name '_RadioGroup_SetPopupMenu'{$ENDIF},
  RadioGroup_GetShowHint {$IFNDEF MSWINDOWS}name '_RadioGroup_GetShowHint'{$ENDIF},
  RadioGroup_SetShowHint {$IFNDEF MSWINDOWS}name '_RadioGroup_SetShowHint'{$ENDIF},
  RadioGroup_GetTabOrder {$IFNDEF MSWINDOWS}name '_RadioGroup_GetTabOrder'{$ENDIF},
  RadioGroup_SetTabOrder {$IFNDEF MSWINDOWS}name '_RadioGroup_SetTabOrder'{$ENDIF},
  RadioGroup_GetTabStop {$IFNDEF MSWINDOWS}name '_RadioGroup_GetTabStop'{$ENDIF},
  RadioGroup_SetTabStop {$IFNDEF MSWINDOWS}name '_RadioGroup_SetTabStop'{$ENDIF},
  RadioGroup_GetVisible {$IFNDEF MSWINDOWS}name '_RadioGroup_GetVisible'{$ENDIF},
  RadioGroup_SetVisible {$IFNDEF MSWINDOWS}name '_RadioGroup_SetVisible'{$ENDIF},
  //RadioGroup_GetStyleElements {$IFNDEF MSWINDOWS}name '_RadioGroup_GetStyleElements'{$ENDIF},
  //RadioGroup_SetStyleElements {$IFNDEF MSWINDOWS}name '_RadioGroup_SetStyleElements'{$ENDIF},
  //RadioGroup_GetWordWrap {$IFNDEF MSWINDOWS}name '_RadioGroup_GetWordWrap'{$ENDIF},
  //RadioGroup_SetWordWrap {$IFNDEF MSWINDOWS}name '_RadioGroup_SetWordWrap'{$ENDIF},
  RadioGroup_SetOnClick {$IFNDEF MSWINDOWS}name '_RadioGroup_SetOnClick'{$ENDIF},
  RadioGroup_SetOnEnter {$IFNDEF MSWINDOWS}name '_RadioGroup_SetOnEnter'{$ENDIF},
  RadioGroup_SetOnExit {$IFNDEF MSWINDOWS}name '_RadioGroup_SetOnExit'{$ENDIF},
  RadioGroup_GetBrush {$IFNDEF MSWINDOWS}name '_RadioGroup_GetBrush'{$ENDIF},
  RadioGroup_GetControlCount {$IFNDEF MSWINDOWS}name '_RadioGroup_GetControlCount'{$ENDIF},
  RadioGroup_GetHandle {$IFNDEF MSWINDOWS}name '_RadioGroup_GetHandle'{$ENDIF},
  RadioGroup_GetParentWindow {$IFNDEF MSWINDOWS}name '_RadioGroup_GetParentWindow'{$ENDIF},
  RadioGroup_SetParentWindow {$IFNDEF MSWINDOWS}name '_RadioGroup_SetParentWindow'{$ENDIF},
  RadioGroup_GetAction {$IFNDEF MSWINDOWS}name '_RadioGroup_GetAction'{$ENDIF},
  RadioGroup_SetAction {$IFNDEF MSWINDOWS}name '_RadioGroup_SetAction'{$ENDIF},
  RadioGroup_GetBoundsRect {$IFNDEF MSWINDOWS}name '_RadioGroup_GetBoundsRect'{$ENDIF},
  RadioGroup_SetBoundsRect {$IFNDEF MSWINDOWS}name '_RadioGroup_SetBoundsRect'{$ENDIF},
  RadioGroup_GetClientHeight {$IFNDEF MSWINDOWS}name '_RadioGroup_GetClientHeight'{$ENDIF},
  RadioGroup_SetClientHeight {$IFNDEF MSWINDOWS}name '_RadioGroup_SetClientHeight'{$ENDIF},
  RadioGroup_GetClientRect {$IFNDEF MSWINDOWS}name '_RadioGroup_GetClientRect'{$ENDIF},
  RadioGroup_GetClientWidth {$IFNDEF MSWINDOWS}name '_RadioGroup_GetClientWidth'{$ENDIF},
  RadioGroup_SetClientWidth {$IFNDEF MSWINDOWS}name '_RadioGroup_SetClientWidth'{$ENDIF},
  //RadioGroup_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_RadioGroup_GetExplicitLeft'{$ENDIF},
  //RadioGroup_GetExplicitTop {$IFNDEF MSWINDOWS}name '_RadioGroup_GetExplicitTop'{$ENDIF},
  //RadioGroup_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_RadioGroup_GetExplicitWidth'{$ENDIF},
  //RadioGroup_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_RadioGroup_GetExplicitHeight'{$ENDIF},
  RadioGroup_GetParent {$IFNDEF MSWINDOWS}name '_RadioGroup_GetParent'{$ENDIF},
  RadioGroup_SetParent {$IFNDEF MSWINDOWS}name '_RadioGroup_SetParent'{$ENDIF},
  //RadioGroup_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_RadioGroup_GetAlignWithMargins'{$ENDIF},
  //RadioGroup_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_RadioGroup_SetAlignWithMargins'{$ENDIF},
  RadioGroup_GetLeft {$IFNDEF MSWINDOWS}name '_RadioGroup_GetLeft'{$ENDIF},
  RadioGroup_SetLeft {$IFNDEF MSWINDOWS}name '_RadioGroup_SetLeft'{$ENDIF},
  RadioGroup_GetTop {$IFNDEF MSWINDOWS}name '_RadioGroup_GetTop'{$ENDIF},
  RadioGroup_SetTop {$IFNDEF MSWINDOWS}name '_RadioGroup_SetTop'{$ENDIF},
  RadioGroup_GetWidth {$IFNDEF MSWINDOWS}name '_RadioGroup_GetWidth'{$ENDIF},
  RadioGroup_SetWidth {$IFNDEF MSWINDOWS}name '_RadioGroup_SetWidth'{$ENDIF},
  RadioGroup_GetHeight {$IFNDEF MSWINDOWS}name '_RadioGroup_GetHeight'{$ENDIF},
  RadioGroup_SetHeight {$IFNDEF MSWINDOWS}name '_RadioGroup_SetHeight'{$ENDIF},
  RadioGroup_GetCursor {$IFNDEF MSWINDOWS}name '_RadioGroup_GetCursor'{$ENDIF},
  RadioGroup_SetCursor {$IFNDEF MSWINDOWS}name '_RadioGroup_SetCursor'{$ENDIF},
  RadioGroup_GetHint {$IFNDEF MSWINDOWS}name '_RadioGroup_GetHint'{$ENDIF},
  RadioGroup_SetHint {$IFNDEF MSWINDOWS}name '_RadioGroup_SetHint'{$ENDIF},
  //RadioGroup_GetMargins {$IFNDEF MSWINDOWS}name '_RadioGroup_GetMargins'{$ENDIF},
  //RadioGroup_SetMargins {$IFNDEF MSWINDOWS}name '_RadioGroup_SetMargins'{$ENDIF},
  RadioGroup_GetComponentCount {$IFNDEF MSWINDOWS}name '_RadioGroup_GetComponentCount'{$ENDIF},
  RadioGroup_GetComponentIndex {$IFNDEF MSWINDOWS}name '_RadioGroup_GetComponentIndex'{$ENDIF},
  RadioGroup_SetComponentIndex {$IFNDEF MSWINDOWS}name '_RadioGroup_SetComponentIndex'{$ENDIF},
  RadioGroup_GetOwner {$IFNDEF MSWINDOWS}name '_RadioGroup_GetOwner'{$ENDIF},
  RadioGroup_GetName {$IFNDEF MSWINDOWS}name '_RadioGroup_GetName'{$ENDIF},
  RadioGroup_SetName {$IFNDEF MSWINDOWS}name '_RadioGroup_SetName'{$ENDIF},
  RadioGroup_GetTag {$IFNDEF MSWINDOWS}name '_RadioGroup_GetTag'{$ENDIF},
  RadioGroup_SetTag {$IFNDEF MSWINDOWS}name '_RadioGroup_SetTag'{$ENDIF},
  //RadioGroup_GetButtons {$IFNDEF MSWINDOWS}name '_RadioGroup_GetButtons'{$ENDIF},
  RadioGroup_GetControls {$IFNDEF MSWINDOWS}name '_RadioGroup_GetControls'{$ENDIF},
  RadioGroup_GetComponents {$IFNDEF MSWINDOWS}name '_RadioGroup_GetComponents'{$ENDIF};

