import tkinter as tk
from tkinter import ttk
from tkinter import messagebox as msg


class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('Bai Thuc Hanh Dau Tien')
        self.geometry('600x250')
        self.columnconfigure(0, weight=1)
        self.resizable(False, False)

        # yellow canvas
        canvas = tk.Canvas(self, relief=tk.SUNKEN, bg='yellow', bd=1)
        canvas.grid(row=0, column=0, pady=25, padx=25, sticky=tk.N+tk.E+tk.W)
        canvas.columnconfigure(0, weight=1)

        # text
        label1 = tk.Label(canvas, text='Lap Trinh Ung Dung Ky Thuat', bg='yellow', fg='blue').grid(
            row=0, column=0, pady=(20, 0), sticky='n')
        label2 = tk.Label(canvas, text='Version 1.0 Copyright 2020 CDT-DHSPKT TP.HCM', bg='yellow', fg='blue').grid(
            row=1, column=0, pady=(0, 20), sticky='n')

        button_thoat = ttk.Button(self, text='Thoat', width=20, command=self.button_thoat).grid(
            row=1, column=0, sticky=tk.N, ipady=10, pady=15)

    def button_thoat(self):
        tra_loi = msg.askquestion(
            'Warning', 'Ban co muon thoat khong?')
        if tra_loi == 'yes':
            self.destroy()


if __name__ == '__main__':
    app = App()
    app.mainloop()
