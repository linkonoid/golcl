
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ListColumns_Create(AOwner: TCustomListView): TListColumns; cdecl;
begin
  Result :=  TListColumns.Create(AOwner);
end;

procedure ListColumns_Free(AObj: TListColumns); cdecl;
begin
  AObj.Free;
end;

function ListColumns_Add(AObj: TListColumns): TListColumn; cdecl;
begin
  Result :=  AObj.Add;
end;

function ListColumns_Owner(AObj: TListColumns): TCustomListView; cdecl;
begin
  Result :=  AObj.Owner;
end;

procedure ListColumns_Assign(AObj: TListColumns; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure ListColumns_BeginUpdate(AObj: TListColumns); cdecl;
begin
  AObj.BeginUpdate;
end;

procedure ListColumns_Clear(AObj: TListColumns); cdecl;
begin
  AObj.Clear;
end;

procedure ListColumns_Delete(AObj: TListColumns; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

procedure ListColumns_EndUpdate(AObj: TListColumns); cdecl;
begin
  AObj.EndUpdate;
end;

function ListColumns_GetNamePath(AObj: TListColumns): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ListColumns_Insert(AObj: TListColumns; Index: Integer): TCollectionItem; cdecl;
begin
  Result :=  AObj.Insert(Index);
end;

function ListColumns_ClassName(AObj: TListColumns): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ListColumns_Equals(AObj: TListColumns; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListColumns_GetHashCode(AObj: TListColumns): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListColumns_ToString(AObj: TListColumns): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ListColumns_GetItems(AObj: TListColumns; Index: Integer): TListColumn; cdecl;
begin
  Result :=  AObj.Items[Index];
end;

procedure ListColumns_SetItems(AObj: TListColumns; Index: Integer; AValue: TListColumn); cdecl;
begin
  AObj.Items[Index] := AValue;
end;


exports
  ListColumns_Create {$IFNDEF MSWINDOWS}name '_ListColumns_Create'{$ENDIF},
  ListColumns_Free {$IFNDEF MSWINDOWS}name '_ListColumns_Free'{$ENDIF},
  ListColumns_Add {$IFNDEF MSWINDOWS}name '_ListColumns_Add'{$ENDIF},
  ListColumns_Owner {$IFNDEF MSWINDOWS}name '_ListColumns_Owner'{$ENDIF},
  ListColumns_Assign {$IFNDEF MSWINDOWS}name '_ListColumns_Assign'{$ENDIF},
  ListColumns_BeginUpdate {$IFNDEF MSWINDOWS}name '_ListColumns_BeginUpdate'{$ENDIF},
  ListColumns_Clear {$IFNDEF MSWINDOWS}name '_ListColumns_Clear'{$ENDIF},
  ListColumns_Delete {$IFNDEF MSWINDOWS}name '_ListColumns_Delete'{$ENDIF},
  ListColumns_EndUpdate {$IFNDEF MSWINDOWS}name '_ListColumns_EndUpdate'{$ENDIF},
  ListColumns_GetNamePath {$IFNDEF MSWINDOWS}name '_ListColumns_GetNamePath'{$ENDIF},
  ListColumns_Insert {$IFNDEF MSWINDOWS}name '_ListColumns_Insert'{$ENDIF},
  ListColumns_ClassName {$IFNDEF MSWINDOWS}name '_ListColumns_ClassName'{$ENDIF},
  ListColumns_Equals {$IFNDEF MSWINDOWS}name '_ListColumns_Equals'{$ENDIF},
  ListColumns_GetHashCode {$IFNDEF MSWINDOWS}name '_ListColumns_GetHashCode'{$ENDIF},
  ListColumns_ToString {$IFNDEF MSWINDOWS}name '_ListColumns_ToString'{$ENDIF},
  ListColumns_GetItems {$IFNDEF MSWINDOWS}name '_ListColumns_GetItems'{$ENDIF},
  ListColumns_SetItems {$IFNDEF MSWINDOWS}name '_ListColumns_SetItems'{$ENDIF};

