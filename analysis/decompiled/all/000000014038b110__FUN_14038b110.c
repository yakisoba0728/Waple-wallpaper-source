// Function: FUN_14038b110
// Addr: 14038b110
// Size: 397 bytes


int * FUN_14038b110(int *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  if ((char)param_1[0xf] == '\0') {
    iVar4 = *(int *)(param_2 + 0x18);
    if (iVar4 == -1) {
      lVar1 = FUN_140398a10(param_2 + 0x80);
      iVar4 = (uint)*(byte *)(lVar1 + 5) + (uint)*(byte *)(lVar1 + 4) * 0x100;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      *(int *)(param_2 + 0x18) = iVar4;
    }
    param_1[0xe] = iVar4;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((param_3 != 0) && (*(code **)(param_2 + 0x20) != (code *)0x0)) {
    piVar2 = (int *)(**(code **)(param_2 + 0x20))(param_2,param_3,*(undefined8 *)(param_2 + 0x28));
    if (piVar2 != (int *)0x0) goto LAB_14038b187;
  }
  piVar2 = (int *)&DAT_14045dd10;
LAB_14038b187:
  if (*piVar2 != 0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = piVar2;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14040c230(param_1,0,0);
  pbVar7 = *(byte **)(param_1 + 2);
  if (pbVar7 == (byte *)0x0) {
    FUN_1403beff0(param_1);
    return piVar2;
  }
  uVar6 = param_1[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar5 = 1;
  if (3 < uVar6) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar7 + 4,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                pbVar7 + 4,pbVar7,*(undefined8 *)(param_1 + 4),pcVar3);
  if ((3 < uVar6) && ((uint)*pbVar7 * 0x100 + (pbVar7[1] - 2) <= uVar5)) {
    FUN_1403beff0(param_1);
    if ((char)piVar2[1] != '\0') {
      *(undefined1 *)(piVar2 + 1) = 0;
    }
    return piVar2;
  }
  FUN_1403beff0(param_1);
  FUN_140414150(piVar2);
  return (int *)&DAT_14045dd10;
}

