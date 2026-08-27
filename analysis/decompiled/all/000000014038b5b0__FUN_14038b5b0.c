// Function: FUN_14038b5b0
// Addr: 14038b5b0
// Size: 490 bytes


int * FUN_14038b5b0(int *param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  if ((char)param_1[0xf] == '\0') {
    iVar6 = *(int *)(param_2 + 0x18);
    if (iVar6 == -1) {
      lVar3 = FUN_140398a10(param_2 + 0x80);
      iVar6 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      *(int *)(param_2 + 0x18) = iVar6;
    }
    param_1[0xe] = iVar6;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((param_3 == 0) || (*(code **)(param_2 + 0x20) == (code *)0x0)) {
LAB_14038b620:
    piVar4 = (int *)&DAT_14045dd10;
  }
  else {
    piVar4 = (int *)(**(code **)(param_2 + 0x20))(param_2,param_3,*(undefined8 *)(param_2 + 0x28));
    if (piVar4 == (int *)0x0) goto LAB_14038b620;
  }
  if (*piVar4 != 0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = piVar4;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14040c230(param_1,0,0);
  pbVar1 = *(byte **)(param_1 + 2);
  if (pbVar1 == (byte *)0x0) {
    FUN_1403beff0(param_1);
    return piVar4;
  }
  uVar7 = param_1[6];
  pbVar8 = pbVar1 + 0x20;
  pcVar5 = "OUT-OF-RANGE";
  if (0x1f < uVar7) {
    pcVar5 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar8,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar8,
                pbVar1,*(undefined8 *)(param_1 + 4),pcVar5);
  if (0x1f < uVar7) {
    iVar6 = (((uint)*pbVar1 * 0x100 + (uint)pbVar1[1]) * 0x100 + (uint)pbVar1[2]) * 0x100 +
            (uint)pbVar1[3];
    if (iVar6 != 0x10000) {
      if (iVar6 == 0x20000) {
        cVar2 = FUN_1404078b0(pbVar8,param_1);
        if (cVar2 != '\0') goto LAB_14038b74c;
      }
      if ((((uint)*pbVar1 * 0x100 + (uint)pbVar1[1]) * 0x100 + (uint)pbVar1[2]) * 0x100 +
          (uint)pbVar1[3] != 0x30000) goto LAB_14038b773;
    }
LAB_14038b74c:
    FUN_1403beff0(param_1);
    if ((char)piVar4[1] != '\0') {
      *(undefined1 *)(piVar4 + 1) = 0;
    }
    return piVar4;
  }
LAB_14038b773:
  FUN_1403beff0(param_1);
  FUN_140414150(piVar4);
  return (int *)&DAT_14045dd10;
}

