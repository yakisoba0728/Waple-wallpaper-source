// Function: FUN_1403fcc70
// Addr: 1403fcc70
// Size: 518 bytes


ulonglong FUN_1403fcc70(longlong param_1,int *param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  pcVar4 = "OUT-OF-RANGE";
  lVar1 = param_1 + 0x1c;
  pcVar2 = "OUT-OF-RANGE";
  uVar8 = lVar1 - *(longlong *)(param_2 + 2);
  uVar6 = (ulonglong)(uint)param_2[6];
  if (uVar8 <= uVar6) {
    pcVar2 = "OK";
  }
  uVar9 = *(undefined8 *)(param_2 + 4);
  uVar3 = FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        lVar1,*(longlong *)(param_2 + 2),uVar9,pcVar2);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (uVar8 <= uVar6) {
    uVar3 = FUN_140409580(param_1 + 0x10,param_2,param_1);
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_1403fdda0((ulonglong)*(byte *)(param_1 + 0x13) +
                            ((ulonglong)*(byte *)(param_1 + 0x12) +
                            (ulonglong)
                            CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)
                                    ) * 0x100) * 0x100 + param_1,param_2);
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_140409580(param_1 + 0x14,param_2,param_1);
        if ((char)uVar3 != '\0') {
          uVar3 = FUN_1403fdda0((ulonglong)*(byte *)(param_1 + 0x17) +
                                ((ulonglong)*(byte *)(param_1 + 0x16) +
                                (ulonglong)
                                CONCAT11(*(undefined1 *)(param_1 + 0x14),
                                         *(undefined1 *)(param_1 + 0x15)) * 0x100) * 0x100 + param_1
                                ,param_2);
          if ((char)uVar3 != '\0') {
            uVar5 = (uint)*(byte *)(param_1 + 0x19) * 0x10000 +
                    (uint)*(byte *)(param_1 + 0x1a) * 0x100 +
                    (uint)*(byte *)(param_1 + 0x18) * 0x1000000 + (uint)*(byte *)(param_1 + 0x1b);
            if ((((ulonglong)(uint)param_2[6] < (ulonglong)(param_1 - *(longlong *)(param_2 + 2)))
                || ((uint)(param_2[4] - (int)param_1) < uVar5)) ||
               (param_2[7] = param_2[7] - uVar5, param_2[7] < 1)) {
              cVar7 = '\0';
            }
            else {
              cVar7 = '\x01';
            }
            if (cVar7 != '\0') {
              pcVar4 = "OK";
            }
            uVar6 = 1;
            uVar3 = FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                                  (ulonglong)uVar5 + param_1,CONCAT44(uVar10,uVar5),
                                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
            if (cVar7 != '\0') {
              return uVar6 & 0xff;
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

