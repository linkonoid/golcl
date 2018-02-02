
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Canvas_Create: TCanvas; cdecl;
begin
  Result :=  TCanvas.Create;
end;

procedure Canvas_Free(AObj: TCanvas); cdecl;
begin
  AObj.Free;
end;

procedure Canvas_Arc(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer; X3: Integer; Y3: Integer; X4: Integer; Y4: Integer); cdecl;
begin
  AObj.Arc(X1, Y1, X2, Y2, X3, Y3, X4, Y4);
end;

procedure Canvas_ArcTo(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer; X3: Integer; Y3: Integer; X4: Integer; Y4: Integer); cdecl;
begin
  AObj.ArcTo(X1, Y1, X2, Y2, X3, Y3, X4, Y4);
end;

procedure Canvas_AngleArc(AObj: TCanvas; X: Integer; Y: Integer; Radius: Cardinal; var StartAngle: Single; var SweepAngle: Single); cdecl;
begin
  AObj.AngleArc(X, Y, Radius, StartAngle, SweepAngle);
end;

procedure Canvas_Chord(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer; X3: Integer; Y3: Integer; X4: Integer; Y4: Integer); cdecl;
begin
  AObj.Chord(X1, Y1, X2, Y2, X3, Y3, X4, Y4);
end;

procedure Canvas_Ellipse(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer); cdecl;
begin
  AObj.Ellipse(X1, Y1, X2, Y2);
end;

procedure Canvas_FloodFill(AObj: TCanvas; X: Integer; Y: Integer; Color: TColor; FillStyle: TFillStyle); cdecl;
begin
  AObj.FloodFill(X, Y, Color, FillStyle);
end;

function Canvas_HandleAllocated(AObj: TCanvas): LongBool; cdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Canvas_LineTo(AObj: TCanvas; X: Integer; Y: Integer); cdecl;
begin
  AObj.LineTo(X, Y);
end;

procedure Canvas_MoveTo(AObj: TCanvas; X: Integer; Y: Integer); cdecl;
begin
  AObj.MoveTo(X, Y);
end;

procedure Canvas_Pie(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer; X3: Integer; Y3: Integer; X4: Integer; Y4: Integer); cdecl;
begin
  AObj.Pie(X1, Y1, X2, Y2, X3, Y3, X4, Y4);
end;

procedure Canvas_Rectangle(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer); cdecl;
begin
  AObj.Rectangle(X1, Y1, X2, Y2);
end;

procedure Canvas_Refresh(AObj: TCanvas); cdecl;
begin
  AObj.Refresh;
end;

procedure Canvas_RoundRect(AObj: TCanvas; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer; X3: Integer; Y3: Integer); cdecl;
begin
  AObj.RoundRect(X1, Y1, X2, Y2, X3, Y3);
end;

procedure Canvas_TextExtent(AObj: TCanvas; Text: PWideChar; var Result: TSize); cdecl;
begin
  Result :=  AObj.TextExtent(Text);
end;

procedure Canvas_TextOut(AObj: TCanvas; X: Integer; Y: Integer; Text: PWideChar); cdecl;
begin
  AObj.TextOut(X, Y, Text);
end;

procedure Canvas_Lock(AObj: TCanvas); cdecl;
begin
  AObj.Lock;
end;

procedure Canvas_Assign(AObj: TCanvas; Source: TPersistent); cdecl;
begin
  AObj.Assign(Source);
end;

function Canvas_GetNamePath(AObj: TCanvas): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.GetNamePath);
end;

function Canvas_ClassName(AObj: TCanvas): PWideChar; cdecl;
begin
  Result :=  ShortstrToPWideChar(AObj.ClassName);
end;

function Canvas_Equals(AObj: TCanvas; Obj: TObject): LongBool; cdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Canvas_GetHashCode(AObj: TCanvas): Integer; cdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Canvas_ToString(AObj: TCanvas): PWideChar; cdecl;
begin
  Result :=  PWideChar(AObj.ToString);
end;

function Canvas_GetHandle(AObj: TCanvas): HDC; cdecl;
begin
  Result :=  AObj.Handle;
end;

procedure Canvas_SetHandle(AObj: TCanvas; AValue: HDC); cdecl;
begin
  AObj.Handle := AValue;
end;

function Canvas_GetBrush(AObj: TCanvas): TBrush; cdecl;
begin
  Result :=  AObj.Brush;
end;

procedure Canvas_SetBrush(AObj: TCanvas; AValue: TBrush); cdecl;
begin
  AObj.Brush := AValue;
end;

function Canvas_GetCopyMode(AObj: TCanvas): Integer; cdecl;
begin
  Result :=  AObj.CopyMode;
end;

procedure Canvas_SetCopyMode(AObj: TCanvas; AValue: Integer); cdecl;
begin
  AObj.CopyMode := AValue;
end;

function Canvas_GetFont(AObj: TCanvas): TFont; cdecl;
begin
  Result :=  AObj.Font;
