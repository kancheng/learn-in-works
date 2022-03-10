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
        self.setWindowTitle('Window')
        self.setGeometry(450, 450, 500, 550)

        self.mylabel = QLabel('Hello, World! OwO //', self)
        self.mylabel.setFont(QFont('Arial', 28))
        # Set Geometry
        self.mylabel.setGeometry(100, 100, 300, 160)

        self.mylabel.setStyleSheet("background-color: yellow")
        # self.mylabel.setStyleSheet("background-color: #ffff00");
        # self.mylabel.setStyleSheet("background-color: rgb(255,255,0)");

if __name__ == '__main__':
    app = QApplication(sys.argv)
    w = MyWidget()
    w.show()
    sys.exit(app.exec_())