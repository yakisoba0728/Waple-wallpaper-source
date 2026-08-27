// Function: FUN_1401253c0
// Addr: 1401253c0
// Size: 126 bytes


void FUN_1401253c0(HWND param_1)

{
  int iVar1;
  DWORD idAttachTo;
  DWORD idAttach;
  HWND hWnd;
  
  hWnd = GetParent(param_1);
  iVar1 = IsWindow(hWnd);
  while (iVar1 != 0) {
    idAttachTo = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
    idAttach = GetWindowThreadProcessId(param_1,(LPDWORD)0x0);
    AttachThreadInput(idAttach,idAttachTo,0);
    hWnd = GetParent(hWnd);
    iVar1 = IsWindow(hWnd);
  }
  return;
}

