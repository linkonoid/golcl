
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function MonthCalColors_Create(AOwner: TCommonCalendar): TMonthCalColors; cdecl;
begin
  Result :=  TMonthCalColors.Create(AOwner);
end;

procedure MonthCalColors_Free(AObj: TMonthCalColors); cdecl;
begin
  AObj.Free;
end;

procedure MonthCalColors_Assign(AObj: TMonthCalColors; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function MonthCalColors_GetNamePath(AObj: TMonthCalColors): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function MonthCalColors_ClassName(AObj: TMonthCalColors): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function MonthCalColors_Equals(AObj: TMonthCalColors; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function MonthCalColors_GetHashCode(AObj: TMonthCalColors): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function MonthCalColors_ToString(AObj: TMonthCalColors): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;


exports
  MonthCalColors_Create {$IFNDEF MSWINDOWS}name '_MonthCalColors_Create'{$ENDIF},
  MonthCalColors_Free {$IFNDEF MSWINDOWS}name '_MonthCalColors_Free'{$ENDIF},
  MonthCalColors_Assign {$IFNDEF MSWINDOWS}name '_MonthCalColors_Assign'{$ENDIF},
  MonthCalColors_GetNamePath {$IFNDEF MSWINDOWS}name '_MonthCalColors_GetNamePath'{$ENDIF},
  MonthCalColors_ClassName {$IFNDEF MSWINDOWS}name '_MonthCalColors_ClassName'{$ENDIF},
  MonthCalColors_Equals {$IFNDEF MSWINDOWS}name '_MonthCalColors_Equals'{$ENDIF},
  MonthCalColors_GetHashCode {$IFNDEF MSWINDOWS}name '_MonthCalColors_GetHashCode'{$ENDIF},
  MonthCalColors_ToString {$IFNDEF MSWINDOWS}name '_MonthCalColors_ToString'{$ENDIF};

