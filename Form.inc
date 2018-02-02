
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Form_Create(AOwner: TComponent): TForm; cdecl;
begin
  Result :=  TForm.Create(AOwner);
end;

procedure Form_Free(AObj: TForm); cdecl;
begin
  AObj.Free;
end;

procedure Form_Close(AObj: TForm); cdecl;
begin
  AObj.Close;
end;

procedure Form_Hide(AObj: TForm); cdecl;
begin
  AObj.Hide;
end;

procedure Form_Print(AObj: TForm); cdecl;
begin
  //AObj.Print;
end;

procedure Form_SetFocus(AObj: TForm); cdecl;
begin
  AObj.SetFocus;
end;

procedure Form_Show(AObj: TForm); cdecl;
begin
  AObj.Show;
end;

function Form_ShowModal(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.ShowModal;
end;

function Form_CanFocus(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure Form_FlipChildren(AObj: TForm; AllLevels: LongBool); cdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Form_Focused(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.Focused;
end;

function Form_HandleAllocated(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Form_Invalidate(AObj: TForm); cdecl;
begin
  AObj.Invalidate;
end;

procedure Form_Realign(AObj: TForm); cdecl;
begin
  AObj.Realign;
end;

procedure Form_Repaint(AObj: TForm); cdecl;
begin
  AObj.Repaint;
end;

procedure Form_ScaleBy(AObj: TForm; M: Integer; D: Integer); cdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Form_SetBounds(AObj: TForm; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Form_Update(AObj: TForm); cdecl;
begin
  AObj.Update;
end;

procedure Form_BringToFront(AObj: TForm); cdecl;
begin
  AObj.BringToFront;
end;

function Form_HasParent(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

function Form_Perform(AObj: TForm; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; cdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Form_Refresh(AObj: TForm); cdecl;
begin
  AObj.Refresh;
end;

procedure Form_SendToBack(AObj: TForm); cdecl;
begin
  AObj.SendToBack;
end;

function Form_GetTextBuf(AObj: TForm; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
begin
  Result :=  AObj.GetTextBuf(PChar(Buffer), BufSize);
end;

function Form_FindComponent(AObj: TForm; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Form_GetNamePath(AObj: TForm): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure Form_Assign(AObj: TForm; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Form_ClassName(AObj: TForm): PWideChar; cdecl;
begin
  //Max.S.Barulin****************************
  // Result :=  PWideChar(AObj.ClassName);
  Result :=  ShortstrToPWideChar(AObj.ClassName);
  //*****************************************
end;

function Form_Equals(AObj: TForm; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Form_GetHashCode(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Form_ToString(AObj: TForm): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Form_GetAction(AObj: TForm): TBasicAction; cdecl;
begin
  Result :=  AObj.Action;
end;

procedure Form_SetAction(AObj: TForm; AValue: TBasicAction); cdecl;
begin
  AObj.Action := AValue;
end;

function Form_GetAlign(AObj: TForm): TAlign; cdecl;
begin
  Result :=  AObj.Align;
end;

procedure Form_SetAlign(AObj: TForm; AValue: TAlign); cdecl;
begin
  AObj.Align := AValue;
end;

function Form_GetAlphaBlend(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.AlphaBlend;
end;

procedure Form_SetAlphaBlend(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.AlphaBlend := AValue;
end;

function Form_GetAlphaBlendValue(AObj: TForm): Byte; cdecl;
begin
  Result :=  AObj.AlphaBlendValue;
end;

procedure Form_SetAlphaBlendValue(AObj: TForm; AValue: Byte); cdecl;
begin
  AObj.AlphaBlendValue := AValue;
end;

function Form_GetAnchors(AObj: TForm): TAnchors; cdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Form_SetAnchors(AObj: TForm; AValue: TAnchors); cdecl;
begin
  AObj.Anchors := AValue;
end;

function Form_GetAutoSize(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Form_SetAutoSize(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function Form_GetBiDiMode(AObj: TForm): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Form_SetBiDiMode(AObj: TForm; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Form_GetBorderIcons(AObj: TForm): TBorderIcons; cdecl;
begin
  Result :=  AObj.BorderIcons;
end;

procedure Form_SetBorderIcons(AObj: TForm; AValue: TBorderIcons); cdecl;
begin
  AObj.BorderIcons := AValue;
end;

function Form_GetBorderStyle(AObj: TForm): TFormBorderStyle; cdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure Form_SetBorderStyle(AObj: TForm; AValue: TFormBorderStyle); cdecl;
begin
  AObj.BorderStyle := AValue;
end;

function Form_GetBorderWidth(AObj: TForm): TBorderWidth; cdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure Form_SetBorderWidth(AObj: TForm; AValue: TBorderWidth); cdecl;
begin
  AObj.BorderWidth := AValue;
end;

function Form_GetCaption(AObj: TForm): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure Form_SetCaption(AObj: TForm; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

function Form_GetClientHeight(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Form_SetClientHeight(AObj: TForm; AValue: Integer); cdecl;
begin
  AObj.ClientHeight := AValue;
end;

function Form_GetClientWidth(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Form_SetClientWidth(AObj: TForm; AValue: Integer); cdecl;
begin
  AObj.ClientWidth := AValue;
end;

function Form_GetColor(AObj: TForm): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure Form_SetColor(AObj: TForm; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

function Form_GetTransparentColor(AObj: TForm): LongBool; cdecl;
begin
  //Result :=  AObj.TransparentColor;
end;

procedure Form_SetTransparentColor(AObj: TForm; AValue: LongBool); cdecl;
begin
  //AObj.TransparentColor := AValue;
end;

function Form_GetTransparentColorValue(AObj: TForm): TColor; cdecl;
begin
  //Result :=  AObj.TransparentColorValue;
end;

procedure Form_SetTransparentColorValue(AObj: TForm; AValue: TColor); cdecl;
begin
  //AObj.TransparentColorValue := AValue;
end;

function Form_GetDoubleBuffered(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Form_SetDoubleBuffered(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function Form_GetEnabled(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Form_SetEnabled(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.Enabled := AValue;
end;

function Form_GetParentFont(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Form_SetParentFont(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.ParentFont := AValue;
end;

function Form_GetFont(AObj: TForm): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure Form_SetFont(AObj: TForm; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function Form_GetFormStyle(AObj: TForm): TFormStyle; cdecl;
begin
  Result :=  AObj.FormStyle;
end;

procedure Form_SetFormStyle(AObj: TForm; AValue: TFormStyle); cdecl;
begin
  AObj.FormStyle := AValue;
end;

function Form_GetHeight(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Form_SetHeight(AObj: TForm; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Form_GetIcon(AObj: TForm): TIcon; cdecl;
begin
  Result :=  AObj.Icon;
end;

procedure Form_SetIcon(AObj: TForm; AValue: TIcon); cdecl;
begin
  AObj.Icon := AValue;
end;

function Form_GetKeyPreview(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.KeyPreview;
end;

procedure Form_SetKeyPreview(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.KeyPreview := AValue;
end;

function Form_GetMenu(AObj: TForm): TMainMenu; cdecl;
begin
  //Result :=  AObj.Menu;
end;

procedure Form_SetMenu(AObj: TForm; AValue: TMainMenu); cdecl;
begin
  AObj.Menu := AValue;
end;

function Form_GetPixelsPerInch(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.PixelsPerInch;
end;

procedure Form_SetPixelsPerInch(AObj: TForm; AValue: Integer); cdecl;
begin
  AObj.PixelsPerInch := AValue;
end;

function Form_GetPopupMenu(AObj: TForm): TPopupMenu; cdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Form_SetPopupMenu(AObj: TForm; AValue: TPopupMenu); cdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Form_GetPosition(AObj: TForm): TPosition; cdecl;
begin
  Result :=  AObj.Position;
end;

procedure Form_SetPosition(AObj: TForm; AValue: TPosition); cdecl;
begin
  AObj.Position := AValue;
end;

function Form_GetScaled(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.Scaled;
end;

procedure Form_SetScaled(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.Scaled := AValue;
end;

function Form_GetShowHint(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Form_SetShowHint(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Form_GetVisible(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Form_SetVisible(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.Visible := AValue;
end;

function Form_GetWidth(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Form_SetWidth(AObj: TForm; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function Form_GetWindowState(AObj: TForm): TWindowState; cdecl;
begin
  Result :=  AObj.WindowState;
end;

procedure Form_SetWindowState(AObj: TForm; AValue: TWindowState); cdecl;
begin
  AObj.WindowState := AValue;
end;

//function Form_GetStyleElements(AObj: TForm): TStyleElements; cdecl;
//begin
  //Result :=  AObj.StyleElements;
//end;

//procedure Form_SetStyleElements(AObj: TForm; AValue: TStyleElements); cdecl;
//begin
//  AObj.StyleElements := AValue;
//end;

procedure Form_SetOnClick(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnClose(AObj: TForm; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClose := nil;
    TEventClass.Remove(AObj, geFormClose);
    Exit;
  end;
  AObj.OnClose := TEventClass.FormOnClose;
  TEventClass.Add(AObj, geFormClose, AEventId);
end;

procedure Form_SetOnCloseQuery(AObj: TForm; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnCloseQuery := nil;
    TEventClass.Remove(AObj, geFormCloseQuery);
    Exit;
  end;
  AObj.OnCloseQuery := TEventClass.FormOnCloseQuery;
  TEventClass.Add(AObj, geFormCloseQuery, AEventId);
end;

procedure Form_SetOnDblClick(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnHide(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnKeyDown(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnKeyPress(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnKeyUp(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnMouseDown(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnMouseEnter(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnMouseLeave(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnMouseMove(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnMouseUp(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnMouseWheel(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnPaint(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnResize(AObj: TForm; AEventId: NativeUInt); stdcall;
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

procedure Form_SetOnShow(AObj: TForm; AEventId: NativeUInt); stdcall;
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

function Form_GetCanvas(AObj: TForm): TCanvas; cdecl;
begin
  Result :=  AObj.Canvas;
end;

function Form_GetDropTarget(AObj: TForm): LongBool; cdecl;
begin
  //Result :=  AObj.DropTarget;
end;

procedure Form_SetDropTarget(AObj: TForm; AValue: LongBool); cdecl;
begin
  //AObj.DropTarget := AValue;
end;

function Form_GetModalResult(AObj: TForm): TModalResult; cdecl;
begin
  Result :=  AObj.ModalResult;
end;

procedure Form_SetModalResult(AObj: TForm; AValue: TModalResult); cdecl;
begin
  AObj.ModalResult := AValue;
end;

function Form_GetLeft(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Form_SetLeft(AObj: TForm; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

function Form_GetTop(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Form_SetTop(AObj: TForm; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

function Form_GetBrush(AObj: TForm): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

function Form_GetControlCount(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Form_GetHandle(AObj: TForm): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

function Form_GetParentDoubleBuffered(AObj: TForm): LongBool; cdecl;
begin
   //Result :=  AObj.ParentDoubleBuffered;
end;

procedure Form_SetParentDoubleBuffered(AObj: TForm; AValue: LongBool); cdecl;
begin
  //AObj.ParentDoubleBuffered := AValue;
end;

function Form_GetParentWindow(AObj: TForm): HWND; cdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Form_SetParentWindow(AObj: TForm; AValue: HWND); cdecl;
begin
  AObj.ParentWindow := AValue;
end;

function Form_GetTabOrder(AObj: TForm): TTabOrder; cdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Form_SetTabOrder(AObj: TForm; AValue: TTabOrder); cdecl;
begin
  AObj.TabOrder := AValue;
end;

function Form_GetTabStop(AObj: TForm): LongBool; cdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Form_SetTabStop(AObj: TForm; AValue: LongBool); cdecl;
begin
  AObj.TabStop := AValue;
end;

procedure Form_GetBoundsRect(AObj: TForm; var Result: TRect); cdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Form_SetBoundsRect(AObj: TForm; var AValue: TRect); cdecl;
begin
  AObj.BoundsRect := AValue;
end;

procedure Form_GetClientRect(AObj: TForm; var Result: TRect); cdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Form_GetExplicitLeft(AObj: TForm): Integer; cdecl;
begin
  //Result :=  AObj.ExplicitLeft;
end;

function Form_GetExplicitTop(AObj: TForm): Integer; cdecl;
begin
  //Result :=  AObj.ExplicitTop;
end;

function Form_GetExplicitWidth(AObj: TForm): Integer; cdecl;
begin
  //Result :=  AObj.ExplicitWidth;
end;

function Form_GetExplicitHeight(AObj: TForm): Integer; cdecl;
begin
  //Result :=  AObj.ExplicitHeight;
end;

function Form_GetParent(AObj: TForm): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Form_SetParent(AObj: TForm; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

function Form_GetAlignWithMargins(AObj: TForm): LongBool; cdecl;
begin
  //Result :=  AObj.AlignWithMargins;
end;

procedure Form_SetAlignWithMargins(AObj: TForm; AValue: LongBool); cdecl;
begin
  //AObj.AlignWithMargins := AValue;
end;

function Form_GetCursor(AObj: TForm): TCursor; cdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Form_SetCursor(AObj: TForm; AValue: TCursor); cdecl;
begin
  AObj.Cursor := AValue;
end;

function Form_GetHint(AObj: TForm): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Form_SetHint(AObj: TForm; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

//function Form_GetMargins(AObj: TForm): TMargins; cdecl;
//begin
//  Result :=  AObj.Margins;
//end;

//procedure Form_SetMargins(AObj: TForm; AValue: TMargins); cdecl;
//begin
//  AObj.Margins := AValue;
//end;

function Form_GetComponentCount(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Form_GetComponentIndex(AObj: TForm): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Form_SetComponentIndex(AObj: TForm; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Form_GetOwner(AObj: TForm): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Form_GetName(AObj: TForm): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Form_SetName(AObj: TForm; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Form_GetTag(AObj: TForm): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Form_SetTag(AObj: TForm; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Form_GetControls(AObj: TForm; Index: Integer): TControl; cdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Form_GetComponents(AObj: TForm; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Form_Create {$IFNDEF MSWINDOWS}name '_Form_Create'{$ENDIF},
  Form_Free {$IFNDEF MSWINDOWS}name '_Form_Free'{$ENDIF},
  Form_Close {$IFNDEF MSWINDOWS}name '_Form_Close'{$ENDIF},
  Form_Hide {$IFNDEF MSWINDOWS}name '_Form_Hide'{$ENDIF},
  Form_Print {$IFNDEF MSWINDOWS}name '_Form_Print'{$ENDIF},
  Form_SetFocus {$IFNDEF MSWINDOWS}name '_Form_SetFocus'{$ENDIF},
  Form_Show {$IFNDEF MSWINDOWS}name '_Form_Show'{$ENDIF},
  Form_ShowModal {$IFNDEF MSWINDOWS}name '_Form_ShowModal'{$ENDIF},
  Form_CanFocus {$IFNDEF MSWINDOWS}name '_Form_CanFocus'{$ENDIF},
  Form_FlipChildren {$IFNDEF MSWINDOWS}name '_Form_FlipChildren'{$ENDIF},
  Form_Focused {$IFNDEF MSWINDOWS}name '_Form_Focused'{$ENDIF},
  Form_HandleAllocated {$IFNDEF MSWINDOWS}name '_Form_HandleAllocated'{$ENDIF},
  Form_Invalidate {$IFNDEF MSWINDOWS}name '_Form_Invalidate'{$ENDIF},
  Form_Realign {$IFNDEF MSWINDOWS}name '_Form_Realign'{$ENDIF},
  Form_Repaint {$IFNDEF MSWINDOWS}name '_Form_Repaint'{$ENDIF},
  Form_ScaleBy {$IFNDEF MSWINDOWS}name '_Form_ScaleBy'{$ENDIF},
  Form_SetBounds {$IFNDEF MSWINDOWS}name '_Form_SetBounds'{$ENDIF},
  Form_Update {$IFNDEF MSWINDOWS}name '_Form_Update'{$ENDIF},
  Form_BringToFront {$IFNDEF MSWINDOWS}name '_Form_BringToFront'{$ENDIF},
  Form_HasParent {$IFNDEF MSWINDOWS}name '_Form_HasParent'{$ENDIF},
  Form_Perform {$IFNDEF MSWINDOWS}name '_Form_Perform'{$ENDIF},
  Form_Refresh {$IFNDEF MSWINDOWS}name '_Form_Refresh'{$ENDIF},
  Form_SendToBack {$IFNDEF MSWINDOWS}name '_Form_SendToBack'{$ENDIF},
  Form_GetTextBuf {$IFNDEF MSWINDOWS}name '_Form_GetTextBuf'{$ENDIF},
  Form_FindComponent {$IFNDEF MSWINDOWS}name '_Form_FindComponent'{$ENDIF},
  Form_GetNamePath {$IFNDEF MSWINDOWS}name '_Form_GetNamePath'{$ENDIF},
  Form_Assign {$IFNDEF MSWINDOWS}name '_Form_Assign'{$ENDIF},
  Form_ClassName {$IFNDEF MSWINDOWS}name '_Form_ClassName'{$ENDIF},
  Form_Equals {$IFNDEF MSWINDOWS}name '_Form_Equals'{$ENDIF},
  Form_GetHashCode {$IFNDEF MSWINDOWS}name '_Form_GetHashCode'{$ENDIF},
  Form_ToString {$IFNDEF MSWINDOWS}name '_Form_ToString'{$ENDIF},
  Form_GetAction {$IFNDEF MSWINDOWS}name '_Form_GetAction'{$ENDIF},
  Form_SetAction {$IFNDEF MSWINDOWS}name '_Form_SetAction'{$ENDIF},
  Form_GetAlign {$IFNDEF MSWINDOWS}name '_Form_GetAlign'{$ENDIF},
  Form_SetAlign {$IFNDEF MSWINDOWS}name '_Form_SetAlign'{$ENDIF},
  Form_GetAlphaBlend {$IFNDEF MSWINDOWS}name '_Form_GetAlphaBlend'{$ENDIF},
  Form_SetAlphaBlend {$IFNDEF MSWINDOWS}name '_Form_SetAlphaBlend'{$ENDIF},
  Form_GetAlphaBlendValue {$IFNDEF MSWINDOWS}name '_Form_GetAlphaBlendValue'{$ENDIF},
  Form_SetAlphaBlendValue {$IFNDEF MSWINDOWS}name '_Form_SetAlphaBlendValue'{$ENDIF},
  Form_GetAnchors {$IFNDEF MSWINDOWS}name '_Form_GetAnchors'{$ENDIF},
  Form_SetAnchors {$IFNDEF MSWINDOWS}name '_Form_SetAnchors'{$ENDIF},
  Form_GetAutoSize {$IFNDEF MSWINDOWS}name '_Form_GetAutoSize'{$ENDIF},
  Form_SetAutoSize {$IFNDEF MSWINDOWS}name '_Form_SetAutoSize'{$ENDIF},
  Form_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Form_GetBiDiMode'{$ENDIF},
  Form_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Form_SetBiDiMode'{$ENDIF},
  Form_GetBorderIcons {$IFNDEF MSWINDOWS}name '_Form_GetBorderIcons'{$ENDIF},
  Form_SetBorderIcons {$IFNDEF MSWINDOWS}name '_Form_SetBorderIcons'{$ENDIF},
  Form_GetBorderStyle {$IFNDEF MSWINDOWS}name '_Form_GetBorderStyle'{$ENDIF},
  Form_SetBorderStyle {$IFNDEF MSWINDOWS}name '_Form_SetBorderStyle'{$ENDIF},
  Form_GetBorderWidth {$IFNDEF MSWINDOWS}name '_Form_GetBorderWidth'{$ENDIF},
  Form_SetBorderWidth {$IFNDEF MSWINDOWS}name '_Form_SetBorderWidth'{$ENDIF},
  Form_GetCaption {$IFNDEF MSWINDOWS}name '_Form_GetCaption'{$ENDIF},
  Form_SetCaption {$IFNDEF MSWINDOWS}name '_Form_SetCaption'{$ENDIF},
  Form_GetClientHeight {$IFNDEF MSWINDOWS}name '_Form_GetClientHeight'{$ENDIF},
  Form_SetClientHeight {$IFNDEF MSWINDOWS}name '_Form_SetClientHeight'{$ENDIF},
  Form_GetClientWidth {$IFNDEF MSWINDOWS}name '_Form_GetClientWidth'{$ENDIF},
  Form_SetClientWidth {$IFNDEF MSWINDOWS}name '_Form_SetClientWidth'{$ENDIF},
  Form_GetColor {$IFNDEF MSWINDOWS}name '_Form_GetColor'{$ENDIF},
  Form_SetColor {$IFNDEF MSWINDOWS}name '_Form_SetColor'{$ENDIF},
  Form_GetTransparentColor {$IFNDEF MSWINDOWS}name '_Form_GetTransparentColor'{$ENDIF},
  Form_SetTransparentColor {$IFNDEF MSWINDOWS}name '_Form_SetTransparentColor'{$ENDIF},
  Form_GetTransparentColorValue {$IFNDEF MSWINDOWS}name '_Form_GetTransparentColorValue'{$ENDIF},
  Form_SetTransparentColorValue {$IFNDEF MSWINDOWS}name '_Form_SetTransparentColorValue'{$ENDIF},
  Form_GetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Form_GetDoubleBuffered'{$ENDIF},
  Form_SetDoubleBuffered {$IFNDEF MSWINDOWS}name '_Form_SetDoubleBuffered'{$ENDIF},
  Form_GetEnabled {$IFNDEF MSWINDOWS}name '_Form_GetEnabled'{$ENDIF},
  Form_SetEnabled {$IFNDEF MSWINDOWS}name '_Form_SetEnabled'{$ENDIF},
  Form_GetParentFont {$IFNDEF MSWINDOWS}name '_Form_GetParentFont'{$ENDIF},
  Form_SetParentFont {$IFNDEF MSWINDOWS}name '_Form_SetParentFont'{$ENDIF},
  Form_GetFont {$IFNDEF MSWINDOWS}name '_Form_GetFont'{$ENDIF},
  Form_SetFont {$IFNDEF MSWINDOWS}name '_Form_SetFont'{$ENDIF},
  Form_GetFormStyle {$IFNDEF MSWINDOWS}name '_Form_GetFormStyle'{$ENDIF},
  Form_SetFormStyle {$IFNDEF MSWINDOWS}name '_Form_SetFormStyle'{$ENDIF},
  Form_GetHeight {$IFNDEF MSWINDOWS}name '_Form_GetHeight'{$ENDIF},
  Form_SetHeight {$IFNDEF MSWINDOWS}name '_Form_SetHeight'{$ENDIF},
  Form_GetIcon {$IFNDEF MSWINDOWS}name '_Form_GetIcon'{$ENDIF},
  Form_SetIcon {$IFNDEF MSWINDOWS}name '_Form_SetIcon'{$ENDIF},
  Form_GetKeyPreview {$IFNDEF MSWINDOWS}name '_Form_GetKeyPreview'{$ENDIF},
  Form_SetKeyPreview {$IFNDEF MSWINDOWS}name '_Form_SetKeyPreview'{$ENDIF},
  Form_GetMenu {$IFNDEF MSWINDOWS}name '_Form_GetMenu'{$ENDIF},
  Form_SetMenu {$IFNDEF MSWINDOWS}name '_Form_SetMenu'{$ENDIF},
  Form_GetPixelsPerInch {$IFNDEF MSWINDOWS}name '_Form_GetPixelsPerInch'{$ENDIF},
  Form_SetPixelsPerInch {$IFNDEF MSWINDOWS}name '_Form_SetPixelsPerInch'{$ENDIF},
  Form_GetPopupMenu {$IFNDEF MSWINDOWS}name '_Form_GetPopupMenu'{$ENDIF},
  Form_SetPopupMenu {$IFNDEF MSWINDOWS}name '_Form_SetPopupMenu'{$ENDIF},
  Form_GetPosition {$IFNDEF MSWINDOWS}name '_Form_GetPosition'{$ENDIF},
  Form_SetPosition {$IFNDEF MSWINDOWS}name '_Form_SetPosition'{$ENDIF},
  Form_GetScaled {$IFNDEF MSWINDOWS}name '_Form_GetScaled'{$ENDIF},
  Form_SetScaled {$IFNDEF MSWINDOWS}name '_Form_SetScaled'{$ENDIF},
  Form_GetShowHint {$IFNDEF MSWINDOWS}name '_Form_GetShowHint'{$ENDIF},
  Form_SetShowHint {$IFNDEF MSWINDOWS}name '_Form_SetShowHint'{$ENDIF},
  Form_GetVisible {$IFNDEF MSWINDOWS}name '_Form_GetVisible'{$ENDIF},
  Form_SetVisible {$IFNDEF MSWINDOWS}name '_Form_SetVisible'{$ENDIF},
  Form_GetWidth {$IFNDEF MSWINDOWS}name '_Form_GetWidth'{$ENDIF},
  Form_SetWidth {$IFNDEF MSWINDOWS}name '_Form_SetWidth'{$ENDIF},
  Form_GetWindowState {$IFNDEF MSWINDOWS}name '_Form_GetWindowState'{$ENDIF},
  Form_SetWindowState {$IFNDEF MSWINDOWS}name '_Form_SetWindowState'{$ENDIF},
  //Form_GetStyleElements {$IFNDEF MSWINDOWS}name '_Form_GetStyleElements'{$ENDIF},
  //Form_SetStyleElements {$IFNDEF MSWINDOWS}name '_Form_SetStyleElements'{$ENDIF},
  Form_SetOnClick {$IFNDEF MSWINDOWS}name '_Form_SetOnClick'{$ENDIF},
  Form_SetOnClose {$IFNDEF MSWINDOWS}name '_Form_SetOnClose'{$ENDIF},
  Form_SetOnCloseQuery {$IFNDEF MSWINDOWS}name '_Form_SetOnCloseQuery'{$ENDIF},
  Form_SetOnDblClick {$IFNDEF MSWINDOWS}name '_Form_SetOnDblClick'{$ENDIF},
  Form_SetOnHide {$IFNDEF MSWINDOWS}name '_Form_SetOnHide'{$ENDIF},
  Form_SetOnKeyDown {$IFNDEF MSWINDOWS}name '_Form_SetOnKeyDown'{$ENDIF},
  Form_SetOnKeyPress {$IFNDEF MSWINDOWS}name '_Form_SetOnKeyPress'{$ENDIF},
  Form_SetOnKeyUp {$IFNDEF MSWINDOWS}name '_Form_SetOnKeyUp'{$ENDIF},
  Form_SetOnMouseDown {$IFNDEF MSWINDOWS}name '_Form_SetOnMouseDown'{$ENDIF},
  Form_SetOnMouseEnter {$IFNDEF MSWINDOWS}name '_Form_SetOnMouseEnter'{$ENDIF},
  Form_SetOnMouseLeave {$IFNDEF MSWINDOWS}name '_Form_SetOnMouseLeave'{$ENDIF},
  Form_SetOnMouseMove {$IFNDEF MSWINDOWS}name '_Form_SetOnMouseMove'{$ENDIF},
  Form_SetOnMouseUp {$IFNDEF MSWINDOWS}name '_Form_SetOnMouseUp'{$ENDIF},
  Form_SetOnMouseWheel {$IFNDEF MSWINDOWS}name '_Form_SetOnMouseWheel'{$ENDIF},
  Form_SetOnPaint {$IFNDEF MSWINDOWS}name '_Form_SetOnPaint'{$ENDIF},
  Form_SetOnResize {$IFNDEF MSWINDOWS}name '_Form_SetOnResize'{$ENDIF},
  Form_SetOnShow {$IFNDEF MSWINDOWS}name '_Form_SetOnShow'{$ENDIF},
  Form_GetCanvas {$IFNDEF MSWINDOWS}name '_Form_GetCanvas'{$ENDIF},
  Form_GetDropTarget {$IFNDEF MSWINDOWS}name '_Form_GetDropTarget'{$ENDIF},
  Form_SetDropTarget {$IFNDEF MSWINDOWS}name '_Form_SetDropTarget'{$ENDIF},
  Form_GetModalResult {$IFNDEF MSWINDOWS}name '_Form_GetModalResult'{$ENDIF},
  Form_SetModalResult {$IFNDEF MSWINDOWS}name '_Form_SetModalResult'{$ENDIF},
  Form_GetLeft {$IFNDEF MSWINDOWS}name '_Form_GetLeft'{$ENDIF},
  Form_SetLeft {$IFNDEF MSWINDOWS}name '_Form_SetLeft'{$ENDIF},
  Form_GetTop {$IFNDEF MSWINDOWS}name '_Form_GetTop'{$ENDIF},
  Form_SetTop {$IFNDEF MSWINDOWS}name '_Form_SetTop'{$ENDIF},
  Form_GetBrush {$IFNDEF MSWINDOWS}name '_Form_GetBrush'{$ENDIF},
  Form_GetControlCount {$IFNDEF MSWINDOWS}name '_Form_GetControlCount'{$ENDIF},
  Form_GetHandle {$IFNDEF MSWINDOWS}name '_Form_GetHandle'{$ENDIF},
  Form_GetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Form_GetParentDoubleBuffered'{$ENDIF},
  Form_SetParentDoubleBuffered {$IFNDEF MSWINDOWS}name '_Form_SetParentDoubleBuffered'{$ENDIF},
  Form_GetParentWindow {$IFNDEF MSWINDOWS}name '_Form_GetParentWindow'{$ENDIF},
  Form_SetParentWindow {$IFNDEF MSWINDOWS}name '_Form_SetParentWindow'{$ENDIF},
  Form_GetTabOrder {$IFNDEF MSWINDOWS}name '_Form_GetTabOrder'{$ENDIF},
  Form_SetTabOrder {$IFNDEF MSWINDOWS}name '_Form_SetTabOrder'{$ENDIF},
  Form_GetTabStop {$IFNDEF MSWINDOWS}name '_Form_GetTabStop'{$ENDIF},
  Form_SetTabStop {$IFNDEF MSWINDOWS}name '_Form_SetTabStop'{$ENDIF},
  Form_GetBoundsRect {$IFNDEF MSWINDOWS}name '_Form_GetBoundsRect'{$ENDIF},
  Form_SetBoundsRect {$IFNDEF MSWINDOWS}name '_Form_SetBoundsRect'{$ENDIF},
  Form_GetClientRect {$IFNDEF MSWINDOWS}name '_Form_GetClientRect'{$ENDIF},
  Form_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Form_GetExplicitLeft'{$ENDIF},
  Form_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Form_GetExplicitTop'{$ENDIF},
  Form_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Form_GetExplicitWidth'{$ENDIF},
  Form_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Form_GetExplicitHeight'{$ENDIF},
  Form_GetParent {$IFNDEF MSWINDOWS}name '_Form_GetParent'{$ENDIF},
  Form_SetParent {$IFNDEF MSWINDOWS}name '_Form_SetParent'{$ENDIF},
  Form_GetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Form_GetAlignWithMargins'{$ENDIF},
  Form_SetAlignWithMargins {$IFNDEF MSWINDOWS}name '_Form_SetAlignWithMargins'{$ENDIF},
  Form_GetCursor {$IFNDEF MSWINDOWS}name '_Form_GetCursor'{$ENDIF},
  Form_SetCursor {$IFNDEF MSWINDOWS}name '_Form_SetCursor'{$ENDIF},
  Form_GetHint {$IFNDEF MSWINDOWS}name '_Form_GetHint'{$ENDIF},
  Form_SetHint {$IFNDEF MSWINDOWS}name '_Form_SetHint'{$ENDIF},
  //Form_GetMargins {$IFNDEF MSWINDOWS}name '_Form_GetMargins'{$ENDIF},
  //Form_SetMargins {$IFNDEF MSWINDOWS}name '_Form_SetMargins'{$ENDIF},
  Form_GetComponentCount {$IFNDEF MSWINDOWS}name '_Form_GetComponentCount'{$ENDIF},
  Form_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Form_GetComponentIndex'{$ENDIF},
  Form_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Form_SetComponentIndex'{$ENDIF},
  Form_GetOwner {$IFNDEF MSWINDOWS}name '_Form_GetOwner'{$ENDIF},
  Form_GetName {$IFNDEF MSWINDOWS}name '_Form_GetName'{$ENDIF},
  Form_SetName {$IFNDEF MSWINDOWS}name '_Form_SetName'{$ENDIF},
  Form_GetTag {$IFNDEF MSWINDOWS}name '_Form_GetTag'{$ENDIF},
  Form_SetTag {$IFNDEF MSWINDOWS}name '_Form_SetTag'{$ENDIF},
  Form_GetControls {$IFNDEF MSWINDOWS}name '_Form_GetControls'{$ENDIF},
  Form_GetComponents {$IFNDEF MSWINDOWS}name '_Form_GetComponents'{$ENDIF};

