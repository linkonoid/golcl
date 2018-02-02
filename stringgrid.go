package vcl

import (
	. "gitee.com/ying32/govcl/vcl/api"
	//. "gitee.com/ying32/govcl/vcl/types"
)

type TStringGrid struct {
	IControl
	instance uintptr
}

func NewStringGrid(owner IComponent) *TStringGrid {
	s := new(TStringGrid)
	s.instance = StringGrid_Create(owner.Instance())
	return s
}

func StringGridFromInst(inst uintptr) *TStringGrid {
	s := new(TStringGrid)
	s.instance = inst
	return s
}

//func StringGridFromObj(obj IObject) *TStringGrid {
//	s := new(TStringGrid)
//	s.instance = CheckPtr(obj)
//	return s
//}

func (s *TStringGrid) Free() {
	if s.instance != 0 {
		StringGrid_Free(s.instance)
	}
}

func (s *TStringGrid) Instance() uintptr {
	return s.instance
}

func (s *TStringGrid) IsValid() bool {
	return s.instance != 0
}

func (s *TStringGrid) SetParent(value IControl) {
	StringGrid_SetParent(s.instance, CheckPtr(value))
}

func (s *TStringGrid) SetTop(value int32) {
	StringGrid_SetTop(s.instance, value)
}

func (s *TStringGrid) SetLeft(value int32) {
	StringGrid_SetLeft(s.instance, value)
}

func (s *TStringGrid) Cells(col, row int32, value string) {
	StringGrid_Cells(s.instance, col, row, value)
}

//func (m *TStringGrid) Controls(Index int32) *TControl {
//	return ControlFromInst(StringGrid_GetControls(m.instance, Index))
//}

//func (m *TStringGrid) Components(AIndex int32) *TComponent {
//	return ComponentFromInst(StringGrid_GetComponents(m.instance, AIndex))
//}
