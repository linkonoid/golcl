//https://github.com/roth-a/expandpanels


//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function CategoryPanelGroup_Create(AOwner: TComponent): TCategoryPanelGroup; cdecl;
begin
  Result :=  TCategoryPanelGroup.Create(AOwner);
end;

procedure CategoryPanelGroup_Free(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.Free;
end;

procedure CategoryPanelGroup_CollapseAll(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.CollapseAll;
end;

procedure CategoryPanelGroup_ExpandAll(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.ExpandAll;
end;

function CategoryPanelGroup_CanFocus(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure CategoryPanelGroup_FlipChildren(AObj: TCategoryPanelGroup; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function CategoryPanelGroup_Focused(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function CategoryPanelGroup_HandleAllocated(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure CategoryPanelGroup_Invalidate(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.Invalidate;
end;

procedure CategoryPanelGroup_Realign(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.Realign;
end;

procedure CategoryPanelGroup_Repaint(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.Repaint;
end;

procedure CategoryPanelGroup_ScaleBy(AObj: TCategoryPanelGroup; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure CategoryPanelGroup_SetBounds(AObj: TCategoryPanelGroup; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure CategoryPanelGroup_SetFocus(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.SetFocus;
end;

procedure CategoryPanelGroup_Update(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.Update;
end;

procedure CategoryPanelGroup_BringToFront(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.BringToFront;
end;

function CategoryPanelGroup_HasParent(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure CategoryPanelGroup_Hide(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.Hide;
end;

function CategoryPanelGroup_Perform(AObj: TCategoryPanelGroup; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure CategoryPanelGroup_Refresh(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.Refresh;
end;

procedure CategoryPanelGroup_SendToBack(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.SendToBack;
end;

procedure CategoryPanelGroup_Show(AObj: TCategoryPanelGroup); cdecl;
begin
  AObj.Show;
end;

function CategoryPanelGroup_GetTextBuf(AObj: TCategoryPanelGroup; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function CategoryPanelGroup_FindComponent(AObj: TCategoryPanelGroup; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function CategoryPanelGroup_GetNamePath(AObj: TCategoryPanelGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure CategoryPanelGroup_Assign(AObj: TCategoryPanelGroup; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function CategoryPanelGroup_ClassName(AObj: TCategoryPanelGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function CategoryPanelGroup_Equals(AObj: TCategoryPanelGroup; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function CategoryPanelGroup_GetHashCode(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function CategoryPanelGroup_ToString(AObj: TCategoryPanelGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function CategoryPanelGroup_GetAlign(AObj: TCategoryPanelGroup): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure CategoryPanelGroup_SetAlign(AObj: TCategoryPanelGroup; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function CategoryPanelGroup_GetAnchors(AObj: TCategoryPanelGroup): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure CategoryPanelGroup_SetAnchors(AObj: TCategoryPanelGroup; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function CategoryPanelGroup_GetBevelEdges(AObj: TCategoryPanelGroup): TBevelEdges; cdecl;
begin
  Result :=  AObj.BevelEdges;
end;

procedure CategoryPanelGroup_SetBevelEdges(AObj: TCategoryPanelGroup; AValue: TBevelEdges); cdecl;
begin
  AObj.BevelEdges := AValue;
end;

function CategoryPanelGroup_GetBevelInner(AObj: TCategoryPanelGroup): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelInner;
end;

procedure CategoryPanelGroup_SetBevelInner(AObj: TCategoryPanelGroup; AValue: TBevelCut); cdecl;
begin
  AObj.BevelInner := AValue;
end;

function CategoryPanelGroup_GetBevelOuter(AObj: TCategoryPanelGroup): TBevelCut; cdecl;
begin
  Result :=  AObj.BevelOuter;
end;

procedure CategoryPanelGroup_SetBevelOuter(AObj: TCategoryPanelGroup; AValue: TBevelCut); cdecl;
begin
  AObj.BevelOuter := AValue;
end;

function CategoryPanelGroup_GetBevelKind(AObj: TCategoryPanelGroup): TBevelKind; cdecl;
begin
  Result :=  AObj.BevelKind;
end;

procedure CategoryPanelGroup_SetBevelKind(AObj: TCategoryPanelGroup; AValue: TBevelKind); cdecl;
begin
  AObj.BevelKind := AValue;
end;

function CategoryPanelGroup_GetBiDiMode(AObj: TCategoryPanelGroup): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure CategoryPanelGroup_SetBiDiMode(AObj: TCategoryPanelGroup; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function CategoryPanelGroup_GetChevronAlignment(AObj: TCategoryPanelGroup): TAlignment; cdecl;
begin
  Result :=  AObj.ChevronAlignment;
end;

procedure CategoryPanelGroup_SetChevronAlignment(AObj: TCategoryPanelGroup; AValue: TAlignment); cdecl;
begin
  AObj.ChevronAlignment := AValue;
end;

function CategoryPanelGroup_GetChevronColor(AObj: TCategoryPanelGroup): TColor; cdecl;
begin
  Result :=  AObj.ChevronColor;
end;

procedure CategoryPanelGroup_SetChevronColor(AObj: TCategoryPanelGroup; AValue: TColor); cdecl;
begin
  AObj.ChevronColor := AValue;
end;

function CategoryPanelGroup_GetChevronHotColor(AObj: TCategoryPanelGroup): TColor; cdecl;
begin
  Result :=  AObj.ChevronHotColor;
end;

procedure CategoryPanelGroup_SetChevronHotColor(AObj: TCategoryPanelGroup; AValue: TColor); cdecl;
begin
  AObj.ChevronHotColor := AValue;
end;

function CategoryPanelGroup_GetDoubleBuffered(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure CategoryPanelGroup_SetDoubleBuffered(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function CategoryPanelGroup_GetEnabled(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure CategoryPanelGroup_SetEnabled(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function CategoryPanelGroup_GetColor(AObj: TCategoryPanelGroup): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure CategoryPanelGroup_SetColor(AObj: TCategoryPanelGroup; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function CategoryPanelGroup_GetFont(AObj: TCategoryPanelGroup): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure CategoryPanelGroup_SetFont(AObj: TCategoryPanelGroup; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function CategoryPanelGroup_GetGradientBaseColor(AObj: TCategoryPanelGroup): TColor; cdecl;
begin
  Result :=  AObj.GradientBaseColor;
end;

procedure CategoryPanelGroup_SetGradientBaseColor(AObj: TCategoryPanelGroup; AValue: TColor); cdecl;
begin
  AObj.GradientBaseColor := AValue;
end;

function CategoryPanelGroup_GetGradientColor(AObj: TCategoryPanelGroup): TColor; cdecl;
begin
  Result :=  AObj.GradientColor;
end;

procedure CategoryPanelGroup_SetGradientColor(AObj: TCategoryPanelGroup; AValue: TColor); cdecl;
begin
  AObj.GradientColor := AValue;
end;

function CategoryPanelGroup_GetGradientDirection(AObj: TCategoryPanelGroup): TGradientDirection; cdecl;
begin
  Result :=  AObj.GradientDirection;
end;

procedure CategoryPanelGroup_SetGradientDirection(AObj: TCategoryPanelGroup; AValue: TGradientDirection); cdecl;
begin
  AObj.GradientDirection := AValue;
end;

function CategoryPanelGroup_GetHeaderAlignment(AObj: TCategoryPanelGroup): TAlignment; cdecl;
begin
  Result :=  AObj.HeaderAlignment;
end;

procedure CategoryPanelGroup_SetHeaderAlignment(AObj: TCategoryPanelGroup; AValue: TAlignment); cdecl;
begin
  AObj.HeaderAlignment := AValue;
end;

function CategoryPanelGroup_GetHeaderFont(AObj: TCategoryPanelGroup): TFont; cdecl;
begin
  Result :=  AObj.HeaderFont;
end;

procedure CategoryPanelGroup_SetHeaderFont(AObj: TCategoryPanelGroup; AValue: TFont); cdecl;
begin
  AObj.HeaderFont := AValue;
end;

function CategoryPanelGroup_GetHeaderHeight(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.HeaderHeight;
end;

procedure CategoryPanelGroup_SetHeaderHeight(AObj: TCategoryPanelGroup; AValue: Integer); cdecl;
begin
  AObj.HeaderHeight := AValue;
end;

function CategoryPanelGroup_GetHeaderImage(AObj: TCategoryPanelGroup): TPicture; cdecl;
begin
  Result :=  AObj.HeaderImage;
end;

procedure CategoryPanelGroup_SetHeaderImage(AObj: TCategoryPanelGroup; AValue: TPicture); cdecl;
begin
  AObj.HeaderImage := AValue;
end;

function CategoryPanelGroup_GetHeaderStyle(AObj: TCategoryPanelGroup): TCustomCategoryPanelGroup.THeaderStyle; cdecl;
begin
  Result :=  AObj.HeaderStyle;
end;

procedure CategoryPanelGroup_SetHeaderStyle(AObj: TCategoryPanelGroup; AValue: TCustomCategoryPanelGroup.THeaderStyle); cdecl;
begin
  AObj.HeaderStyle := AValue;
end;

function CategoryPanelGroup_GetHeight(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure CategoryPanelGroup_SetHeight(AObj: TCategoryPanelGroup; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function CategoryPanelGroup_GetImages(AObj: TCategoryPanelGroup): TCustomImageList; cdecl;
begin
  Result :=  AObj.Images;
end;

procedure CategoryPanelGroup_SetImages(AObj: TCategoryPanelGroup; AValue: TCustomImageList); cdecl;
begin
  AObj.Images := AValue;
end;

function CategoryPanelGroup_GetParentBackground(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentBackground;
end;

procedure CategoryPanelGroup_SetParentBackground(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentBackground := AValue;
end;

function CategoryPanelGroup_GetParentColor(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure CategoryPanelGroup_SetParentColor(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

function CategoryPanelGroup_GetParentCtl3D(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure CategoryPanelGroup_SetParentCtl3D(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentCtl3D := AValue;
end;

function CategoryPanelGroup_GetParentDoubleBuffered(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure CategoryPanelGroup_SetParentDoubleBuffered(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function CategoryPanelGroup_GetParentFont(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure CategoryPanelGroup_SetParentFont(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function CategoryPanelGroup_GetParentShowHint(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure CategoryPanelGroup_SetParentShowHint(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function CategoryPanelGroup_GetPopupMenu(AObj: TCategoryPanelGroup): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure CategoryPanelGroup_SetPopupMenu(AObj: TCategoryPanelGroup; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function CategoryPanelGroup_GetShowHint(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure CategoryPanelGroup_SetShowHint(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function CategoryPanelGroup_GetTabOrder(AObj: TCategoryPanelGroup): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure CategoryPanelGroup_SetTabOrder(AObj: TCategoryPanelGroup; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function CategoryPanelGroup_GetTabStop(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure CategoryPanelGroup_SetTabStop(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function CategoryPanelGroup_GetVisible(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure CategoryPanelGroup_SetVisible(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function CategoryPanelGroup_GetStyleElements(AObj: TCategoryPanelGroup): TStyleElements; cdecl;
begin
  Result :=  AObj.StyleElements;
end;

procedure CategoryPanelGroup_SetStyleElements(AObj: TCategoryPanelGroup; AValue: TStyleElements); cdecl;
begin
  AObj.StyleElements := AValue;
end;

function CategoryPanelGroup_GetWidth(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure CategoryPanelGroup_SetWidth(AObj: TCategoryPanelGroup; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure CategoryPanelGroup_SetOnClick(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnDblClick(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnEnter(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnExit(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnMouseDown(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnMouseEnter(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnMouseLeave(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnMouseMove(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnMouseUp(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

procedure CategoryPanelGroup_SetOnMouseWheel(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseWheel := nil;
    TEventClass.Remove(AObj, geMouseWheel);
    Exit;
  end;
  AObj.OnMouseWheel := TEventClass.OnMouseWheel;
  TEventClass.Add(AObj, geMouseWheel, AEventId);
end;

procedure CategoryPanelGroup_SetOnResize(AObj: TCategoryPanelGroup; AEventId: NativeUInt); stdcall
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

function CategoryPanelGroup_GetPanels(AObj: TCategoryPanelGroup): TList; cdecl;
begin
  Result :=  AObj.Panels;
end;

function CategoryPanelGroup_GetBrush(AObj: TCategoryPanelGroup): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function CategoryPanelGroup_GetControlCount(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function CategoryPanelGroup_GetHandle(AObj: TCategoryPanelGroup): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function CategoryPanelGroup_GetParentWindow(AObj: TCategoryPanelGroup): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure CategoryPanelGroup_SetParentWindow(AObj: TCategoryPanelGroup; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function CategoryPanelGroup_GetAction(AObj: TCategoryPanelGroup): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure CategoryPanelGroup_SetAction(AObj: TCategoryPanelGroup; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure CategoryPanelGroup_GetBoundsRect(AObj: TCategoryPanelGroup; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure CategoryPanelGroup_SetBoundsRect(AObj: TCategoryPanelGroup; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function CategoryPanelGroup_GetClientHeight(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure CategoryPanelGroup_SetClientHeight(AObj: TCategoryPanelGroup; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure CategoryPanelGroup_GetClientRect(AObj: TCategoryPanelGroup; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function CategoryPanelGroup_GetClientWidth(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure CategoryPanelGroup_SetClientWidth(AObj: TCategoryPanelGroup; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function CategoryPanelGroup_GetExplicitLeft(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function CategoryPanelGroup_GetExplicitTop(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function CategoryPanelGroup_GetExplicitWidth(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function CategoryPanelGroup_GetExplicitHeight(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

function CategoryPanelGroup_GetParent(AObj: TCategoryPanelGroup): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure CategoryPanelGroup_SetParent(AObj: TCategoryPanelGroup; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function CategoryPanelGroup_GetAlignWithMargins(AObj: TCategoryPanelGroup): LongBool; cdecl;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure CategoryPanelGroup_SetAlignWithMargins(AObj: TCategoryPanelGroup; AValue: LongBool); cdecl;
begin
  AObj.AlignWithMargins := AValue;
end;

function CategoryPanelGroup_GetLeft(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure CategoryPanelGroup_SetLeft(AObj: TCategoryPanelGroup; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function CategoryPanelGroup_GetTop(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure CategoryPanelGroup_SetTop(AObj: TCategoryPanelGroup; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function CategoryPanelGroup_GetCursor(AObj: TCategoryPanelGroup): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure CategoryPanelGroup_SetCursor(AObj: TCategoryPanelGroup; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function CategoryPanelGroup_GetHint(AObj: TCategoryPanelGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure CategoryPanelGroup_SetHint(AObj: TCategoryPanelGroup; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function CategoryPanelGroup_GetMargins(AObj: TCategoryPanelGroup): TMargins; cdecl;
begin
  Result :=  AObj.Margins;
end;

procedure CategoryPanelGroup_SetMargins(AObj: TCategoryPanelGroup; AValue: TMargins); cdecl;
begin
  AObj.Margins := AValue;
end;

function CategoryPanelGroup_GetComponentCount(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function CategoryPanelGroup_GetComponentIndex(AObj: TCategoryPanelGroup): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure CategoryPanelGroup_SetComponentIndex(AObj: TCategoryPanelGroup; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function CategoryPanelGroup_GetOwner(AObj: TCategoryPanelGroup): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function CategoryPanelGroup_GetName(AObj: TCategoryPanelGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure CategoryPanelGroup_SetName(AObj: TCategoryPanelGroup; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function CategoryPanelGroup_GetTag(AObj: TCategoryPanelGroup): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure CategoryPanelGroup_SetTag(AObj: TCategoryPanelGroup; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function CategoryPanelGroup_GetControls(AObj: TCategoryPanelGroup; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function CategoryPanelGroup_GetComponents(AObj: TCategoryPanelGroup; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  CategoryPanelGroup_Create {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Create'{$ENDIF},
  CategoryPanelGroup_Free {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Free'{$ENDIF},
  CategoryPanelGroup_CollapseAll {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_CollapseAll'{$ENDIF},
  CategoryPanelGroup_ExpandAll {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_ExpandAll'{$ENDIF},
  CategoryPanelGroup_CanFocus {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_CanFocus'{$ENDIF},
  CategoryPanelGroup_FlipChildren {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_FlipChildren'{$ENDIF},
  CategoryPanelGroup_Focused {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Focused'{$ENDIF},
  CategoryPanelGroup_HandleAllocated {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_HandleAllocated'{$ENDIF},
  CategoryPanelGroup_Invalidate {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Invalidate'{$ENDIF},
  CategoryPanelGroup_Realign {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Realign'{$ENDIF},
  CategoryPanelGroup_Repaint {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Repaint'{$ENDIF},
  CategoryPanelGroup_ScaleBy {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_ScaleBy'{$ENDIF},
  CategoryPanelGroup_SetBounds {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetBounds'{$ENDIF},
  CategoryPanelGroup_SetFocus {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetFocus'{$ENDIF},
  CategoryPanelGroup_Update {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Update'{$ENDIF},
  CategoryPanelGroup_BringToFront {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_BringToFront'{$ENDIF},
  CategoryPanelGroup_HasParent {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_HasParent'{$ENDIF},
  CategoryPanelGroup_Hide {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Hide'{$ENDIF},
  CategoryPanelGroup_Perform {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Perform'{$ENDIF},
  CategoryPanelGroup_Refresh {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Refresh'{$ENDIF},
  CategoryPanelGroup_SendToBack {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SendToBack'{$ENDIF},
  CategoryPanelGroup_Show {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Show'{$ENDIF},
  CategoryPanelGroup_GetTextBuf {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetTextBuf'{$ENDIF},
  CategoryPanelGroup_FindComponent {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_FindComponent'{$ENDIF},
  CategoryPanelGroup_GetNamePath {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetNamePath'{$ENDIF},
  CategoryPanelGroup_Assign {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Assign'{$ENDIF},
  CategoryPanelGroup_ClassName {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_ClassName'{$ENDIF},
  CategoryPanelGroup_Equals {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_Equals'{$ENDIF},
  CategoryPanelGroup_GetHashCode {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHashCode'{$ENDIF},
  CategoryPanelGroup_ToString {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_ToString'{$ENDIF},
  CategoryPanelGroup_GetAlign {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetAlign'{$ENDIF},
  CategoryPanelGroup_SetAlign {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetAlign'{$ENDIF},
  CategoryPanelGroup_GetAnchors {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetAnchors'{$ENDIF},
  CategoryPanelGroup_SetAnchors {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetAnchors'{$ENDIF},
  CategoryPanelGroup_GetBevelEdges {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetBevelEdges'{$ENDIF},
  CategoryPanelGroup_SetBevelEdges {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetBevelEdges'{$ENDIF},
  CategoryPanelGroup_GetBevelInner {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetBevelInner'{$ENDIF},
  CategoryPanelGroup_SetBevelInner {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetBevelInner'{$ENDIF},
  CategoryPanelGroup_GetBevelOuter {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetBevelOuter'{$ENDIF},
  CategoryPanelGroup_SetBevelOuter {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetBevelOuter'{$ENDIF},
  CategoryPanelGroup_GetBevelKind {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetBevelKind'{$ENDIF},
  CategoryPanelGroup_SetBevelKind {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetBevelKind'{$ENDIF},
  CategoryPanelGroup_GetBiDiMode {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetBiDiMode'{$ENDIF},
  CategoryPanelGroup_SetBiDiMode {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetBiDiMode'{$ENDIF},
  CategoryPanelGroup_GetChevronAlignment {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetChevronAlignment'{$ENDIF},
  CategoryPanelGroup_SetChevronAlignment {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetChevronAlignment'{$ENDIF},
  CategoryPanelGroup_GetChevronColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetChevronColor'{$ENDIF},
  CategoryPanelGroup_SetChevronColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetChevronColor'{$ENDIF},
  CategoryPanelGroup_GetChevronHotColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetChevronHotColor'{$ENDIF},
  CategoryPanelGroup_SetChevronHotColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetChevronHotColor'{$ENDIF},
  CategoryPanelGroup_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetDoubleBuffered'{$ENDIF},
  CategoryPanelGroup_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetDoubleBuffered'{$ENDIF},
  CategoryPanelGroup_GetEnabled {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetEnabled'{$ENDIF},
  CategoryPanelGroup_SetEnabled {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetEnabled'{$ENDIF},
  CategoryPanelGroup_GetColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetColor'{$ENDIF},
  CategoryPanelGroup_SetColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetColor'{$ENDIF},
  CategoryPanelGroup_GetFont {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetFont'{$ENDIF},
  CategoryPanelGroup_SetFont {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetFont'{$ENDIF},
  CategoryPanelGroup_GetGradientBaseColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetGradientBaseColor'{$ENDIF},
  CategoryPanelGroup_SetGradientBaseColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetGradientBaseColor'{$ENDIF},
  CategoryPanelGroup_GetGradientColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetGradientColor'{$ENDIF},
  CategoryPanelGroup_SetGradientColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetGradientColor'{$ENDIF},
  CategoryPanelGroup_GetGradientDirection {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetGradientDirection'{$ENDIF},
  CategoryPanelGroup_SetGradientDirection {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetGradientDirection'{$ENDIF},
  CategoryPanelGroup_GetHeaderAlignment {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHeaderAlignment'{$ENDIF},
  CategoryPanelGroup_SetHeaderAlignment {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetHeaderAlignment'{$ENDIF},
  CategoryPanelGroup_GetHeaderFont {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHeaderFont'{$ENDIF},
  CategoryPanelGroup_SetHeaderFont {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetHeaderFont'{$ENDIF},
  CategoryPanelGroup_GetHeaderHeight {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHeaderHeight'{$ENDIF},
  CategoryPanelGroup_SetHeaderHeight {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetHeaderHeight'{$ENDIF},
  CategoryPanelGroup_GetHeaderImage {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHeaderImage'{$ENDIF},
  CategoryPanelGroup_SetHeaderImage {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetHeaderImage'{$ENDIF},
  CategoryPanelGroup_GetHeaderStyle {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHeaderStyle'{$ENDIF},
  CategoryPanelGroup_SetHeaderStyle {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetHeaderStyle'{$ENDIF},
  CategoryPanelGroup_GetHeight {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHeight'{$ENDIF},
  CategoryPanelGroup_SetHeight {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetHeight'{$ENDIF},
  CategoryPanelGroup_GetImages {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetImages'{$ENDIF},
  CategoryPanelGroup_SetImages {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetImages'{$ENDIF},
  CategoryPanelGroup_GetParentBackground {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetParentBackground'{$ENDIF},
  CategoryPanelGroup_SetParentBackground {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetParentBackground'{$ENDIF},
  CategoryPanelGroup_GetParentColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetParentColor'{$ENDIF},
  CategoryPanelGroup_SetParentColor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetParentColor'{$ENDIF},
  CategoryPanelGroup_GetParentCtl3D {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetParentCtl3D'{$ENDIF},
  CategoryPanelGroup_SetParentCtl3D {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetParentCtl3D'{$ENDIF},
  CategoryPanelGroup_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetParentDoubleBuffered'{$ENDIF},
  CategoryPanelGroup_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetParentDoubleBuffered'{$ENDIF},
  CategoryPanelGroup_GetParentFont {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetParentFont'{$ENDIF},
  CategoryPanelGroup_SetParentFont {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetParentFont'{$ENDIF},
  CategoryPanelGroup_GetParentShowHint {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetParentShowHint'{$ENDIF},
  CategoryPanelGroup_SetParentShowHint {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetParentShowHint'{$ENDIF},
  CategoryPanelGroup_GetPopupMenu {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetPopupMenu'{$ENDIF},
  CategoryPanelGroup_SetPopupMenu {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetPopupMenu'{$ENDIF},
  CategoryPanelGroup_GetShowHint {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetShowHint'{$ENDIF},
  CategoryPanelGroup_SetShowHint {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetShowHint'{$ENDIF},
  CategoryPanelGroup_GetTabOrder {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetTabOrder'{$ENDIF},
  CategoryPanelGroup_SetTabOrder {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetTabOrder'{$ENDIF},
  CategoryPanelGroup_GetTabStop {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetTabStop'{$ENDIF},
  CategoryPanelGroup_SetTabStop {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetTabStop'{$ENDIF},
  CategoryPanelGroup_GetVisible {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetVisible'{$ENDIF},
  CategoryPanelGroup_SetVisible {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetVisible'{$ENDIF},
  CategoryPanelGroup_GetStyleElements {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetStyleElements'{$ENDIF},
  CategoryPanelGroup_SetStyleElements {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetStyleElements'{$ENDIF},
  CategoryPanelGroup_GetWidth {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetWidth'{$ENDIF},
  CategoryPanelGroup_SetWidth {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetWidth'{$ENDIF},
  CategoryPanelGroup_SetOnClick {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnClick'{$ENDIF},
  CategoryPanelGroup_SetOnDblClick {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnDblClick'{$ENDIF},
  CategoryPanelGroup_SetOnEnter {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnEnter'{$ENDIF},
  CategoryPanelGroup_SetOnExit {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnExit'{$ENDIF},
  CategoryPanelGroup_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnMouseDown'{$ENDIF},
  CategoryPanelGroup_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnMouseEnter'{$ENDIF},
  CategoryPanelGroup_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnMouseLeave'{$ENDIF},
  CategoryPanelGroup_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnMouseMove'{$ENDIF},
  CategoryPanelGroup_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnMouseUp'{$ENDIF},
  CategoryPanelGroup_SetOnMouseWheel {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnMouseWheel'{$ENDIF},
  CategoryPanelGroup_SetOnResize {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetOnResize'{$ENDIF},
  CategoryPanelGroup_GetPanels {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetPanels'{$ENDIF},
  CategoryPanelGroup_GetBrush {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetBrush'{$ENDIF},
  CategoryPanelGroup_GetControlCount {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetControlCount'{$ENDIF},
  CategoryPanelGroup_GetHandle {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHandle'{$ENDIF},
  CategoryPanelGroup_GetParentWindow {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetParentWindow'{$ENDIF},
  CategoryPanelGroup_SetParentWindow {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetParentWindow'{$ENDIF},
  CategoryPanelGroup_GetAction {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetAction'{$ENDIF},
  CategoryPanelGroup_SetAction {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetAction'{$ENDIF},
  CategoryPanelGroup_GetBoundsRect {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetBoundsRect'{$ENDIF},
  CategoryPanelGroup_SetBoundsRect {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetBoundsRect'{$ENDIF},
  CategoryPanelGroup_GetClientHeight {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetClientHeight'{$ENDIF},
  CategoryPanelGroup_SetClientHeight {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetClientHeight'{$ENDIF},
  CategoryPanelGroup_GetClientRect {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetClientRect'{$ENDIF},
  CategoryPanelGroup_GetClientWidth {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetClientWidth'{$ENDIF},
  CategoryPanelGroup_SetClientWidth {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetClientWidth'{$ENDIF},
  CategoryPanelGroup_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetExplicitLeft'{$ENDIF},
  CategoryPanelGroup_GetExplicitTop {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetExplicitTop'{$ENDIF},
  CategoryPanelGroup_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetExplicitWidth'{$ENDIF},
  CategoryPanelGroup_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetExplicitHeight'{$ENDIF},
  CategoryPanelGroup_GetParent {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetParent'{$ENDIF},
  CategoryPanelGroup_SetParent {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetParent'{$ENDIF},
  CategoryPanelGroup_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetAlignWithMargins'{$ENDIF},
  CategoryPanelGroup_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetAlignWithMargins'{$ENDIF},
  CategoryPanelGroup_GetLeft {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetLeft'{$ENDIF},
  CategoryPanelGroup_SetLeft {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetLeft'{$ENDIF},
  CategoryPanelGroup_GetTop {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetTop'{$ENDIF},
  CategoryPanelGroup_SetTop {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetTop'{$ENDIF},
  CategoryPanelGroup_GetCursor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetCursor'{$ENDIF},
  CategoryPanelGroup_SetCursor {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetCursor'{$ENDIF},
  CategoryPanelGroup_GetHint {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetHint'{$ENDIF},
  CategoryPanelGroup_SetHint {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetHint'{$ENDIF},
  CategoryPanelGroup_GetMargins {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetMargins'{$ENDIF},
  CategoryPanelGroup_SetMargins {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetMargins'{$ENDIF},
  CategoryPanelGroup_GetComponentCount {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetComponentCount'{$ENDIF},
  CategoryPanelGroup_GetComponentIndex {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetComponentIndex'{$ENDIF},
  CategoryPanelGroup_SetComponentIndex {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetComponentIndex'{$ENDIF},
  CategoryPanelGroup_GetOwner {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetOwner'{$ENDIF},
  CategoryPanelGroup_GetName {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetName'{$ENDIF},
  CategoryPanelGroup_SetName {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetName'{$ENDIF},
  CategoryPanelGroup_GetTag {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetTag'{$ENDIF},
  CategoryPanelGroup_SetTag {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_SetTag'{$ENDIF},
  CategoryPanelGroup_GetControls {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetControls'{$ENDIF},
  CategoryPanelGroup_GetComponents {$IFNDEF MSWINDOWS}name '_CategoryPanelGroup_GetComponents'{$ENDIF};

