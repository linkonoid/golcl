
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function StringList_Create: TStringList; cdecl;
begin
  Result :=  TStringList.Create;
end;

procedure StringList_Free(AObj: TStringList); cdecl;
begin
  AObj.Free;
end;

function StringList_Add(AObj: TStringList; S: PWideChar): Integer; cdecl;
begin
  Result :=  AObj.Add(S);
end;

function StringList_AddObject(AObj: TStringList; S: PWideChar; AObject: TObject): Integer; cdecl;
begin
  Result :=  AObj.AddObject(S, AObject);
end;

procedure StringList_Assign(AObj: TStringList; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure StringList_Clear(AObj: TStringList); cdecl;
begin
  AObj.Clear;
end;

procedure StringList_Delete(AObj: TStringList; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

function StringList_IndexOf(AObj: TStringList; S: PWideChar): Integer; cdecl;
begin
  Result :=  AObj.IndexOf(S);
end;

procedure StringList_Insert(AObj: TStringList; Index: Integer; S: PWideChar); cdecl;
begin
  AObj.Insert(Index, S);
end;

procedure StringList_InsertObject(AObj: TStringList; Index: Integer; S: PWideChar; AObject: TObject); cdecl;
begin
  AObj.InsertObject(Index, S, AObject);
end;

procedure StringList_Append(AObj: TStringList; S: PWideChar); cdecl;
begin
  AObj.Append(S);
end;

procedure StringList_BeginUpdate(AObj: TStringList); cdecl;
begin
  AObj.BeginUpdate;
end;

procedure StringList_EndUpdate(AObj: TStringList); cdecl;
begin
  AObj.EndUpdate;
end;

function StringList_Equals(AObj: TStringList; Strings: TStrings): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Strings);
end;

function StringList_IndexOfName(AObj: TStringList; Name: PWideChar): Integer; cdecl;
begin
  Result :=  AObj.IndexOfName(Name);
end;

function StringList_IndexOfObject(AObj: TStringList; AObject: TObject): Integer; cdecl;
begin
  Result :=  AObj.IndexOfObject(AObject);
end;

procedure StringList_LoadFromFile(AObj: TStringList; FileName: PWideChar); cdecl;
begin
  AObj.LoadFromFile(FileName);
end;

procedure StringList_LoadFromStream(AObj: TStringList; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure StringList_Move(AObj: TStringList; CurIndex: Integer; NewIndex: Integer); cdecl;
begin
  AObj.Move(CurIndex, NewIndex);
end;

procedure StringList_SaveToFile(AObj: TStringList; FileName: PWideChar); cdecl;
begin
  AObj.SaveToFile(FileName);
end;

procedure StringList_SaveToStream(AObj: TStringList; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

function StringList_GetNamePath(AObj: TStringList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function StringList_ClassName(AObj: TStringList): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function StringList_GetHashCode(AObj: TStringList): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function StringList_ToString(AObj: TStringList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function StringList_GetSorted(AObj: TStringList): LongBool; cdecl;
begin
  Result :=  AObj.Sorted;
end;

procedure StringList_SetSorted(AObj: TStringList; AValue: LongBool); cdecl;
begin
  AObj.Sorted := AValue;
end;

procedure StringList_SetOnChange(AObj: TStringList; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, geChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.OnChange;
  TEventClass.Add(AObj, geChange, AEventId);
end;

function StringList_GetCommaText(AObj: TStringList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.CommaText);
end;

procedure StringList_SetCommaText(AObj: TStringList; AValue: PWideChar); cdecl;
begin
  AObj.CommaText := AValue;
end;

function StringList_GetDelimiter(AObj: TStringList): Char; cdecl;
begin
  Result :=  AObj.Delimiter;
end;

procedure StringList_SetDelimiter(AObj: TStringList; AValue: Char); cdecl;
begin
  AObj.Delimiter := AValue;
end;

function StringList_GetText(AObj: TStringList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Text);
end;

procedure StringList_SetText(AObj: TStringList; AValue: PWideChar); cdecl;
begin
  AObj.Text := AValue;
end;

function StringList_GetWriteBOM(AObj: TStringList): LongBool; cdecl;
begin
  Result :=  AObj.WriteBOM;
end;

procedure StringList_SetWriteBOM(AObj: TStringList; AValue: LongBool); cdecl;
begin
  AObj.WriteBOM := AValue;
end;

//function StringList_GetOptions(AObj: TStringList): TStringsOptions; cdecl;
//begin
//  Result :=  AObj.Options;
//end;
//
//procedure StringList_SetOptions(AObj: TStringList; AValue: TStringsOptions); cdecl;
//begin
//  AObj.Options := AValue;
//end;

function StringList_GetValues(AObj: TStringList; Name: PWideChar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Values[Name]);
end;

procedure StringList_SetValues(AObj: TStringList; Name: string; AValue: PWideChar); cdecl;
begin
  AObj.Values[Name] := AValue;
end;

function StringList_GetValueFromIndex(AObj: TStringList; Index: Integer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ValueFromIndex[Index]);
end;

procedure StringList_SetValueFromIndex(AObj: TStringList; Index: Integer; AValue: PWideChar); cdecl;
begin
  AObj.ValueFromIndex[Index] := AValue;
end;

function StringList_GetStrings(AObj: TStringList; Index: Integer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Strings[Index]);
end;

procedure StringList_SetStrings(AObj: TStringList; Index: Integer; AValue: PWideChar); cdecl;
begin
  AObj.Strings[Index] := AValue;
end;


exports
  StringList_Create {$IFNDEF MSWINDOWS}name '_StringList_Create'{$ENDIF},
  StringList_Free {$IFNDEF MSWINDOWS}name '_StringList_Free'{$ENDIF},
  StringList_Add {$IFNDEF MSWINDOWS}name '_StringList_Add'{$ENDIF},
  StringList_AddObject {$IFNDEF MSWINDOWS}name '_StringList_AddObject'{$ENDIF},
  StringList_Assign {$IFNDEF MSWINDOWS}name '_StringList_Assign'{$ENDIF},
  StringList_Clear {$IFNDEF MSWINDOWS}name '_StringList_Clear'{$ENDIF},
  StringList_Delete {$IFNDEF MSWINDOWS}name '_StringList_Delete'{$ENDIF},
  StringList_IndexOf {$IFNDEF MSWINDOWS}name '_StringList_IndexOf'{$ENDIF},
  StringList_Insert {$IFNDEF MSWINDOWS}name '_StringList_Insert'{$ENDIF},
  StringList_InsertObject {$IFNDEF MSWINDOWS}name '_StringList_InsertObject'{$ENDIF},
  StringList_Append {$IFNDEF MSWINDOWS}name '_StringList_Append'{$ENDIF},
  StringList_BeginUpdate {$IFNDEF MSWINDOWS}name '_StringList_BeginUpdate'{$ENDIF},
  StringList_EndUpdate {$IFNDEF MSWINDOWS}name '_StringList_EndUpdate'{$ENDIF},
  StringList_Equals {$IFNDEF MSWINDOWS}name '_StringList_Equals'{$ENDIF},
  StringList_IndexOfName {$IFNDEF MSWINDOWS}name '_StringList_IndexOfName'{$ENDIF},
  StringList_IndexOfObject {$IFNDEF MSWINDOWS}name '_StringList_IndexOfObject'{$ENDIF},
  StringList_LoadFromFile {$IFNDEF MSWINDOWS}name '_StringList_LoadFromFile'{$ENDIF},
  StringList_LoadFromStream {$IFNDEF MSWINDOWS}name '_StringList_LoadFromStream'{$ENDIF},
  StringList_Move {$IFNDEF MSWINDOWS}name '_StringList_Move'{$ENDIF},
  StringList_SaveToFile {$IFNDEF MSWINDOWS}name '_StringList_SaveToFile'{$ENDIF},
  StringList_SaveToStream {$IFNDEF MSWINDOWS}name '_StringList_SaveToStream'{$ENDIF},
  StringList_GetNamePath {$IFNDEF MSWINDOWS}name '_StringList_GetNamePath'{$ENDIF},
  StringList_ClassName {$IFNDEF MSWINDOWS}name '_StringList_ClassName'{$ENDIF},
  StringList_GetHashCode {$IFNDEF MSWINDOWS}name '_StringList_GetHashCode'{$ENDIF},
  StringList_ToString {$IFNDEF MSWINDOWS}name '_StringList_ToString'{$ENDIF},
  StringList_GetSorted {$IFNDEF MSWINDOWS}name '_StringList_GetSorted'{$ENDIF},
  StringList_SetSorted {$IFNDEF MSWINDOWS}name '_StringList_SetSorted'{$ENDIF},
  StringList_SetOnChange {$IFNDEF MSWINDOWS}name '_StringList_SetOnChange'{$ENDIF},
  StringList_GetCommaText {$IFNDEF MSWINDOWS}name '_StringList_GetCommaText'{$ENDIF},
  StringList_SetCommaText {$IFNDEF MSWINDOWS}name '_StringList_SetCommaText'{$ENDIF},
  StringList_GetDelimiter {$IFNDEF MSWINDOWS}name '_StringList_GetDelimiter'{$ENDIF},
  StringList_SetDelimiter {$IFNDEF MSWINDOWS}name '_StringList_SetDelimiter'{$ENDIF},
  StringList_GetText {$IFNDEF MSWINDOWS}name '_StringList_GetText'{$ENDIF},
  StringList_SetText {$IFNDEF MSWINDOWS}name '_StringList_SetText'{$ENDIF},
  StringList_GetWriteBOM {$IFNDEF MSWINDOWS}name '_StringList_GetWriteBOM'{$ENDIF},
  StringList_SetWriteBOM {$IFNDEF MSWINDOWS}name '_StringList_SetWriteBOM'{$ENDIF},
  //StringList_GetOptions {$IFNDEF MSWINDOWS}name '_StringList_GetOptions'{$ENDIF},
  //StringList_SetOptions {$IFNDEF MSWINDOWS}name '_StringList_SetOptions'{$ENDIF},
  StringList_GetValues {$IFNDEF MSWINDOWS}name '_StringList_GetValues'{$ENDIF},
  StringList_SetValues {$IFNDEF MSWINDOWS}name '_StringList_SetValues'{$ENDIF},
  StringList_GetValueFromIndex {$IFNDEF MSWINDOWS}name '_StringList_GetValueFromIndex'{$ENDIF},
  StringList_SetValueFromIndex {$IFNDEF MSWINDOWS}name '_StringList_SetValueFromIndex'{$ENDIF},
  StringList_GetStrings {$IFNDEF MSWINDOWS}name '_StringList_GetStrings'{$ENDIF},
  StringList_SetStrings {$IFNDEF MSWINDOWS}name '_StringList_SetStrings'{$ENDIF};

