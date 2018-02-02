
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Margins_Create(AOwner: TControl): TMargins; cdecl;
begin
  Result :=  TMargins.Create(AOwner);
end;

procedure Margins_Free(AObj: TMargins); cdecl;
begin
  AObj.Free;
end;

procedure Margins_SetBounds(AObj: TMargins; ALeft: Integer; ATop: Integer; ARight: Integer; ABottom: Integer); cdecl;
begin
  AObj.SetBounds(ALeft, ATop, ARight, ABottom);
end;

procedure Margins_Assign(AObj: TMargins; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Margins_GetNamePath(AObj: TMargins): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Margins_ClassName(AObj: TMargins): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function Margins_Equals(AObj: TMargins; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Margins_GetHashCode(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Margins_ToString(AObj: TMargins): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Margins_GetControlLeft(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.ControlLeft;
end;

function Margins_GetControlTop(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.ControlTop;
end;

function Margins_GetControlWidth(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.ControlWidth;
end;

function Margins_GetControlHeight(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.ControlHeight;
end;

function Margins_GetExplicitLeft(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.ExplicitLeft;
end;

function Margins_GetExplicitTop(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.ExplicitTop;
end;

function Margins_GetExplicitWidth(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.ExplicitWidth;
end;

function Margins_GetExplicitHeight(AObj: TMargins): Integer; cdecl;
begin
  Result :=  AObj.ExplicitHeight;
end;

procedure Margins_SetOnChange(AObj: TMargins; AEventId: NativeUInt); stdcall
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

function Margins_GetLeft(AObj: TMargins): TMarginSize; cdecl;
begin
  Result :=  AObj.Left;
end;

procedure Margins_SetLeft(AObj: TMargins; AValue: TMarginSize); cdecl;
begin
  AObj.Left := AValue;
end;

function Margins_GetTop(AObj: TMargins): TMarginSize; cdecl;
begin
  Result :=  AObj.Top;
end;

procedure Margins_SetTop(AObj: TMargins; AValue: TMarginSize); cdecl;
begin
  AObj.Top := AValue;
end;

function Margins_GetRight(AObj: TMargins): TMarginSize; cdecl;
begin
  Result :=  AObj.Right;
end;

procedure Margins_SetRight(AObj: TMargins; AValue: TMarginSize); cdecl;
begin
  AObj.Right := AValue;
end;

function Margins_GetBottom(AObj: TMargins): TMarginSize; cdecl;
begin
  Result :=  AObj.Bottom;
end;

procedure Margins_SetBottom(AObj: TMargins; AValue: TMarginSize); cdecl;
begin
  AObj.Bottom := AValue;
end;


exports
  Margins_Create {$IFNDEF MSWINDOWS}name '_Margins_Create'{$ENDIF},
  Margins_Free {$IFNDEF MSWINDOWS}name '_Margins_Free'{$ENDIF},
  Margins_SetBounds {$IFNDEF MSWINDOWS}name '_Margins_SetBounds'{$ENDIF},
  Margins_Assign {$IFNDEF MSWINDOWS}name '_Margins_Assign'{$ENDIF},
  Margins_GetNamePath {$IFNDEF MSWINDOWS}name '_Margins_GetNamePath'{$ENDIF},
  Margins_ClassName {$IFNDEF MSWINDOWS}name '_Margins_ClassName'{$ENDIF},
  Margins_Equals {$IFNDEF MSWINDOWS}name '_Margins_Equals'{$ENDIF},
  Margins_GetHashCode {$IFNDEF MSWINDOWS}name '_Margins_GetHashCode'{$ENDIF},
  Margins_ToString {$IFNDEF MSWINDOWS}name '_Margins_ToString'{$ENDIF},
  Margins_GetControlLeft {$IFNDEF MSWINDOWS}name '_Margins_GetControlLeft'{$ENDIF},
  Margins_GetControlTop {$IFNDEF MSWINDOWS}name '_Margins_GetControlTop'{$ENDIF},
  Margins_GetControlWidth {$IFNDEF MSWINDOWS}name '_Margins_GetControlWidth'{$ENDIF},
  Margins_GetControlHeight {$IFNDEF MSWINDOWS}name '_Margins_GetControlHeight'{$ENDIF},
  Margins_GetExplicitLeft {$IFNDEF MSWINDOWS}name '_Margins_GetExplicitLeft'{$ENDIF},
  Margins_GetExplicitTop {$IFNDEF MSWINDOWS}name '_Margins_GetExplicitTop'{$ENDIF},
  Margins_GetExplicitWidth {$IFNDEF MSWINDOWS}name '_Margins_GetExplicitWidth'{$ENDIF},
  Margins_GetExplicitHeight {$IFNDEF MSWINDOWS}name '_Margins_GetExplicitHeight'{$ENDIF},
  Margins_SetOnChange {$IFNDEF MSWINDOWS}name '_Margins_SetOnChange'{$ENDIF},
  Margins_GetLeft {$IFNDEF MSWINDOWS}name '_Margins_GetLeft'{$ENDIF},
  Margins_SetLeft {$IFNDEF MSWINDOWS}name '_Margins_SetLeft'{$ENDIF},
  Margins_GetTop {$IFNDEF MSWINDOWS}name '_Margins_GetTop'{$ENDIF},
  Margins_SetTop {$IFNDEF MSWINDOWS}name '_Margins_SetTop'{$ENDIF},
  Margins_GetRight {$IFNDEF MSWINDOWS}name '_Margins_GetRight'{$ENDIF},
  Margins_SetRight {$IFNDEF MSWINDOWS}name '_Margins_SetRight'{$ENDIF},
  Margins_GetBottom {$IFNDEF MSWINDOWS}name '_Margins_GetBottom'{$ENDIF},
  Margins_SetBottom {$IFNDEF MSWINDOWS}name '_Margins_SetBottom'{$ENDIF};

