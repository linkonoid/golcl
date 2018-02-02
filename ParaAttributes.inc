procedure ParaAttributes_Assign(AObj: TParaAttributes; Source: TPersistent); cdecl;
begin
  AObj.Create;
  //AObj.Assign(Source);
end;

//function ParaAttributes_GetNamePath(AObj: TParaAttributes): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.GetNamePath);
//end;

function ParaAttributes_ClassName(AObj: TParaAttributes): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ParaAttributes_Equals(AObj: TParaAttributes; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ParaAttributes_GetHashCode(AObj: TParaAttributes): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ParaAttributes_ToString(AObj: TParaAttributes): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

//function ParaAttributes_GetAlignment(AObj: TParaAttributes): TAlignment; cdecl;
//begin
//  Result :=  AObj.Alignment;
//end;
//
//procedure ParaAttributes_SetAlignment(AObj: TParaAttributes; AValue: TAlignment); cdecl;
//begin
//  AObj.Alignment := AValue;
//end;

function ParaAttributes_GetFirstIndent(AObj: TParaAttributes): Integer; cdecl;
begin
  Result :=  AObj.FirstIndent;
end;

procedure ParaAttributes_SetFirstIndent(AObj: TParaAttributes; AValue: Integer); cdecl;
begin
  AObj.FirstIndent := AValue;
end;

function ParaAttributes_GetLeftIndent(AObj: TParaAttributes): Integer; cdecl;
begin
  Result :=  AObj.LeftIndent;
end;

procedure ParaAttributes_SetLeftIndent(AObj: TParaAttributes; AValue: Integer); cdecl;
begin
  AObj.LeftIndent := AValue;
end;

//function ParaAttributes_GetNumbering(AObj: TParaAttributes): TNumberingStyle; cdecl;
//begin
//  Result :=  AObj.Numbering;
//end;
//
//procedure ParaAttributes_SetNumbering(AObj: TParaAttributes; AValue: TNumberingStyle); cdecl;
//begin
//  AObj.Numbering := AValue;
//end;

function ParaAttributes_GetRightIndent(AObj: TParaAttributes): Integer; cdecl;
begin
  Result :=  AObj.RightIndent;
end;

procedure ParaAttributes_SetRightIndent(AObj: TParaAttributes; AValue: Integer); cdecl;
begin
  AObj.RightIndent := AValue;
end;

function ParaAttributes_GetTabCount(AObj: TParaAttributes): Integer; cdecl;
begin
  Result :=  AObj.TabCount;
end;

procedure ParaAttributes_SetTabCount(AObj: TParaAttributes; AValue: Integer); cdecl;
begin
  AObj.TabCount := AValue;
end;

function ParaAttributes_GetTab(AObj: TParaAttributes; Index: Byte): Integer; cdecl;
begin
  Result :=  AObj.Tab[Index];
end;

procedure ParaAttributes_SetTab(AObj: TParaAttributes; Index: Byte; AValue: Integer); cdecl;
begin
  AObj.Tab[Index] := AValue;
end;


exports
  ParaAttributes_Assign {$IFNDEF MSWINDOWS}name '_ParaAttributes_Assign'{$ENDIF},
  //ParaAttributes_GetNamePath {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetNamePath'{$ENDIF},
  ParaAttributes_ClassName {$IFNDEF MSWINDOWS}name '_ParaAttributes_ClassName'{$ENDIF},
  ParaAttributes_Equals {$IFNDEF MSWINDOWS}name '_ParaAttributes_Equals'{$ENDIF},
  ParaAttributes_GetHashCode {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetHashCode'{$ENDIF},
  ParaAttributes_ToString {$IFNDEF MSWINDOWS}name '_ParaAttributes_ToString'{$ENDIF},
  //ParaAttributes_GetAlignment {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetAlignment'{$ENDIF},
  //ParaAttributes_SetAlignment {$IFNDEF MSWINDOWS}name '_ParaAttributes_SetAlignment'{$ENDIF},
  ParaAttributes_GetFirstIndent {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetFirstIndent'{$ENDIF},
  ParaAttributes_SetFirstIndent {$IFNDEF MSWINDOWS}name '_ParaAttributes_SetFirstIndent'{$ENDIF},
  ParaAttributes_GetLeftIndent {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetLeftIndent'{$ENDIF},
  ParaAttributes_SetLeftIndent {$IFNDEF MSWINDOWS}name '_ParaAttributes_SetLeftIndent'{$ENDIF},
  //ParaAttributes_GetNumbering {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetNumbering'{$ENDIF},
  //ParaAttributes_SetNumbering {$IFNDEF MSWINDOWS}name '_ParaAttributes_SetNumbering'{$ENDIF},
  ParaAttributes_GetRightIndent {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetRightIndent'{$ENDIF},
  ParaAttributes_SetRightIndent {$IFNDEF MSWINDOWS}name '_ParaAttributes_SetRightIndent'{$ENDIF},
  ParaAttributes_GetTabCount {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetTabCount'{$ENDIF},
  ParaAttributes_SetTabCount {$IFNDEF MSWINDOWS}name '_ParaAttributes_SetTabCount'{$ENDIF},
  ParaAttributes_GetTab {$IFNDEF MSWINDOWS}name '_ParaAttributes_GetTab'{$ENDIF},
  ParaAttributes_SetTab {$IFNDEF MSWINDOWS}name '_ParaAttributes_SetTab'{$ENDIF};

