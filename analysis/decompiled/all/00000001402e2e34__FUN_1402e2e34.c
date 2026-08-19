// Function: FUN_1402e2e34
// Addr: 1402e2e34
// Size: 71 bytes


int FUN_1402e2e34(int param_1)

{
  longlong local_28;
  longlong lStack_20;
  char cStack_10;
  
  func_0x0001402bf8e8(&local_28,0);
  DAT_1404e4f68 = 0;
  if (param_1 == -2) {
    DAT_1404e4f68 = 1;
    param_1 = (*DAT_140426408)();
  }
  else if (param_1 == -3) {
    DAT_1404e4f68 = 1;
    param_1 = (*DAT_140426410)();
  }
  else if (param_1 == -4) {
    DAT_1404e4f68 = 1;
    param_1 = *(int *)(lStack_20 + 0xc);
  }
  if (cStack_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}

