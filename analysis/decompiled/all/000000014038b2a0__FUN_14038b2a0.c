// Function: FUN_14038b2a0
// Addr: 14038b2a0
// Size: 422 bytes


int * FUN_14038b2a0(int *param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  if ((char)param_1[0xf] == '\0') {
    iVar5 = *(int *)(param_2 + 0x18);
    if (iVar5 == -1) {
      lVar2 = FUN_140398a10(param_2 + 0x80);
      iVar5 = (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      *(int *)(param_2 + 0x18) = iVar5;
    }
    param_1[0xe] = iVar5;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((param_3 == 0) || (*(code **)(param_2 + 0x20) == (code *)0x0)) {
LAB_14038b310:
    piVar3 = (int *)&DAT_14045dd10;
  }
  else {
    piVar3 = (int *)(**(code **)(param_2 + 0x20))(param_2,param_3,*(undefined8 *)(param_2 + 0x28));
    if (piVar3 == (int *)0x0) goto LAB_14038b310;
  }
  if (*piVar3 != 0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = piVar3;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14040c230(param_1,0,0);
  pbVar7 = *(byte **)(param_1 + 2);
  if (pbVar7 == (byte *)0x0) {
    FUN_1403beff0(param_1);
    return piVar3;
  }
  uVar6 = param_1[6];
  pcVar4 = "OUT-OF-RANGE";
  iVar5 = 1;
  if (3 < uVar6) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar7 + 4,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                pbVar7 + 4,pbVar7,*(undefined8 *)(param_1 + 4),pcVar4);
  if (uVar6 < 4) {
    FUN_1403beff0(param_1);
LAB_14038b3d1:
    FUN_140414150(piVar3);
    return (int *)&DAT_14045dd10;
  }
  if ((uint)pbVar7[1] + (uint)*pbVar7 * 0x100 == iVar5) {
    cVar1 = FUN_1403fc670(pbVar7,param_1);
    FUN_1403beff0(param_1);
    if (cVar1 == '\0') goto LAB_14038b3d1;
  }
  else {
    FUN_1403beff0(param_1);
  }
  if ((char)piVar3[1] != '\0') {
    *(undefined1 *)(piVar3 + 1) = 0;
  }
  return piVar3;
}

