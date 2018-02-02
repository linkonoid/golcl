
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function PaintBox_Create(AOwner: TComponent): TPaintBox; cdecl;
begin
  Result :=  TPaintBox.Create(AOwner);
end;

procedure PaintBox_Free(AObj: TPaintBox); cdecl;
begin
  AObj.Free;
end;

procedure PaintBox_BringToFront(AObj: TPaintBox); cdecl;
begin
  AObj.BringToFront;
end;

function PaintBox_HasParent(AObj: TPaintBox): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure PaintBox_Hide(AObj: TPaintBox); cdecl;
begin
  AObj.Hide;
end;

procedure PaintBox_Invalidate(AObj: TPaintBox); cdecl;
begin
  AObj.Invalidate;
end;

function PaintBox_Perform(AObj: TPaintBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure PaintBox_Refresh(AObj: TPaintBox); cdecl;
begin
  AObj.Refresh;
end;

procedure PaintBox_Repaint(AObj: TPaintBox); cdecl;
begin
  AObj.Repaint;
end;

procedure PaintBox_SendToBack(AObj: TPaintBox); cdecl;
begin
  AObj.SendToBack;
end;

procedure PaintBox_SetBounds(AObj: TPaintBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure PaintBox_Show(AObj: TPaintBox); cdecl;
begin
  AObj.Show;
end;

procedure PaintBox_Update(AObj: TPaintBox); cdecl;
begin
  AObj.Update;
end;

function PaintBox_GetTextBuf(AObj: TPaintBox; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function PaintBox_FindComponent(AObj: TPaintBox; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function PaintBox_GetNamePath(AObj: TPaintBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure PaintBox_Assign(AObj: TPaintBox; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function PaintBox_ClassName(AObj: TPaintBox): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function PaintBox_Equals(AObj: TPaintBox; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function PaintBox_GetHashCode(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function PaintBox_ToString(AObj: TPaintBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function PaintBox_GetCanvas(AObj: TPaintBox): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function PaintBox_GetAlign(AObj: TPaintBox): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure PaintBox_SetAlign(AObj: TPaintBox; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function PaintBox_GetAnchors(AObj: TPaintBox): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure PaintBox_SetAnchors(AObj: TPaintBox; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function PaintBox_GetColor(AObj: TPaintBox): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure PaintBox_SetColor(AObj: TPaintBox; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function PaintBox_GetEnabled(AObj: TPaintBox): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure PaintBox_SetEnabled(AObj: TPaintBox; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function PaintBox_GetFont(AObj: TPaintBox): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure PaintBox_SetFont(AObj: TPaintBox; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function PaintBox_GetParentColor(AObj: TPaintBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure PaintBox_SetParentColor(AObj: TPaintBox; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function PaintBox_GetParentFont(AObj: TPaintBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure PaintBox_SetParentFont(AObj: TPaintBox; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function PaintBox_GetParentShowHint(AObj: TPaintBox): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure PaintBox_SetParentShowHint(AObj: TPaintBox; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function PaintBox_GetPopupMenu(AObj: TPaintBox): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure PaintBox_SetPopupMenu(AObj: TPaintBox; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function PaintBox_GetShowHint(AObj: TPaintBox): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure PaintBox_SetShowHint(AObj: TPaintBox; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function PaintBox_GetVisible(AObj: TPaintBox): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure PaintBox_SetVisible(AObj: TPaintBox; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

procedure PaintBox_SetOnClick(AObj: TPaintBox; AEventId: NativeUInt); stdcall;
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

procedure PaintBox_SetOnDblClick(AObj: TPaintBox; AEventId: NativeUInt); stdcall;
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

procedure PaintBox_SetOnMouseDown(AObj: TPaintBox; AEventId: NativeUInt); stdcall;
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

procedure PaintBox_SetOnMouseEnter(AObj: TPaintBox; AEventId: NativeUInt); stdcall;
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

procedure PaintBox_SetOnMouseLeave(AObj: TPaintBox; AEventId: NativeUInt); stdcall;
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

procedure PaintBox_SetOnMouseMove(AObj: TPaintBox; AEventId: NativeUInt); stdcall;
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

procedure PaintBox_SetOnMouseUp(AObj: TPaintBox; AEventId: NativeUInt); stdcall;
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

procedure PaintBox_SetOnPaint(AObj: TPaintBox; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnPaint := nil;
    TEventClass.Remove(AObj, gePaint);
    Exit;
  end;
  AObj.OnPaint := TEventClass.OnPaint;
  TEventClass.Add(AObj, gePaint, AEventId);
end;

function PaintBox_GetAction(AObj: TPaintBox): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure PaintBox_SetAction(AObj: TPaintBox; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function PaintBox_GetBiDiMode(AObj: TPaintBox): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure PaintBox_SetBiDiMode(AObj: TPaintBox; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure PaintBox_GetBoundsRect(AObj: TPaintBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure PaintBox_SetBoundsRect(AObj: TPaintBox; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function PaintBox_GetClientHeight(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure PaintBox_SetClientHeight(AObj: TPaintBox; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure PaintBox_GetClientRect(AObj: TPaintBox; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function PaintBox_GetClientWidth(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure PaintBox_SetClientWidth(AObj: TPaintBox; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function PaintBox_GetExplicitLeft(AObj: TPaintBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function PaintBox_GetExplicitTop(AObj: TPaintBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function PaintBox_GetExplicitWidth(AObj: TPaintBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function PaintBox_GetExplicitHeight(AObj: TPaintBox): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function PaintBox_GetParent(AObj: TPaintBox): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure PaintBox_SetParent(AObj: TPaintBox; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function PaintBox_GetStyleElements(AObj: TPaintBox): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure PaintBox_SetStyleElements(AObj: TPaintBox; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;
//
//function PaintBox_GetAlignWithMargins(AObj: TPaintBox): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure PaintBox_SetAlignWithMargins(AObj: TPaintBox; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function PaintBox_GetLeft(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure PaintBox_SetLeft(AObj: TPaintBox; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function PaintBox_GetTop(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure PaintBox_SetTop(AObj: TPaintBox; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function PaintBox_GetWidth(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure PaintBox_SetWidth(AObj: TPaintBox; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function PaintBox_GetHeight(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure PaintBox_SetHeight(AObj: TPaintBox; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function PaintBox_GetCursor(AObj: TPaintBox): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure PaintBox_SetCursor(AObj: TPaintBox; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function PaintBox_GetHint(AObj: TPaintBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure PaintBox_SetHint(AObj: TPaintBox; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function PaintBox_GetMargins(AObj: TPaintBox): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure PaintBox_SetMargins(AObj: TPaintBox; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function PaintBox_GetComponentCount(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function PaintBox_GetComponentIndex(AObj: TPaintBox): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure PaintBox_SetComponentIndex(AObj: TPaintBox; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function PaintBox_GetOwner(AObj: TPaintBox): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function PaintBox_GetName(AObj: TPaintBox): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure PaintBox_SetName(AObj: TPaintBox; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function PaintBox_GetTag(AObj: TPaintBox): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure PaintBox_SetTag(AObj: TPaintBox; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function PaintBox_GetComponents(AObj: TPaintBox; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  PaintBox_Create {$IFNDEF MSWINDOWS}name '_PaintBox_Create'{$ENDIF},
  PaintBox_Free {$IFNDEF MSWINDOWS}name '_PaintBox_Free'{$ENDIF},
  PaintBox_BringToFront {$IFNDEF MSWINDOWS}name '_PaintBox_BringToFront'{$ENDIF},
  PaintBox_HasParent {$IFNDEF MSWINDOWS}name '_PaintBox_HasParent'{$ENDIF},
  PaintBox_Hide {$IFNDEF MSWINDOWS}name '_PaintBox_Hide'{$ENDIF},
  PaintBox_Invalidate {$IFNDEF MSWINDOWS}name '_PaintBox_Invalidate'{$ENDIF},
  PaintBox_Perform {$IFNDEF MSWINDOWS}name '_PaintBox_Perform'{$ENDIF},
  PaintBox_Refresh {$IFNDEF MSWINDOWS}name '_PaintBox_Refresh'{$ENDIF},
  PaintBox_Repaint {$IFNDEF MSWINDOWS}name '_PaintBox_Repaint'{$ENDIF},
  PaintBox_SendToBack {$IFNDEF MSWINDOWS}name '_PaintBox_SendToBack'{$ENDIF},
  PaintBox_SetBounds {$IFNDEF MSWINDOWS}name '_PaintBox_SetBounds'{$ENDIF},
  PaintBox_Show {$IFNDEF MSWINDOWS}name '_PaintBox_Show'{$ENDIF},
  PaintBox_Update {$IFNDEF MSWINDOWS}name '_PaintBox_Update'{$ENDIF},
  PaintBox_GetTextBuf {$IFNDEF MSWINDOWS}name '_PaintBox_GetTextBuf'{$ENDIF},
  PaintBox_FindComponent {$IFNDEF MSWINDOWS}name '_PaintBox_FindComponent'{$ENDIF},
  PaintBox_GetNamePath {$IFNDEF MSWINDOWS}name '_PaintBox_GetNamePath'{$ENDIF},
  PaintBox_Assign {$IFNDEF MSWINDOWS}name '_PaintBox_Assign'{$ENDIF},
  PaintBox_ClassName {$IFNDEF MSWINDOWS}name '_PaintBox_ClassName'{$ENDIF},
  PaintBox_Equals {$IFNDEF MSWINDOWS}name '_PaintBox_Equals'{$ENDIF},
  PaintBox_GetHashCode {$IFNDEF MSWINDOWS}name '_PaintBox_GetHashCode'{$ENDIF},
  PaintBox_ToString {$IFNDEF MSWINDOWS}name '_PaintBox_ToString'{$ENDIF},
  PaintBox_GetCanvas {$IFNDEF MSWINDOWS}name '_PaintBox_GetCanvas'{$ENDIF},
  PaintBox_GetAlign {$IFNDEF MSWINDOWS}name '_PaintBox_GetAlign'{$ENDIF},
  PaintBox_SetAlign {$IFNDEF MSWINDOWS}name '_PaintBox_SetAlign'{$ENDIF},
  PaintBox_GetAnchors {$IFNDEF MSWINDOWS}name '_PaintBox_GetAnchors'{$ENDIF},
  PaintBox_SetAnchors {$IFNDEF MSWINDOWS}name '_PaintBox_SetAnchors'{$ENDIF},
  PaintBox_GetColor {$IFNDEF MSWINDOWS}name '_PaintBox_GetColor'{$ENDIF},
  PaintBox_SetColor {$IFNDEF MSWINDOWS}name '_PaintBox_SetColor'{$ENDIF},
  PaintBox_GetEnabled {$IFNDEF MSWINDOWS}name '_PaintBox_GetEnabled'{$ENDIF},
  PaintBox_SetEnabled {$IFNDEF MSWINDOWS}name '_PaintBox_SetEnabled'{$ENDIF},
  PaintBox_GetFont {$IFNDEF MSWINDOWS}name '_PaintBox_GetFont'{$ENDIF},
  PaintBox_SetFont {$IFNDEF MSWINDOWS}name '_PaintBox_SetFont'{$ENDIF},
  PaintBox_GetParentColor {$IFNDEF MSWINDOWS}name '_PaintBox_GetParentColor'{$ENDIF},
  PaintBox_SetParentColor {$IFNDEF MSWINDOWS}name '_PaintBox_SetParentColor'{$ENDIF},
  PaintBox_GetParentFont {$IFNDEF MSWINDOWS}name '_PaintBox_GetParentFont'{$ENDIF},
  PaintBox_SetParentFont {$IFNDEF MSWINDOWS}name '_PaintBox_SetParentFont'{$ENDIF},
  PaintBox_GetParentShowHint {$IFNDEF MSWINDOWS}name '_PaintBox_GetParentShowHint'{$ENDIF},
  PaintBox_SetParentShowHint {$IFNDEF MSWINDOWS}name '_PaintBox_SetParentShowHint'{$ENDIF},
  PaintBox_GetPopupMenu {$IFNDEF MSWINDOWS}name '_PaintBox_GetPopupMenu'{$ENDIF},
  PaintBox_SetPopupMenu {$IFNDEF MSWINDOWS}name '_PaintBox_SetPopupMenu'{$ENDIF},
  PaintBox_GetShowHint {$IFNDEF MSWINDOWS}name '_PaintBox_GetShowHint'{$ENDIF},
  PaintBox_SetShowHint {$IFNDEF MSWINDOWS}name '_PaintBox_SetShowHint'{$ENDIF},
  PaintBox_GetVisible {$IFNDEF MSWINDOWS}name '_PaintBox_GetVisible'{$ENDIF},
  PaintBox_SetVisible {$IFNDEF MSWINDOWS}name '_PaintBox_SetVisible'{$ENDIF},
  PaintBox_SetOnClick {$IFNDEF MSWINDOWS}name '_PaintBox_SetOnClick'{$ENDIF},
  PaintBox_SetOnDblClick {$IFNDEF MSWINDOWS}name '_PaintBox_SetOnDblClick'{$ENDIF},
  PaintBox_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_PaintBox_SetOnMouseDown'{$ENDIF},
  PaintBox_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_PaintBox_SetOnMouseEnter'{$ENDIF},
  PaintBox_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_PaintBox_SetOnMouseLeave'{$ENDIF},
  PaintBox_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_PaintBox_SetOnMouseMove'{$ENDIF},
  PaintBox_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_PaintBox_SetOnMouseUp'{$ENDIF},
  PaintBox_SetOnPaint {$IFNDEF MSWINDOWS}name '_PaintBox_SetOnPaint'{$ENDIF},
  PaintBox_GetAction {$IFNDEF MSWINDOWS}name '_PaintBox_GetAction'{$ENDIF},
  PaintBox_SetAction {$IFNDEF MSWINDOWS}name '_PaintBox_SetAction'{$ENDIF},
  PaintBox_GetBiDiMode {$IFNDEF MSWINDOWS}name '_PaintBox_GetBiDiMode'{$ENDIF},
  PaintBox_SetBiDiMode {$IFNDEF MSWINDOWS}name '_PaintBox_SetBiDiMode'{$ENDIF},
  PaintBox_GetBoundsRect {$IFNDEF MSWINDOWS}name '_PaintBox_GetBoundsRect'{$ENDIF},
  PaintBox_SetBoundsRect {$IFNDEF MSWINDOWS}name '_PaintBox_SetBoundsRect'{$ENDIF},
  PaintBox_GetClientHeight {$IFNDEF MSWINDOWS}name '_PaintBox_GetClientHeight'{$ENDIF},
  PaintBox_SetClientHeight {$IFNDEF MSWINDOWS}name '_PaintBox_SetClientHeight'{$ENDIF},
  PaintBox_GetClientRect {$IFNDEF MSWINDOWS}name '_PaintBox_GetClientRect'{$ENDIF},
  PaintBox_GetClientWidth {$IFNDEF MSWINDOWS}name '_PaintBox_GetClientWidth'{$ENDIF},
  PaintBox_SetClientWidth {$IFNDEF MSWINDOWS}name '_PaintBox_SetClientWidth'{$ENDIF},
  //PaintBox_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_PaintBox_GetExplicitLeft'{$ENDIF},
  //PaintBox_GetExplicitTop {$IFNDEF MSWINDOWS}name '_PaintBox_GetExplicitTop'{$ENDIF},
  //PaintBox_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_PaintBox_GetExplicitWidth'{$ENDIF},
  //PaintBox_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_PaintBox_GetExplicitHeight'{$ENDIF},
  PaintBox_GetParent {$IFNDEF MSWINDOWS}name '_PaintBox_GetParent'{$ENDIF},
  PaintBox_SetParent {$IFNDEF MSWINDOWS}name '_PaintBox_SetParent'{$ENDIF},
  //PaintBox_GetStyleElements {$IFNDEF MSWINDOWS}name '_PaintBox_GetStyleElements'{$ENDIF},
  //PaintBox_SetStyleElements {$IFNDEF MSWINDOWS}name '_PaintBox_SetStyleElements'{$ENDIF},
  //PaintBox_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_PaintBox_GetAlignWithMargins'{$ENDIF},
  //PaintBox_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_PaintBox_SetAlignWithMargins'{$ENDIF},
  PaintBox_GetLeft {$IFNDEF MSWINDOWS}name '_PaintBox_GetLeft'{$ENDIF},
  PaintBox_SetLeft {$IFNDEF MSWINDOWS}name '_PaintBox_SetLeft'{$ENDIF},
  PaintBox_GetTop {$IFNDEF MSWINDOWS}name '_PaintBox_GetTop'{$ENDIF},
  PaintBox_SetTop {$IFNDEF MSWINDOWS}name '_PaintBox_SetTop'{$ENDIF},
  PaintBox_GetWidth {$IFNDEF MSWINDOWS}name '_PaintBox_GetWidth'{$ENDIF},
  PaintBox_SetWidth {$IFNDEF MSWINDOWS}name '_PaintBox_SetWidth'{$ENDIF},
  PaintBox_GetHeight {$IFNDEF MSWINDOWS}name '_PaintBox_GetHeight'{$ENDIF},
  PaintBox_SetHeight {$IFNDEF MSWINDOWS}name '_PaintBox_SetHeight'{$ENDIF},
  PaintBox_GetCursor {$IFNDEF MSWINDOWS}name '_PaintBox_GetCursor'{$ENDIF},
  PaintBox_SetCursor {$IFNDEF MSWINDOWS}name '_PaintBox_SetCursor'{$ENDIF},
  PaintBox_GetHint {$IFNDEF MSWINDOWS}name '_PaintBox_GetHint'{$ENDIF},
  PaintBox_SetHint {$IFNDEF MSWINDOWS}name '_PaintBox_SetHint'{$ENDIF},
  //PaintBox_GetMargins {$IFNDEF MSWINDOWS}name '_PaintBox_GetMargins'{$ENDIF},
  //PaintBox_SetMargins {$IFNDEF MSWINDOWS}name '_PaintBox_SetMargins'{$ENDIF},
  PaintBox_GetComponentCount {$IFNDEF MSWINDOWS}name '_PaintBox_GetComponentCount'{$ENDIF},
  PaintBox_GetComponentIndex {$IFNDEF MSWINDOWS}name '_PaintBox_GetComponentIndex'{$ENDIF},
  PaintBox_SetComponentIndex {$IFNDEF MSWINDOWS}name '_PaintBox_SetComponentIndex'{$ENDIF},
  PaintBox_GetOwner {$IFNDEF MSWINDOWS}name '_PaintBox_GetOwner'{$ENDIF},
  PaintBox_GetName {$IFNDEF MSWINDOWS}name '_PaintBox_GetName'{$ENDIF},
  PaintBox_SetName {$IFNDEF MSWINDOWS}name '_PaintBox_SetName'{$ENDIF},
  PaintBox_GetTag {$IFNDEF MSWINDOWS}name '_PaintBox_GetTag'{$ENDIF},
  PaintBox_SetTag {$IFNDEF MSWINDOWS}name '_PaintBox_SetTag'{$ENDIF},
  PaintBox_GetComponents {$IFNDEF MSWINDOWS}name '_PaintBox_GetComponents'{$ENDIF};

