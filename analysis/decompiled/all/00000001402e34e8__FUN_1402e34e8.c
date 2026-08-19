// Function: FUN_1402e34e8
// Addr: 1402e34e8
// Size: 292 bytes


void FUN_1402e34e8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1404dc110 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar1 = FUN_1402e2e34();
  uVar6 = 0;
  if (uVar1 != 0) {
    puVar3 = &DAT_1404dcf40;
    do {
      if (*puVar3 == uVar1) {
        func_0x000140421870(param_2 + 0x18,0,0x101);
        return;
      }
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 0xc;
    } while (uVar6 < 5);
    if ((uVar1 == 65000) || (iVar2 = (*DAT_140426418)(uVar1 & 0xffff), iVar2 == 0))
    goto LAB_1402e378a;
    if (uVar1 == 0xfde9) {
      *(undefined8 *)(param_2 + 4) = 0xfde9;
      *(undefined8 *)(param_2 + 0x220) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined2 *)(param_2 + 0x1c) = 0;
      puVar5 = (undefined2 *)(param_2 + 0xc);
      for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_1402e2f4c(param_2);
      goto LAB_1402e378a;
    }
    iVar2 = (*DAT_140426540)(uVar1,&local_48);
    if (iVar2 != 0) {
      func_0x000140421870(param_2 + 0x18,0,0x101);
      return;
    }
    if (DAT_1404e4f68 == 0) goto LAB_1402e378a;
  }
  FUN_1402e2eb4(param_2);
LAB_1402e378a:
  func_0x0001402ed2f0(local_30 ^ (ulonglong)auStack_68);
  return;
}

