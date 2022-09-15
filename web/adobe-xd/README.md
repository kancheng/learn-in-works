# web

-  Adobe XD 的官方網站：https://www.adobe.com/tw/products/xd.html

## Details

1. 更換語系 : 選單 -> Help -> Language -> 簡體中文

2. Adobe XD Bootstrap 4 UI 元件模板 : https://github.com/hexschool/Bootstrap_Adobe_XD_ui_kit

- https://github.com/kancheng/Bootstrap_Adobe_XD_ui_kit

## Note

1. 點陣、向量

- 點陣 : 像素組成，有可能會有失真問題。

- 向量 : 數學向量組成，幾何圖形。

2. RGB & CMYK

- RGB : 螢幕顯示，色光三原色，比 CMYK 廣。 0-255, 加色混合

- CMYK : 印刷輸出，印刷四色，0-100, 減色混合

3. 解析度 : 影像中的像素數，數目高則品質越好。(ppi or dpi)

- ppi : 每英吋有幾個像素，電腦顯示

- dpi : 每英吋有幾個點，印刷輸出。

- RWD : 在響應式網頁設計中，有足夠解析度的圖片是一件很重要的事情。

4. PNG vs JPG

> PNG 有較高的顏色深度，且無損壓縮。

5. 網頁設計與平面設計的差異

## Adobe XD 繁中詞彙與快捷鍵表

# 區塊分類
## 左側工具列
- **基本工具**
    - 選取工具 Select
    - 矩形工具 Rectangle
    - 圓形工具 Ellipse
    - 線段工具 Line
    - 鋼筆工具 Pen
    - 文字工具 Text
    - 畫布工具 Artboard
    - 放大鏡工具 Zoom
- **管理工具**
    - 資產 Assets
        - 標準色 Colors
        - 文字樣式 Character Styles
        - 元件 Symbols
    - 圖層 Layers
        - 設定批量匯出 Mark for Batch Export
            - 批量匯出 Batch Export 
        - 鎖定圖層 Lock 
        - 隱藏圖層 Hide


## 右側工具列
- **編輯工具**
    - 對齊 Align
    - 區塊重複 Repeat Grid
    - 布林運算（路徑管理員、形狀模式）Boolean、Pathfinder、Shape Mode
    - 座標 Position
        - 寬高
        - 座標
        - 旋轉
    - 文字內容 Text
        - 字型
        - 字級
        - 字重
        - 段落
        - 文字框樣式
        - 底線
        - 字距
        - 行距
        - 縮排
    - 外觀樣式 Appearance
        - 不透明度 Opacity
        - 圓角 Corner Radius
        - 填色 Fill
            - 實色 Solid Color
            - 線性漸層 Linear Gradient
            - 放射狀漸層 Radial Gradient
        - 筆畫 Border
            - 對齊筆畫 Stroke
            - 端點樣式 Cap
            - 邊角樣式 Join
        - 陰影 Shadow
        - 模糊 Blur
            - 背景模糊 Background Blur
            - 物件模糊 Object Blur


## 操作模式
- 設計 Design
- 原型 Prototype


## 檢視工具
- 裝置預覽 Device Preview
- 桌面預覽 Desktop Preview
- 發佈 Publish
    - 發佈原型 Publish Prototype
    - 發佈設計標註檔 Publish Design Specs
    - 管理已發佈連結 Manage Published Links
    
----------
# 常用快捷鍵
## 一般 General shortcuts
| **Result** | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| ---------- | ------------------------------ | -------------------------------- |
| 關閉 Quit    | ⌘Q                             | Alt + F4                         |

## 編輯 Keys for Edit menu
| **Menu**                                                                                       | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| ---------------------------------------------------------------------------------------------- | ------------------------------ | -------------------------------- |
| 還原 Undo                                                                                        | ⌘Z                             | Ctrl + Z                         |
| 重做 Redo                                                                                        | ⇧⌘Z                            | Ctrl + Shift + Z                 |
| 剪下 Cut                                                                                         | ⌘X                             | Ctrl + X                         |
| 複製 Copy                                                                                        | ⌘C                             | Ctrl + C                         |
| 貼上 Paste                                                                                       | ⌘V                             | Ctrl + V                         |
| 貼上樣式（外觀/互動）<br>Paste Appearance (in Design mode), and<br>Paste Interaction (in Prototype mode) | ⌥⌘V                            | Ctrl + Alt +V                    |
| 副本 Duplicate                                                                                   | ⌘D                             | Ctrl + D                         |
| 刪除 Delete                                                                                      | ⌫                              | Delete                           |
| 選擇所有 Select All                                                                                | ⌘A                             | Ctrl + A                         |
| 取消所有選擇 Deselect All                                                                            | ⇧⌘A                            | Ctrl + Shift + A                 |

