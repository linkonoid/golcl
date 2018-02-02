
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Graphic_Create: TGraphic; cdecl;
begin
  Result :=  TGraphic.Create;
end;

procedure Graphic_Free(AObj: TGraphic); cdecl;
begin
  AObj.Free;
end;

function Graphic_Equals(AObj: TGraphic; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

procedure Graphic_LoadFromFile(AObj: TGraphic; Filename: PWideChar); cdecl;
begin
  AObj.LoadFromFile(Filename);
end;

procedure Graphic_SaveToFile(AObj: TGraphic; Filename: PWideChar); cdecl;
begin
  AObj.SaveToFile(Filename);
end;

procedure Graphic_LoadFromStream(AObj: TGraphic; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure Graphic_SaveToStream(AObj: TGraphic; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

//procedure Graphic_SetSize(AObj: TGraphic; AWidth: Integer; AHeight: Integer); cdecl;
//begin
  //AObj.SetSize(AWidth, AHeight);
//end;

procedure Graphic_Assign(AObj: TGraphic; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Graphic_GetNamePath(AObj: TGraphic): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Graphic_ClassName(AObj: TGraphic): PWideChar; cdecl;
var
s : shortstring;
begin
  s := AObj.ClassName + #0;
  Result :=  @s[1];
end;

function Graphic_GetHashCode(AObj: TGraphic): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Graphic_ToString(AObj: TGraphic): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Graphic_GetEmpty(AObj: TGraphic): LongBool; cdecl;
begin
  Result :=  AObj.Empty;
end;

function Graphic_GetHeight(AObj: TGraphic): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure Graphic_SetHeight(AObj: TGraphic; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

function Graphic_GetModified(AObj: TGraphic): LongBool; cdecl;
begin
  Result :=  AObj.Modified;
end;

procedure Graphic_SetModified(AObj: TGraphic; AValue: LongBool); cdecl;
begin
  AObj.Modified := AValue;
end;

function Graphic_GetPaletteModified(AObj: TGraphic): LongBool; cdecl;
begin
  Result :=  AObj.PaletteModified;
end;

procedure Graphic_SetPaletteModified(AObj: TGraphic; AValue: LongBool); cdecl;
begin
  AObj.PaletteModified := AValue;
end;

function Graphic_GetTransparent(AObj: TGraphic): LongBool; cdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure Graphic_SetTransparent(AObj: TGraphic; AValue: LongBool); cdecl;
begin
  AObj.Transparent := AValue;
end;

function Graphic_GetWidth(AObj: TGraphic): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure Graphic_SetWidth(AObj: TGraphic; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

procedure Graphic_SetOnChange(AObj: TGraphic; AEventId: NativeUInt); stdcall;
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


exports
  Graphic_Create {$IFNDEF MSWINDOWS}name '_Graphic_Create'{$ENDIF},
  Graphic_Free {$IFNDEF MSWINDOWS}name '_Graphic_Free'{$ENDIF},
  Graphic_Equals {$IFNDEF MSWINDOWS}name '_Graphic_Equals'{$ENDIF},
  Graphic_LoadFromFile {$IFNDEF MSWINDOWS}name '_Graphic_LoadFromFile'{$ENDIF},
  Graphic_SaveToFile {$IFNDEF MSWINDOWS}name '_Graphic_SaveToFile'{$ENDIF},
  Graphic_LoadFromStream {$IFNDEF MSWINDOWS}name '_Graphic_LoadFromStream'{$ENDIF},
  Graphic_SaveToStream {$IFNDEF MSWINDOWS}name '_Graphic_SaveToStream'{$ENDIF},
  //Graphic_SetSize {$IFNDEF MSWINDOWS}name '_Graphic_SetSize'{$ENDIF},
  Graphic_Assign {$IFNDEF MSWINDOWS}name '_Graphic_Assign'{$ENDIF},
  Graphic_GetNamePath {$IFNDEF MSWINDOWS}name '_Graphic_GetNamePath'{$ENDIF},
  Graphic_ClassName {$IFNDEF MSWINDOWS}name '_Graphic_ClassName'{$ENDIF},
  Graphic_GetHashCode {$IFNDEF MSWINDOWS}name '_Graphic_GetHashCode'{$ENDIF},
  Graphic_ToString {$IFNDEF MSWINDOWS}name '_Graphic_ToString'{$ENDIF},
  Graphic_GetEmpty {$IFNDEF MSWINDOWS}name '_Graphic_GetEmpty'{$ENDIF},
  Graphic_GetHeight {$IFNDEF MSWINDOWS}name '_Graphic_GetHeight'{$ENDIF},
  Graphic_SetHeight {$IFNDEF MSWINDOWS}name '_Graphic_SetHeight'{$ENDIF},
  Graphic_GetModified {$IFNDEF MSWINDOWS}name '_Graphic_GetModified'{$ENDIF},
  Graphic_SetModified {$IFNDEF MSWINDOWS}name '_Graphic_SetModified'{$ENDIF},
  Graphic_GetPaletteModified {$IFNDEF MSWINDOWS}name '_Graphic_GetPaletteModified'{$ENDIF},
  Graphic_SetPaletteModified {$IFNDEF MSWINDOWS}name '_Graphic_SetPaletteModified'{$ENDIF},
  Graphic_GetTransparent {$IFNDEF MSWINDOWS}name '_Graphic_GetTransparent'{$ENDIF},
  Graphic_SetTransparent {$IFNDEF MSWINDOWS}name '_Graphic_SetTransparent'{$ENDIF},
  Graphic_GetWidth {$IFNDEF MSWINDOWS}name '_Graphic_GetWidth'{$ENDIF},
  Graphic_SetWidth {$IFNDEF MSWINDOWS}name '_Graphic_SetWidth'{$ENDIF},
  Graphic_SetOnChange {$IFNDEF MSWINDOWS}name '_Graphic_SetOnChange'{$ENDIF};

