
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function StatusPanel_Create(AOwner: TCollection): TStatusPanel; cdecl;
begin
  Result :=  TStatusPanel.Create(AOwner);
end;

procedure StatusPanel_Free(AObj: TStatusPanel); cdecl;
begin
  AObj.Free;
end;

procedure StatusPanel_Assign(AObj: TStatusPanel; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function StatusPanel_GetNamePath(AObj: TStatusPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function StatusPanel_ClassName(AObj: TStatusPanel): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function StatusPanel_Equals(AObj: TStatusPanel; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function StatusPanel_GetHashCode(AObj: TStatusPanel): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function StatusPanel_ToString(AObj: TStatusPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function StatusPanel_GetAlignment(AObj: TStatusPanel): TAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure StatusPanel_SetAlignment(AObj: TStatusPanel; AValue: TAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function StatusPanel_GetBiDiMode(AObj: TStatusPanel): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure StatusPanel_SetBiDiMode(AObj: TStatusPanel; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function StatusPanel_GetStyle(AObj: TStatusPanel): TStatusPanelStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure StatusPanel_SetStyle(AObj: TStatusPanel; AValue: TStatusPanelStyle); cdecl;
begin
  AObj.Style := AValue;
end;

function StatusPanel_GetText(AObj: TStatusPanel): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Text);
end;

procedure StatusPanel_SetText(AObj: TStatusPanel; AValue: PWideChar); cdecl;
begin
  AObj.Text := AValue;
end;

function StatusPanel_GetWidth(AObj: TStatusPanel): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure StatusPanel_SetWidth(AObj: TStatusPanel; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function StatusPanel_GetIndex(AObj: TStatusPanel): Integer; cdecl;
begin
  Result :=  AObj.Index;
end;

procedure StatusPanel_SetIndex(AObj: TStatusPanel; AValue: Integer); cdecl;
begin
  AObj.Index := AValue;
end;


exports
  StatusPanel_Create {$IFNDEF MSWINDOWS}name '_StatusPanel_Create'{$ENDIF},
  StatusPanel_Free {$IFNDEF MSWINDOWS}name '_StatusPanel_Free'{$ENDIF},
  StatusPanel_Assign {$IFNDEF MSWINDOWS}name '_StatusPanel_Assign'{$ENDIF},
  StatusPanel_GetNamePath {$IFNDEF MSWINDOWS}name '_StatusPanel_GetNamePath'{$ENDIF},
  StatusPanel_ClassName {$IFNDEF MSWINDOWS}name '_StatusPanel_ClassName'{$ENDIF},
  StatusPanel_Equals {$IFNDEF MSWINDOWS}name '_StatusPanel_Equals'{$ENDIF},
  StatusPanel_GetHashCode {$IFNDEF MSWINDOWS}name '_StatusPanel_GetHashCode'{$ENDIF},
  StatusPanel_ToString {$IFNDEF MSWINDOWS}name '_StatusPanel_ToString'{$ENDIF},
  StatusPanel_GetAlignment {$IFNDEF MSWINDOWS}name '_StatusPanel_GetAlignment'{$ENDIF},
  StatusPanel_SetAlignment {$IFNDEF MSWINDOWS}name '_StatusPanel_SetAlignment'{$ENDIF},
  StatusPanel_GetBiDiMode {$IFNDEF MSWINDOWS}name '_StatusPanel_GetBiDiMode'{$ENDIF},
  StatusPanel_SetBiDiMode {$IFNDEF MSWINDOWS}name '_StatusPanel_SetBiDiMode'{$ENDIF},
  StatusPanel_GetStyle {$IFNDEF MSWINDOWS}name '_StatusPanel_GetStyle'{$ENDIF},
  StatusPanel_SetStyle {$IFNDEF MSWINDOWS}name '_StatusPanel_SetStyle'{$ENDIF},
  StatusPanel_GetText {$IFNDEF MSWINDOWS}name '_StatusPanel_GetText'{$ENDIF},
  StatusPanel_SetText {$IFNDEF MSWINDOWS}name '_StatusPanel_SetText'{$ENDIF},
  StatusPanel_GetWidth {$IFNDEF MSWINDOWS}name '_StatusPanel_GetWidth'{$ENDIF},
  StatusPanel_SetWidth {$IFNDEF MSWINDOWS}name '_StatusPanel_SetWidth'{$ENDIF},
  StatusPanel_GetIndex {$IFNDEF MSWINDOWS}name '_StatusPanel_GetIndex'{$ENDIF},
  StatusPanel_SetIndex {$IFNDEF MSWINDOWS}name '_StatusPanel_SetIndex'{$ENDIF};

