//http://helpdelphi.ru/balloonhint/
//http://wiki.lazarus.freepascal.org/TPopupNotifier
//http://www.freepascal.ru/forum/viewtopic.php?f=23&t=9031
//http://lazplanet.blogspot.ru/2013/05/how-to-show-tooltip-balloon-tip-and.html
//http://www.programmersforum.ru/showthread.php?t=104133

//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function BalloonHint_Create(AOwner: TComponent): TBalloonHint; cdecl;
begin
  Result :=  TBalloonHint.Create(AOwner);
end;

procedure BalloonHint_Free(AObj: TBalloonHint); cdecl;
begin
  AObj.Free;
end;

procedure BalloonHint_ShowHint(AObj: TBalloonHint); cdecl;
begin
  AObj.ShowHint;
end;

procedure BalloonHint_HideHint(AObj: TBalloonHint); cdecl;
begin
  AObj.HideHint;
end;

function BalloonHint_FindComponent(AObj: TBalloonHint; AName: PWideChar): TComponent; cdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function BalloonHint_GetNamePath(AObj: TBalloonHint): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function BalloonHint_HasParent(AObj: TBalloonHint): LongBool; cdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure BalloonHint_Assign(AObj: TBalloonHint; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function BalloonHint_ClassName(AObj: TBalloonHint): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function BalloonHint_Equals(AObj: TBalloonHint; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function BalloonHint_GetHashCode(AObj: TBalloonHint): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function BalloonHint_ToString(AObj: TBalloonHint): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function BalloonHint_GetTitle(AObj: TBalloonHint): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Title);
end;

procedure BalloonHint_SetTitle(AObj: TBalloonHint; AValue: PWideChar); cdecl;
begin
  AObj.Title := AValue;
end;

function BalloonHint_GetDescription(AObj: TBalloonHint): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Description);
end;

procedure BalloonHint_SetDescription(AObj: TBalloonHint; AValue: PWideChar); cdecl;
begin
  AObj.Description := AValue;
end;

function BalloonHint_GetImageIndex(AObj: TBalloonHint): TImageIndex; cdecl;
begin
  Result :=  AObj.ImageIndex;
end;

procedure BalloonHint_SetImageIndex(AObj: TBalloonHint; AValue: TImageIndex); cdecl;
begin
  AObj.ImageIndex := AValue;
end;

function BalloonHint_GetImages(AObj: TBalloonHint): TImageList; cdecl;
begin
  Result :=  AObj.Images;
end;

procedure BalloonHint_SetImages(AObj: TBalloonHint; AValue: TImageList); cdecl;
begin
  AObj.Images := AValue;
end;

function BalloonHint_GetStyle(AObj: TBalloonHint): TBalloonHintStyle; cdecl;
begin
  Result :=  AObj.Style;
end;

procedure BalloonHint_SetStyle(AObj: TBalloonHint; AValue: TBalloonHintStyle); cdecl;
begin
  AObj.Style := AValue;
end;

function BalloonHint_GetDelay(AObj: TBalloonHint): Cardinal; cdecl;
begin
  Result :=  AObj.Delay;
end;

procedure BalloonHint_SetDelay(AObj: TBalloonHint; AValue: Cardinal); cdecl;
begin
  AObj.Delay := AValue;
end;

function BalloonHint_GetHideAfter(AObj: TBalloonHint): Integer; cdecl;
begin
  Result :=  AObj.HideAfter;
end;

procedure BalloonHint_SetHideAfter(AObj: TBalloonHint; AValue: Integer); cdecl;
begin
  AObj.HideAfter := AValue;
end;

function BalloonHint_GetComponentCount(AObj: TBalloonHint): Integer; cdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function BalloonHint_GetComponentIndex(AObj: TBalloonHint): Integer; cdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure BalloonHint_SetComponentIndex(AObj: TBalloonHint; AValue: Integer); cdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function BalloonHint_GetOwner(AObj: TBalloonHint): TComponent; cdecl;
begin
  Result :=  AObj.Owner;
end;

function BalloonHint_GetName(AObj: TBalloonHint): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Name);
end;

procedure BalloonHint_SetName(AObj: TBalloonHint; AValue: PWideChar); cdecl;
begin
  AObj.Name := AValue;
end;

function BalloonHint_GetTag(AObj: TBalloonHint): NativeInt; cdecl;
begin
  Result :=  AObj.Tag;
end;

procedure BalloonHint_SetTag(AObj: TBalloonHint; AValue: NativeInt); cdecl;
begin
  AObj.Tag := AValue;
end;

function BalloonHint_GetComponents(AObj: TBalloonHint; AIndex: Integer): TComponent; cdecl;
begin
  Result :=  AObj.Components[AIndex];
end;


