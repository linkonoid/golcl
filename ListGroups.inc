
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ListGroups_Create(AOwner: TCustomListView): TListGroups; cdecl;
begin
  Result :=  TListGroups.Create(AOwner);
end;

procedure ListGroups_Free(AObj: TListGroups); cdecl;
begin
  AObj.Free;
end;

function ListGroups_Add(AObj: TListGroups): TListGroup; cdecl;
begin
  Result :=  AObj.Add;
end;

function ListGroups_Owner(AObj: TListGroups): TCustomListView; cdecl;
begin
  Result :=  AObj.Owner;
end;

procedure ListGroups_Assign(AObj: TListGroups; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure ListGroups_BeginUpdate(AObj: TListGroups); cdecl;
begin
  AObj.BeginUpdate;
end;

procedure ListGroups_Clear(AObj: TListGroups); cdecl;
begin
  AObj.Clear;
end;

procedure ListGroups_Delete(AObj: TListGroups; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

procedure ListGroups_EndUpdate(AObj: TListGroups); cdecl;
begin
  AObj.EndUpdate;
end;

function ListGroups_GetNamePath(AObj: TListGroups): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ListGroups_Insert(AObj: TListGroups; Index: Integer): TCollectionItem; cdecl;
begin
  Result :=  AObj.Insert(Index);
end;

function ListGroups_ClassName(AObj: TListGroups): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function ListGroups_Equals(AObj: TListGroups; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListGroups_GetHashCode(AObj: TListGroups): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListGroups_ToString(AObj: TListGroups): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ListGroups_GetItems(AObj: TListGroups; Index: Integer): TListGroup; cdecl;
begin
  Result :=  AObj.Items[Index];
end;

procedure ListGroups_SetItems(AObj: TListGroups; Index: Integer; AValue: TListGroup); cdecl;
begin
  AObj.Items[Index] := AValue;
end;


exports
  ListGroups_Create {$IFNDEF MSWINDOWS}name '_ListGroups_Create'{$ENDIF},
  ListGroups_Free {$IFNDEF MSWINDOWS}name '_ListGroups_Free'{$ENDIF},
  ListGroups_Add {$IFNDEF MSWINDOWS}name '_ListGroups_Add'{$ENDIF},
  ListGroups_Owner {$IFNDEF MSWINDOWS}name '_ListGroups_Owner'{$ENDIF},
  ListGroups_Assign {$IFNDEF MSWINDOWS}name '_ListGroups_Assign'{$ENDIF},
  ListGroups_BeginUpdate {$IFNDEF MSWINDOWS}name '_ListGroups_BeginUpdate'{$ENDIF},
  ListGroups_Clear {$IFNDEF MSWINDOWS}name '_ListGroups_Clear'{$ENDIF},
  ListGroups_Delete {$IFNDEF MSWINDOWS}name '_ListGroups_Delete'{$ENDIF},
  ListGroups_EndUpdate {$IFNDEF MSWINDOWS}name '_ListGroups_EndUpdate'{$ENDIF},
  ListGroups_GetNamePath {$IFNDEF MSWINDOWS}name '_ListGroups_GetNamePath'{$ENDIF},
  ListGroups_Insert {$IFNDEF MSWINDOWS}name '_ListGroups_Insert'{$ENDIF},
  ListGroups_ClassName {$IFNDEF MSWINDOWS}name '_ListGroups_ClassName'{$ENDIF},
  ListGroups_Equals {$IFNDEF MSWINDOWS}name '_ListGroups_Equals'{$ENDIF},
  ListGroups_GetHashCode {$IFNDEF MSWINDOWS}name '_ListGroups_GetHashCode'{$ENDIF},
  ListGroups_ToString {$IFNDEF MSWINDOWS}name '_ListGroups_ToString'{$ENDIF},
  ListGroups_GetItems {$IFNDEF MSWINDOWS}name '_ListGroups_GetItems'{$ENDIF},
  ListGroups_SetItems {$IFNDEF MSWINDOWS}name '_ListGroups_SetItems'{$ENDIF};

