import platform
import tkinter as tk


BACKGROUND = "#140533"


def clear_window(window: tk.Tk) -> None:
    window.configure(background=BACKGROUND)
    window.after(16, clear_window, window)


def main() -> None:
    window = tk.Tk()
    window.title("HCICG Lab 1")
    window.geometry("800x600")
    window.resizable(False, False)

    print(f"Python {platform.python_version()} on Tk {tk.TkVersion}")
    clear_window(window)
    window.mainloop()


if __name__ == "__main__":
    main()