exports
  BalloonHint_Create {$IFNDEF MSWINDOWS}name '_BalloonHint_Create'{$ENDIF},
  BalloonHint_Free {$IFNDEF MSWINDOWS}name '_BalloonHint_Free'{$ENDIF},
  BalloonHint_ShowHint {$IFNDEF MSWINDOWS}name '_BalloonHint_ShowHint'{$ENDIF},
  BalloonHint_HideHint {$IFNDEF MSWINDOWS}name '_BalloonHint_HideHint'{$ENDIF},
  BalloonHint_FindComponent {$IFNDEF MSWINDOWS}name '_BalloonHint_FindComponent'{$ENDIF},
  BalloonHint_GetNamePath {$IFNDEF MSWINDOWS}name '_BalloonHint_GetNamePath'{$ENDIF},
  BalloonHint_HasParent {$IFNDEF MSWINDOWS}name '_BalloonHint_HasParent'{$ENDIF},
  BalloonHint_Assign {$IFNDEF MSWINDOWS}name '_BalloonHint_Assign'{$ENDIF},
  BalloonHint_ClassName {$IFNDEF MSWINDOWS}name '_BalloonHint_ClassName'{$ENDIF},
  BalloonHint_Equals {$IFNDEF MSWINDOWS}name '_BalloonHint_Equals'{$ENDIF},
  BalloonHint_GetHashCode {$IFNDEF MSWINDOWS}name '_BalloonHint_GetHashCode'{$ENDIF},
  BalloonHint_ToString {$IFNDEF MSWINDOWS}name '_BalloonHint_ToString'{$ENDIF},
  BalloonHint_GetTitle {$IFNDEF MSWINDOWS}name '_BalloonHint_GetTitle'{$ENDIF},
  BalloonHint_SetTitle {$IFNDEF MSWINDOWS}name '_BalloonHint_SetTitle'{$ENDIF},
  BalloonHint_GetDescription {$IFNDEF MSWINDOWS}name '_BalloonHint_GetDescription'{$ENDIF},
  BalloonHint_SetDescription {$IFNDEF MSWINDOWS}name '_BalloonHint_SetDescription'{$ENDIF},
  BalloonHint_GetImageIndex {$IFNDEF MSWINDOWS}name '_BalloonHint_GetImageIndex'{$ENDIF},
  BalloonHint_SetImageIndex {$IFNDEF MSWINDOWS}name '_BalloonHint_SetImageIndex'{$ENDIF},
  BalloonHint_GetImages {$IFNDEF MSWINDOWS}name '_BalloonHint_GetImages'{$ENDIF},
  BalloonHint_SetImages {$IFNDEF MSWINDOWS}name '_BalloonHint_SetImages'{$ENDIF},
  BalloonHint_GetStyle {$IFNDEF MSWINDOWS}name '_BalloonHint_GetStyle'{$ENDIF},
  BalloonHint_SetStyle {$IFNDEF MSWINDOWS}name '_BalloonHint_SetStyle'{$ENDIF},
  BalloonHint_GetDelay {$IFNDEF MSWINDOWS}name '_BalloonHint_GetDelay'{$ENDIF},
  BalloonHint_SetDelay {$IFNDEF MSWINDOWS}name '_BalloonHint_SetDelay'{$ENDIF},
  BalloonHint_GetHideAfter {$IFNDEF MSWINDOWS}name '_BalloonHint_GetHideAfter'{$ENDIF},
  BalloonHint_SetHideAfter {$IFNDEF MSWINDOWS}name '_BalloonHint_SetHideAfter'{$ENDIF},
  BalloonHint_GetComponentCount {$IFNDEF MSWINDOWS}name '_BalloonHint_GetComponentCount'{$ENDIF},
  BalloonHint_GetComponentIndex {$IFNDEF MSWINDOWS}name '_BalloonHint_GetComponentIndex'{$ENDIF},
  BalloonHint_SetComponentIndex {$IFNDEF MSWINDOWS}name '_BalloonHint_SetComponentIndex'{$ENDIF},
  BalloonHint_GetOwner {$IFNDEF MSWINDOWS}name '_BalloonHint_GetOwner'{$ENDIF},
  BalloonHint_GetName {$IFNDEF MSWINDOWS}name '_BalloonHint_GetName'{$ENDIF},
  BalloonHint_SetName {$IFNDEF MSWINDOWS}name '_BalloonHint_SetName'{$ENDIF},
  BalloonHint_GetTag {$IFNDEF MSWINDOWS}name '_BalloonHint_GetTag'{$ENDIF},
  BalloonHint_SetTag {$IFNDEF MSWINDOWS}name '_BalloonHint_SetTag'{$ENDIF},
  BalloonHint_GetComponents {$IFNDEF MSWINDOWS}name '_BalloonHint_GetComponents'{$ENDIF};

