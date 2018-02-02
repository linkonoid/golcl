
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Splitter_Create(AOwner: TComponent): TSplitter; cdecl;
begin
  Result :=  TSplitter.Create(AOwner);
end;

procedure Splitter_Free(AObj: TSplitter); cdecl;
begin
  AObj.Free;
end;

procedure Splitter_BringToFront(AObj: TSplitter); cdecl;
begin
  AObj.BringToFront;
end;

function Splitter_HasParent(AObj: TSplitter): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Splitter_Hide(AObj: TSplitter); cdecl;
begin
  AObj.Hide;
end;

procedure Splitter_Invalidate(AObj: TSplitter); cdecl;
begin
  AObj.Invalidate;
end;

function Splitter_Perform(AObj: TSplitter; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Splitter_Refresh(AObj: TSplitter); cdecl;
begin
  AObj.Refresh;
end;

procedure Splitter_Repaint(AObj: TSplitter); cdecl;
begin
  AObj.Repaint;
end;

procedure Splitter_SendToBack(AObj: TSplitter); cdecl;
begin
  AObj.SendToBack;
end;

procedure Splitter_SetBounds(AObj: TSplitter; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Splitter_Show(AObj: TSplitter); cdecl;
begin
  AObj.Show;
end;

procedure Splitter_Update(AObj: TSplitter); cdecl;
begin
  AObj.Update;
end;

function Splitter_GetTextBuf(AObj: TSplitter; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function Splitter_FindComponent(AObj: TSplitter; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Splitter_GetNamePath(AObj: TSplitter): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Splitter_Assign(AObj: TSplitter; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Splitter_ClassName(AObj: TSplitter): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Splitter_Equals(AObj: TSplitter; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Splitter_GetHashCode(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Splitter_ToString(AObj: TSplitter): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Splitter_GetCanvas(AObj: TSplitter): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function Splitter_GetAlign(AObj: TSplitter): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Splitter_SetAlign(AObj: TSplitter; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Splitter_GetColor(AObj: TSplitter): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Splitter_SetColor(AObj: TSplitter; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function Splitter_GetCursor(AObj: TSplitter): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Splitter_SetCursor(AObj: TSplitter; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Splitter_GetParentColor(AObj: TSplitter): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure Splitter_SetParentColor(AObj: TSplitter; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function Splitter_GetVisible(AObj: TSplitter): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Splitter_SetVisible(AObj: TSplitter; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function Splitter_GetWidth(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Splitter_SetWidth(AObj: TSplitter; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

//function Splitter_GetStyleElements(AObj: TSplitter): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure Splitter_SetStyleElements(AObj: TSplitter; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure Splitter_SetOnPaint(AObj: TSplitter; AEventId: NativeUInt); stdcall;
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

function Splitter_GetEnabled(AObj: TSplitter): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Splitter_SetEnabled(AObj: TSplitter; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Splitter_GetAction(AObj: TSplitter): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Splitter_SetAction(AObj: TSplitter; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function Splitter_GetAnchors(AObj: TSplitter): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Splitter_SetAnchors(AObj: TSplitter; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function Splitter_GetBiDiMode(AObj: TSplitter): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Splitter_SetBiDiMode(AObj: TSplitter; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure Splitter_GetBoundsRect(AObj: TSplitter; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Splitter_SetBoundsRect(AObj: TSplitter; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Splitter_GetClientHeight(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Splitter_SetClientHeight(AObj: TSplitter; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Splitter_GetClientRect(AObj: TSplitter; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Splitter_GetClientWidth(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Splitter_SetClientWidth(AObj: TSplitter; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function Splitter_GetExplicitLeft(AObj: TSplitter): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function Splitter_GetExplicitTop(AObj: TSplitter): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function Splitter_GetExplicitWidth(AObj: TSplitter): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function Splitter_GetExplicitHeight(AObj: TSplitter): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function Splitter_GetShowHint(AObj: TSplitter): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Splitter_SetShowHint(AObj: TSplitter; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Splitter_GetParent(AObj: TSplitter): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Splitter_SetParent(AObj: TSplitter; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function Splitter_GetAlignWithMargins(AObj: TSplitter): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure Splitter_SetAlignWithMargins(AObj: TSplitter; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function Splitter_GetLeft(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Splitter_SetLeft(AObj: TSplitter; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Splitter_GetTop(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Splitter_SetTop(AObj: TSplitter; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Splitter_GetHeight(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Splitter_SetHeight(AObj: TSplitter; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Splitter_GetHint(AObj: TSplitter): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Splitter_SetHint(AObj: TSplitter; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Splitter_GetMargins(AObj: TSplitter): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure Splitter_SetMargins(AObj: TSplitter; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Splitter_GetComponentCount(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Splitter_GetComponentIndex(AObj: TSplitter): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Splitter_SetComponentIndex(AObj: TSplitter; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Splitter_GetOwner(AObj: TSplitter): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Splitter_GetName(AObj: TSplitter): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Splitter_SetName(AObj: TSplitter; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Splitter_GetTag(AObj: TSplitter): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Splitter_SetTag(AObj: TSplitter; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Splitter_GetComponents(AObj: TSplitter; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Splitter_Create {$IFNDEF MSWINDOWS}name '_Splitter_Create'{$ENDIF},
  Splitter_Free {$IFNDEF MSWINDOWS}name '_Splitter_Free'{$ENDIF},
  Splitter_BringToFront {$IFNDEF MSWINDOWS}name '_Splitter_BringToFront'{$ENDIF},
  Splitter_HasParent {$IFNDEF MSWINDOWS}name '_Splitter_HasParent'{$ENDIF},
  Splitter_Hide {$IFNDEF MSWINDOWS}name '_Splitter_Hide'{$ENDIF},
  Splitter_Invalidate {$IFNDEF MSWINDOWS}name '_Splitter_Invalidate'{$ENDIF},
  Splitter_Perform {$IFNDEF MSWINDOWS}name '_Splitter_Perform'{$ENDIF},
  Splitter_Refresh {$IFNDEF MSWINDOWS}name '_Splitter_Refresh'{$ENDIF},
  Splitter_Repaint {$IFNDEF MSWINDOWS}name '_Splitter_Repaint'{$ENDIF},
  Splitter_SendToBack {$IFNDEF MSWINDOWS}name '_Splitter_SendToBack'{$ENDIF},
  Splitter_SetBounds {$IFNDEF MSWINDOWS}name '_Splitter_SetBounds'{$ENDIF},
  Splitter_Show {$IFNDEF MSWINDOWS}name '_Splitter_Show'{$ENDIF},
  Splitter_Update {$IFNDEF MSWINDOWS}name '_Splitter_Update'{$ENDIF},
  Splitter_GetTextBuf {$IFNDEF MSWINDOWS}name '_Splitter_GetTextBuf'{$ENDIF},
  Splitter_FindComponent {$IFNDEF MSWINDOWS}name '_Splitter_FindComponent'{$ENDIF},
  Splitter_GetNamePath {$IFNDEF MSWINDOWS}name '_Splitter_GetNamePath'{$ENDIF},
  Splitter_Assign {$IFNDEF MSWINDOWS}name '_Splitter_Assign'{$ENDIF},
  Splitter_ClassName {$IFNDEF MSWINDOWS}name '_Splitter_ClassName'{$ENDIF},
  Splitter_Equals {$IFNDEF MSWINDOWS}name '_Splitter_Equals'{$ENDIF},
  Splitter_GetHashCode {$IFNDEF MSWINDOWS}name '_Splitter_GetHashCode'{$ENDIF},
  Splitter_ToString {$IFNDEF MSWINDOWS}name '_Splitter_ToString'{$ENDIF},
  Splitter_GetCanvas {$IFNDEF MSWINDOWS}name '_Splitter_GetCanvas'{$ENDIF},
  Splitter_GetAlign {$IFNDEF MSWINDOWS}name '_Splitter_GetAlign'{$ENDIF},
  Splitter_SetAlign {$IFNDEF MSWINDOWS}name '_Splitter_SetAlign'{$ENDIF},
  Splitter_GetColor {$IFNDEF MSWINDOWS}name '_Splitter_GetColor'{$ENDIF},
  Splitter_SetColor {$IFNDEF MSWINDOWS}name '_Splitter_SetColor'{$ENDIF},
  Splitter_GetCursor {$IFNDEF MSWINDOWS}name '_Splitter_GetCursor'{$ENDIF},
  Splitter_SetCursor {$IFNDEF MSWINDOWS}name '_Splitter_SetCursor'{$ENDIF},
  Splitter_GetParentColor {$IFNDEF MSWINDOWS}name '_Splitter_GetParentColor'{$ENDIF},
  Splitter_SetParentColor {$IFNDEF MSWINDOWS}name '_Splitter_SetParentColor'{$ENDIF},
  Splitter_GetVisible {$IFNDEF MSWINDOWS}name '_Splitter_GetVisible'{$ENDIF},
  Splitter_SetVisible {$IFNDEF MSWINDOWS}name '_Splitter_SetVisible'{$ENDIF},
  Splitter_GetWidth {$IFNDEF MSWINDOWS}name '_Splitter_GetWidth'{$ENDIF},
  Splitter_SetWidth {$IFNDEF MSWINDOWS}name '_Splitter_SetWidth'{$ENDIF},
  //Splitter_GetStyleElements {$IFNDEF MSWINDOWS}name '_Splitter_GetStyleElements'{$ENDIF},
  //Splitter_SetStyleElements {$IFNDEF MSWINDOWS}name '_Splitter_SetStyleElements'{$ENDIF},
  Splitter_SetOnPaint {$IFNDEF MSWINDOWS}name '_Splitter_SetOnPaint'{$ENDIF},
  Splitter_GetEnabled {$IFNDEF MSWINDOWS}name '_Splitter_GetEnabled'{$ENDIF},
  Splitter_SetEnabled {$IFNDEF MSWINDOWS}name '_Splitter_SetEnabled'{$ENDIF},
  Splitter_GetAction {$IFNDEF MSWINDOWS}name '_Splitter_GetAction'{$ENDIF},
  Splitter_SetAction {$IFNDEF MSWINDOWS}name '_Splitter_SetAction'{$ENDIF},
  Splitter_GetAnchors {$IFNDEF MSWINDOWS}name '_Splitter_GetAnchors'{$ENDIF},
  Splitter_SetAnchors {$IFNDEF MSWINDOWS}name '_Splitter_SetAnchors'{$ENDIF},
  Splitter_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Splitter_GetBiDiMode'{$ENDIF},
  Splitter_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Splitter_SetBiDiMode'{$ENDIF},
  Splitter_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Splitter_GetBoundsRect'{$ENDIF},
  Splitter_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Splitter_SetBoundsRect'{$ENDIF},
  Splitter_GetClientHeight {$IFNDEF MSWINDOWS}name '_Splitter_GetClientHeight'{$ENDIF},
  Splitter_SetClientHeight {$IFNDEF MSWINDOWS}name '_Splitter_SetClientHeight'{$ENDIF},
  Splitter_GetClientRect {$IFNDEF MSWINDOWS}name '_Splitter_GetClientRect'{$ENDIF},
  Splitter_GetClientWidth {$IFNDEF MSWINDOWS}name '_Splitter_GetClientWidth'{$ENDIF},
  Splitter_SetClientWidth {$IFNDEF MSWINDOWS}name '_Splitter_SetClientWidth'{$ENDIF},
  //Splitter_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Splitter_GetExplicitLeft'{$ENDIF},
  //Splitter_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Splitter_GetExplicitTop'{$ENDIF},
  //Splitter_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Splitter_GetExplicitWidth'{$ENDIF},
  //Splitter_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Splitter_GetExplicitHeight'{$ENDIF},
  Splitter_GetShowHint {$IFNDEF MSWINDOWS}name '_Splitter_GetShowHint'{$ENDIF},
  Splitter_SetShowHint {$IFNDEF MSWINDOWS}name '_Splitter_SetShowHint'{$ENDIF},
  Splitter_GetParent {$IFNDEF MSWINDOWS}name '_Splitter_GetParent'{$ENDIF},
  Splitter_SetParent {$IFNDEF MSWINDOWS}name '_Splitter_SetParent'{$ENDIF},
  //Splitter_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Splitter_GetAlignWithMargins'{$ENDIF},
  //Splitter_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Splitter_SetAlignWithMargins'{$ENDIF},
  Splitter_GetLeft {$IFNDEF MSWINDOWS}name '_Splitter_GetLeft'{$ENDIF},
  Splitter_SetLeft {$IFNDEF MSWINDOWS}name '_Splitter_SetLeft'{$ENDIF},
  Splitter_GetTop {$IFNDEF MSWINDOWS}name '_Splitter_GetTop'{$ENDIF},
  Splitter_SetTop {$IFNDEF MSWINDOWS}name '_Splitter_SetTop'{$ENDIF},
  Splitter_GetHeight {$IFNDEF MSWINDOWS}name '_Splitter_GetHeight'{$ENDIF},
  Splitter_SetHeight {$IFNDEF MSWINDOWS}name '_Splitter_SetHeight'{$ENDIF},
  Splitter_GetHint {$IFNDEF MSWINDOWS}name '_Splitter_GetHint'{$ENDIF},
  Splitter_SetHint {$IFNDEF MSWINDOWS}name '_Splitter_SetHint'{$ENDIF},
  //Splitter_GetMargins {$IFNDEF MSWINDOWS}name '_Splitter_GetMargins'{$ENDIF},
  //Splitter_SetMargins {$IFNDEF MSWINDOWS}name '_Splitter_SetMargins'{$ENDIF},
  Splitter_GetComponentCount {$IFNDEF MSWINDOWS}name '_Splitter_GetComponentCount'{$ENDIF},
  Splitter_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Splitter_GetComponentIndex'{$ENDIF},
  Splitter_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Splitter_SetComponentIndex'{$ENDIF},
  Splitter_GetOwner {$IFNDEF MSWINDOWS}name '_Splitter_GetOwner'{$ENDIF},
  Splitter_GetName {$IFNDEF MSWINDOWS}name '_Splitter_GetName'{$ENDIF},
  Splitter_SetName {$IFNDEF MSWINDOWS}name '_Splitter_SetName'{$ENDIF},
  Splitter_GetTag {$IFNDEF MSWINDOWS}name '_Splitter_GetTag'{$ENDIF},
  Splitter_SetTag {$IFNDEF MSWINDOWS}name '_Splitter_SetTag'{$ENDIF},
  Splitter_GetComponents {$IFNDEF MSWINDOWS}name '_Splitter_GetComponents'{$ENDIF};

