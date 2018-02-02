//----------------------------------------
// Copyright Linkonoid. All Rights Reserved.
// linkonoid.com
//----------------------------------------

function StringGrid_Create(AOwner: TComponent): TKGrid; stdcall;
begin
  Result := TKGrid.Create(AOwner)
end;

procedure StringGrid_Free(AObj: TKGrid); cdecl;
begin
  AObj.Free;
end;

function StringGrid_GetParent(AObj: TKGrid): TWinControl; cdecl;
begin
  Result :=  AObj.Parent;
end;

procedure StringGrid_SetParent(AObj: TKGrid; AValue: TWinControl); cdecl;
begin
  AObj.Parent := AValue;
end;

procedure StringGrid_SetLeft(AObj: TKGrid; AValue: Integer); cdecl;
begin
  AObj.Left := AValue;
end;

procedure StringGrid_SetTop(AObj: TKGrid; AValue: Integer); cdecl;
begin
  AObj.Top := AValue;
end;

procedure StringGrid_Cells(AObj: TKGrid; ACol,ARow :Integer; AValue:PWideChar); cdecl;
//var
 //CellData: TCellData;
begin
  //CellData := TCellData.Create;
  //StateYes := False;
  //CellData.Foreground := clBlack;
  //CellData.Background := clWhite;
  AObj.Col:=ACol;
  AObj.Row:=Arow;
  AObj.FocusCell(ACol,Arow);
  AObj.Cells[ACol,Arow] := AValue;
end;

exports
  StringGrid_Create {$IFNDEF MSWINDOWS}name '_StringGrid_Create'{$ENDIF},
  StringGrid_Free {$IFNDEF MSWINDOWS}name '_StringGrid_Free'{$ENDIF},
  //StringGrid_GetParent {$IFNDEF MSWINDOWS}name '_StringGrid_GetParent'{$ENDIF},
  StringGrid_SetParent {$IFNDEF MSWINDOWS}name '_StringGrid_SetParent'{$ENDIF},
  StringGrid_SetTop {$IFNDEF MSWINDOWS}name '_StringGrid_SetTop'{$ENDIF},
  StringGrid_SetLeft {$IFNDEF MSWINDOWS}name '_StringGrid_SetLeft'{$ENDIF},
  StringGrid_Cells {$IFNDEF MSWINDOWS}name '_StringGrid_Cell'{$ENDIF};