## 檔案 Keys for File menu
| **Menu**                                                                                                                         | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| -------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ | -------------------------------- |
| 新增檔案 New                                                                                                                         | ⌘N                             | Ctrl + N                         |
| 開啟檔案 Open...                                                                                                                     | ⌘O                             | Ctrl + O                         |
| 關閉檔案 Close                                                                                                                       | ⌘W                             | Alt + F4                         |
| 儲存 Save...                                                                                                                       | ⌘S                             | Ctrl + S                         |
| 另存新檔 Save As...                                                                                                                  | ⇧⌘S                            | Ctrl + Shift + S                 |
| 批量匯出 Export Batch                                                                                                                | ⇧⌘E                            | Ctrl + Shift + E                 |
| 匯出選擇 Export Selected                                                                                                             | ⌘E                             | Ctrl + E                         |
| 匯出至第三方軟體<br>Export to an integrated third-party application (if an application integrated with XD is installed on your computer) | ⌥⌘E                            | Not available                    |
| 匯入 Import                                                                                                                        | ⇧⌘I                            | Ctrl + Shift + I                 |

## 路徑（布林運算）與鋼筆工具 Keys for Path/Pen
| **Menu**                        | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| ------------------------------- | ------------------------------ | -------------------------------- |
| 鋼筆工具 Switch to Pen tool         | P                              | P                                |
| 端點切換 Convert Point              | Double-click                   | Double-click                     |
| 不對稱控制點 Asymmetric Control Point | ⌥                              | Alt                              |
| Snap Control Point Angle        | ⇧                              | Shift                            |
| Snap Anchor Point Angle         | ⇧                              | Shift                            |
| 聯集 Add                          | ⌥⌘U                            | Ctrl + Alt + U                   |
| 減去上層 Subtract                   | ⌥⌘S                            | Ctrl + Alt + S                   |
| 交集 Intersect                    | ⌥⌘I                            | Ctrl + Alt + I                   |
| 差集 Exclude Overlap              | ⌥⌘X                            | Ctrl + Alt + X                   |
| 建立（文字）外框 Convert to Path        | ⌘8                             | Ctrl + 8                         |

## 物件 Keys for Object menu
| **Menu**              | **Keyboard shortcut on macOs** | **Keyboard shortcut on Windows** |
| --------------------- | ------------------------------ | -------------------------------- |
| 組成群組 Group            | ⌘G                             | Ctrl + G                         |
| 解散群組 Ungroup          | ⇧⌘G                            | Ctrl + Shift +G                  |
| 設為元件 Make Symbol      | ⌘K                             | Ctrl + K                         |
| 鎖定 Lock/Unlock        | ⌘L                             | Ctrl + L                         |
| 隱藏 Hide               | ⌘;                             | Ctrl + ;                         |
| 遮色片 Mask with Shape   | ⇧⌘M                            | Ctrl + Shift + M                 |
| 重複區塊 Make Repeat Grid | ⌘R                             | Ctrl + R                         |



----------
## 對齊 Keys for Align
| **Menu**                   | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| -------------------------- | ------------------------------ | -------------------------------- |
| 靠左對齊 Left                  | ⌃⌘←                            | Ctrl + Shift + ←                 |
| 水平置中 Center (horizontally) | ⌃⌘C                            | Shift + C                        |
| 靠右對齊 Right                 | ⌃⌘→                            | Ctrl + Shift + →                 |
| 置頂 Top                     | ⌃⌘↑                            | Ctrl +Shift + ↑                  |
| 垂直置中 Middle (vertically)   | ⌃⌘M                            | Shift + M                        |
| 置底 Bottom                  | ⌃⌘↓                            | Ctrl + Shift + ↓                 |

##  散佈 Keys for Distribute
| **Menu**        | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| --------------- | ------------------------------ | -------------------------------- |
| 水平均分 Horizontal | ⌃⌘H                            | Ctrl + Shift + H                 |
| 垂直均分 Vertical   | ⌃⌘V                            | Ctrl + Shift + V                 |



