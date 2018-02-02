
//----------------------------------------
// 代码由genvcllib工具自动生成。
// 时间：2017/9/21
// 作者：ying32
//----------------------------------------

function GIFImageList_Create(AOwner: TComponent): TGIFImageList; cdecl;
begin
  Result :=  TGIFImageList.Create(AOwner);
end;

procedure GIFImageList_Free(AObj: TGIFImageList); cdecl;
begin
  AObj.Free;
end;

procedure GIFImageList_LoadFromStream(AObj: TGIFImageList; Stream: TStream); cdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure GIFImageList_SaveToStream(AObj: TGIFImageList; Stream: TStream); cdecl;
begin
  AObj.SaveToStream(Stream);
end;

function GIFImageList_Add(AObj: TGIFImageList; Item: TGIFItem): Integer; cdecl;
begin
  Result :=  AObj.Add(Item);
end;

procedure GIFImageList_Clear(AObj: TGIFImageList); cdecl;
begin
  AObj.Clear;
end;

procedure GIFImageList_Delete(AObj: TGIFImageList; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

function GIFImageList_IndexOf(AObj: TGIFImageList; Item: TGIFItem): Integer; cdecl;
begin
  Result :=  AObj.IndexOf(Item);
end;

procedure GIFImageList_Insert(AObj: TGIFImageList; Index: Integer; Item: TGIFItem); cdecl;
begin
  AObj.Insert(Index, Item);
end;

procedure GIFImageList_Move(AObj: TGIFImageList; CurIndex: Integer; NewIndex: Integer); cdecl;
begin
  AObj.Move(CurIndex, NewIndex);
end;

procedure GIFImageList_Assign(AObj: TGIFImageList; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function GIFImageList_GetNamePath(AObj: TGIFImageList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function GIFImageList_ClassName(AObj: TGIFImageList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function GIFImageList_Equals(AObj: TGIFImageList; Obj: TObject): Boolean; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function GIFImageList_GetHashCode(AObj: TGIFImageList): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function GIFImageList_ToString(AObj: TGIFImageList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function GIFImageList_GetList(AObj: TGIFImageList): TList; cdecl;
begin
  Result :=  AObj.List;
end;


exports
  GIFImageList_Create,
  GIFImageList_Free,
  GIFImageList_LoadFromStream,
  GIFImageList_SaveToStream,
  GIFImageList_Add,
  GIFImageList_Clear,
  GIFImageList_Delete,
  GIFImageList_IndexOf,
  GIFImageList_Insert,
  GIFImageList_Move,
  GIFImageList_Assign,
  GIFImageList_GetNamePath,
  GIFImageList_ClassName,
  GIFImageList_Equals,
  GIFImageList_GetHashCode,
  GIFImageList_ToString,
  GIFImageList_GetList;

