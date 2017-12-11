package main

import (
	"fmt"

	"gitee.com/ying32/govcl/vcl"
	"gitee.com/ying32/govcl/vcl/rtl"
	"gitee.com/ying32/govcl/vcl/types"
)

func main() {
	icon := vcl.NewIcon()
	icon.LoadFromResourceID(rtl.MainInstance(), 3)
	defer icon.Free()

	vcl.Application.Initialize()
	//vcl.Application.SetMainFormOnTaskBar(true)
	vcl.Application.SetIcon(icon)

	mainForm := vcl.Application.CreateForm()
	mainForm.SetCaption("LCL standart controls")
	mainForm.SetPosition(types.PoScreenCenter)
	mainForm.SetWidth(500)
	mainForm.SetHeight(700)

	var top int32 = 40

	// TButton
	btn := vcl.NewButton(mainForm)
	btn.SetParent(mainForm)
	btn.SetLeft(10)
	btn.SetTop(top)
	btn.SetCaption("Button")
	btn.SetOnClick(func(vcl.IObject) {
		fmt.Println("This Button")
		vcl.ShowMessage("This Button")
	})

	top += btn.Height() + 5

	// TEdit
	edit := vcl.NewEdit(mainForm)
	edit.SetParent(mainForm)
	edit.SetLeft(10)
	edit.SetTop(top)
	edit.SetTextHint("Edit")
	//edit.SetText("Edit")
	//edit.SetReadOnly(true)
	edit.SetOnChange(func(vcl.IObject) {
		fmt.Println("This Edit")
	})

	top += edit.Height() + 5
	// TEdit Password
	edit = vcl.NewEdit(mainForm)
	edit.SetParent(mainForm)
	edit.SetLeft(10)
	edit.SetTop(top)
	edit.SetText("Password")
	edit.SetPasswordChar('*')

	top += edit.Height() + 5

	// TLabel
	lbl := vcl.NewLabel(mainForm)
	lbl.SetParent(mainForm)
	lbl.SetLeft(10)
	lbl.SetTop(top)
	lbl.SetCaption("Label")
	lbl.Font().SetColor(255)

	top += lbl.Height() + 5

	// TCheckBox
	chk := vcl.NewCheckBox(mainForm)
	chk.SetParent(mainForm)
	chk.SetLeft(10)
	chk.SetTop(top)
	chk.SetCaption("CheckBox")
	chk.SetOnClick(func(vcl.IObject) {
		fmt.Println("checked: ", chk.Checked())
	})

	// TStatusBar
	stat := vcl.NewStatusBar(mainForm)
	stat.SetParent(mainForm)
	//stat.SetSizeGrip(false)
	spnl := stat.Panels().Add()
	spnl.SetText("StatusBar")
	spnl.SetWidth(100)

	spnl = stat.Panels().Add()
	spnl.SetText("StatusBar")
	spnl.SetWidth(80)

	// TToolBar
	tlbar := vcl.NewToolBar(mainForm)
	tlbar.SetParent(mainForm)
	tlbar.SetShowCaptions(true)

	tlbtn := vcl.NewToolButton(mainForm)
	tlbtn.SetParent(tlbar)
	tlbtn.SetCaption("ToolBar2")
	tlbtn.SetStyle(types.TbsDropDown)

	tlbtn = vcl.NewToolButton(mainForm)
	tlbtn.SetParent(tlbar)
	tlbtn.SetStyle(types.TbsSeparator)

	tlbtn = vcl.NewToolButton(mainForm)
	tlbtn.SetParent(tlbar)
	tlbtn.SetCaption("ToolBar1")

	top += chk.Height() + 5
	// TRadioButton
	rd := vcl.NewRadioButton(mainForm)
	rd.SetParent(mainForm)
	rd.SetLeft(10)
	rd.SetTop(top)
	rd.SetCaption("RadioButton1")

	var left int32 = rd.Left() + rd.Width() + 5

	rd = vcl.NewRadioButton(mainForm)
	rd.SetParent(mainForm)
	rd.SetLeft(left)
	rd.SetTop(top)
	rd.SetCaption("RadioButton2")

	top += rd.Height() + 5
	// TMemo
	mmo := vcl.NewMemo(mainForm)
	mmo.SetParent(mainForm)
	mmo.SetBounds(10, top, 167, 50)
	//mmo.Text("Memo")
	mmo.Lines().Add("Memo1")
	mmo.Lines().Add("Memo2")

	top += mmo.Height() + 5
	// TComboBox
	cb := vcl.NewComboBox(mainForm)
	cb.SetParent(mainForm)
	cb.SetLeft(10)
	cb.SetTop(top)
	cb.SetStyle(types.CsDropDownList)
	cb.Items().Add("ComboBox1")
	cb.Items().Add("ComboBox2")
	cb.Items().Add("ComboBox3")
	cb.SetItemIndex(0)
	cb.SetOnChange(func(vcl.IObject) {
		if cb.ItemIndex() != -1 {
			fmt.Println(cb.Items().Strings(cb.ItemIndex()))
		}
	})

	// TListBox
	top += cb.Height() + 5
	lst := vcl.NewListBox(mainForm)
	lst.SetParent(mainForm)
	lst.SetBounds(10, top, 167, 50)
	lst.Items().Add("ListBox1")
	lst.Items().Add("ListBox2")
	lst.Items().Add("ListBox3")

	// TPanel
	top += lst.Height() + 5
	pnl := vcl.NewPanel(mainForm)
	pnl.SetParent(mainForm)
	pnl.SetCaption("Panel")
	//    pnl.SetShowCaption(false)
	pnl.SetBounds(10, top, 167, 50)

	// TPageControl
	top += lst.Height() + 5
	pgc := vcl.NewPageControl(mainForm)
	pgc.SetParent(mainForm)
	pgc.SetBounds(10, top, 325, 135)
	pgc.SetOnChange(func(vcl.IObject) {
		fmt.Println("PageControl:", pgc.ActivePageIndex())
	})

	sheet := vcl.NewTabSheet(mainForm)
	sheet.SetPageControl(pgc)
	sheet.SetCaption("Tab1")
	btn = vcl.NewButton(mainForm)
	btn.SetParent(sheet)
	btn.SetLeft(10)
	btn.SetTop(10)
	btn.SetCaption("PControl1")

	//TStringGrid
	//strGrid := vcl.NewStringGrid(mainForm)
	//strGrid.SetParent(sheet)
	//strGrid.SetLeft(0)
	//strGrid.SetTop(0)
	//strGrid.Cells(2, 2, `test`)
	//strGrid.Cells(3, 2, `привет`)
	//strGrid.Cells(4, 2, `всем`)

	sheet = vcl.NewTabSheet(mainForm)
	sheet.SetPageControl(pgc)
	sheet.SetCaption("Tab2")
	btn = vcl.NewButton(mainForm)
	btn.SetParent(sheet)
	btn.SetLeft(10)
	btn.SetTop(10)
	btn.SetCaption("PControl2")

	sheet = vcl.NewTabSheet(mainForm)
	sheet.SetPageControl(pgc)
	sheet.SetCaption("Tab3")
	btn = vcl.NewButton(mainForm)
	btn.SetParent(sheet)
	btn.SetLeft(10)
	btn.SetTop(10)
	btn.SetCaption("PControl3")

	// TImage
	top += pgc.Height() + 5
	img := vcl.NewImage(mainForm)
	img.SetBounds(10, top, 167, 97)
	img.SetParent(mainForm)
	img.Picture().LoadFromFile("1.jpg")
	//img.SetStretch(true)
	img.SetProportional(true)

	left = 210
	top = 10
	// TTrackBar
	trkbar := vcl.NewTrackBar(mainForm)
	trkbar.SetParent(mainForm)
	trkbar.SetBounds(left, top, 167, 20)
	trkbar.SetMax(100)
	trkbar.SetMin(0)
	trkbar.SetPosition(50)

	// TProgressBar
	top += trkbar.Height() + 10
	prgbar := vcl.NewProgressBar(mainForm)
	prgbar.SetParent(mainForm)
	prgbar.SetBounds(left, top, 10, 167)
	prgbar.SetMax(100)
	prgbar.SetMin(0)
	prgbar.SetPosition(50)
	prgbar.SetOrientation(types.PbVertical)

	trkbar.SetOnChange(func(vcl.IObject) {
		prgbar.SetPosition(trkbar.Position())
	})

	top += prgbar.Height() + 10

	dtp := vcl.NewDateTimePicker(mainForm)
	dtp.SetParent(mainForm)
	dtp.SetBounds(left, top, 167, 25)
	//dtp.SetFormat("YYYY-MM-DD")

	top += dtp.Height() + 10

	vcl.Application.Run()
}