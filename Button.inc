
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Button_Create(AOwner: TComponent): TButton; cdecl;
begin
  Result :=  TButton.Create(AOwner);
end;

procedure Button_Free(AObj: TButton); cdecl;
begin
  AObj.Free;
end;

procedure Button_Click(AObj: TButton); cdecl;
begin
  AObj.Click;
end;

function Button_CanFocus(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure Button_FlipChildren(AObj: TButton; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Button_Focused(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function Button_HandleAllocated(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Button_Invalidate(AObj: TButton); cdecl;
begin
  AObj.Invalidate;
end;

procedure Button_Realign(AObj: TButton); cdecl;
begin
  AObj.Realign;
end;

procedure Button_Repaint(AObj: TButton); cdecl;
begin
  AObj.Repaint;
end;

procedure Button_ScaleBy(AObj: TButton; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Button_SetBounds(AObj: TButton; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Button_SetFocus(AObj: TButton); cdecl;
begin
  AObj.SetFocus;
end;

procedure Button_Update(AObj: TButton); cdecl;
begin
  AObj.Update;
end;

procedure Button_BringToFront(AObj: TButton); cdecl;
begin
  AObj.BringToFront;
end;

function Button_HasParent(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Button_Hide(AObj: TButton); cdecl;
begin
  AObj.Hide;
end;

function Button_Perform(AObj: TButton; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Button_Refresh(AObj: TButton); cdecl;
begin
  AObj.Refresh;
end;

procedure Button_SendToBack(AObj: TButton); cdecl;
begin
  AObj.SendToBack;
end;

procedure Button_Show(AObj: TButton); cdecl;
begin
  AObj.Show;
end;

function Button_GetTextBuf(AObj: TButton; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function Button_FindComponent(AObj: TButton; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Button_GetNamePath(AObj: TButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Button_Assign(AObj: TButton; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Button_ClassName(AObj: TButton): PWideChar cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Button_Equals(AObj: TButton; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Button_GetHashCode(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Button_ToString(AObj: TButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Button_GetAction(AObj: TButton): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Button_SetAction(AObj: TButton; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function Button_GetAlign(AObj: TButton): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Button_SetAlign(AObj: TButton; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Button_GetAnchors(AObj: TButton): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Button_SetAnchors(AObj: TButton; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function Button_GetBiDiMode(AObj: TButton): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Button_SetBiDiMode(AObj: TButton; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Button_GetCancel(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.Cancel;
end;

procedure Button_SetCancel(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.Cancel := AValue;
end;

function Button_GetCaption(AObj: TButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure Button_SetCaption(AObj: TButton; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function Button_GetCommandLinkHint(AObj: TButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Button_SetCommandLinkHint(AObj: TButton; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function Button_GetDefault(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.Default;
end;

procedure Button_SetDefault(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.Default := AValue;
end;

//function Button_GetDisabledImageIndex(AObj: TButton): TImageIndex; cdecl;
//begin
//  Result :=  AObj.DisabledImageIndex;
//end;

//procedure Button_SetDisabledImageIndex(AObj: TButton; AValue: TImageIndex); cdecl;
//begin
//  AObj.DisabledImageIndex := AValue;
//end;

function Button_GetDoubleBuffered(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Button_SetDoubleBuffered(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

//function Button_GetElevationRequired(AObj: TButton): LongBool; cdecl;
//begin
//  Result :=  AObj.ElevationRequired;
//end;

//procedure Button_SetElevationRequired(AObj: TButton; AValue: LongBool); cdecl;
//begin
//  AObj.ElevationRequired := AValue;
//end;

function Button_GetEnabled(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Button_SetEnabled(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Button_GetFont(AObj: TButton): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure Button_SetFont(AObj: TButton; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

//function Button_GetHotImageIndex(AObj: TButton): TImageIndex; cdecl;
//begin
//  Result :=  AObj.HotImageIndex;
//end;

//procedure Button_SetHotImageIndex(AObj: TButton; AValue: TImageIndex); cdecl;
//begin
//  AObj.HotImageIndex := AValue;
//end;

//function Button_GetImageAlignment(AObj: TButton): TImageAlignment; cdecl;
//begin
//  Result :=  AObj.ImageAlignment;
//end;

//procedure Button_SetImageAlignment(AObj: TButton; AValue: TImageAlignment); cdecl;
//begin
//  AObj.ImageAlignment := AValue;
//end;

//function Button_GetImageIndex(AObj: TButton): TImageIndex; cdecl;
//begin
//  Result :=  AObj.ImageIndex;
//end;
//
//procedure Button_SetImageIndex(AObj: TButton; AValue: TImageIndex); cdecl;
//begin
//  AObj.ImageIndex := AValue;
//end;
//
//function Button_GetImages(AObj: TButton): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.Images;
//end;
//
//procedure Button_SetImages(AObj: TButton; AValue: TCustomImageList); cdecl;
//begin
//  AObj.Images := AValue;
//end;

function Button_GetModalResult(AObj: TButton): TModalResult; cdecl;
begin
  Result :=  AObj.ModalResult;
end;

procedure Button_SetModalResult(AObj: TButton; AValue: TModalResult); cdecl;
begin
  AObj.ModalResult := AValue;
end;

//function Button_GetParentDoubleBuffered(AObj: TButton): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure Button_SetParentDoubleBuffered(AObj: TButton; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function Button_GetParentFont(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Button_SetParentFont(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function Button_GetParentShowHint(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Button_SetParentShowHint(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Button_GetPopupMenu(AObj: TButton): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Button_SetPopupMenu(AObj: TButton; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

//function Button_GetPressedImageIndex(AObj: TButton): TImageIndex; cdecl;
//begin
//  Result :=  AObj.PressedImageIndex;
//end;
//
//procedure Button_SetPressedImageIndex(AObj: TButton; AValue: TImageIndex); cdecl;
//begin
//  AObj.PressedImageIndex := AValue;
//end;
//
//function Button_GetSelectedImageIndex(AObj: TButton): TImageIndex; cdecl;
//begin
//  Result :=  AObj.SelectedImageIndex;
//end;
//
//procedure Button_SetSelectedImageIndex(AObj: TButton; AValue: TImageIndex); cdecl;
//begin
//  AObj.SelectedImageIndex := AValue;
//end;

function Button_GetShowHint(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Button_SetShowHint(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

//function Button_GetStyle(AObj: TButton): TCustomButton.TButtonStyle; cdecl;
//begin
//  Result :=  AObj.Style;
//end;
//
//procedure Button_SetStyle(AObj: TButton; AValue: TCustomButton.TButtonStyle); cdecl;
//begin
//  AObj.Style := AValue;
//end;
//
//function Button_GetStylusHotImageIndex(AObj: TButton): TImageIndex; cdecl;
//begin
//  Result :=  AObj.StylusHotImageIndex;
//end;
//
//procedure Button_SetStylusHotImageIndex(AObj: TButton; AValue: TImageIndex); cdecl;
//begin
//  AObj.StylusHotImageIndex := AValue;
//end;

function Button_GetTabOrder(AObj: TButton): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Button_SetTabOrder(AObj: TButton; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function Button_GetTabStop(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Button_SetTabStop(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function Button_GetVisible(AObj: TButton): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Button_SetVisible(AObj: TButton; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function Button_GetWordWrap(AObj: TButton): LongBool; cdecl;
//begin
//  Result :=  AObj.WordWrap;
//end;
//
//procedure Button_SetWordWrap(AObj: TButton; AValue: LongBool); cdecl;
//begin
//  AObj.WordWrap := AValue;
//end;
//
//function Button_GetStyleElements(AObj: TButton): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure Button_SetStyleElements(AObj: TButton; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure Button_SetOnClick(AObj: TButton; AEventId: NativeUInt); stdcall;
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

procedure Button_SetOnEnter(AObj: TButton; AEventId: NativeUInt); stdcall;
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

procedure Button_SetOnExit(AObj: TButton; AEventId: NativeUInt); stdcall;
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

procedure Button_SetOnKeyDown(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    TEventClass.Remove(AObj, geKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := TEventClass.OnKeyDown;
  TEventClass.Add(AObj, geKeyDown, AEventId);
end;

procedure Button_SetOnKeyPress(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    TEventClass.Remove(AObj, geKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := TEventClass.OnKeyPress;
  TEventClass.Add(AObj, geKeyPress, AEventId);
end;

procedure Button_SetOnKeyUp(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    TEventClass.Remove(AObj, geKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := TEventClass.OnKeyUp;
  TEventClass.Add(AObj, geKeyUp, AEventId);
end;

procedure Button_SetOnMouseDown(AObj: TButton; AEventId: NativeUInt); stdcall;
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

procedure Button_SetOnMouseEnter(AObj: TButton; AEventId: NativeUInt); stdcall;
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

procedure Button_SetOnMouseLeave(AObj: TButton; AEventId: NativeUInt); stdcall;
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

procedure Button_SetOnMouseMove(AObj: TButton; AEventId: NativeUInt); stdcall;
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

procedure Button_SetOnMouseUp(AObj: TButton; AEventId: NativeUInt); stdcall;
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

function Button_GetBrush(AObj: TButton): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function Button_GetControlCount(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Button_GetHandle(AObj: TButton): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function Button_GetParentWindow(AObj: TButton): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Button_SetParentWindow(AObj: TButton; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

procedure Button_GetBoundsRect(AObj: TButton; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Button_SetBoundsRect(AObj: TButton; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Button_GetClientHeight(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Button_SetClientHeight(AObj: TButton; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Button_GetClientRect(AObj: TButton; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Button_GetClientWidth(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Button_SetClientWidth(AObj: TButton; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function Button_GetExplicitLeft(AObj: TButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function Button_GetExplicitTop(AObj: TButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function Button_GetExplicitWidth(AObj: TButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function Button_GetExplicitHeight(AObj: TButton): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function Button_GetParent(AObj: TButton): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Button_SetParent(AObj: TButton; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function Button_GetAlignWithMargins(AObj: TButton): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure Button_SetAlignWithMargins(AObj: TButton; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function Button_GetLeft(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Button_SetLeft(AObj: TButton; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Button_GetTop(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Button_SetTop(AObj: TButton; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Button_GetWidth(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Button_SetWidth(AObj: TButton; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function Button_GetHeight(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Button_SetHeight(AObj: TButton; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Button_GetCursor(AObj: TButton): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Button_SetCursor(AObj: TButton; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Button_GetHint(AObj: TButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Button_SetHint(AObj: TButton; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Button_GetMargins(AObj: TButton): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure Button_SetMargins(AObj: TButton; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Button_GetComponentCount(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Button_GetComponentIndex(AObj: TButton): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Button_SetComponentIndex(AObj: TButton; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Button_GetOwner(AObj: TButton): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Button_GetName(AObj: TButton): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Button_SetName(AObj: TButton; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Button_GetTag(AObj: TButton): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Button_SetTag(AObj: TButton; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Button_GetControls(AObj: TButton; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Button_GetComponents(AObj: TButton; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Button_Create {$IFNDEF MSWINDOWS}name '_Button_Create'{$ENDIF},
  Button_Free {$IFNDEF MSWINDOWS}name '_Button_Free'{$ENDIF},
  Button_Click {$IFNDEF MSWINDOWS}name '_Button_Click'{$ENDIF},
  Button_CanFocus {$IFNDEF MSWINDOWS}name '_Button_CanFocus'{$ENDIF},
  Button_FlipChildren {$IFNDEF MSWINDOWS}name '_Button_FlipChildren'{$ENDIF},
  Button_Focused {$IFNDEF MSWINDOWS}name '_Button_Focused'{$ENDIF},
  Button_HandleAllocated {$IFNDEF MSWINDOWS}name '_Button_HandleAllocated'{$ENDIF},
  Button_Invalidate {$IFNDEF MSWINDOWS}name '_Button_Invalidate'{$ENDIF},
  Button_Realign {$IFNDEF MSWINDOWS}name '_Button_Realign'{$ENDIF},
  Button_Repaint {$IFNDEF MSWINDOWS}name '_Button_Repaint'{$ENDIF},
  Button_ScaleBy {$IFNDEF MSWINDOWS}name '_Button_ScaleBy'{$ENDIF},
  Button_SetBounds {$IFNDEF MSWINDOWS}name '_Button_SetBounds'{$ENDIF},
  Button_SetFocus {$IFNDEF MSWINDOWS}name '_Button_SetFocus'{$ENDIF},
  Button_Update {$IFNDEF MSWINDOWS}name '_Button_Update'{$ENDIF},
  Button_BringToFront {$IFNDEF MSWINDOWS}name '_Button_BringToFront'{$ENDIF},
  Button_HasParent {$IFNDEF MSWINDOWS}name '_Button_HasParent'{$ENDIF},
  Button_Hide {$IFNDEF MSWINDOWS}name '_Button_Hide'{$ENDIF},
  Button_Perform {$IFNDEF MSWINDOWS}name '_Button_Perform'{$ENDIF},
  Button_Refresh {$IFNDEF MSWINDOWS}name '_Button_Refresh'{$ENDIF},
  Button_SendToBack {$IFNDEF MSWINDOWS}name '_Button_SendToBack'{$ENDIF},
  Button_Show {$IFNDEF MSWINDOWS}name '_Button_Show'{$ENDIF},
  Button_GetTextBuf {$IFNDEF MSWINDOWS}name '_Button_GetTextBuf'{$ENDIF},
  Button_FindComponent {$IFNDEF MSWINDOWS}name '_Button_FindComponent'{$ENDIF},
  Button_GetNamePath {$IFNDEF MSWINDOWS}name '_Button_GetNamePath'{$ENDIF},
  Button_Assign {$IFNDEF MSWINDOWS}name '_Button_Assign'{$ENDIF},
  Button_ClassName {$IFNDEF MSWINDOWS}name '_Button_ClassName'{$ENDIF},
  Button_Equals {$IFNDEF MSWINDOWS}name '_Button_Equals'{$ENDIF},
  Button_GetHashCode {$IFNDEF MSWINDOWS}name '_Button_GetHashCode'{$ENDIF},
  Button_ToString {$IFNDEF MSWINDOWS}name '_Button_ToString'{$ENDIF},
  Button_GetAction {$IFNDEF MSWINDOWS}name '_Button_GetAction'{$ENDIF},
  Button_SetAction {$IFNDEF MSWINDOWS}name '_Button_SetAction'{$ENDIF},
  Button_GetAlign {$IFNDEF MSWINDOWS}name '_Button_GetAlign'{$ENDIF},
  Button_SetAlign {$IFNDEF MSWINDOWS}name '_Button_SetAlign'{$ENDIF},
  Button_GetAnchors {$IFNDEF MSWINDOWS}name '_Button_GetAnchors'{$ENDIF},
  Button_SetAnchors {$IFNDEF MSWINDOWS}name '_Button_SetAnchors'{$ENDIF},
  Button_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Button_GetBiDiMode'{$ENDIF},
  Button_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Button_SetBiDiMode'{$ENDIF},
  Button_GetCancel {$IFNDEF MSWINDOWS}name '_Button_GetCancel'{$ENDIF},
  Button_SetCancel {$IFNDEF MSWINDOWS}name '_Button_SetCancel'{$ENDIF},
  Button_GetCaption {$IFNDEF MSWINDOWS}name '_Button_GetCaption'{$ENDIF},
  Button_SetCaption {$IFNDEF MSWINDOWS}name '_Button_SetCaption'{$ENDIF},
  Button_GetCommandLinkHint {$IFNDEF MSWINDOWS}name '_Button_GetCommandLinkHint'{$ENDIF},
  Button_SetCommandLinkHint {$IFNDEF MSWINDOWS}name '_Button_SetCommandLinkHint'{$ENDIF},
  Button_GetDefault {$IFNDEF MSWINDOWS}name '_Button_GetDefault'{$ENDIF},
  Button_SetDefault {$IFNDEF MSWINDOWS}name '_Button_SetDefault'{$ENDIF},
  //Button_GetDisabledImageIndex {$IFNDEF MSWINDOWS}name '_Button_GetDisabledImageIndex'{$ENDIF},
  //Button_SetDisabledImageIndex {$IFNDEF MSWINDOWS}name '_Button_SetDisabledImageIndex'{$ENDIF},
  Button_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Button_GetDoubleBuffered'{$ENDIF},
  Button_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Button_SetDoubleBuffered'{$ENDIF},
  //Button_GetElevationRequired {$IFNDEF MSWINDOWS}name '_Button_GetElevationRequired'{$ENDIF},
  //Button_SetElevationRequired {$IFNDEF MSWINDOWS}name '_Button_SetElevationRequired'{$ENDIF},
  Button_GetEnabled {$IFNDEF MSWINDOWS}name '_Button_GetEnabled'{$ENDIF},
  Button_SetEnabled {$IFNDEF MSWINDOWS}name '_Button_SetEnabled'{$ENDIF},
  Button_GetFont {$IFNDEF MSWINDOWS}name '_Button_GetFont'{$ENDIF},
  Button_SetFont {$IFNDEF MSWINDOWS}name '_Button_SetFont'{$ENDIF},
  //Button_GetHotImageIndex {$IFNDEF MSWINDOWS}name '_Button_GetHotImageIndex'{$ENDIF},
  //Button_SetHotImageIndex {$IFNDEF MSWINDOWS}name '_Button_SetHotImageIndex'{$ENDIF},
  //Button_GetImageAlignment {$IFNDEF MSWINDOWS}name '_Button_GetImageAlignment'{$ENDIF},
  //Button_SetImageAlignment {$IFNDEF MSWINDOWS}name '_Button_SetImageAlignment'{$ENDIF},
  //Button_GetImageIndex {$IFNDEF MSWINDOWS}name '_Button_GetImageIndex'{$ENDIF},
  //Button_SetImageIndex {$IFNDEF MSWINDOWS}name '_Button_SetImageIndex'{$ENDIF},
  //Button_GetImages {$IFNDEF MSWINDOWS}name '_Button_GetImages'{$ENDIF},
  //Button_SetImages {$IFNDEF MSWINDOWS}name '_Button_SetImages'{$ENDIF},
  Button_GetModalResult {$IFNDEF MSWINDOWS}name '_Button_GetModalResult'{$ENDIF},
  Button_SetModalResult {$IFNDEF MSWINDOWS}name '_Button_SetModalResult'{$ENDIF},
  //Button_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Button_GetParentDoubleBuffered'{$ENDIF},
  //Button_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Button_SetParentDoubleBuffered'{$ENDIF},
  Button_GetParentFont {$IFNDEF MSWINDOWS}name '_Button_GetParentFont'{$ENDIF},
  Button_SetParentFont {$IFNDEF MSWINDOWS}name '_Button_SetParentFont'{$ENDIF},
  Button_GetParentShowHint {$IFNDEF MSWINDOWS}name '_Button_GetParentShowHint'{$ENDIF},
  Button_SetParentShowHint {$IFNDEF MSWINDOWS}name '_Button_SetParentShowHint'{$ENDIF},
  Button_GetPopupMenu {$IFNDEF MSWINDOWS}name '_Button_GetPopupMenu'{$ENDIF},
  Button_SetPopupMenu {$IFNDEF MSWINDOWS}name '_Button_SetPopupMenu'{$ENDIF},
  //Button_GetPressedImageIndex {$IFNDEF MSWINDOWS}name '_Button_GetPressedImageIndex'{$ENDIF},
  //Button_SetPressedImageIndex {$IFNDEF MSWINDOWS}name '_Button_SetPressedImageIndex'{$ENDIF},
  //Button_GetSelectedImageIndex {$IFNDEF MSWINDOWS}name '_Button_GetSelectedImageIndex'{$ENDIF},
  //Button_SetSelectedImageIndex {$IFNDEF MSWINDOWS}name '_Button_SetSelectedImageIndex'{$ENDIF},
  Button_GetShowHint {$IFNDEF MSWINDOWS}name '_Button_GetShowHint'{$ENDIF},
  Button_SetShowHint {$IFNDEF MSWINDOWS}name '_Button_SetShowHint'{$ENDIF},
  //Button_GetStyle {$IFNDEF MSWINDOWS}name '_Button_GetStyle'{$ENDIF},
  //Button_SetStyle {$IFNDEF MSWINDOWS}name '_Button_SetStyle'{$ENDIF},
  //Button_GetStylusHotImageIndex {$IFNDEF MSWINDOWS}name '_Button_GetStylusHotImageIndex'{$ENDIF},
  //Button_SetStylusHotImageIndex {$IFNDEF MSWINDOWS}name '_Button_SetStylusHotImageIndex'{$ENDIF},
  Button_GetTabOrder {$IFNDEF MSWINDOWS}name '_Button_GetTabOrder'{$ENDIF},
  Button_SetTabOrder {$IFNDEF MSWINDOWS}name '_Button_SetTabOrder'{$ENDIF},
  Button_GetTabStop {$IFNDEF MSWINDOWS}name '_Button_GetTabStop'{$ENDIF},
  Button_SetTabStop {$IFNDEF MSWINDOWS}name '_Button_SetTabStop'{$ENDIF},
  Button_GetVisible {$IFNDEF MSWINDOWS}name '_Button_GetVisible'{$ENDIF},
  Button_SetVisible {$IFNDEF MSWINDOWS}name '_Button_SetVisible'{$ENDIF},
  //Button_GetWordWrap {$IFNDEF MSWINDOWS}name '_Button_GetWordWrap'{$ENDIF},
  //Button_SetWordWrap {$IFNDEF MSWINDOWS}name '_Button_SetWordWrap'{$ENDIF},
  //Button_GetStyleElements {$IFNDEF MSWINDOWS}name '_Button_GetStyleElements'{$ENDIF},
  //Button_SetStyleElements {$IFNDEF MSWINDOWS}name '_Button_SetStyleElements'{$ENDIF},
  Button_SetOnClick {$IFNDEF MSWINDOWS}name '_Button_SetOnClick'{$ENDIF},
  Button_SetOnEnter {$IFNDEF MSWINDOWS}name '_Button_SetOnEnter'{$ENDIF},
  Button_SetOnExit {$IFNDEF MSWINDOWS}name '_Button_SetOnExit'{$ENDIF},
  Button_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_Button_SetOnKeyDown'{$ENDIF},
  Button_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_Button_SetOnKeyPress'{$ENDIF},
  Button_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_Button_SetOnKeyUp'{$ENDIF},
  Button_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_Button_SetOnMouseDown'{$ENDIF},
  Button_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_Button_SetOnMouseEnter'{$ENDIF},
  Button_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_Button_SetOnMouseLeave'{$ENDIF},
  Button_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_Button_SetOnMouseMove'{$ENDIF},
  Button_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_Button_SetOnMouseUp'{$ENDIF},
  Button_GetBrush {$IFNDEF MSWINDOWS}name '_Button_GetBrush'{$ENDIF},
  Button_GetControlCount {$IFNDEF MSWINDOWS}name '_Button_GetControlCount'{$ENDIF},
  Button_GetHandle {$IFNDEF MSWINDOWS}name '_Button_GetHandle'{$ENDIF},
  Button_GetParentWindow {$IFNDEF MSWINDOWS}name '_Button_GetParentWindow'{$ENDIF},
  Button_SetParentWindow {$IFNDEF MSWINDOWS}name '_Button_SetParentWindow'{$ENDIF},
  Button_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Button_GetBoundsRect'{$ENDIF},
  Button_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Button_SetBoundsRect'{$ENDIF},
  Button_GetClientHeight {$IFNDEF MSWINDOWS}name '_Button_GetClientHeight'{$ENDIF},
  Button_SetClientHeight {$IFNDEF MSWINDOWS}name '_Button_SetClientHeight'{$ENDIF},
  Button_GetClientRect {$IFNDEF MSWINDOWS}name '_Button_GetClientRect'{$ENDIF},
  Button_GetClientWidth {$IFNDEF MSWINDOWS}name '_Button_GetClientWidth'{$ENDIF},
  Button_SetClientWidth {$IFNDEF MSWINDOWS}name '_Button_SetClientWidth'{$ENDIF},
  //Button_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Button_GetExplicitLeft'{$ENDIF},
  //Button_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Button_GetExplicitTop'{$ENDIF},
  //Button_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Button_GetExplicitWidth'{$ENDIF},
  //Button_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Button_GetExplicitHeight'{$ENDIF},
  Button_GetParent {$IFNDEF MSWINDOWS}name '_Button_GetParent'{$ENDIF},
  Button_SetParent {$IFNDEF MSWINDOWS}name '_Button_SetParent'{$ENDIF},
  //Button_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Button_GetAlignWithMargins'{$ENDIF},
  //Button_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Button_SetAlignWithMargins'{$ENDIF},
  Button_GetLeft {$IFNDEF MSWINDOWS}name '_Button_GetLeft'{$ENDIF},
  Button_SetLeft {$IFNDEF MSWINDOWS}name '_Button_SetLeft'{$ENDIF},
  Button_GetTop {$IFNDEF MSWINDOWS}name '_Button_GetTop'{$ENDIF},
  Button_SetTop {$IFNDEF MSWINDOWS}name '_Button_SetTop'{$ENDIF},
  Button_GetWidth {$IFNDEF MSWINDOWS}name '_Button_GetWidth'{$ENDIF},
  Button_SetWidth {$IFNDEF MSWINDOWS}name '_Button_SetWidth'{$ENDIF},
  Button_GetHeight {$IFNDEF MSWINDOWS}name '_Button_GetHeight'{$ENDIF},
  Button_SetHeight {$IFNDEF MSWINDOWS}name '_Button_SetHeight'{$ENDIF},
  Button_GetCursor {$IFNDEF MSWINDOWS}name '_Button_GetCursor'{$ENDIF},
  Button_SetCursor {$IFNDEF MSWINDOWS}name '_Button_SetCursor'{$ENDIF},
  Button_GetHint {$IFNDEF MSWINDOWS}name '_Button_GetHint'{$ENDIF},
  Button_SetHint {$IFNDEF MSWINDOWS}name '_Button_SetHint'{$ENDIF},
  //Button_GetMargins {$IFNDEF MSWINDOWS}name '_Button_GetMargins'{$ENDIF},
  //Button_SetMargins {$IFNDEF MSWINDOWS}name '_Button_SetMargins'{$ENDIF},
  Button_GetComponentCount {$IFNDEF MSWINDOWS}name '_Button_GetComponentCount'{$ENDIF},
  Button_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Button_GetComponentIndex'{$ENDIF},
  Button_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Button_SetComponentIndex'{$ENDIF},
  Button_GetOwner {$IFNDEF MSWINDOWS}name '_Button_GetOwner'{$ENDIF},
  Button_GetName {$IFNDEF MSWINDOWS}name '_Button_GetName'{$ENDIF},
  Button_SetName {$IFNDEF MSWINDOWS}name '_Button_SetName'{$ENDIF},
  Button_GetTag {$IFNDEF MSWINDOWS}name '_Button_GetTag'{$ENDIF},
  Button_SetTag {$IFNDEF MSWINDOWS}name '_Button_SetTag'{$ENDIF},
  Button_GetControls {$IFNDEF MSWINDOWS}name '_Button_GetControls'{$ENDIF},
  Button_GetComponents {$IFNDEF MSWINDOWS}name '_Button_GetComponents'{$ENDIF};

