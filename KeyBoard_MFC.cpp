
/*
�����麯��PreTranslateMessage

CDialog�в���ӦOnKeyDown��һЩ�������:
������ϸ�о�����CDialog����Ӧ��Ӧ��Ϣ��OnKeyDown�����ģ�ֻ�������Ϣ�ڵ��ﴰ��֮ǰ��
�Ѿ��������ӿؼ������ˣ�����������е����пؼ���ɾ��������ͻᲶ�������Ϣ����Ҫע����ǣ�
MFCΪ��ʵ���ڴ������л��ӿؼ��Ľ��㣬�Ѿ��� VK_TAB,VK_LEFT,VK_RIGHT,VK_UP,VK_DOWN�����˴���
ͬʱVK_RETURNҲ��ϵͳ��������������Ӧ��ȷ���¼������Լ�ʹ������û�ؼ����⼸���������޷�����
��ʱֻ����PreTranslateMessage�����
*/

BOOL XXXXXXXDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO:  �ڴ����ר�ô����/����û���

	if (pMsg->message == WM_KEYDOWN)
	{
		switch (pMsg->wParam)//�����ִ�Сд����Сд��״̬λ��ASCIIֵ���дһ�����簴��'t'Ϊ'T'
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