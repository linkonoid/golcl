
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Label_Create(AOwner: TComponent): TLabel; cdecl;
begin
  Result :=  TLabel.Create(AOwner);
end;

procedure Label_Free(AObj: TLabel); cdecl;
begin
  AObj.Free;
end;

procedure Label_BringToFront(AObj: TLabel); cdecl;
begin
  AObj.BringToFront;
end;

function Label_HasParent(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Label_Hide(AObj: TLabel); cdecl;
begin
  AObj.Hide;
end;

procedure Label_Invalidate(AObj: TLabel); cdecl;
begin
  AObj.Invalidate;
end;

function Label_Perform(AObj: TLabel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Label_Refresh(AObj: TLabel); cdecl;
begin
  AObj.Refresh;
end;

procedure Label_Repaint(AObj: TLabel); cdecl;
begin
  AObj.Repaint;
end;

procedure Label_SendToBack(AObj: TLabel); cdecl;
begin
  AObj.SendToBack;
end;

procedure Label_SetBounds(AObj: TLabel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Label_Show(AObj: TLabel); cdecl;
begin
  AObj.Show;
end;

procedure Label_Update(AObj: TLabel); cdecl;
begin
  AObj.Update;
end;

function Label_GetTextBuf(AObj: TLabel; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function Label_FindComponent(AObj: TLabel; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Label_GetNamePath(AObj: TLabel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Label_Assign(AObj: TLabel; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Label_ClassName(AObj: TLabel): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Label_Equals(AObj: TLabel; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Label_GetHashCode(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Label_ToString(AObj: TLabel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Label_GetAlign(AObj: TLabel): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Label_SetAlign(AObj: TLabel; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Label_GetAlignment(AObj: TLabel): TAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure Label_SetAlignment(AObj: TLabel; AValue: TAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function Label_GetAnchors(AObj: TLabel): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Label_SetAnchors(AObj: TLabel; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function Label_GetAutoSize(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Label_SetAutoSize(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function Label_GetBiDiMode(AObj: TLabel): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Label_SetBiDiMode(AObj: TLabel; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Label_GetCaption(AObj: TLabel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure Label_SetCaption(AObj: TLabel; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function Label_GetColor(AObj: TLabel): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Label_SetColor(AObj: TLabel; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

//function Label_GetEllipsisPosition(AObj: TLabel): TEllipsisPosition; cdecl;
//begin
//  Result :=  AObj.EllipsisPosition;
//end;
//
//procedure Label_SetEllipsisPosition(AObj: TLabel; AValue: TEllipsisPosition); cdecl;
//begin
//  AObj.EllipsisPosition := AValue;
//end;

function Label_GetEnabled(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Label_SetEnabled(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Label_GetFont(AObj: TLabel): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure Label_SetFont(AObj: TLabel; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

//function Label_GetGlowSize(AObj: TLabel): Integer; cdecl;
//begin
//  Result :=  AObj.GlowSize;
//end;
//
//procedure Label_SetGlowSize(AObj: TLabel; AValue: Integer); cdecl;
//begin
//  AObj.GlowSize := AValue;
//end;

function Label_GetParentColor(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure Label_SetParentColor(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function Label_GetParentFont(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Label_SetParentFont(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function Label_GetParentShowHint(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Label_SetParentShowHint(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Label_GetPopupMenu(AObj: TLabel): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Label_SetPopupMenu(AObj: TLabel; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Label_GetShowAccelChar(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.ShowAccelChar;
end;

procedure Label_SetShowAccelChar(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.ShowAccelChar := AValue;
end;

function Label_GetShowHint(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Label_SetShowHint(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Label_GetTransparent(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure Label_SetTransparent(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function Label_GetLayout(AObj: TLabel): TTextLayout; cdecl;
begin
  Result :=  AObj.Layout;
end;

procedure Label_SetLayout(AObj: TLabel; AValue: TTextLayout); cdecl;
begin
  AObj.Layout := AValue;
end;

function Label_GetVisible(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Label_SetVisible(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function Label_GetWordWrap(AObj: TLabel): LongBool; cdecl;
begin
  Result :=  AObj.WordWrap;
end;

procedure Label_SetWordWrap(AObj: TLabel; AValue: LongBool); cdecl;
begin
  AObj.WordWrap := AValue;
end;

//function Label_GetStyleElements(AObj: TLabel): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure Label_SetStyleElements(AObj: TLabel; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure Label_SetOnClick(AObj: TLabel; AEventId: NativeUInt); stdcall;
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

procedure Label_SetOnDblClick(AObj: TLabel; AEventId: NativeUInt); stdcall;
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

procedure Label_SetOnMouseDown(AObj: TLabel; AEventId: NativeUInt); stdcall;
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

procedure Label_SetOnMouseMove(AObj: TLabel; AEventId: NativeUInt); stdcall;
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

procedure Label_SetOnMouseUp(AObj: TLabel; AEventId: NativeUInt); stdcall;
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

procedure Label_SetOnMouseEnter(AObj: TLabel; AEventId: NativeUInt); stdcall;
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

procedure Label_SetOnMouseLeave(AObj: TLabel; AEventId: NativeUInt); stdcall;
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

function Label_GetCanvas(AObj: TLabel): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function Label_GetAction(AObj: TLabel): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Label_SetAction(AObj: TLabel; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure Label_GetBoundsRect(AObj: TLabel; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Label_SetBoundsRect(AObj: TLabel; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Label_GetClientHeight(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Label_SetClientHeight(AObj: TLabel; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Label_GetClientRect(AObj: TLabel; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Label_GetClientWidth(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Label_SetClientWidth(AObj: TLabel; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function Label_GetExplicitLeft(AObj: TLabel): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function Label_GetExplicitTop(AObj: TLabel): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function Label_GetExplicitWidth(AObj: TLabel): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function Label_GetExplicitHeight(AObj: TLabel): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function Label_GetParent(AObj: TLabel): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Label_SetParent(AObj: TLabel; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function Label_GetAlignWithMargins(AObj: TLabel): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure Label_SetAlignWithMargins(AObj: TLabel; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function Label_GetLeft(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Label_SetLeft(AObj: TLabel; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Label_GetTop(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Label_SetTop(AObj: TLabel; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Label_GetWidth(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Label_SetWidth(AObj: TLabel; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function Label_GetHeight(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Label_SetHeight(AObj: TLabel; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Label_GetCursor(AObj: TLabel): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Label_SetCursor(AObj: TLabel; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Label_GetHint(AObj: TLabel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Label_SetHint(AObj: TLabel; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Label_GetMargins(AObj: TLabel): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure Label_SetMargins(AObj: TLabel; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Label_GetComponentCount(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Label_GetComponentIndex(AObj: TLabel): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Label_SetComponentIndex(AObj: TLabel; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Label_GetOwner(AObj: TLabel): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Label_GetName(AObj: TLabel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Label_SetName(AObj: TLabel; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Label_GetTag(AObj: TLabel): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Label_SetTag(AObj: TLabel; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Label_GetComponents(AObj: TLabel; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Label_Create {$IFNDEF MSWINDOWS}name '_Label_Create'{$ENDIF},
  Label_Free {$IFNDEF MSWINDOWS}name '_Label_Free'{$ENDIF},
  Label_BringToFront {$IFNDEF MSWINDOWS}name '_Label_BringToFront'{$ENDIF},
  Label_HasParent {$IFNDEF MSWINDOWS}name '_Label_HasParent'{$ENDIF},
  Label_Hide {$IFNDEF MSWINDOWS}name '_Label_Hide'{$ENDIF},
  Label_Invalidate {$IFNDEF MSWINDOWS}name '_Label_Invalidate'{$ENDIF},
  Label_Perform {$IFNDEF MSWINDOWS}name '_Label_Perform'{$ENDIF},
  Label_Refresh {$IFNDEF MSWINDOWS}name '_Label_Refresh'{$ENDIF},
  Label_Repaint {$IFNDEF MSWINDOWS}name '_Label_Repaint'{$ENDIF},
  Label_SendToBack {$IFNDEF MSWINDOWS}name '_Label_SendToBack'{$ENDIF},
  Label_SetBounds {$IFNDEF MSWINDOWS}name '_Label_SetBounds'{$ENDIF},
  Label_Show {$IFNDEF MSWINDOWS}name '_Label_Show'{$ENDIF},
  Label_Update {$IFNDEF MSWINDOWS}name '_Label_Update'{$ENDIF},
  Label_GetTextBuf {$IFNDEF MSWINDOWS}name '_Label_GetTextBuf'{$ENDIF},
  Label_FindComponent {$IFNDEF MSWINDOWS}name '_Label_FindComponent'{$ENDIF},
  Label_GetNamePath {$IFNDEF MSWINDOWS}name '_Label_GetNamePath'{$ENDIF},
  Label_Assign {$IFNDEF MSWINDOWS}name '_Label_Assign'{$ENDIF},
  Label_ClassName {$IFNDEF MSWINDOWS}name '_Label_ClassName'{$ENDIF},
  Label_Equals {$IFNDEF MSWINDOWS}name '_Label_Equals'{$ENDIF},
  Label_GetHashCode {$IFNDEF MSWINDOWS}name '_Label_GetHashCode'{$ENDIF},
  Label_ToString {$IFNDEF MSWINDOWS}name '_Label_ToString'{$ENDIF},
  Label_GetAlign {$IFNDEF MSWINDOWS}name '_Label_GetAlign'{$ENDIF},
  Label_SetAlign {$IFNDEF MSWINDOWS}name '_Label_SetAlign'{$ENDIF},
  Label_GetAlignment {$IFNDEF MSWINDOWS}name '_Label_GetAlignment'{$ENDIF},
  Label_SetAlignment {$IFNDEF MSWINDOWS}name '_Label_SetAlignment'{$ENDIF},
  Label_GetAnchors {$IFNDEF MSWINDOWS}name '_Label_GetAnchors'{$ENDIF},
  Label_SetAnchors {$IFNDEF MSWINDOWS}name '_Label_SetAnchors'{$ENDIF},
  Label_GetAutoSize {$IFNDEF MSWINDOWS}name '_Label_GetAutoSize'{$ENDIF},
  Label_SetAutoSize {$IFNDEF MSWINDOWS}name '_Label_SetAutoSize'{$ENDIF},
  Label_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Label_GetBiDiMode'{$ENDIF},
  Label_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Label_SetBiDiMode'{$ENDIF},
  Label_GetCaption {$IFNDEF MSWINDOWS}name '_Label_GetCaption'{$ENDIF},
  Label_SetCaption {$IFNDEF MSWINDOWS}name '_Label_SetCaption'{$ENDIF},
  Label_GetColor {$IFNDEF MSWINDOWS}name '_Label_GetColor'{$ENDIF},
  Label_SetColor {$IFNDEF MSWINDOWS}name '_Label_SetColor'{$ENDIF},
  //Label_GetEllipsisPosition {$IFNDEF MSWINDOWS}name '_Label_GetEllipsisPosition'{$ENDIF},
  //Label_SetEllipsisPosition {$IFNDEF MSWINDOWS}name '_Label_SetEllipsisPosition'{$ENDIF},
  Label_GetEnabled {$IFNDEF MSWINDOWS}name '_Label_GetEnabled'{$ENDIF},
  Label_SetEnabled {$IFNDEF MSWINDOWS}name '_Label_SetEnabled'{$ENDIF},
  Label_GetFont {$IFNDEF MSWINDOWS}name '_Label_GetFont'{$ENDIF},
  Label_SetFont {$IFNDEF MSWINDOWS}name '_Label_SetFont'{$ENDIF},
  //Label_GetGlowSize {$IFNDEF MSWINDOWS}name '_Label_GetGlowSize'{$ENDIF},
  //Label_SetGlowSize {$IFNDEF MSWINDOWS}name '_Label_SetGlowSize'{$ENDIF},
  Label_GetParentColor {$IFNDEF MSWINDOWS}name '_Label_GetParentColor'{$ENDIF},
  Label_SetParentColor {$IFNDEF MSWINDOWS}name '_Label_SetParentColor'{$ENDIF},
  Label_GetParentFont {$IFNDEF MSWINDOWS}name '_Label_GetParentFont'{$ENDIF},
  Label_SetParentFont {$IFNDEF MSWINDOWS}name '_Label_SetParentFont'{$ENDIF},
  Label_GetParentShowHint {$IFNDEF MSWINDOWS}name '_Label_GetParentShowHint'{$ENDIF},
  Label_SetParentShowHint {$IFNDEF MSWINDOWS}name '_Label_SetParentShowHint'{$ENDIF},
  Label_GetPopupMenu {$IFNDEF MSWINDOWS}name '_Label_GetPopupMenu'{$ENDIF},
  Label_SetPopupMenu {$IFNDEF MSWINDOWS}name '_Label_SetPopupMenu'{$ENDIF},
  Label_GetShowAccelChar {$IFNDEF MSWINDOWS}name '_Label_GetShowAccelChar'{$ENDIF},
  Label_SetShowAccelChar {$IFNDEF MSWINDOWS}name '_Label_SetShowAccelChar'{$ENDIF},
  Label_GetShowHint {$IFNDEF MSWINDOWS}name '_Label_GetShowHint'{$ENDIF},
  Label_SetShowHint {$IFNDEF MSWINDOWS}name '_Label_SetShowHint'{$ENDIF},
  Label_GetTransparent {$IFNDEF MSWINDOWS}name '_Label_GetTransparent'{$ENDIF},
  Label_SetTransparent {$IFNDEF MSWINDOWS}name '_Label_SetTransparent'{$ENDIF},
  Label_GetLayout {$IFNDEF MSWINDOWS}name '_Label_GetLayout'{$ENDIF},
  Label_SetLayout {$IFNDEF MSWINDOWS}name '_Label_SetLayout'{$ENDIF},
  Label_GetVisible {$IFNDEF MSWINDOWS}name '_Label_GetVisible'{$ENDIF},
  Label_SetVisible {$IFNDEF MSWINDOWS}name '_Label_SetVisible'{$ENDIF},
  Label_GetWordWrap {$IFNDEF MSWINDOWS}name '_Label_GetWordWrap'{$ENDIF},
  Label_SetWordWrap {$IFNDEF MSWINDOWS}name '_Label_SetWordWrap'{$ENDIF},
  //Label_GetStyleElements {$IFNDEF MSWINDOWS}name '_Label_GetStyleElements'{$ENDIF},
  //Label_SetStyleElements {$IFNDEF MSWINDOWS}name '_Label_SetStyleElements'{$ENDIF},
  Label_SetOnClick {$IFNDEF MSWINDOWS}name '_Label_SetOnClick'{$ENDIF},
  Label_SetOnDblClick {$IFNDEF MSWINDOWS}name '_Label_SetOnDblClick'{$ENDIF},
  Label_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_Label_SetOnMouseDown'{$ENDIF},
  Label_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_Label_SetOnMouseMove'{$ENDIF},
  Label_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_Label_SetOnMouseUp'{$ENDIF},
  Label_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_Label_SetOnMouseEnter'{$ENDIF},
  Label_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_Label_SetOnMouseLeave'{$ENDIF},
  Label_GetCanvas {$IFNDEF MSWINDOWS}name '_Label_GetCanvas'{$ENDIF},
  Label_GetAction {$IFNDEF MSWINDOWS}name '_Label_GetAction'{$ENDIF},
  Label_SetAction {$IFNDEF MSWINDOWS}name '_Label_SetAction'{$ENDIF},
  Label_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Label_GetBoundsRect'{$ENDIF},
  Label_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Label_SetBoundsRect'{$ENDIF},
  Label_GetClientHeight {$IFNDEF MSWINDOWS}name '_Label_GetClientHeight'{$ENDIF},
  Label_SetClientHeight {$IFNDEF MSWINDOWS}name '_Label_SetClientHeight'{$ENDIF},
  Label_GetClientRect {$IFNDEF MSWINDOWS}name '_Label_GetClientRect'{$ENDIF},
  Label_GetClientWidth {$IFNDEF MSWINDOWS}name '_Label_GetClientWidth'{$ENDIF},
  Label_SetClientWidth {$IFNDEF MSWINDOWS}name '_Label_SetClientWidth'{$ENDIF},
  //Label_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Label_GetExplicitLeft'{$ENDIF},
  //Label_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Label_GetExplicitTop'{$ENDIF},
  //Label_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Label_GetExplicitWidth'{$ENDIF},
  //Label_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Label_GetExplicitHeight'{$ENDIF},
  Label_GetParent {$IFNDEF MSWINDOWS}name '_Label_GetParent'{$ENDIF},
  Label_SetParent {$IFNDEF MSWINDOWS}name '_Label_SetParent'{$ENDIF},
  //Label_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Label_GetAlignWithMargins'{$ENDIF},
  //Label_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Label_SetAlignWithMargins'{$ENDIF},
  Label_GetLeft {$IFNDEF MSWINDOWS}name '_Label_GetLeft'{$ENDIF},
  Label_SetLeft {$IFNDEF MSWINDOWS}name '_Label_SetLeft'{$ENDIF},
  Label_GetTop {$IFNDEF MSWINDOWS}name '_Label_GetTop'{$ENDIF},
  Label_SetTop {$IFNDEF MSWINDOWS}name '_Label_SetTop'{$ENDIF},
  Label_GetWidth {$IFNDEF MSWINDOWS}name '_Label_GetWidth'{$ENDIF},
  Label_SetWidth {$IFNDEF MSWINDOWS}name '_Label_SetWidth'{$ENDIF},
  Label_GetHeight {$IFNDEF MSWINDOWS}name '_Label_GetHeight'{$ENDIF},
  Label_SetHeight {$IFNDEF MSWINDOWS}name '_Label_SetHeight'{$ENDIF},
  Label_GetCursor {$IFNDEF MSWINDOWS}name '_Label_GetCursor'{$ENDIF},
  Label_SetCursor {$IFNDEF MSWINDOWS}name '_Label_SetCursor'{$ENDIF},
  Label_GetHint {$IFNDEF MSWINDOWS}name '_Label_GetHint'{$ENDIF},
  Label_SetHint {$IFNDEF MSWINDOWS}name '_Label_SetHint'{$ENDIF},
  //Label_GetMargins {$IFNDEF MSWINDOWS}name '_Label_GetMargins'{$ENDIF},
  //Label_SetMargins {$IFNDEF MSWINDOWS}name '_Label_SetMargins'{$ENDIF},
  Label_GetComponentCount {$IFNDEF MSWINDOWS}name '_Label_GetComponentCount'{$ENDIF},
  Label_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Label_GetComponentIndex'{$ENDIF},
  Label_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Label_SetComponentIndex'{$ENDIF},
  Label_GetOwner {$IFNDEF MSWINDOWS}name '_Label_GetOwner'{$ENDIF},
  Label_GetName {$IFNDEF MSWINDOWS}name '_Label_GetName'{$ENDIF},
  Label_SetName {$IFNDEF MSWINDOWS}name '_Label_SetName'{$ENDIF},
  Label_GetTag {$IFNDEF MSWINDOWS}name '_Label_GetTag'{$ENDIF},
  Label_SetTag {$IFNDEF MSWINDOWS}name '_Label_SetTag'{$ENDIF},
  Label_GetComponents {$IFNDEF MSWINDOWS}name '_Label_GetComponents'{$ENDIF};

