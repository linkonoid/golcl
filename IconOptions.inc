procedure IconOptions_Assign(AObj: TIconOptions; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function IconOptions_GetNamePath(AObj: TIconOptions): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function IconOptions_ClassName(AObj: TIconOptions): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function IconOptions_Equals(AObj: TIconOptions; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function IconOptions_GetHashCode(AObj: TIconOptions): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function IconOptions_ToString(AObj: TIconOptions): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function IconOptions_GetArrangement(AObj: TIconOptions): TIconArrangement; cdecl;
begin
  Result :=  AObj.Arrangement;
end;

procedure IconOptions_SetArrangement(AObj: TIconOptions; AValue: TIconArrangement); cdecl;
begin
  AObj.Arrangement := AValue;
end;

function IconOptions_GetAutoArrange(AObj: TIconOptions): LongBool; cdecl;
begin
  Result :=  AObj.AutoArrange;
end;

procedure IconOptions_SetAutoArrange(AObj: TIconOptions; AValue: LongBool); cdecl;
begin
  AObj.AutoArrange := AValue;
end;


exports
  IconOptions_Assign {$IFNDEF MSWINDOWS}name '_IconOptions_Assign'{$ENDIF},
  IconOptions_GetNamePath {$IFNDEF MSWINDOWS}name '_IconOptions_GetNamePath'{$ENDIF},
  IconOptions_ClassName {$IFNDEF MSWINDOWS}name '_IconOptions_ClassName'{$ENDIF},
  IconOptions_Equals {$IFNDEF MSWINDOWS}name '_IconOptions_Equals'{$ENDIF},
  IconOptions_GetHashCode {$IFNDEF MSWINDOWS}name '_IconOptions_GetHashCode'{$ENDIF},
  IconOptions_ToString {$IFNDEF MSWINDOWS}name '_IconOptions_ToString'{$ENDIF},
  IconOptions_GetArrangement {$IFNDEF MSWINDOWS}name '_IconOptions_GetArrangement'{$ENDIF},
  IconOptions_SetArrangement {$IFNDEF MSWINDOWS}name '_IconOptions_SetArrangement'{$ENDIF},
  IconOptions_GetAutoArrange {$IFNDEF MSWINDOWS}name '_IconOptions_GetAutoArrange'{$ENDIF},
  IconOptions_SetAutoArrange {$IFNDEF MSWINDOWS}name '_IconOptions_SetAutoArrange'{$ENDIF};

