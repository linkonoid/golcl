
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function IniFile_Create(AFileName: PWideChar): TIniFile; cdecl;
begin
  Result :=  TIniFile.Create(AFileName);
end;

procedure IniFile_Free(AObj: TIniFile); cdecl;
begin
  AObj.Free;
end;

function IniFile_ReadString(AObj: TIniFile; Section: PWideChar; Ident: PWideChar; Default: PWideChar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ReadString(Section, Ident, Default));
end;

procedure IniFile_WriteString(AObj: TIniFile; Section: PWideChar; Ident: PWideChar; Value: PWideChar); cdecl;
begin
  AObj.WriteString(Section, Ident, Value);
end;

procedure IniFile_ReadSections(AObj: TIniFile; Strings: TStrings); cdecl;
begin
  AObj.ReadSections(Strings);
end;

procedure IniFile_ReadSectionValues(AObj: TIniFile; Section: PWideChar; Strings: TStrings); cdecl;
begin
  AObj.ReadSectionValues(Section, Strings);
end;

procedure IniFile_EraseSection(AObj: TIniFile; Section: PWideChar); cdecl;
begin
  AObj.EraseSection(Section);
end;

procedure IniFile_DeleteKey(AObj: TIniFile; Section: PWideChar; Ident: PWideChar); cdecl;
begin
  AObj.DeleteKey(Section, Ident);
end;

procedure IniFile_UpdateFile(AObj: TIniFile); cdecl;
begin
  AObj.UpdateFile;
end;

function IniFile_SectionExists(AObj: TIniFile; Section: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.SectionExists(Section);
end;

function IniFile_ReadInteger(AObj: TIniFile; Section: PWideChar; Ident: PWideChar; Default: Integer): Integer; cdecl;
begin
  Result :=  AObj.ReadInteger(Section, Ident, Default);
end;

procedure IniFile_WriteInteger(AObj: TIniFile; Section: PWideChar; Ident: PWideChar; Value: Integer); cdecl;
begin
  AObj.WriteInteger(Section, Ident, Value);
end;

function IniFile_ReadBool(AObj: TIniFile; Section: PWideChar; Ident: PWideChar; Default: LongBool): LongBool; cdecl;
begin
  Result :=  AObj.ReadBool(Section, Ident, Default);
end;

procedure IniFile_WriteBool(AObj: TIniFile; Section: PWideChar; Ident: PWideChar; Value: LongBool); cdecl;
begin
  AObj.WriteBool(Section, Ident, Value);
end;

function IniFile_ReadDate(AObj: TIniFile; Section: PWideChar; Name: PWideChar; Default: TUnixDateTime): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.ReadDate(Section, Name, UnixToTime(Default)));
end;

function IniFile_ReadDateTime(AObj: TIniFile; Section: PWideChar; Name: PWideChar; Default: TUnixDateTime): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.ReadDateTime(Section, Name, UnixToTime(Default)));
end;

procedure IniFile_ReadFloat(AObj: TIniFile; Section: PWideChar; Name: PWideChar; var Default: Double; var Result: Double); cdecl;
begin
  Result :=  AObj.ReadFloat(Section, Name, Default);
end;

function IniFile_ReadTime(AObj: TIniFile; Section: PWideChar; Name: PWideChar; Default: TUnixDateTime): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.ReadTime(Section, Name, UnixToTime(Default)));
end;

procedure IniFile_WriteDate(AObj: TIniFile; Section: PWideChar; Name: PWideChar; Value: TUnixDateTime); cdecl;
begin
  AObj.WriteDate(Section, Name, UnixToTime(Value));
end;

procedure IniFile_WriteDateTime(AObj: TIniFile; Section: PWideChar; Name: PWideChar; Value: TUnixDateTime); cdecl;
begin
  AObj.WriteDateTime(Section, Name, UnixToTime(Value));
end;

procedure IniFile_WriteFloat(AObj: TIniFile; Section: PWideChar; Name: PWideChar; var Value: Double); cdecl;
begin
  AObj.WriteFloat(Section, Name, Value);
end;

procedure IniFile_WriteTime(AObj: TIniFile; Section: PWideChar; Name: PWideChar; Value: TUnixDateTime); cdecl;
begin
  AObj.WriteTime(Section, Name, UnixToTime(Value));
end;

