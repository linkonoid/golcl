
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Clipboard_Create: TClipboard; cdecl;
begin
  Result :=  TClipboard.Create;
end;

procedure Clipboard_Free(AObj: TClipboard); cdecl;
begin
  AObj.Free;
end;

procedure Clipboard_Assign(AObj: TClipboard; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

procedure Clipboard_Clear(AObj: TClipboard); cdecl;
begin
  AObj.Clear;
end;

procedure Clipboard_Close(AObj: TClipboard); cdecl;
begin
  AObj.Close;
end;

//function Clipboard_GetAsHandle(AObj: TClipboard; Format: Word): NativeUInt; cdecl;
//begin
//  Result :=  AObj.GetAsHandle(Format);
//end;

function Clipboard_HasFormat(AObj: TClipboard; Format: Word): LongBool; cdecl;
begin
  Result :=  AObj.HasFormat(Format);
end;

procedure Clipboard_Open(AObj: TClipboard); cdecl;
begin
  AObj.Open;
end;

//procedure Clipboard_SetAsHandle(AObj: TClipboard; Format: Word; Value: NativeUInt); cdecl;
//begin
//  AObj.SetAsHandle(Format, Value);
//end;
//
//function Clipboard_GetTextBuf(AObj: TClipboard; Buffer: PWideChar; BufSize: Integer): Integer; cdecl;
//begin
//  Result :=  AObj.GetTextBuf(Buffer, BufSize);
//end;

function Clipboard_GetNamePath(AObj: TClipboard): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Clipboard_ClassName(AObj: TClipboard): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Clipboard_Equals(AObj: TClipboard; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Clipboard_GetHashCode(AObj: TClipboard): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Clipboard_ToString(AObj: TClipboard): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Clipboard_GetAsText(AObj: TClipboard): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.AsText);
end;

procedure Clipboard_SetAsText(AObj: TClipboard; AValue: PWideChar); cdecl;
begin
  AObj.AsText := AValue;
end;

function Clipboard_GetFormatCount(AObj: TClipboard): Integer; cdecl;
begin
  Result :=  AObj.FormatCount;
end;

function Clipboard_GetFormats(AObj: TClipboard; Index: Integer): Word; cdecl;
begin
  Result :=  AObj.Formats[Index];
end;


exports
  Clipboard_Create {$IFNDEF MSWINDOWS}name '_Clipboard_Create'{$ENDIF},
  Clipboard_Free {$IFNDEF MSWINDOWS}name '_Clipboard_Free'{$ENDIF},
  Clipboard_Assign {$IFNDEF MSWINDOWS}name '_Clipboard_Assign'{$ENDIF},
  Clipboard_Clear {$IFNDEF MSWINDOWS}name '_Clipboard_Clear'{$ENDIF},
  Clipboard_Close {$IFNDEF MSWINDOWS}name '_Clipboard_Close'{$ENDIF},
  //Clipboard_GetAsHandle {$IFNDEF MSWINDOWS}name '_Clipboard_GetAsHandle'{$ENDIF},
  Clipboard_HasFormat {$IFNDEF MSWINDOWS}name '_Clipboard_HasFormat'{$ENDIF},
  Clipboard_Open {$IFNDEF MSWINDOWS}name '_Clipboard_Open'{$ENDIF},
  //Clipboard_SetAsHandle {$IFNDEF MSWINDOWS}name '_Clipboard_SetAsHandle'{$ENDIF},
  //Clipboard_GetTextBuf {$IFNDEF MSWINDOWS}name '_Clipboard_GetTextBuf'{$ENDIF},
  Clipboard_GetNamePath {$IFNDEF MSWINDOWS}name '_Clipboard_GetNamePath'{$ENDIF},
  Clipboard_ClassName {$IFNDEF MSWINDOWS}name '_Clipboard_ClassName'{$ENDIF},
  Clipboard_Equals {$IFNDEF MSWINDOWS}name '_Clipboard_Equals'{$ENDIF},
  Clipboard_GetHashCode {$IFNDEF MSWINDOWS}name '_Clipboard_GetHashCode'{$ENDIF},
  Clipboard_ToString {$IFNDEF MSWINDOWS}name '_Clipboard_ToString'{$ENDIF},
  Clipboard_GetAsText {$IFNDEF MSWINDOWS}name '_Clipboard_GetAsText'{$ENDIF},
  Clipboard_SetAsText {$IFNDEF MSWINDOWS}name '_Clipboard_SetAsText'{$ENDIF},
  Clipboard_GetFormatCount {$IFNDEF MSWINDOWS}name '_Clipboard_GetFormatCount'{$ENDIF},
  Clipboard_GetFormats {$IFNDEF MSWINDOWS}name '_Clipboard_GetFormats'{$ENDIF};

