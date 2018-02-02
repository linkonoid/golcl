
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Strings_Create: TStrings; cdecl;
begin
  Result :=  TStrings.Create;
end;

procedure Strings_Free(AObj: TStrings); cdecl;
begin
  AObj.Free;
end;

function Strings_Add(AObj: TStrings; S: PWideChar): Integer; cdecl;
begin
  Result :=  AObj.Add(S);
end;

function Strings_AddObject(AObj: TStrings; S: PWideChar; AObject: TObject): Integer; cdecl;
begin
  Result :=  AObj.AddObject(S, AObject);
end;

procedure Strings_Append(AObj: TStrings; S: PWideChar); cdecl;
begin
  AObj.Append(S);
end;

procedure Strings_Assign(AObj: TStrings; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure Strings_BeginUpdate(AObj: TStrings); cdecl;
begin
  AObj.BeginUpdate;
end;

procedure Strings_Clear(AObj: TStrings); cdecl;
begin
  AObj.Clear;
end;

procedure Strings_Delete(AObj: TStrings; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

procedure Strings_EndUpdate(AObj: TStrings); cdecl;
begin
  AObj.EndUpdate;
end;

function Strings_Equals(AObj: TStrings; Strings: TStrings): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Strings);
end;

function Strings_IndexOf(AObj: TStrings; S: PWideChar): Integer; cdecl;
begin
  Result :=  AObj.IndexOf(S);
end;

function Strings_IndexOfName(AObj: TStrings; Name: PWideChar): Integer; cdecl;
begin
  Result :=  AObj.IndexOfName(Name);
end;

function Strings_IndexOfObject(AObj: TStrings; AObject: TObject): Integer; cdecl;
begin
  Result :=  AObj.IndexOfObject(AObject);
end;

procedure Strings_Insert(AObj: TStrings; Index: Integer; S: PWideChar); cdecl;
begin
  AObj.Insert(Index, S);
end;

procedure Strings_InsertObject(AObj: TStrings; Index: Integer; S: PWideChar; AObject: TObject); cdecl;
begin
  AObj.InsertObject(Index, S, AObject);
end;

procedure Strings_LoadFromFile(AObj: TStrings; FileName: PWideChar); cdecl;
begin
  AObj.LoadFromFile(FileName);
end;

procedure Strings_LoadFromStream(AObj: TStrings; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure Strings_Move(AObj: TStrings; CurIndex: Integer; NewIndex: Integer); cdecl;
begin
  AObj.Move(CurIndex, NewIndex);
end;

procedure Strings_SaveToFile(AObj: TStrings; FileName: PWideChar); cdecl;
begin
  AObj.SaveToFile(FileName);
end;

procedure Strings_SaveToStream(AObj: TStrings; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

function Strings_GetNamePath(AObj: TStrings): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Strings_ClassName(AObj: TStrings): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Strings_GetHashCode(AObj: TStrings): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Strings_ToString(AObj: TStrings): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Strings_GetCommaText(AObj: TStrings): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.CommaText);
end;

procedure Strings_SetCommaText(AObj: TStrings; AValue: PWideChar); cdecl;
begin
  AObj.CommaText := AValue;
end;

function Strings_GetDelimiter(AObj: TStrings): Char; cdecl;
begin
  Result :=  AObj.Delimiter;
end;

procedure Strings_SetDelimiter(AObj: TStrings; AValue: Char); cdecl;
begin
  AObj.Delimiter := AValue;
end;

function Strings_GetText(AObj: TStrings): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Text);
end;

procedure Strings_SetText(AObj: TStrings; AValue: PWideChar); cdecl;
begin
  AObj.Text := AValue;
end;

function Strings_GetWriteBOM(AObj: TStrings): LongBool; cdecl;
begin
  Result :=  AObj.WriteBOM;
end;

procedure Strings_SetWriteBOM(AObj: TStrings; AValue: LongBool); cdecl;
begin
  AObj.WriteBOM := AValue;
end;

//function Strings_GetOptions(AObj: TStrings): TStringsOptions; cdecl;
//begin
//  Result :=  AObj.Options;
//end;
//
//procedure Strings_SetOptions(AObj: TStrings; AValue: TStringsOptions); cdecl;
//begin
//  AObj.Options := AValue;
//end;

function Strings_GetValues(AObj: TStrings; Name: PWideChar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Values[Name]);
end;

procedure Strings_SetValues(AObj: TStrings; Name: string; AValue: PWideChar); cdecl;
begin
  AObj.Values[Name] := AValue;
end;

function Strings_GetValueFromIndex(AObj: TStrings; Index: Integer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ValueFromIndex[Index]);
end;

procedure Strings_SetValueFromIndex(AObj: TStrings; Index: Integer; AValue: PWideChar); cdecl;
begin
  AObj.ValueFromIndex[Index] := AValue;
end;

function Strings_GetStrings(AObj: TStrings; Index: Integer): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Strings[Index]);
end;

procedure Strings_SetStrings(AObj: TStrings; Index: Integer; AValue: PWideChar); cdecl;
begin
  AObj.Strings[Index] := AValue;
