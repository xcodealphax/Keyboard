
/*
重载虚函数PreTranslateMessage

CDialog中不响应OnKeyDown和一些相关问题:
经过仔细研究发现CDialog是相应对应消息的OnKeyDown函数的，只是这个消息在到达窗体之前，
已经被它的子控件捕获了，如果将窗体中的所有控件都删除，窗体就会捕获到这个消息，但要注意的是，
MFC为了实现在窗体上切换子控件的焦点，已经将 VK_TAB,VK_LEFT,VK_RIGHT,VK_UP,VK_DOWN进行了处理，
同时VK_RETURN也被系统捕获用来处理相应的确定事件，所以即使窗体中没控件，这几个键还是无法捕获，
暂时只能用PreTranslateMessage解决。
*/

BOOL XXXXXXXDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO:  在此添加专用代码和/或调用基类

	if (pMsg->message == WM_KEYDOWN)
	{
		switch (pMsg->wParam)//不区分大小写，大小写有状态位，ASCII值与大写一样，如按键't'为'T'
		{
		case VK_LEFT:
			break;
		case VK_RIGHT:

			break;
		case 'T':
			break;
		case VK_DOWN:
			break;
		}
	}



	return CDialogEx::PreTranslateMessage(pMsg);
}