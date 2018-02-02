procedure TextAttributes_Assign(AObj: TTextAttributes; Source: TPersistent); cdecl;
begin
   AObj.Create;
  //AObj.Assign(Source);
end;

//function TextAttributes_GetNamePath(AObj: TTextAttributes): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.GetNamePath);
//end;

function TextAttributes_ClassName(AObj: TTextAttributes): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function TextAttributes_Equals(AObj: TTextAttributes; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function TextAttributes_GetHashCode(AObj: TTextAttributes): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function TextAttributes_ToString(AObj: TTextAttributes): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

//function TextAttributes_GetCharset(AObj: TTextAttributes): TFontCharset; cdecl;
//begin
//  Result :=  AObj.Charset;
//end;
//
//procedure TextAttributes_SetCharset(AObj: TTextAttributes; AValue: TFontCharset); cdecl;
//begin
//  AObj.Charset := AValue;
//end;

function TextAttributes_GetColor(AObj: TTextAttributes): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure TextAttributes_SetColor(AObj: TTextAttributes; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

//function TextAttributes_GetConsistentAttributes(AObj: TTextAttributes): TConsistentAttributes; cdecl;
//begin
//  Result :=  AObj.ConsistentAttributes;
//end;
//
//function TextAttributes_GetName(AObj: TTextAttributes): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.Name);
//end;

procedure TextAttributes_SetName(AObj: TTextAttributes; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

//function TextAttributes_GetPitch(AObj: TTextAttributes): TFontPitch; cdecl;
//begin
//  Result :=  AObj.Pitch;
//end;
//
//procedure TextAttributes_SetPitch(AObj: TTextAttributes; AValue: TFontPitch); cdecl;
//begin
//  AObj.Pitch := AValue;
//end;
//
//function TextAttributes_GetProtected(AObj: TTextAttributes): LongBool; cdecl;
//begin
//  Result :=  AObj.Protected;
//end;
//
//procedure TextAttributes_SetProtected(AObj: TTextAttributes; AValue: LongBool); cdecl;
//begin
//  AObj.Protected := AValue;
//end;

function TextAttributes_GetSize(AObj: TTextAttributes): Integer; cdecl;
begin
  Result :=  AObj.Size;
end;

procedure TextAttributes_SetSize(AObj: TTextAttributes; AValue: Integer); cdecl;
begin
  AObj.Size := AValue;
end;

function TextAttributes_GetStyle(AObj: TTextAttributes): TFontStyles; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure TextAttributes_SetStyle(AObj: TTextAttributes; AValue: TFontStyles); cdecl;
begin
  AObj.Style := AValue;
end;

//function TextAttributes_GetHeight(AObj: TTextAttributes): Integer; cdecl;
//begin
//  Result :=  AObj.Height;
//end;
//
//procedure TextAttributes_SetHeight(AObj: TTextAttributes; AValue: Integer); cdecl;
//begin
//  AObj.Height := AValue;
//end;


exports
  TextAttributes_Assign {$IFNDEF MSWINDOWS}name '_TextAttributes_Assign'{$ENDIF},
  //TextAttributes_GetNamePath {$IFNDEF MSWINDOWS}name '_TextAttributes_GetNamePath'{$ENDIF},
  TextAttributes_ClassName {$IFNDEF MSWINDOWS}name '_TextAttributes_ClassName'{$ENDIF},
  TextAttributes_Equals {$IFNDEF MSWINDOWS}name '_TextAttributes_Equals'{$ENDIF},
  TextAttributes_GetHashCode {$IFNDEF MSWINDOWS}name '_TextAttributes_GetHashCode'{$ENDIF},
  TextAttributes_ToString {$IFNDEF MSWINDOWS}name '_TextAttributes_ToString'{$ENDIF},
  //TextAttributes_GetCharset {$IFNDEF MSWINDOWS}name '_TextAttributes_GetCharset'{$ENDIF},
  //TextAttributes_SetCharset {$IFNDEF MSWINDOWS}name '_TextAttributes_SetCharset'{$ENDIF},
  TextAttributes_GetColor {$IFNDEF MSWINDOWS}name '_TextAttributes_GetColor'{$ENDIF},
  TextAttributes_SetColor {$IFNDEF MSWINDOWS}name '_TextAttributes_SetColor'{$ENDIF},
  //TextAttributes_GetConsistentAttributes {$IFNDEF MSWINDOWS}name '_TextAttributes_GetConsistentAttributes'{$ENDIF},
  //TextAttributes_GetName {$IFNDEF MSWINDOWS}name '_TextAttributes_GetName'{$ENDIF},
  TextAttributes_SetName {$IFNDEF MSWINDOWS}name '_TextAttributes_SetName'{$ENDIF},
  //TextAttributes_GetPitch {$IFNDEF MSWINDOWS}name '_TextAttributes_GetPitch'{$ENDIF},
  //TextAttributes_SetPitch {$IFNDEF MSWINDOWS}name '_TextAttributes_SetPitch'{$ENDIF},
  //TextAttributes_GetProtected {$IFNDEF MSWINDOWS}name '_TextAttributes_GetProtected'{$ENDIF},
  //TextAttributes_SetProtected {$IFNDEF MSWINDOWS}name '_TextAttributes_SetProtected'{$ENDIF},
  TextAttributes_GetSize {$IFNDEF MSWINDOWS}name '_TextAttributes_GetSize'{$ENDIF},
  TextAttributes_SetSize {$IFNDEF MSWINDOWS}name '_TextAttributes_SetSize'{$ENDIF},
  TextAttributes_GetStyle {$IFNDEF MSWINDOWS}name '_TextAttributes_GetStyle'{$ENDIF},
  TextAttributes_SetStyle {$IFNDEF MSWINDOWS}name '_TextAttributes_SetStyle'{$ENDIF};
  //TextAttributes_GetHeight {$IFNDEF MSWINDOWS}name '_TextAttributes_GetHeight'{$ENDIF},
  //TextAttributes_SetHeight {$IFNDEF MSWINDOWS}name '_TextAttributes_SetHeight'{$ENDIF};