----------
## 排列 Keys for Arrange
| **Menu**            | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| ------------------- | ------------------------------ | -------------------------------- |
| 移至最前 Bring to Front | ⇧⌘]                            | Shift + Ctrl + ]                 |
| 上移一層 Bring Forward  | ⌘]                             | Ctrl + ]                         |
| 下移一層 Send Backward  | ⌘[                             | Ctrl + [                         |
| 移至最後 Send to Back   | ⇧⌘[                            | Shift + Ctrl + [                 |

## 文字 Keys for Text
| **Menu**  | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| --------- | ------------------------------ | -------------------------------- |
| 粗體 Bold   | ⌘B                             | Ctrl + B                         |
| 斜體 Italic | ⌘I                             | Ctrl + I                         |



----------
## 操作 Keys for Operations menu
| **Menu**                                                 | **Keyboard shortcut on macOS** | **Keyboard shortcut on Windows** |
| -------------------------------------------------------- | ------------------------------ | -------------------------------- |
| 從中心開始 From Center                                        | ⌥                              | Alt                              |
| 拖移複製 Copy Paste Object                                   | ⌥ Drag                         | Alt + Drag                       |
| 限制操作 Constrain                                           | ⇧                              | Shift                            |
| 編輯文字 Edit Text                                           | Enter                          | Enter                            |
| 限制角度旋轉 Constrain Rotate                                  | ⇧ (15°)                        | Shift (15°)                      |
| 限制線段角度旋轉 Line Constrain Rotate                           | ⇧ (45°)                        | Shift (45°)                      |
| 限制中心操作 Constrain From Center                             | ⇧⌥                             | Shift + Alt                      |
| 直接選取 Direct Select                                       | ⌘                              | Ctrl                             |
| 切換模式（設計/原型） <br>Switch between Design and Prototype mode | Ctrl + Tab                     | Ctrl + Tab                       |

## 物件間距 Keys for Selection command
| **Menu**                   | **Keyboard Shortcut on macOS**   | **Keyboard shortcut on Windows** |
| -------------------------- | -------------------------------- | -------------------------------- |
| 檢視物件間距 Enable measurements | Option (with an object selected) | Alt (with an object selected)    |



----------
## 工具 Keys for Tools menu
| **Menu**                     | **Keyboard shortcut on macOS**                                                                                                                                                                                                                                                                                                                                 | **Keyboard shortcut on Windows**                                                                                                                                                                                                                                                                                                                   |
| ---------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 選取工具<br>Select               | V                                                                                                                                                                                                                                                                                                                                                              | V                                                                                                                                                                                                                                                                                                                                                  |
| 矩形工具Rectangle                | R                                                                                                                                                                                                                                                                                                                                                              | R                                                                                                                                                                                                                                                                                                                                                  |
| 圓形工具<br>Ellipse              | E                                                                                                                                                                                                                                                                                                                                                              | E                                                                                                                                                                                                                                                                                                                                                  |
| 線段工具<br>Line                 | L                                                                                                                                                                                                                                                                                                                                                              | L                                                                                                                                                                                                                                                                                                                                                  |
| 鋼筆工具<br>Pen                  | P                                                                                                                                                                                                                                                                                                                                                              | P                                                                                                                                                                                                                                                                                                                                                  |
| 文字工具<br>Text                 | T                                                                                                                                                                                                                                                                                                                                                              | T                                                                                                                                                                                                                                                                                                                                                  |
| 畫布工具<br>Artboard             | A                                                                                                                                                                                                                                                                                                                                                              | A                                                                                                                                                                                                                                                                                                                                                  |
| 放大鏡工具<br>Zoom                | Enter zoom mode: Z<br><br>- Zoom in: Click anywhere in the XD canvas, or click the desired artboard. Or, marquee-select an area to zoom in.<br>- Zoom out: Option + Click<br><br>To temporarily activate zoom in and zoom out:<br><br>- Press Space + Cmd, then click or marquee select an area on the artboard to zoom in.<br>- Space + Cmd + Opt to zoom out | Enter zoom mode: Z<br><br>- Zoom in: Click anywhere in the XD canvas, or click the desired artboard. Or, marquee-select an area to zoom in.<br>- Zoom out: Alt + Click<br><br>To temporarily activate zoom in:<br><br>- Zoom in: Press Space + Ctrl, then click or marquee select an area on the artboard.<br>- Zoom out: Press Space + Ctrl + Alt |
| 縮放至所選區域<br>Zoom to Selection | ⌘3                                                                                                                                                                                                                                                                                                                                                             | Ctrl + 3                                                                                                                                                                                                                                                                                                                                           |

## 檢視 Keys for View menu
| **Menu**              | **Keyboard shortcut on macOS**                                                         | **Keyboard shortcut on Windows**                           |
| --------------------- | -------------------------------------------------------------------------------------- | ---------------------------------------------------------- |
| 放大檢視<br>Zoom In       | - ⌘+<br>- Option-Scrollwheel<br>- Option-swipe (Magic Mouse)<br>- Pinch out (trackpad) | - Ctrl + +<br>- Ctrl-Scrollwheel<br>- Pinch out (trackpad) |
| 縮小檢視<br>Zoom Out      | - ⌘-<br>- Option-Scrollwheel<br>- Option-swipe (Magic Mouse)<br>- Pinch in (trackpad)  | - Ctrl + -<br>- Ctrl-Scrollwheel<br>- Pinch in (trackpad)  |
| 符合視窗大小<br>Zoom to Fit | ⌘ 0                                                                                    | Ctrl + 0                                                   |
| 以 100% 檢視<br>100%     | ⌘ 1                                                                                    | Ctrl + 1                                                   |
| 以 200% 檢視<br>200%     | ⌘ 2                                                                                    | Ctrl + 2                                                   |
| 移動檢視範圍<br>Pan         | Spacebar                                                                               | Spacebar                                                   |
| 資產 Assets             | ⇧ ⌘ Y                                                                                  | Ctrl + Shift + Y                                           |
| 圖層 Layers             | ⌘ Y                                                                                    | Ctrl + Y                                                   |
| 顯示欄位 Show Layout Grid | ⇧ ⌘ '                                                                                  | Shift + Ctrl + '                                           |
| 顯示網格 Show Square Grid | ⌘ '                                                                                    | Ctrl + '                                                   |

## 視窗 Keys for Window menu
| **Menu**          | **Keyboard Shortcut on macOS** | **Keyboard shortcut on Windows** |
| ----------------- | ------------------------------ | -------------------------------- |
| 最大化視窗<br>Maximize |                                | WIN ↑                            |
| 最小化視窗<br>Minimize | ⌘M                             | WIN ↓                            |
| 開啟桌面預覽<br>Preview | ⌘⏎                             | Ctrl + Enter                     |

## 滾動 Keys for operation modifiers
| **Menu**               | **Keyboard Shortcut on macOS** | **Keyboard shortcut on Windows** |
| ---------------------- | ------------------------------ | -------------------------------- |
| 水平滾動<br>Horizontal Pan | Shift + Scrollwheel            | Shift + Scrollwheel              |
| 垂直滾動<br>Vertical Pan   | Scrollwheel                    | Scrollwheel                      |

## 設計標註頁面 Keys for Design Specs
| **Menu**                                                  | **Keyboard Shortcut on macOS**          | **Keyboard shortcut on Windows**        |
| --------------------------------------------------------- | --------------------------------------- | --------------------------------------- |
| 放大鏡工具<br>Zoom                                             | ⌘ + Mousewheel<br>⌘+, ⌘-                | Ctrl + Mousewheel<br>Ctrl +, Ctrl -     |
| 重設視窗縮放<br>Reset zoom                                      | ⌘0                                      | Ctrl + 0                                |
| 移動檢視範圍<br>Pan                                             | ↑, ↓, →, ←<br>Spacebar + Click-and-drag | ↑, ↓, →, ←<br>Spacebar + Click-and-drag |
| 快速移動檢視範圍<br>Faster pan                                    | Shift + ↑, ↓, →, ←                      | Shift + ↑, ↓, →, ←                      |
| 標註模式→流程檢視<br>Go from Spec view to UX flow view            | Esc                                     | Esc                                     |
| 移除物件聚焦效果<br>Remove focus from artboard in UX flow view    | Esc                                     | Esc                                     |
| 操作重疊互動效果<br>Navigate across artboards for overlay support | Shift + Click                           | Shift + Click                           |





