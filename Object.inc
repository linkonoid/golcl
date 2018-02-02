
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Object_Create: TObject; cdecl;
begin
  Result :=  TObject.Create;
end;

procedure Object_Free(AObj: TObject); cdecl;
begin
  AObj.Free;
end;

function Object_ClassName(AObj: TObject): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Object_Equals(AObj: TObject; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Object_GetHashCode(AObj: TObject): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Object_ToString(AObj: TObject): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;


exports
  Object_Create {$IFNDEF MSWINDOWS}name '_Object_Create'{$ENDIF},
  Object_Free {$IFNDEF MSWINDOWS}name '_Object_Free'{$ENDIF},
  Object_ClassName {$IFNDEF MSWINDOWS}name '_Object_ClassName'{$ENDIF},
  Object_Equals {$IFNDEF MSWINDOWS}name '_Object_Equals'{$ENDIF},
  Object_GetHashCode {$IFNDEF MSWINDOWS}name '_Object_GetHashCode'{$ENDIF},
  Object_ToString {$IFNDEF MSWINDOWS}name '_Object_ToString'{$ENDIF};

