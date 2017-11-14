package main

import (
	"fmt"

	"gitee.com/ying32/govcl/vcl"
)

var (
	mainForm  *vcl.TForm
	mainForm2 *vcl.TForm
)

func main() {
	vcl.Application.Initialize()
	mainForm = vcl.Application.CreateForm()

	mainForm.SetCaption("This LCL form")
	mainForm.EnabledMaximize(true)
	mainForm.ScreenCenter()

	btn1 := vcl.NewButton(mainForm)
	btn1.SetParent(mainForm)
	btn1.SetLeft(100)
	btn1.SetTop(80)
	btn1.SetCaption("Hello_1")

	btn1.SetOnClick(func(vcl.IObject) {
		btn1.SetCaption("OK_1")
		fmt.Println("OK_1")
		vcl.ShowMessage("OK_1")
	})

	btn2 := vcl.NewButton(mainForm)
	btn2.SetParent(mainForm)
	btn2.SetLeft(100)
	btn2.SetTop(110)
	btn2.SetCaption("Hello_2")

	btn2.SetOnClick(func(vcl.IObject) {
		btn2.SetCaption("OK_2")
		fmt.Println("OK_2")
		vcl.ShowMessage("OK_2")
	})

	vcl.Application.Run()
}
