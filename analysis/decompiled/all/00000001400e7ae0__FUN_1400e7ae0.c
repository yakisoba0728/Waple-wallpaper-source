// Function: FUN_1400e7ae0
// Addr: 1400e7ae0
// Size: 205 bytes


undefined8 FUN_1400e7ae0(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  
  lVar2 = *param_1;
  if (lVar2 != param_1[1]) {
    sVar3 = FUN_1400e5270(param_1[0xb],lVar2,lVar2 + 1,*(uint *)(param_1 + 0xd) >> 8 & 0xffffff01);
    if (sVar3 != 0) {
      cVar1 = *(char *)((longlong)param_1 + 0x75);
      if (cVar1 == 'W') {
        iVar4 = 0x100;
      }
      else if (cVar1 == 'S') {
        iVar4 = 0x200;
      }
      else {
        iVar4 = 0;
        if (cVar1 == 'D') {
          iVar4 = 0x400;
        }
      }
      if (param_2 != '\0') {
        FUN_1400e81e0(param_1 + 7);
        if (iVar4 != 0) {
          *(uint *)(param_1[8] + 0xc) = *(uint *)(param_1[8] + 0xc) ^ 1;
          iVar4 = 0;
        }
      }
      FUN_1400e8f70(param_1 + 7,sVar3,iVar4);
      FUN_1400e5740(param_1);
      return 1;
    }
  }
  return 0;
}

