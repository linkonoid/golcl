
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function ListGroup_Create(AOwner: TCollection): TListGroup; cdecl;
begin
  Result :=  TListGroup.Create(AOwner);
end;

procedure ListGroup_Free(AObj: TListGroup); cdecl;
begin
  AObj.Free;
end;

procedure ListGroup_Assign(AObj: TListGroup; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function ListGroup_GetNamePath(AObj: TListGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function ListGroup_ClassName(AObj: TListGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ClassName);
end;

function ListGroup_Equals(AObj: TListGroup; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListGroup_GetHashCode(AObj: TListGroup): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListGroup_ToString(AObj: TListGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function ListGroup_GetHeader(AObj: TListGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Header);
end;

procedure ListGroup_SetHeader(AObj: TListGroup; AValue: PWideChar); cdecl;
begin
  AObj.Header := AValue;
end;

function ListGroup_GetFooter(AObj: TListGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Footer);
end;

procedure ListGroup_SetFooter(AObj: TListGroup; AValue: PWideChar); cdecl;
begin
  AObj.Footer := AValue;
end;

function ListGroup_GetGroupID(AObj: TListGroup): Integer; cdecl;
begin
  Result :=  AObj.GroupID;
end;

procedure ListGroup_SetGroupID(AObj: TListGroup; AValue: Integer); cdecl;
begin
  AObj.GroupID := AValue;
end;

function ListGroup_GetState(AObj: TListGroup): TListGroupStateSet; cdecl;
begin
  Result :=  AObj.State;
end;

procedure ListGroup_SetState(AObj: TListGroup; AValue: TListGroupStateSet); cdecl;
begin
  AObj.State := AValue;
end;

function ListGroup_GetHeaderAlign(AObj: TListGroup): TAlignment; cdecl;
begin
  Result :=  AObj.HeaderAlign;
end;

procedure ListGroup_SetHeaderAlign(AObj: TListGroup; AValue: TAlignment); cdecl;
begin
  AObj.HeaderAlign := AValue;
end;

function ListGroup_GetFooterAlign(AObj: TListGroup): TAlignment; cdecl;
begin
  Result :=  AObj.FooterAlign;
end;

procedure ListGroup_SetFooterAlign(AObj: TListGroup; AValue: TAlignment); cdecl;
begin
  AObj.FooterAlign := AValue;
end;

function ListGroup_GetSubtitle(AObj: TListGroup): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.Subtitle);
end;

procedure ListGroup_SetSubtitle(AObj: TListGroup; AValue: PWideChar); cdecl;
begin
  AObj.Subtitle := AValue;
end;

function ListGroup_GetTitleImage(AObj: TListGroup): TImageIndex; cdecl;
begin
  Result :=  AObj.TitleImage;
end;

procedure ListGroup_SetTitleImage(AObj: TListGroup; AValue: TImageIndex); cdecl;
begin
  AObj.TitleImage := AValue;
end;

function ListGroup_GetIndex(AObj: TListGroup): Integer; cdecl;
begin
  Result :=  AObj.Index;
end;

procedure ListGroup_SetIndex(AObj: TListGroup; AValue: Integer); cdecl;
begin
  AObj.Index := AValue;
end;


exports
  ListGroup_Create {$IFNDEF MSWINDOWS}name '_ListGroup_Create'{$ENDIF},
  ListGroup_Free {$IFNDEF MSWINDOWS}name '_ListGroup_Free'{$ENDIF},
  ListGroup_Assign {$IFNDEF MSWINDOWS}name '_ListGroup_Assign'{$ENDIF},
  ListGroup_GetNamePath {$IFNDEF MSWINDOWS}name '_ListGroup_GetNamePath'{$ENDIF},
  ListGroup_ClassName {$IFNDEF MSWINDOWS}name '_ListGroup_ClassName'{$ENDIF},
  ListGroup_Equals {$IFNDEF MSWINDOWS}name '_ListGroup_Equals'{$ENDIF},
  ListGroup_GetHashCode {$IFNDEF MSWINDOWS}name '_ListGroup_GetHashCode'{$ENDIF},
  ListGroup_ToString {$IFNDEF MSWINDOWS}name '_ListGroup_ToString'{$ENDIF},
  ListGroup_GetHeader {$IFNDEF MSWINDOWS}name '_ListGroup_GetHeader'{$ENDIF},
  ListGroup_SetHeader {$IFNDEF MSWINDOWS}name '_ListGroup_SetHeader'{$ENDIF},
  ListGroup_GetFooter {$IFNDEF MSWINDOWS}name '_ListGroup_GetFooter'{$ENDIF},
  ListGroup_SetFooter {$IFNDEF MSWINDOWS}name '_ListGroup_SetFooter'{$ENDIF},
  ListGroup_GetGroupID {$IFNDEF MSWINDOWS}name '_ListGroup_GetGroupID'{$ENDIF},
  ListGroup_SetGroupID {$IFNDEF MSWINDOWS}name '_ListGroup_SetGroupID'{$ENDIF},
  ListGroup_GetState {$IFNDEF MSWINDOWS}name '_ListGroup_GetState'{$ENDIF},
  ListGroup_SetState {$IFNDEF MSWINDOWS}name '_ListGroup_SetState'{$ENDIF},
  ListGroup_GetHeaderAlign {$IFNDEF MSWINDOWS}name '_ListGroup_GetHeaderAlign'{$ENDIF},
  ListGroup_SetHeaderAlign {$IFNDEF MSWINDOWS}name '_ListGroup_SetHeaderAlign'{$ENDIF},
  ListGroup_GetFooterAlign {$IFNDEF MSWINDOWS}name '_ListGroup_GetFooterAlign'{$ENDIF},
  ListGroup_SetFooterAlign {$IFNDEF MSWINDOWS}name '_ListGroup_SetFooterAlign'{$ENDIF},
  ListGroup_GetSubtitle {$IFNDEF MSWINDOWS}name '_ListGroup_GetSubtitle'{$ENDIF},
  ListGroup_SetSubtitle {$IFNDEF MSWINDOWS}name '_ListGroup_SetSubtitle'{$ENDIF},
  ListGroup_GetTitleImage {$IFNDEF MSWINDOWS}name '_ListGroup_GetTitleImage'{$ENDIF},
  ListGroup_SetTitleImage {$IFNDEF MSWINDOWS}name '_ListGroup_SetTitleImage'{$ENDIF},
  ListGroup_GetIndex {$IFNDEF MSWINDOWS}name '_ListGroup_GetIndex'{$ENDIF},
  ListGroup_SetIndex {$IFNDEF MSWINDOWS}name '_ListGroup_SetIndex'{$ENDIF};

