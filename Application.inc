//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------


 // TApplication
function Application_Instance: TApplication; stdcall;
begin
  Result := Application;
end;

function Application_CreateForm(App: TApplication): TForm; stdcall;
begin
  App.CreateForm(TForm, Result);
end;

function Application_Create(AOwner: TComponent): TApplication; cdecl;
begin
  Result :=  TApplication.Create(AOwner);
end;

procedure Application_Free(AObj: TApplication); cdecl;
begin
  AObj.Free;
end;

procedure Application_ActivateHint(AObj: TApplication; var CursorPos: TPoint); cdecl;
begin
  AObj.ActivateHint(CursorPos);
end;

procedure Application_BringToFront(AObj: TApplication); cdecl;
begin
  AObj.BringToFront;
end;

procedure Application_CancelHint(AObj: TApplication); cdecl;
begin
  AObj.CancelHint;
end;

procedure Application_HandleMessage(AObj: TApplication); cdecl;
begin
  AObj.HandleMessage;
end;

procedure Application_HideHint(AObj: TApplication); cdecl;
begin
  AObj.HideHint;
end;

procedure Application_Initialize(AObj: TApplication); cdecl;
begin
  AObj.Initialize;
end;

procedure Application_Minimize(AObj: TApplication); cdecl;
begin
  AObj.Minimize;
end;

procedure Application_ModalStarted(AObj: TApplication); cdecl;
begin
  AObj.ModalStarted;
end;

procedure Application_ModalFinished(AObj: TApplication); cdecl;
begin
  AObj.ModalFinished;
end;

procedure Application_NormalizeAllTopMosts(AObj: TApplication); cdecl;
begin
  //AObj.NormalizeAllTopMosts;
end;

procedure Application_NormalizeTopMosts(AObj: TApplication); cdecl;
begin
  //AObj.NormalizeTopMosts;
end;

procedure Application_ProcessMessages(AObj: TApplication); cdecl;
begin
  AObj.ProcessMessages;
end;

procedure Application_Restore(AObj: TApplication); cdecl;
begin
  AObj.Restore;
end;

procedure Application_RestoreTopMosts(AObj: TApplication); cdecl;
begin
  //AObj.RestoreTopMosts;
end;

procedure Application_Run(AObj: TApplication); cdecl;
begin
  AObj.Run;
end;

procedure Application_Terminate(AObj: TApplication); cdecl;
begin
  AObj.Terminate;
end;

function Application_MessageBox(AObj: TApplication; Text: PWideChar; Caption: PWideChar; Flags: Integer): Integer; cdecl;
begin
  Result :=  AObj.MessageBox(PChar(Text), PChar(Caption), Flags);
end;

