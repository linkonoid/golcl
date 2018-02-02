
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ActionList_Create(AOwner: TComponent): TActionList; cdecl;
begin
  Result :=  TActionList.Create(AOwner);
end;

procedure ActionList_Free(AObj: TActionList); cdecl;
begin
  AObj.Free;
end;

function ActionList_FindComponent(AObj: TActionList; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ActionList_GetNamePath(AObj: TActionList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ActionList_HasParent(AObj: TActionList): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ActionList_Assign(AObj: TActionList; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ActionList_ClassName(AObj: TActionList): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function ActionList_Equals(AObj: TActionList; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ActionList_GetHashCode(AObj: TActionList): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ActionList_ToString(AObj: TActionList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

//function ActionList_GetImages(AObj: TActionList): TCustomImageList; cdecl;
//begin
//  Result :=  AObj.Images;
//end;
//
//procedure ActionList_SetImages(AObj: TActionList; AValue: TCustomImageList); cdecl;
//begin
//  AObj.Images := AValue;
//end;

function ActionList_GetState(AObj: TActionList): TActionListState; cdecl;
begin
  Result :=  AObj.State;
end;

procedure ActionList_SetState(AObj: TActionList; AValue: TActionListState); cdecl;
begin
  AObj.State := AValue;
end;

procedure ActionList_SetOnChange(AObj: TActionList; AEventId: NativeUInt); stdcall;
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

function ActionList_GetComponentCount(AObj: TActionList): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ActionList_GetComponentIndex(AObj: TActionList): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ActionList_SetComponentIndex(AObj: TActionList; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ActionList_GetOwner(AObj: TActionList): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function ActionList_GetName(AObj: TActionList): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure ActionList_SetName(AObj: TActionList; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function ActionList_GetTag(AObj: TActionList): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ActionList_SetTag(AObj: TActionList; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function ActionList_GetComponents(AObj: TActionList; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  ActionList_Create {$IFNDEF MSWINDOWS}name '_ActionList_Create'{$ENDIF},
  ActionList_Free {$IFNDEF MSWINDOWS}name '_ActionList_Free'{$ENDIF},
  ActionList_FindComponent {$IFNDEF MSWINDOWS}name '_ActionList_FindComponent'{$ENDIF},
  ActionList_GetNamePath {$IFNDEF MSWINDOWS}name '_ActionList_GetNamePath'{$ENDIF},
  ActionList_HasParent {$IFNDEF MSWINDOWS}name '_ActionList_HasParent'{$ENDIF},
  ActionList_Assign {$IFNDEF MSWINDOWS}name '_ActionList_Assign'{$ENDIF},
  ActionList_ClassName {$IFNDEF MSWINDOWS}name '_ActionList_ClassName'{$ENDIF},
  ActionList_Equals {$IFNDEF MSWINDOWS}name '_ActionList_Equals'{$ENDIF},
  ActionList_GetHashCode {$IFNDEF MSWINDOWS}name '_ActionList_GetHashCode'{$ENDIF},
  ActionList_ToString {$IFNDEF MSWINDOWS}name '_ActionList_ToString'{$ENDIF},
  //ActionList_GetImages {$IFNDEF MSWINDOWS}name '_ActionList_GetImages'{$ENDIF},
  //ActionList_SetImages {$IFNDEF MSWINDOWS}name '_ActionList_SetImages'{$ENDIF},
  ActionList_GetState {$IFNDEF MSWINDOWS}name '_ActionList_GetState'{$ENDIF},
  ActionList_SetState {$IFNDEF MSWINDOWS}name '_ActionList_SetState'{$ENDIF},
  ActionList_SetOnChange {$IFNDEF MSWINDOWS}name '_ActionList_SetOnChange'{$ENDIF},
  ActionList_GetComponentCount {$IFNDEF MSWINDOWS}name '_ActionList_GetComponentCount'{$ENDIF},
  ActionList_GetComponentIndex {$IFNDEF MSWINDOWS}name '_ActionList_GetComponentIndex'{$ENDIF},
  ActionList_SetComponentIndex {$IFNDEF MSWINDOWS}name '_ActionList_SetComponentIndex'{$ENDIF},
  ActionList_GetOwner {$IFNDEF MSWINDOWS}name '_ActionList_GetOwner'{$ENDIF},
  ActionList_GetName {$IFNDEF MSWINDOWS}name '_ActionList_GetName'{$ENDIF},
  ActionList_SetName {$IFNDEF MSWINDOWS}name '_ActionList_SetName'{$ENDIF},
  ActionList_GetTag {$IFNDEF MSWINDOWS}name '_ActionList_GetTag'{$ENDIF},
  ActionList_SetTag {$IFNDEF MSWINDOWS}name '_ActionList_SetTag'{$ENDIF},
  ActionList_GetComponents {$IFNDEF MSWINDOWS}name '_ActionList_GetComponents'{$ENDIF};

