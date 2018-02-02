
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ToolBar_Create(AOwner: TComponent): TToolBar; cdecl;
begin
  Result :=  TToolBar.Create(AOwner);
end;

procedure ToolBar_Free(AObj: TToolBar); cdecl;
begin
  AObj.Free;
end;

procedure ToolBar_FlipChildren(AObj: TToolBar; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ToolBar_CanFocus(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

function ToolBar_Focused(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function ToolBar_HandleAllocated(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ToolBar_Invalidate(AObj: TToolBar); cdecl;
begin
  AObj.Invalidate;
end;

procedure ToolBar_Realign(AObj: TToolBar); cdecl;
begin
  AObj.Realign;
end;

procedure ToolBar_Repaint(AObj: TToolBar); cdecl;
begin
  AObj.Repaint;
end;

procedure ToolBar_ScaleBy(AObj: TToolBar; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ToolBar_SetBounds(AObj: TToolBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ToolBar_SetFocus(AObj: TToolBar); cdecl;
begin
  AObj.SetFocus;
end;

procedure ToolBar_Update(AObj: TToolBar); cdecl;
begin
  AObj.Update;
end;

procedure ToolBar_BringToFront(AObj: TToolBar); cdecl;
begin
  AObj.BringToFront;
end;

function ToolBar_HasParent(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ToolBar_Hide(AObj: TToolBar); cdecl;
begin
  AObj.Hide;
end;

function ToolBar_Perform(AObj: TToolBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ToolBar_Refresh(AObj: TToolBar); cdecl;
begin
  AObj.Refresh;
end;

procedure ToolBar_SendToBack(AObj: TToolBar); cdecl;
begin
  AObj.SendToBack;
end;

procedure ToolBar_Show(AObj: TToolBar); cdecl;
begin
  AObj.Show;
end;

function ToolBar_GetTextBuf(AObj: TToolBar; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function ToolBar_FindComponent(AObj: TToolBar; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ToolBar_GetNamePath(AObj: TToolBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure ToolBar_Assign(AObj: TToolBar; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ToolBar_ClassName(AObj: TToolBar): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ToolBar_Equals(AObj: TToolBar; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ToolBar_GetHashCode(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ToolBar_ToString(AObj: TToolBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ToolBar_GetButtonCount(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.ButtonCount;
end;

function ToolBar_GetCanvas(AObj: TToolBar): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

//function ToolBar_GetCustomizeKeyName(AObj: TToolBar): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.CustomizeKeyName);
//end;
//
//procedure ToolBar_SetCustomizeKeyName(AObj: TToolBar; AValue: PWideChar); cdecl;
//begin
//  AObj.CustomizeKeyName := AValue;
//end;
//
//function ToolBar_GetCustomizeValueName(AObj: TToolBar): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.CustomizeValueName);
//end;
//
//procedure ToolBar_SetCustomizeValueName(AObj: TToolBar; AValue: PWideChar); cdecl;
//begin
//  AObj.CustomizeValueName := AValue;
//end;

function ToolBar_GetRowCount(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.RowCount;
end;

function ToolBar_GetAlign(AObj: TToolBar): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure ToolBar_SetAlign(AObj: TToolBar; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function ToolBar_GetAnchors(AObj: TToolBar): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ToolBar_SetAnchors(AObj: TToolBar; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function ToolBar_GetAutoSize(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure ToolBar_SetAutoSize(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function ToolBar_GetBorderWidth(AObj: TToolBar): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure ToolBar_SetBorderWidth(AObj: TToolBar; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function ToolBar_GetButtonHeight(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.ButtonHeight;
end;

procedure ToolBar_SetButtonHeight(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.ButtonHeight := AValue;
end;

function ToolBar_GetButtonWidth(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.ButtonWidth;
end;

procedure ToolBar_SetButtonWidth(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.ButtonWidth := AValue;
end;

function ToolBar_GetCaption(AObj: TToolBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure ToolBar_SetCaption(AObj: TToolBar; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function ToolBar_GetColor(AObj: TToolBar): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure ToolBar_SetColor(AObj: TToolBar; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function ToolBar_GetDoubleBuffered(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ToolBar_SetDoubleBuffered(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

//function ToolBar_GetDrawingStyle(AObj: TToolBar): TTBDrawingStyle; cdecl;
//begin
//  Result :=  AObj.DrawingStyle;
//end;
//
//procedure ToolBar_SetDrawingStyle(AObj: TToolBar; AValue: TTBDrawingStyle); cdecl;
//begin
//  AObj.DrawingStyle := AValue;
//end;

function ToolBar_GetEnabled(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ToolBar_SetEnabled(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function ToolBar_GetFlat(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.Flat;
end;

procedure ToolBar_SetFlat(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.Flat := AValue;
end;

function ToolBar_GetFont(AObj: TToolBar): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure ToolBar_SetFont(AObj: TToolBar; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

//function ToolBar_GetGradientEndColor(AObj: TToolBar): TColor; cdecl;
//begin
//  Result :=  AObj.GradientEndColor;
//end;
//
//procedure ToolBar_SetGradientEndColor(AObj: TToolBar; AValue: TColor); cdecl;
//begin
//  AObj.GradientEndColor := AValue;
//end;
//
//function ToolBar_GetGradientStartColor(AObj: TToolBar): TColor; cdecl;
//begin
//  Result :=  AObj.GradientStartColor;
//end;
//
//procedure ToolBar_SetGradientStartColor(AObj: TToolBar; AValue: TColor); cdecl;
//begin
//  AObj.GradientStartColor := AValue;
//end;

function ToolBar_GetHeight(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ToolBar_SetHeight(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

//function ToolBar_GetHideClippedButtons(AObj: TToolBar): LongBool; cdecl;
//begin
//  Result :=  AObj.HideClippedButtons;
//end;
//
//procedure ToolBar_SetHideClippedButtons(AObj: TToolBar; AValue: LongBool); cdecl;
//begin
//  AObj.HideClippedButtons := AValue;
//end;
//
//function ToolBar_GetHotImages(AObj: TToolBar): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.HotImages;
//end;
//
//procedure ToolBar_SetHotImages(AObj: TToolBar; AValue: TCustomImageList); cdecl;
//begin
//  AObj.HotImages := AValue;
//end;
//
//function ToolBar_GetImages(AObj: TToolBar): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.Images;
//end;
//
//procedure ToolBar_SetImages(AObj: TToolBar; AValue: TCustomImageList); cdecl;
//begin
//  AObj.Images := AValue;
//end;

function ToolBar_GetIndent(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.Indent;
end;

procedure ToolBar_SetIndent(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.Indent := AValue;
end;

function ToolBar_GetList(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.List;
end;

procedure ToolBar_SetList(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.List := AValue;
end;

//function ToolBar_GetMenu(AObj: TToolBar): TMainMenu; cdecl;
//begin
//  Result :=  AObj.Menu;
//end;
//
//procedure ToolBar_SetMenu(AObj: TToolBar; AValue: TMainMenu); cdecl;
//begin
//  AObj.Menu := AValue;
//end;
//
//function ToolBar_GetGradientDirection(AObj: TToolBar): TGradientDirection; cdecl;
//begin
//  Result :=  AObj.GradientDirection;
//end;
//
//procedure ToolBar_SetGradientDirection(AObj: TToolBar; AValue: TGradientDirection); cdecl;
//begin
//  AObj.GradientDirection := AValue;
//end;
//
//function ToolBar_GetGradientDrawingOptions(AObj: TToolBar): TTBGradientDrawingOptions; cdecl;
//begin
//  Result :=  AObj.GradientDrawingOptions;
//end;
//
//procedure ToolBar_SetGradientDrawingOptions(AObj: TToolBar; AValue: TTBGradientDrawingOptions); cdecl;
//begin
//  AObj.GradientDrawingOptions := AValue;
//end;

function ToolBar_GetParentColor(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ToolBar_SetParentColor(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function ToolBar_GetParentDoubleBuffered(AObj: TToolBar): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure ToolBar_SetParentDoubleBuffered(AObj: TToolBar; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function ToolBar_GetParentFont(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ToolBar_SetParentFont(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function ToolBar_GetParentShowHint(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ToolBar_SetParentShowHint(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ToolBar_GetPopupMenu(AObj: TToolBar): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ToolBar_SetPopupMenu(AObj: TToolBar; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ToolBar_GetShowCaptions(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.ShowCaptions;
end;

procedure ToolBar_SetShowCaptions(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.ShowCaptions := AValue;
end;

function ToolBar_GetShowHint(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ToolBar_SetShowHint(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function ToolBar_GetTabOrder(AObj: TToolBar): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ToolBar_SetTabOrder(AObj: TToolBar; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function ToolBar_GetTabStop(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ToolBar_SetTabStop(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function ToolBar_GetTransparent(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure ToolBar_SetTransparent(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function ToolBar_GetVisible(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ToolBar_SetVisible(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function ToolBar_GetStyleElements(AObj: TToolBar): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure ToolBar_SetStyleElements(AObj: TToolBar; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

function ToolBar_GetWrapable(AObj: TToolBar): LongBool; cdecl;
begin
  Result :=  AObj.Wrapable;
end;

procedure ToolBar_SetWrapable(AObj: TToolBar; AValue: LongBool); cdecl;
begin
  AObj.Wrapable := AValue;
end;

procedure ToolBar_SetOnClick(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnDblClick(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnEnter(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnExit(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnMouseDown(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnMouseEnter(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnMouseLeave(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnMouseMove(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnMouseUp(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

procedure ToolBar_SetOnResize(AObj: TToolBar; AEventId: NativeUInt); stdcall;
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

function ToolBar_GetBrush(AObj: TToolBar): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function ToolBar_GetControlCount(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ToolBar_GetHandle(AObj: TToolBar): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function ToolBar_GetParentWindow(AObj: TToolBar): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ToolBar_SetParentWindow(AObj: TToolBar; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ToolBar_GetAction(AObj: TToolBar): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure ToolBar_SetAction(AObj: TToolBar; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function ToolBar_GetBiDiMode(AObj: TToolBar): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ToolBar_SetBiDiMode(AObj: TToolBar; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure ToolBar_GetBoundsRect(AObj: TToolBar; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ToolBar_SetBoundsRect(AObj: TToolBar; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ToolBar_GetClientHeight(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ToolBar_SetClientHeight(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ToolBar_GetClientRect(AObj: TToolBar; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ToolBar_GetClientWidth(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ToolBar_SetClientWidth(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function ToolBar_GetExplicitLeft(AObj: TToolBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function ToolBar_GetExplicitTop(AObj: TToolBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function ToolBar_GetExplicitWidth(AObj: TToolBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function ToolBar_GetExplicitHeight(AObj: TToolBar): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function ToolBar_GetParent(AObj: TToolBar): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ToolBar_SetParent(AObj: TToolBar; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function ToolBar_GetAlignWithMargins(AObj: TToolBar): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure ToolBar_SetAlignWithMargins(AObj: TToolBar; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function ToolBar_GetLeft(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure ToolBar_SetLeft(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function ToolBar_GetTop(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure ToolBar_SetTop(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function ToolBar_GetWidth(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ToolBar_SetWidth(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function ToolBar_GetCursor(AObj: TToolBar): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ToolBar_SetCursor(AObj: TToolBar; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function ToolBar_GetHint(AObj: TToolBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure ToolBar_SetHint(AObj: TToolBar; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function ToolBar_GetMargins(AObj: TToolBar): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure ToolBar_SetMargins(AObj: TToolBar; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function ToolBar_GetComponentCount(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ToolBar_GetComponentIndex(AObj: TToolBar): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ToolBar_SetComponentIndex(AObj: TToolBar; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ToolBar_GetOwner(AObj: TToolBar): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ToolBar_GetName(AObj: TToolBar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ToolBar_SetName(AObj: TToolBar; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ToolBar_GetTag(AObj: TToolBar): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ToolBar_SetTag(AObj: TToolBar; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ToolBar_GetButtons(AObj: TToolBar; Index: Integer): TToolButton; cdecl;
begin
  Result :=  AObj.Buttons[Index];
end;

function ToolBar_GetControls(AObj: TToolBar; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ToolBar_GetComponents(AObj: TToolBar; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ToolBar_Create {$IFNDEF MSWINDOWS}name '_ToolBar_Create'{$ENDIF},
  ToolBar_Free {$IFNDEF MSWINDOWS}name '_ToolBar_Free'{$ENDIF},
  ToolBar_FlipChildren {$IFNDEF MSWINDOWS}name '_ToolBar_FlipChildren'{$ENDIF},
  ToolBar_CanFocus {$IFNDEF MSWINDOWS}name '_ToolBar_CanFocus'{$ENDIF},
  ToolBar_Focused {$IFNDEF MSWINDOWS}name '_ToolBar_Focused'{$ENDIF},
  ToolBar_HandleAllocated {$IFNDEF MSWINDOWS}name '_ToolBar_HandleAllocated'{$ENDIF},
  ToolBar_Invalidate {$IFNDEF MSWINDOWS}name '_ToolBar_Invalidate'{$ENDIF},
  ToolBar_Realign {$IFNDEF MSWINDOWS}name '_ToolBar_Realign'{$ENDIF},
  ToolBar_Repaint {$IFNDEF MSWINDOWS}name '_ToolBar_Repaint'{$ENDIF},
  ToolBar_ScaleBy {$IFNDEF MSWINDOWS}name '_ToolBar_ScaleBy'{$ENDIF},
  ToolBar_SetBounds {$IFNDEF MSWINDOWS}name '_ToolBar_SetBounds'{$ENDIF},
  ToolBar_SetFocus {$IFNDEF MSWINDOWS}name '_ToolBar_SetFocus'{$ENDIF},
  ToolBar_Update {$IFNDEF MSWINDOWS}name '_ToolBar_Update'{$ENDIF},
  ToolBar_BringToFront {$IFNDEF MSWINDOWS}name '_ToolBar_BringToFront'{$ENDIF},
  ToolBar_HasParent {$IFNDEF MSWINDOWS}name '_ToolBar_HasParent'{$ENDIF},
  ToolBar_Hide {$IFNDEF MSWINDOWS}name '_ToolBar_Hide'{$ENDIF},
  ToolBar_Perform {$IFNDEF MSWINDOWS}name '_ToolBar_Perform'{$ENDIF},
  ToolBar_Refresh {$IFNDEF MSWINDOWS}name '_ToolBar_Refresh'{$ENDIF},
  ToolBar_SendToBack {$IFNDEF MSWINDOWS}name '_ToolBar_SendToBack'{$ENDIF},
  ToolBar_Show {$IFNDEF MSWINDOWS}name '_ToolBar_Show'{$ENDIF},
  ToolBar_GetTextBuf {$IFNDEF MSWINDOWS}name '_ToolBar_GetTextBuf'{$ENDIF},
  ToolBar_FindComponent {$IFNDEF MSWINDOWS}name '_ToolBar_FindComponent'{$ENDIF},
  ToolBar_GetNamePath {$IFNDEF MSWINDOWS}name '_ToolBar_GetNamePath'{$ENDIF},
  ToolBar_Assign {$IFNDEF MSWINDOWS}name '_ToolBar_Assign'{$ENDIF},
  ToolBar_ClassName {$IFNDEF MSWINDOWS}name '_ToolBar_ClassName'{$ENDIF},
  ToolBar_Equals {$IFNDEF MSWINDOWS}name '_ToolBar_Equals'{$ENDIF},
  ToolBar_GetHashCode {$IFNDEF MSWINDOWS}name '_ToolBar_GetHashCode'{$ENDIF},
  ToolBar_ToString {$IFNDEF MSWINDOWS}name '_ToolBar_ToString'{$ENDIF},
  ToolBar_GetButtonCount {$IFNDEF MSWINDOWS}name '_ToolBar_GetButtonCount'{$ENDIF},
  ToolBar_GetCanvas {$IFNDEF MSWINDOWS}name '_ToolBar_GetCanvas'{$ENDIF},
  //ToolBar_GetCustomizeKeyName {$IFNDEF MSWINDOWS}name '_ToolBar_GetCustomizeKeyName'{$ENDIF},
  //ToolBar_SetCustomizeKeyName {$IFNDEF MSWINDOWS}name '_ToolBar_SetCustomizeKeyName'{$ENDIF},
  //ToolBar_GetCustomizeValueName {$IFNDEF MSWINDOWS}name '_ToolBar_GetCustomizeValueName'{$ENDIF},
  //ToolBar_SetCustomizeValueName {$IFNDEF MSWINDOWS}name '_ToolBar_SetCustomizeValueName'{$ENDIF},
  ToolBar_GetRowCount {$IFNDEF MSWINDOWS}name '_ToolBar_GetRowCount'{$ENDIF},
  ToolBar_GetAlign {$IFNDEF MSWINDOWS}name '_ToolBar_GetAlign'{$ENDIF},
  ToolBar_SetAlign {$IFNDEF MSWINDOWS}name '_ToolBar_SetAlign'{$ENDIF},
  ToolBar_GetAnchors {$IFNDEF MSWINDOWS}name '_ToolBar_GetAnchors'{$ENDIF},
  ToolBar_SetAnchors {$IFNDEF MSWINDOWS}name '_ToolBar_SetAnchors'{$ENDIF},
  ToolBar_GetAutoSize {$IFNDEF MSWINDOWS}name '_ToolBar_GetAutoSize'{$ENDIF},
  ToolBar_SetAutoSize {$IFNDEF MSWINDOWS}name '_ToolBar_SetAutoSize'{$ENDIF},
  ToolBar_GetBorderWidth {$IFNDEF MSWINDOWS}name '_ToolBar_GetBorderWidth'{$ENDIF},
  ToolBar_SetBorderWidth {$IFNDEF MSWINDOWS}name '_ToolBar_SetBorderWidth'{$ENDIF},
  ToolBar_GetButtonHeight {$IFNDEF MSWINDOWS}name '_ToolBar_GetButtonHeight'{$ENDIF},
  ToolBar_SetButtonHeight {$IFNDEF MSWINDOWS}name '_ToolBar_SetButtonHeight'{$ENDIF},
  ToolBar_GetButtonWidth {$IFNDEF MSWINDOWS}name '_ToolBar_GetButtonWidth'{$ENDIF},
  ToolBar_SetButtonWidth {$IFNDEF MSWINDOWS}name '_ToolBar_SetButtonWidth'{$ENDIF},
  ToolBar_GetCaption {$IFNDEF MSWINDOWS}name '_ToolBar_GetCaption'{$ENDIF},
  ToolBar_SetCaption {$IFNDEF MSWINDOWS}name '_ToolBar_SetCaption'{$ENDIF},
  ToolBar_GetColor {$IFNDEF MSWINDOWS}name '_ToolBar_GetColor'{$ENDIF},
  ToolBar_SetColor {$IFNDEF MSWINDOWS}name '_ToolBar_SetColor'{$ENDIF},
  ToolBar_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ToolBar_GetDoubleBuffered'{$ENDIF},
  ToolBar_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_ToolBar_SetDoubleBuffered'{$ENDIF},
  //ToolBar_GetDrawingStyle {$IFNDEF MSWINDOWS}name '_ToolBar_GetDrawingStyle'{$ENDIF},
  //ToolBar_SetDrawingStyle {$IFNDEF MSWINDOWS}name '_ToolBar_SetDrawingStyle'{$ENDIF},
  ToolBar_GetEnabled {$IFNDEF MSWINDOWS}name '_ToolBar_GetEnabled'{$ENDIF},
  ToolBar_SetEnabled {$IFNDEF MSWINDOWS}name '_ToolBar_SetEnabled'{$ENDIF},
  ToolBar_GetFlat {$IFNDEF MSWINDOWS}name '_ToolBar_GetFlat'{$ENDIF},
  ToolBar_SetFlat {$IFNDEF MSWINDOWS}name '_ToolBar_SetFlat'{$ENDIF},
  ToolBar_GetFont {$IFNDEF MSWINDOWS}name '_ToolBar_GetFont'{$ENDIF},
  ToolBar_SetFont {$IFNDEF MSWINDOWS}name '_ToolBar_SetFont'{$ENDIF},
  //ToolBar_GetGradientEndColor {$IFNDEF MSWINDOWS}name '_ToolBar_GetGradientEndColor'{$ENDIF},
  //ToolBar_SetGradientEndColor {$IFNDEF MSWINDOWS}name '_ToolBar_SetGradientEndColor'{$ENDIF},
  //ToolBar_GetGradientStartColor {$IFNDEF MSWINDOWS}name '_ToolBar_GetGradientStartColor'{$ENDIF},
  //ToolBar_SetGradientStartColor {$IFNDEF MSWINDOWS}name '_ToolBar_SetGradientStartColor'{$ENDIF},
  ToolBar_GetHeight {$IFNDEF MSWINDOWS}name '_ToolBar_GetHeight'{$ENDIF},
  ToolBar_SetHeight {$IFNDEF MSWINDOWS}name '_ToolBar_SetHeight'{$ENDIF},
  //ToolBar_GetHideClippedButtons {$IFNDEF MSWINDOWS}name '_ToolBar_GetHideClippedButtons'{$ENDIF},
  //ToolBar_SetHideClippedButtons {$IFNDEF MSWINDOWS}name '_ToolBar_SetHideClippedButtons'{$ENDIF},
  //ToolBar_GetHotImages {$IFNDEF MSWINDOWS}name '_ToolBar_GetHotImages'{$ENDIF},
  //ToolBar_SetHotImages {$IFNDEF MSWINDOWS}name '_ToolBar_SetHotImages'{$ENDIF},
  //ToolBar_GetImages {$IFNDEF MSWINDOWS}name '_ToolBar_GetImages'{$ENDIF},
  //ToolBar_SetImages {$IFNDEF MSWINDOWS}name '_ToolBar_SetImages'{$ENDIF},
  ToolBar_GetIndent {$IFNDEF MSWINDOWS}name '_ToolBar_GetIndent'{$ENDIF},
  ToolBar_SetIndent {$IFNDEF MSWINDOWS}name '_ToolBar_SetIndent'{$ENDIF},
  ToolBar_GetList {$IFNDEF MSWINDOWS}name '_ToolBar_GetList'{$ENDIF},
  ToolBar_SetList {$IFNDEF MSWINDOWS}name '_ToolBar_SetList'{$ENDIF},
  //ToolBar_GetMenu {$IFNDEF MSWINDOWS}name '_ToolBar_GetMenu'{$ENDIF},
  //ToolBar_SetMenu {$IFNDEF MSWINDOWS}name '_ToolBar_SetMenu'{$ENDIF},
  //ToolBar_GetGradientDirection {$IFNDEF MSWINDOWS}name '_ToolBar_GetGradientDirection'{$ENDIF},
  //ToolBar_SetGradientDirection {$IFNDEF MSWINDOWS}name '_ToolBar_SetGradientDirection'{$ENDIF},
  //ToolBar_GetGradientDrawingOptions {$IFNDEF MSWINDOWS}name '_ToolBar_GetGradientDrawingOptions'{$ENDIF},
  //ToolBar_SetGradientDrawingOptions {$IFNDEF MSWINDOWS}name '_ToolBar_SetGradientDrawingOptions'{$ENDIF},
  ToolBar_GetParentColor {$IFNDEF MSWINDOWS}name '_ToolBar_GetParentColor'{$ENDIF},
  ToolBar_SetParentColor {$IFNDEF MSWINDOWS}name '_ToolBar_SetParentColor'{$ENDIF},
  //ToolBar_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ToolBar_GetParentDoubleBuffered'{$ENDIF},
  //ToolBar_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_ToolBar_SetParentDoubleBuffered'{$ENDIF},
  ToolBar_GetParentFont {$IFNDEF MSWINDOWS}name '_ToolBar_GetParentFont'{$ENDIF},
  ToolBar_SetParentFont {$IFNDEF MSWINDOWS}name '_ToolBar_SetParentFont'{$ENDIF},
  ToolBar_GetParentShowHint {$IFNDEF MSWINDOWS}name '_ToolBar_GetParentShowHint'{$ENDIF},
  ToolBar_SetParentShowHint {$IFNDEF MSWINDOWS}name '_ToolBar_SetParentShowHint'{$ENDIF},
  ToolBar_GetPopupMenu {$IFNDEF MSWINDOWS}name '_ToolBar_GetPopupMenu'{$ENDIF},
  ToolBar_SetPopupMenu {$IFNDEF MSWINDOWS}name '_ToolBar_SetPopupMenu'{$ENDIF},
  ToolBar_GetShowCaptions {$IFNDEF MSWINDOWS}name '_ToolBar_GetShowCaptions'{$ENDIF},
  ToolBar_SetShowCaptions {$IFNDEF MSWINDOWS}name '_ToolBar_SetShowCaptions'{$ENDIF},
  ToolBar_GetShowHint {$IFNDEF MSWINDOWS}name '_ToolBar_GetShowHint'{$ENDIF},
  ToolBar_SetShowHint {$IFNDEF MSWINDOWS}name '_ToolBar_SetShowHint'{$ENDIF},
  ToolBar_GetTabOrder {$IFNDEF MSWINDOWS}name '_ToolBar_GetTabOrder'{$ENDIF},
  ToolBar_SetTabOrder {$IFNDEF MSWINDOWS}name '_ToolBar_SetTabOrder'{$ENDIF},
  ToolBar_GetTabStop {$IFNDEF MSWINDOWS}name '_ToolBar_GetTabStop'{$ENDIF},
  ToolBar_SetTabStop {$IFNDEF MSWINDOWS}name '_ToolBar_SetTabStop'{$ENDIF},
  ToolBar_GetTransparent {$IFNDEF MSWINDOWS}name '_ToolBar_GetTransparent'{$ENDIF},
  ToolBar_SetTransparent {$IFNDEF MSWINDOWS}name '_ToolBar_SetTransparent'{$ENDIF},
  ToolBar_GetVisible {$IFNDEF MSWINDOWS}name '_ToolBar_GetVisible'{$ENDIF},
  ToolBar_SetVisible {$IFNDEF MSWINDOWS}name '_ToolBar_SetVisible'{$ENDIF},
  //ToolBar_GetStyleElements {$IFNDEF MSWINDOWS}name '_ToolBar_GetStyleElements'{$ENDIF},
  //ToolBar_SetStyleElements {$IFNDEF MSWINDOWS}name '_ToolBar_SetStyleElements'{$ENDIF},
  ToolBar_GetWrapable {$IFNDEF MSWINDOWS}name '_ToolBar_GetWrapable'{$ENDIF},
  ToolBar_SetWrapable {$IFNDEF MSWINDOWS}name '_ToolBar_SetWrapable'{$ENDIF},
  ToolBar_SetOnClick {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnClick'{$ENDIF},
  ToolBar_SetOnDblClick {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnDblClick'{$ENDIF},
  ToolBar_SetOnEnter {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnEnter'{$ENDIF},
  ToolBar_SetOnExit {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnExit'{$ENDIF},
  ToolBar_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnMouseDown'{$ENDIF},
  ToolBar_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnMouseEnter'{$ENDIF},
  ToolBar_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnMouseLeave'{$ENDIF},
  ToolBar_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnMouseMove'{$ENDIF},
  ToolBar_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnMouseUp'{$ENDIF},
  ToolBar_SetOnResize {$IFNDEF MSWINDOWS}name '_ToolBar_SetOnResize'{$ENDIF},
  ToolBar_GetBrush {$IFNDEF MSWINDOWS}name '_ToolBar_GetBrush'{$ENDIF},
  ToolBar_GetControlCount {$IFNDEF MSWINDOWS}name '_ToolBar_GetControlCount'{$ENDIF},
  ToolBar_GetHandle {$IFNDEF MSWINDOWS}name '_ToolBar_GetHandle'{$ENDIF},
  ToolBar_GetParentWindow {$IFNDEF MSWINDOWS}name '_ToolBar_GetParentWindow'{$ENDIF},
  ToolBar_SetParentWindow {$IFNDEF MSWINDOWS}name '_ToolBar_SetParentWindow'{$ENDIF},
  ToolBar_GetAction {$IFNDEF MSWINDOWS}name '_ToolBar_GetAction'{$ENDIF},
  ToolBar_SetAction {$IFNDEF MSWINDOWS}name '_ToolBar_SetAction'{$ENDIF},
  ToolBar_GetBiDiMode {$IFNDEF MSWINDOWS}name '_ToolBar_GetBiDiMode'{$ENDIF},
  ToolBar_SetBiDiMode {$IFNDEF MSWINDOWS}name '_ToolBar_SetBiDiMode'{$ENDIF},
  ToolBar_GetBoundsRect {$IFNDEF MSWINDOWS}name '_ToolBar_GetBoundsRect'{$ENDIF},
  ToolBar_SetBoundsRect {$IFNDEF MSWINDOWS}name '_ToolBar_SetBoundsRect'{$ENDIF},
  ToolBar_GetClientHeight {$IFNDEF MSWINDOWS}name '_ToolBar_GetClientHeight'{$ENDIF},
  ToolBar_SetClientHeight {$IFNDEF MSWINDOWS}name '_ToolBar_SetClientHeight'{$ENDIF},
  ToolBar_GetClientRect {$IFNDEF MSWINDOWS}name '_ToolBar_GetClientRect'{$ENDIF},
  ToolBar_GetClientWidth {$IFNDEF MSWINDOWS}name '_ToolBar_GetClientWidth'{$ENDIF},
  ToolBar_SetClientWidth {$IFNDEF MSWINDOWS}name '_ToolBar_SetClientWidth'{$ENDIF},
  //ToolBar_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_ToolBar_GetExplicitLeft'{$ENDIF},
  //ToolBar_GetExplicitTop {$IFNDEF MSWINDOWS}name '_ToolBar_GetExplicitTop'{$ENDIF},
  //ToolBar_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_ToolBar_GetExplicitWidth'{$ENDIF},
  //ToolBar_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_ToolBar_GetExplicitHeight'{$ENDIF},
  ToolBar_GetParent {$IFNDEF MSWINDOWS}name '_ToolBar_GetParent'{$ENDIF},
  ToolBar_SetParent {$IFNDEF MSWINDOWS}name '_ToolBar_SetParent'{$ENDIF},
  //ToolBar_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ToolBar_GetAlignWithMargins'{$ENDIF},
  //ToolBar_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_ToolBar_SetAlignWithMargins'{$ENDIF},
  ToolBar_GetLeft {$IFNDEF MSWINDOWS}name '_ToolBar_GetLeft'{$ENDIF},
  ToolBar_SetLeft {$IFNDEF MSWINDOWS}name '_ToolBar_SetLeft'{$ENDIF},
  ToolBar_GetTop {$IFNDEF MSWINDOWS}name '_ToolBar_GetTop'{$ENDIF},
  ToolBar_SetTop {$IFNDEF MSWINDOWS}name '_ToolBar_SetTop'{$ENDIF},
  ToolBar_GetWidth {$IFNDEF MSWINDOWS}name '_ToolBar_GetWidth'{$ENDIF},
  ToolBar_SetWidth {$IFNDEF MSWINDOWS}name '_ToolBar_SetWidth'{$ENDIF},
  ToolBar_GetCursor {$IFNDEF MSWINDOWS}name '_ToolBar_GetCursor'{$ENDIF},
  ToolBar_SetCursor {$IFNDEF MSWINDOWS}name '_ToolBar_SetCursor'{$ENDIF},
  ToolBar_GetHint {$IFNDEF MSWINDOWS}name '_ToolBar_GetHint'{$ENDIF},
  ToolBar_SetHint {$IFNDEF MSWINDOWS}name '_ToolBar_SetHint'{$ENDIF},
  //ToolBar_GetMargins {$IFNDEF MSWINDOWS}name '_ToolBar_GetMargins'{$ENDIF},
  //ToolBar_SetMargins {$IFNDEF MSWINDOWS}name '_ToolBar_SetMargins'{$ENDIF},
  ToolBar_GetComponentCount {$IFNDEF MSWINDOWS}name '_ToolBar_GetComponentCount'{$ENDIF},
  ToolBar_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ToolBar_GetComponentIndex'{$ENDIF},
  ToolBar_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ToolBar_SetComponentIndex'{$ENDIF},
  ToolBar_GetOwner {$IFNDEF MSWINDOWS}name '_ToolBar_GetOwner'{$ENDIF},
  ToolBar_GetName {$IFNDEF MSWINDOWS}name '_ToolBar_GetName'{$ENDIF},
  ToolBar_SetName {$IFNDEF MSWINDOWS}name '_ToolBar_SetName'{$ENDIF},
  ToolBar_GetTag {$IFNDEF MSWINDOWS}name '_ToolBar_GetTag'{$ENDIF},
  ToolBar_SetTag {$IFNDEF MSWINDOWS}name '_ToolBar_SetTag'{$ENDIF},
  ToolBar_GetButtons {$IFNDEF MSWINDOWS}name '_ToolBar_GetButtons'{$ENDIF},
  ToolBar_GetControls {$IFNDEF MSWINDOWS}name '_ToolBar_GetControls'{$ENDIF},
  ToolBar_GetComponents {$IFNDEF MSWINDOWS}name '_ToolBar_GetComponents'{$ENDIF};

