
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Component_Create(AOwner: TComponent): TComponent; cdecl;
begin
  Result :=  TComponent.Create(AOwner);
end;

procedure Component_Free(AObj: TComponent); cdecl;
begin
  AObj.Free;
end;

function Component_FindComponent(AObj: TComponent; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Component_GetNamePath(AObj: TComponent): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Component_HasParent(AObj: TComponent): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Component_Assign(AObj: TComponent; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Component_ClassName(AObj: TComponent): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Component_Equals(AObj: TComponent; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Component_GetHashCode(AObj: TComponent): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Component_ToString(AObj: TComponent): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Component_GetComponentCount(AObj: TComponent): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Component_GetComponentIndex(AObj: TComponent): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Component_SetComponentIndex(AObj: TComponent; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Component_GetOwner(AObj: TComponent): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Component_GetName(AObj: TComponent): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Component_SetName(AObj: TComponent; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Component_GetTag(AObj: TComponent): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Component_SetTag(AObj: TComponent; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Component_GetComponents(AObj: TComponent; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Component_Create {$IFNDEF MSWINDOWS}name '_Component_Create'{$ENDIF},
  Component_Free {$IFNDEF MSWINDOWS}name '_Component_Free'{$ENDIF},
  Component_FindComponent {$IFNDEF MSWINDOWS}name '_Component_FindComponent'{$ENDIF},
  Component_GetNamePath {$IFNDEF MSWINDOWS}name '_Component_GetNamePath'{$ENDIF},
  Component_HasParent {$IFNDEF MSWINDOWS}name '_Component_HasParent'{$ENDIF},
  Component_Assign {$IFNDEF MSWINDOWS}name '_Component_Assign'{$ENDIF},
  Component_ClassName {$IFNDEF MSWINDOWS}name '_Component_ClassName'{$ENDIF},
  Component_Equals {$IFNDEF MSWINDOWS}name '_Component_Equals'{$ENDIF},
  Component_GetHashCode {$IFNDEF MSWINDOWS}name '_Component_GetHashCode'{$ENDIF},
  Component_ToString {$IFNDEF MSWINDOWS}name '_Component_ToString'{$ENDIF},
  Component_GetComponentCount {$IFNDEF MSWINDOWS}name '_Component_GetComponentCount'{$ENDIF},
  Component_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Component_GetComponentIndex'{$ENDIF},
  Component_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Component_SetComponentIndex'{$ENDIF},
  Component_GetOwner {$IFNDEF MSWINDOWS}name '_Component_GetOwner'{$ENDIF},
  Component_GetName {$IFNDEF MSWINDOWS}name '_Component_GetName'{$ENDIF},
  Component_SetName {$IFNDEF MSWINDOWS}name '_Component_SetName'{$ENDIF},
  Component_GetTag {$IFNDEF MSWINDOWS}name '_Component_GetTag'{$ENDIF},
  Component_SetTag {$IFNDEF MSWINDOWS}name '_Component_SetTag'{$ENDIF},
  Component_GetComponents {$IFNDEF MSWINDOWS}name '_Component_GetComponents'{$ENDIF};

