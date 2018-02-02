
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ProgressBar_Create(AOwner: TComponent): TProgressBar; cdecl;
begin
  Result :=  TProgressBar.Create(AOwner);
end;

procedure ProgressBar_Free(AObj: TProgressBar); cdecl;
begin
  AObj.Free;
end;

procedure ProgressBar_StepIt(AObj: TProgressBar); cdecl;
begin
  AObj.StepIt;
end;

procedure ProgressBar_StepBy(AObj: TProgressBar; Delta: Integer); cdecl;
begin
  AObj.StepBy(Delta);
end;

function ProgressBar_CanFocus(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure ProgressBar_FlipChildren(AObj: TProgressBar; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ProgressBar_Focused(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function ProgressBar_HandleAllocated(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ProgressBar_Invalidate(AObj: TProgressBar); cdecl;
begin
  AObj.Invalidate;
end;

procedure ProgressBar_Realign(AObj: TProgressBar); cdecl;
begin
  AObj.Realign;
end;

procedure ProgressBar_Repaint(AObj: TProgressBar); cdecl;
begin
  AObj.Repaint;
end;

procedure ProgressBar_ScaleBy(AObj: TProgressBar; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ProgressBar_SetBounds(AObj: TProgressBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ProgressBar_SetFocus(AObj: TProgressBar); cdecl;
begin
  AObj.SetFocus;
end;

procedure ProgressBar_Update(AObj: TProgressBar); cdecl;
begin
  AObj.Update;
end;

procedure ProgressBar_BringToFront(AObj: TProgressBar); cdecl;
begin
  AObj.BringToFront;
end;

function ProgressBar_HasParent(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ProgressBar_Hide(AObj: TProgressBar); cdecl;
begin
  AObj.Hide;
end;

function ProgressBar_Perform(AObj: TProgressBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ProgressBar_Refresh(AObj: TProgressBar); cdecl;
begin
  AObj.Refresh;
end;

procedure ProgressBar_SendToBack(AObj: TProgressBar); cdecl;
begin
  AObj.SendToBack;
end;

procedure ProgressBar_Show(AObj: TProgressBar); cdecl;
begin
  AObj.Show;
end;

function ProgressBar_GetTextBuf(AObj: TProgressBar; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function ProgressBar_FindComponent(AObj: TProgressBar; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ProgressBar_GetNamePath(AObj: TProgressBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure ProgressBar_Assign(AObj: TProgressBar; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ProgressBar_ClassName(AObj: TProgressBar): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ProgressBar_Equals(AObj: TProgressBar; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ProgressBar_GetHashCode(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ProgressBar_ToString(AObj: TProgressBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ProgressBar_GetAlign(AObj: TProgressBar): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure ProgressBar_SetAlign(AObj: TProgressBar; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function ProgressBar_GetAnchors(AObj: TProgressBar): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ProgressBar_SetAnchors(AObj: TProgressBar; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function ProgressBar_GetBorderWidth(AObj: TProgressBar): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure ProgressBar_SetBorderWidth(AObj: TProgressBar; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function ProgressBar_GetDoubleBuffered(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ProgressBar_SetDoubleBuffered(AObj: TProgressBar; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ProgressBar_GetEnabled(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ProgressBar_SetEnabled(AObj: TProgressBar; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function ProgressBar_GetHint(AObj: TProgressBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure ProgressBar_SetHint(AObj: TProgressBar; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function ProgressBar_GetMin(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.Min;
end;

procedure ProgressBar_SetMin(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.Min := AValue;
end;

function ProgressBar_GetMax(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.Max;
end;

procedure ProgressBar_SetMax(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.Max := AValue;
end;

function ProgressBar_GetOrientation(AObj: TProgressBar): TProgressBarOrientation; cdecl;
begin
  Result :=  AObj.Orientation;
end;

procedure ProgressBar_SetOrientation(AObj: TProgressBar; AValue: TProgressBarOrientation); cdecl;
begin
  AObj.Orientation := AValue;
end;

//function ProgressBar_GetParentDoubleBuffered(AObj: TProgressBar): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure ProgressBar_SetParentDoubleBuffered(AObj: TProgressBar; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function ProgressBar_GetParentShowHint(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ProgressBar_SetParentShowHint(AObj: TProgressBar; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ProgressBar_GetPopupMenu(AObj: TProgressBar): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ProgressBar_SetPopupMenu(AObj: TProgressBar; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ProgressBar_GetPosition(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.Position;
end;

procedure ProgressBar_SetPosition(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.Position := AValue;
end;

function ProgressBar_GetSmooth(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.Smooth;
end;

procedure ProgressBar_SetSmooth(AObj: TProgressBar; AValue: LongBool); cdecl;
begin
  AObj.Smooth := AValue;
end;

function ProgressBar_GetStyle(AObj: TProgressBar): TProgressBarStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure ProgressBar_SetStyle(AObj: TProgressBar; AValue: TProgressBarStyle); cdecl;
begin
  AObj.Style := AValue;
end;

//function ProgressBar_GetMarqueeInterval(AObj: TProgressBar): Integer; cdecl;
//begin
//  Result :=  AObj.MarqueeInterval;
//end;
//
//procedure ProgressBar_SetMarqueeInterval(AObj: TProgressBar; AValue: Integer); cdecl;
//begin
//  AObj.MarqueeInterval := AValue;
//end;
//
//function ProgressBar_GetBarColor(AObj: TProgressBar): TColor; cdecl;
//begin
//  Result :=  AObj.BarColor;
//end;
//
//procedure ProgressBar_SetBarColor(AObj: TProgressBar; AValue: TColor); cdecl;
//begin
//  AObj.BarColor := AValue;
//end;
//
//function ProgressBar_GetBackgroundColor(AObj: TProgressBar): TColor; cdecl;
//begin
//  Result :=  AObj.BackgroundColor;
//end;
//
//procedure ProgressBar_SetBackgroundColor(AObj: TProgressBar; AValue: TColor); cdecl;
//begin
//  AObj.BackgroundColor := AValue;
//end;
//
//function ProgressBar_GetSmoothReverse(AObj: TProgressBar): LongBool; cdecl;
//begin
//  Result :=  AObj.SmoothReverse;
//end;
//
//procedure ProgressBar_SetSmoothReverse(AObj: TProgressBar; AValue: LongBool); cdecl;
//begin
//  AObj.SmoothReverse := AValue;
//end;

function ProgressBar_GetStep(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.Step;
end;

procedure ProgressBar_SetStep(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.Step := AValue;
end;

//function ProgressBar_GetState(AObj: TProgressBar): TProgressBarState; cdecl;
//begin
//  Result :=  AObj.State;
//end;
//
//procedure ProgressBar_SetState(AObj: TProgressBar; AValue: TProgressBarState); cdecl;
//begin
//  AObj.State := AValue;
//end;

function ProgressBar_GetShowHint(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ProgressBar_SetShowHint(AObj: TProgressBar; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function ProgressBar_GetTabOrder(AObj: TProgressBar): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ProgressBar_SetTabOrder(AObj: TProgressBar; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function ProgressBar_GetTabStop(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ProgressBar_SetTabStop(AObj: TProgressBar; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function ProgressBar_GetVisible(AObj: TProgressBar): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ProgressBar_SetVisible(AObj: TProgressBar; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function ProgressBar_GetStyleElements(AObj: TProgressBar): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure ProgressBar_SetStyleElements(AObj: TProgressBar; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure ProgressBar_SetOnEnter(AObj: TProgressBar; AEventId: NativeUInt); stdcall;
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

procedure ProgressBar_SetOnExit(AObj: TProgressBar; AEventId: NativeUInt); stdcall;
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

procedure ProgressBar_SetOnMouseDown(AObj: TProgressBar; AEventId: NativeUInt); stdcall;
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

procedure ProgressBar_SetOnMouseEnter(AObj: TProgressBar; AEventId: NativeUInt); stdcall;
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

procedure ProgressBar_SetOnMouseLeave(AObj: TProgressBar; AEventId: NativeUInt); stdcall;
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

procedure ProgressBar_SetOnMouseMove(AObj: TProgressBar; AEventId: NativeUInt); stdcall;
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

procedure ProgressBar_SetOnMouseUp(AObj: TProgressBar; AEventId: NativeUInt); stdcall;
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

function ProgressBar_GetBrush(AObj: TProgressBar): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function ProgressBar_GetControlCount(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ProgressBar_GetHandle(AObj: TProgressBar): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function ProgressBar_GetParentWindow(AObj: TProgressBar): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ProgressBar_SetParentWindow(AObj: TProgressBar; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ProgressBar_GetAction(AObj: TProgressBar): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure ProgressBar_SetAction(AObj: TProgressBar; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function ProgressBar_GetBiDiMode(AObj: TProgressBar): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ProgressBar_SetBiDiMode(AObj: TProgressBar; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure ProgressBar_GetBoundsRect(AObj: TProgressBar; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ProgressBar_SetBoundsRect(AObj: TProgressBar; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ProgressBar_GetClientHeight(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ProgressBar_SetClientHeight(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ProgressBar_GetClientRect(AObj: TProgressBar; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ProgressBar_GetClientWidth(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ProgressBar_SetClientWidth(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function ProgressBar_GetExplicitLeft(AObj: TProgressBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function ProgressBar_GetExplicitTop(AObj: TProgressBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function ProgressBar_GetExplicitWidth(AObj: TProgressBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function ProgressBar_GetExplicitHeight(AObj: TProgressBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function ProgressBar_GetParent(AObj: TProgressBar): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ProgressBar_SetParent(AObj: TProgressBar; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function ProgressBar_GetAlignWithMargins(AObj: TProgressBar): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure ProgressBar_SetAlignWithMargins(AObj: TProgressBar; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function ProgressBar_GetLeft(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ProgressBar_SetLeft(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ProgressBar_GetTop(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ProgressBar_SetTop(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ProgressBar_GetWidth(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ProgressBar_SetWidth(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function ProgressBar_GetHeight(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ProgressBar_SetHeight(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function ProgressBar_GetCursor(AObj: TProgressBar): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ProgressBar_SetCursor(AObj: TProgressBar; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

//function ProgressBar_GetMargins(AObj: TProgressBar): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure ProgressBar_SetMargins(AObj: TProgressBar; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function ProgressBar_GetComponentCount(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ProgressBar_GetComponentIndex(AObj: TProgressBar): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ProgressBar_SetComponentIndex(AObj: TProgressBar; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ProgressBar_GetOwner(AObj: TProgressBar): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ProgressBar_GetName(AObj: TProgressBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ProgressBar_SetName(AObj: TProgressBar; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ProgressBar_GetTag(AObj: TProgressBar): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ProgressBar_SetTag(AObj: TProgressBar; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ProgressBar_GetControls(AObj: TProgressBar; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ProgressBar_GetComponents(AObj: TProgressBar; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ProgressBar_Create {$IFNDEF MSWINDOWS}name '_ProgressBar_Create'{$ENDIF},
  ProgressBar_Free {$IFNDEF MSWINDOWS}name '_ProgressBar_Free'{$ENDIF},
  ProgressBar_StepIt {$IFNDEF MSWINDOWS}name '_ProgressBar_StepIt'{$ENDIF},
  ProgressBar_StepBy {$IFNDEF MSWINDOWS}name '_ProgressBar_StepBy'{$ENDIF},
  ProgressBar_CanFocus {$IFNDEF MSWINDOWS}name '_ProgressBar_CanFocus'{$ENDIF},
  ProgressBar_FlipChildren {$IFNDEF MSWINDOWS}name '_ProgressBar_FlipChildren'{$ENDIF},
  ProgressBar_Focused {$IFNDEF MSWINDOWS}name '_ProgressBar_Focused'{$ENDIF},
  ProgressBar_HandleAllocated {$IFNDEF MSWINDOWS}name '_ProgressBar_HandleAllocated'{$ENDIF},
  ProgressBar_Invalidate {$IFNDEF MSWINDOWS}name '_ProgressBar_Invalidate'{$ENDIF},
  ProgressBar_Realign {$IFNDEF MSWINDOWS}name '_ProgressBar_Realign'{$ENDIF},
  ProgressBar_Repaint {$IFNDEF MSWINDOWS}name '_ProgressBar_Repaint'{$ENDIF},
  ProgressBar_ScaleBy {$IFNDEF MSWINDOWS}name '_ProgressBar_ScaleBy'{$ENDIF},
  ProgressBar_SetBounds {$IFNDEF MSWINDOWS}name '_ProgressBar_SetBounds'{$ENDIF},
  ProgressBar_SetFocus {$IFNDEF MSWINDOWS}name '_ProgressBar_SetFocus'{$ENDIF},
  ProgressBar_Update {$IFNDEF MSWINDOWS}name '_ProgressBar_Update'{$ENDIF},
  ProgressBar_BringToFront {$IFNDEF MSWINDOWS}name '_ProgressBar_BringToFront'{$ENDIF},
  ProgressBar_HasParent {$IFNDEF MSWINDOWS}name '_ProgressBar_HasParent'{$ENDIF},
  ProgressBar_Hide {$IFNDEF MSWINDOWS}name '_ProgressBar_Hide'{$ENDIF},
  ProgressBar_Perform {$IFNDEF MSWINDOWS}name '_ProgressBar_Perform'{$ENDIF},
  ProgressBar_Refresh {$IFNDEF MSWINDOWS}name '_ProgressBar_Refresh'{$ENDIF},
  ProgressBar_SendToBack {$IFNDEF MSWINDOWS}name '_ProgressBar_SendToBack'{$ENDIF},
  ProgressBar_Show {$IFNDEF MSWINDOWS}name '_ProgressBar_Show'{$ENDIF},
  ProgressBar_GetTextBuf {$IFNDEF MSWINDOWS}name '_ProgressBar_GetTextBuf'{$ENDIF},
  ProgressBar_FindComponent {$IFNDEF MSWINDOWS}name '_ProgressBar_FindComponent'{$ENDIF},
  ProgressBar_GetNamePath {$IFNDEF MSWINDOWS}name '_ProgressBar_GetNamePath'{$ENDIF},
  ProgressBar_Assign {$IFNDEF MSWINDOWS}name '_ProgressBar_Assign'{$ENDIF},
  ProgressBar_ClassName {$IFNDEF MSWINDOWS}name '_ProgressBar_ClassName'{$ENDIF},
  ProgressBar_Equals {$IFNDEF MSWINDOWS}name '_ProgressBar_Equals'{$ENDIF},
  ProgressBar_GetHashCode {$IFNDEF MSWINDOWS}name '_ProgressBar_GetHashCode'{$ENDIF},
  ProgressBar_ToString {$IFNDEF MSWINDOWS}name '_ProgressBar_ToString'{$ENDIF},
  ProgressBar_GetAlign {$IFNDEF MSWINDOWS}name '_ProgressBar_GetAlign'{$ENDIF},
  ProgressBar_SetAlign {$IFNDEF MSWINDOWS}name '_ProgressBar_SetAlign'{$ENDIF},
  ProgressBar_GetAnchors {$IFNDEF MSWINDOWS}name '_ProgressBar_GetAnchors'{$ENDIF},
  ProgressBar_SetAnchors {$IFNDEF MSWINDOWS}name '_ProgressBar_SetAnchors'{$ENDIF},
  ProgressBar_GetBorderWidth {$IFNDEF MSWINDOWS}name '_ProgressBar_GetBorderWidth'{$ENDIF},
  ProgressBar_SetBorderWidth {$IFNDEF MSWINDOWS}name '_ProgressBar_SetBorderWidth'{$ENDIF},
  ProgressBar_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ProgressBar_GetDoubleBuffered'{$ENDIF},
  ProgressBar_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ProgressBar_SetDoubleBuffered'{$ENDIF},
  ProgressBar_GetEnabled {$IFNDEF MSWINDOWS}name '_ProgressBar_GetEnabled'{$ENDIF},
  ProgressBar_SetEnabled {$IFNDEF MSWINDOWS}name '_ProgressBar_SetEnabled'{$ENDIF},
  ProgressBar_GetHint {$IFNDEF MSWINDOWS}name '_ProgressBar_GetHint'{$ENDIF},
  ProgressBar_SetHint {$IFNDEF MSWINDOWS}name '_ProgressBar_SetHint'{$ENDIF},
  ProgressBar_GetMin {$IFNDEF MSWINDOWS}name '_ProgressBar_GetMin'{$ENDIF},
  ProgressBar_SetMin {$IFNDEF MSWINDOWS}name '_ProgressBar_SetMin'{$ENDIF},
  ProgressBar_GetMax {$IFNDEF MSWINDOWS}name '_ProgressBar_GetMax'{$ENDIF},
  ProgressBar_SetMax {$IFNDEF MSWINDOWS}name '_ProgressBar_SetMax'{$ENDIF},
  ProgressBar_GetOrientation {$IFNDEF MSWINDOWS}name '_ProgressBar_GetOrientation'{$ENDIF},
  ProgressBar_SetOrientation {$IFNDEF MSWINDOWS}name '_ProgressBar_SetOrientation'{$ENDIF},
  //ProgressBar_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ProgressBar_GetParentDoubleBuffered'{$ENDIF},
  //ProgressBar_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ProgressBar_SetParentDoubleBuffered'{$ENDIF},
  ProgressBar_GetParentShowHint {$IFNDEF MSWINDOWS}name '_ProgressBar_GetParentShowHint'{$ENDIF},
  ProgressBar_SetParentShowHint {$IFNDEF MSWINDOWS}name '_ProgressBar_SetParentShowHint'{$ENDIF},
  ProgressBar_GetPopupMenu {$IFNDEF MSWINDOWS}name '_ProgressBar_GetPopupMenu'{$ENDIF},
  ProgressBar_SetPopupMenu {$IFNDEF MSWINDOWS}name '_ProgressBar_SetPopupMenu'{$ENDIF},
  ProgressBar_GetPosition {$IFNDEF MSWINDOWS}name '_ProgressBar_GetPosition'{$ENDIF},
  ProgressBar_SetPosition {$IFNDEF MSWINDOWS}name '_ProgressBar_SetPosition'{$ENDIF},
  ProgressBar_GetSmooth {$IFNDEF MSWINDOWS}name '_ProgressBar_GetSmooth'{$ENDIF},
  ProgressBar_SetSmooth {$IFNDEF MSWINDOWS}name '_ProgressBar_SetSmooth'{$ENDIF},
  ProgressBar_GetStyle {$IFNDEF MSWINDOWS}name '_ProgressBar_GetStyle'{$ENDIF},
  ProgressBar_SetStyle {$IFNDEF MSWINDOWS}name '_ProgressBar_SetStyle'{$ENDIF},
  //ProgressBar_GetMarqueeInterval {$IFNDEF MSWINDOWS}name '_ProgressBar_GetMarqueeInterval'{$ENDIF},
  //ProgressBar_SetMarqueeInterval {$IFNDEF MSWINDOWS}name '_ProgressBar_SetMarqueeInterval'{$ENDIF},
  //ProgressBar_GetBarColor {$IFNDEF MSWINDOWS}name '_ProgressBar_GetBarColor'{$ENDIF},
  //ProgressBar_SetBarColor {$IFNDEF MSWINDOWS}name '_ProgressBar_SetBarColor'{$ENDIF},
  //ProgressBar_GetBackgroundColor {$IFNDEF MSWINDOWS}name '_ProgressBar_GetBackgroundColor'{$ENDIF},
  //ProgressBar_SetBackgroundColor {$IFNDEF MSWINDOWS}name '_ProgressBar_SetBackgroundColor'{$ENDIF},
  //ProgressBar_GetSmoothReverse {$IFNDEF MSWINDOWS}name '_ProgressBar_GetSmoothReverse'{$ENDIF},
  //ProgressBar_SetSmoothReverse {$IFNDEF MSWINDOWS}name '_ProgressBar_SetSmoothReverse'{$ENDIF},
  ProgressBar_GetStep {$IFNDEF MSWINDOWS}name '_ProgressBar_GetStep'{$ENDIF},
  ProgressBar_SetStep {$IFNDEF MSWINDOWS}name '_ProgressBar_SetStep'{$ENDIF},
  //ProgressBar_GetState {$IFNDEF MSWINDOWS}name '_ProgressBar_GetState'{$ENDIF},
  //ProgressBar_SetState {$IFNDEF MSWINDOWS}name '_ProgressBar_SetState'{$ENDIF},
  ProgressBar_GetShowHint {$IFNDEF MSWINDOWS}name '_ProgressBar_GetShowHint'{$ENDIF},
  ProgressBar_SetShowHint {$IFNDEF MSWINDOWS}name '_ProgressBar_SetShowHint'{$ENDIF},
  ProgressBar_GetTabOrder {$IFNDEF MSWINDOWS}name '_ProgressBar_GetTabOrder'{$ENDIF},
  ProgressBar_SetTabOrder {$IFNDEF MSWINDOWS}name '_ProgressBar_SetTabOrder'{$ENDIF},
  ProgressBar_GetTabStop {$IFNDEF MSWINDOWS}name '_ProgressBar_GetTabStop'{$ENDIF},
  ProgressBar_SetTabStop {$IFNDEF MSWINDOWS}name '_ProgressBar_SetTabStop'{$ENDIF},
  ProgressBar_GetVisible {$IFNDEF MSWINDOWS}name '_ProgressBar_GetVisible'{$ENDIF},
  ProgressBar_SetVisible {$IFNDEF MSWINDOWS}name '_ProgressBar_SetVisible'{$ENDIF},
  //ProgressBar_GetStyleElements {$IFNDEF MSWINDOWS}name '_ProgressBar_GetStyleElements'{$ENDIF},
  //ProgressBar_SetStyleElements {$IFNDEF MSWINDOWS}name '_ProgressBar_SetStyleElements'{$ENDIF},
  ProgressBar_SetOnEnter {$IFNDEF MSWINDOWS}name '_ProgressBar_SetOnEnter'{$ENDIF},
  ProgressBar_SetOnExit {$IFNDEF MSWINDOWS}name '_ProgressBar_SetOnExit'{$ENDIF},
  ProgressBar_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_ProgressBar_SetOnMouseDown'{$ENDIF},
  ProgressBar_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_ProgressBar_SetOnMouseEnter'{$ENDIF},
  ProgressBar_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_ProgressBar_SetOnMouseLeave'{$ENDIF},
  ProgressBar_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_ProgressBar_SetOnMouseMove'{$ENDIF},
  ProgressBar_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_ProgressBar_SetOnMouseUp'{$ENDIF},
  ProgressBar_GetBrush {$IFNDEF MSWINDOWS}name '_ProgressBar_GetBrush'{$ENDIF},
  ProgressBar_GetControlCount {$IFNDEF MSWINDOWS}name '_ProgressBar_GetControlCount'{$ENDIF},
  ProgressBar_GetHandle {$IFNDEF MSWINDOWS}name '_ProgressBar_GetHandle'{$ENDIF},
  ProgressBar_GetParentWindow {$IFNDEF MSWINDOWS}name '_ProgressBar_GetParentWindow'{$ENDIF},
  ProgressBar_SetParentWindow {$IFNDEF MSWINDOWS}name '_ProgressBar_SetParentWindow'{$ENDIF},
  ProgressBar_GetAction {$IFNDEF MSWINDOWS}name '_ProgressBar_GetAction'{$ENDIF},
  ProgressBar_SetAction {$IFNDEF MSWINDOWS}name '_ProgressBar_SetAction'{$ENDIF},
  ProgressBar_GetBiDiMode {$IFNDEF MSWINDOWS}name '_ProgressBar_GetBiDiMode'{$ENDIF},
  ProgressBar_SetBiDiMode {$IFNDEF MSWINDOWS}name '_ProgressBar_SetBiDiMode'{$ENDIF},
  ProgressBar_GetBoundsRect {$IFNDEF MSWINDOWS}name '_ProgressBar_GetBoundsRect'{$ENDIF},
  ProgressBar_SetBoundsRect {$IFNDEF MSWINDOWS}name '_ProgressBar_SetBoundsRect'{$ENDIF},
  ProgressBar_GetClientHeight {$IFNDEF MSWINDOWS}name '_ProgressBar_GetClientHeight'{$ENDIF},
  ProgressBar_SetClientHeight {$IFNDEF MSWINDOWS}name '_ProgressBar_SetClientHeight'{$ENDIF},
  ProgressBar_GetClientRect {$IFNDEF MSWINDOWS}name '_ProgressBar_GetClientRect'{$ENDIF},
  ProgressBar_GetClientWidth {$IFNDEF MSWINDOWS}name '_ProgressBar_GetClientWidth'{$ENDIF},
  ProgressBar_SetClientWidth {$IFNDEF MSWINDOWS}name '_ProgressBar_SetClientWidth'{$ENDIF},
  //ProgressBar_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_ProgressBar_GetExplicitLeft'{$ENDIF},
  //ProgressBar_GetExplicitTop {$IFNDEF MSWINDOWS}name '_ProgressBar_GetExplicitTop'{$ENDIF},
  //ProgressBar_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_ProgressBar_GetExplicitWidth'{$ENDIF},
  //ProgressBar_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_ProgressBar_GetExplicitHeight'{$ENDIF},
  ProgressBar_GetParent {$IFNDEF MSWINDOWS}name '_ProgressBar_GetParent'{$ENDIF},
  ProgressBar_SetParent {$IFNDEF MSWINDOWS}name '_ProgressBar_SetParent'{$ENDIF},
  //ProgressBar_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ProgressBar_GetAlignWithMargins'{$ENDIF},
  //ProgressBar_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ProgressBar_SetAlignWithMargins'{$ENDIF},
  ProgressBar_GetLeft {$IFNDEF MSWINDOWS}name '_ProgressBar_GetLeft'{$ENDIF},
  ProgressBar_SetLeft {$IFNDEF MSWINDOWS}name '_ProgressBar_SetLeft'{$ENDIF},
  ProgressBar_GetTop {$IFNDEF MSWINDOWS}name '_ProgressBar_GetTop'{$ENDIF},
  ProgressBar_SetTop {$IFNDEF MSWINDOWS}name '_ProgressBar_SetTop'{$ENDIF},
  ProgressBar_GetWidth {$IFNDEF MSWINDOWS}name '_ProgressBar_GetWidth'{$ENDIF},
  ProgressBar_SetWidth {$IFNDEF MSWINDOWS}name '_ProgressBar_SetWidth'{$ENDIF},
  ProgressBar_GetHeight {$IFNDEF MSWINDOWS}name '_ProgressBar_GetHeight'{$ENDIF},
  ProgressBar_SetHeight {$IFNDEF MSWINDOWS}name '_ProgressBar_SetHeight'{$ENDIF},
  ProgressBar_GetCursor {$IFNDEF MSWINDOWS}name '_ProgressBar_GetCursor'{$ENDIF},
  ProgressBar_SetCursor {$IFNDEF MSWINDOWS}name '_ProgressBar_SetCursor'{$ENDIF},
  //ProgressBar_GetMargins {$IFNDEF MSWINDOWS}name '_ProgressBar_GetMargins'{$ENDIF},
  //ProgressBar_SetMargins {$IFNDEF MSWINDOWS}name '_ProgressBar_SetMargins'{$ENDIF},
  ProgressBar_GetComponentCount {$IFNDEF MSWINDOWS}name '_ProgressBar_GetComponentCount'{$ENDIF},
  ProgressBar_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ProgressBar_GetComponentIndex'{$ENDIF},
  ProgressBar_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ProgressBar_SetComponentIndex'{$ENDIF},
  ProgressBar_GetOwner {$IFNDEF MSWINDOWS}name '_ProgressBar_GetOwner'{$ENDIF},
  ProgressBar_GetName {$IFNDEF MSWINDOWS}name '_ProgressBar_GetName'{$ENDIF},
  ProgressBar_SetName {$IFNDEF MSWINDOWS}name '_ProgressBar_SetName'{$ENDIF},
  ProgressBar_GetTag {$IFNDEF MSWINDOWS}name '_ProgressBar_GetTag'{$ENDIF},
  ProgressBar_SetTag {$IFNDEF MSWINDOWS}name '_ProgressBar_SetTag'{$ENDIF},
  ProgressBar_GetControls {$IFNDEF MSWINDOWS}name '_ProgressBar_GetControls'{$ENDIF},
  ProgressBar_GetComponents {$IFNDEF MSWINDOWS}name '_ProgressBar_GetComponents'{$ENDIF};

