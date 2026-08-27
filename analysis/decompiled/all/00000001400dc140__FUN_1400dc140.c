// Function: FUN_1400dc140
// Addr: 1400dc140
// Size: 139 bytes


void FUN_1400dc140(undefined8 param_1,longlong *param_2,longlong param_3,char *param_4,char param_5)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_68 [8];
  int local_60;
  byte local_5c;
  
  uVar4 = 0;
  iVar3 = 0;
  cVar1 = *param_4;
  while ((cVar1 != -1 && (iVar3 < 0xb))) {
    iVar3 = iVar3 + 1;
    cVar1 = param_4[iVar3];
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    do {
      (**(code **)(*param_2 + 0x30))(param_2,uVar4,local_68);
      if (local_60 == 2) {
        lVar2 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        param_4[lVar2] = param_5 << 6 | local_5c;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0x18));
  }
  return;
}

