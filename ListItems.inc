
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ListItems_Create(AOwner: TCustomListView): TListItems; cdecl;
begin
  Result :=  TListItems.Create(AOwner);
end;

procedure ListItems_Free(AObj: TListItems); cdecl;
begin
  AObj.Free;
end;

function ListItems_Add(AObj: TListItems): TListItem; cdecl;
begin
  Result :=  AObj.Add;
end;

function ListItems_AddItem(AObj: TListItems; Item: TListItem; Index: Integer): TListItem; cdecl;
begin
  //Result :=
  AObj.AddItem(Item);
  //Result :=  AObj.AddItem(Item, Index);
end;

procedure ListItems_Assign(AObj: TListItems; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure ListItems_BeginUpdate(AObj: TListItems); cdecl;
begin
  AObj.BeginUpdate;
end;

procedure ListItems_Clear(AObj: TListItems); cdecl;
begin
  AObj.Clear;
end;

procedure ListItems_Delete(AObj: TListItems; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

procedure ListItems_EndUpdate(AObj: TListItems); cdecl;
begin
  AObj.EndUpdate;
end;

function ListItems_IndexOf(AObj: TListItems; Value: TListItem): Integer; cdecl;
begin
  Result :=  AObj.IndexOf(Value);
end;

function ListItems_Insert(AObj: TListItems; Index: Integer): TListItem; cdecl;
begin
  Result :=  AObj.Insert(Index);
end;

function ListItems_GetNamePath(AObj: TListItems): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ListItems_ClassName(AObj: TListItems): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ListItems_Equals(AObj: TListItems; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListItems_GetHashCode(AObj: TListItems): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListItems_ToString(AObj: TListItems): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

//function ListItems_GetHandle(AObj: TListItems): HWND; cdecl;
//begin
//  Result :=  AObj.Handle;
//end;

function ListItems_GetOwner(AObj: TListItems): TCustomListView; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ListItems_GetItem(AObj: TListItems; Index: Integer): TListItem; cdecl;
begin
  Result :=  AObj.Item[Index];
end;

procedure ListItems_SetItem(AObj: TListItems; Index: Integer; AValue: TListItem); cdecl;
begin
  AObj.Item[Index] := AValue;
end;


exports
  ListItems_Create {$IFNDEF MSWINDOWS}name '_ListItems_Create'{$ENDIF},
  ListItems_Free {$IFNDEF MSWINDOWS}name '_ListItems_Free'{$ENDIF},
  ListItems_Add {$IFNDEF MSWINDOWS}name '_ListItems_Add'{$ENDIF},
  ListItems_AddItem {$IFNDEF MSWINDOWS}name '_ListItems_AddItem'{$ENDIF},
  ListItems_Assign {$IFNDEF MSWINDOWS}name '_ListItems_Assign'{$ENDIF},
  ListItems_BeginUpdate {$IFNDEF MSWINDOWS}name '_ListItems_BeginUpdate'{$ENDIF},
  ListItems_Clear {$IFNDEF MSWINDOWS}name '_ListItems_Clear'{$ENDIF},
  ListItems_Delete {$IFNDEF MSWINDOWS}name '_ListItems_Delete'{$ENDIF},
  ListItems_EndUpdate {$IFNDEF MSWINDOWS}name '_ListItems_EndUpdate'{$ENDIF},
  ListItems_IndexOf {$IFNDEF MSWINDOWS}name '_ListItems_IndexOf'{$ENDIF},
  ListItems_Insert {$IFNDEF MSWINDOWS}name '_ListItems_Insert'{$ENDIF},
  ListItems_GetNamePath {$IFNDEF MSWINDOWS}name '_ListItems_GetNamePath'{$ENDIF},
  ListItems_ClassName {$IFNDEF MSWINDOWS}name '_ListItems_ClassName'{$ENDIF},
  ListItems_Equals {$IFNDEF MSWINDOWS}name '_ListItems_Equals'{$ENDIF},
  ListItems_GetHashCode {$IFNDEF MSWINDOWS}name '_ListItems_GetHashCode'{$ENDIF},
  ListItems_ToString {$IFNDEF MSWINDOWS}name '_ListItems_ToString'{$ENDIF},
  //ListItems_GetHandle {$IFNDEF MSWINDOWS}name '_ListItems_GetHandle'{$ENDIF},
  ListItems_GetOwner {$IFNDEF MSWINDOWS}name '_ListItems_GetOwner'{$ENDIF},
  ListItems_GetItem {$IFNDEF MSWINDOWS}name '_ListItems_GetItem'{$ENDIF},
  ListItems_SetItem {$IFNDEF MSWINDOWS}name '_ListItems_SetItem'{$ENDIF};

