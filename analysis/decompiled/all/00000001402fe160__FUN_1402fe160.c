// Function: FUN_1402fe160
// Addr: 1402fe160
// Size: 10 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fe160(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  undefined1 auStack_78 [32];
  int iStack_58;
  uint uStack_54;
  char cStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined3 uStack_3f;
  ulonglong uStack_38;
  
  uStack_38 = DAT_1404dc110 ^ (ulonglong)auStack_78;
  cStack_50 = '0';
  uStack_4f = _UNK_14043b419;
  uStack_4b = _UNK_14043b41d;
  uStack_47 = _UNK_14043b421;
  uStack_43 = _UNK_14043b425;
  uStack_3f = _UNK_14043b429;
  uVar2 = FUN_1404145c0();
  cVar8 = '\x01';
  if (cStack_50 != '\0') {
    pcVar3 = &cStack_50;
    cVar6 = '\0';
    iVar7 = 0;
    do {
      pcVar3 = (char *)FUN_140305a30(pcVar3,param_1,uVar2,&uStack_54);
      cVar8 = cVar6;
      iVar1 = iVar7;
      if (uStack_54 < 2) {
        piVar4 = (int *)func_0x000140414970(uVar2,&iStack_58);
        piVar5 = (int *)func_0x000140414980(uVar2,&iStack_58);
        if ((((iStack_58 != 0) && (*piVar4 != 0)) &&
            (cVar8 = '\x01', iVar1 = *piVar5, cVar6 != '\0')) &&
           (cVar8 = cVar6, iVar1 = iVar7, *piVar5 != iVar7)) {
          cVar8 = '\0';
          break;
        }
      }
      iVar7 = iVar1;
      cVar6 = cVar8;
      cVar8 = '\x01';
    } while (*pcVar3 != '\0');
  }
  func_0x0001404146b0(uVar2);
  *(char *)(param_1 + 0x28) = cVar8;
  func_0x0001402ed2f0(uStack_38 ^ (ulonglong)auStack_78);
  return;
}

