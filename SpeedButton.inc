
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function SpeedButton_Create(AOwner: TComponent): TSpeedButton; cdecl;
begin
  Result :=  TSpeedButton.Create(AOwner);
end;

procedure SpeedButton_Free(AObj: TSpeedButton); cdecl;
begin
  AObj.Free;
end;

procedure SpeedButton_Click(AObj: TSpeedButton); cdecl;
begin
  AObj.Click;
end;

procedure SpeedButton_BringToFront(AObj: TSpeedButton); cdecl;
begin
  AObj.BringToFront;
end;

function SpeedButton_HasParent(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure SpeedButton_Hide(AObj: TSpeedButton); cdecl;
begin
  AObj.Hide;
end;

procedure SpeedButton_Invalidate(AObj: TSpeedButton); cdecl;
begin
  AObj.Invalidate;
end;

function SpeedButton_Perform(AObj: TSpeedButton; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure SpeedButton_Refresh(AObj: TSpeedButton); cdecl;
begin
  AObj.Refresh;
end;

procedure SpeedButton_Repaint(AObj: TSpeedButton); cdecl;
begin
  AObj.Repaint;
end;

procedure SpeedButton_SendToBack(AObj: TSpeedButton); cdecl;
begin
  AObj.SendToBack;
end;

procedure SpeedButton_SetBounds(AObj: TSpeedButton; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure SpeedButton_Show(AObj: TSpeedButton); cdecl;
begin
  AObj.Show;
end;

procedure SpeedButton_Update(AObj: TSpeedButton); cdecl;
begin
  AObj.Update;
end;

function SpeedButton_GetTextBuf(AObj: TSpeedButton; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function SpeedButton_FindComponent(AObj: TSpeedButton; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function SpeedButton_GetNamePath(AObj: TSpeedButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure SpeedButton_Assign(AObj: TSpeedButton; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function SpeedButton_ClassName(AObj: TSpeedButton): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function SpeedButton_Equals(AObj: TSpeedButton; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function SpeedButton_GetHashCode(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function SpeedButton_ToString(AObj: TSpeedButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function SpeedButton_GetAction(AObj: TSpeedButton): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure SpeedButton_SetAction(AObj: TSpeedButton; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function SpeedButton_GetAlign(AObj: TSpeedButton): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure SpeedButton_SetAlign(AObj: TSpeedButton; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function SpeedButton_GetAllowAllUp(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.AllowAllUp;
end;

procedure SpeedButton_SetAllowAllUp(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.AllowAllUp := AValue;
end;

function SpeedButton_GetAnchors(AObj: TSpeedButton): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure SpeedButton_SetAnchors(AObj: TSpeedButton; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function SpeedButton_GetBiDiMode(AObj: TSpeedButton): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure SpeedButton_SetBiDiMode(AObj: TSpeedButton; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function SpeedButton_GetGroupIndex(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.GroupIndex;
end;

procedure SpeedButton_SetGroupIndex(AObj: TSpeedButton; AValue: Integer); cdecl;
begin
  AObj.GroupIndex := AValue;
end;

function SpeedButton_GetDown(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.Down;
end;

procedure SpeedButton_SetDown(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.Down := AValue;
end;

function SpeedButton_GetCaption(AObj: TSpeedButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure SpeedButton_SetCaption(AObj: TSpeedButton; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function SpeedButton_GetEnabled(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure SpeedButton_SetEnabled(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function SpeedButton_GetFlat(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.Flat;
end;

procedure SpeedButton_SetFlat(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.Flat := AValue;
end;

function SpeedButton_GetFont(AObj: TSpeedButton): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure SpeedButton_SetFont(AObj: TSpeedButton; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function SpeedButton_GetLayout(AObj: TSpeedButton): TButtonLayout; cdecl;
begin
  Result :=  AObj.Layout;
end;

procedure SpeedButton_SetLayout(AObj: TSpeedButton; AValue: TButtonLayout); cdecl;
begin
  AObj.Layout := AValue;
end;

function SpeedButton_GetParentFont(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure SpeedButton_SetParentFont(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function SpeedButton_GetParentShowHint(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure SpeedButton_SetParentShowHint(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function SpeedButton_GetPopupMenu(AObj: TSpeedButton): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure SpeedButton_SetPopupMenu(AObj: TSpeedButton; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function SpeedButton_GetShowHint(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure SpeedButton_SetShowHint(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function SpeedButton_GetTransparent(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure SpeedButton_SetTransparent(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function SpeedButton_GetVisible(AObj: TSpeedButton): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure SpeedButton_SetVisible(AObj: TSpeedButton; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function SpeedButton_GetStyleElements(AObj: TSpeedButton): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure SpeedButton_SetStyleElements(AObj: TSpeedButton; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure SpeedButton_SetOnClick(AObj: TSpeedButton; AEventId: NativeUInt); stdcall;
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

procedure SpeedButton_SetOnDblClick(AObj: TSpeedButton; AEventId: NativeUInt); stdcall;
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

procedure SpeedButton_SetOnMouseDown(AObj: TSpeedButton; AEventId: NativeUInt); stdcall;
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

procedure SpeedButton_SetOnMouseEnter(AObj: TSpeedButton; AEventId: NativeUInt); stdcall;
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

procedure SpeedButton_SetOnMouseLeave(AObj: TSpeedButton; AEventId: NativeUInt); stdcall;
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

procedure SpeedButton_SetOnMouseMove(AObj: TSpeedButton; AEventId: NativeUInt); stdcall;
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

procedure SpeedButton_SetOnMouseUp(AObj: TSpeedButton; AEventId: NativeUInt); stdcall;
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

procedure SpeedButton_GetBoundsRect(AObj: TSpeedButton; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure SpeedButton_SetBoundsRect(AObj: TSpeedButton; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function SpeedButton_GetClientHeight(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure SpeedButton_SetClientHeight(AObj: TSpeedButton; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure SpeedButton_GetClientRect(AObj: TSpeedButton; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function SpeedButton_GetClientWidth(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure SpeedButton_SetClientWidth(AObj: TSpeedButton; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function SpeedButton_GetExplicitLeft(AObj: TSpeedButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function SpeedButton_GetExplicitTop(AObj: TSpeedButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function SpeedButton_GetExplicitWidth(AObj: TSpeedButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function SpeedButton_GetExplicitHeight(AObj: TSpeedButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function SpeedButton_GetParent(AObj: TSpeedButton): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure SpeedButton_SetParent(AObj: TSpeedButton; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function SpeedButton_GetAlignWithMargins(AObj: TSpeedButton): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure SpeedButton_SetAlignWithMargins(AObj: TSpeedButton; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function SpeedButton_GetLeft(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure SpeedButton_SetLeft(AObj: TSpeedButton; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function SpeedButton_GetTop(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure SpeedButton_SetTop(AObj: TSpeedButton; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function SpeedButton_GetWidth(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure SpeedButton_SetWidth(AObj: TSpeedButton; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function SpeedButton_GetHeight(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure SpeedButton_SetHeight(AObj: TSpeedButton; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function SpeedButton_GetCursor(AObj: TSpeedButton): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure SpeedButton_SetCursor(AObj: TSpeedButton; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function SpeedButton_GetHint(AObj: TSpeedButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure SpeedButton_SetHint(AObj: TSpeedButton; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function SpeedButton_GetMargins(AObj: TSpeedButton): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure SpeedButton_SetMargins(AObj: TSpeedButton; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function SpeedButton_GetComponentCount(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function SpeedButton_GetComponentIndex(AObj: TSpeedButton): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure SpeedButton_SetComponentIndex(AObj: TSpeedButton; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function SpeedButton_GetOwner(AObj: TSpeedButton): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function SpeedButton_GetName(AObj: TSpeedButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure SpeedButton_SetName(AObj: TSpeedButton; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function SpeedButton_GetTag(AObj: TSpeedButton): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure SpeedButton_SetTag(AObj: TSpeedButton; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function SpeedButton_GetComponents(AObj: TSpeedButton; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  SpeedButton_Create {$IFNDEF MSWINDOWS}name '_SpeedButton_Create'{$ENDIF},
  SpeedButton_Free {$IFNDEF MSWINDOWS}name '_SpeedButton_Free'{$ENDIF},
  SpeedButton_Click {$IFNDEF MSWINDOWS}name '_SpeedButton_Click'{$ENDIF},
  SpeedButton_BringToFront {$IFNDEF MSWINDOWS}name '_SpeedButton_BringToFront'{$ENDIF},
  SpeedButton_HasParent {$IFNDEF MSWINDOWS}name '_SpeedButton_HasParent'{$ENDIF},
  SpeedButton_Hide {$IFNDEF MSWINDOWS}name '_SpeedButton_Hide'{$ENDIF},
  SpeedButton_Invalidate {$IFNDEF MSWINDOWS}name '_SpeedButton_Invalidate'{$ENDIF},
  SpeedButton_Perform {$IFNDEF MSWINDOWS}name '_SpeedButton_Perform'{$ENDIF},
  SpeedButton_Refresh {$IFNDEF MSWINDOWS}name '_SpeedButton_Refresh'{$ENDIF},
  SpeedButton_Repaint {$IFNDEF MSWINDOWS}name '_SpeedButton_Repaint'{$ENDIF},
  SpeedButton_SendToBack {$IFNDEF MSWINDOWS}name '_SpeedButton_SendToBack'{$ENDIF},
  SpeedButton_SetBounds {$IFNDEF MSWINDOWS}name '_SpeedButton_SetBounds'{$ENDIF},
  SpeedButton_Show {$IFNDEF MSWINDOWS}name '_SpeedButton_Show'{$ENDIF},
  SpeedButton_Update {$IFNDEF MSWINDOWS}name '_SpeedButton_Update'{$ENDIF},
  SpeedButton_GetTextBuf {$IFNDEF MSWINDOWS}name '_SpeedButton_GetTextBuf'{$ENDIF},
  SpeedButton_FindComponent {$IFNDEF MSWINDOWS}name '_SpeedButton_FindComponent'{$ENDIF},
  SpeedButton_GetNamePath {$IFNDEF MSWINDOWS}name '_SpeedButton_GetNamePath'{$ENDIF},
  SpeedButton_Assign {$IFNDEF MSWINDOWS}name '_SpeedButton_Assign'{$ENDIF},
  SpeedButton_ClassName {$IFNDEF MSWINDOWS}name '_SpeedButton_ClassName'{$ENDIF},
  SpeedButton_Equals {$IFNDEF MSWINDOWS}name '_SpeedButton_Equals'{$ENDIF},
  SpeedButton_GetHashCode {$IFNDEF MSWINDOWS}name '_SpeedButton_GetHashCode'{$ENDIF},
  SpeedButton_ToString {$IFNDEF MSWINDOWS}name '_SpeedButton_ToString'{$ENDIF},
  SpeedButton_GetAction {$IFNDEF MSWINDOWS}name '_SpeedButton_GetAction'{$ENDIF},
  SpeedButton_SetAction {$IFNDEF MSWINDOWS}name '_SpeedButton_SetAction'{$ENDIF},
  SpeedButton_GetAlign {$IFNDEF MSWINDOWS}name '_SpeedButton_GetAlign'{$ENDIF},
  SpeedButton_SetAlign {$IFNDEF MSWINDOWS}name '_SpeedButton_SetAlign'{$ENDIF},
  SpeedButton_GetAllowAllUp {$IFNDEF MSWINDOWS}name '_SpeedButton_GetAllowAllUp'{$ENDIF},
  SpeedButton_SetAllowAllUp {$IFNDEF MSWINDOWS}name '_SpeedButton_SetAllowAllUp'{$ENDIF},
  SpeedButton_GetAnchors {$IFNDEF MSWINDOWS}name '_SpeedButton_GetAnchors'{$ENDIF},
  SpeedButton_SetAnchors {$IFNDEF MSWINDOWS}name '_SpeedButton_SetAnchors'{$ENDIF},
  SpeedButton_GetBiDiMode {$IFNDEF MSWINDOWS}name '_SpeedButton_GetBiDiMode'{$ENDIF},
  SpeedButton_SetBiDiMode {$IFNDEF MSWINDOWS}name '_SpeedButton_SetBiDiMode'{$ENDIF},
  SpeedButton_GetGroupIndex {$IFNDEF MSWINDOWS}name '_SpeedButton_GetGroupIndex'{$ENDIF},
  SpeedButton_SetGroupIndex {$IFNDEF MSWINDOWS}name '_SpeedButton_SetGroupIndex'{$ENDIF},
  SpeedButton_GetDown {$IFNDEF MSWINDOWS}name '_SpeedButton_GetDown'{$ENDIF},
  SpeedButton_SetDown {$IFNDEF MSWINDOWS}name '_SpeedButton_SetDown'{$ENDIF},
  SpeedButton_GetCaption {$IFNDEF MSWINDOWS}name '_SpeedButton_GetCaption'{$ENDIF},
  SpeedButton_SetCaption {$IFNDEF MSWINDOWS}name '_SpeedButton_SetCaption'{$ENDIF},
  SpeedButton_GetEnabled {$IFNDEF MSWINDOWS}name '_SpeedButton_GetEnabled'{$ENDIF},
  SpeedButton_SetEnabled {$IFNDEF MSWINDOWS}name '_SpeedButton_SetEnabled'{$ENDIF},
  SpeedButton_GetFlat {$IFNDEF MSWINDOWS}name '_SpeedButton_GetFlat'{$ENDIF},
  SpeedButton_SetFlat {$IFNDEF MSWINDOWS}name '_SpeedButton_SetFlat'{$ENDIF},
  SpeedButton_GetFont {$IFNDEF MSWINDOWS}name '_SpeedButton_GetFont'{$ENDIF},
  SpeedButton_SetFont {$IFNDEF MSWINDOWS}name '_SpeedButton_SetFont'{$ENDIF},
  SpeedButton_GetLayout {$IFNDEF MSWINDOWS}name '_SpeedButton_GetLayout'{$ENDIF},
  SpeedButton_SetLayout {$IFNDEF MSWINDOWS}name '_SpeedButton_SetLayout'{$ENDIF},
  SpeedButton_GetParentFont {$IFNDEF MSWINDOWS}name '_SpeedButton_GetParentFont'{$ENDIF},
  SpeedButton_SetParentFont {$IFNDEF MSWINDOWS}name '_SpeedButton_SetParentFont'{$ENDIF},
  SpeedButton_GetParentShowHint {$IFNDEF MSWINDOWS}name '_SpeedButton_GetParentShowHint'{$ENDIF},
  SpeedButton_SetParentShowHint {$IFNDEF MSWINDOWS}name '_SpeedButton_SetParentShowHint'{$ENDIF},
  SpeedButton_GetPopupMenu {$IFNDEF MSWINDOWS}name '_SpeedButton_GetPopupMenu'{$ENDIF},
  SpeedButton_SetPopupMenu {$IFNDEF MSWINDOWS}name '_SpeedButton_SetPopupMenu'{$ENDIF},
  SpeedButton_GetShowHint {$IFNDEF MSWINDOWS}name '_SpeedButton_GetShowHint'{$ENDIF},
  SpeedButton_SetShowHint {$IFNDEF MSWINDOWS}name '_SpeedButton_SetShowHint'{$ENDIF},
  SpeedButton_GetTransparent {$IFNDEF MSWINDOWS}name '_SpeedButton_GetTransparent'{$ENDIF},
  SpeedButton_SetTransparent {$IFNDEF MSWINDOWS}name '_SpeedButton_SetTransparent'{$ENDIF},
  SpeedButton_GetVisible {$IFNDEF MSWINDOWS}name '_SpeedButton_GetVisible'{$ENDIF},
  SpeedButton_SetVisible {$IFNDEF MSWINDOWS}name '_SpeedButton_SetVisible'{$ENDIF},
  //SpeedButton_GetStyleElements {$IFNDEF MSWINDOWS}name '_SpeedButton_GetStyleElements'{$ENDIF},
  //SpeedButton_SetStyleElements {$IFNDEF MSWINDOWS}name '_SpeedButton_SetStyleElements'{$ENDIF},
  SpeedButton_SetOnClick {$IFNDEF MSWINDOWS}name '_SpeedButton_SetOnClick'{$ENDIF},
  SpeedButton_SetOnDblClick {$IFNDEF MSWINDOWS}name '_SpeedButton_SetOnDblClick'{$ENDIF},
  SpeedButton_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_SpeedButton_SetOnMouseDown'{$ENDIF},
  SpeedButton_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_SpeedButton_SetOnMouseEnter'{$ENDIF},
  SpeedButton_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_SpeedButton_SetOnMouseLeave'{$ENDIF},
  SpeedButton_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_SpeedButton_SetOnMouseMove'{$ENDIF},
  SpeedButton_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_SpeedButton_SetOnMouseUp'{$ENDIF},
  SpeedButton_GetBoundsRect {$IFNDEF MSWINDOWS}name '_SpeedButton_GetBoundsRect'{$ENDIF},
  SpeedButton_SetBoundsRect {$IFNDEF MSWINDOWS}name '_SpeedButton_SetBoundsRect'{$ENDIF},
  SpeedButton_GetClientHeight {$IFNDEF MSWINDOWS}name '_SpeedButton_GetClientHeight'{$ENDIF},
  SpeedButton_SetClientHeight {$IFNDEF MSWINDOWS}name '_SpeedButton_SetClientHeight'{$ENDIF},
  SpeedButton_GetClientRect {$IFNDEF MSWINDOWS}name '_SpeedButton_GetClientRect'{$ENDIF},
  SpeedButton_GetClientWidth {$IFNDEF MSWINDOWS}name '_SpeedButton_GetClientWidth'{$ENDIF},
  SpeedButton_SetClientWidth {$IFNDEF MSWINDOWS}name '_SpeedButton_SetClientWidth'{$ENDIF},
  //SpeedButton_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_SpeedButton_GetExplicitLeft'{$ENDIF},
  //SpeedButton_GetExplicitTop {$IFNDEF MSWINDOWS}name '_SpeedButton_GetExplicitTop'{$ENDIF},
  //SpeedButton_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_SpeedButton_GetExplicitWidth'{$ENDIF},
  //SpeedButton_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_SpeedButton_GetExplicitHeight'{$ENDIF},
  SpeedButton_GetParent {$IFNDEF MSWINDOWS}name '_SpeedButton_GetParent'{$ENDIF},
  SpeedButton_SetParent {$IFNDEF MSWINDOWS}name '_SpeedButton_SetParent'{$ENDIF},
  //SpeedButton_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_SpeedButton_GetAlignWithMargins'{$ENDIF},
  //SpeedButton_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_SpeedButton_SetAlignWithMargins'{$ENDIF},
  SpeedButton_GetLeft {$IFNDEF MSWINDOWS}name '_SpeedButton_GetLeft'{$ENDIF},
  SpeedButton_SetLeft {$IFNDEF MSWINDOWS}name '_SpeedButton_SetLeft'{$ENDIF},
  SpeedButton_GetTop {$IFNDEF MSWINDOWS}name '_SpeedButton_GetTop'{$ENDIF},
  SpeedButton_SetTop {$IFNDEF MSWINDOWS}name '_SpeedButton_SetTop'{$ENDIF},
  SpeedButton_GetWidth {$IFNDEF MSWINDOWS}name '_SpeedButton_GetWidth'{$ENDIF},
  SpeedButton_SetWidth {$IFNDEF MSWINDOWS}name '_SpeedButton_SetWidth'{$ENDIF},
  SpeedButton_GetHeight {$IFNDEF MSWINDOWS}name '_SpeedButton_GetHeight'{$ENDIF},
  SpeedButton_SetHeight {$IFNDEF MSWINDOWS}name '_SpeedButton_SetHeight'{$ENDIF},
  SpeedButton_GetCursor {$IFNDEF MSWINDOWS}name '_SpeedButton_GetCursor'{$ENDIF},
  SpeedButton_SetCursor {$IFNDEF MSWINDOWS}name '_SpeedButton_SetCursor'{$ENDIF},
  SpeedButton_GetHint {$IFNDEF MSWINDOWS}name '_SpeedButton_GetHint'{$ENDIF},
  SpeedButton_SetHint {$IFNDEF MSWINDOWS}name '_SpeedButton_SetHint'{$ENDIF},
  //SpeedButton_GetMargins {$IFNDEF MSWINDOWS}name '_SpeedButton_GetMargins'{$ENDIF},
  //SpeedButton_SetMargins {$IFNDEF MSWINDOWS}name '_SpeedButton_SetMargins'{$ENDIF},
  SpeedButton_GetComponentCount {$IFNDEF MSWINDOWS}name '_SpeedButton_GetComponentCount'{$ENDIF},
  SpeedButton_GetComponentIndex {$IFNDEF MSWINDOWS}name '_SpeedButton_GetComponentIndex'{$ENDIF},
  SpeedButton_SetComponentIndex {$IFNDEF MSWINDOWS}name '_SpeedButton_SetComponentIndex'{$ENDIF},
  SpeedButton_GetOwner {$IFNDEF MSWINDOWS}name '_SpeedButton_GetOwner'{$ENDIF},
  SpeedButton_GetName {$IFNDEF MSWINDOWS}name '_SpeedButton_GetName'{$ENDIF},
  SpeedButton_SetName {$IFNDEF MSWINDOWS}name '_SpeedButton_SetName'{$ENDIF},
  SpeedButton_GetTag {$IFNDEF MSWINDOWS}name '_SpeedButton_GetTag'{$ENDIF},
  SpeedButton_SetTag {$IFNDEF MSWINDOWS}name '_SpeedButton_SetTag'{$ENDIF},
  SpeedButton_GetComponents {$IFNDEF MSWINDOWS}name '_SpeedButton_GetComponents'{$ENDIF};

