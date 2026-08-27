// Function: FUN_1403790f0
// Addr: 1403790f0
// Size: 625 bytes


undefined8 FUN_1403790f0(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  short sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 == '\0') {
    uVar4 = FUN_140400c40(param_1 + 8,param_2,0);
    return uVar4;
  }
  if (cVar2 == '\x01') {
    lVar1 = param_1 + 8;
    cVar2 = FUN_140400820(lVar1,param_2,local_res8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_1404093d0(param_1 + 0x10,param_2,lVar1);
    if ((cVar2 != '\0') &&
       (cVar2 = FUN_14038ba50((ulonglong)*(byte *)(param_1 + 0x11) +
                              (ulonglong)*(byte *)(param_1 + 0x10) * 0x100 + lVar1,param_2,0),
       cVar2 != '\0')) {
      return 1;
    }
    return 0;
  }
  if (cVar2 == '\x02') {
    uVar6 = (ulonglong)(uint)param_2[6];
    lVar1 = param_1 + 0x16;
    uVar7 = lVar1 - *(longlong *)(param_2 + 2);
    pcVar3 = "OUT-OF-RANGE";
    if (uVar7 <= uVar6) {
      pcVar3 = "OK";
    }
    FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if (uVar6 < uVar7) {
      return 0;
    }
    cVar2 = FUN_140400c40(param_1 + 8,param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    if ((ushort)((ushort)*(byte *)(param_1 + 0x11) + (ushort)*(byte *)(param_1 + 0x10) * 0x100) == 0
       ) {
      return 0;
    }
    if ((ushort)((ushort)*(byte *)(param_1 + 0x12) * 0x100 + (ushort)*(byte *)(param_1 + 0x13)) == 0
       ) {
      return 0;
    }
    sVar5 = (ushort)*(byte *)(param_1 + 0x14) * 0x100 + (ushort)*(byte *)(param_1 + 0x15);
  }
  else {
    if (cVar2 == '\x04') {
      uVar4 = FUN_1403fea20(param_1 + 8);
      return uVar4;
    }
    if (cVar2 != '\x05') {
      return 1;
    }
    uVar6 = (ulonglong)(uint)param_2[6];
    lVar1 = param_1 + 0x12;
    uVar7 = lVar1 - *(longlong *)(param_2 + 2);
    pcVar3 = "OUT-OF-RANGE";
    if (uVar7 <= uVar6) {
      pcVar3 = "OK";
    }
    FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if (uVar6 < uVar7) {
      return 0;
    }
    cVar2 = FUN_140400820(param_1 + 8,param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    sVar5 = (ushort)*(byte *)(param_1 + 0x11) + (ushort)*(byte *)(param_1 + 0x10) * 0x100;
  }
  if (sVar5 != 0) {
    return 1;
  }
  return 0;
}

