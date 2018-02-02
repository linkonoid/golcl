
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function FontDialog_Create(AOwner: TComponent): TFontDialog; cdecl;
begin
  Result :=  TFontDialog.Create(AOwner);
end;

procedure FontDialog_Free(AObj: TFontDialog); cdecl;
begin
  AObj.Free;
end;

function FontDialog_Execute(AObj: TFontDialog; ParentWnd: HWND): LongBool; cdecl;
begin
  //Result :=  AObj.Execute(ParentWnd);
  Result :=  AObj.Execute();
end;

function FontDialog_FindComponent(AObj: TFontDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function FontDialog_GetNamePath(AObj: TFontDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function FontDialog_HasParent(AObj: TFontDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure FontDialog_Assign(AObj: TFontDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function FontDialog_ClassName(AObj: TFontDialog): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function FontDialog_Equals(AObj: TFontDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function FontDialog_GetHashCode(AObj: TFontDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function FontDialog_ToString(AObj: TFontDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function FontDialog_GetFont(AObj: TFontDialog): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure FontDialog_SetFont(AObj: TFontDialog; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function FontDialog_GetOptions(AObj: TFontDialog): TFontDialogOptions; cdecl;
begin
  Result :=  AObj.Options;
end;

procedure FontDialog_SetOptions(AObj: TFontDialog; AValue: TFontDialogOptions); cdecl;
begin
  AObj.Options := AValue;
end;

function FontDialog_GetHandle(AObj: TFontDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure FontDialog_SetOnClose(AObj: TFontDialog; AEventId: NativeUInt); stdcall;
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

procedure FontDialog_SetOnShow(AObj: TFontDialog; AEventId: NativeUInt); stdcall;
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

function FontDialog_GetComponentCount(AObj: TFontDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function FontDialog_GetComponentIndex(AObj: TFontDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure FontDialog_SetComponentIndex(AObj: TFontDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function FontDialog_GetOwner(AObj: TFontDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function FontDialog_GetName(AObj: TFontDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure FontDialog_SetName(AObj: TFontDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function FontDialog_GetTag(AObj: TFontDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure FontDialog_SetTag(AObj: TFontDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function FontDialog_GetComponents(AObj: TFontDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  FontDialog_Create {$IFNDEF MSWINDOWS}name '_FontDialog_Create'{$ENDIF},
  FontDialog_Free {$IFNDEF MSWINDOWS}name '_FontDialog_Free'{$ENDIF},
  FontDialog_Execute {$IFNDEF MSWINDOWS}name '_FontDialog_Execute'{$ENDIF},
  FontDialog_FindComponent {$IFNDEF MSWINDOWS}name '_FontDialog_FindComponent'{$ENDIF},
  FontDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_FontDialog_GetNamePath'{$ENDIF},
  FontDialog_HasParent {$IFNDEF MSWINDOWS}name '_FontDialog_HasParent'{$ENDIF},
  FontDialog_Assign {$IFNDEF MSWINDOWS}name '_FontDialog_Assign'{$ENDIF},
  FontDialog_ClassName {$IFNDEF MSWINDOWS}name '_FontDialog_ClassName'{$ENDIF},
  FontDialog_Equals {$IFNDEF MSWINDOWS}name '_FontDialog_Equals'{$ENDIF},
  FontDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_FontDialog_GetHashCode'{$ENDIF},
  FontDialog_ToString {$IFNDEF MSWINDOWS}name '_FontDialog_ToString'{$ENDIF},
  FontDialog_GetFont {$IFNDEF MSWINDOWS}name '_FontDialog_GetFont'{$ENDIF},
  FontDialog_SetFont {$IFNDEF MSWINDOWS}name '_FontDialog_SetFont'{$ENDIF},
  FontDialog_GetOptions {$IFNDEF MSWINDOWS}name '_FontDialog_GetOptions'{$ENDIF},
  FontDialog_SetOptions {$IFNDEF MSWINDOWS}name '_FontDialog_SetOptions'{$ENDIF},
  FontDialog_GetHandle {$IFNDEF MSWINDOWS}name '_FontDialog_GetHandle'{$ENDIF},
  FontDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_FontDialog_SetOnClose'{$ENDIF},
  FontDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_FontDialog_SetOnShow'{$ENDIF},
  FontDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_FontDialog_GetComponentCount'{$ENDIF},
  FontDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_FontDialog_GetComponentIndex'{$ENDIF},
  FontDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_FontDialog_SetComponentIndex'{$ENDIF},
  FontDialog_GetOwner {$IFNDEF MSWINDOWS}name '_FontDialog_GetOwner'{$ENDIF},
  FontDialog_GetName {$IFNDEF MSWINDOWS}name '_FontDialog_GetName'{$ENDIF},
  FontDialog_SetName {$IFNDEF MSWINDOWS}name '_FontDialog_SetName'{$ENDIF},
  FontDialog_GetTag {$IFNDEF MSWINDOWS}name '_FontDialog_GetTag'{$ENDIF},
  FontDialog_SetTag {$IFNDEF MSWINDOWS}name '_FontDialog_SetTag'{$ENDIF},
  FontDialog_GetComponents {$IFNDEF MSWINDOWS}name '_FontDialog_GetComponents'{$ENDIF};

