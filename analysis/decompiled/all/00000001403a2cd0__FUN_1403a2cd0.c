// Function: FUN_1403a2cd0
// Addr: 1403a2cd0
// Size: 228 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a2cd0(longlong param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    uVar5 = *(int *)(param_1 + 0x54) + 1;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    cVar2 = FUN_1403a4db0(param_1 + 0x50,uVar5,0);
    if (cVar2 == '\0') {
      piVar4 = (int *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f2c = DAT_14045dd18._4_4_;
      DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      _DAT_1404e4f34 = ram0x00014045dd24;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x54);
      if ((uVar1 < uVar5) && (iVar3 = (uVar5 - uVar1) * 0x1c, iVar3 != 0)) {
        FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x58),0,iVar3);
      }
      *(uint *)(param_1 + 0x54) = uVar5;
      piVar4 = (int *)((ulonglong)(uVar5 - 1) * 0x1c + *(longlong *)(param_1 + 0x58));
    }
    *piVar4 = param_2;
    piVar4[1] = *(int *)(param_1 + 0x54);
    iVar3 = 0;
    if ((param_3 & 1) != 0) {
      iVar3 = param_4;
    }
    piVar4[2] = param_4;
    piVar4[4] = iVar3;
    piVar4[3] = param_3;
    piVar4[5] = *(int *)(param_1 + 0x48);
    piVar4[6] = *(int *)(param_1 + 0x4c);
  }
  return;
}