function Application_FindComponent(AObj: TApplication; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Application_GetNamePath(AObj: TApplication): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Application_HasParent(AObj: TApplication): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Application_Assign(AObj: TApplication; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Application_ClassName(AObj: TApplication): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Application_Equals(AObj: TApplication; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Application_GetHashCode(AObj: TApplication): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Application_ToString(AObj: TApplication): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Application_GetDialogHandle(AObj: TApplication): HWND; cdecl;
begin
  //Result :=  AObj.DialogHandle;
end;

procedure Application_SetDialogHandle(AObj: TApplication; AValue: HWND); cdecl;
begin
  //AObj.DialogHandle := AValue;
end;

function Application_GetExeName(AObj: TApplication): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ExeName);
end;

function Application_GetHint(AObj: TApplication): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Hint);
end;

procedure Application_SetHint(AObj: TApplication; AValue: PWideChar); cdecl;
begin
  AObj.Hint := AValue;
end;

function Application_GetHintColor(AObj: TApplication): TColor; cdecl;
begin
  Result :=  AObj.HintColor;
end;

procedure Application_SetHintColor(AObj: TApplication; AValue: TColor); cdecl;
begin
  AObj.HintColor := AValue;
end;

function Application_GetHintHidePause(AObj: TApplication): Integer; cdecl;
begin
  Result :=  AObj.HintHidePause;
end;

procedure Application_SetHintHidePause(AObj: TApplication; AValue: Integer); cdecl;
begin
  AObj.HintHidePause := AValue;
end;

function Application_GetHintPause(AObj: TApplication): Integer; cdecl;
begin
  Result :=  AObj.HintPause;
end;

procedure Application_SetHintPause(AObj: TApplication; AValue: Integer); cdecl;
begin
  AObj.HintPause := AValue;
end;

function Application_GetHintShortCuts(AObj: TApplication): LongBool; cdecl;
begin
  Result :=  AObj.HintShortCuts;
end;

procedure Application_SetHintShortCuts(AObj: TApplication; AValue: LongBool); cdecl;
begin
  AObj.HintShortCuts := AValue;
end;

function Application_GetHintShortPause(AObj: TApplication): Integer; cdecl;
begin
  Result :=  AObj.HintShortPause;
end;

procedure Application_SetHintShortPause(AObj: TApplication; AValue: Integer); cdecl;
begin
  AObj.HintShortPause := AValue;
end;

function Application_GetIcon(AObj: TApplication): TIcon; cdecl;
begin
  Result :=  AObj.Icon;
end;

procedure Application_SetIcon(AObj: TApplication; AValue: TIcon); cdecl;
begin
  AObj.Icon := AValue;
end;

function Application_GetIsMetropolisUI(AObj: TApplication): LongBool; cdecl;
begin
  //Result :=  AObj.IsMetropolisUI;

end;

function Application_GetMainForm(AObj: TApplication): TForm; cdecl;
begin
  Result :=  AObj.MainForm;
end;

function Application_GetMainFormHandle(AObj: TApplication): HWND; cdecl;
begin
  Result :=  AObj.MainFormHandle;
end;

function Application_GetMainFormOnTaskBar(AObj: TApplication): LongBool; cdecl;
begin
  Result :=  AObj.MainFormOnTaskBar;
end;

procedure Application_SetMainFormOnTaskBar(AObj: TApplication; AValue: LongBool); cdecl;
begin
  AObj.MainFormOnTaskBar := AValue;
end;

function Application_GetBiDiMode(AObj: TApplication): TBiDiMode; cdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Application_SetBiDiMode(AObj: TApplication; AValue: TBiDiMode); cdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Application_GetShowHint(AObj: TApplication): LongBool; cdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Application_SetShowHint(AObj: TApplication; AValue: LongBool); cdecl;
begin
  AObj.ShowHint := AValue;
end;

function Application_GetShowMainForm(AObj: TApplication): LongBool; cdecl;
begin
  Result :=  AObj.ShowMainForm;
end;

procedure Application_SetShowMainForm(AObj: TApplication; AValue: LongBool); cdecl;
begin
  AObj.ShowMainForm := AValue;
end;

function Application_GetTitle(AObj: TApplication): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Title);
end;

procedure Application_SetTitle(AObj: TApplication; AValue: PWideChar); cdecl;
begin
  AObj.Title := AValue;
end;

