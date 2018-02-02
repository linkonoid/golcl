
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function PageControl_Create(AOwner: TComponent): TPageControl; cdecl;
begin
  Result :=  TPageControl.Create(AOwner);
end;

procedure PageControl_Free(AObj: TPageControl); cdecl;
begin
  AObj.Free;
end;

procedure PageControl_SelectNextPage(AObj: TPageControl; GoForward: LongBool; CheckTabVisible: LongBool); cdecl;
begin
  AObj.SelectNextPage(GoForward, CheckTabVisible);
end;

//function PageControl_RowCount(AObj: TPageControl): Integer; cdecl;
//begin
//  Result :=  AObj.RowCount;
//end;

function PageControl_CanFocus(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure PageControl_FlipChildren(AObj: TPageControl; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function PageControl_Focused(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function PageControl_HandleAllocated(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure PageControl_Invalidate(AObj: TPageControl); cdecl;
begin
  AObj.Invalidate;
end;

procedure PageControl_Realign(AObj: TPageControl); cdecl;
begin
  AObj.Realign;
end;

procedure PageControl_Repaint(AObj: TPageControl); cdecl;
begin
  AObj.Repaint;
end;

procedure PageControl_ScaleBy(AObj: TPageControl; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure PageControl_SetBounds(AObj: TPageControl; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure PageControl_SetFocus(AObj: TPageControl); cdecl;
begin
  AObj.SetFocus;
end;

procedure PageControl_Update(AObj: TPageControl); cdecl;
begin
  AObj.Update;
end;

procedure PageControl_BringToFront(AObj: TPageControl); cdecl;
begin
  AObj.BringToFront;
end;

function PageControl_HasParent(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure PageControl_Hide(AObj: TPageControl); cdecl;
begin
  AObj.Hide;
end;

function PageControl_Perform(AObj: TPageControl; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure PageControl_Refresh(AObj: TPageControl); cdecl;
begin
  AObj.Refresh;
end;

procedure PageControl_SendToBack(AObj: TPageControl); cdecl;
begin
  AObj.SendToBack;
end;

procedure PageControl_Show(AObj: TPageControl); cdecl;
begin
  AObj.Show;
end;

function PageControl_GetTextBuf(AObj: TPageControl; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function PageControl_FindComponent(AObj: TPageControl; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function PageControl_GetNamePath(AObj: TPageControl): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure PageControl_Assign(AObj: TPageControl; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function PageControl_ClassName(AObj: TPageControl): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function PageControl_Equals(AObj: TPageControl; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function PageControl_GetHashCode(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function PageControl_ToString(AObj: TPageControl): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function PageControl_GetActivePageIndex(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.ActivePageIndex;
end;

procedure PageControl_SetActivePageIndex(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.ActivePageIndex := AValue;
end;

function PageControl_GetPageCount(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.PageCount;
end;

function PageControl_GetAlign(AObj: TPageControl): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure PageControl_SetAlign(AObj: TPageControl; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function PageControl_GetAnchors(AObj: TPageControl): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure PageControl_SetAnchors(AObj: TPageControl; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function PageControl_GetBiDiMode(AObj: TPageControl): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure PageControl_SetBiDiMode(AObj: TPageControl; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function PageControl_GetDoubleBuffered(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure PageControl_SetDoubleBuffered(AObj: TPageControl; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function PageControl_GetEnabled(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure PageControl_SetEnabled(AObj: TPageControl; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function PageControl_GetFont(AObj: TPageControl): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure PageControl_SetFont(AObj: TPageControl; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

//function PageControl_GetHotTrack(AObj: TPageControl): LongBool; cdecl;
//begin
//  Result :=  AObj.HotTrack;
//end;
//
//procedure PageControl_SetHotTrack(AObj: TPageControl; AValue: LongBool); cdecl;
//begin
//  AObj.HotTrack := AValue;
//end;
//
//function PageControl_GetImages(AObj: TPageControl): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.Images;
//end;
//
//procedure PageControl_SetImages(AObj: TPageControl; AValue: TCustomImageList); cdecl;
//begin
//  AObj.Images := AValue;
//end;

function PageControl_GetMultiLine(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.MultiLine;
end;

procedure PageControl_SetMultiLine(AObj: TPageControl; AValue: LongBool); cdecl;
begin
  AObj.MultiLine := AValue;
end;

//function PageControl_GetParentDoubleBuffered(AObj: TPageControl): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure PageControl_SetParentDoubleBuffered(AObj: TPageControl; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function PageControl_GetParentFont(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure PageControl_SetParentFont(AObj: TPageControl; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function PageControl_GetParentShowHint(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure PageControl_SetParentShowHint(AObj: TPageControl; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function PageControl_GetPopupMenu(AObj: TPageControl): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure PageControl_SetPopupMenu(AObj: TPageControl; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function PageControl_GetShowHint(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure PageControl_SetShowHint(AObj: TPageControl; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

//function PageControl_GetStyle(AObj: TPageControl): TTabStyle; cdecl;
//begin
//  Result :=  AObj.Style;
//end;
//
//procedure PageControl_SetStyle(AObj: TPageControl; AValue: TTabStyle); cdecl;
//begin
//  AObj.Style := AValue;
//end;

function PageControl_GetTabHeight(AObj: TPageControl): SmallInt; cdecl;
begin
  Result :=  AObj.TabHeight;
end;

procedure PageControl_SetTabHeight(AObj: TPageControl; AValue: SmallInt); cdecl;
begin
  AObj.TabHeight := AValue;
end;

function PageControl_GetTabIndex(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.TabIndex;
end;

procedure PageControl_SetTabIndex(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.TabIndex := AValue;
end;

function PageControl_GetTabOrder(AObj: TPageControl): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure PageControl_SetTabOrder(AObj: TPageControl; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function PageControl_GetTabPosition(AObj: TPageControl): TTabPosition; cdecl;
begin
  Result :=  AObj.TabPosition;
end;

procedure PageControl_SetTabPosition(AObj: TPageControl; AValue: TTabPosition); cdecl;
begin
  AObj.TabPosition := AValue;
end;

function PageControl_GetTabStop(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure PageControl_SetTabStop(AObj: TPageControl; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function PageControl_GetTabWidth(AObj: TPageControl): SmallInt; cdecl;
begin
  Result :=  AObj.TabWidth;
end;

procedure PageControl_SetTabWidth(AObj: TPageControl; AValue: SmallInt); cdecl;
begin
  AObj.TabWidth := AValue;
end;

function PageControl_GetVisible(AObj: TPageControl): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure PageControl_SetVisible(AObj: TPageControl; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function PageControl_GetStyleElements(AObj: TPageControl): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure PageControl_SetStyleElements(AObj: TPageControl; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure PageControl_SetOnChange(AObj: TPageControl; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, geChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.OnChange;
  TEventClass.Add(AObj, geChange, AEventId);
end;

procedure PageControl_SetOnEnter(AObj: TPageControl; AEventId: NativeUInt); stdcall;
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

procedure PageControl_SetOnExit(AObj: TPageControl; AEventId: NativeUInt); stdcall;
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

procedure PageControl_SetOnMouseDown(AObj: TPageControl; AEventId: NativeUInt); stdcall;
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

procedure PageControl_SetOnMouseEnter(AObj: TPageControl; AEventId: NativeUInt); stdcall;
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

procedure PageControl_SetOnMouseLeave(AObj: TPageControl; AEventId: NativeUInt); stdcall;
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

procedure PageControl_SetOnMouseMove(AObj: TPageControl; AEventId: NativeUInt); stdcall;
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

procedure PageControl_SetOnMouseUp(AObj: TPageControl; AEventId: NativeUInt); stdcall;
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

procedure PageControl_SetOnResize(AObj: TPageControl; AEventId: NativeUInt); stdcall;
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

//function PageControl_GetCanvas(AObj: TPageControl): TCanvas; cdecl;
//begin
//  Result :=  AObj.Canvas;
//end;

function PageControl_GetBrush(AObj: TPageControl): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function PageControl_GetControlCount(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function PageControl_GetHandle(AObj: TPageControl): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function PageControl_GetParentWindow(AObj: TPageControl): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure PageControl_SetParentWindow(AObj: TPageControl; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function PageControl_GetAction(AObj: TPageControl): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure PageControl_SetAction(AObj: TPageControl; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure PageControl_GetBoundsRect(AObj: TPageControl; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure PageControl_SetBoundsRect(AObj: TPageControl; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function PageControl_GetClientHeight(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure PageControl_SetClientHeight(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure PageControl_GetClientRect(AObj: TPageControl; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function PageControl_GetClientWidth(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure PageControl_SetClientWidth(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function PageControl_GetExplicitLeft(AObj: TPageControl): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function PageControl_GetExplicitTop(AObj: TPageControl): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function PageControl_GetExplicitWidth(AObj: TPageControl): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function PageControl_GetExplicitHeight(AObj: TPageControl): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function PageControl_GetParent(AObj: TPageControl): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure PageControl_SetParent(AObj: TPageControl; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function PageControl_GetAlignWithMargins(AObj: TPageControl): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure PageControl_SetAlignWithMargins(AObj: TPageControl; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function PageControl_GetLeft(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure PageControl_SetLeft(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function PageControl_GetTop(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure PageControl_SetTop(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function PageControl_GetWidth(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure PageControl_SetWidth(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function PageControl_GetHeight(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure PageControl_SetHeight(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function PageControl_GetCursor(AObj: TPageControl): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure PageControl_SetCursor(AObj: TPageControl; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function PageControl_GetHint(AObj: TPageControl): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure PageControl_SetHint(AObj: TPageControl; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function PageControl_GetMargins(AObj: TPageControl): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure PageControl_SetMargins(AObj: TPageControl; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function PageControl_GetComponentCount(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function PageControl_GetComponentIndex(AObj: TPageControl): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure PageControl_SetComponentIndex(AObj: TPageControl; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function PageControl_GetOwner(AObj: TPageControl): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function PageControl_GetName(AObj: TPageControl): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure PageControl_SetName(AObj: TPageControl; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function PageControl_GetTag(AObj: TPageControl): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure PageControl_SetTag(AObj: TPageControl; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function PageControl_GetPages(AObj: TPageControl; Index: Integer): TTabSheet; cdecl;
begin
  Result :=  AObj.Pages[Index];
end;

function PageControl_GetControls(AObj: TPageControl; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function PageControl_GetComponents(AObj: TPageControl; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  PageControl_Create {$IFNDEF MSWINDOWS}name '_PageControl_Create'{$ENDIF},
  PageControl_Free {$IFNDEF MSWINDOWS}name '_PageControl_Free'{$ENDIF},
  PageControl_SelectNextPage {$IFNDEF MSWINDOWS}name '_PageControl_SelectNextPage'{$ENDIF},
  //PageControl_RowCount {$IFNDEF MSWINDOWS}name '_PageControl_RowCount'{$ENDIF},
  PageControl_CanFocus {$IFNDEF MSWINDOWS}name '_PageControl_CanFocus'{$ENDIF},
  PageControl_FlipChildren {$IFNDEF MSWINDOWS}name '_PageControl_FlipChildren'{$ENDIF},
  PageControl_Focused {$IFNDEF MSWINDOWS}name '_PageControl_Focused'{$ENDIF},
  PageControl_HandleAllocated {$IFNDEF MSWINDOWS}name '_PageControl_HandleAllocated'{$ENDIF},
  PageControl_Invalidate {$IFNDEF MSWINDOWS}name '_PageControl_Invalidate'{$ENDIF},
  PageControl_Realign {$IFNDEF MSWINDOWS}name '_PageControl_Realign'{$ENDIF},
  PageControl_Repaint {$IFNDEF MSWINDOWS}name '_PageControl_Repaint'{$ENDIF},
  PageControl_ScaleBy {$IFNDEF MSWINDOWS}name '_PageControl_ScaleBy'{$ENDIF},
  PageControl_SetBounds {$IFNDEF MSWINDOWS}name '_PageControl_SetBounds'{$ENDIF},
  PageControl_SetFocus {$IFNDEF MSWINDOWS}name '_PageControl_SetFocus'{$ENDIF},
  PageControl_Update {$IFNDEF MSWINDOWS}name '_PageControl_Update'{$ENDIF},
  PageControl_BringToFront {$IFNDEF MSWINDOWS}name '_PageControl_BringToFront'{$ENDIF},
  PageControl_HasParent {$IFNDEF MSWINDOWS}name '_PageControl_HasParent'{$ENDIF},
  PageControl_Hide {$IFNDEF MSWINDOWS}name '_PageControl_Hide'{$ENDIF},
  PageControl_Perform {$IFNDEF MSWINDOWS}name '_PageControl_Perform'{$ENDIF},
  PageControl_Refresh {$IFNDEF MSWINDOWS}name '_PageControl_Refresh'{$ENDIF},
  PageControl_SendToBack {$IFNDEF MSWINDOWS}name '_PageControl_SendToBack'{$ENDIF},
  PageControl_Show {$IFNDEF MSWINDOWS}name '_PageControl_Show'{$ENDIF},
  PageControl_GetTextBuf {$IFNDEF MSWINDOWS}name '_PageControl_GetTextBuf'{$ENDIF},
  PageControl_FindComponent {$IFNDEF MSWINDOWS}name '_PageControl_FindComponent'{$ENDIF},
  PageControl_GetNamePath {$IFNDEF MSWINDOWS}name '_PageControl_GetNamePath'{$ENDIF},
  PageControl_Assign {$IFNDEF MSWINDOWS}name '_PageControl_Assign'{$ENDIF},
  PageControl_ClassName {$IFNDEF MSWINDOWS}name '_PageControl_ClassName'{$ENDIF},
  PageControl_Equals {$IFNDEF MSWINDOWS}name '_PageControl_Equals'{$ENDIF},
  PageControl_GetHashCode {$IFNDEF MSWINDOWS}name '_PageControl_GetHashCode'{$ENDIF},
  PageControl_ToString {$IFNDEF MSWINDOWS}name '_PageControl_ToString'{$ENDIF},
  PageControl_GetActivePageIndex {$IFNDEF MSWINDOWS}name '_PageControl_GetActivePageIndex'{$ENDIF},
  PageControl_SetActivePageIndex {$IFNDEF MSWINDOWS}name '_PageControl_SetActivePageIndex'{$ENDIF},
  PageControl_GetPageCount {$IFNDEF MSWINDOWS}name '_PageControl_GetPageCount'{$ENDIF},
  PageControl_GetAlign {$IFNDEF MSWINDOWS}name '_PageControl_GetAlign'{$ENDIF},
  PageControl_SetAlign {$IFNDEF MSWINDOWS}name '_PageControl_SetAlign'{$ENDIF},
  PageControl_GetAnchors {$IFNDEF MSWINDOWS}name '_PageControl_GetAnchors'{$ENDIF},
  PageControl_SetAnchors {$IFNDEF MSWINDOWS}name '_PageControl_SetAnchors'{$ENDIF},
  PageControl_GetBiDiMode {$IFNDEF MSWINDOWS}name '_PageControl_GetBiDiMode'{$ENDIF},
  PageControl_SetBiDiMode {$IFNDEF MSWINDOWS}name '_PageControl_SetBiDiMode'{$ENDIF},
  PageControl_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_PageControl_GetDoubleBuffered'{$ENDIF},
  PageControl_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_PageControl_SetDoubleBuffered'{$ENDIF},
  PageControl_GetEnabled {$IFNDEF MSWINDOWS}name '_PageControl_GetEnabled'{$ENDIF},
  PageControl_SetEnabled {$IFNDEF MSWINDOWS}name '_PageControl_SetEnabled'{$ENDIF},
  PageControl_GetFont {$IFNDEF MSWINDOWS}name '_PageControl_GetFont'{$ENDIF},
  PageControl_SetFont {$IFNDEF MSWINDOWS}name '_PageControl_SetFont'{$ENDIF},
  //PageControl_GetHotTrack {$IFNDEF MSWINDOWS}name '_PageControl_GetHotTrack'{$ENDIF},
  //PageControl_SetHotTrack {$IFNDEF MSWINDOWS}name '_PageControl_SetHotTrack'{$ENDIF},
  //PageControl_GetImages {$IFNDEF MSWINDOWS}name '_PageControl_GetImages'{$ENDIF},
  //PageControl_SetImages {$IFNDEF MSWINDOWS}name '_PageControl_SetImages'{$ENDIF},
  PageControl_GetMultiLine {$IFNDEF MSWINDOWS}name '_PageControl_GetMultiLine'{$ENDIF},
  PageControl_SetMultiLine {$IFNDEF MSWINDOWS}name '_PageControl_SetMultiLine'{$ENDIF},
  //PageControl_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_PageControl_GetParentDoubleBuffered'{$ENDIF},
  //PageControl_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_PageControl_SetParentDoubleBuffered'{$ENDIF},
  PageControl_GetParentFont {$IFNDEF MSWINDOWS}name '_PageControl_GetParentFont'{$ENDIF},
  PageControl_SetParentFont {$IFNDEF MSWINDOWS}name '_PageControl_SetParentFont'{$ENDIF},
  PageControl_GetParentShowHint {$IFNDEF MSWINDOWS}name '_PageControl_GetParentShowHint'{$ENDIF},
  PageControl_SetParentShowHint {$IFNDEF MSWINDOWS}name '_PageControl_SetParentShowHint'{$ENDIF},
  PageControl_GetPopupMenu {$IFNDEF MSWINDOWS}name '_PageControl_GetPopupMenu'{$ENDIF},
  PageControl_SetPopupMenu {$IFNDEF MSWINDOWS}name '_PageControl_SetPopupMenu'{$ENDIF},
  PageControl_GetShowHint {$IFNDEF MSWINDOWS}name '_PageControl_GetShowHint'{$ENDIF},
  PageControl_SetShowHint {$IFNDEF MSWINDOWS}name '_PageControl_SetShowHint'{$ENDIF},
  //PageControl_GetStyle {$IFNDEF MSWINDOWS}name '_PageControl_GetStyle'{$ENDIF},
  //PageControl_SetStyle {$IFNDEF MSWINDOWS}name '_PageControl_SetStyle'{$ENDIF},
  PageControl_GetTabHeight {$IFNDEF MSWINDOWS}name '_PageControl_GetTabHeight'{$ENDIF},
  PageControl_SetTabHeight {$IFNDEF MSWINDOWS}name '_PageControl_SetTabHeight'{$ENDIF},
  PageControl_GetTabIndex {$IFNDEF MSWINDOWS}name '_PageControl_GetTabIndex'{$ENDIF},
  PageControl_SetTabIndex {$IFNDEF MSWINDOWS}name '_PageControl_SetTabIndex'{$ENDIF},
  PageControl_GetTabOrder {$IFNDEF MSWINDOWS}name '_PageControl_GetTabOrder'{$ENDIF},
  PageControl_SetTabOrder {$IFNDEF MSWINDOWS}name '_PageControl_SetTabOrder'{$ENDIF},
  PageControl_GetTabPosition {$IFNDEF MSWINDOWS}name '_PageControl_GetTabPosition'{$ENDIF},
  PageControl_SetTabPosition {$IFNDEF MSWINDOWS}name '_PageControl_SetTabPosition'{$ENDIF},
  PageControl_GetTabStop {$IFNDEF MSWINDOWS}name '_PageControl_GetTabStop'{$ENDIF},
  PageControl_SetTabStop {$IFNDEF MSWINDOWS}name '_PageControl_SetTabStop'{$ENDIF},
  PageControl_GetTabWidth {$IFNDEF MSWINDOWS}name '_PageControl_GetTabWidth'{$ENDIF},
  PageControl_SetTabWidth {$IFNDEF MSWINDOWS}name '_PageControl_SetTabWidth'{$ENDIF},
  PageControl_GetVisible {$IFNDEF MSWINDOWS}name '_PageControl_GetVisible'{$ENDIF},
  PageControl_SetVisible {$IFNDEF MSWINDOWS}name '_PageControl_SetVisible'{$ENDIF},
  //PageControl_GetStyleElements {$IFNDEF MSWINDOWS}name '_PageControl_GetStyleElements'{$ENDIF},
  //PageControl_SetStyleElements {$IFNDEF MSWINDOWS}name '_PageControl_SetStyleElements'{$ENDIF},
  PageControl_SetOnChange {$IFNDEF MSWINDOWS}name '_PageControl_SetOnChange'{$ENDIF},
  PageControl_SetOnEnter {$IFNDEF MSWINDOWS}name '_PageControl_SetOnEnter'{$ENDIF},
  PageControl_SetOnExit {$IFNDEF MSWINDOWS}name '_PageControl_SetOnExit'{$ENDIF},
  PageControl_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_PageControl_SetOnMouseDown'{$ENDIF},
  PageControl_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_PageControl_SetOnMouseEnter'{$ENDIF},
  PageControl_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_PageControl_SetOnMouseLeave'{$ENDIF},
  PageControl_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_PageControl_SetOnMouseMove'{$ENDIF},
  PageControl_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_PageControl_SetOnMouseUp'{$ENDIF},
  PageControl_SetOnResize {$IFNDEF MSWINDOWS}name '_PageControl_SetOnResize'{$ENDIF},
  //PageControl_GetCanvas {$IFNDEF MSWINDOWS}name '_PageControl_GetCanvas'{$ENDIF},
  PageControl_GetBrush {$IFNDEF MSWINDOWS}name '_PageControl_GetBrush'{$ENDIF},
  PageControl_GetControlCount {$IFNDEF MSWINDOWS}name '_PageControl_GetControlCount'{$ENDIF},
  PageControl_GetHandle {$IFNDEF MSWINDOWS}name '_PageControl_GetHandle'{$ENDIF},
  PageControl_GetParentWindow {$IFNDEF MSWINDOWS}name '_PageControl_GetParentWindow'{$ENDIF},
  PageControl_SetParentWindow {$IFNDEF MSWINDOWS}name '_PageControl_SetParentWindow'{$ENDIF},
  PageControl_GetAction {$IFNDEF MSWINDOWS}name '_PageControl_GetAction'{$ENDIF},
  PageControl_SetAction {$IFNDEF MSWINDOWS}name '_PageControl_SetAction'{$ENDIF},
  PageControl_GetBoundsRect {$IFNDEF MSWINDOWS}name '_PageControl_GetBoundsRect'{$ENDIF},
  PageControl_SetBoundsRect {$IFNDEF MSWINDOWS}name '_PageControl_SetBoundsRect'{$ENDIF},
  PageControl_GetClientHeight {$IFNDEF MSWINDOWS}name '_PageControl_GetClientHeight'{$ENDIF},
  PageControl_SetClientHeight {$IFNDEF MSWINDOWS}name '_PageControl_SetClientHeight'{$ENDIF},
  PageControl_GetClientRect {$IFNDEF MSWINDOWS}name '_PageControl_GetClientRect'{$ENDIF},
  PageControl_GetClientWidth {$IFNDEF MSWINDOWS}name '_PageControl_GetClientWidth'{$ENDIF},
  PageControl_SetClientWidth {$IFNDEF MSWINDOWS}name '_PageControl_SetClientWidth'{$ENDIF},
  //PageControl_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_PageControl_GetExplicitLeft'{$ENDIF},
  //PageControl_GetExplicitTop {$IFNDEF MSWINDOWS}name '_PageControl_GetExplicitTop'{$ENDIF},
  //PageControl_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_PageControl_GetExplicitWidth'{$ENDIF},
  //PageControl_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_PageControl_GetExplicitHeight'{$ENDIF},
  PageControl_GetParent {$IFNDEF MSWINDOWS}name '_PageControl_GetParent'{$ENDIF},
  PageControl_SetParent {$IFNDEF MSWINDOWS}name '_PageControl_SetParent'{$ENDIF},
  //PageControl_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_PageControl_GetAlignWithMargins'{$ENDIF},
  //PageControl_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_PageControl_SetAlignWithMargins'{$ENDIF},
  PageControl_GetLeft {$IFNDEF MSWINDOWS}name '_PageControl_GetLeft'{$ENDIF},
  PageControl_SetLeft {$IFNDEF MSWINDOWS}name '_PageControl_SetLeft'{$ENDIF},
  PageControl_GetTop {$IFNDEF MSWINDOWS}name '_PageControl_GetTop'{$ENDIF},
  PageControl_SetTop {$IFNDEF MSWINDOWS}name '_PageControl_SetTop'{$ENDIF},
  PageControl_GetWidth {$IFNDEF MSWINDOWS}name '_PageControl_GetWidth'{$ENDIF},
  PageControl_SetWidth {$IFNDEF MSWINDOWS}name '_PageControl_SetWidth'{$ENDIF},
  PageControl_GetHeight {$IFNDEF MSWINDOWS}name '_PageControl_GetHeight'{$ENDIF},
  PageControl_SetHeight {$IFNDEF MSWINDOWS}name '_PageControl_SetHeight'{$ENDIF},
  PageControl_GetCursor {$IFNDEF MSWINDOWS}name '_PageControl_GetCursor'{$ENDIF},
  PageControl_SetCursor {$IFNDEF MSWINDOWS}name '_PageControl_SetCursor'{$ENDIF},
  PageControl_GetHint {$IFNDEF MSWINDOWS}name '_PageControl_GetHint'{$ENDIF},
  PageControl_SetHint {$IFNDEF MSWINDOWS}name '_PageControl_SetHint'{$ENDIF},
  //PageControl_GetMargins {$IFNDEF MSWINDOWS}name '_PageControl_GetMargins'{$ENDIF},
  //PageControl_SetMargins {$IFNDEF MSWINDOWS}name '_PageControl_SetMargins'{$ENDIF},
  PageControl_GetComponentCount {$IFNDEF MSWINDOWS}name '_PageControl_GetComponentCount'{$ENDIF},
  PageControl_GetComponentIndex {$IFNDEF MSWINDOWS}name '_PageControl_GetComponentIndex'{$ENDIF},
  PageControl_SetComponentIndex {$IFNDEF MSWINDOWS}name '_PageControl_SetComponentIndex'{$ENDIF},
  PageControl_GetOwner {$IFNDEF MSWINDOWS}name '_PageControl_GetOwner'{$ENDIF},
  PageControl_GetName {$IFNDEF MSWINDOWS}name '_PageControl_GetName'{$ENDIF},
  PageControl_SetName {$IFNDEF MSWINDOWS}name '_PageControl_SetName'{$ENDIF},
  PageControl_GetTag {$IFNDEF MSWINDOWS}name '_PageControl_GetTag'{$ENDIF},
  PageControl_SetTag {$IFNDEF MSWINDOWS}name '_PageControl_SetTag'{$ENDIF},
  PageControl_GetPages {$IFNDEF MSWINDOWS}name '_PageControl_GetPages'{$ENDIF},
  PageControl_GetControls {$IFNDEF MSWINDOWS}name '_PageControl_GetControls'{$ENDIF},
  PageControl_GetComponents {$IFNDEF MSWINDOWS}name '_PageControl_GetComponents'{$ENDIF};

