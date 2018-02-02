
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Registry_Create(AAccess: LongWord): TRegistry; cdecl;
begin
  Result :=  TRegistry.Create(AAccess);
end;

procedure Registry_Free(AObj: TRegistry); cdecl;
begin
  AObj.Free;
end;

procedure Registry_CloseKey(AObj: TRegistry); cdecl;
begin
  AObj.CloseKey;
end;

function Registry_CreateKey(AObj: TRegistry; Key: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.CreateKey(Key);
end;

function Registry_DeleteKey(AObj: TRegistry; Key: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.DeleteKey(Key);
end;

function Registry_DeleteValue(AObj: TRegistry; Name: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.DeleteValue(Name);
end;

function Registry_HasSubKeys(AObj: TRegistry): LongBool; cdecl;
begin
  Result :=  AObj.HasSubKeys;
end;

function Registry_KeyExists(AObj: TRegistry; Key: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.KeyExists(Key);
end;

function Registry_LoadKey(AObj: TRegistry; Key: PWideChar; FileName: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.LoadKey(Key, FileName);
end;

procedure Registry_MoveKey(AObj: TRegistry; OldName: PWideChar; NewName: PWideChar; Delete: LongBool); cdecl;
begin
  AObj.MoveKey(OldName, NewName, Delete);
end;

function Registry_OpenKey(AObj: TRegistry; Key: PWideChar; CanCreate: LongBool): LongBool; cdecl;
begin
  Result :=  AObj.OpenKey(Key, CanCreate);
end;

function Registry_OpenKeyReadOnly(AObj: TRegistry; Key: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.OpenKeyReadOnly(Key);
end;

function Registry_ReadBool(AObj: TRegistry; Name: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.ReadBool(Name);
end;

function Registry_ReadDate(AObj: TRegistry; Name: PWideChar): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.ReadDate(Name));
end;

function Registry_ReadDateTime(AObj: TRegistry; Name: PWideChar): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.ReadDateTime(Name));
end;

procedure Registry_ReadFloat(AObj: TRegistry; Name: PWideChar; var Result: Double); cdecl;
begin
  Result :=  AObj.ReadFloat(Name);
end;

function Registry_ReadInteger(AObj: TRegistry; Name: PWideChar): Integer; cdecl;
begin
  Result :=  AObj.ReadInteger(Name);
end;

function Registry_ReadString(AObj: TRegistry; Name: PWideChar): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ReadString(Name));
end;

function Registry_ReadTime(AObj: TRegistry; Name: PWideChar): TUnixDateTime; cdecl;
begin
  Result :=  ToUnixTime(AObj.ReadTime(Name));
end;

function Registry_RegistryConnect(AObj: TRegistry; UNCName: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.RegistryConnect(UNCName);
end;

procedure Registry_RenameValue(AObj: TRegistry; OldName: PWideChar; NewName: PWideChar); cdecl;
begin
  AObj.RenameValue(OldName, NewName);
end;

function Registry_ReplaceKey(AObj: TRegistry; Key: PWideChar; FileName: PWideChar; BackUpFileName: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.ReplaceKey(Key, FileName, BackUpFileName);
end;

function Registry_RestoreKey(AObj: TRegistry; Key: PWideChar; FileName: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.RestoreKey(Key, FileName);
end;

function Registry_SaveKey(AObj: TRegistry; Key: PWideChar; FileName: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.SaveKey(Key, FileName);
end;

function Registry_UnLoadKey(AObj: TRegistry; Key: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.UnLoadKey(Key);
end;

function Registry_ValueExists(AObj: TRegistry; Name: PWideChar): LongBool; cdecl;
begin
  Result :=  AObj.ValueExists(Name);
end;

procedure Registry_WriteBool(AObj: TRegistry; Name: PWideChar; Value: LongBool); cdecl;
begin
  AObj.WriteBool(Name, Value);
end;

procedure Registry_WriteDate(AObj: TRegistry; Name: PWideChar; Value: TUnixDateTime); cdecl;
begin
  AObj.WriteDate(Name, UnixToTime(Value));
end;

procedure Registry_WriteDateTime(AObj: TRegistry; Name: PWideChar; Value: TUnixDateTime); cdecl;
begin
  AObj.WriteDateTime(Name, UnixToTime(Value));
end;

procedure Registry_WriteFloat(AObj: TRegistry; Name: PWideChar; var Value: Double); cdecl;
begin
  AObj.WriteFloat(Name, Value);
end;

procedure Registry_WriteInteger(AObj: TRegistry; Name: PWideChar; Value: Integer); cdecl;
begin
  AObj.WriteInteger(Name, Value);
end;

procedure Registry_WriteString(AObj: TRegistry; Name: PWideChar; Value: PWideChar); cdecl;
begin
  AObj.WriteString(Name, Value);
end;

procedure Registry_WriteExpandString(AObj: TRegistry; Name: PWideChar; Value: PWideChar); cdecl;
begin
  AObj.WriteExpandString(Name, Value);
end;

procedure Registry_WriteTime(AObj: TRegistry; Name: PWideChar; Value: TUnixDateTime); cdecl;
begin
  AObj.WriteTime(Name, UnixToTime(Value));
end;

function Registry_ClassName(AObj: TRegistry): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Registry_Equals(AObj: TRegistry; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Registry_GetHashCode(AObj: TRegistry): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Registry_ToString(AObj: TRegistry): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Registry_GetCurrentKey(AObj: TRegistry): HKEY; cdecl;
begin
  Result :=  AObj.CurrentKey;
end;

function Registry_GetCurrentPath(AObj: TRegistry): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.CurrentPath);
end;

function Registry_GetLazyWrite(AObj: TRegistry): LongBool; cdecl;
begin
  Result :=  AObj.LazyWrite;
end;

procedure Registry_SetLazyWrite(AObj: TRegistry; AValue: LongBool); cdecl;
begin
  AObj.LazyWrite := AValue;
end;

function Registry_GetLastError(AObj: TRegistry): Integer; cdecl;
begin
  Result :=  AObj.LastError;
end;

function Registry_GetLastErrorMsg(AObj: TRegistry): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.LastErrorMsg);
end;

function Registry_GetRootKey(AObj: TRegistry): HKEY; cdecl;
begin
  Result :=  AObj.RootKey;
end;

procedure Registry_SetRootKey(AObj: TRegistry; AValue: HKEY); cdecl;
begin
  AObj.RootKey := AValue;
end;

//function Registry_GetRootKeyName(AObj: TRegistry): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.RootKeyName);
//end;

function Registry_GetAccess(AObj: TRegistry): Cardinal; cdecl;
begin
  Result :=  AObj.Access;
end;

procedure Registry_SetAccess(AObj: TRegistry; AValue: Cardinal); cdecl;
begin
  AObj.Access := AValue;
end;


exports
  Registry_Create {$IFNDEF MSWINDOWS}name '_Registry_Create'{$ENDIF},
  Registry_Free {$IFNDEF MSWINDOWS}name '_Registry_Free'{$ENDIF},
  Registry_CloseKey {$IFNDEF MSWINDOWS}name '_Registry_CloseKey'{$ENDIF},
  Registry_CreateKey {$IFNDEF MSWINDOWS}name '_Registry_CreateKey'{$ENDIF},
  Registry_DeleteKey {$IFNDEF MSWINDOWS}name '_Registry_DeleteKey'{$ENDIF},
  Registry_DeleteValue {$IFNDEF MSWINDOWS}name '_Registry_DeleteValue'{$ENDIF},
  Registry_HasSubKeys {$IFNDEF MSWINDOWS}name '_Registry_HasSubKeys'{$ENDIF},
  Registry_KeyExists {$IFNDEF MSWINDOWS}name '_Registry_KeyExists'{$ENDIF},
  Registry_LoadKey {$IFNDEF MSWINDOWS}name '_Registry_LoadKey'{$ENDIF},
  Registry_MoveKey {$IFNDEF MSWINDOWS}name '_Registry_MoveKey'{$ENDIF},
  Registry_OpenKey {$IFNDEF MSWINDOWS}name '_Registry_OpenKey'{$ENDIF},
  Registry_OpenKeyReadOnly {$IFNDEF MSWINDOWS}name '_Registry_OpenKeyReadOnly'{$ENDIF},
  Registry_ReadBool {$IFNDEF MSWINDOWS}name '_Registry_ReadBool'{$ENDIF},
  Registry_ReadDate {$IFNDEF MSWINDOWS}name '_Registry_ReadDate'{$ENDIF},
  Registry_ReadDateTime {$IFNDEF MSWINDOWS}name '_Registry_ReadDateTime'{$ENDIF},
  Registry_ReadFloat {$IFNDEF MSWINDOWS}name '_Registry_ReadFloat'{$ENDIF},
  Registry_ReadInteger {$IFNDEF MSWINDOWS}name '_Registry_ReadInteger'{$ENDIF},
  Registry_ReadString {$IFNDEF MSWINDOWS}name '_Registry_ReadString'{$ENDIF},
  Registry_ReadTime {$IFNDEF MSWINDOWS}name '_Registry_ReadTime'{$ENDIF},
  Registry_RegistryConnect {$IFNDEF MSWINDOWS}name '_Registry_RegistryConnect'{$ENDIF},
  Registry_RenameValue {$IFNDEF MSWINDOWS}name '_Registry_RenameValue'{$ENDIF},
  Registry_ReplaceKey {$IFNDEF MSWINDOWS}name '_Registry_ReplaceKey'{$ENDIF},
  Registry_RestoreKey {$IFNDEF MSWINDOWS}name '_Registry_RestoreKey'{$ENDIF},
  Registry_SaveKey {$IFNDEF MSWINDOWS}name '_Registry_SaveKey'{$ENDIF},
  Registry_UnLoadKey {$IFNDEF MSWINDOWS}name '_Registry_UnLoadKey'{$ENDIF},
  Registry_ValueExists {$IFNDEF MSWINDOWS}name '_Registry_ValueExists'{$ENDIF},
  Registry_WriteBool {$IFNDEF MSWINDOWS}name '_Registry_WriteBool'{$ENDIF},
  Registry_WriteDate {$IFNDEF MSWINDOWS}name '_Registry_WriteDate'{$ENDIF},
  Registry_WriteDateTime {$IFNDEF MSWINDOWS}name '_Registry_WriteDateTime'{$ENDIF},
  Registry_WriteFloat {$IFNDEF MSWINDOWS}name '_Registry_WriteFloat'{$ENDIF},
  Registry_WriteInteger {$IFNDEF MSWINDOWS}name '_Registry_WriteInteger'{$ENDIF},
  Registry_WriteString {$IFNDEF MSWINDOWS}name '_Registry_WriteString'{$ENDIF},
  Registry_WriteExpandString {$IFNDEF MSWINDOWS}name '_Registry_WriteExpandString'{$ENDIF},
  Registry_WriteTime {$IFNDEF MSWINDOWS}name '_Registry_WriteTime'{$ENDIF},
  Registry_ClassName {$IFNDEF MSWINDOWS}name '_Registry_ClassName'{$ENDIF},
  Registry_Equals {$IFNDEF MSWINDOWS}name '_Registry_Equals'{$ENDIF},
  Registry_GetHashCode {$IFNDEF MSWINDOWS}name '_Registry_GetHashCode'{$ENDIF},
  Registry_ToString {$IFNDEF MSWINDOWS}name '_Registry_ToString'{$ENDIF},
  Registry_GetCurrentKey {$IFNDEF MSWINDOWS}name '_Registry_GetCurrentKey'{$ENDIF},
  Registry_GetCurrentPath {$IFNDEF MSWINDOWS}name '_Registry_GetCurrentPath'{$ENDIF},
  Registry_GetLazyWrite {$IFNDEF MSWINDOWS}name '_Registry_GetLazyWrite'{$ENDIF},
  Registry_SetLazyWrite {$IFNDEF MSWINDOWS}name '_Registry_SetLazyWrite'{$ENDIF},
  Registry_GetLastError {$IFNDEF MSWINDOWS}name '_Registry_GetLastError'{$ENDIF},
  Registry_GetLastErrorMsg {$IFNDEF MSWINDOWS}name '_Registry_GetLastErrorMsg'{$ENDIF},
  Registry_GetRootKey {$IFNDEF MSWINDOWS}name '_Registry_GetRootKey'{$ENDIF},
  Registry_SetRootKey {$IFNDEF MSWINDOWS}name '_Registry_SetRootKey'{$ENDIF},
  //Registry_GetRootKeyName {$IFNDEF MSWINDOWS}name '_Registry_GetRootKeyName'{$ENDIF},
  Registry_GetAccess {$IFNDEF MSWINDOWS}name '_Registry_GetAccess'{$ENDIF},
  Registry_SetAccess {$IFNDEF MSWINDOWS}name '_Registry_SetAccess'{$ENDIF};