procedure Application_SetOnException(AObj: TApplication; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnException := nil;
    TEventClass.Remove(AObj, geException);
    Exit;
  end;
  AObj.OnException := TEventClass.OnException;
  TEventClass.Add(AObj, geException, AEventId);
end;


procedure Application_SetOnMinimize(AObj: TApplication; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMinimize := nil;
    TEventClass.Remove(AObj, geMinimize);
    Exit;
  end;
  AObj.OnMinimize := TEventClass.OnMinimize;
  TEventClass.Add(AObj, geMinimize, AEventId);
end;

procedure Application_SetOnRestore(AObj: TApplication; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnRestore := nil;
    TEventClass.Remove(AObj, geRestore);
    Exit;
  end;
  AObj.OnRestore := TEventClass.OnRestore;
  TEventClass.Add(AObj, geRestore, AEventId);
end;

function Application_GetHandle(AObj: TApplication): HWND; cdecl;
begin
  //Result :=  AObj.Handle;
end;

procedure Application_SetHandle(AObj: TApplication; AValue: HWND); cdecl;
begin
  //AObj.Handle := AValue;
end;

function Application_GetComponentCount(AObj: TApplication): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Application_GetComponentIndex(AObj: TApplication): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Application_SetComponentIndex(AObj: TApplication; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Application_GetOwner(AObj: TApplication): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function Application_GetName(AObj: TApplication): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure Application_SetName(AObj: TApplication; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function Application_GetTag(AObj: TApplication): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Application_SetTag(AObj: TApplication; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function Application_GetComponents(AObj: TApplication; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  Application_Create {$IFNDEF MSWINDOWS}name '_Application_Create'{$ENDIF},
  Application_Instance {$IFNDEF MSWINDOWS}name '_Application_Instance'{$ENDIF},
  Application_CreateForm {$IFNDEF MSWINDOWS}name '_Application_CreateForm'{$ENDIF},
  Application_Free {$IFNDEF MSWINDOWS}name '_Application_Free'{$ENDIF},
  Application_ActivateHint {$IFNDEF MSWINDOWS}name '_Application_ActivateHint'{$ENDIF},
  Application_BringToFront {$IFNDEF MSWINDOWS}name '_Application_BringToFront'{$ENDIF},
  Application_CancelHint {$IFNDEF MSWINDOWS}name '_Application_CancelHint'{$ENDIF},
  Application_HandleMessage {$IFNDEF MSWINDOWS}name '_Application_HandleMessage'{$ENDIF},
  Application_HideHint {$IFNDEF MSWINDOWS}name '_Application_HideHint'{$ENDIF},
  Application_Initialize {$IFNDEF MSWINDOWS}name '_Application_Initialize'{$ENDIF},
  Application_Minimize {$IFNDEF MSWINDOWS}name '_Application_Minimize'{$ENDIF},
  Application_ModalStarted {$IFNDEF MSWINDOWS}name '_Application_ModalStarted'{$ENDIF},
  Application_ModalFinished {$IFNDEF MSWINDOWS}name '_Application_ModalFinished'{$ENDIF},
  Application_NormalizeAllTopMosts {$IFNDEF MSWINDOWS}name '_Application_NormalizeAllTopMosts'{$ENDIF},
  Application_NormalizeTopMosts {$IFNDEF MSWINDOWS}name '_Application_NormalizeTopMosts'{$ENDIF},
  Application_ProcessMessages {$IFNDEF MSWINDOWS}name '_Application_ProcessMessages'{$ENDIF},
  Application_Restore {$IFNDEF MSWINDOWS}name '_Application_Restore'{$ENDIF},
  Application_RestoreTopMosts {$IFNDEF MSWINDOWS}name '_Application_RestoreTopMosts'{$ENDIF},
  Application_Run {$IFNDEF MSWINDOWS}name '_Application_Run'{$ENDIF},
  Application_Terminate {$IFNDEF MSWINDOWS}name '_Application_Terminate'{$ENDIF},
  Application_MessageBox {$IFNDEF MSWINDOWS}name '_Application_MessageBox'{$ENDIF},
  Application_FindComponent {$IFNDEF MSWINDOWS}name '_Application_FindComponent'{$ENDIF},
  Application_GetNamePath {$IFNDEF MSWINDOWS}name '_Application_GetNamePath'{$ENDIF},
  Application_HasParent {$IFNDEF MSWINDOWS}name '_Application_HasParent'{$ENDIF},
  Application_Assign {$IFNDEF MSWINDOWS}name '_Application_Assign'{$ENDIF},
  Application_ClassName {$IFNDEF MSWINDOWS}name '_Application_ClassName'{$ENDIF},
  Application_Equals {$IFNDEF MSWINDOWS}name '_Application_Equals'{$ENDIF},
  Application_GetHashCode {$IFNDEF MSWINDOWS}name '_Application_GetHashCode'{$ENDIF},
  Application_ToString {$IFNDEF MSWINDOWS}name '_Application_ToString'{$ENDIF},
  Application_GetDialogHandle {$IFNDEF MSWINDOWS}name '_Application_GetDialogHandle'{$ENDIF},
  Application_SetDialogHandle {$IFNDEF MSWINDOWS}name '_Application_SetDialogHandle'{$ENDIF},
  Application_GetExeName {$IFNDEF MSWINDOWS}name '_Application_GetExeName'{$ENDIF},
  Application_GetHint {$IFNDEF MSWINDOWS}name '_Application_GetHint'{$ENDIF},
  Application_SetHint {$IFNDEF MSWINDOWS}name '_Application_SetHint'{$ENDIF},
  Application_GetHintColor {$IFNDEF MSWINDOWS}name '_Application_GetHintColor'{$ENDIF},
  Application_SetHintColor {$IFNDEF MSWINDOWS}name '_Application_SetHintColor'{$ENDIF},
  Application_GetHintHidePause {$IFNDEF MSWINDOWS}name '_Application_GetHintHidePause'{$ENDIF},
  Application_SetHintHidePause {$IFNDEF MSWINDOWS}name '_Application_SetHintHidePause'{$ENDIF},
  Application_GetHintPause {$IFNDEF MSWINDOWS}name '_Application_GetHintPause'{$ENDIF},
  Application_SetHintPause {$IFNDEF MSWINDOWS}name '_Application_SetHintPause'{$ENDIF},
  Application_GetHintShortCuts {$IFNDEF MSWINDOWS}name '_Application_GetHintShortCuts'{$ENDIF},
  Application_SetHintShortCuts {$IFNDEF MSWINDOWS}name '_Application_SetHintShortCuts'{$ENDIF},
  Application_GetHintShortPause {$IFNDEF MSWINDOWS}name '_Application_GetHintShortPause'{$ENDIF},
  Application_SetHintShortPause {$IFNDEF MSWINDOWS}name '_Application_SetHintShortPause'{$ENDIF},
  Application_GetIcon {$IFNDEF MSWINDOWS}name '_Application_GetIcon'{$ENDIF},
  Application_SetIcon {$IFNDEF MSWINDOWS}name '_Application_SetIcon'{$ENDIF},
  Application_GetIsMetropolisUI {$IFNDEF MSWINDOWS}name '_Application_GetIsMetropolisUI'{$ENDIF},
  Application_GetMainForm {$IFNDEF MSWINDOWS}name '_Application_GetMainForm'{$ENDIF},
  Application_GetMainFormHandle {$IFNDEF MSWINDOWS}name '_Application_GetMainFormHandle'{$ENDIF},
  Application_GetMainFormOnTaskBar {$IFNDEF MSWINDOWS}name '_Application_GetMainFormOnTaskBar'{$ENDIF},
  Application_SetMainFormOnTaskBar {$IFNDEF MSWINDOWS}name '_Application_SetMainFormOnTaskBar'{$ENDIF},
  Application_GetBiDiMode {$IFNDEF MSWINDOWS}name '_Application_GetBiDiMode'{$ENDIF},
  Application_SetBiDiMode {$IFNDEF MSWINDOWS}name '_Application_SetBiDiMode'{$ENDIF},
  Application_GetShowHint {$IFNDEF MSWINDOWS}name '_Application_GetShowHint'{$ENDIF},
  Application_SetShowHint {$IFNDEF MSWINDOWS}name '_Application_SetShowHint'{$ENDIF},
  Application_GetShowMainForm {$IFNDEF MSWINDOWS}name '_Application_GetShowMainForm'{$ENDIF},
  Application_SetShowMainForm {$IFNDEF MSWINDOWS}name '_Application_SetShowMainForm'{$ENDIF},
  Application_GetTitle {$IFNDEF MSWINDOWS}name '_Application_GetTitle'{$ENDIF},
  Application_SetTitle {$IFNDEF MSWINDOWS}name '_Application_SetTitle'{$ENDIF},
  Application_SetOnException {$IFNDEF MSWINDOWS}name '_Application_SetOnException'{$ENDIF},
  Application_SetOnMinimize {$IFNDEF MSWINDOWS}name '_Application_SetOnMinimize'{$ENDIF},
  Application_SetOnRestore {$IFNDEF MSWINDOWS}name '_Application_SetOnRestore'{$ENDIF},
  Application_GetHandle {$IFNDEF MSWINDOWS}name '_Application_GetHandle'{$ENDIF},
  Application_SetHandle {$IFNDEF MSWINDOWS}name '_Application_SetHandle'{$ENDIF},
  Application_GetComponentCount {$IFNDEF MSWINDOWS}name '_Application_GetComponentCount'{$ENDIF},
  Application_GetComponentIndex {$IFNDEF MSWINDOWS}name '_Application_GetComponentIndex'{$ENDIF},
  Application_SetComponentIndex {$IFNDEF MSWINDOWS}name '_Application_SetComponentIndex'{$ENDIF},
  Application_GetOwner {$IFNDEF MSWINDOWS}name '_Application_GetOwner'{$ENDIF},
  Application_GetName {$IFNDEF MSWINDOWS}name '_Application_GetName'{$ENDIF},
  Application_SetName {$IFNDEF MSWINDOWS}name '_Application_SetName'{$ENDIF},
  Application_GetTag {$IFNDEF MSWINDOWS}name '_Application_GetTag'{$ENDIF},
  Application_SetTag {$IFNDEF MSWINDOWS}name '_Application_SetTag'{$ENDIF},
  Application_GetComponents {$IFNDEF MSWINDOWS}name '_Application_GetComponents'{$ENDIF};

