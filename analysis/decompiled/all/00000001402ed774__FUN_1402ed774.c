// Function: FUN_1402ed774
// Addr: 1402ed774
// Size: 226 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1402ed774(LPVOID param_1,SIZE_T param_2,DWORD param_3,PDWORD param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  LPVOID lpAddress;
  LPVOID pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  uint local_48 [6];
  
  puVar6 = auStack_68;
  lpAddress = (LPVOID)FUN_1402ed6e0(local_48,local_48 + 1);
  if (lpAddress == (LPVOID)0x0) {
    *param_4 = 4;
    return;
  }
  if (DAT_1404e4f18 == 0) {
    DAT_1404e4f18 = 1;
    puVar6 = auStack_68;
    if ((local_48[1] & 0x80000000) == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = auStack_60;
    }
    *(undefined8 *)(puVar6 + -8) = 0x1402ed7e5;
    FUN_1402ed648(lpAddress,*(undefined4 *)(puVar6 + 0x20));
  }
  if (param_1 == (LPVOID)0x0) {
    if (param_2 != 0) goto LAB_1402ed7f6;
LAB_1402ed826:
    param_2 = (SIZE_T)*(uint *)(puVar6 + 0x20);
  }
  else {
    puVar2 = puVar6;
    if (param_2 == 0) {
LAB_1402ed7f6:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar5 = puVar6 + 8;
      puVar6 = puVar6 + 8;
      puVar2 = puVar5;
      if (param_1 == (LPVOID)0x0) goto LAB_1402ed826;
    }
    puVar6 = puVar2;
    pvVar4 = (LPVOID)((ulonglong)*(uint *)(puVar6 + 0x20) + (longlong)lpAddress);
    if ((((pvVar4 <= lpAddress) || ((LPVOID)((longlong)param_1 + param_2) <= param_1)) ||
        (param_1 < lpAddress)) ||
       (lpAddress = param_1, pvVar4 < (LPVOID)((longlong)param_1 + param_2))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = puVar6 + 8;
      lpAddress = param_1;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x1402ed83f;
  BVar3 = VirtualProtect(lpAddress,param_2,param_3,param_4);
  if (BVar3 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
  }
  return;
}

