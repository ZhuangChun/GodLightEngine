#pragma once

#include "stdafx.h"
#include "GUIElement.h"

using namespace irr;
using namespace System;

namespace IrrlichtLime {
namespace GUI {

ref class GUIFont;
ref class GUIScrollBar;

public ref class GUITable : GUIElement
{
public:

	void AddColumn(String^ caption, int columnIndex);
	void AddColumn(String^ caption);

	int AddRow(int rowIndex);

	void Clear();
	void ClearRows();

	int GetCellData(int rowIndex, int columnIndex);
	String^ GetCellText(int rowIndex, int columnIndex);
	int GetColumnWidth(int columnIndex);

	void OrderRows(int columnIndex, GUIOrderingMode mode);
	void OrderRows(int columnIndex);
	void OrderRows();

	void RemoveColumn(int columnIndex);
	void RemoveRow(int rowIndex);

	void SetCellColor(int rowIndex, int columnIndex, Video::Color color);
	void SetCellData(int rowIndex, int columnIndex, int data);
	void SetCellText(int rowIndex, int columnIndex, String^ text);

	void SetColumnOrdering(int columnIndex, GUIColumnOrdering mode);
	void SetColumnWidth(int columnIndex, int width);

	void SwapRows(int rowIndexA, int rowIndexB);

	property GUIFont^ ActiveFont { GUIFont^ get(); } 
	property int ActiveColumnIndex { int get(); void set(int value); }
	property GUIOrderingMode ActiveColumnOrdering { GUIOrderingMode get(); }
	property int ColumnCount { int get(); }
	property bool DrawBackground { bool get(); void set(bool value); }
	property GUITableDrawFlag DrawFlags { GUITableDrawFlag get(); void set(GUITableDrawFlag value); }
	property GUIScrollBar^ HorizontalScrollBar { GUIScrollBar^ get(); }
	property int ItemHeight { int get(); }
	property GUIFont^ OverrideFont { GUIFont^ get(); void set(GUIFont^ value); }
	property bool ResizableColumns { bool get(); void set(bool value); }
	property int RowCount { int get(); }
	property int SelectedRowIndex { int get(); void set(int value); }
	property GUIScrollBar^ VerticalScrollBar { GUIScrollBar^ get(); }

internal:

	static GUITable^ Wrap(gui::IGUITable* ref);
	GUITable(gui::IGUITable* ref);

	gui::IGUITable* m_GUITable;
};

} // end namespace GUI
} // end namespace IrrlichtLime