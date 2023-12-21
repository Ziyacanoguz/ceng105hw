import tkinter as tk

def calculate(operation):
    try:
        num1 = float(entry1.get())
        num2 = float(entry2.get())

        if operation == "Addition":
            result = num1 + num2
        elif operation == "Subtraction":
            result = num1 - num2
        elif operation == "Multiplication":
            result = num1 * num2
        elif operation == "Division":
            if num2 != 0:
                result = num1 / num2
            else:
                result = "Division error"
        else:
            result = "Invalid operation"

        result_label.config(text=f"Result: {result}")
    except ValueError:
        result_label.config(text="Invalid input")

window = tk.Tk()
window.title("Calculator")

entry1 = tk.Entry(window, width=10)
entry2 = tk.Entry(window, width=10)

label1 = tk.Label(window, text="First Number:")
label2 = tk.Label(window, text="Second Number:")
result_label = tk.Label(window, text="Result:")

add_button = tk.Button(window, text="Addition", command=lambda: calculate("Addition"))
subtract_button = tk.Button(window, text="Subtraction", command=lambda: calculate("Subtraction"))
multiply_button = tk.Button(window, text="Multiplication", command=lambda: calculate("Multiplication"))
divide_button = tk.Button(window, text="Division", command=lambda: calculate("Division"))

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