end;

procedure Canvas_SetFont(AObj: TCanvas; AValue: TFont); cdecl;
begin
  AObj.Font := AValue;
end;

function Canvas_GetPen(AObj: TCanvas): TPen; cdecl;
begin
  Result :=  AObj.Pen;
end;

procedure Canvas_SetPen(AObj: TCanvas; AValue: TPen); cdecl;
begin
  AObj.Pen := AValue;
end;

procedure Canvas_SetOnChange(AObj: TCanvas; AEventId: NativeUInt); stdcall;
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


exports
  Canvas_Create {$IFNDEF MSWINDOWS}name '_Canvas_Create'{$ENDIF},
  Canvas_Free {$IFNDEF MSWINDOWS}name '_Canvas_Free'{$ENDIF},
  Canvas_Arc {$IFNDEF MSWINDOWS}name '_Canvas_Arc'{$ENDIF},
  Canvas_ArcTo {$IFNDEF MSWINDOWS}name '_Canvas_ArcTo'{$ENDIF},
  Canvas_AngleArc {$IFNDEF MSWINDOWS}name '_Canvas_AngleArc'{$ENDIF},
  Canvas_Chord {$IFNDEF MSWINDOWS}name '_Canvas_Chord'{$ENDIF},
  Canvas_Ellipse {$IFNDEF MSWINDOWS}name '_Canvas_Ellipse'{$ENDIF},
  Canvas_FloodFill {$IFNDEF MSWINDOWS}name '_Canvas_FloodFill'{$ENDIF},
  Canvas_HandleAllocated {$IFNDEF MSWINDOWS}name '_Canvas_HandleAllocated'{$ENDIF},
  Canvas_LineTo {$IFNDEF MSWINDOWS}name '_Canvas_LineTo'{$ENDIF},
  Canvas_MoveTo {$IFNDEF MSWINDOWS}name '_Canvas_MoveTo'{$ENDIF},
  Canvas_Pie {$IFNDEF MSWINDOWS}name '_Canvas_Pie'{$ENDIF},
  Canvas_Rectangle {$IFNDEF MSWINDOWS}name '_Canvas_Rectangle'{$ENDIF},
  Canvas_Refresh {$IFNDEF MSWINDOWS}name '_Canvas_Refresh'{$ENDIF},
  Canvas_RoundRect {$IFNDEF MSWINDOWS}name '_Canvas_RoundRect'{$ENDIF},
  Canvas_TextExtent {$IFNDEF MSWINDOWS}name '_Canvas_TextExtent'{$ENDIF},
  Canvas_TextOut {$IFNDEF MSWINDOWS}name '_Canvas_TextOut'{$ENDIF},
  Canvas_Lock {$IFNDEF MSWINDOWS}name '_Canvas_Lock'{$ENDIF},
  Canvas_Assign {$IFNDEF MSWINDOWS}name '_Canvas_Assign'{$ENDIF},
  Canvas_GetNamePath {$IFNDEF MSWINDOWS}name '_Canvas_GetNamePath'{$ENDIF},
  Canvas_ClassName {$IFNDEF MSWINDOWS}name '_Canvas_ClassName'{$ENDIF},
  Canvas_Equals {$IFNDEF MSWINDOWS}name '_Canvas_Equals'{$ENDIF},
  Canvas_GetHashCode {$IFNDEF MSWINDOWS}name '_Canvas_GetHashCode'{$ENDIF},
  Canvas_ToString {$IFNDEF MSWINDOWS}name '_Canvas_ToString'{$ENDIF},
  Canvas_GetHandle {$IFNDEF MSWINDOWS}name '_Canvas_GetHandle'{$ENDIF},
  Canvas_SetHandle {$IFNDEF MSWINDOWS}name '_Canvas_SetHandle'{$ENDIF},
  Canvas_GetBrush {$IFNDEF MSWINDOWS}name '_Canvas_GetBrush'{$ENDIF},
  Canvas_SetBrush {$IFNDEF MSWINDOWS}name '_Canvas_SetBrush'{$ENDIF},
  Canvas_GetCopyMode {$IFNDEF MSWINDOWS}name '_Canvas_GetCopyMode'{$ENDIF},
  Canvas_SetCopyMode {$IFNDEF MSWINDOWS}name '_Canvas_SetCopyMode'{$ENDIF},
  Canvas_GetFont {$IFNDEF MSWINDOWS}name '_Canvas_GetFont'{$ENDIF},
  Canvas_SetFont {$IFNDEF MSWINDOWS}name '_Canvas_SetFont'{$ENDIF},
  Canvas_GetPen {$IFNDEF MSWINDOWS}name '_Canvas_GetPen'{$ENDIF},
  Canvas_SetPen {$IFNDEF MSWINDOWS}name '_Canvas_SetPen'{$ENDIF},
  Canvas_SetOnChange {$IFNDEF MSWINDOWS}name '_Canvas_SetOnChange'{$ENDIF};

