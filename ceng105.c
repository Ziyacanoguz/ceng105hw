import tkinter as tk

def calculate(operation):
    try:
        num1 = float(entry1.get())
        num2 = float(entry2.get())

        if operation == "Toplama":
            result = num1 + num2
        elif operation == "Çıkarma":
            result = num1 - num2
        elif operation == "Çarpma":
            result = num1 * num2
        elif operation == "Bölme":
            if num2 != 0:
                result = num1 / num2
            else:
                result = "Bölme hatası"
        else:
            result = "Geçersiz işlem"

        result_label.config(text=f"Sonuç: {result}")
    except ValueError:
        result_label.config(text="Geçersiz giriş")

window = tk.Tk()
window.title("Hesap Makinesi")

entry1 = tk.Entry(window, width=10)
entry2 = tk.Entry(window, width=10)

label1 = tk.Label(window, text="First Number:")
label2 = tk.Label(window, text="Second Number:")
result_label = tk.Label(window, text="Sonuç:")

add_button = tk.Button(window, text="Toplama", command=lambda: calculate("Toplama"))
subtract_button = tk.Button(window, text="Çıkarma", command=lambda: calculate("Çıkarma"))
multiply_button = tk.Button(window, text="Çarpma", command=lambda: calculate("Çarpma"))
divide_button = tk.Button(window, text="Bölme", command=lambda: calculate("Bölme"))

label1.grid(row=0, column=0)
entry1.grid(row=0, column=1)
label2.grid(row=1, column=0)
entry2.grid(row=1, column=1)

add_button.grid(row=2, column=0)
subtract_button.grid(row=2, column=1)
multiply_button.grid(row=3, column=0)
divide_button.grid(row=3, column=1)

result_label.grid(row=4, column=0, columnspan=2)

window.mainloop()

