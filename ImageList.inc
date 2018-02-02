
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ImageList_Create(AOwner: TComponent): TImageList; cdecl;
begin
  Result :=  TImageList.Create(AOwner);
end;

procedure ImageList_Free(AObj: TImageList); cdecl;
begin
  AObj.Free;
end;

procedure ImageList_GetHotSpot(AObj: TImageList; var Result: TPoint); cdecl;
begin
  Result :=  AObj.GetHotSpot;
end;

procedure ImageList_Assign(AObj: TImageList; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ImageList_Add(AObj: TImageList; Image: TBitmap; Mask: TBitmap): Integer; cdecl;
begin
  Result :=  AObj.Add(Image, Mask);
end;

function ImageList_AddIcon(AObj: TImageList; Image: TIcon): Integer; cdecl;
begin
  Result :=  AObj.AddIcon(Image);
end;

//function ImageList_AddImage(AObj: TImageList; Value: TCustomImageList; Index: Integer): Integer; cdecl;
//begin
//  Result :=  AObj.AddImage(Value, Index);
//end;
//
//procedure ImageList_AddImages(AObj: TImageList; Value: TCustomImageList); cdecl;
//begin
//  AObj.AddImages(Value);
//end;

function ImageList_AddMasked(AObj: TImageList; Image: TBitmap; MaskColor: TColor): Integer; cdecl;
begin
  Result :=  AObj.AddMasked(Image, MaskColor);
end;

procedure ImageList_Clear(AObj: TImageList); cdecl;
begin
  AObj.Clear;
end;

procedure ImageList_Delete(AObj: TImageList; Index: Integer); cdecl;
begin
  AObj.Delete(Index);
end;

//function ImageList_FileLoad(AObj: TImageList; ResType: TResType; Name: PWideChar; MaskColor: TColor): LongBool; cdecl;
//begin
//  Result :=  AObj.FileLoad(ResType, Name, MaskColor);
//end;
//
//function ImageList_GetBitmap(AObj: TImageList; Index: Integer; Image: TBitmap): LongBool; cdecl;
//begin
//  Result :=  AObj.GetBitmap(Index, Image);
//end;
//
//function ImageList_GetImageBitmap(AObj: TImageList): HBITMAP; cdecl;
//begin
//  Result :=  AObj.GetImageBitmap;
//end;
//
//function ImageList_GetMaskBitmap(AObj: TImageList): HBITMAP; cdecl;
//begin
//  Result :=  AObj.GetMaskBitmap;
//end;
//
//function ImageList_GetResource(AObj: TImageList; ResType: TResType; Name: PWideChar; Width: Integer; LoadFlags: TLoadResources; MaskColor: TColor): LongBool; cdecl;
//begin
//  Result :=  AObj.GetResource(ResType, Name, Width, LoadFlags, MaskColor);
//end;

function ImageList_HandleAllocated(AObj: TImageList): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ImageList_Insert(AObj: TImageList; Index: Integer; Image: TBitmap; Mask: TBitmap); cdecl;
begin
  AObj.Insert(Index, Image, Mask);
end;

procedure ImageList_InsertIcon(AObj: TImageList; Index: Integer; Image: TIcon); cdecl;
begin
  AObj.InsertIcon(Index, Image);
end;

procedure ImageList_InsertMasked(AObj: TImageList; Index: Integer; Image: TBitmap; MaskColor: TColor); cdecl;
begin
  AObj.InsertMasked(Index, Image, MaskColor);
end;

procedure ImageList_Move(AObj: TImageList; CurIndex: Integer; NewIndex: Integer); cdecl;
begin
  AObj.Move(CurIndex, NewIndex);
end;

//function ImageList_Overlay(AObj: TImageList; ImageIndex: Integer; Overlay: TOverlay): LongBool; cdecl;
//begin
//  Result :=  AObj.Overlay(ImageIndex, Overlay);
//end;
//
//function ImageList_ResourceLoad(AObj: TImageList; ResType: TResType; Name: PWideChar; MaskColor: TColor): LongBool; cdecl;
//begin
//  Result :=  AObj.ResourceLoad(ResType, Name, MaskColor);
//end;
//
//function ImageList_ResInstLoad(AObj: TImageList; Instance: NativeUInt; ResType: TResType; Name: PWideChar; MaskColor: TColor): LongBool; cdecl;
//begin
//  Result :=  AObj.ResInstLoad(Instance, ResType, Name, MaskColor);
//end;

procedure ImageList_Replace(AObj: TImageList; Index: Integer; Image: TBitmap; Mask: TBitmap); cdecl;
begin
  AObj.Replace(Index, Image, Mask);
end;

//procedure ImageList_ReplaceIcon(AObj: TImageList; Index: Integer; Image: TIcon); cdecl;
//begin
//  AObj.ReplaceIcon(Index, Image);
//end;

procedure ImageList_ReplaceMasked(AObj: TImageList; Index: Integer; NewImage: TBitmap; MaskColor: TColor); cdecl;
begin
  AObj.ReplaceMasked(Index, NewImage, MaskColor);
end;

//procedure ImageList_SetSize(AObj: TImageList; AWidth: Integer; AHeight: Integer); cdecl;
//begin
//  AObj.SetSize(AWidth, AHeight);
//end;

procedure ImageList_BeginUpdate(AObj: TImageList); cdecl;
begin
  AObj.BeginUpdate;
end;

procedure ImageList_EndUpdate(AObj: TImageList); cdecl;
begin
  AObj.EndUpdate;
end;

function ImageList_FindComponent(AObj: TImageList; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ImageList_GetNamePath(AObj: TImageList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ImageList_HasParent(AObj: TImageList): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

function ImageList_ClassName(AObj: TImageList): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ImageList_Equals(AObj: TImageList; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ImageList_GetHashCode(AObj: TImageList): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ImageList_ToString(AObj: TImageList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ImageList_GetBlendColor(AObj: TImageList): TColor; cdecl;
begin
  Result :=  AObj.BlendColor;
end;

procedure ImageList_SetBlendColor(AObj: TImageList; AValue: TColor); cdecl;
begin
  AObj.BlendColor := AValue;
end;

function ImageList_GetBkColor(AObj: TImageList): TColor; cdecl;
begin
  Result :=  AObj.BkColor;
end;

procedure ImageList_SetBkColor(AObj: TImageList; AValue: TColor); cdecl;
begin
  AObj.BkColor := AValue;
end;

function ImageList_GetAllocBy(AObj: TImageList): Integer; cdecl;
begin
  Result :=  AObj.AllocBy;
end;

procedure ImageList_SetAllocBy(AObj: TImageList; AValue: Integer); cdecl;
begin
  AObj.AllocBy := AValue;
end;

//function ImageList_GetColorDepth(AObj: TImageList): TColorDepth; cdecl;
//begin
//  Result :=  AObj.ColorDepth;
//end;
//
//procedure ImageList_SetColorDepth(AObj: TImageList; AValue: TColorDepth); cdecl;
//begin
//  AObj.ColorDepth := AValue;
//end;
//
//function ImageList_GetDrawingStyle(AObj: TImageList): TDrawingStyle; cdecl;
//begin
//  Result :=  AObj.DrawingStyle;
//end;
//
//procedure ImageList_SetDrawingStyle(AObj: TImageList; AValue: TDrawingStyle); cdecl;
//begin
//  AObj.DrawingStyle := AValue;
//end;

//function ImageList_GetGrayscaleFactor(AObj: TImageList): Byte; cdecl;
//begin
//  Result :=  AObj.GrayscaleFactor;
//end;
//
//procedure ImageList_SetGrayscaleFactor(AObj: TImageList; AValue: Byte); cdecl;
//begin
//  AObj.GrayscaleFactor := AValue;
//end;

function ImageList_GetHeight(AObj: TImageList): Integer; cdecl;
begin
  Result :=  AObj.Height;
end;

procedure ImageList_SetHeight(AObj: TImageList; AValue: Integer); cdecl;
begin
  AObj.Height := AValue;
end;

//function ImageList_GetImageType(AObj: TImageList): TImageType; cdecl;
//begin
//  Result :=  AObj.ImageType;
//end;
//
//procedure ImageList_SetImageType(AObj: TImageList; AValue: TImageType); cdecl;
//begin
//  AObj.ImageType := AValue;
//end;

function ImageList_GetMasked(AObj: TImageList): LongBool; cdecl;
begin
  Result :=  AObj.Masked;
end;

procedure ImageList_SetMasked(AObj: TImageList; AValue: LongBool); cdecl;
begin
  AObj.Masked := AValue;
end;

procedure ImageList_SetOnChange(AObj: TImageList; AEventId: NativeUInt); stdcall;
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

function ImageList_GetShareImages(AObj: TImageList): LongBool; cdecl;
begin
  Result :=  AObj.ShareImages;
end;

procedure ImageList_SetShareImages(AObj: TImageList; AValue: LongBool); cdecl;
begin
  AObj.ShareImages := AValue;
end;

function ImageList_GetWidth(AObj: TImageList): Integer; cdecl;
begin
  Result :=  AObj.Width;
end;

procedure ImageList_SetWidth(AObj: TImageList; AValue: Integer); cdecl;
begin
  AObj.Width := AValue;
end;

function ImageList_GetHandle(AObj: TImageList): NativeUInt; cdecl;
begin
  Result :=  AObj.Handle;
end;

//procedure ImageList_SetHandle(AObj: TImageList; AValue: NativeUInt); cdecl;
//begin
//  AObj.Handle := StrToInt(AValue.ToString);
//  //AObj.Handle := AValue;
//end;

function ImageList_GetComponentCount(AObj: TImageList): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ImageList_GetComponentIndex(AObj: TImageList): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ImageList_SetComponentIndex(AObj: TImageList; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ImageList_GetOwner(AObj: TImageList): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ImageList_GetName(AObj: TImageList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ImageList_SetName(AObj: TImageList; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ImageList_GetTag(AObj: TImageList): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ImageList_SetTag(AObj: TImageList; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ImageList_GetComponents(AObj: TImageList; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ImageList_Create {$IFNDEF MSWINDOWS}name '_ImageList_Create'{$ENDIF},
  ImageList_Free {$IFNDEF MSWINDOWS}name '_ImageList_Free'{$ENDIF},
  ImageList_GetHotSpot {$IFNDEF MSWINDOWS}name '_ImageList_GetHotSpot'{$ENDIF},
  ImageList_Assign {$IFNDEF MSWINDOWS}name '_ImageList_Assign'{$ENDIF},
  ImageList_Add {$IFNDEF MSWINDOWS}name '_ImageList_Add'{$ENDIF},
  ImageList_AddIcon {$IFNDEF MSWINDOWS}name '_ImageList_AddIcon'{$ENDIF},
  //ImageList_AddImage {$IFNDEF MSWINDOWS}name '_ImageList_AddImage'{$ENDIF},
  //ImageList_AddImages {$IFNDEF MSWINDOWS}name '_ImageList_AddImages'{$ENDIF},
  ImageList_AddMasked {$IFNDEF MSWINDOWS}name '_ImageList_AddMasked'{$ENDIF},
  ImageList_Clear {$IFNDEF MSWINDOWS}name '_ImageList_Clear'{$ENDIF},
  ImageList_Delete {$IFNDEF MSWINDOWS}name '_ImageList_Delete'{$ENDIF},
  //ImageList_FileLoad {$IFNDEF MSWINDOWS}name '_ImageList_FileLoad'{$ENDIF},
  //ImageList_GetBitmap {$IFNDEF MSWINDOWS}name '_ImageList_GetBitmap'{$ENDIF},
  //ImageList_GetImageBitmap {$IFNDEF MSWINDOWS}name '_ImageList_GetImageBitmap'{$ENDIF},
  //ImageList_GetMaskBitmap {$IFNDEF MSWINDOWS}name '_ImageList_GetMaskBitmap'{$ENDIF},
  //ImageList_GetResource {$IFNDEF MSWINDOWS}name '_ImageList_GetResource'{$ENDIF},
  ImageList_HandleAllocated {$IFNDEF MSWINDOWS}name '_ImageList_HandleAllocated'{$ENDIF},
  ImageList_Insert {$IFNDEF MSWINDOWS}name '_ImageList_Insert'{$ENDIF},
  ImageList_InsertIcon {$IFNDEF MSWINDOWS}name '_ImageList_InsertIcon'{$ENDIF},
  ImageList_InsertMasked {$IFNDEF MSWINDOWS}name '_ImageList_InsertMasked'{$ENDIF},
  ImageList_Move {$IFNDEF MSWINDOWS}name '_ImageList_Move'{$ENDIF},
  //ImageList_Overlay {$IFNDEF MSWINDOWS}name '_ImageList_Overlay'{$ENDIF},
  //ImageList_ResourceLoad {$IFNDEF MSWINDOWS}name '_ImageList_ResourceLoad'{$ENDIF},
  //ImageList_ResInstLoad {$IFNDEF MSWINDOWS}name '_ImageList_ResInstLoad'{$ENDIF},
  ImageList_Replace {$IFNDEF MSWINDOWS}name '_ImageList_Replace'{$ENDIF},
  //ImageList_ReplaceIcon {$IFNDEF MSWINDOWS}name '_ImageList_ReplaceIcon'{$ENDIF},
  ImageList_ReplaceMasked {$IFNDEF MSWINDOWS}name '_ImageList_ReplaceMasked'{$ENDIF},
  //ImageList_SetSize {$IFNDEF MSWINDOWS}name '_ImageList_SetSize'{$ENDIF},
  ImageList_BeginUpdate {$IFNDEF MSWINDOWS}name '_ImageList_BeginUpdate'{$ENDIF},
  ImageList_EndUpdate {$IFNDEF MSWINDOWS}name '_ImageList_EndUpdate'{$ENDIF},
  ImageList_FindComponent {$IFNDEF MSWINDOWS}name '_ImageList_FindComponent'{$ENDIF},
  ImageList_GetNamePath {$IFNDEF MSWINDOWS}name '_ImageList_GetNamePath'{$ENDIF},
  ImageList_HasParent {$IFNDEF MSWINDOWS}name '_ImageList_HasParent'{$ENDIF},
  ImageList_ClassName {$IFNDEF MSWINDOWS}name '_ImageList_ClassName'{$ENDIF},
  ImageList_Equals {$IFNDEF MSWINDOWS}name '_ImageList_Equals'{$ENDIF},
  ImageList_GetHashCode {$IFNDEF MSWINDOWS}name '_ImageList_GetHashCode'{$ENDIF},
  ImageList_ToString {$IFNDEF MSWINDOWS}name '_ImageList_ToString'{$ENDIF},
  ImageList_GetBlendColor {$IFNDEF MSWINDOWS}name '_ImageList_GetBlendColor'{$ENDIF},
  ImageList_SetBlendColor {$IFNDEF MSWINDOWS}name '_ImageList_SetBlendColor'{$ENDIF},
  ImageList_GetBkColor {$IFNDEF MSWINDOWS}name '_ImageList_GetBkColor'{$ENDIF},
  ImageList_SetBkColor {$IFNDEF MSWINDOWS}name '_ImageList_SetBkColor'{$ENDIF},
  ImageList_GetAllocBy {$IFNDEF MSWINDOWS}name '_ImageList_GetAllocBy'{$ENDIF},
  ImageList_SetAllocBy {$IFNDEF MSWINDOWS}name '_ImageList_SetAllocBy'{$ENDIF},
  //ImageList_GetColorDepth {$IFNDEF MSWINDOWS}name '_ImageList_GetColorDepth'{$ENDIF},
  //ImageList_SetColorDepth {$IFNDEF MSWINDOWS}name '_ImageList_SetColorDepth'{$ENDIF},
  //ImageList_GetDrawingStyle {$IFNDEF MSWINDOWS}name '_ImageList_GetDrawingStyle'{$ENDIF},
  //ImageList_SetDrawingStyle {$IFNDEF MSWINDOWS}name '_ImageList_SetDrawingStyle'{$ENDIF},
  //ImageList_GetGrayscaleFactor {$IFNDEF MSWINDOWS}name '_ImageList_GetGrayscaleFactor'{$ENDIF},
  //ImageList_SetGrayscaleFactor {$IFNDEF MSWINDOWS}name '_ImageList_SetGrayscaleFactor'{$ENDIF},
  ImageList_GetHeight {$IFNDEF MSWINDOWS}name '_ImageList_GetHeight'{$ENDIF},
  ImageList_SetHeight {$IFNDEF MSWINDOWS}name '_ImageList_SetHeight'{$ENDIF},
  //ImageList_GetImageType {$IFNDEF MSWINDOWS}name '_ImageList_GetImageType'{$ENDIF},
  //ImageList_SetImageType {$IFNDEF MSWINDOWS}name '_ImageList_SetImageType'{$ENDIF},
  ImageList_GetMasked {$IFNDEF MSWINDOWS}name '_ImageList_GetMasked'{$ENDIF},
  ImageList_SetMasked {$IFNDEF MSWINDOWS}name '_ImageList_SetMasked'{$ENDIF},
  ImageList_SetOnChange {$IFNDEF MSWINDOWS}name '_ImageList_SetOnChange'{$ENDIF},
  ImageList_GetShareImages {$IFNDEF MSWINDOWS}name '_ImageList_GetShareImages'{$ENDIF},
  ImageList_SetShareImages {$IFNDEF MSWINDOWS}name '_ImageList_SetShareImages'{$ENDIF},
  ImageList_GetWidth {$IFNDEF MSWINDOWS}name '_ImageList_GetWidth'{$ENDIF},
  ImageList_SetWidth {$IFNDEF MSWINDOWS}name '_ImageList_SetWidth'{$ENDIF},
  ImageList_GetHandle {$IFNDEF MSWINDOWS}name '_ImageList_GetHandle'{$ENDIF},
  //ImageList_SetHandle {$IFNDEF MSWINDOWS}name '_ImageList_SetHandle'{$ENDIF},
  ImageList_GetComponentCount {$IFNDEF MSWINDOWS}name '_ImageList_GetComponentCount'{$ENDIF},
  ImageList_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ImageList_GetComponentIndex'{$ENDIF},
  ImageList_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ImageList_SetComponentIndex'{$ENDIF},
  ImageList_GetOwner {$IFNDEF MSWINDOWS}name '_ImageList_GetOwner'{$ENDIF},
  ImageList_GetName {$IFNDEF MSWINDOWS}name '_ImageList_GetName'{$ENDIF},
  ImageList_SetName {$IFNDEF MSWINDOWS}name '_ImageList_SetName'{$ENDIF},
  ImageList_GetTag {$IFNDEF MSWINDOWS}name '_ImageList_GetTag'{$ENDIF},
  ImageList_SetTag {$IFNDEF MSWINDOWS}name '_ImageList_SetTag'{$ENDIF},
  ImageList_GetComponents {$IFNDEF MSWINDOWS}name '_ImageList_GetComponents'{$ENDIF};

