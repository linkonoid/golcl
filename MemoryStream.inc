
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function MemoryStream_Create: TMemoryStream; cdecl;
begin
  Result :=  TMemoryStream.Create;
end;

procedure MemoryStream_Free(AObj: TMemoryStream); cdecl;
begin
  AObj.Free;
end;

procedure MemoryStream_Clear(AObj: TMemoryStream); cdecl;
begin
  AObj.Clear;
end;

procedure MemoryStream_LoadFromStream(AObj: TMemoryStream; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure MemoryStream_LoadFromFile(AObj: TMemoryStream; FileName: PWideChar); cdecl;
begin
  AObj.LoadFromFile(FileName);
end;

procedure MemoryStream_Seek(AObj: TMemoryStream; var Offset: Int64; Origin: TSeekOrigin; var Result: Int64); cdecl;
begin
  Result :=  AObj.Seek(Offset, Origin);
end;

procedure MemoryStream_SaveToStream(AObj: TMemoryStream; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

procedure MemoryStream_SaveToFile(AObj: TMemoryStream; FileName: PWideChar); cdecl;
begin
  AObj.SaveToFile(FileName);
end;

procedure MemoryStream_CopyFrom(AObj: TMemoryStream; Source: TStream; var Count: Int64; var Result: Int64); cdecl;
begin
  Result :=  AObj.CopyFrom(Source, Count);
end;

function MemoryStream_ClassName(AObj: TMemoryStream): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function MemoryStream_Equals(AObj: TMemoryStream; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function MemoryStream_GetHashCode(AObj: TMemoryStream): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function MemoryStream_ToString(AObj: TMemoryStream): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function MemoryStream_GetMemory(AObj: TMemoryStream): Pointer; cdecl;
begin
  Result :=  AObj.Memory;
end;

procedure MemoryStream_GetPosition(AObj: TMemoryStream; var Result: Int64); cdecl;
begin
  Result :=  AObj.Position;
end;

procedure MemoryStream_SetPosition(AObj: TMemoryStream; var AValue: Int64); cdecl;
begin
  AObj.Position := AValue;
end;

procedure MemoryStream_GetSize(AObj: TMemoryStream; var Result: Int64); cdecl;
begin
  Result :=  AObj.Size;
end;

procedure MemoryStream_SetSize(AObj: TMemoryStream; var AValue: Int64); cdecl;
begin
  AObj.Size := AValue;
end;


exports
  MemoryStream_Create {$IFNDEF MSWINDOWS}name '_MemoryStream_Create'{$ENDIF},
  MemoryStream_Free {$IFNDEF MSWINDOWS}name '_MemoryStream_Free'{$ENDIF},
  MemoryStream_Clear {$IFNDEF MSWINDOWS}name '_MemoryStream_Clear'{$ENDIF},
  MemoryStream_LoadFromStream {$IFNDEF MSWINDOWS}name '_MemoryStream_LoadFromStream'{$ENDIF},
  MemoryStream_LoadFromFile {$IFNDEF MSWINDOWS}name '_MemoryStream_LoadFromFile'{$ENDIF},
  MemoryStream_Seek {$IFNDEF MSWINDOWS}name '_MemoryStream_Seek'{$ENDIF},
  MemoryStream_SaveToStream {$IFNDEF MSWINDOWS}name '_MemoryStream_SaveToStream'{$ENDIF},
  MemoryStream_SaveToFile {$IFNDEF MSWINDOWS}name '_MemoryStream_SaveToFile'{$ENDIF},
  MemoryStream_CopyFrom {$IFNDEF MSWINDOWS}name '_MemoryStream_CopyFrom'{$ENDIF},
  MemoryStream_ClassName {$IFNDEF MSWINDOWS}name '_MemoryStream_ClassName'{$ENDIF},
  MemoryStream_Equals {$IFNDEF MSWINDOWS}name '_MemoryStream_Equals'{$ENDIF},
  MemoryStream_GetHashCode {$IFNDEF MSWINDOWS}name '_MemoryStream_GetHashCode'{$ENDIF},
  MemoryStream_ToString {$IFNDEF MSWINDOWS}name '_MemoryStream_ToString'{$ENDIF},
  MemoryStream_GetMemory {$IFNDEF MSWINDOWS}name '_MemoryStream_GetMemory'{$ENDIF},
  MemoryStream_GetPosition {$IFNDEF MSWINDOWS}name '_MemoryStream_GetPosition'{$ENDIF},
  MemoryStream_SetPosition {$IFNDEF MSWINDOWS}name '_MemoryStream_SetPosition'{$ENDIF},
  MemoryStream_GetSize {$IFNDEF MSWINDOWS}name '_MemoryStream_GetSize'{$ENDIF},
  MemoryStream_SetSize {$IFNDEF MSWINDOWS}name '_MemoryStream_SetSize'{$ENDIF};

