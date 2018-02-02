
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function List_Create: TList; cdecl;
begin
  Result :=  TList.Create;
end;

procedure List_Free(AObj: TList); cdecl;
begin
  AObj.Free;
end;

function List_Add(AObj: TList; Item: Pointer): Integer; cdecl;
begin
  Result :=  AObj.Add(Item);
end;

procedure List_Clear(AObj: TList); cdecl;
begin
  AObj.Clear;
end;

procedure List_Delete(AObj: TList; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

function List_Expand(AObj: TList): TList; cdecl;
begin
  Result :=  AObj.Expand;
end;

function List_IndexOf(AObj: TList; Item: Pointer): Integer; cdecl;
begin
  Result :=  AObj.IndexOf(Item);
end;

procedure List_Insert(AObj: TList; Index: Integer; Item: Pointer); cdecl;
begin
  AObj.Insert(Index, Item);
end;

procedure List_Move(AObj: TList; CurIndex: Integer; NewIndex: Integer); cdecl;
begin
  AObj.Move(CurIndex, NewIndex);
end;

function List_ClassName(AObj: TList): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function List_Equals(AObj: TList; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function List_GetHashCode(AObj: TList): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function List_ToString(AObj: TList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function List_GetList(AObj: TList): PPointerList; cdecl;
begin
  Result :=  AObj.List;
end;

function List_GetItems(AObj: TList; Index: Integer): Pointer; cdecl;
begin
  Result :=  AObj.Items[Index];
end;

procedure List_SetItems(AObj: TList; Index: Integer; AValue: Pointer); cdecl;
begin
  AObj.Items[Index] := AValue;
end;


exports
  List_Create {$IFNDEF MSWINDOWS}name '_List_Create'{$ENDIF},
  List_Free {$IFNDEF MSWINDOWS}name '_List_Free'{$ENDIF},
  List_Add {$IFNDEF MSWINDOWS}name '_List_Add'{$ENDIF},
  List_Clear {$IFNDEF MSWINDOWS}name '_List_Clear'{$ENDIF},
  List_Delete {$IFNDEF MSWINDOWS}name '_List_Delete'{$ENDIF},
  List_Expand {$IFNDEF MSWINDOWS}name '_List_Expand'{$ENDIF},
  List_IndexOf {$IFNDEF MSWINDOWS}name '_List_IndexOf'{$ENDIF},
  List_Insert {$IFNDEF MSWINDOWS}name '_List_Insert'{$ENDIF},
  List_Move {$IFNDEF MSWINDOWS}name '_List_Move'{$ENDIF},
  List_ClassName {$IFNDEF MSWINDOWS}name '_List_ClassName'{$ENDIF},
  List_Equals {$IFNDEF MSWINDOWS}name '_List_Equals'{$ENDIF},
  List_GetHashCode {$IFNDEF MSWINDOWS}name '_List_GetHashCode'{$ENDIF},
  List_ToString {$IFNDEF MSWINDOWS}name '_List_ToString'{$ENDIF},
  List_GetList {$IFNDEF MSWINDOWS}name '_List_GetList'{$ENDIF},
  List_GetItems {$IFNDEF MSWINDOWS}name '_List_GetItems'{$ENDIF},
  List_SetItems {$IFNDEF MSWINDOWS}name '_List_SetItems'{$ENDIF};

