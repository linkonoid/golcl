//http://forum.lazarus.freepascal.org/index.php?topic=9413.0
//http://forum.lazarus.freepascal.org/index.php?topic=18874.0
//http://forum.lazarus.freepascal.org/index.php?topic=33225.0
//http://wiki.lazarus.freepascal.org/TStringGrid
//https://stackoverflow.com/questions/9684266/how-to-toggle-the-cell-colour-and-text-in-a-tstringgrid-on-and-off
//http://www.pp4s.co.uk/main/tu-form-stringgrid_demo.html
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

//
//function Brush_Create: TBrush; cdecl;
//begin
//  Result :=  TBrush.Create;
//end;
//
//procedure Brush_Free(AObj: TBrush); cdecl;
//begin
//  AObj.Free;
//end;
//
//procedure Brush_Assign(AObj: TBrush; Source: TPersistent); cdecl;
//begin
//  AObj.Assign(Source);
//end;
//
////function Brush_HandleAllocated(AObj: TBrush): LongBool; cdecl;
////begin
////  Result :=  AObj.HandleAllocated;
////end;
//
//function Brush_GetNamePath(AObj: TBrush): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.GetNamePath);
//end;
//
//function Brush_ClassName(AObj: TBrush): PWideChar; cdecl;
//begin
//  Result :=  ShortstrToPWideChar(AObj.ClassName);
//end;
//
//function Brush_Equals(AObj: TBrush; Obj: TObject): LongBool; cdecl;
//begin
//  Result :=  AObj.Equals(Obj);
//end;
//
//function Brush_GetHashCode(AObj: TBrush): Integer; cdecl;
//begin
//  Result :=  AObj.GetHashCode;
//end;
//
//function Brush_ToString(AObj: TBrush): PWideChar; cdecl;
//begin
//  Result :=  PWideChar(AObj.ToString);
//end;
//
//function Brush_GetBitmap(AObj: TBrush): TCustomBitmap; cdecl;
//begin
//  Result :=  AObj.Bitmap;
//end;
//
//procedure Brush_SetBitmap(AObj: TBrush; AValue: TBitmap); cdecl;
//begin
//  AObj.Bitmap := AValue;
//end;
//
//function Brush_GetHandle(AObj: TBrush): HBRUSH; cdecl;
//begin
//  Result :=  AObj.Handle;
//end;
//
//procedure Brush_SetHandle(AObj: TBrush; AValue: HBRUSH); cdecl;
//begin
//  AObj.Handle := AValue;
//end;
//
//function Brush_GetColor(AObj: TBrush): TColor; cdecl;
//begin
//  Result :=  AObj.Color;
//end;
//
//procedure Brush_SetColor(AObj: TBrush; AValue: TColor); cdecl;
//begin
//  AObj.Color := AValue;
//end;
//
//function Brush_GetStyle(AObj: TBrush): TBrushStyle; cdecl;
//begin
//  Result :=  AObj.Style;
//end;
//
//procedure Brush_SetStyle(AObj: TBrush; AValue: TBrushStyle); cdecl;
//begin
//  AObj.Style := AValue;
//end;
//
//procedure Brush_SetOnChange(AObj: TBrush; AEventId: NativeUInt); stdcall;
//begin
//  if AEventId = 0 then
//  begin
//    AObj.OnChange := nil;
//    TEventClass.Remove(AObj, geChange);
//    Exit;
//  end;
//  AObj.OnChange := TEventClass.OnChange;
//  TEventClass.Add(AObj, geChange, AEventId);
//end;
//
//
exports
  StringGrid_Create {$IFNDEF MSWINDOWS}name '_StringGrid_Create'{$ENDIF},
  StringGrid_Free {$IFNDEF MSWINDOWS}name '_StringGrid_Free'{$ENDIF},
  //StringGrid_GetParent {$IFNDEF MSWINDOWS}name '_StringGrid_GetParent'{$ENDIF},
  StringGrid_SetParent {$IFNDEF MSWINDOWS}name '_StringGrid_SetParent'{$ENDIF},
  StringGrid_SetTop {$IFNDEF MSWINDOWS}name '_StringGrid_SetTop'{$ENDIF},
  StringGrid_SetLeft {$IFNDEF MSWINDOWS}name '_StringGrid_SetLeft'{$ENDIF},
  StringGrid_Cells {$IFNDEF MSWINDOWS}name '_StringGrid_Cell'{$ENDIF};
