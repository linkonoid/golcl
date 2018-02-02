
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Mouse_Create: TMouse; cdecl;
begin
  Result :=  TMouse.Create;
end;

procedure Mouse_Free(AObj: TMouse); cdecl;
begin
  AObj.Free;
end;

function Mouse_ClassName(AObj: TMouse): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Mouse_Equals(AObj: TMouse; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Mouse_GetHashCode(AObj: TMouse): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Mouse_ToString(AObj: TMouse): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Mouse_GetCapture(AObj: TMouse): HWND; cdecl;
begin
  Result :=  AObj.Capture;
end;

procedure Mouse_SetCapture(AObj: TMouse; AValue: HWND); cdecl;
begin
  AObj.Capture := AValue;
end;

procedure Mouse_GetCursorPos(AObj: TMouse; var Result: TPoint); cdecl;
begin
  Result :=  AObj.CursorPos;
end;

procedure Mouse_SetCursorPos(AObj: TMouse; var AValue: TPoint); cdecl;
begin
  AObj.CursorPos := AValue;
end;

function Mouse_GetIsDragging(AObj: TMouse): LongBool; cdecl;
begin
  Result :=  AObj.IsDragging;
end;

//function Mouse_GetIsPanning(AObj: TMouse): LongBool; cdecl;
//begin
//  Result :=  AObj.IsPanning;
//end;
//
//function Mouse_GetWheelPresent(AObj: TMouse): LongBool; cdecl;
//begin
//  Result :=  AObj.WheelPresent;
//end;

function Mouse_GetWheelScrollLines(AObj: TMouse): Integer; cdecl;
begin
  Result :=  AObj.WheelScrollLines;
end;


exports
  Mouse_Create {$IFNDEF MSWINDOWS}name '_Mouse_Create'{$ENDIF},
  Mouse_Free {$IFNDEF MSWINDOWS}name '_Mouse_Free'{$ENDIF},
  Mouse_ClassName {$IFNDEF MSWINDOWS}name '_Mouse_ClassName'{$ENDIF},
  Mouse_Equals {$IFNDEF MSWINDOWS}name '_Mouse_Equals'{$ENDIF},
  Mouse_GetHashCode {$IFNDEF MSWINDOWS}name '_Mouse_GetHashCode'{$ENDIF},
  Mouse_ToString {$IFNDEF MSWINDOWS}name '_Mouse_ToString'{$ENDIF},
  Mouse_GetCapture {$IFNDEF MSWINDOWS}name '_Mouse_GetCapture'{$ENDIF},
  Mouse_SetCapture {$IFNDEF MSWINDOWS}name '_Mouse_SetCapture'{$ENDIF},
  Mouse_GetCursorPos {$IFNDEF MSWINDOWS}name '_Mouse_GetCursorPos'{$ENDIF},
  Mouse_SetCursorPos {$IFNDEF MSWINDOWS}name '_Mouse_SetCursorPos'{$ENDIF},
  Mouse_GetIsDragging {$IFNDEF MSWINDOWS}name '_Mouse_GetIsDragging'{$ENDIF},
  //Mouse_GetIsPanning {$IFNDEF MSWINDOWS}name '_Mouse_GetIsPanning'{$ENDIF},
  //Mouse_GetWheelPresent {$IFNDEF MSWINDOWS}name '_Mouse_GetWheelPresent'{$ENDIF},
  Mouse_GetWheelScrollLines {$IFNDEF MSWINDOWS}name '_Mouse_GetWheelScrollLines'{$ENDIF};

