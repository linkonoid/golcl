
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ListColumn_Create(AOwner: TCollection): TListColumn; cdecl;
begin
  Result :=  TListColumn.Create(AOwner);
end;

procedure ListColumn_Free(AObj: TListColumn); cdecl;
begin
  AObj.Free;
end;

procedure ListColumn_Assign(AObj: TListColumn; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ListColumn_GetNamePath(AObj: TListColumn): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ListColumn_ClassName(AObj: TListColumn): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ListColumn_Equals(AObj: TListColumn; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListColumn_GetHashCode(AObj: TListColumn): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListColumn_ToString(AObj: TListColumn): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ListColumn_GetAlignment(AObj: TListColumn): TAlignment; cdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure ListColumn_SetAlignment(AObj: TListColumn; AValue: TAlignment); cdecl;
begin
  AObj.Alignment := AValue;
end;

function ListColumn_GetAutoSize(AObj: TListColumn): LongBool; cdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure ListColumn_SetAutoSize(AObj: TListColumn; AValue: LongBool); cdecl;
begin
  AObj.AutoSize := AValue;
end;

function ListColumn_GetCaption(AObj: TListColumn): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Caption);
end;

procedure ListColumn_SetCaption(AObj: TListColumn; AValue: PWideChar); cdecl;
begin
  AObj.Caption := AValue;
end;

//function ListColumn_GetImageIndex(AObj: TListColumn): TImageIndex; cdecl;
//begin
//  Result :=  AObj.ImageIndex;
//end;
//
//procedure ListColumn_SetImageIndex(AObj: TListColumn; AValue: TImageIndex); cdecl;
//begin
//  AObj.ImageIndex := AValue;
//end;

function ListColumn_GetTag(AObj: TListColumn): Integer; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ListColumn_SetTag(AObj: TListColumn; AValue: Integer); cdecl;
begin
  AObj.Tag := AValue;
end;

function ListColumn_GetWidth(AObj: TListColumn): TWidth; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ListColumn_SetWidth(AObj: TListColumn; AValue: TWidth); cdecl;
begin
  AObj.Width := AValue;
end;

function ListColumn_GetIndex(AObj: TListColumn): Integer; cdecl;
begin
  Result :=  AObj.Index;
end;

procedure ListColumn_SetIndex(AObj: TListColumn; AValue: Integer); cdecl;
begin
  AObj.Index := AValue;
end;


exports
  ListColumn_Create {$IFNDEF MSWINDOWS}name '_ListColumn_Create'{$ENDIF},
  ListColumn_Free {$IFNDEF MSWINDOWS}name '_ListColumn_Free'{$ENDIF},
  ListColumn_Assign {$IFNDEF MSWINDOWS}name '_ListColumn_Assign'{$ENDIF},
  ListColumn_GetNamePath {$IFNDEF MSWINDOWS}name '_ListColumn_GetNamePath'{$ENDIF},
  ListColumn_ClassName {$IFNDEF MSWINDOWS}name '_ListColumn_ClassName'{$ENDIF},
  ListColumn_Equals {$IFNDEF MSWINDOWS}name '_ListColumn_Equals'{$ENDIF},
  ListColumn_GetHashCode {$IFNDEF MSWINDOWS}name '_ListColumn_GetHashCode'{$ENDIF},
  ListColumn_ToString {$IFNDEF MSWINDOWS}name '_ListColumn_ToString'{$ENDIF},
  ListColumn_GetAlignment {$IFNDEF MSWINDOWS}name '_ListColumn_GetAlignment'{$ENDIF},
  ListColumn_SetAlignment {$IFNDEF MSWINDOWS}name '_ListColumn_SetAlignment'{$ENDIF},
  ListColumn_GetAutoSize {$IFNDEF MSWINDOWS}name '_ListColumn_GetAutoSize'{$ENDIF},
  ListColumn_SetAutoSize {$IFNDEF MSWINDOWS}name '_ListColumn_SetAutoSize'{$ENDIF},
  ListColumn_GetCaption {$IFNDEF MSWINDOWS}name '_ListColumn_GetCaption'{$ENDIF},
  ListColumn_SetCaption {$IFNDEF MSWINDOWS}name '_ListColumn_SetCaption'{$ENDIF},
  //ListColumn_GetImageIndex {$IFNDEF MSWINDOWS}name '_ListColumn_GetImageIndex'{$ENDIF},
  //ListColumn_SetImageIndex {$IFNDEF MSWINDOWS}name '_ListColumn_SetImageIndex'{$ENDIF},
  ListColumn_GetTag {$IFNDEF MSWINDOWS}name '_ListColumn_GetTag'{$ENDIF},
  ListColumn_SetTag {$IFNDEF MSWINDOWS}name '_ListColumn_SetTag'{$ENDIF},
  ListColumn_GetWidth {$IFNDEF MSWINDOWS}name '_ListColumn_GetWidth'{$ENDIF},
  ListColumn_SetWidth {$IFNDEF MSWINDOWS}name '_ListColumn_SetWidth'{$ENDIF},
  ListColumn_GetIndex {$IFNDEF MSWINDOWS}name '_ListColumn_GetIndex'{$ENDIF},
  ListColumn_SetIndex {$IFNDEF MSWINDOWS}name '_ListColumn_SetIndex'{$ENDIF};

