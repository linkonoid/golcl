
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ToolButton_Create(AOwner: TComponent): TToolButton; cdecl;
begin
  Result :=  TToolButton.Create(AOwner);
end;

procedure ToolButton_Free(AObj: TToolButton); cdecl;
begin
  AObj.Free;
end;

function ToolButton_CheckMenuDropdown(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.CheckMenuDropdown;
end;

procedure ToolButton_Click(AObj: TToolButton); cdecl;
begin
  AObj.Click;
end;

procedure ToolButton_SetBounds(AObj: TToolButton; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ToolButton_BringToFront(AObj: TToolButton); cdecl;
begin
  AObj.BringToFront;
end;

function ToolButton_HasParent(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ToolButton_Hide(AObj: TToolButton); cdecl;
begin
  AObj.Hide;
end;

procedure ToolButton_Invalidate(AObj: TToolButton); cdecl;
begin
  AObj.Invalidate;
end;

function ToolButton_Perform(AObj: TToolButton; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ToolButton_Refresh(AObj: TToolButton); cdecl;
begin
  AObj.Refresh;
end;

procedure ToolButton_Repaint(AObj: TToolButton); cdecl;
begin
  AObj.Repaint;
end;

procedure ToolButton_SendToBack(AObj: TToolButton); cdecl;
begin
  AObj.SendToBack;
end;

procedure ToolButton_Show(AObj: TToolButton); cdecl;
begin
  AObj.Show;
end;

procedure ToolButton_Update(AObj: TToolButton); cdecl;
begin
  AObj.Update;
end;

function ToolButton_GetTextBuf(AObj: TToolButton; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function ToolButton_FindComponent(AObj: TToolButton; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ToolButton_GetNamePath(AObj: TToolButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure ToolButton_Assign(AObj: TToolButton; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ToolButton_ClassName(AObj: TToolButton): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ToolButton_Equals(AObj: TToolButton; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ToolButton_GetHashCode(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ToolButton_ToString(AObj: TToolButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ToolButton_GetIndex(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.Index;
end;

function ToolButton_GetAction(AObj: TToolButton): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure ToolButton_SetAction(AObj: TToolButton; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function ToolButton_GetAllowAllUp(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.AllowAllUp;
end;

procedure ToolButton_SetAllowAllUp(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.AllowAllUp := AValue;
end;

function ToolButton_GetAutoSize(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure ToolButton_SetAutoSize(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function ToolButton_GetCaption(AObj: TToolButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure ToolButton_SetCaption(AObj: TToolButton; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function ToolButton_GetDown(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.Down;
end;

procedure ToolButton_SetDown(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.Down := AValue;
end;

function ToolButton_GetDropdownMenu(AObj: TToolButton): TPopupMenu; cdecl;
begin
  Result :=  AObj.DropdownMenu;
end;

procedure ToolButton_SetDropdownMenu(AObj: TToolButton; AValue: TPopupMenu); cdecl;
begin
  AObj.DropdownMenu := AValue;
end;

function ToolButton_GetEnabled(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ToolButton_SetEnabled(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

//function ToolButton_GetEnableDropdown(AObj: TToolButton): LongBool; cdecl;
//begin
//  Result :=  AObj.EnableDropdown;
//end;
//
//procedure ToolButton_SetEnableDropdown(AObj: TToolButton; AValue: LongBool); cdecl;
//begin
//  AObj.EnableDropdown := AValue;
//end;

function ToolButton_GetGrouped(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.Grouped;
end;

procedure ToolButton_SetGrouped(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.Grouped := AValue;
end;

function ToolButton_GetHeight(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ToolButton_SetHeight(AObj: TToolButton; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

//function ToolButton_GetImageIndex(AObj: TToolButton): TImageIndex; cdecl;
//begin
//  Result :=  AObj.ImageIndex;
//end;
//
//procedure ToolButton_SetImageIndex(AObj: TToolButton; AValue: TImageIndex); cdecl;
//begin
//  AObj.ImageIndex := AValue;
//end;

function ToolButton_GetIndeterminate(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.Indeterminate;
end;

procedure ToolButton_SetIndeterminate(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.Indeterminate := AValue;
end;

function ToolButton_GetMarked(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.Marked;
end;

procedure ToolButton_SetMarked(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.Marked := AValue;
end;

function ToolButton_GetParentShowHint(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ToolButton_SetParentShowHint(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ToolButton_GetPopupMenu(AObj: TToolButton): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ToolButton_SetPopupMenu(AObj: TToolButton; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ToolButton_GetWrap(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.Wrap;
end;

procedure ToolButton_SetWrap(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.Wrap := AValue;
end;

function ToolButton_GetShowHint(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ToolButton_SetShowHint(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function ToolButton_GetStyle(AObj: TToolButton): TToolButtonStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure ToolButton_SetStyle(AObj: TToolButton; AValue: TToolButtonStyle); cdecl;
begin
  AObj.Style := AValue;
end;

function ToolButton_GetVisible(AObj: TToolButton): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ToolButton_SetVisible(AObj: TToolButton; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function ToolButton_GetWidth(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ToolButton_SetWidth(AObj: TToolButton; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure ToolButton_SetOnClick(AObj: TToolButton; AEventId: NativeUInt); stdcall;
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

procedure ToolButton_SetOnMouseDown(AObj: TToolButton; AEventId: NativeUInt); stdcall;
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

procedure ToolButton_SetOnMouseEnter(AObj: TToolButton; AEventId: NativeUInt); stdcall;
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

procedure ToolButton_SetOnMouseLeave(AObj: TToolButton; AEventId: NativeUInt); stdcall;
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

procedure ToolButton_SetOnMouseMove(AObj: TToolButton; AEventId: NativeUInt); stdcall;
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

procedure ToolButton_SetOnMouseUp(AObj: TToolButton; AEventId: NativeUInt); stdcall;
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

function ToolButton_GetAlign(AObj: TToolButton): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure ToolButton_SetAlign(AObj: TToolButton; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function ToolButton_GetAnchors(AObj: TToolButton): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ToolButton_SetAnchors(AObj: TToolButton; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function ToolButton_GetBiDiMode(AObj: TToolButton): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ToolButton_SetBiDiMode(AObj: TToolButton; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure ToolButton_GetBoundsRect(AObj: TToolButton; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ToolButton_SetBoundsRect(AObj: TToolButton; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ToolButton_GetClientHeight(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ToolButton_SetClientHeight(AObj: TToolButton; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ToolButton_GetClientRect(AObj: TToolButton; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ToolButton_GetClientWidth(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ToolButton_SetClientWidth(AObj: TToolButton; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function ToolButton_GetExplicitLeft(AObj: TToolButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function ToolButton_GetExplicitTop(AObj: TToolButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function ToolButton_GetExplicitWidth(AObj: TToolButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function ToolButton_GetExplicitHeight(AObj: TToolButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function ToolButton_GetParent(AObj: TToolButton): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ToolButton_SetParent(AObj: TToolButton; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function ToolButton_GetStyleElements(AObj: TToolButton): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure ToolButton_SetStyleElements(AObj: TToolButton; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;
//
//function ToolButton_GetAlignWithMargins(AObj: TToolButton): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure ToolButton_SetAlignWithMargins(AObj: TToolButton; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function ToolButton_GetLeft(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ToolButton_SetLeft(AObj: TToolButton; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ToolButton_GetTop(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ToolButton_SetTop(AObj: TToolButton; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ToolButton_GetCursor(AObj: TToolButton): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ToolButton_SetCursor(AObj: TToolButton; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function ToolButton_GetHint(AObj: TToolButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure ToolButton_SetHint(AObj: TToolButton; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function ToolButton_GetMargins(AObj: TToolButton): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure ToolButton_SetMargins(AObj: TToolButton; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function ToolButton_GetComponentCount(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ToolButton_GetComponentIndex(AObj: TToolButton): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ToolButton_SetComponentIndex(AObj: TToolButton; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ToolButton_GetOwner(AObj: TToolButton): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ToolButton_GetName(AObj: TToolButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ToolButton_SetName(AObj: TToolButton; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ToolButton_GetTag(AObj: TToolButton): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ToolButton_SetTag(AObj: TToolButton; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ToolButton_GetComponents(AObj: TToolButton; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ToolButton_Create {$IFNDEF MSWINDOWS}name '_ToolButton_Create'{$ENDIF},
  ToolButton_Free {$IFNDEF MSWINDOWS}name '_ToolButton_Free'{$ENDIF},
  ToolButton_CheckMenuDropdown {$IFNDEF MSWINDOWS}name '_ToolButton_CheckMenuDropdown'{$ENDIF},
  ToolButton_Click {$IFNDEF MSWINDOWS}name '_ToolButton_Click'{$ENDIF},
  ToolButton_SetBounds {$IFNDEF MSWINDOWS}name '_ToolButton_SetBounds'{$ENDIF},
  ToolButton_BringToFront {$IFNDEF MSWINDOWS}name '_ToolButton_BringToFront'{$ENDIF},
  ToolButton_HasParent {$IFNDEF MSWINDOWS}name '_ToolButton_HasParent'{$ENDIF},
  ToolButton_Hide {$IFNDEF MSWINDOWS}name '_ToolButton_Hide'{$ENDIF},
  ToolButton_Invalidate {$IFNDEF MSWINDOWS}name '_ToolButton_Invalidate'{$ENDIF},
  ToolButton_Perform {$IFNDEF MSWINDOWS}name '_ToolButton_Perform'{$ENDIF},
  ToolButton_Refresh {$IFNDEF MSWINDOWS}name '_ToolButton_Refresh'{$ENDIF},
  ToolButton_Repaint {$IFNDEF MSWINDOWS}name '_ToolButton_Repaint'{$ENDIF},
  ToolButton_SendToBack {$IFNDEF MSWINDOWS}name '_ToolButton_SendToBack'{$ENDIF},
  ToolButton_Show {$IFNDEF MSWINDOWS}name '_ToolButton_Show'{$ENDIF},
  ToolButton_Update {$IFNDEF MSWINDOWS}name '_ToolButton_Update'{$ENDIF},
  ToolButton_GetTextBuf {$IFNDEF MSWINDOWS}name '_ToolButton_GetTextBuf'{$ENDIF},
  ToolButton_FindComponent {$IFNDEF MSWINDOWS}name '_ToolButton_FindComponent'{$ENDIF},
  ToolButton_GetNamePath {$IFNDEF MSWINDOWS}name '_ToolButton_GetNamePath'{$ENDIF},
  ToolButton_Assign {$IFNDEF MSWINDOWS}name '_ToolButton_Assign'{$ENDIF},
  ToolButton_ClassName {$IFNDEF MSWINDOWS}name '_ToolButton_ClassName'{$ENDIF},
  ToolButton_Equals {$IFNDEF MSWINDOWS}name '_ToolButton_Equals'{$ENDIF},
  ToolButton_GetHashCode {$IFNDEF MSWINDOWS}name '_ToolButton_GetHashCode'{$ENDIF},
  ToolButton_ToString {$IFNDEF MSWINDOWS}name '_ToolButton_ToString'{$ENDIF},
  ToolButton_GetIndex {$IFNDEF MSWINDOWS}name '_ToolButton_GetIndex'{$ENDIF},
  ToolButton_GetAction {$IFNDEF MSWINDOWS}name '_ToolButton_GetAction'{$ENDIF},
  ToolButton_SetAction {$IFNDEF MSWINDOWS}name '_ToolButton_SetAction'{$ENDIF},
  ToolButton_GetAllowAllUp {$IFNDEF MSWINDOWS}name '_ToolButton_GetAllowAllUp'{$ENDIF},
  ToolButton_SetAllowAllUp {$IFNDEF MSWINDOWS}name '_ToolButton_SetAllowAllUp'{$ENDIF},
  ToolButton_GetAutoSize {$IFNDEF MSWINDOWS}name '_ToolButton_GetAutoSize'{$ENDIF},
  ToolButton_SetAutoSize {$IFNDEF MSWINDOWS}name '_ToolButton_SetAutoSize'{$ENDIF},
  ToolButton_GetCaption {$IFNDEF MSWINDOWS}name '_ToolButton_GetCaption'{$ENDIF},
  ToolButton_SetCaption {$IFNDEF MSWINDOWS}name '_ToolButton_SetCaption'{$ENDIF},
  ToolButton_GetDown {$IFNDEF MSWINDOWS}name '_ToolButton_GetDown'{$ENDIF},
  ToolButton_SetDown {$IFNDEF MSWINDOWS}name '_ToolButton_SetDown'{$ENDIF},
  ToolButton_GetDropdownMenu {$IFNDEF MSWINDOWS}name '_ToolButton_GetDropdownMenu'{$ENDIF},
  ToolButton_SetDropdownMenu {$IFNDEF MSWINDOWS}name '_ToolButton_SetDropdownMenu'{$ENDIF},
  ToolButton_GetEnabled {$IFNDEF MSWINDOWS}name '_ToolButton_GetEnabled'{$ENDIF},
  ToolButton_SetEnabled {$IFNDEF MSWINDOWS}name '_ToolButton_SetEnabled'{$ENDIF},
  //ToolButton_GetEnableDropdown {$IFNDEF MSWINDOWS}name '_ToolButton_GetEnableDropdown'{$ENDIF},
  //ToolButton_SetEnableDropdown {$IFNDEF MSWINDOWS}name '_ToolButton_SetEnableDropdown'{$ENDIF},
  ToolButton_GetGrouped {$IFNDEF MSWINDOWS}name '_ToolButton_GetGrouped'{$ENDIF},
  ToolButton_SetGrouped {$IFNDEF MSWINDOWS}name '_ToolButton_SetGrouped'{$ENDIF},
  ToolButton_GetHeight {$IFNDEF MSWINDOWS}name '_ToolButton_GetHeight'{$ENDIF},
  ToolButton_SetHeight {$IFNDEF MSWINDOWS}name '_ToolButton_SetHeight'{$ENDIF},
  //ToolButton_GetImageIndex {$IFNDEF MSWINDOWS}name '_ToolButton_GetImageIndex'{$ENDIF},
  //ToolButton_SetImageIndex {$IFNDEF MSWINDOWS}name '_ToolButton_SetImageIndex'{$ENDIF},
  ToolButton_GetIndeterminate {$IFNDEF MSWINDOWS}name '_ToolButton_GetIndeterminate'{$ENDIF},
  ToolButton_SetIndeterminate {$IFNDEF MSWINDOWS}name '_ToolButton_SetIndeterminate'{$ENDIF},
  ToolButton_GetMarked {$IFNDEF MSWINDOWS}name '_ToolButton_GetMarked'{$ENDIF},
  ToolButton_SetMarked {$IFNDEF MSWINDOWS}name '_ToolButton_SetMarked'{$ENDIF},
  ToolButton_GetParentShowHint {$IFNDEF MSWINDOWS}name '_ToolButton_GetParentShowHint'{$ENDIF},
  ToolButton_SetParentShowHint {$IFNDEF MSWINDOWS}name '_ToolButton_SetParentShowHint'{$ENDIF},
  ToolButton_GetPopupMenu {$IFNDEF MSWINDOWS}name '_ToolButton_GetPopupMenu'{$ENDIF},
  ToolButton_SetPopupMenu {$IFNDEF MSWINDOWS}name '_ToolButton_SetPopupMenu'{$ENDIF},
  ToolButton_GetWrap {$IFNDEF MSWINDOWS}name '_ToolButton_GetWrap'{$ENDIF},
  ToolButton_SetWrap {$IFNDEF MSWINDOWS}name '_ToolButton_SetWrap'{$ENDIF},
  ToolButton_GetShowHint {$IFNDEF MSWINDOWS}name '_ToolButton_GetShowHint'{$ENDIF},
  ToolButton_SetShowHint {$IFNDEF MSWINDOWS}name '_ToolButton_SetShowHint'{$ENDIF},
  ToolButton_GetStyle {$IFNDEF MSWINDOWS}name '_ToolButton_GetStyle'{$ENDIF},
  ToolButton_SetStyle {$IFNDEF MSWINDOWS}name '_ToolButton_SetStyle'{$ENDIF},
  ToolButton_GetVisible {$IFNDEF MSWINDOWS}name '_ToolButton_GetVisible'{$ENDIF},
  ToolButton_SetVisible {$IFNDEF MSWINDOWS}name '_ToolButton_SetVisible'{$ENDIF},
  ToolButton_GetWidth {$IFNDEF MSWINDOWS}name '_ToolButton_GetWidth'{$ENDIF},
  ToolButton_SetWidth {$IFNDEF MSWINDOWS}name '_ToolButton_SetWidth'{$ENDIF},
  ToolButton_SetOnClick {$IFNDEF MSWINDOWS}name '_ToolButton_SetOnClick'{$ENDIF},
  ToolButton_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_ToolButton_SetOnMouseDown'{$ENDIF},
  ToolButton_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_ToolButton_SetOnMouseEnter'{$ENDIF},
  ToolButton_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_ToolButton_SetOnMouseLeave'{$ENDIF},
  ToolButton_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_ToolButton_SetOnMouseMove'{$ENDIF},
  ToolButton_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_ToolButton_SetOnMouseUp'{$ENDIF},
  ToolButton_GetAlign {$IFNDEF MSWINDOWS}name '_ToolButton_GetAlign'{$ENDIF},
  ToolButton_SetAlign {$IFNDEF MSWINDOWS}name '_ToolButton_SetAlign'{$ENDIF},
  ToolButton_GetAnchors {$IFNDEF MSWINDOWS}name '_ToolButton_GetAnchors'{$ENDIF},
  ToolButton_SetAnchors {$IFNDEF MSWINDOWS}name '_ToolButton_SetAnchors'{$ENDIF},
  ToolButton_GetBiDiMode {$IFNDEF MSWINDOWS}name '_ToolButton_GetBiDiMode'{$ENDIF},
  ToolButton_SetBiDiMode {$IFNDEF MSWINDOWS}name '_ToolButton_SetBiDiMode'{$ENDIF},
  ToolButton_GetBoundsRect {$IFNDEF MSWINDOWS}name '_ToolButton_GetBoundsRect'{$ENDIF},
  ToolButton_SetBoundsRect {$IFNDEF MSWINDOWS}name '_ToolButton_SetBoundsRect'{$ENDIF},
  ToolButton_GetClientHeight {$IFNDEF MSWINDOWS}name '_ToolButton_GetClientHeight'{$ENDIF},
  ToolButton_SetClientHeight {$IFNDEF MSWINDOWS}name '_ToolButton_SetClientHeight'{$ENDIF},
  ToolButton_GetClientRect {$IFNDEF MSWINDOWS}name '_ToolButton_GetClientRect'{$ENDIF},
  ToolButton_GetClientWidth {$IFNDEF MSWINDOWS}name '_ToolButton_GetClientWidth'{$ENDIF},
  ToolButton_SetClientWidth {$IFNDEF MSWINDOWS}name '_ToolButton_SetClientWidth'{$ENDIF},
  //ToolButton_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_ToolButton_GetExplicitLeft'{$ENDIF},
  //ToolButton_GetExplicitTop {$IFNDEF MSWINDOWS}name '_ToolButton_GetExplicitTop'{$ENDIF},
  //ToolButton_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_ToolButton_GetExplicitWidth'{$ENDIF},
  //ToolButton_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_ToolButton_GetExplicitHeight'{$ENDIF},
  ToolButton_GetParent {$IFNDEF MSWINDOWS}name '_ToolButton_GetParent'{$ENDIF},
  ToolButton_SetParent {$IFNDEF MSWINDOWS}name '_ToolButton_SetParent'{$ENDIF},
  //ToolButton_GetStyleElements {$IFNDEF MSWINDOWS}name '_ToolButton_GetStyleElements'{$ENDIF},
  //ToolButton_SetStyleElements {$IFNDEF MSWINDOWS}name '_ToolButton_SetStyleElements'{$ENDIF},
  //ToolButton_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ToolButton_GetAlignWithMargins'{$ENDIF},
  //ToolButton_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ToolButton_SetAlignWithMargins'{$ENDIF},
  ToolButton_GetLeft {$IFNDEF MSWINDOWS}name '_ToolButton_GetLeft'{$ENDIF},
  ToolButton_SetLeft {$IFNDEF MSWINDOWS}name '_ToolButton_SetLeft'{$ENDIF},
  ToolButton_GetTop {$IFNDEF MSWINDOWS}name '_ToolButton_GetTop'{$ENDIF},
  ToolButton_SetTop {$IFNDEF MSWINDOWS}name '_ToolButton_SetTop'{$ENDIF},
  ToolButton_GetCursor {$IFNDEF MSWINDOWS}name '_ToolButton_GetCursor'{$ENDIF},
  ToolButton_SetCursor {$IFNDEF MSWINDOWS}name '_ToolButton_SetCursor'{$ENDIF},
  ToolButton_GetHint {$IFNDEF MSWINDOWS}name '_ToolButton_GetHint'{$ENDIF},
  ToolButton_SetHint {$IFNDEF MSWINDOWS}name '_ToolButton_SetHint'{$ENDIF},
  //ToolButton_GetMargins {$IFNDEF MSWINDOWS}name '_ToolButton_GetMargins'{$ENDIF},
  //ToolButton_SetMargins {$IFNDEF MSWINDOWS}name '_ToolButton_SetMargins'{$ENDIF},
  ToolButton_GetComponentCount {$IFNDEF MSWINDOWS}name '_ToolButton_GetComponentCount'{$ENDIF},
  ToolButton_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ToolButton_GetComponentIndex'{$ENDIF},
  ToolButton_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ToolButton_SetComponentIndex'{$ENDIF},
  ToolButton_GetOwner {$IFNDEF MSWINDOWS}name '_ToolButton_GetOwner'{$ENDIF},
  ToolButton_GetName {$IFNDEF MSWINDOWS}name '_ToolButton_GetName'{$ENDIF},
  ToolButton_SetName {$IFNDEF MSWINDOWS}name '_ToolButton_SetName'{$ENDIF},
  ToolButton_GetTag {$IFNDEF MSWINDOWS}name '_ToolButton_GetTag'{$ENDIF},
  ToolButton_SetTag {$IFNDEF MSWINDOWS}name '_ToolButton_SetTag'{$ENDIF},
  ToolButton_GetComponents {$IFNDEF MSWINDOWS}name '_ToolButton_GetComponents'{$ENDIF};

