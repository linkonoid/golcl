//http://www.freepascal.ru/forum/viewtopic.php?f=5&t=3155&start=30
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function PrintDialog_Create(AOwner: TComponent): TPrintDialog; cdecl;
begin
  Result :=  TPrintDialog.Create(AOwner);
end;

procedure PrintDialog_Free(AObj: TPrintDialog); cdecl;
begin
  AObj.Free;
end;

function PrintDialog_Execute(AObj: TPrintDialog; ParentWnd: HWND): LongBool; cdecl;
begin
  //Result :=  AObj.Execute(ParentWnd);
  Result :=  AObj.Execute();
end;

function PrintDialog_FindComponent(AObj: TPrintDialog; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function PrintDialog_GetNamePath(AObj: TPrintDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function PrintDialog_HasParent(AObj: TPrintDialog): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure PrintDialog_Assign(AObj: TPrintDialog; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function PrintDialog_ClassName(AObj: TPrintDialog): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function PrintDialog_Equals(AObj: TPrintDialog; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function PrintDialog_GetHashCode(AObj: TPrintDialog): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function PrintDialog_ToString(AObj: TPrintDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function PrintDialog_GetCollate(AObj: TPrintDialog): LongBool; cdecl;
begin
  Result :=  AObj.Collate;
end;

procedure PrintDialog_SetCollate(AObj: TPrintDialog; AValue: LongBool); cdecl;
begin
  AObj.Collate := AValue;
end;

function PrintDialog_GetCopies(AObj: TPrintDialog): Integer; cdecl;
begin
  Result :=  AObj.Copies;
end;

procedure PrintDialog_SetCopies(AObj: TPrintDialog; AValue: Integer); cdecl;
begin
  AObj.Copies := AValue;
end;

function PrintDialog_GetFromPage(AObj: TPrintDialog): Integer; cdecl;
begin
  Result :=  AObj.FromPage;
end;

procedure PrintDialog_SetFromPage(AObj: TPrintDialog; AValue: Integer); cdecl;
begin
  AObj.FromPage := AValue;
end;

function PrintDialog_GetMinPage(AObj: TPrintDialog): Integer; cdecl;
begin
  Result :=  AObj.MinPage;
end;

procedure PrintDialog_SetMinPage(AObj: TPrintDialog; AValue: Integer); cdecl;
begin
  AObj.MinPage := AValue;
end;

function PrintDialog_GetMaxPage(AObj: TPrintDialog): Integer; cdecl;
begin
  Result :=  AObj.MaxPage;
end;

procedure PrintDialog_SetMaxPage(AObj: TPrintDialog; AValue: Integer); cdecl;
begin
  AObj.MaxPage := AValue;
end;

function PrintDialog_GetOptions(AObj: TPrintDialog): TPrintDialogOptions; cdecl;
begin
  Result :=  AObj.Options;
end;

procedure PrintDialog_SetOptions(AObj: TPrintDialog; AValue: TPrintDialogOptions); cdecl;
begin
  AObj.Options := AValue;
end;

function PrintDialog_GetPrintToFile(AObj: TPrintDialog): LongBool; cdecl;
begin
  Result :=  AObj.PrintToFile;
end;

procedure PrintDialog_SetPrintToFile(AObj: TPrintDialog; AValue: LongBool); cdecl;
begin
  AObj.PrintToFile := AValue;
end;

function PrintDialog_GetPrintRange(AObj: TPrintDialog): TPrintRange; cdecl;
begin
  Result :=  AObj.PrintRange;
end;

procedure PrintDialog_SetPrintRange(AObj: TPrintDialog; AValue: TPrintRange); cdecl;
begin
  AObj.PrintRange := AValue;
end;

function PrintDialog_GetToPage(AObj: TPrintDialog): Integer; cdecl;
begin
  Result :=  AObj.ToPage;
end;

procedure PrintDialog_SetToPage(AObj: TPrintDialog; AValue: Integer); cdecl;
begin
  AObj.ToPage := AValue;
end;

function PrintDialog_GetHandle(AObj: TPrintDialog): HWND; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure PrintDialog_SetOnClose(AObj: TPrintDialog; AEventId: NativeUInt); stdcall;
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

procedure PrintDialog_SetOnShow(AObj: TPrintDialog; AEventId: NativeUInt); stdcall;
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

function PrintDialog_GetComponentCount(AObj: TPrintDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function PrintDialog_GetComponentIndex(AObj: TPrintDialog): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure PrintDialog_SetComponentIndex(AObj: TPrintDialog; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function PrintDialog_GetOwner(AObj: TPrintDialog): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function PrintDialog_GetName(AObj: TPrintDialog): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure PrintDialog_SetName(AObj: TPrintDialog; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function PrintDialog_GetTag(AObj: TPrintDialog): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure PrintDialog_SetTag(AObj: TPrintDialog; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function PrintDialog_GetComponents(AObj: TPrintDialog; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  PrintDialog_Create {$IFNDEF MSWINDOWS}name '_PrintDialog_Create'{$ENDIF},
  PrintDialog_Free {$IFNDEF MSWINDOWS}name '_PrintDialog_Free'{$ENDIF},
  PrintDialog_Execute {$IFNDEF MSWINDOWS}name '_PrintDialog_Execute'{$ENDIF},
  PrintDialog_FindComponent {$IFNDEF MSWINDOWS}name '_PrintDialog_FindComponent'{$ENDIF},
  PrintDialog_GetNamePath {$IFNDEF MSWINDOWS}name '_PrintDialog_GetNamePath'{$ENDIF},
  PrintDialog_HasParent {$IFNDEF MSWINDOWS}name '_PrintDialog_HasParent'{$ENDIF},
  PrintDialog_Assign {$IFNDEF MSWINDOWS}name '_PrintDialog_Assign'{$ENDIF},
  PrintDialog_ClassName {$IFNDEF MSWINDOWS}name '_PrintDialog_ClassName'{$ENDIF},
  PrintDialog_Equals {$IFNDEF MSWINDOWS}name '_PrintDialog_Equals'{$ENDIF},
  PrintDialog_GetHashCode {$IFNDEF MSWINDOWS}name '_PrintDialog_GetHashCode'{$ENDIF},
  PrintDialog_ToString {$IFNDEF MSWINDOWS}name '_PrintDialog_ToString'{$ENDIF},
  PrintDialog_GetCollate {$IFNDEF MSWINDOWS}name '_PrintDialog_GetCollate'{$ENDIF},
  PrintDialog_SetCollate {$IFNDEF MSWINDOWS}name '_PrintDialog_SetCollate'{$ENDIF},
  PrintDialog_GetCopies {$IFNDEF MSWINDOWS}name '_PrintDialog_GetCopies'{$ENDIF},
  PrintDialog_SetCopies {$IFNDEF MSWINDOWS}name '_PrintDialog_SetCopies'{$ENDIF},
  PrintDialog_GetFromPage {$IFNDEF MSWINDOWS}name '_PrintDialog_GetFromPage'{$ENDIF},
  PrintDialog_SetFromPage {$IFNDEF MSWINDOWS}name '_PrintDialog_SetFromPage'{$ENDIF},
  PrintDialog_GetMinPage {$IFNDEF MSWINDOWS}name '_PrintDialog_GetMinPage'{$ENDIF},
  PrintDialog_SetMinPage {$IFNDEF MSWINDOWS}name '_PrintDialog_SetMinPage'{$ENDIF},
  PrintDialog_GetMaxPage {$IFNDEF MSWINDOWS}name '_PrintDialog_GetMaxPage'{$ENDIF},
  PrintDialog_SetMaxPage {$IFNDEF MSWINDOWS}name '_PrintDialog_SetMaxPage'{$ENDIF},
  PrintDialog_GetOptions {$IFNDEF MSWINDOWS}name '_PrintDialog_GetOptions'{$ENDIF},
  PrintDialog_SetOptions {$IFNDEF MSWINDOWS}name '_PrintDialog_SetOptions'{$ENDIF},
  PrintDialog_GetPrintToFile {$IFNDEF MSWINDOWS}name '_PrintDialog_GetPrintToFile'{$ENDIF},
  PrintDialog_SetPrintToFile {$IFNDEF MSWINDOWS}name '_PrintDialog_SetPrintToFile'{$ENDIF},
  PrintDialog_GetPrintRange {$IFNDEF MSWINDOWS}name '_PrintDialog_GetPrintRange'{$ENDIF},
  PrintDialog_SetPrintRange {$IFNDEF MSWINDOWS}name '_PrintDialog_SetPrintRange'{$ENDIF},
  PrintDialog_GetToPage {$IFNDEF MSWINDOWS}name '_PrintDialog_GetToPage'{$ENDIF},
  PrintDialog_SetToPage {$IFNDEF MSWINDOWS}name '_PrintDialog_SetToPage'{$ENDIF},
  PrintDialog_GetHandle {$IFNDEF MSWINDOWS}name '_PrintDialog_GetHandle'{$ENDIF},
  PrintDialog_SetOnClose {$IFNDEF MSWINDOWS}name '_PrintDialog_SetOnClose'{$ENDIF},
  PrintDialog_SetOnShow {$IFNDEF MSWINDOWS}name '_PrintDialog_SetOnShow'{$ENDIF},
  PrintDialog_GetComponentCount {$IFNDEF MSWINDOWS}name '_PrintDialog_GetComponentCount'{$ENDIF},
  PrintDialog_GetComponentIndex {$IFNDEF MSWINDOWS}name '_PrintDialog_GetComponentIndex'{$ENDIF},
  PrintDialog_SetComponentIndex {$IFNDEF MSWINDOWS}name '_PrintDialog_SetComponentIndex'{$ENDIF},
  PrintDialog_GetOwner {$IFNDEF MSWINDOWS}name '_PrintDialog_GetOwner'{$ENDIF},
  PrintDialog_GetName {$IFNDEF MSWINDOWS}name '_PrintDialog_GetName'{$ENDIF},
  PrintDialog_SetName {$IFNDEF MSWINDOWS}name '_PrintDialog_SetName'{$ENDIF},
  PrintDialog_GetTag {$IFNDEF MSWINDOWS}name '_PrintDialog_GetTag'{$ENDIF},
  PrintDialog_SetTag {$IFNDEF MSWINDOWS}name '_PrintDialog_SetTag'{$ENDIF},
  PrintDialog_GetComponents {$IFNDEF MSWINDOWS}name '_PrintDialog_GetComponents'{$ENDIF};

