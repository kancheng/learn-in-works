#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import sys
from PyQt5.QtWidgets import (QApplication, QWidget, QLabel)
from PyQt5.QtGui import QFont

class MyWidget(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setWindowTitle('my window')
        self.setGeometry(150, 150, 400, 350)

        self.mylabel = QLabel('Hello, World! OwO //', self)
        self.mylabel.move(60, 50)
        self.mylabel.setFont(QFont('Arial', 28))

if __name__ == '__main__':
    app = QApplication(sys.argv)
    w = MyWidget()
    w.show()
    sys.exit(app.exec_())
