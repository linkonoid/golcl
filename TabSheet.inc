
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function TabSheet_Create(AOwner: TComponent): TTabSheet; cdecl;
begin
  Result :=  TTabSheet.Create(AOwner);
end;

procedure TabSheet_Free(AObj: TTabSheet); cdecl;
begin
  AObj.Free;
end;

function TabSheet_CanFocus(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure TabSheet_FlipChildren(AObj: TTabSheet; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function TabSheet_Focused(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function TabSheet_HandleAllocated(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure TabSheet_Invalidate(AObj: TTabSheet); cdecl;
begin
  AObj.Invalidate;
end;

procedure TabSheet_Realign(AObj: TTabSheet); cdecl;
begin
  AObj.Realign;
end;

procedure TabSheet_Repaint(AObj: TTabSheet); cdecl;
begin
  AObj.Repaint;
end;

procedure TabSheet_ScaleBy(AObj: TTabSheet; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure TabSheet_SetBounds(AObj: TTabSheet; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure TabSheet_SetFocus(AObj: TTabSheet); cdecl;
begin
  AObj.SetFocus;
end;

procedure TabSheet_Update(AObj: TTabSheet); cdecl;
begin
  AObj.Update;
end;

procedure TabSheet_BringToFront(AObj: TTabSheet); cdecl;
begin
  AObj.BringToFront;
end;

function TabSheet_HasParent(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure TabSheet_Hide(AObj: TTabSheet); cdecl;
begin
  AObj.Hide;
end;

function TabSheet_Perform(AObj: TTabSheet; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure TabSheet_Refresh(AObj: TTabSheet); cdecl;
begin
  AObj.Refresh;
end;

procedure TabSheet_SendToBack(AObj: TTabSheet); cdecl;
begin
  AObj.SendToBack;
end;

procedure TabSheet_Show(AObj: TTabSheet); cdecl;
begin
  AObj.Show;
end;

function TabSheet_GetTextBuf(AObj: TTabSheet; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function TabSheet_FindComponent(AObj: TTabSheet; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function TabSheet_GetNamePath(AObj: TTabSheet): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure TabSheet_Assign(AObj: TTabSheet; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function TabSheet_ClassName(AObj: TTabSheet): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function TabSheet_Equals(AObj: TTabSheet; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function TabSheet_GetHashCode(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function TabSheet_ToString(AObj: TTabSheet): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function TabSheet_GetPageControl(AObj: TTabSheet): TPageControl; cdecl;
begin
  Result :=  AObj.PageControl;
end;

procedure TabSheet_SetPageControl(AObj: TTabSheet; AValue: TPageControl); cdecl;
begin
  AObj.PageControl := AValue;
end;

function TabSheet_GetTabIndex(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.TabIndex;
end;

function TabSheet_GetBorderWidth(AObj: TTabSheet): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure TabSheet_SetBorderWidth(AObj: TTabSheet; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function TabSheet_GetCaption(AObj: TTabSheet): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure TabSheet_SetCaption(AObj: TTabSheet; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function TabSheet_GetDoubleBuffered(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure TabSheet_SetDoubleBuffered(AObj: TTabSheet; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function TabSheet_GetEnabled(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure TabSheet_SetEnabled(AObj: TTabSheet; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function TabSheet_GetFont(AObj: TTabSheet): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure TabSheet_SetFont(AObj: TTabSheet; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function TabSheet_GetHeight(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure TabSheet_SetHeight(AObj: TTabSheet; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

//function TabSheet_GetHighlighted(AObj: TTabSheet): LongBool; cdecl;
//begin
//  Result :=  AObj.Highlighted;
//end;
//
//procedure TabSheet_SetHighlighted(AObj: TTabSheet; AValue: LongBool); cdecl;
//begin
//  AObj.Highlighted := AValue;
//end;
//
//function TabSheet_GetImageIndex(AObj: TTabSheet): TImageIndex; cdecl;
//begin
//  Result :=  AObj.ImageIndex;
//end;
//
//procedure TabSheet_SetImageIndex(AObj: TTabSheet; AValue: TImageIndex); cdecl;
//begin
//  AObj.ImageIndex := AValue;
//end;

function TabSheet_GetLeft(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure TabSheet_SetLeft(AObj: TTabSheet; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function TabSheet_GetPageIndex(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.PageIndex;
end;

procedure TabSheet_SetPageIndex(AObj: TTabSheet; AValue: Integer); cdecl;
begin
  AObj.PageIndex := AValue;
end;

//function TabSheet_GetParentDoubleBuffered(AObj: TTabSheet): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure TabSheet_SetParentDoubleBuffered(AObj: TTabSheet; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function TabSheet_GetParentFont(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure TabSheet_SetParentFont(AObj: TTabSheet; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function TabSheet_GetParentShowHint(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure TabSheet_SetParentShowHint(AObj: TTabSheet; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function TabSheet_GetPopupMenu(AObj: TTabSheet): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure TabSheet_SetPopupMenu(AObj: TTabSheet; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function TabSheet_GetShowHint(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure TabSheet_SetShowHint(AObj: TTabSheet; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function TabSheet_GetTabVisible(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.TabVisible;
end;

procedure TabSheet_SetTabVisible(AObj: TTabSheet; AValue: LongBool); cdecl;
begin
  AObj.TabVisible := AValue;
end;

function TabSheet_GetTop(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure TabSheet_SetTop(AObj: TTabSheet; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function TabSheet_GetVisible(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure TabSheet_SetVisible(AObj: TTabSheet; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function TabSheet_GetWidth(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure TabSheet_SetWidth(AObj: TTabSheet; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure TabSheet_SetOnEnter(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
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

procedure TabSheet_SetOnExit(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
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

procedure TabSheet_SetOnHide(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnHide := nil;
    TEventClass.Remove(AObj, geHide);
    Exit;
  end;
  AObj.OnHide := TEventClass.OnHide;
  TEventClass.Add(AObj, geHide, AEventId);
end;

procedure TabSheet_SetOnMouseDown(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
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

procedure TabSheet_SetOnMouseEnter(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
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

procedure TabSheet_SetOnMouseLeave(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
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

procedure TabSheet_SetOnMouseMove(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
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

procedure TabSheet_SetOnMouseUp(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
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

procedure TabSheet_SetOnResize(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnResize := nil;
    TEventClass.Remove(AObj, geResize);
    Exit;
  end;
  AObj.OnResize := TEventClass.OnResize;
  TEventClass.Add(AObj, geResize, AEventId);
end;

procedure TabSheet_SetOnShow(AObj: TTabSheet; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnShow := nil;
    TEventClass.Remove(AObj, geShow);
    Exit;
  end;
  AObj.OnShow := TEventClass.OnShow;
  TEventClass.Add(AObj, geShow, AEventId);
end;

function TabSheet_GetBrush(AObj: TTabSheet): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function TabSheet_GetControlCount(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function TabSheet_GetHandle(AObj: TTabSheet): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function TabSheet_GetParentWindow(AObj: TTabSheet): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure TabSheet_SetParentWindow(AObj: TTabSheet; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function TabSheet_GetTabOrder(AObj: TTabSheet): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure TabSheet_SetTabOrder(AObj: TTabSheet; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function TabSheet_GetTabStop(AObj: TTabSheet): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure TabSheet_SetTabStop(AObj: TTabSheet; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function TabSheet_GetAction(AObj: TTabSheet): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure TabSheet_SetAction(AObj: TTabSheet; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function TabSheet_GetAlign(AObj: TTabSheet): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure TabSheet_SetAlign(AObj: TTabSheet; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function TabSheet_GetAnchors(AObj: TTabSheet): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure TabSheet_SetAnchors(AObj: TTabSheet; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function TabSheet_GetBiDiMode(AObj: TTabSheet): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure TabSheet_SetBiDiMode(AObj: TTabSheet; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure TabSheet_GetBoundsRect(AObj: TTabSheet; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure TabSheet_SetBoundsRect(AObj: TTabSheet; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function TabSheet_GetClientHeight(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure TabSheet_SetClientHeight(AObj: TTabSheet; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure TabSheet_GetClientRect(AObj: TTabSheet; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function TabSheet_GetClientWidth(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure TabSheet_SetClientWidth(AObj: TTabSheet; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function TabSheet_GetExplicitLeft(AObj: TTabSheet): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function TabSheet_GetExplicitTop(AObj: TTabSheet): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function TabSheet_GetExplicitWidth(AObj: TTabSheet): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function TabSheet_GetExplicitHeight(AObj: TTabSheet): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function TabSheet_GetParent(AObj: TTabSheet): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure TabSheet_SetParent(AObj: TTabSheet; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function TabSheet_GetStyleElements(AObj: TTabSheet): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure TabSheet_SetStyleElements(AObj: TTabSheet; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;
//
//function TabSheet_GetAlignWithMargins(AObj: TTabSheet): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure TabSheet_SetAlignWithMargins(AObj: TTabSheet; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function TabSheet_GetCursor(AObj: TTabSheet): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure TabSheet_SetCursor(AObj: TTabSheet; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function TabSheet_GetHint(AObj: TTabSheet): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure TabSheet_SetHint(AObj: TTabSheet; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function TabSheet_GetMargins(AObj: TTabSheet): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure TabSheet_SetMargins(AObj: TTabSheet; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function TabSheet_GetComponentCount(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function TabSheet_GetComponentIndex(AObj: TTabSheet): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure TabSheet_SetComponentIndex(AObj: TTabSheet; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function TabSheet_GetOwner(AObj: TTabSheet): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function TabSheet_GetName(AObj: TTabSheet): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure TabSheet_SetName(AObj: TTabSheet; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function TabSheet_GetTag(AObj: TTabSheet): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure TabSheet_SetTag(AObj: TTabSheet; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function TabSheet_GetControls(AObj: TTabSheet; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function TabSheet_GetComponents(AObj: TTabSheet; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  TabSheet_Create {$IFNDEF MSWINDOWS}name '_TabSheet_Create'{$ENDIF},
  TabSheet_Free {$IFNDEF MSWINDOWS}name '_TabSheet_Free'{$ENDIF},
  TabSheet_CanFocus {$IFNDEF MSWINDOWS}name '_TabSheet_CanFocus'{$ENDIF},
  TabSheet_FlipChildren {$IFNDEF MSWINDOWS}name '_TabSheet_FlipChildren'{$ENDIF},
  TabSheet_Focused {$IFNDEF MSWINDOWS}name '_TabSheet_Focused'{$ENDIF},
  TabSheet_HandleAllocated {$IFNDEF MSWINDOWS}name '_TabSheet_HandleAllocated'{$ENDIF},
  TabSheet_Invalidate {$IFNDEF MSWINDOWS}name '_TabSheet_Invalidate'{$ENDIF},
  TabSheet_Realign {$IFNDEF MSWINDOWS}name '_TabSheet_Realign'{$ENDIF},
  TabSheet_Repaint {$IFNDEF MSWINDOWS}name '_TabSheet_Repaint'{$ENDIF},
  TabSheet_ScaleBy {$IFNDEF MSWINDOWS}name '_TabSheet_ScaleBy'{$ENDIF},
  TabSheet_SetBounds {$IFNDEF MSWINDOWS}name '_TabSheet_SetBounds'{$ENDIF},
  TabSheet_SetFocus {$IFNDEF MSWINDOWS}name '_TabSheet_SetFocus'{$ENDIF},
  TabSheet_Update {$IFNDEF MSWINDOWS}name '_TabSheet_Update'{$ENDIF},
  TabSheet_BringToFront {$IFNDEF MSWINDOWS}name '_TabSheet_BringToFront'{$ENDIF},
  TabSheet_HasParent {$IFNDEF MSWINDOWS}name '_TabSheet_HasParent'{$ENDIF},
  TabSheet_Hide {$IFNDEF MSWINDOWS}name '_TabSheet_Hide'{$ENDIF},
  TabSheet_Perform {$IFNDEF MSWINDOWS}name '_TabSheet_Perform'{$ENDIF},
  TabSheet_Refresh {$IFNDEF MSWINDOWS}name '_TabSheet_Refresh'{$ENDIF},
  TabSheet_SendToBack {$IFNDEF MSWINDOWS}name '_TabSheet_SendToBack'{$ENDIF},
  TabSheet_Show {$IFNDEF MSWINDOWS}name '_TabSheet_Show'{$ENDIF},
  TabSheet_GetTextBuf {$IFNDEF MSWINDOWS}name '_TabSheet_GetTextBuf'{$ENDIF},
  TabSheet_FindComponent {$IFNDEF MSWINDOWS}name '_TabSheet_FindComponent'{$ENDIF},
  TabSheet_GetNamePath {$IFNDEF MSWINDOWS}name '_TabSheet_GetNamePath'{$ENDIF},
  TabSheet_Assign {$IFNDEF MSWINDOWS}name '_TabSheet_Assign'{$ENDIF},
  TabSheet_ClassName {$IFNDEF MSWINDOWS}name '_TabSheet_ClassName'{$ENDIF},
  TabSheet_Equals {$IFNDEF MSWINDOWS}name '_TabSheet_Equals'{$ENDIF},
  TabSheet_GetHashCode {$IFNDEF MSWINDOWS}name '_TabSheet_GetHashCode'{$ENDIF},
  TabSheet_ToString {$IFNDEF MSWINDOWS}name '_TabSheet_ToString'{$ENDIF},
  TabSheet_GetPageControl {$IFNDEF MSWINDOWS}name '_TabSheet_GetPageControl'{$ENDIF},
  TabSheet_SetPageControl {$IFNDEF MSWINDOWS}name '_TabSheet_SetPageControl'{$ENDIF},
  TabSheet_GetTabIndex {$IFNDEF MSWINDOWS}name '_TabSheet_GetTabIndex'{$ENDIF},
  TabSheet_GetBorderWidth {$IFNDEF MSWINDOWS}name '_TabSheet_GetBorderWidth'{$ENDIF},
  TabSheet_SetBorderWidth {$IFNDEF MSWINDOWS}name '_TabSheet_SetBorderWidth'{$ENDIF},
  TabSheet_GetCaption {$IFNDEF MSWINDOWS}name '_TabSheet_GetCaption'{$ENDIF},
  TabSheet_SetCaption {$IFNDEF MSWINDOWS}name '_TabSheet_SetCaption'{$ENDIF},
  TabSheet_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_TabSheet_GetDoubleBuffered'{$ENDIF},
  TabSheet_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_TabSheet_SetDoubleBuffered'{$ENDIF},
  TabSheet_GetEnabled {$IFNDEF MSWINDOWS}name '_TabSheet_GetEnabled'{$ENDIF},
  TabSheet_SetEnabled {$IFNDEF MSWINDOWS}name '_TabSheet_SetEnabled'{$ENDIF},
  TabSheet_GetFont {$IFNDEF MSWINDOWS}name '_TabSheet_GetFont'{$ENDIF},
  TabSheet_SetFont {$IFNDEF MSWINDOWS}name '_TabSheet_SetFont'{$ENDIF},
  TabSheet_GetHeight {$IFNDEF MSWINDOWS}name '_TabSheet_GetHeight'{$ENDIF},
  TabSheet_SetHeight {$IFNDEF MSWINDOWS}name '_TabSheet_SetHeight'{$ENDIF},
  //TabSheet_GetHighlighted {$IFNDEF MSWINDOWS}name '_TabSheet_GetHighlighted'{$ENDIF},
  //TabSheet_SetHighlighted {$IFNDEF MSWINDOWS}name '_TabSheet_SetHighlighted'{$ENDIF},
  //TabSheet_GetImageIndex {$IFNDEF MSWINDOWS}name '_TabSheet_GetImageIndex'{$ENDIF},
  //TabSheet_SetImageIndex {$IFNDEF MSWINDOWS}name '_TabSheet_SetImageIndex'{$ENDIF},
  TabSheet_GetLeft {$IFNDEF MSWINDOWS}name '_TabSheet_GetLeft'{$ENDIF},
  TabSheet_SetLeft {$IFNDEF MSWINDOWS}name '_TabSheet_SetLeft'{$ENDIF},
  TabSheet_GetPageIndex {$IFNDEF MSWINDOWS}name '_TabSheet_GetPageIndex'{$ENDIF},
  TabSheet_SetPageIndex {$IFNDEF MSWINDOWS}name '_TabSheet_SetPageIndex'{$ENDIF},
  //TabSheet_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_TabSheet_GetParentDoubleBuffered'{$ENDIF},
  //TabSheet_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_TabSheet_SetParentDoubleBuffered'{$ENDIF},
  TabSheet_GetParentFont {$IFNDEF MSWINDOWS}name '_TabSheet_GetParentFont'{$ENDIF},
  TabSheet_SetParentFont {$IFNDEF MSWINDOWS}name '_TabSheet_SetParentFont'{$ENDIF},
  TabSheet_GetParentShowHint {$IFNDEF MSWINDOWS}name '_TabSheet_GetParentShowHint'{$ENDIF},
  TabSheet_SetParentShowHint {$IFNDEF MSWINDOWS}name '_TabSheet_SetParentShowHint'{$ENDIF},
  TabSheet_GetPopupMenu {$IFNDEF MSWINDOWS}name '_TabSheet_GetPopupMenu'{$ENDIF},
  TabSheet_SetPopupMenu {$IFNDEF MSWINDOWS}name '_TabSheet_SetPopupMenu'{$ENDIF},
  TabSheet_GetShowHint {$IFNDEF MSWINDOWS}name '_TabSheet_GetShowHint'{$ENDIF},
  TabSheet_SetShowHint {$IFNDEF MSWINDOWS}name '_TabSheet_SetShowHint'{$ENDIF},
  TabSheet_GetTabVisible {$IFNDEF MSWINDOWS}name '_TabSheet_GetTabVisible'{$ENDIF},
  TabSheet_SetTabVisible {$IFNDEF MSWINDOWS}name '_TabSheet_SetTabVisible'{$ENDIF},
  TabSheet_GetTop {$IFNDEF MSWINDOWS}name '_TabSheet_GetTop'{$ENDIF},
  TabSheet_SetTop {$IFNDEF MSWINDOWS}name '_TabSheet_SetTop'{$ENDIF},
  TabSheet_GetVisible {$IFNDEF MSWINDOWS}name '_TabSheet_GetVisible'{$ENDIF},
  TabSheet_SetVisible {$IFNDEF MSWINDOWS}name '_TabSheet_SetVisible'{$ENDIF},
  TabSheet_GetWidth {$IFNDEF MSWINDOWS}name '_TabSheet_GetWidth'{$ENDIF},
  TabSheet_SetWidth {$IFNDEF MSWINDOWS}name '_TabSheet_SetWidth'{$ENDIF},
  TabSheet_SetOnEnter {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnEnter'{$ENDIF},
  TabSheet_SetOnExit {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnExit'{$ENDIF},
  TabSheet_SetOnHide {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnHide'{$ENDIF},
  TabSheet_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnMouseDown'{$ENDIF},
  TabSheet_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnMouseEnter'{$ENDIF},
  TabSheet_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnMouseLeave'{$ENDIF},
  TabSheet_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnMouseMove'{$ENDIF},
  TabSheet_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnMouseUp'{$ENDIF},
  TabSheet_SetOnResize {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnResize'{$ENDIF},
  TabSheet_SetOnShow {$IFNDEF MSWINDOWS}name '_TabSheet_SetOnShow'{$ENDIF},
  TabSheet_GetBrush {$IFNDEF MSWINDOWS}name '_TabSheet_GetBrush'{$ENDIF},
  TabSheet_GetControlCount {$IFNDEF MSWINDOWS}name '_TabSheet_GetControlCount'{$ENDIF},
  TabSheet_GetHandle {$IFNDEF MSWINDOWS}name '_TabSheet_GetHandle'{$ENDIF},
  TabSheet_GetParentWindow {$IFNDEF MSWINDOWS}name '_TabSheet_GetParentWindow'{$ENDIF},
  TabSheet_SetParentWindow {$IFNDEF MSWINDOWS}name '_TabSheet_SetParentWindow'{$ENDIF},
  TabSheet_GetTabOrder {$IFNDEF MSWINDOWS}name '_TabSheet_GetTabOrder'{$ENDIF},
  TabSheet_SetTabOrder {$IFNDEF MSWINDOWS}name '_TabSheet_SetTabOrder'{$ENDIF},
  TabSheet_GetTabStop {$IFNDEF MSWINDOWS}name '_TabSheet_GetTabStop'{$ENDIF},
  TabSheet_SetTabStop {$IFNDEF MSWINDOWS}name '_TabSheet_SetTabStop'{$ENDIF},
  TabSheet_GetAction {$IFNDEF MSWINDOWS}name '_TabSheet_GetAction'{$ENDIF},
  TabSheet_SetAction {$IFNDEF MSWINDOWS}name '_TabSheet_SetAction'{$ENDIF},
  TabSheet_GetAlign {$IFNDEF MSWINDOWS}name '_TabSheet_GetAlign'{$ENDIF},
  TabSheet_SetAlign {$IFNDEF MSWINDOWS}name '_TabSheet_SetAlign'{$ENDIF},
  TabSheet_GetAnchors {$IFNDEF MSWINDOWS}name '_TabSheet_GetAnchors'{$ENDIF},
  TabSheet_SetAnchors {$IFNDEF MSWINDOWS}name '_TabSheet_SetAnchors'{$ENDIF},
  TabSheet_GetBiDiMode {$IFNDEF MSWINDOWS}name '_TabSheet_GetBiDiMode'{$ENDIF},
  TabSheet_SetBiDiMode {$IFNDEF MSWINDOWS}name '_TabSheet_SetBiDiMode'{$ENDIF},
  TabSheet_GetBoundsRect {$IFNDEF MSWINDOWS}name '_TabSheet_GetBoundsRect'{$ENDIF},
  TabSheet_SetBoundsRect {$IFNDEF MSWINDOWS}name '_TabSheet_SetBoundsRect'{$ENDIF},
  TabSheet_GetClientHeight {$IFNDEF MSWINDOWS}name '_TabSheet_GetClientHeight'{$ENDIF},
  TabSheet_SetClientHeight {$IFNDEF MSWINDOWS}name '_TabSheet_SetClientHeight'{$ENDIF},
  TabSheet_GetClientRect {$IFNDEF MSWINDOWS}name '_TabSheet_GetClientRect'{$ENDIF},
  TabSheet_GetClientWidth {$IFNDEF MSWINDOWS}name '_TabSheet_GetClientWidth'{$ENDIF},
  TabSheet_SetClientWidth {$IFNDEF MSWINDOWS}name '_TabSheet_SetClientWidth'{$ENDIF},
  //TabSheet_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_TabSheet_GetExplicitLeft'{$ENDIF},
  //TabSheet_GetExplicitTop {$IFNDEF MSWINDOWS}name '_TabSheet_GetExplicitTop'{$ENDIF},
  //TabSheet_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_TabSheet_GetExplicitWidth'{$ENDIF},
  //TabSheet_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_TabSheet_GetExplicitHeight'{$ENDIF},
  TabSheet_GetParent {$IFNDEF MSWINDOWS}name '_TabSheet_GetParent'{$ENDIF},
  TabSheet_SetParent {$IFNDEF MSWINDOWS}name '_TabSheet_SetParent'{$ENDIF},
  //TabSheet_GetStyleElements {$IFNDEF MSWINDOWS}name '_TabSheet_GetStyleElements'{$ENDIF},
  //TabSheet_SetStyleElements {$IFNDEF MSWINDOWS}name '_TabSheet_SetStyleElements'{$ENDIF},
  //TabSheet_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_TabSheet_GetAlignWithMargins'{$ENDIF},
  //TabSheet_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_TabSheet_SetAlignWithMargins'{$ENDIF},
  TabSheet_GetCursor {$IFNDEF MSWINDOWS}name '_TabSheet_GetCursor'{$ENDIF},
  TabSheet_SetCursor {$IFNDEF MSWINDOWS}name '_TabSheet_SetCursor'{$ENDIF},
  TabSheet_GetHint {$IFNDEF MSWINDOWS}name '_TabSheet_GetHint'{$ENDIF},
  TabSheet_SetHint {$IFNDEF MSWINDOWS}name '_TabSheet_SetHint'{$ENDIF},
  //TabSheet_GetMargins {$IFNDEF MSWINDOWS}name '_TabSheet_GetMargins'{$ENDIF},
  //TabSheet_SetMargins {$IFNDEF MSWINDOWS}name '_TabSheet_SetMargins'{$ENDIF},
  TabSheet_GetComponentCount {$IFNDEF MSWINDOWS}name '_TabSheet_GetComponentCount'{$ENDIF},
  TabSheet_GetComponentIndex {$IFNDEF MSWINDOWS}name '_TabSheet_GetComponentIndex'{$ENDIF},
  TabSheet_SetComponentIndex {$IFNDEF MSWINDOWS}name '_TabSheet_SetComponentIndex'{$ENDIF},
  TabSheet_GetOwner {$IFNDEF MSWINDOWS}name '_TabSheet_GetOwner'{$ENDIF},
  TabSheet_GetName {$IFNDEF MSWINDOWS}name '_TabSheet_GetName'{$ENDIF},
  TabSheet_SetName {$IFNDEF MSWINDOWS}name '_TabSheet_SetName'{$ENDIF},
  TabSheet_GetTag {$IFNDEF MSWINDOWS}name '_TabSheet_GetTag'{$ENDIF},
  TabSheet_SetTag {$IFNDEF MSWINDOWS}name '_TabSheet_SetTag'{$ENDIF},
  TabSheet_GetControls {$IFNDEF MSWINDOWS}name '_TabSheet_GetControls'{$ENDIF},
  TabSheet_GetComponents {$IFNDEF MSWINDOWS}name '_TabSheet_GetComponents'{$ENDIF};

