
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function CollectionItem_Create(AOwner: TCollection): TCollectionItem; cdecl;
begin
  Result :=  TCollectionItem.Create(AOwner);
end;

procedure CollectionItem_Free(AObj: TCollectionItem); cdecl;
begin
  AObj.Free;
end;

function CollectionItem_GetNamePath(AObj: TCollectionItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

procedure CollectionItem_Assign(AObj: TCollectionItem; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function CollectionItem_ClassName(AObj: TCollectionItem): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function CollectionItem_Equals(AObj: TCollectionItem; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function CollectionItem_GetHashCode(AObj: TCollectionItem): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function CollectionItem_ToString(AObj: TCollectionItem): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function CollectionItem_GetIndex(AObj: TCollectionItem): Integer; cdecl;
begin
  Result :=  AObj.Index;
end;

procedure CollectionItem_SetIndex(AObj: TCollectionItem; AValue: Integer); cdecl;
begin
  AObj.Index := AValue;
end;


exports
  CollectionItem_Create {$IFNDEF MSWINDOWS}name '_CollectionItem_Create'{$ENDIF},
  CollectionItem_Free {$IFNDEF MSWINDOWS}name '_CollectionItem_Free'{$ENDIF},
  CollectionItem_GetNamePath {$IFNDEF MSWINDOWS}name '_CollectionItem_GetNamePath'{$ENDIF},
  CollectionItem_Assign {$IFNDEF MSWINDOWS}name '_CollectionItem_Assign'{$ENDIF},
  CollectionItem_ClassName {$IFNDEF MSWINDOWS}name '_CollectionItem_ClassName'{$ENDIF},
  CollectionItem_Equals {$IFNDEF MSWINDOWS}name '_CollectionItem_Equals'{$ENDIF},
  CollectionItem_GetHashCode {$IFNDEF MSWINDOWS}name '_CollectionItem_GetHashCode'{$ENDIF},
  CollectionItem_ToString {$IFNDEF MSWINDOWS}name '_CollectionItem_ToString'{$ENDIF},
  CollectionItem_GetIndex {$IFNDEF MSWINDOWS}name '_CollectionItem_GetIndex'{$ENDIF},
  CollectionItem_SetIndex {$IFNDEF MSWINDOWS}name '_CollectionItem_SetIndex'{$ENDIF};

