
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function DateTimePicker_Create(AOwner: TComponent): TDateTimePicker; cdecl;
begin
  Result :=  TDateTimePicker.Create(AOwner);
end;

procedure DateTimePicker_Free(AObj: TDateTimePicker); cdecl;
begin
  AObj.Free;
end;

function DateTimePicker_CanFocus(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure DateTimePicker_FlipChildren(AObj: TDateTimePicker; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function DateTimePicker_Focused(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function DateTimePicker_HandleAllocated(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure DateTimePicker_Invalidate(AObj: TDateTimePicker); cdecl;
begin
  AObj.Invalidate;
end;

procedure DateTimePicker_Realign(AObj: TDateTimePicker); cdecl;
begin
  AObj.Realign;
end;

procedure DateTimePicker_Repaint(AObj: TDateTimePicker); cdecl;
begin
  AObj.Repaint;
end;

procedure DateTimePicker_ScaleBy(AObj: TDateTimePicker; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure DateTimePicker_SetBounds(AObj: TDateTimePicker; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure DateTimePicker_SetFocus(AObj: TDateTimePicker); cdecl;
begin
  AObj.SetFocus;
end;

procedure DateTimePicker_Update(AObj: TDateTimePicker); cdecl;
begin
  AObj.Update;
end;

procedure DateTimePicker_BringToFront(AObj: TDateTimePicker); cdecl;
begin
  AObj.BringToFront;
end;

function DateTimePicker_HasParent(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure DateTimePicker_Hide(AObj: TDateTimePicker); cdecl;
begin
  AObj.Hide;
end;

function DateTimePicker_Perform(AObj: TDateTimePicker; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure DateTimePicker_Refresh(AObj: TDateTimePicker); cdecl;
begin
  AObj.Refresh;
end;

procedure DateTimePicker_SendToBack(AObj: TDateTimePicker); cdecl;
begin
  AObj.SendToBack;
end;

procedure DateTimePicker_Show(AObj: TDateTimePicker); cdecl;
begin
  AObj.Show;
end;

function DateTimePicker_GetTextBuf(AObj: TDateTimePicker; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function DateTimePicker_FindComponent(AObj: TDateTimePicker; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function DateTimePicker_GetNamePath(AObj: TDateTimePicker): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure DateTimePicker_Assign(AObj: TDateTimePicker; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function DateTimePicker_ClassName(AObj: TDateTimePicker): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function DateTimePicker_Equals(AObj: TDateTimePicker; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function DateTimePicker_GetHashCode(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function DateTimePicker_ToString(AObj: TDateTimePicker): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function DateTimePicker_GetDateTime(AObj: TDateTimePicker): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.DateTime);
end;

procedure DateTimePicker_SetDateTime(AObj: TDateTimePicker; AValue: TUnixDateTime); cdecl;
begin
  AObj.DateTime := UnixToTime(AValue);
end;

function DateTimePicker_GetDroppedDown(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.DroppedDown;
end;

function DateTimePicker_GetAlign(AObj: TDateTimePicker): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure DateTimePicker_SetAlign(AObj: TDateTimePicker; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function DateTimePicker_GetAnchors(AObj: TDateTimePicker): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure DateTimePicker_SetAnchors(AObj: TDateTimePicker; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

//function DateTimePicker_GetBevelEdges(AObj: TDateTimePicker): TBevelEdges; cdecl;
//begin
//  Result :=  AObj.BevelEdges;
//end;
//
//procedure DateTimePicker_SetBevelEdges(AObj: TDateTimePicker; AValue: TBevelEdges); cdecl;
//begin
//  AObj.BevelEdges := AValue;
//end;
//
//function DateTimePicker_GetBevelInner(AObj: TDateTimePicker): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelInner;
//end;
//
//procedure DateTimePicker_SetBevelInner(AObj: TDateTimePicker; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelInner := AValue;
//end;
//
//function DateTimePicker_GetBevelOuter(AObj: TDateTimePicker): TBevelCut; cdecl;
//begin
//  Result :=  AObj.BevelOuter;
//end;
//
//procedure DateTimePicker_SetBevelOuter(AObj: TDateTimePicker; AValue: TBevelCut); cdecl;
//begin
//  AObj.BevelOuter := AValue;
//end;
//
//function DateTimePicker_GetBevelKind(AObj: TDateTimePicker): TBevelKind; cdecl;
//begin
//  Result :=  AObj.BevelKind;
//end;
//
//procedure DateTimePicker_SetBevelKind(AObj: TDateTimePicker; AValue: TBevelKind); cdecl;
//begin
//  AObj.BevelKind := AValue;
//end;

function DateTimePicker_GetBiDiMode(AObj: TDateTimePicker): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure DateTimePicker_SetBiDiMode(AObj: TDateTimePicker; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function DateTimePicker_GetCalAlignment(AObj: TDateTimePicker): TDTCalAlignment; cdecl;
begin
  Result :=  AObj.CalAlignment;
end;

procedure DateTimePicker_SetCalAlignment(AObj: TDateTimePicker; AValue: TDTCalAlignment); cdecl;
begin
  AObj.CalAlignment := AValue;
end;

//function DateTimePicker_GetCalColors(AObj: TDateTimePicker): TMonthCalColors; cdecl;
//begin
//  Result :=  AObj.CalColors;
//end;
//
//procedure DateTimePicker_SetCalColors(AObj: TDateTimePicker; AValue: TMonthCalColors); cdecl;
//begin
//  AObj.CalColors := AValue;
//end;

function DateTimePicker_GetDate(AObj: TDateTimePicker): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.Date);
end;

procedure DateTimePicker_SetDate(AObj: TDateTimePicker; AValue: TUnixDateTime); cdecl;
begin
  AObj.Date := UnixToTime(AValue);
end;

//function DateTimePicker_GetFormat(AObj: TDateTimePicker): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.Format);
//end;
//
//procedure DateTimePicker_SetFormat(AObj: TDateTimePicker; AValue: PWideChar); cdecl;
//begin
//  AObj.Format := AValue;
//end;

function DateTimePicker_GetTime(AObj: TDateTimePicker): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.Time);
end;

procedure DateTimePicker_SetTime(AObj: TDateTimePicker; AValue: TUnixDateTime); cdecl;
begin
  AObj.Time := UnixToTime(AValue);
end;

function DateTimePicker_GetChecked(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.Checked;
end;

procedure DateTimePicker_SetChecked(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.Checked := AValue;
end;

function DateTimePicker_GetColor(AObj: TDateTimePicker): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure DateTimePicker_SetColor(AObj: TDateTimePicker; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

//function DateTimePicker_GetDateFormat(AObj: TDateTimePicker): TDTDateFormat; cdecl;
//begin
//  Result :=  AObj.DateFormat;
//end;
//
//procedure DateTimePicker_SetDateFormat(AObj: TDateTimePicker; AValue: TDTDateFormat); cdecl;
//begin
//  AObj.DateFormat := AValue;
//end;

function DateTimePicker_GetDateMode(AObj: TDateTimePicker): TDTDateMode; cdecl;
begin
  Result :=  AObj.DateMode;
end;

procedure DateTimePicker_SetDateMode(AObj: TDateTimePicker; AValue: TDTDateMode); cdecl;
begin
  AObj.DateMode := AValue;
end;

function DateTimePicker_GetDoubleBuffered(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure DateTimePicker_SetDoubleBuffered(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function DateTimePicker_GetEnabled(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure DateTimePicker_SetEnabled(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function DateTimePicker_GetFont(AObj: TDateTimePicker): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure DateTimePicker_SetFont(AObj: TDateTimePicker; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function DateTimePicker_GetKind(AObj: TDateTimePicker): TDateTimeKind; cdecl;
begin
  Result :=  AObj.Kind;
end;

procedure DateTimePicker_SetKind(AObj: TDateTimePicker; AValue: TDateTimeKind); cdecl;
begin
  AObj.Kind := AValue;
end;

function DateTimePicker_GetMaxDate(AObj: TDateTimePicker): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.MaxDate);
end;

procedure DateTimePicker_SetMaxDate(AObj: TDateTimePicker; AValue: TUnixDateTime); cdecl;
begin
  AObj.MaxDate := UnixToTime(AValue);
end;

function DateTimePicker_GetMinDate(AObj: TDateTimePicker): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.MinDate);
end;

procedure DateTimePicker_SetMinDate(AObj: TDateTimePicker; AValue: TUnixDateTime); cdecl;
begin
  AObj.MinDate := UnixToTime(AValue);
end;

//function DateTimePicker_GetParseInput(AObj: TDateTimePicker): LongBool; cdecl;
//begin
//  Result :=  AObj.ParseInput;
//end;
//
//procedure DateTimePicker_SetParseInput(AObj: TDateTimePicker; AValue: LongBool); cdecl;
//begin
//  AObj.ParseInput := AValue;
//end;

function DateTimePicker_GetParentColor(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure DateTimePicker_SetParentColor(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.ParentColor := AValue;
end;

//function DateTimePicker_GetParentDoubleBuffered(AObj: TDateTimePicker): LongBool; cdecl;
//begin
//  Result :=  AObj.ParentDoubleBuffered;
//end;
//
//procedure DateTimePicker_SetParentDoubleBuffered(AObj: TDateTimePicker; AValue: LongBool); cdecl;
//begin
//  AObj.ParentDoubleBuffered := AValue;
//end;

function DateTimePicker_GetParentFont(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure DateTimePicker_SetParentFont(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function DateTimePicker_GetParentShowHint(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure DateTimePicker_SetParentShowHint(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function DateTimePicker_GetPopupMenu(AObj: TDateTimePicker): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure DateTimePicker_SetPopupMenu(AObj: TDateTimePicker; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function DateTimePicker_GetShowHint(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure DateTimePicker_SetShowHint(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function DateTimePicker_GetTabOrder(AObj: TDateTimePicker): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure DateTimePicker_SetTabOrder(AObj: TDateTimePicker; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function DateTimePicker_GetTabStop(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure DateTimePicker_SetTabStop(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function DateTimePicker_GetVisible(AObj: TDateTimePicker): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure DateTimePicker_SetVisible(AObj: TDateTimePicker; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

//function DateTimePicker_GetStyleElements(AObj: TDateTimePicker): TStyleElements; cdecl;
//begin
//  Result :=  AObj.StyleElements;
//end;
//
//procedure DateTimePicker_SetStyleElements(AObj: TDateTimePicker; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure DateTimePicker_SetOnClick(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

procedure DateTimePicker_SetOnChange(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

procedure DateTimePicker_SetOnEnter(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

procedure DateTimePicker_SetOnExit(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

procedure DateTimePicker_SetOnKeyDown(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

procedure DateTimePicker_SetOnKeyPress(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

procedure DateTimePicker_SetOnKeyUp(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

procedure DateTimePicker_SetOnMouseEnter(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

procedure DateTimePicker_SetOnMouseLeave(AObj: TDateTimePicker; AEventId: NativeUInt); stdcall;
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

function DateTimePicker_GetBrush(AObj: TDateTimePicker): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function DateTimePicker_GetControlCount(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function DateTimePicker_GetHandle(AObj: TDateTimePicker): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function DateTimePicker_GetParentWindow(AObj: TDateTimePicker): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure DateTimePicker_SetParentWindow(AObj: TDateTimePicker; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function DateTimePicker_GetAction(AObj: TDateTimePicker): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure DateTimePicker_SetAction(AObj: TDateTimePicker; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure DateTimePicker_GetBoundsRect(AObj: TDateTimePicker; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure DateTimePicker_SetBoundsRect(AObj: TDateTimePicker; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function DateTimePicker_GetClientHeight(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure DateTimePicker_SetClientHeight(AObj: TDateTimePicker; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure DateTimePicker_GetClientRect(AObj: TDateTimePicker; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function DateTimePicker_GetClientWidth(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure DateTimePicker_SetClientWidth(AObj: TDateTimePicker; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

//function DateTimePicker_GetExplicitLeft(AObj: TDateTimePicker): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitLeft;
//end;
//
//function DateTimePicker_GetExplicitTop(AObj: TDateTimePicker): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitTop;
//end;
//
//function DateTimePicker_GetExplicitWidth(AObj: TDateTimePicker): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitWidth;
//end;
//
//function DateTimePicker_GetExplicitHeight(AObj: TDateTimePicker): Integer; cdecl;
//begin
//  Result :=  AObj.ExplicitHeight;
//end;

function DateTimePicker_GetParent(AObj: TDateTimePicker): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure DateTimePicker_SetParent(AObj: TDateTimePicker; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

//function DateTimePicker_GetAlignWithMargins(AObj: TDateTimePicker): LongBool; cdecl;
//begin
//  Result :=  AObj.AlignWithMargins;
//end;
//
//procedure DateTimePicker_SetAlignWithMargins(AObj: TDateTimePicker; AValue: LongBool); cdecl;
//begin
//  AObj.AlignWithMargins := AValue;
//end;

function DateTimePicker_GetLeft(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure DateTimePicker_SetLeft(AObj: TDateTimePicker; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function DateTimePicker_GetTop(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure DateTimePicker_SetTop(AObj: TDateTimePicker; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function DateTimePicker_GetWidth(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure DateTimePicker_SetWidth(AObj: TDateTimePicker; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function DateTimePicker_GetHeight(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure DateTimePicker_SetHeight(AObj: TDateTimePicker; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function DateTimePicker_GetCursor(AObj: TDateTimePicker): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure DateTimePicker_SetCursor(AObj: TDateTimePicker; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function DateTimePicker_GetHint(AObj: TDateTimePicker): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure DateTimePicker_SetHint(AObj: TDateTimePicker; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function DateTimePicker_GetMargins(AObj: TDateTimePicker): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;
//
//procedure DateTimePicker_SetMargins(AObj: TDateTimePicker; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function DateTimePicker_GetComponentCount(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function DateTimePicker_GetComponentIndex(AObj: TDateTimePicker): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure DateTimePicker_SetComponentIndex(AObj: TDateTimePicker; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function DateTimePicker_GetOwner(AObj: TDateTimePicker): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function DateTimePicker_GetName(AObj: TDateTimePicker): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure DateTimePicker_SetName(AObj: TDateTimePicker; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function DateTimePicker_GetTag(AObj: TDateTimePicker): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure DateTimePicker_SetTag(AObj: TDateTimePicker; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function DateTimePicker_GetControls(AObj: TDateTimePicker; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function DateTimePicker_GetComponents(AObj: TDateTimePicker; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  DateTimePicker_Create {$IFNDEF MSWINDOWS}name '_DateTimePicker_Create'{$ENDIF},
  DateTimePicker_Free {$IFNDEF MSWINDOWS}name '_DateTimePicker_Free'{$ENDIF},
  DateTimePicker_CanFocus {$IFNDEF MSWINDOWS}name '_DateTimePicker_CanFocus'{$ENDIF},
  DateTimePicker_FlipChildren {$IFNDEF MSWINDOWS}name '_DateTimePicker_FlipChildren'{$ENDIF},
  DateTimePicker_Focused {$IFNDEF MSWINDOWS}name '_DateTimePicker_Focused'{$ENDIF},
  DateTimePicker_HandleAllocated {$IFNDEF MSWINDOWS}name '_DateTimePicker_HandleAllocated'{$ENDIF},
  DateTimePicker_Invalidate {$IFNDEF MSWINDOWS}name '_DateTimePicker_Invalidate'{$ENDIF},
  DateTimePicker_Realign {$IFNDEF MSWINDOWS}name '_DateTimePicker_Realign'{$ENDIF},
  DateTimePicker_Repaint {$IFNDEF MSWINDOWS}name '_DateTimePicker_Repaint'{$ENDIF},
  DateTimePicker_ScaleBy {$IFNDEF MSWINDOWS}name '_DateTimePicker_ScaleBy'{$ENDIF},
  DateTimePicker_SetBounds {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetBounds'{$ENDIF},
  DateTimePicker_SetFocus {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetFocus'{$ENDIF},
  DateTimePicker_Update {$IFNDEF MSWINDOWS}name '_DateTimePicker_Update'{$ENDIF},
  DateTimePicker_BringToFront {$IFNDEF MSWINDOWS}name '_DateTimePicker_BringToFront'{$ENDIF},
  DateTimePicker_HasParent {$IFNDEF MSWINDOWS}name '_DateTimePicker_HasParent'{$ENDIF},
  DateTimePicker_Hide {$IFNDEF MSWINDOWS}name '_DateTimePicker_Hide'{$ENDIF},
  DateTimePicker_Perform {$IFNDEF MSWINDOWS}name '_DateTimePicker_Perform'{$ENDIF},
  DateTimePicker_Refresh {$IFNDEF MSWINDOWS}name '_DateTimePicker_Refresh'{$ENDIF},
  DateTimePicker_SendToBack {$IFNDEF MSWINDOWS}name '_DateTimePicker_SendToBack'{$ENDIF},
  DateTimePicker_Show {$IFNDEF MSWINDOWS}name '_DateTimePicker_Show'{$ENDIF},
  DateTimePicker_GetTextBuf {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetTextBuf'{$ENDIF},
  DateTimePicker_FindComponent {$IFNDEF MSWINDOWS}name '_DateTimePicker_FindComponent'{$ENDIF},
  DateTimePicker_GetNamePath {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetNamePath'{$ENDIF},
  DateTimePicker_Assign {$IFNDEF MSWINDOWS}name '_DateTimePicker_Assign'{$ENDIF},
  DateTimePicker_ClassName {$IFNDEF MSWINDOWS}name '_DateTimePicker_ClassName'{$ENDIF},
  DateTimePicker_Equals {$IFNDEF MSWINDOWS}name '_DateTimePicker_Equals'{$ENDIF},
  DateTimePicker_GetHashCode {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetHashCode'{$ENDIF},
  DateTimePicker_ToString {$IFNDEF MSWINDOWS}name '_DateTimePicker_ToString'{$ENDIF},
  DateTimePicker_GetDateTime {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetDateTime'{$ENDIF},
  DateTimePicker_SetDateTime {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetDateTime'{$ENDIF},
  DateTimePicker_GetDroppedDown {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetDroppedDown'{$ENDIF},
  DateTimePicker_GetAlign {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetAlign'{$ENDIF},
  DateTimePicker_SetAlign {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetAlign'{$ENDIF},
  DateTimePicker_GetAnchors {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetAnchors'{$ENDIF},
  DateTimePicker_SetAnchors {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetAnchors'{$ENDIF},
  //DateTimePicker_GetBevelEdges {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetBevelEdges'{$ENDIF},
  //DateTimePicker_SetBevelEdges {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetBevelEdges'{$ENDIF},
  //DateTimePicker_GetBevelInner {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetBevelInner'{$ENDIF},
  //DateTimePicker_SetBevelInner {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetBevelInner'{$ENDIF},
  //DateTimePicker_GetBevelOuter {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetBevelOuter'{$ENDIF},
  //DateTimePicker_SetBevelOuter {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetBevelOuter'{$ENDIF},
  //DateTimePicker_GetBevelKind {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetBevelKind'{$ENDIF},
  //DateTimePicker_SetBevelKind {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetBevelKind'{$ENDIF},
  DateTimePicker_GetBiDiMode {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetBiDiMode'{$ENDIF},
  DateTimePicker_SetBiDiMode {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetBiDiMode'{$ENDIF},
  DateTimePicker_GetCalAlignment {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetCalAlignment'{$ENDIF},
  DateTimePicker_SetCalAlignment {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetCalAlignment'{$ENDIF},
  //DateTimePicker_GetCalColors {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetCalColors'{$ENDIF},
  //DateTimePicker_SetCalColors {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetCalColors'{$ENDIF},
  DateTimePicker_GetDate {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetDate'{$ENDIF},
  DateTimePicker_SetDate {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetDate'{$ENDIF},
  //DateTimePicker_GetFormat {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetFormat'{$ENDIF},
  //DateTimePicker_SetFormat {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetFormat'{$ENDIF},
  DateTimePicker_GetTime {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetTime'{$ENDIF},
  DateTimePicker_SetTime {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetTime'{$ENDIF},
  DateTimePicker_GetChecked {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetChecked'{$ENDIF},
  DateTimePicker_SetChecked {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetChecked'{$ENDIF},
  DateTimePicker_GetColor {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetColor'{$ENDIF},
  DateTimePicker_SetColor {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetColor'{$ENDIF},
  //DateTimePicker_GetDateFormat {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetDateFormat'{$ENDIF},
  //DateTimePicker_SetDateFormat {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetDateFormat'{$ENDIF},
  DateTimePicker_GetDateMode {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetDateMode'{$ENDIF},
  DateTimePicker_SetDateMode {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetDateMode'{$ENDIF},
  DateTimePicker_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetDoubleBuffered'{$ENDIF},
  DateTimePicker_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetDoubleBuffered'{$ENDIF},
  DateTimePicker_GetEnabled {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetEnabled'{$ENDIF},
  DateTimePicker_SetEnabled {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetEnabled'{$ENDIF},
  DateTimePicker_GetFont {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetFont'{$ENDIF},
  DateTimePicker_SetFont {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetFont'{$ENDIF},
  DateTimePicker_GetKind {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetKind'{$ENDIF},
  DateTimePicker_SetKind {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetKind'{$ENDIF},
  DateTimePicker_GetMaxDate {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetMaxDate'{$ENDIF},
  DateTimePicker_SetMaxDate {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetMaxDate'{$ENDIF},
  DateTimePicker_GetMinDate {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetMinDate'{$ENDIF},
  DateTimePicker_SetMinDate {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetMinDate'{$ENDIF},
  //DateTimePicker_GetParseInput {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetParseInput'{$ENDIF},
  //DateTimePicker_SetParseInput {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetParseInput'{$ENDIF},
  DateTimePicker_GetParentColor {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetParentColor'{$ENDIF},
  DateTimePicker_SetParentColor {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetParentColor'{$ENDIF},
  //DateTimePicker_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetParentDoubleBuffered'{$ENDIF},
  //DateTimePicker_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetParentDoubleBuffered'{$ENDIF},
  DateTimePicker_GetParentFont {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetParentFont'{$ENDIF},
  DateTimePicker_SetParentFont {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetParentFont'{$ENDIF},
  DateTimePicker_GetParentShowHint {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetParentShowHint'{$ENDIF},
  DateTimePicker_SetParentShowHint {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetParentShowHint'{$ENDIF},
  DateTimePicker_GetPopupMenu {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetPopupMenu'{$ENDIF},
  DateTimePicker_SetPopupMenu {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetPopupMenu'{$ENDIF},
  DateTimePicker_GetShowHint {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetShowHint'{$ENDIF},
  DateTimePicker_SetShowHint {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetShowHint'{$ENDIF},
  DateTimePicker_GetTabOrder {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetTabOrder'{$ENDIF},
  DateTimePicker_SetTabOrder {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetTabOrder'{$ENDIF},
  DateTimePicker_GetTabStop {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetTabStop'{$ENDIF},
  DateTimePicker_SetTabStop {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetTabStop'{$ENDIF},
  DateTimePicker_GetVisible {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetVisible'{$ENDIF},
  DateTimePicker_SetVisible {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetVisible'{$ENDIF},
  //DateTimePicker_GetStyleElements {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetStyleElements'{$ENDIF},
  //DateTimePicker_SetStyleElements {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetStyleElements'{$ENDIF},
  DateTimePicker_SetOnClick {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnClick'{$ENDIF},
  DateTimePicker_SetOnChange {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnChange'{$ENDIF},
  DateTimePicker_SetOnEnter {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnEnter'{$ENDIF},
  DateTimePicker_SetOnExit {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnExit'{$ENDIF},
  DateTimePicker_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnKeyDown'{$ENDIF},
  DateTimePicker_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnKeyPress'{$ENDIF},
  DateTimePicker_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnKeyUp'{$ENDIF},
  DateTimePicker_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnMouseEnter'{$ENDIF},
  DateTimePicker_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetOnMouseLeave'{$ENDIF},
  DateTimePicker_GetBrush {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetBrush'{$ENDIF},
  DateTimePicker_GetControlCount {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetControlCount'{$ENDIF},
  DateTimePicker_GetHandle {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetHandle'{$ENDIF},
  DateTimePicker_GetParentWindow {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetParentWindow'{$ENDIF},
  DateTimePicker_SetParentWindow {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetParentWindow'{$ENDIF},
  DateTimePicker_GetAction {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetAction'{$ENDIF},
  DateTimePicker_SetAction {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetAction'{$ENDIF},
  DateTimePicker_GetBoundsRect {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetBoundsRect'{$ENDIF},
  DateTimePicker_SetBoundsRect {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetBoundsRect'{$ENDIF},
  DateTimePicker_GetClientHeight {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetClientHeight'{$ENDIF},
  DateTimePicker_SetClientHeight {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetClientHeight'{$ENDIF},
  DateTimePicker_GetClientRect {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetClientRect'{$ENDIF},
  DateTimePicker_GetClientWidth {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetClientWidth'{$ENDIF},
  DateTimePicker_SetClientWidth {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetClientWidth'{$ENDIF},
  //DateTimePicker_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetExplicitLeft'{$ENDIF},
  //DateTimePicker_GetExplicitTop {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetExplicitTop'{$ENDIF},
  //DateTimePicker_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetExplicitWidth'{$ENDIF},
  //DateTimePicker_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetExplicitHeight'{$ENDIF},
  DateTimePicker_GetParent {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetParent'{$ENDIF},
  DateTimePicker_SetParent {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetParent'{$ENDIF},
  //DateTimePicker_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetAlignWithMargins'{$ENDIF},
  //DateTimePicker_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetAlignWithMargins'{$ENDIF},
  DateTimePicker_GetLeft {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetLeft'{$ENDIF},
  DateTimePicker_SetLeft {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetLeft'{$ENDIF},
  DateTimePicker_GetTop {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetTop'{$ENDIF},
  DateTimePicker_SetTop {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetTop'{$ENDIF},
  DateTimePicker_GetWidth {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetWidth'{$ENDIF},
  DateTimePicker_SetWidth {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetWidth'{$ENDIF},
  DateTimePicker_GetHeight {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetHeight'{$ENDIF},
  DateTimePicker_SetHeight {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetHeight'{$ENDIF},
  DateTimePicker_GetCursor {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetCursor'{$ENDIF},
  DateTimePicker_SetCursor {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetCursor'{$ENDIF},
  DateTimePicker_GetHint {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetHint'{$ENDIF},
  DateTimePicker_SetHint {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetHint'{$ENDIF},
  //DateTimePicker_GetMargins {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetMargins'{$ENDIF},
  //DateTimePicker_SetMargins {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetMargins'{$ENDIF},
  DateTimePicker_GetComponentCount {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetComponentCount'{$ENDIF},
  DateTimePicker_GetComponentIndex {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetComponentIndex'{$ENDIF},
  DateTimePicker_SetComponentIndex {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetComponentIndex'{$ENDIF},
  DateTimePicker_GetOwner {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetOwner'{$ENDIF},
  DateTimePicker_GetName {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetName'{$ENDIF},
  DateTimePicker_SetName {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetName'{$ENDIF},
  DateTimePicker_GetTag {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetTag'{$ENDIF},
  DateTimePicker_SetTag {$IFNDEF MSWINDOWS}name '_DateTimePicker_SetTag'{$ENDIF},
  DateTimePicker_GetControls {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetControls'{$ENDIF},
  DateTimePicker_GetComponents {$IFNDEF MSWINDOWS}name '_DateTimePicker_GetComponents'{$ENDIF};

