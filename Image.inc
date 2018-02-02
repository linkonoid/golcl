
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Image_Create(AOwner: TComponent): TImage; cdecl;
begin
  Result :=  TImage.Create(AOwner);
end;

procedure Image_Free(AObj: TImage); cdecl;
begin
  AObj.Free;
end;

procedure Image_BringToFront(AObj: TImage); cdecl;
begin
  AObj.BringToFront;
end;

function Image_HasParent(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Image_Hide(AObj: TImage); cdecl;
begin
  AObj.Hide;
end;

procedure Image_Invalidate(AObj: TImage); cdecl;
begin
  AObj.Invalidate;
end;

function Image_Perform(AObj: TImage; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Image_Refresh(AObj: TImage); cdecl;
begin
  AObj.Refresh;
end;

procedure Image_Repaint(AObj: TImage); cdecl;
begin
  AObj.Repaint;
end;

procedure Image_SendToBack(AObj: TImage); cdecl;
begin
  AObj.SendToBack;
end;

procedure Image_SetBounds(AObj: TImage; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Image_Show(AObj: TImage); cdecl;
begin
  AObj.Show;
end;

procedure Image_Update(AObj: TImage); cdecl;
begin
  AObj.Update;
end;

function Image_GetTextBuf(AObj: TImage; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function Image_FindComponent(AObj: TImage; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Image_GetNamePath(AObj: TImage): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Image_Assign(AObj: TImage; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Image_ClassName(AObj: TImage): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Image_Equals(AObj: TImage; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Image_GetHashCode(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Image_ToString(AObj: TImage): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Image_GetCanvas(AObj: TImage): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function Image_GetAlign(AObj: TImage): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Image_SetAlign(AObj: TImage; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Image_GetAnchors(AObj: TImage): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Image_SetAnchors(AObj: TImage; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function Image_GetAutoSize(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Image_SetAutoSize(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function Image_GetCenter(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.Center;
end;

procedure Image_SetCenter(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.Center := AValue;
end;

function Image_GetEnabled(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Image_SetEnabled(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

//function Image_GetIncrementalDisplay(AObj: TImage): LongBool; cdecl;
//begin
//  Result :=  AObj.IncrementalDisplay;
//end;
//
//procedure Image_SetIncrementalDisplay(AObj: TImage; AValue: LongBool); cdecl;
//begin
//  AObj.IncrementalDisplay := AValue;
//end;

function Image_GetParentShowHint(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Image_SetParentShowHint(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Image_GetPicture(AObj: TImage): TPicture; cdecl;
begin
  Result :=  AObj.Picture;
end;

procedure Image_SetPicture(AObj: TImage; AValue: TPicture); cdecl;
begin
  AObj.Picture := AValue;
end;

function Image_GetPopupMenu(AObj: TImage): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Image_SetPopupMenu(AObj: TImage; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Image_GetProportional(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.Proportional;
end;

procedure Image_SetProportional(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.Proportional := AValue;
end;

function Image_GetShowHint(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Image_SetShowHint(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Image_GetStretch(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.Stretch;
end;

procedure Image_SetStretch(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.Stretch := AValue;
end;

function Image_GetTransparent(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure Image_SetTransparent(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function Image_GetVisible(AObj: TImage): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Image_SetVisible(AObj: TImage; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

procedure Image_SetOnClick(AObj: TImage; AEventId: NativeUInt); stdcall;
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

procedure Image_SetOnDblClick(AObj: TImage; AEventId: NativeUInt); stdcall;
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

procedure Image_SetOnMouseDown(AObj: TImage; AEventId: NativeUInt); stdcall;
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

procedure Image_SetOnMouseEnter(AObj: TImage; AEventId: NativeUInt); stdcall;
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

procedure Image_SetOnMouseLeave(AObj: TImage; AEventId: NativeUInt); stdcall;
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

procedure Image_SetOnMouseMove(AObj: TImage; AEventId: NativeUInt); stdcall;
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

procedure Image_SetOnMouseUp(AObj: TImage; AEventId: NativeUInt); stdcall;
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

function Image_GetAction(AObj: TImage): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Image_SetAction(AObj: TImage; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function Image_GetBiDiMode(AObj: TImage): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Image_SetBiDiMode(AObj: TImage; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure Image_GetBoundsRect(AObj: TImage; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Image_SetBoundsRect(AObj: TImage; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Image_GetClientHeight(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Image_SetClientHeight(AObj: TImage; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Image_GetClientRect(AObj: TImage; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Image_GetClientWidth(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Image_SetClientWidth(AObj: TImage; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function Image_GetExplicitLeft(AObj: TImage): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function Image_GetExplicitTop(AObj: TImage): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function Image_GetExplicitWidth(AObj: TImage): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function Image_GetExplicitHeight(AObj: TImage): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function Image_GetParent(AObj: TImage): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Image_SetParent(AObj: TImage; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function Image_GetStyleElements(AObj: TImage): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure Image_SetStyleElements(AObj: TImage; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;
//
//function Image_GetAlignWithMargins(AObj: TImage): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure Image_SetAlignWithMargins(AObj: TImage; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function Image_GetLeft(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Image_SetLeft(AObj: TImage; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Image_GetTop(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Image_SetTop(AObj: TImage; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Image_GetWidth(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Image_SetWidth(AObj: TImage; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function Image_GetHeight(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Image_SetHeight(AObj: TImage; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Image_GetCursor(AObj: TImage): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Image_SetCursor(AObj: TImage; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Image_GetHint(AObj: TImage): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Image_SetHint(AObj: TImage; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Image_GetMargins(AObj: TImage): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure Image_SetMargins(AObj: TImage; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Image_GetComponentCount(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Image_GetComponentIndex(AObj: TImage): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Image_SetComponentIndex(AObj: TImage; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Image_GetOwner(AObj: TImage): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Image_GetName(AObj: TImage): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Image_SetName(AObj: TImage; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Image_GetTag(AObj: TImage): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Image_SetTag(AObj: TImage; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Image_GetComponents(AObj: TImage; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Image_Create {$IFNDEF MSWINDOWS}name '_Image_Create'{$ENDIF},
  Image_Free {$IFNDEF MSWINDOWS}name '_Image_Free'{$ENDIF},
  Image_BringToFront {$IFNDEF MSWINDOWS}name '_Image_BringToFront'{$ENDIF},
  Image_HasParent {$IFNDEF MSWINDOWS}name '_Image_HasParent'{$ENDIF},
  Image_Hide {$IFNDEF MSWINDOWS}name '_Image_Hide'{$ENDIF},
  Image_Invalidate {$IFNDEF MSWINDOWS}name '_Image_Invalidate'{$ENDIF},
  Image_Perform {$IFNDEF MSWINDOWS}name '_Image_Perform'{$ENDIF},
  Image_Refresh {$IFNDEF MSWINDOWS}name '_Image_Refresh'{$ENDIF},
  Image_Repaint {$IFNDEF MSWINDOWS}name '_Image_Repaint'{$ENDIF},
  Image_SendToBack {$IFNDEF MSWINDOWS}name '_Image_SendToBack'{$ENDIF},
  Image_SetBounds {$IFNDEF MSWINDOWS}name '_Image_SetBounds'{$ENDIF},
  Image_Show {$IFNDEF MSWINDOWS}name '_Image_Show'{$ENDIF},
  Image_Update {$IFNDEF MSWINDOWS}name '_Image_Update'{$ENDIF},
  Image_GetTextBuf {$IFNDEF MSWINDOWS}name '_Image_GetTextBuf'{$ENDIF},
  Image_FindComponent {$IFNDEF MSWINDOWS}name '_Image_FindComponent'{$ENDIF},
  Image_GetNamePath {$IFNDEF MSWINDOWS}name '_Image_GetNamePath'{$ENDIF},
  Image_Assign {$IFNDEF MSWINDOWS}name '_Image_Assign'{$ENDIF},
  Image_ClassName {$IFNDEF MSWINDOWS}name '_Image_ClassName'{$ENDIF},
  Image_Equals {$IFNDEF MSWINDOWS}name '_Image_Equals'{$ENDIF},
  Image_GetHashCode {$IFNDEF MSWINDOWS}name '_Image_GetHashCode'{$ENDIF},
  Image_ToString {$IFNDEF MSWINDOWS}name '_Image_ToString'{$ENDIF},
  Image_GetCanvas {$IFNDEF MSWINDOWS}name '_Image_GetCanvas'{$ENDIF},
  Image_GetAlign {$IFNDEF MSWINDOWS}name '_Image_GetAlign'{$ENDIF},
  Image_SetAlign {$IFNDEF MSWINDOWS}name '_Image_SetAlign'{$ENDIF},
  Image_GetAnchors {$IFNDEF MSWINDOWS}name '_Image_GetAnchors'{$ENDIF},
  Image_SetAnchors {$IFNDEF MSWINDOWS}name '_Image_SetAnchors'{$ENDIF},
  Image_GetAutoSize {$IFNDEF MSWINDOWS}name '_Image_GetAutoSize'{$ENDIF},
  Image_SetAutoSize {$IFNDEF MSWINDOWS}name '_Image_SetAutoSize'{$ENDIF},
  Image_GetCenter {$IFNDEF MSWINDOWS}name '_Image_GetCenter'{$ENDIF},
  Image_SetCenter {$IFNDEF MSWINDOWS}name '_Image_SetCenter'{$ENDIF},
  Image_GetEnabled {$IFNDEF MSWINDOWS}name '_Image_GetEnabled'{$ENDIF},
  Image_SetEnabled {$IFNDEF MSWINDOWS}name '_Image_SetEnabled'{$ENDIF},
  //Image_GetIncrementalDisplay {$IFNDEF MSWINDOWS}name '_Image_GetIncrementalDisplay'{$ENDIF},
  //Image_SetIncrementalDisplay {$IFNDEF MSWINDOWS}name '_Image_SetIncrementalDisplay'{$ENDIF},
  Image_GetParentShowHint {$IFNDEF MSWINDOWS}name '_Image_GetParentShowHint'{$ENDIF},
  Image_SetParentShowHint {$IFNDEF MSWINDOWS}name '_Image_SetParentShowHint'{$ENDIF},
  Image_GetPicture {$IFNDEF MSWINDOWS}name '_Image_GetPicture'{$ENDIF},
  Image_SetPicture {$IFNDEF MSWINDOWS}name '_Image_SetPicture'{$ENDIF},
  Image_GetPopupMenu {$IFNDEF MSWINDOWS}name '_Image_GetPopupMenu'{$ENDIF},
  Image_SetPopupMenu {$IFNDEF MSWINDOWS}name '_Image_SetPopupMenu'{$ENDIF},
  Image_GetProportional {$IFNDEF MSWINDOWS}name '_Image_GetProportional'{$ENDIF},
  Image_SetProportional {$IFNDEF MSWINDOWS}name '_Image_SetProportional'{$ENDIF},
  Image_GetShowHint {$IFNDEF MSWINDOWS}name '_Image_GetShowHint'{$ENDIF},
  Image_SetShowHint {$IFNDEF MSWINDOWS}name '_Image_SetShowHint'{$ENDIF},
  Image_GetStretch {$IFNDEF MSWINDOWS}name '_Image_GetStretch'{$ENDIF},
  Image_SetStretch {$IFNDEF MSWINDOWS}name '_Image_SetStretch'{$ENDIF},
  Image_GetTransparent {$IFNDEF MSWINDOWS}name '_Image_GetTransparent'{$ENDIF},
  Image_SetTransparent {$IFNDEF MSWINDOWS}name '_Image_SetTransparent'{$ENDIF},
  Image_GetVisible {$IFNDEF MSWINDOWS}name '_Image_GetVisible'{$ENDIF},
  Image_SetVisible {$IFNDEF MSWINDOWS}name '_Image_SetVisible'{$ENDIF},
  Image_SetOnClick {$IFNDEF MSWINDOWS}name '_Image_SetOnClick'{$ENDIF},
  Image_SetOnDblClick {$IFNDEF MSWINDOWS}name '_Image_SetOnDblClick'{$ENDIF},
  Image_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_Image_SetOnMouseDown'{$ENDIF},
  Image_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_Image_SetOnMouseEnter'{$ENDIF},
  Image_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_Image_SetOnMouseLeave'{$ENDIF},
  Image_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_Image_SetOnMouseMove'{$ENDIF},
  Image_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_Image_SetOnMouseUp'{$ENDIF},
  Image_GetAction {$IFNDEF MSWINDOWS}name '_Image_GetAction'{$ENDIF},
  Image_SetAction {$IFNDEF MSWINDOWS}name '_Image_SetAction'{$ENDIF},
  Image_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Image_GetBiDiMode'{$ENDIF},
  Image_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Image_SetBiDiMode'{$ENDIF},
  Image_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Image_GetBoundsRect'{$ENDIF},
  Image_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Image_SetBoundsRect'{$ENDIF},
  Image_GetClientHeight {$IFNDEF MSWINDOWS}name '_Image_GetClientHeight'{$ENDIF},
  Image_SetClientHeight {$IFNDEF MSWINDOWS}name '_Image_SetClientHeight'{$ENDIF},
  Image_GetClientRect {$IFNDEF MSWINDOWS}name '_Image_GetClientRect'{$ENDIF},
  Image_GetClientWidth {$IFNDEF MSWINDOWS}name '_Image_GetClientWidth'{$ENDIF},
  Image_SetClientWidth {$IFNDEF MSWINDOWS}name '_Image_SetClientWidth'{$ENDIF},
  //Image_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Image_GetExplicitLeft'{$ENDIF},
  //Image_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Image_GetExplicitTop'{$ENDIF},
  //Image_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Image_GetExplicitWidth'{$ENDIF},
  //Image_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Image_GetExplicitHeight'{$ENDIF},
  Image_GetParent {$IFNDEF MSWINDOWS}name '_Image_GetParent'{$ENDIF},
  Image_SetParent {$IFNDEF MSWINDOWS}name '_Image_SetParent'{$ENDIF},
  //Image_GetStyleElements {$IFNDEF MSWINDOWS}name '_Image_GetStyleElements'{$ENDIF},
  //Image_SetStyleElements {$IFNDEF MSWINDOWS}name '_Image_SetStyleElements'{$ENDIF},
  //Image_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Image_GetAlignWithMargins'{$ENDIF},
  //Image_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Image_SetAlignWithMargins'{$ENDIF},
  Image_GetLeft {$IFNDEF MSWINDOWS}name '_Image_GetLeft'{$ENDIF},
  Image_SetLeft {$IFNDEF MSWINDOWS}name '_Image_SetLeft'{$ENDIF},
  Image_GetTop {$IFNDEF MSWINDOWS}name '_Image_GetTop'{$ENDIF},
  Image_SetTop {$IFNDEF MSWINDOWS}name '_Image_SetTop'{$ENDIF},
  Image_GetWidth {$IFNDEF MSWINDOWS}name '_Image_GetWidth'{$ENDIF},
  Image_SetWidth {$IFNDEF MSWINDOWS}name '_Image_SetWidth'{$ENDIF},
  Image_GetHeight {$IFNDEF MSWINDOWS}name '_Image_GetHeight'{$ENDIF},
  Image_SetHeight {$IFNDEF MSWINDOWS}name '_Image_SetHeight'{$ENDIF},
  Image_GetCursor {$IFNDEF MSWINDOWS}name '_Image_GetCursor'{$ENDIF},
  Image_SetCursor {$IFNDEF MSWINDOWS}name '_Image_SetCursor'{$ENDIF},
  Image_GetHint {$IFNDEF MSWINDOWS}name '_Image_GetHint'{$ENDIF},
  Image_SetHint {$IFNDEF MSWINDOWS}name '_Image_SetHint'{$ENDIF},
  //Image_GetMargins {$IFNDEF MSWINDOWS}name '_Image_GetMargins'{$ENDIF},
  //Image_SetMargins {$IFNDEF MSWINDOWS}name '_Image_SetMargins'{$ENDIF},
  Image_GetComponentCount {$IFNDEF MSWINDOWS}name '_Image_GetComponentCount'{$ENDIF},
  Image_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Image_GetComponentIndex'{$ENDIF},
  Image_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Image_SetComponentIndex'{$ENDIF},
  Image_GetOwner {$IFNDEF MSWINDOWS}name '_Image_GetOwner'{$ENDIF},
  Image_GetName {$IFNDEF MSWINDOWS}name '_Image_GetName'{$ENDIF},
  Image_SetName {$IFNDEF MSWINDOWS}name '_Image_SetName'{$ENDIF},
  Image_GetTag {$IFNDEF MSWINDOWS}name '_Image_GetTag'{$ENDIF},
  Image_SetTag {$IFNDEF MSWINDOWS}name '_Image_SetTag'{$ENDIF},
  Image_GetComponents {$IFNDEF MSWINDOWS}name '_Image_GetComponents'{$ENDIF};