//procedure IniFile_ReadSubSections(AObj: TIniFile; Section: PWideChar; Strings: TStrings; Recurse: LongBool); cdecl;
//begin
//  AObj.ReadSubSections(Section, Strings, Recurse);
//end;

function IniFile_ValueExists(AObj: TIniFile; Section: PWideChar; Ident: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.ValueExists(Section, Ident);
end;

function IniFile_ClassName(AObj: TIniFile): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function IniFile_Equals(AObj: TIniFile; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function IniFile_GetHashCode(AObj: TIniFile): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function IniFile_ToString(AObj: TIniFile): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function IniFile_GetFileName(AObj: TIniFile): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.FileName);
end;


exports
  IniFile_Create {$IFNDEF MSWINDOWS}name '_IniFile_Create'{$ENDIF},
  IniFile_Free {$IFNDEF MSWINDOWS}name '_IniFile_Free'{$ENDIF},
  IniFile_ReadString {$IFNDEF MSWINDOWS}name '_IniFile_ReadString'{$ENDIF},
  IniFile_WriteString {$IFNDEF MSWINDOWS}name '_IniFile_WriteString'{$ENDIF},
  IniFile_ReadSections {$IFNDEF MSWINDOWS}name '_IniFile_ReadSections'{$ENDIF},
  IniFile_ReadSectionValues {$IFNDEF MSWINDOWS}name '_IniFile_ReadSectionValues'{$ENDIF},
  IniFile_EraseSection {$IFNDEF MSWINDOWS}name '_IniFile_EraseSection'{$ENDIF},
  IniFile_DeleteKey {$IFNDEF MSWINDOWS}name '_IniFile_DeleteKey'{$ENDIF},
  IniFile_UpdateFile {$IFNDEF MSWINDOWS}name '_IniFile_UpdateFile'{$ENDIF},
  IniFile_SectionExists {$IFNDEF MSWINDOWS}name '_IniFile_SectionExists'{$ENDIF},
  IniFile_ReadInteger {$IFNDEF MSWINDOWS}name '_IniFile_ReadInteger'{$ENDIF},
  IniFile_WriteInteger {$IFNDEF MSWINDOWS}name '_IniFile_WriteInteger'{$ENDIF},
  IniFile_ReadBool {$IFNDEF MSWINDOWS}name '_IniFile_ReadBool'{$ENDIF},
  IniFile_WriteBool {$IFNDEF MSWINDOWS}name '_IniFile_WriteBool'{$ENDIF},
  IniFile_ReadDate {$IFNDEF MSWINDOWS}name '_IniFile_ReadDate'{$ENDIF},
  IniFile_ReadDateTime {$IFNDEF MSWINDOWS}name '_IniFile_ReadDateTime'{$ENDIF},
  IniFile_ReadFloat {$IFNDEF MSWINDOWS}name '_IniFile_ReadFloat'{$ENDIF},
  IniFile_ReadTime {$IFNDEF MSWINDOWS}name '_IniFile_ReadTime'{$ENDIF},
  IniFile_WriteDate {$IFNDEF MSWINDOWS}name '_IniFile_WriteDate'{$ENDIF},
  IniFile_WriteDateTime {$IFNDEF MSWINDOWS}name '_IniFile_WriteDateTime'{$ENDIF},
  IniFile_WriteFloat {$IFNDEF MSWINDOWS}name '_IniFile_WriteFloat'{$ENDIF},
  IniFile_WriteTime {$IFNDEF MSWINDOWS}name '_IniFile_WriteTime'{$ENDIF},
  //IniFile_ReadSubSections {$IFNDEF MSWINDOWS}name '_IniFile_ReadSubSections'{$ENDIF},
  IniFile_ValueExists {$IFNDEF MSWINDOWS}name '_IniFile_ValueExists'{$ENDIF},
  IniFile_ClassName {$IFNDEF MSWINDOWS}name '_IniFile_ClassName'{$ENDIF},
  IniFile_Equals {$IFNDEF MSWINDOWS}name '_IniFile_Equals'{$ENDIF},
  IniFile_GetHashCode {$IFNDEF MSWINDOWS}name '_IniFile_GetHashCode'{$ENDIF},
  IniFile_ToString {$IFNDEF MSWINDOWS}name '_IniFile_ToString'{$ENDIF},
  IniFile_GetFileName {$IFNDEF MSWINDOWS}name '_IniFile_GetFileName'{$ENDIF};