end;


exports
  Strings_Create {$IFNDEF MSWINDOWS}name '_Strings_Create'{$ENDIF},
  Strings_Free {$IFNDEF MSWINDOWS}name '_Strings_Free'{$ENDIF},
  Strings_Add {$IFNDEF MSWINDOWS}name '_Strings_Add'{$ENDIF},
  Strings_AddObject {$IFNDEF MSWINDOWS}name '_Strings_AddObject'{$ENDIF},
  Strings_Append {$IFNDEF MSWINDOWS}name '_Strings_Append'{$ENDIF},
  Strings_Assign {$IFNDEF MSWINDOWS}name '_Strings_Assign'{$ENDIF},
  Strings_BeginUpdate {$IFNDEF MSWINDOWS}name '_Strings_BeginUpdate'{$ENDIF},
  Strings_Clear {$IFNDEF MSWINDOWS}name '_Strings_Clear'{$ENDIF},
  Strings_Delete {$IFNDEF MSWINDOWS}name '_Strings_Delete'{$ENDIF},
  Strings_EndUpdate {$IFNDEF MSWINDOWS}name '_Strings_EndUpdate'{$ENDIF},
  Strings_Equals {$IFNDEF MSWINDOWS}name '_Strings_Equals'{$ENDIF},
  Strings_IndexOf {$IFNDEF MSWINDOWS}name '_Strings_IndexOf'{$ENDIF},
  Strings_IndexOfName {$IFNDEF MSWINDOWS}name '_Strings_IndexOfName'{$ENDIF},
  Strings_IndexOfObject {$IFNDEF MSWINDOWS}name '_Strings_IndexOfObject'{$ENDIF},
  Strings_Insert {$IFNDEF MSWINDOWS}name '_Strings_Insert'{$ENDIF},
  Strings_InsertObject {$IFNDEF MSWINDOWS}name '_Strings_InsertObject'{$ENDIF},
  Strings_LoadFromFile {$IFNDEF MSWINDOWS}name '_Strings_LoadFromFile'{$ENDIF},
  Strings_LoadFromStream {$IFNDEF MSWINDOWS}name '_Strings_LoadFromStream'{$ENDIF},
  Strings_Move {$IFNDEF MSWINDOWS}name '_Strings_Move'{$ENDIF},
  Strings_SaveToFile {$IFNDEF MSWINDOWS}name '_Strings_SaveToFile'{$ENDIF},
  Strings_SaveToStream {$IFNDEF MSWINDOWS}name '_Strings_SaveToStream'{$ENDIF},
  Strings_GetNamePath {$IFNDEF MSWINDOWS}name '_Strings_GetNamePath'{$ENDIF},
  Strings_ClassName {$IFNDEF MSWINDOWS}name '_Strings_ClassName'{$ENDIF},
  Strings_GetHashCode {$IFNDEF MSWINDOWS}name '_Strings_GetHashCode'{$ENDIF},
  Strings_ToString {$IFNDEF MSWINDOWS}name '_Strings_ToString'{$ENDIF},
  Strings_GetCommaText {$IFNDEF MSWINDOWS}name '_Strings_GetCommaText'{$ENDIF},
  Strings_SetCommaText {$IFNDEF MSWINDOWS}name '_Strings_SetCommaText'{$ENDIF},
  Strings_GetDelimiter {$IFNDEF MSWINDOWS}name '_Strings_GetDelimiter'{$ENDIF},
  Strings_SetDelimiter {$IFNDEF MSWINDOWS}name '_Strings_SetDelimiter'{$ENDIF},
  Strings_GetText {$IFNDEF MSWINDOWS}name '_Strings_GetText'{$ENDIF},
  Strings_SetText {$IFNDEF MSWINDOWS}name '_Strings_SetText'{$ENDIF},
  Strings_GetWriteBOM {$IFNDEF MSWINDOWS}name '_Strings_GetWriteBOM'{$ENDIF},
  Strings_SetWriteBOM {$IFNDEF MSWINDOWS}name '_Strings_SetWriteBOM'{$ENDIF},
  //Strings_GetOptions {$IFNDEF MSWINDOWS}name '_Strings_GetOptions'{$ENDIF},
  //Strings_SetOptions {$IFNDEF MSWINDOWS}name '_Strings_SetOptions'{$ENDIF},
  Strings_GetValues {$IFNDEF MSWINDOWS}name '_Strings_GetValues'{$ENDIF},
  Strings_SetValues {$IFNDEF MSWINDOWS}name '_Strings_SetValues'{$ENDIF},
  Strings_GetValueFromIndex {$IFNDEF MSWINDOWS}name '_Strings_GetValueFromIndex'{$ENDIF},
  Strings_SetValueFromIndex {$IFNDEF MSWINDOWS}name '_Strings_SetValueFromIndex'{$ENDIF},
  Strings_GetStrings {$IFNDEF MSWINDOWS}name '_Strings_GetStrings'{$ENDIF},
  Strings_SetStrings {$IFNDEF MSWINDOWS}name '_Strings_SetStrings'{$ENDIF};

