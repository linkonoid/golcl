//http://www.cyberforum.ru/lazarus/thread885976.html
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function MonthCalendar_Create(AOwner: TComponent): TMonthCalendar; cdecl;
begin
  Result :=  TMonthCalendar.Create(AOwner);
end;

procedure MonthCalendar_Free(AObj: TMonthCalendar); cdecl;
begin
  AObj.Free;
end;

function MonthCalendar_CanFocus(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure MonthCalendar_FlipChildren(AObj: TMonthCalendar; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function MonthCalendar_Focused(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function MonthCalendar_HandleAllocated(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure MonthCalendar_Invalidate(AObj: TMonthCalendar); cdecl;
begin
  AObj.Invalidate;
end;

procedure MonthCalendar_Realign(AObj: TMonthCalendar); cdecl;
begin
  AObj.Realign;
end;

procedure MonthCalendar_Repaint(AObj: TMonthCalendar); cdecl;
begin
  AObj.Repaint;
end;

procedure MonthCalendar_ScaleBy(AObj: TMonthCalendar; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure MonthCalendar_SetBounds(AObj: TMonthCalendar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure MonthCalendar_SetFocus(AObj: TMonthCalendar); cdecl;
begin
  AObj.SetFocus;
end;

procedure MonthCalendar_Update(AObj: TMonthCalendar); cdecl;
begin
  AObj.Update;
end;

procedure MonthCalendar_BringToFront(AObj: TMonthCalendar); cdecl;
begin
  AObj.BringToFront;
end;

function MonthCalendar_HasParent(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure MonthCalendar_Hide(AObj: TMonthCalendar); cdecl;
begin
  AObj.Hide;
end;

function MonthCalendar_Perform(AObj: TMonthCalendar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure MonthCalendar_Refresh(AObj: TMonthCalendar); cdecl;
begin
  AObj.Refresh;
end;

procedure MonthCalendar_SendToBack(AObj: TMonthCalendar); cdecl;
begin
  AObj.SendToBack;
end;

procedure MonthCalendar_Show(AObj: TMonthCalendar); cdecl;
begin
  AObj.Show;
end;

function MonthCalendar_GetTextBuf(AObj: TMonthCalendar; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function MonthCalendar_FindComponent(AObj: TMonthCalendar; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function MonthCalendar_GetNamePath(AObj: TMonthCalendar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure MonthCalendar_Assign(AObj: TMonthCalendar; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function MonthCalendar_ClassName(AObj: TMonthCalendar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function MonthCalendar_Equals(AObj: TMonthCalendar; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function MonthCalendar_GetHashCode(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function MonthCalendar_ToString(AObj: TMonthCalendar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function MonthCalendar_GetAlign(AObj: TMonthCalendar): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure MonthCalendar_SetAlign(AObj: TMonthCalendar; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function MonthCalendar_GetAnchors(AObj: TMonthCalendar): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure MonthCalendar_SetAnchors(AObj: TMonthCalendar; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function MonthCalendar_GetAutoSize(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure MonthCalendar_SetAutoSize(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function MonthCalendar_GetBorderWidth(AObj: TMonthCalendar): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure MonthCalendar_SetBorderWidth(AObj: TMonthCalendar; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function MonthCalendar_GetBiDiMode(AObj: TMonthCalendar): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure MonthCalendar_SetBiDiMode(AObj: TMonthCalendar; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function MonthCalendar_GetCalColors(AObj: TMonthCalendar): TMonthCalColors; cdecl;
begin
  Result :=  AObj.CalColors;
end;

procedure MonthCalendar_SetCalColors(AObj: TMonthCalendar; AValue: TMonthCalColors); cdecl;
begin
  AObj.CalColors := AValue;
end;

function MonthCalendar_GetMultiSelect(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.MultiSelect;
end;

procedure MonthCalendar_SetMultiSelect(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.MultiSelect := AValue;
end;

function MonthCalendar_GetDate(AObj: TMonthCalendar): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.Date);
end;

procedure MonthCalendar_SetDate(AObj: TMonthCalendar; AValue: TUnixDateTime); cdecl;
begin
  AObj.Date := UnixToTime(AValue);
end;

function MonthCalendar_GetDoubleBuffered(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure MonthCalendar_SetDoubleBuffered(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function MonthCalendar_GetEnabled(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure MonthCalendar_SetEnabled(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function MonthCalendar_GetFirstDayOfWeek(AObj: TMonthCalendar): TCalDayOfWeek; cdecl;
begin
  Result :=  AObj.FirstDayOfWeek;
end;

procedure MonthCalendar_SetFirstDayOfWeek(AObj: TMonthCalendar; AValue: TCalDayOfWeek); cdecl;
begin
  AObj.FirstDayOfWeek := AValue;
end;

function MonthCalendar_GetFont(AObj: TMonthCalendar): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure MonthCalendar_SetFont(AObj: TMonthCalendar; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function MonthCalendar_GetMaxDate(AObj: TMonthCalendar): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.MaxDate);
end;

procedure MonthCalendar_SetMaxDate(AObj: TMonthCalendar; AValue: TUnixDateTime); cdecl;
begin
  AObj.MaxDate := UnixToTime(AValue);
end;

function MonthCalendar_GetMaxSelectRange(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.MaxSelectRange;
end;

procedure MonthCalendar_SetMaxSelectRange(AObj: TMonthCalendar; AValue: Integer); cdecl;
begin
  AObj.MaxSelectRange := AValue;
end;

function MonthCalendar_GetMinDate(AObj: TMonthCalendar): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.MinDate);
end;

procedure MonthCalendar_SetMinDate(AObj: TMonthCalendar; AValue: TUnixDateTime); cdecl;
begin
  AObj.MinDate := UnixToTime(AValue);
end;

function MonthCalendar_GetParentDoubleBuffered(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure MonthCalendar_SetParentDoubleBuffered(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function MonthCalendar_GetParentFont(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure MonthCalendar_SetParentFont(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function MonthCalendar_GetParentShowHint(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure MonthCalendar_SetParentShowHint(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function MonthCalendar_GetPopupMenu(AObj: TMonthCalendar): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure MonthCalendar_SetPopupMenu(AObj: TMonthCalendar; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function MonthCalendar_GetShowHint(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure MonthCalendar_SetShowHint(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function MonthCalendar_GetShowToday(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.ShowToday;
end;

procedure MonthCalendar_SetShowToday(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.ShowToday := AValue;
end;

function MonthCalendar_GetShowTodayCircle(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.ShowTodayCircle;
end;

procedure MonthCalendar_SetShowTodayCircle(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.ShowTodayCircle := AValue;
end;

function MonthCalendar_GetTabOrder(AObj: TMonthCalendar): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure MonthCalendar_SetTabOrder(AObj: TMonthCalendar; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function MonthCalendar_GetTabStop(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure MonthCalendar_SetTabStop(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

function MonthCalendar_GetVisible(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure MonthCalendar_SetVisible(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function MonthCalendar_GetWeekNumbers(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.WeekNumbers;
end;

procedure MonthCalendar_SetWeekNumbers(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.WeekNumbers := AValue;
end;

procedure MonthCalendar_SetOnClick(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

procedure MonthCalendar_SetOnDblClick(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

procedure MonthCalendar_SetOnEnter(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

procedure MonthCalendar_SetOnExit(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

procedure MonthCalendar_SetOnKeyDown(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

procedure MonthCalendar_SetOnKeyPress(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

procedure MonthCalendar_SetOnKeyUp(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

procedure MonthCalendar_SetOnMouseEnter(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

procedure MonthCalendar_SetOnMouseLeave(AObj: TMonthCalendar; AEventId: NativeUInt); stdcall
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

function MonthCalendar_GetBrush(AObj: TMonthCalendar): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function MonthCalendar_GetControlCount(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function MonthCalendar_GetHandle(AObj: TMonthCalendar): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function MonthCalendar_GetParentWindow(AObj: TMonthCalendar): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure MonthCalendar_SetParentWindow(AObj: TMonthCalendar; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function MonthCalendar_GetAction(AObj: TMonthCalendar): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure MonthCalendar_SetAction(AObj: TMonthCalendar; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

procedure MonthCalendar_GetBoundsRect(AObj: TMonthCalendar; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure MonthCalendar_SetBoundsRect(AObj: TMonthCalendar; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

function MonthCalendar_GetClientHeight(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure MonthCalendar_SetClientHeight(AObj: TMonthCalendar; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure MonthCalendar_GetClientRect(AObj: TMonthCalendar; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function MonthCalendar_GetClientWidth(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure MonthCalendar_SetClientWidth(AObj: TMonthCalendar; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function MonthCalendar_GetExplicitLeft(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function MonthCalendar_GetExplicitTop(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function MonthCalendar_GetExplicitWidth(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function MonthCalendar_GetExplicitHeight(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

function MonthCalendar_GetParent(AObj: TMonthCalendar): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure MonthCalendar_SetParent(AObj: TMonthCalendar; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function MonthCalendar_GetStyleElements(AObj: TMonthCalendar): TStyleElements; cdecl;
begin
  Result :=  AObj.StyleElements;
end;

procedure MonthCalendar_SetStyleElements(AObj: TMonthCalendar; AValue: TStyleElements); cdecl;
begin
  AObj.StyleElements := AValue;
end;

function MonthCalendar_GetAlignWithMargins(AObj: TMonthCalendar): LongBool; cdecl;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure MonthCalendar_SetAlignWithMargins(AObj: TMonthCalendar; AValue: LongBool); cdecl;
begin
  AObj.AlignWithMargins := AValue;
end;

function MonthCalendar_GetLeft(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure MonthCalendar_SetLeft(AObj: TMonthCalendar; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function MonthCalendar_GetTop(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure MonthCalendar_SetTop(AObj: TMonthCalendar; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function MonthCalendar_GetWidth(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure MonthCalendar_SetWidth(AObj: TMonthCalendar; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function MonthCalendar_GetHeight(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure MonthCalendar_SetHeight(AObj: TMonthCalendar; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function MonthCalendar_GetCursor(AObj: TMonthCalendar): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure MonthCalendar_SetCursor(AObj: TMonthCalendar; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function MonthCalendar_GetHint(AObj: TMonthCalendar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure MonthCalendar_SetHint(AObj: TMonthCalendar; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function MonthCalendar_GetMargins(AObj: TMonthCalendar): TMargins; cdecl;
begin
  Result :=  AObj.Margins;
end;

procedure MonthCalendar_SetMargins(AObj: TMonthCalendar; AValue: TMargins); cdecl;
begin
  AObj.Margins := AValue;
end;

function MonthCalendar_GetComponentCount(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function MonthCalendar_GetComponentIndex(AObj: TMonthCalendar): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure MonthCalendar_SetComponentIndex(AObj: TMonthCalendar; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function MonthCalendar_GetOwner(AObj: TMonthCalendar): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function MonthCalendar_GetName(AObj: TMonthCalendar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure MonthCalendar_SetName(AObj: TMonthCalendar; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function MonthCalendar_GetTag(AObj: TMonthCalendar): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure MonthCalendar_SetTag(AObj: TMonthCalendar; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function MonthCalendar_GetControls(AObj: TMonthCalendar; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function MonthCalendar_GetComponents(AObj: TMonthCalendar; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  MonthCalendar_Create {$IFNDEF MSWINDOWS}name '_MonthCalendar_Create'{$ENDIF},
  MonthCalendar_Free {$IFNDEF MSWINDOWS}name '_MonthCalendar_Free'{$ENDIF},
  MonthCalendar_CanFocus {$IFNDEF MSWINDOWS}name '_MonthCalendar_CanFocus'{$ENDIF},
  MonthCalendar_FlipChildren {$IFNDEF MSWINDOWS}name '_MonthCalendar_FlipChildren'{$ENDIF},
  MonthCalendar_Focused {$IFNDEF MSWINDOWS}name '_MonthCalendar_Focused'{$ENDIF},
  MonthCalendar_HandleAllocated {$IFNDEF MSWINDOWS}name '_MonthCalendar_HandleAllocated'{$ENDIF},
  MonthCalendar_Invalidate {$IFNDEF MSWINDOWS}name '_MonthCalendar_Invalidate'{$ENDIF},
  MonthCalendar_Realign {$IFNDEF MSWINDOWS}name '_MonthCalendar_Realign'{$ENDIF},
  MonthCalendar_Repaint {$IFNDEF MSWINDOWS}name '_MonthCalendar_Repaint'{$ENDIF},
  MonthCalendar_ScaleBy {$IFNDEF MSWINDOWS}name '_MonthCalendar_ScaleBy'{$ENDIF},
  MonthCalendar_SetBounds {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetBounds'{$ENDIF},
  MonthCalendar_SetFocus {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetFocus'{$ENDIF},
  MonthCalendar_Update {$IFNDEF MSWINDOWS}name '_MonthCalendar_Update'{$ENDIF},
  MonthCalendar_BringToFront {$IFNDEF MSWINDOWS}name '_MonthCalendar_BringToFront'{$ENDIF},
  MonthCalendar_HasParent {$IFNDEF MSWINDOWS}name '_MonthCalendar_HasParent'{$ENDIF},
  MonthCalendar_Hide {$IFNDEF MSWINDOWS}name '_MonthCalendar_Hide'{$ENDIF},
  MonthCalendar_Perform {$IFNDEF MSWINDOWS}name '_MonthCalendar_Perform'{$ENDIF},
  MonthCalendar_Refresh {$IFNDEF MSWINDOWS}name '_MonthCalendar_Refresh'{$ENDIF},
  MonthCalendar_SendToBack {$IFNDEF MSWINDOWS}name '_MonthCalendar_SendToBack'{$ENDIF},
  MonthCalendar_Show {$IFNDEF MSWINDOWS}name '_MonthCalendar_Show'{$ENDIF},
  MonthCalendar_GetTextBuf {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetTextBuf'{$ENDIF},
  MonthCalendar_FindComponent {$IFNDEF MSWINDOWS}name '_MonthCalendar_FindComponent'{$ENDIF},
  MonthCalendar_GetNamePath {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetNamePath'{$ENDIF},
  MonthCalendar_Assign {$IFNDEF MSWINDOWS}name '_MonthCalendar_Assign'{$ENDIF},
  MonthCalendar_ClassName {$IFNDEF MSWINDOWS}name '_MonthCalendar_ClassName'{$ENDIF},
  MonthCalendar_Equals {$IFNDEF MSWINDOWS}name '_MonthCalendar_Equals'{$ENDIF},
  MonthCalendar_GetHashCode {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetHashCode'{$ENDIF},
  MonthCalendar_ToString {$IFNDEF MSWINDOWS}name '_MonthCalendar_ToString'{$ENDIF},
  MonthCalendar_GetAlign {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetAlign'{$ENDIF},
  MonthCalendar_SetAlign {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetAlign'{$ENDIF},
  MonthCalendar_GetAnchors {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetAnchors'{$ENDIF},
  MonthCalendar_SetAnchors {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetAnchors'{$ENDIF},
  MonthCalendar_GetAutoSize {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetAutoSize'{$ENDIF},
  MonthCalendar_SetAutoSize {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetAutoSize'{$ENDIF},
  MonthCalendar_GetBorderWidth {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetBorderWidth'{$ENDIF},
  MonthCalendar_SetBorderWidth {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetBorderWidth'{$ENDIF},
  MonthCalendar_GetBiDiMode {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetBiDiMode'{$ENDIF},
  MonthCalendar_SetBiDiMode {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetBiDiMode'{$ENDIF},
  MonthCalendar_GetCalColors {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetCalColors'{$ENDIF},
  MonthCalendar_SetCalColors {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetCalColors'{$ENDIF},
  MonthCalendar_GetMultiSelect {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetMultiSelect'{$ENDIF},
  MonthCalendar_SetMultiSelect {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetMultiSelect'{$ENDIF},
  MonthCalendar_GetDate {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetDate'{$ENDIF},
  MonthCalendar_SetDate {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetDate'{$ENDIF},
  MonthCalendar_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetDoubleBuffered'{$ENDIF},
  MonthCalendar_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetDoubleBuffered'{$ENDIF},
  MonthCalendar_GetEnabled {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetEnabled'{$ENDIF},
  MonthCalendar_SetEnabled {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetEnabled'{$ENDIF},
  MonthCalendar_GetFirstDayOfWeek {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetFirstDayOfWeek'{$ENDIF},
  MonthCalendar_SetFirstDayOfWeek {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetFirstDayOfWeek'{$ENDIF},
  MonthCalendar_GetFont {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetFont'{$ENDIF},
  MonthCalendar_SetFont {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetFont'{$ENDIF},
  MonthCalendar_GetMaxDate {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetMaxDate'{$ENDIF},
  MonthCalendar_SetMaxDate {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetMaxDate'{$ENDIF},
  MonthCalendar_GetMaxSelectRange {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetMaxSelectRange'{$ENDIF},
  MonthCalendar_SetMaxSelectRange {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetMaxSelectRange'{$ENDIF},
  MonthCalendar_GetMinDate {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetMinDate'{$ENDIF},
  MonthCalendar_SetMinDate {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetMinDate'{$ENDIF},
  MonthCalendar_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetParentDoubleBuffered'{$ENDIF},
  MonthCalendar_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetParentDoubleBuffered'{$ENDIF},
  MonthCalendar_GetParentFont {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetParentFont'{$ENDIF},
  MonthCalendar_SetParentFont {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetParentFont'{$ENDIF},
  MonthCalendar_GetParentShowHint {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetParentShowHint'{$ENDIF},
  MonthCalendar_SetParentShowHint {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetParentShowHint'{$ENDIF},
  MonthCalendar_GetPopupMenu {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetPopupMenu'{$ENDIF},
  MonthCalendar_SetPopupMenu {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetPopupMenu'{$ENDIF},
  MonthCalendar_GetShowHint {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetShowHint'{$ENDIF},
  MonthCalendar_SetShowHint {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetShowHint'{$ENDIF},
  MonthCalendar_GetShowToday {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetShowToday'{$ENDIF},
  MonthCalendar_SetShowToday {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetShowToday'{$ENDIF},
  MonthCalendar_GetShowTodayCircle {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetShowTodayCircle'{$ENDIF},
  MonthCalendar_SetShowTodayCircle {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetShowTodayCircle'{$ENDIF},
  MonthCalendar_GetTabOrder {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetTabOrder'{$ENDIF},
  MonthCalendar_SetTabOrder {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetTabOrder'{$ENDIF},
  MonthCalendar_GetTabStop {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetTabStop'{$ENDIF},
  MonthCalendar_SetTabStop {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetTabStop'{$ENDIF},
  MonthCalendar_GetVisible {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetVisible'{$ENDIF},
  MonthCalendar_SetVisible {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetVisible'{$ENDIF},
  MonthCalendar_GetWeekNumbers {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetWeekNumbers'{$ENDIF},
  MonthCalendar_SetWeekNumbers {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetWeekNumbers'{$ENDIF},
  MonthCalendar_SetOnClick {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnClick'{$ENDIF},
  MonthCalendar_SetOnDblClick {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnDblClick'{$ENDIF},
  MonthCalendar_SetOnEnter {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnEnter'{$ENDIF},
  MonthCalendar_SetOnExit {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnExit'{$ENDIF},
  MonthCalendar_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnKeyDown'{$ENDIF},
  MonthCalendar_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnKeyPress'{$ENDIF},
  MonthCalendar_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnKeyUp'{$ENDIF},
  MonthCalendar_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnMouseEnter'{$ENDIF},
  MonthCalendar_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetOnMouseLeave'{$ENDIF},
  MonthCalendar_GetBrush {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetBrush'{$ENDIF},
  MonthCalendar_GetControlCount {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetControlCount'{$ENDIF},
  MonthCalendar_GetHandle {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetHandle'{$ENDIF},
  MonthCalendar_GetParentWindow {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetParentWindow'{$ENDIF},
  MonthCalendar_SetParentWindow {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetParentWindow'{$ENDIF},
  MonthCalendar_GetAction {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetAction'{$ENDIF},
  MonthCalendar_SetAction {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetAction'{$ENDIF},
  MonthCalendar_GetBoundsRect {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetBoundsRect'{$ENDIF},
  MonthCalendar_SetBoundsRect {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetBoundsRect'{$ENDIF},
  MonthCalendar_GetClientHeight {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetClientHeight'{$ENDIF},
  MonthCalendar_SetClientHeight {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetClientHeight'{$ENDIF},
  MonthCalendar_GetClientRect {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetClientRect'{$ENDIF},
  MonthCalendar_GetClientWidth {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetClientWidth'{$ENDIF},
  MonthCalendar_SetClientWidth {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetClientWidth'{$ENDIF},
  MonthCalendar_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetExplicitLeft'{$ENDIF},
  MonthCalendar_GetExplicitTop {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetExplicitTop'{$ENDIF},
  MonthCalendar_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetExplicitWidth'{$ENDIF},
  MonthCalendar_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetExplicitHeight'{$ENDIF},
  MonthCalendar_GetParent {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetParent'{$ENDIF},
  MonthCalendar_SetParent {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetParent'{$ENDIF},
  MonthCalendar_GetStyleElements {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetStyleElements'{$ENDIF},
  MonthCalendar_SetStyleElements {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetStyleElements'{$ENDIF},
  MonthCalendar_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetAlignWithMargins'{$ENDIF},
  MonthCalendar_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetAlignWithMargins'{$ENDIF},
  MonthCalendar_GetLeft {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetLeft'{$ENDIF},
  MonthCalendar_SetLeft {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetLeft'{$ENDIF},
  MonthCalendar_GetTop {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetTop'{$ENDIF},
  MonthCalendar_SetTop {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetTop'{$ENDIF},
  MonthCalendar_GetWidth {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetWidth'{$ENDIF},
  MonthCalendar_SetWidth {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetWidth'{$ENDIF},
  MonthCalendar_GetHeight {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetHeight'{$ENDIF},
  MonthCalendar_SetHeight {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetHeight'{$ENDIF},
  MonthCalendar_GetCursor {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetCursor'{$ENDIF},
  MonthCalendar_SetCursor {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetCursor'{$ENDIF},
  MonthCalendar_GetHint {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetHint'{$ENDIF},
  MonthCalendar_SetHint {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetHint'{$ENDIF},
  MonthCalendar_GetMargins {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetMargins'{$ENDIF},
  MonthCalendar_SetMargins {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetMargins'{$ENDIF},
  MonthCalendar_GetComponentCount {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetComponentCount'{$ENDIF},
  MonthCalendar_GetComponentIndex {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetComponentIndex'{$ENDIF},
  MonthCalendar_SetComponentIndex {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetComponentIndex'{$ENDIF},
  MonthCalendar_GetOwner {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetOwner'{$ENDIF},
  MonthCalendar_GetName {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetName'{$ENDIF},
  MonthCalendar_SetName {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetName'{$ENDIF},
  MonthCalendar_GetTag {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetTag'{$ENDIF},
  MonthCalendar_SetTag {$IFNDEF MSWINDOWS}name '_MonthCalendar_SetTag'{$ENDIF},
  MonthCalendar_GetControls {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetControls'{$ENDIF},
  MonthCalendar_GetComponents {$IFNDEF MSWINDOWS}name '_MonthCalendar_GetComponents'{$ENDIF};

