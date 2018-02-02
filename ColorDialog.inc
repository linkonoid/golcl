
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ColorDialog_Create(AOwner: TComponent): TColorDialog; cdecl;
begin
  Result :=  TColorDialog.Create(AOwner);
end;

procedure ColorDialog_Free(AObj: TColorDialog); cdecl;
begin
  AObj.Free;
end;

function ColorDialog_Execute(AObj: TColorDialog; ParentWnd: HWND): LongBool; cdecl;
begin
  //Result :=  AObj.Execute(ParentWnd);
  Result :=  AObj.Execute();
end;

function ColorDialog_FindComponent(AObj: TColorDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ColorDialog_GetNamePath(AObj: TColorDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ColorDialog_HasParent(AObj: TColorDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ColorDialog_Assign(AObj: TColorDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ColorDialog_ClassName(AObj: TColorDialog): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ColorDialog_Equals(AObj: TColorDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ColorDialog_GetHashCode(AObj: TColorDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ColorDialog_ToString(AObj: TColorDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ColorDialog_GetColor(AObj: TColorDialog): TColor; cdecl;
begin
  Result :=  AObj.Color;
end;

procedure ColorDialog_SetColor(AObj: TColorDialog; AValue: TColor); cdecl;
begin
  AObj.Color := AValue;
end;

//function ColorDialog_GetOptions(AObj: TColorDialog): TColorDialogOptions; cdecl;
//begin
//  Result :=  AObj.Options;
//end;
//
//procedure ColorDialog_SetOptions(AObj: TColorDialog; AValue: TColorDialogOptions); cdecl;
//begin
//  AObj.Options := AValue;
//end;

function ColorDialog_GetHandle(AObj: TColorDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure ColorDialog_SetOnClose(AObj: TColorDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClose := nil;
    TEventClass.Remove(AObj, geClose);
    Exit;
  end;
  AObj.OnClose := TEventClass.OnClose;
  TEventClass.Add(AObj, geClose, AEventId);
end;

procedure ColorDialog_SetOnShow(AObj: TColorDialog; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnShow := nil;
    TEventClass.Remove(AObj, geShow);
    Exit;
  end;
  AObj.OnShow := TEventClass.OnShow;
  TEventClass.Add(AObj, geShow, AEventId);
end;

function ColorDialog_GetComponentCount(AObj: TColorDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ColorDialog_GetComponentIndex(AObj: TColorDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ColorDialog_SetComponentIndex(AObj: TColorDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ColorDialog_GetOwner(AObj: TColorDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ColorDialog_GetName(AObj: TColorDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ColorDialog_SetName(AObj: TColorDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ColorDialog_GetTag(AObj: TColorDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ColorDialog_SetTag(AObj: TColorDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ColorDialog_GetComponents(AObj: TColorDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ColorDialog_Create {$IFNDEF MSWINDOWS}name '_ColorDialog_Create'{$ENDIF},
  ColorDialog_Free {$IFNDEF MSWINDOWS}name '_ColorDialog_Free'{$ENDIF},
  ColorDialog_Execute {$IFNDEF MSWINDOWS}name '_ColorDialog_Execute'{$ENDIF},
  ColorDialog_FindComponent {$IFNDEF MSWINDOWS}name '_ColorDialog_FindComponent'{$ENDIF},
  ColorDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_ColorDialog_GetNamePath'{$ENDIF},
  ColorDialog_HasParent {$IFNDEF MSWINDOWS}name '_ColorDialog_HasParent'{$ENDIF},
  ColorDialog_Assign {$IFNDEF MSWINDOWS}name '_ColorDialog_Assign'{$ENDIF},
  ColorDialog_ClassName {$IFNDEF MSWINDOWS}name '_ColorDialog_ClassName'{$ENDIF},
  ColorDialog_Equals {$IFNDEF MSWINDOWS}name '_ColorDialog_Equals'{$ENDIF},
  ColorDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_ColorDialog_GetHashCode'{$ENDIF},
  ColorDialog_ToString {$IFNDEF MSWINDOWS}name '_ColorDialog_ToString'{$ENDIF},
  ColorDialog_GetColor {$IFNDEF MSWINDOWS}name '_ColorDialog_GetColor'{$ENDIF},
  ColorDialog_SetColor {$IFNDEF MSWINDOWS}name '_ColorDialog_SetColor'{$ENDIF},
  //ColorDialog_GetOptions {$IFNDEF MSWINDOWS}name '_ColorDialog_GetOptions'{$ENDIF},
  //ColorDialog_SetOptions {$IFNDEF MSWINDOWS}name '_ColorDialog_SetOptions'{$ENDIF},
  ColorDialog_GetHandle {$IFNDEF MSWINDOWS}name '_ColorDialog_GetHandle'{$ENDIF},
  ColorDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_ColorDialog_SetOnClose'{$ENDIF},
  ColorDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_ColorDialog_SetOnShow'{$ENDIF},
  ColorDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_ColorDialog_GetComponentCount'{$ENDIF},
  ColorDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ColorDialog_GetComponentIndex'{$ENDIF},
  ColorDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ColorDialog_SetComponentIndex'{$ENDIF},
  ColorDialog_GetOwner {$IFNDEF MSWINDOWS}name '_ColorDialog_GetOwner'{$ENDIF},
  ColorDialog_GetName {$IFNDEF MSWINDOWS}name '_ColorDialog_GetName'{$ENDIF},
  ColorDialog_SetName {$IFNDEF MSWINDOWS}name '_ColorDialog_SetName'{$ENDIF},
  ColorDialog_GetTag {$IFNDEF MSWINDOWS}name '_ColorDialog_GetTag'{$ENDIF},
  ColorDialog_SetTag {$IFNDEF MSWINDOWS}name '_ColorDialog_SetTag'{$ENDIF},
  ColorDialog_GetComponents {$IFNDEF MSWINDOWS}name '_ColorDialog_GetComponents'{$ENDIF};

