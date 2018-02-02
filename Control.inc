
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Control_Create(AOwner: TComponent): TControl; cdecl;
begin
  Result :=  TControl.Create(AOwner);
end;

procedure Control_Free(AObj: TControl); cdecl;
begin
  AObj.Free;
end;

procedure Control_BringToFront(AObj: TControl); cdecl;
begin
  AObj.BringToFront;
end;

function Control_HasParent(AObj: TControl): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Control_Hide(AObj: TControl); cdecl;
begin
  AObj.Hide;
end;

procedure Control_Invalidate(AObj: TControl); cdecl;
begin
  AObj.Invalidate;
end;

function Control_Perform(AObj: TControl; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Control_Refresh(AObj: TControl); cdecl;
begin
  AObj.Refresh;
end;

procedure Control_Repaint(AObj: TControl); cdecl;
begin
  AObj.Repaint;
end;

procedure Control_SendToBack(AObj: TControl); cdecl;
begin
  AObj.SendToBack;
end;

procedure Control_SetBounds(AObj: TControl; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Control_Show(AObj: TControl); cdecl;
begin
  AObj.Show;
end;

procedure Control_Update(AObj: TControl); cdecl;
begin
  AObj.Update;
end;

function Control_GetTextBuf(AObj: TControl; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function Control_FindComponent(AObj: TControl; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Control_GetNamePath(AObj: TControl): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Control_Assign(AObj: TControl; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Control_ClassName(AObj: TControl): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Control_Equals(AObj: TControl; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Control_GetHashCode(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Control_ToString(AObj: TControl): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Control_GetEnabled(AObj: TControl): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Control_SetEnabled(AObj: TControl; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Control_GetAction(AObj: TControl): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Control_SetAction(AObj: TControl; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function Control_GetAlign(AObj: TControl): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Control_SetAlign(AObj: TControl; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Control_GetAnchors(AObj: TControl): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Control_SetAnchors(AObj: TControl; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function Control_GetBiDiMode(AObj: TControl): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Control_SetBiDiMode(AObj: TControl; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure Control_GetBoundsRect(AObj: TControl; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Control_SetBoundsRect(AObj: TControl; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Control_GetClientHeight(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Control_SetClientHeight(AObj: TControl; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Control_GetClientRect(AObj: TControl; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Control_GetClientWidth(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Control_SetClientWidth(AObj: TControl; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function Control_GetExplicitLeft(AObj: TControl): Integer; cdecl;
begin
  //Result :=  AObj.ExplicitLeft;
end;

function Control_GetExplicitTop(AObj: TControl): Integer; cdecl;
begin
  //Result :=  AObj.ExplicitTop;
end;

function Control_GetExplicitWidth(AObj: TControl): Integer; cdecl;
begin
  //Result :=  AObj.ExplicitWidth;
end;

function Control_GetExplicitHeight(AObj: TControl): Integer; cdecl;
begin
  //Result :=  AObj.ExplicitHeight;
end;

function Control_GetShowHint(AObj: TControl): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Control_SetShowHint(AObj: TControl; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Control_GetVisible(AObj: TControl): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Control_SetVisible(AObj: TControl; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function Control_GetParent(AObj: TControl): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Control_SetParent(AObj: TControl; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function Control_GetStyleElements(AObj: TControl): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure Control_SetStyleElements(AObj: TControl; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

function Control_GetAlignWithMargins(AObj: TControl): LongBool; cdecl;
begin
  //Result :=  AObj.AlignWithMargins;
end;

procedure Control_SetAlignWithMargins(AObj: TControl; AValue: LongBool); cdecl;
begin
  //AObj.AlignWithMargins := AValue;
end;

function Control_GetLeft(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Control_SetLeft(AObj: TControl; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Control_GetTop(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Control_SetTop(AObj: TControl; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Control_GetWidth(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Control_SetWidth(AObj: TControl; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function Control_GetHeight(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Control_SetHeight(AObj: TControl; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Control_GetCursor(AObj: TControl): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Control_SetCursor(AObj: TControl; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Control_GetHint(AObj: TControl): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Control_SetHint(AObj: TControl; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Control_GetMargins(AObj: TControl): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure Control_SetMargins(AObj: TControl; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Control_GetComponentCount(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Control_GetComponentIndex(AObj: TControl): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Control_SetComponentIndex(AObj: TControl; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Control_GetOwner(AObj: TControl): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Control_GetName(AObj: TControl): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Control_SetName(AObj: TControl; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Control_GetTag(AObj: TControl): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Control_SetTag(AObj: TControl; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Control_GetComponents(AObj: TControl; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Control_Create {$IFNDEF MSWINDOWS}name '_Control_Create'{$ENDIF},
  Control_Free {$IFNDEF MSWINDOWS}name '_Control_Free'{$ENDIF},
  Control_BringToFront {$IFNDEF MSWINDOWS}name '_Control_BringToFront'{$ENDIF},
  Control_HasParent {$IFNDEF MSWINDOWS}name '_Control_HasParent'{$ENDIF},
  Control_Hide {$IFNDEF MSWINDOWS}name '_Control_Hide'{$ENDIF},
  Control_Invalidate {$IFNDEF MSWINDOWS}name '_Control_Invalidate'{$ENDIF},
  Control_Perform {$IFNDEF MSWINDOWS}name '_Control_Perform'{$ENDIF},
  Control_Refresh {$IFNDEF MSWINDOWS}name '_Control_Refresh'{$ENDIF},
  Control_Repaint {$IFNDEF MSWINDOWS}name '_Control_Repaint'{$ENDIF},
  Control_SendToBack {$IFNDEF MSWINDOWS}name '_Control_SendToBack'{$ENDIF},
  Control_SetBounds {$IFNDEF MSWINDOWS}name '_Control_SetBounds'{$ENDIF},
  Control_Show {$IFNDEF MSWINDOWS}name '_Control_Show'{$ENDIF},
  Control_Update {$IFNDEF MSWINDOWS}name '_Control_Update'{$ENDIF},
  Control_GetTextBuf {$IFNDEF MSWINDOWS}name '_Control_GetTextBuf'{$ENDIF},
  Control_FindComponent {$IFNDEF MSWINDOWS}name '_Control_FindComponent'{$ENDIF},
  Control_GetNamePath {$IFNDEF MSWINDOWS}name '_Control_GetNamePath'{$ENDIF},
  Control_Assign {$IFNDEF MSWINDOWS}name '_Control_Assign'{$ENDIF},
  Control_ClassName {$IFNDEF MSWINDOWS}name '_Control_ClassName'{$ENDIF},
  Control_Equals {$IFNDEF MSWINDOWS}name '_Control_Equals'{$ENDIF},
  Control_GetHashCode {$IFNDEF MSWINDOWS}name '_Control_GetHashCode'{$ENDIF},
  Control_ToString {$IFNDEF MSWINDOWS}name '_Control_ToString'{$ENDIF},
  Control_GetEnabled {$IFNDEF MSWINDOWS}name '_Control_GetEnabled'{$ENDIF},
  Control_SetEnabled {$IFNDEF MSWINDOWS}name '_Control_SetEnabled'{$ENDIF},
  Control_GetAction {$IFNDEF MSWINDOWS}name '_Control_GetAction'{$ENDIF},
  Control_SetAction {$IFNDEF MSWINDOWS}name '_Control_SetAction'{$ENDIF},
  Control_GetAlign {$IFNDEF MSWINDOWS}name '_Control_GetAlign'{$ENDIF},
  Control_SetAlign {$IFNDEF MSWINDOWS}name '_Control_SetAlign'{$ENDIF},
  Control_GetAnchors {$IFNDEF MSWINDOWS}name '_Control_GetAnchors'{$ENDIF},
  Control_SetAnchors {$IFNDEF MSWINDOWS}name '_Control_SetAnchors'{$ENDIF},
  Control_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Control_GetBiDiMode'{$ENDIF},
  Control_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Control_SetBiDiMode'{$ENDIF},
  Control_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Control_GetBoundsRect'{$ENDIF},
  Control_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Control_SetBoundsRect'{$ENDIF},
  Control_GetClientHeight {$IFNDEF MSWINDOWS}name '_Control_GetClientHeight'{$ENDIF},
  Control_SetClientHeight {$IFNDEF MSWINDOWS}name '_Control_SetClientHeight'{$ENDIF},
  Control_GetClientRect {$IFNDEF MSWINDOWS}name '_Control_GetClientRect'{$ENDIF},
  Control_GetClientWidth {$IFNDEF MSWINDOWS}name '_Control_GetClientWidth'{$ENDIF},
  Control_SetClientWidth {$IFNDEF MSWINDOWS}name '_Control_SetClientWidth'{$ENDIF},
  Control_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Control_GetExplicitLeft'{$ENDIF},
  Control_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Control_GetExplicitTop'{$ENDIF},
  Control_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Control_GetExplicitWidth'{$ENDIF},
  Control_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Control_GetExplicitHeight'{$ENDIF},
  Control_GetShowHint {$IFNDEF MSWINDOWS}name '_Control_GetShowHint'{$ENDIF},
  Control_SetShowHint {$IFNDEF MSWINDOWS}name '_Control_SetShowHint'{$ENDIF},
  Control_GetVisible {$IFNDEF MSWINDOWS}name '_Control_GetVisible'{$ENDIF},
  Control_SetVisible {$IFNDEF MSWINDOWS}name '_Control_SetVisible'{$ENDIF},
  Control_GetParent {$IFNDEF MSWINDOWS}name '_Control_GetParent'{$ENDIF},
  Control_SetParent {$IFNDEF MSWINDOWS}name '_Control_SetParent'{$ENDIF},
  //Control_GetStyleElements {$IFNDEF MSWINDOWS}name '_Control_GetStyleElements'{$ENDIF},
  //Control_SetStyleElements {$IFNDEF MSWINDOWS}name '_Control_SetStyleElements'{$ENDIF},
  Control_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Control_GetAlignWithMargins'{$ENDIF},
  Control_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Control_SetAlignWithMargins'{$ENDIF},
  Control_GetLeft {$IFNDEF MSWINDOWS}name '_Control_GetLeft'{$ENDIF},
  Control_SetLeft {$IFNDEF MSWINDOWS}name '_Control_SetLeft'{$ENDIF},
  Control_GetTop {$IFNDEF MSWINDOWS}name '_Control_GetTop'{$ENDIF},
  Control_SetTop {$IFNDEF MSWINDOWS}name '_Control_SetTop'{$ENDIF},
  Control_GetWidth {$IFNDEF MSWINDOWS}name '_Control_GetWidth'{$ENDIF},
  Control_SetWidth {$IFNDEF MSWINDOWS}name '_Control_SetWidth'{$ENDIF},
  Control_GetHeight {$IFNDEF MSWINDOWS}name '_Control_GetHeight'{$ENDIF},
  Control_SetHeight {$IFNDEF MSWINDOWS}name '_Control_SetHeight'{$ENDIF},
  Control_GetCursor {$IFNDEF MSWINDOWS}name '_Control_GetCursor'{$ENDIF},
  Control_SetCursor {$IFNDEF MSWINDOWS}name '_Control_SetCursor'{$ENDIF},
  Control_GetHint {$IFNDEF MSWINDOWS}name '_Control_GetHint'{$ENDIF},
  Control_SetHint {$IFNDEF MSWINDOWS}name '_Control_SetHint'{$ENDIF},
  //Control_GetMargins {$IFNDEF MSWINDOWS}name '_Control_GetMargins'{$ENDIF},
  //Control_SetMargins {$IFNDEF MSWINDOWS}name '_Control_SetMargins'{$ENDIF},
  Control_GetComponentCount {$IFNDEF MSWINDOWS}name '_Control_GetComponentCount'{$ENDIF},
  Control_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Control_GetComponentIndex'{$ENDIF},
  Control_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Control_SetComponentIndex'{$ENDIF},
  Control_GetOwner {$IFNDEF MSWINDOWS}name '_Control_GetOwner'{$ENDIF},
  Control_GetName {$IFNDEF MSWINDOWS}name '_Control_GetName'{$ENDIF},
  Control_SetName {$IFNDEF MSWINDOWS}name '_Control_SetName'{$ENDIF},
  Control_GetTag {$IFNDEF MSWINDOWS}name '_Control_GetTag'{$ENDIF},
  Control_SetTag {$IFNDEF MSWINDOWS}name '_Control_SetTag'{$ENDIF},
  Control_GetComponents {$IFNDEF MSWINDOWS}name '_Control_GetComponents'{$ENDIF};

