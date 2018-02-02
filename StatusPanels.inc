
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

//function StatusPanels_Create(AOwner: TCustomStatusBar): TStatusPanels; cdecl;
//begin
//  Result :=  TStatusPanels.Create(AOwner);
//end;

procedure StatusPanels_Free(AObj: TStatusPanels); cdecl;
begin
  AObj.Free;
end;

function StatusPanels_Add(AObj: TStatusPanels): TStatusPanel; cdecl;
begin
  Result :=  AObj.Add;
end;

//function StatusPanels_AddItem(AObj: TStatusPanels; Item: TStatusPanel; Index: Integer): TStatusPanel; cdecl;
//begin
//  Result :=  AObj.AddItem(Item, Index);
//end;
//
//function StatusPanels_Insert(AObj: TStatusPanels; Index: Integer): TStatusPanel; cdecl;
//begin
//  Result :=  AObj.Insert(Index);
//end;

function StatusPanels_Owner(AObj: TStatusPanels): TPersistent; cdecl;
begin
  Result :=  AObj.Owner;
end;

procedure StatusPanels_Assign(AObj: TStatusPanels; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure StatusPanels_BeginUpdate(AObj: TStatusPanels); cdecl;
begin
  AObj.BeginUpdate;
end;

procedure StatusPanels_Clear(AObj: TStatusPanels); cdecl;
begin
  AObj.Clear;
end;

procedure StatusPanels_Delete(AObj: TStatusPanels; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

procedure StatusPanels_EndUpdate(AObj: TStatusPanels); cdecl;
begin
  AObj.EndUpdate;
end;

function StatusPanels_GetNamePath(AObj: TStatusPanels): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function StatusPanels_ClassName(AObj: TStatusPanels): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function StatusPanels_Equals(AObj: TStatusPanels; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function StatusPanels_GetHashCode(AObj: TStatusPanels): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function StatusPanels_ToString(AObj: TStatusPanels): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function StatusPanels_GetItems(AObj: TStatusPanels; Index: Integer): TStatusPanel; cdecl;
begin
  Result :=  AObj.Items[Index];
end;

procedure StatusPanels_SetItems(AObj: TStatusPanels; Index: Integer; AValue: TStatusPanel); cdecl;
begin
  AObj.Items[Index] := AValue;
end;


exports
  //StatusPanels_Create {$IFNDEF MSWINDOWS}name '_StatusPanels_Create'{$ENDIF},
  StatusPanels_Free {$IFNDEF MSWINDOWS}name '_StatusPanels_Free'{$ENDIF},
  StatusPanels_Add {$IFNDEF MSWINDOWS}name '_StatusPanels_Add'{$ENDIF},
  //StatusPanels_AddItem {$IFNDEF MSWINDOWS}name '_StatusPanels_AddItem'{$ENDIF},
  //StatusPanels_Insert {$IFNDEF MSWINDOWS}name '_StatusPanels_Insert'{$ENDIF},
  StatusPanels_Owner {$IFNDEF MSWINDOWS}name '_StatusPanels_Owner'{$ENDIF},
  StatusPanels_Assign {$IFNDEF MSWINDOWS}name '_StatusPanels_Assign'{$ENDIF},
  StatusPanels_BeginUpdate {$IFNDEF MSWINDOWS}name '_StatusPanels_BeginUpdate'{$ENDIF},
  StatusPanels_Clear {$IFNDEF MSWINDOWS}name '_StatusPanels_Clear'{$ENDIF},
  StatusPanels_Delete {$IFNDEF MSWINDOWS}name '_StatusPanels_Delete'{$ENDIF},
  StatusPanels_EndUpdate {$IFNDEF MSWINDOWS}name '_StatusPanels_EndUpdate'{$ENDIF},
  StatusPanels_GetNamePath {$IFNDEF MSWINDOWS}name '_StatusPanels_GetNamePath'{$ENDIF},
  StatusPanels_ClassName {$IFNDEF MSWINDOWS}name '_StatusPanels_ClassName'{$ENDIF},
  StatusPanels_Equals {$IFNDEF MSWINDOWS}name '_StatusPanels_Equals'{$ENDIF},
  StatusPanels_GetHashCode {$IFNDEF MSWINDOWS}name '_StatusPanels_GetHashCode'{$ENDIF},
  StatusPanels_ToString {$IFNDEF MSWINDOWS}name '_StatusPanels_ToString'{$ENDIF},
  StatusPanels_GetItems {$IFNDEF MSWINDOWS}name '_StatusPanels_GetItems'{$ENDIF},
  StatusPanels_SetItems {$IFNDEF MSWINDOWS}name '_StatusPanels_SetItems'{$ENDIF};

